import CallManager from './model/CallManager.js'
import { defaultCallData } from './common/constant/callStateConst.js'

export default {
  callData: { ...defaultCallData },
  callList: [],
  callTimeList: [],
  onCreate() {
    this.callManger = new CallManager(this.callData, this.callList);
  },
  onDestroy() {
    //		this.callTimeList.forEach(item => item.timer && clearInterval(item.timer));
  }
};
