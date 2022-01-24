import sms from '@ohos.telephony.sms'
import router from '@system.router';
import prompt from '@system.prompt';
import {smsState} from '../../util/constantAdd.js';
import {simObj} from '../../util/soltId.js';
export default {
  data: {
    smsStateArr:[],
    currentIndex:0,
    smscText:'',
    firstContent:[],
    secondContent:[],
    thirdContent:[],
    fourthContent:[],
    tabContentIndex:0,
    selectedPdu:'',
    showLoading: false
  },
  onShow(){
    this.smsStateArr = smsState
    this.dealStateFun()
  },
  changeTab(e){
    let index = e.index
    this.currentIndex = index
    this.tabContentIndex = index == 0 ? true:false
    this.selectedPdu = ''
    this.tabPduDeal(index)
  },
  dealStateFun(){
    smsState.forEach((item,index)=>{
      switch(index){
        case 0:
          this.firstContent = smsState[index].pduArrs
          break;
        case 1:
          this.secondContent = smsState[index].pduArrs
          break;
        case 2:
          this.thirdContent = smsState[index].pduArrs
          break;
        case 3:
          this.fourthContent = smsState[index].pduArrs
          break;
        default:
      }
    })
  },
  //添加按钮
  addPduMsg(){
    if(!this.selectedPdu){
      prompt.showToast({
        message:'请选择pdu',
        duration: 3000,
      });
      return
    }
    let currentIns = this.dealStatus(this.currentIndex);
    let options ={
      slotId : simObj.slotId_major,
      smsc : this.smscText,
      pdu : this.selectedPdu,
      status :currentIns,
    }
    console.log('addPduMsg options: ' + JSON.stringify(options))
//    this.showLoading = true;
    sms.addSimMessage(options,(err,result)=>{
      this.showLoading = false;
      if(err){
        prompt.showToast({
          message: '添加失败'
        })
        console.log("addSimMessage err"+err)
        return
      }else{
        console.log("addSimMessage result"+result)
        if(!result){
          prompt.showToast({
            message: '添加成功'
          })
          this.getAllMsg()
        }else{
          prompt.showToast({
            message: '添加失败'
          })
        }
      }
    })
  },
  completeEvent(name,itemId){
    let listData = []
    switch(name){
      case 'firstContent':
        listData = this.firstContent
        break;
      case 'secondContent':
        listData = this.secondContent
        break;
      case 'thirdContent':
        listData = this.thirdContent
        break;
      case 'fourthContent':
        listData = this.fourthContent
        break;
      default:
    }
    let id = itemId
    for(var  i of  listData){
      if(i.id==id){
        if(i.img == './common/images/select.png'){
          i.img = './common/images/selected.png'
          this.selectedPdu = i.value
        }else{
          i.img = './common/images/select.png'
        }
      }
      else{
        i.img = './common/images/select.png'
      }
    }
  },
//  切换之后处理pdu的选中问题
  tabPduDeal(index){
    switch(index){
      case 0:
        this.firstContent.map((item,index)=>{
          return item.img = './common/images/select.png'
        })
        break;
      case 1:
      this.secondContent.map((item,index)=>{
        return item.img = './common/images/select.png'
      })
      break;
      case 2:
      this.thirdContent.map((item,index)=>{
        return item.img = './common/images/select.png'
      })
      break;
      case 3:
      this.fourthContent.map((item,index)=>{
        return item.img = './common/images/select.png'
      })
      break;
      default:
    }
  },
//  处理即将修改的状态
  dealStatus(num){
   switch(num){
     case 0: // 未读
       return 3
       break;
     case 1:
       return 1
       break;
     case 2: // 未发送
       return 7
       break;
     case 3:
       return 5
       break;
     default:
     return 0;
   }
  },
}
