import sms from '@ohos.telephony.sms'
import radio from '@ohos.telephony.radio';
import router from '@system.router';
import prompt from '@system.prompt'
import {simObj} from '../../util/soltId.js'
export default{
  data:{
    recipientPerson:'',
    selectData:[
      {id:0,text:'发送数字'},
      {id:1,text:'发送英文'},
      {id:2,text:'发送特殊字符'},
      {id:3,text:'发送中文'},
      {id:4,text:'发送长文本'}
    ],
    userInput:'',
    showKeyboard:false,
    keyboardValue: '',
    switchOn:false,
    openKeyWord:true,
    flightMode: true,
    choiceValue:1,//1GSM 7 CDMA
  },
  onShow(){
    // 获取飞行模式状态
    this.getAirplaneMode();
    this.getPreferenceModel() //获取网络制式
  },
  //清除文本框内容
  clearText(){
    this.userInput = ''
  },
  setProcess(num){
    this.recipientPerson += num
  },
  delNum(){
    this.recipientPerson = this.recipientPerson.substr(0,this.recipientPerson.length-1)
  },
  openCloseKeyWord(){
    this.openKeyWord = !this.openKeyWord
  },
  // 发送接口
  sendMsgInterface(data){
    console.log("send-data"+data)
    if(!this.recipientPerson){
      prompt.showToast({
        message: '请输入收件人'
      })
      return
    }
    if(!this.flightMode){
      prompt.showToast({
        message: "请关闭掉飞行模式再发送短信"
      });
      return false
    }
    console.log('执行到了这里了吗？')
    try{
      console.log("sendMessage-start:"+new Date().getTime())
      sms.sendMessage({
        slotId:simObj.slotId_major,
        destinationHost:this.recipientPerson,
        content:data,
        sendCallback : (err,result) => {
          if(err){
            prompt.showToast({
              message: '发送失败'
            })
            console.log("send text msg error cause : " + err.message);
            return;
          }
          console.log("send text to short message center result = " + result.result)
          console.log("send text-time-data"+data+new Date().getTime())
          let dataNumber = result.result
          this.dealCallBackFun(dataNumber)
        },
        deliveryCallback : (err, pdu) => {
          if(err){
            console.log("deliveryCallback err"+err)
          }
          console.log("deliveryCallback pdu"+pdu)
        }
      });
    }catch(err){
      console.log(err+"catch")
      prompt.showToast({
        message: '发送失败'
      })
    }
  },
  //  处理用户选择按钮得函数
  dealSelect(state){
    switch(state){
      case simObj.select_send_number:
        this.sendMsgContent(simObj.NUMBER_CONTENT);
        break;
      case simObj.select_send_english:
        this.sendMsgContent(simObj.ENGLISH_CONTENT);
        break;
      case simObj.select_send_special:
        this.sendMsgContent(simObj.SPECIAL_CONTENT);
        break;
      case simObj.select_send_chinese:
        this.sendMsgContent(simObj.CHINESE_CONTENT);
        break;
      case simObj.select_send_longText:
        this.sendMsgContent(simObj.LONGTEXT_CONTENT);
        break;
      default:
        prompt.showToast({
          message: '未知类型错误'
        })
    }
  },
  //  处理用户选择按钮之后展示在输入框的选项
  setUserInputShow(content){
    this.userInput = content
  },
  // 处理返回函数返回得结果
  dealCallBackFun(number){
    console.log("dealCallBackFun-number"+number)
    switch(number){
      case simObj.SEND_SMS_SUCCESS:
        prompt.showToast({
          message: '短信成功发送到了短信服务中心'
        })
        break;
      case simObj.SEND_SMS_FAILURE_UNKNOWN:
        prompt.showToast({
          message: '表示短信未发送到短信服务中心，失败原因未知'
        })
        break;
      case simObj.SEND_SMS_FAILURE_RADIO_OFF:
        prompt.showToast({
          message: '短信未发送到短信服务中心，失败原因是无线模块已关闭'
        })
        break;
      case simObj.SEND_SMS_FAILURE_SERVICE_UNAVAILABLE:
        prompt.showToast({
          message: '短信未发送到短信服务中心，失败原因是网络不可用'
        })
        break;
      default:
        prompt.showToast({
          message: '未知状态'
        })
    }
  },
  //  用户选择了发送那种类型
  userSelect(item){
    const id = item.id
    this.dealSelect(id)
  },
  sendMsgContent(content) {
    this.setUserInputShow(content);
    this.sendMsgInterface(content);
  },
  // 获取当前是否是飞行模式
  getAirplaneMode(){
    const radioState = radio.isRadioOn()
    radioState.then((data) => {
      console.log("data.isRadioOn = " + data)
      this.flightMode = data
    }).catch((error) => {
      console.log("error.data.isRadioOn = " + error)
    });
  },
  // 关闭飞行模式
  setRadioOpen(){
    const radioTurnOn = radio.turnOnRadio()
    radioTurnOn.then((data) => {
      console.log("data.turnOnRadio success ")
      prompt.showToast({
        message: '关闭飞行模式成功'
      })
      this.getAirplaneMode()
    }).catch((error) => {
      prompt.showToast({
        message: '关闭飞行模式失败'
      })
      console.log("error.data.turnOnRadio = " + error)
    });
  },
  // 打开飞行模式
  setRadioClose(){
    const radioTurnOff = radio.turnOffRadio()
    radioTurnOff.then((data) => {
      console.log("data.turnOnRadio success")
      this.getAirplaneMode()
      prompt.showToast({
        message: '开启飞行模式成功'
      })
    }).catch((error) => {
      prompt.showToast({
        message: '开启飞行模式失败'
      })
      console.log("error.data.turnOnRadio = " + error)
    });
  },
  // 切换飞行模式按钮
  switchChange(e){
    this.userInput = ''
    if(e.checked){
      prompt.showToast({
        message: "打开开关"
      });
      this.setRadioClose()
    }else{
      prompt.showToast({
        message: "关闭开关"
      });
      this.setRadioOpen()
    }
  },
  //  获取优选模式
  getPreferenceModel(){
    try{
      radio.getPreferredNetwork(0).then((data) => {
        console.log("data.getPreferredNetworkMode = " + data)
        //        根据返回的东西去匹配网络制式
        this.matchNetworkModel(data)
      }).catch((error) => {
        console.log("error.data.getPreferredNetworkMode = " + error)
      });
    }catch(err){
      console.log(err+"获取优选错误")
    }
  },
  matchNetworkModel(data){
    switch(data){
      case simObj.GSM_MODEL:
        this.choiceValue = 1
        break;
      case simObj.CDMA_MODEL:
        this.choiceValue = 7
      default:
        this.choiceValue = 1
    }
  },
  //设置优选模式为CDMA模式
  setPreferenceModel(mode){
    let newMode = Number(mode)
    console.log(typeof newMode + 'newMode')
    this.choiceValue = mode
    try{
      radio.setPreferredNetwork(0,newMode).then((data) => {
        console.log("data.setPreferredNetworkMode success "+data)
      }).catch((error) => {
        console.log("error.data.setPreferredNetworkMode = " + error)
      });
    }catch(err){
      console.log(err+"设置优选错误")
    }
  }
}