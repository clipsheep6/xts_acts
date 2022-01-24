// @ts-ignore
import call from '@ohos.telephony.call';
import router from '@system.router';
import {CALL_STATE} from '../default/utils/state.js'
export default {
  golbalData:{
    callId: 1000,
    callState:-1,
    callInfos:null,
  },
  onCreate() {
    call.on('callDetailsChange', (err,value) => {
      if(err){
        console.log("ObserverOn err message = " + err.message);
        return;
      }
      console.log(typeof (value));
      console.log("ObserverOn result = " + JSON.stringify(value));
      this.golbalData.callInfos= value
      this.golbalData.callId = value.callId
      this.golbalData.callState = value.callState
      console.log("this.golbalData.callInfos"+JSON.stringify(this.golbalData.callInfos))
      console.log("this.golbalData.callId"+this.golbalData.callId)
      console.log("callState:"+this.golbalData.callState)
      switch(value.callState){
        case CALL_STATE.ON_TATUS_ACTIVE:
        router.push ({
          uri:'pages/index/index', // 指定要跳转的页面
          params:{
            callState:2
          }
        })
        break;
        case CALL_STATE.ON_CALL_STATUS_HOLDIN:
        break;
        case CALL_STATE.ON_CALL_STATUS_DIALING:
        break;
        case CALL_STATE.ON_CALL_STATUS_ALERTING:
        break;
        case CALL_STATE.ON_CALL_STATUS_INCOMING:
        router.push ({
          uri:'pages/index/index', // 指定要跳转的页面
          params:{
            callState:1
          }
        })
        break;
        case CALL_STATE.ON_CALL_STATUS_WAITING:
        break;
        case CALL_STATE.ON_CALL_STATUS_DISCONNECTED:
        router.push ({
          uri:'pages/index/index', // 指定要跳转的页面
          params:{
            callState:0
          }
        })
        break;
        case CALL_STATE.ON_CALL_STATUS_DISCONNECTING:
        router.push ({
          uri:'pages/index/index', // 指定要跳转的页面
          params:{
            callState:0
          }
        })
        break;
        case CALL_STATE.ON_CALL_STATUS_IDLE:
        break;
        default:
        console.log('未知状态')
      }
    });
  },
  onDestroy() {
    console.info('AceApplication onDestroy');
  }
};
