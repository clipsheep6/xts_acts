import { simObj } from '../../utils/simInfo.js'
import { getSimAccountInfoApi } from '../../utils/api.js'
import prompt from '@system.prompt';

export default {
  data: {
    slotId: simObj.slotId_0,
    simId: '',
    slotIndex: '',
    isEsim: '',
    isActive: '',
    iccId: '',
    showName: '',
    showNumber: '',
    showLoading: false,
  },
  onInit() {

  },
  onShow() {
    this.getSimAccountInfo();
  },
  showToast(message) {
    setTimeout(() => {
      prompt.showToast({message});
    }, 200);

  },
  async getSimAccountInfo() {
    this.showLoading = true;
    try {
      console.log('begin call getSimAccountInfo api');
      const res = await getSimAccountInfoApi(this.slotId);
      this.showLoading = false;
      console.log(`getSimAccountInfo res: ${JSON.stringify(res)}`);
      this.simId = res.simId;
      this.slotIndex = res.slotIndex;
      this.isEsim = res.isEsim;
      this.isActive = res.isActive;
      this.iccId = res.iccId;
      this.showName = res.showName;
      this.showNumber = res.showNumber;

      this.showToast('获取sim用户信息成功');
    } catch (ex) {
      this.showLoading = false;
      console.log(`getSimAccountInfo api exception: ${ex}`);
      this.showToast(`获取sim用户信息失败: ${ex.message}`);
//      prompt.showToast({message: `获取sim用户信息失败: ${ex.message}`});
    }
    console.log('end call getSimAccountInfo api');
  }
}
