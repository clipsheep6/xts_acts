import prompt from '@system.prompt'
import radio from '@ohos.telephony.radio';
import {netSet} from '../../common/utils/common.js'
export default {
  data: {
    flightMode: true,
    choiceValue:0
  },
  onShow(){
    this.getAirplaneMode()
    this.getPreferenceModel()
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
    if(e.checked){
      this.setRadioClose()
    }else{
      this.setRadioOpen()
    }
  },
  //  获取优选模式
  getPreferenceModel(){
    try{
      radio.getPreferredNetwork(0).then((data) => {
        console.log("data.getPreferredNetworkMode = " + data)
        //        根据返回的东西去匹配网络制式
        this.choiceValue = data
      }).catch((error) => {
        console.log("error.data.getPreferredNetworkMode = " + error)
      });
    }catch(err){
      console.log(err+"获取优选错误")
    }
  },
  choiceModel(string){
    this.choiceValue = string
    this.setPreferenceModel(this.choiceValue)
  },
  //设置优选模式为CDMA模式
  setPreferenceModel(mode){
    let newModel =  Number(mode)
    try{
      radio.setPreferredNetwork(0,newModel,(err) => {
        if(err){
          console.log("data.setPreferredNetworkMode = "+ err);
          return;
        }
        console.log("data.setPreferredNetwork success setPreferredNetworkMode success");
      });
    }catch(err){
      console.log(err+"设置优选错误")
    }
  }
}
