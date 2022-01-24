import router from '@system.router';
import prompt from '@system.prompt';
import { simObj, SimStateObj } from '../../utils/slotInfo.js';
import { getSimStateApi } from '../../common/serverApi/simApi.js';

export default {
  data: {
    slotId: simObj.slotId_major,
    simState: '',
    lists: []
  },
  onShow() {
    this.lists = [
      {icon: '/common/images/unlock.png', title: '解锁Pin', action: 'goPinUnlock', goUri: true},
      {icon: '/common/images/modify.png', title: '修改Pin', action: 'goPinModify', goUri: true},
      {icon: '/common/images/lock1.png', title: '解锁Puk', action: 'goPukUnlock', goUri: true},
      {icon: '/common/images/pin.png', title: '打开/关闭Pin', action: 'goPinSetLockState', goUri: true},
      {icon: '/common/images/sim.png', title: '获取sim卡状态', action: 'getCurrentSimState', goUri: false},
    ]
    this.getSimStatePromise();
  },
  handleAction(action) {
    this[action]();
  },
  goPinUnlock() {
    router.push({
      uri: 'pages/pinUnlock/pinUnlock'
    })
  },
  goPinModify() {
    router.push({
      uri: 'pages/pinModify/pinModify'
    });
  },
  goPukUnlock() {
    router.push({
      uri: 'pages/pukUnlock/pukUnlock'
    });
  },
  goPinSetLockState() {
    router.push({
      uri: 'pages/pinSetLockState/pinSetLockState'
    });
  },
  // 获取sim状态
  getCurrentSimState() {
    console.log('btn clicked getStatePromise');
    this.getSimStatePromise();
  },
  async getSimStatePromise() {
    try {
      let value = await getSimStateApi(this.slotId);
      prompt.showToast({
        message: '获取sim卡状态成功'
      });
      console.log(`getSimStatePromise simState = ${value}`);
      this.simState = SimStateObj[value];
      console.log(SimStateObj[value]);
    } catch (ex) {
      prompt.showToast({
        message: '获取sim卡状态出错'
      });
      console.log(`getSimStatePromise interface error: ${ex}`);
    }
  }
}
