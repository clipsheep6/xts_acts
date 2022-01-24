import callStateObj, { CALL_STATUS_IDLE, getCallStateText } from '../../common/constant/callStateConst.js';
//import call from "@ohos.telephony.call";

export default {
  data: {
    callStateObj,
    callData: {},
    callList: [],
    isShowKeyboard: false,
    isShowDailKeyboard: true, // 显示拨号盘
    inputValue: '',
    consoleTxt: '',
    stateTxt: 'callIdle',
    dialNum: '',
    callStateTxt: {
      0: '通话中', 1: '通话保持', 2: '拨号开始', 3: '正在呼出', 4: '来电', 5: '第三方来电', 6: '挂断完成', 7: '正在挂断', 8: '空闲'
    }
  },
  computed: {
    callState() {
      const { callState } = this.callData;
      console.log('callState change computed' + new Date().getTime());
      console.log("callState callList"+JSON.stringify(this.callList))
      this.stateTxt = getCallStateText(callState);
      return callState !== undefined ? callState : CALL_STATUS_IDLE;
    }
  },
  onInit() {
    this.callData = this.$app.callData;
    this.callList = this.$app.callList;
//    this.callData = {"accountNumber":"13360512473","accountId":0,"videoState":0,"startTime":1642836852,"isEcc":false,"callType":1,"callId":2,"callState":1,"conferenceState":0}
//    this.callList = [{"accountNumber":"13360512473","accountId":0,"videoState":0,"startTime":1642836852,"isEcc":false,"callType":1,"callId":2,"callState":1,"conferenceState":0},{"accountNumber":"13312925572","accountId":0,"videoState":0,"startTime":0,"isEcc":false,"callType":1,"callId":3,"callState":1,"conferenceState":0}]
//    this.$app.callManger.addCallBack(this.onCallStateChange.bind(this));
  },
  onReady() {
    this.onCallStateChange(this.callData.callState, CALL_STATUS_IDLE);
  },
  onCallStateChange(newVal, oldVal) {
    console.log(`状态改变。。。 ${newVal}---${this.callStateTxt[newVal]}: ${Date.now()}`);
//    if (this.callData.callState === callStateObj.CALL_STATUS_WAITING || this.callData.callState === callStateObj.CALL_STATUS_INCOMING) {
//      this.isShowDailKeyboard = false;
//    }

    this.$child('contactCard').onCallStateChange(newVal, oldVal);
    let timer = setTimeout(_ => {
      const funcBtnGroupDom = this.$child('funcBtnGroup');
      if (funcBtnGroupDom && typeof funcBtnGroupDom.onCallStateChange === 'function') {
        funcBtnGroupDom.onCallStateChange(newVal, oldVal);
      }
      clearTimeout(timer);
    }, 0);
  },
  showKeyboard({ detail: bool }) {
		this.isShowKeyboard = bool;
	},
	cellClick({ detail: val }) {
		this.inputValue += val;
    this.dialNum += val;
    console.log(this.inputValue);
//		const codeBoxDom = this.$child('contactCard').$element('codeBox');
//		if (codeBoxDom) {
//			const obj = codeBoxDom.getBoundingClientRect();
//			if (obj.left < 40) {
//				this.inputValue = this.inputValue.substr(1);
//			}
//		}
	},
  clearPhone() {
    this.inputValue = this.inputValue.substr(0, this.inputValue.length - 1);
  },
  cancel() {
    this.$element('msgDialog').close();
  },
  showdail({ detail: val }) {
    console.log(val)
    this.isShowDailKeyboard = val;
  },
  cellClickDial({ detail: val }) {
    console.log('cellClickDial');
    this.dialNum += val;
    console.log(this.dialNum);
  },
  setImsMode(type){
    console.log(`type value: ${type}`);
    const typeValue = type === 3 ? 'IMS域': 'CS域';
    call.setCallPreferenceMode(0, type, (err,value) => {
      if(err){
        console.log("setCallPreferenceMode err message = " + err.message);
        prompt.showToast({
          message: `设置${typeValue}通话失败 ${err.message}`
        })
        return;
      }
      else{
        console.log(`setCallPreferenceMode value: ${value}`);
        if(!value){
          prompt.showToast({
            message: `设置${typeValue}通话成功`
          })
        }else{
          prompt.showToast({
            message: `设置${typeValue}通话失败`
          })
        }
      }
    })
  }
}
