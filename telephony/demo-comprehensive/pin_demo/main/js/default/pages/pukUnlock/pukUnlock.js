import prompt from '@system.prompt';
import { simObj } from '../../utils/slotInfo.js';
import { unlockPukApi } from '../../common/serverApi/simApi.js';

export default {
  data: {
    slotId: simObj.slotId_major,
    newPinInput: '',
    pukInput: '',
    showKeyboard: false,
    showLoading: false,
    red: false,
    red2: false,
    step: 1,
    inputValue: ''
  },
// 上一步
  handlerPrevious() {
    this.step = 1;
    this.inputValue = this.newPinInput;
  },
// 下一步
  handlerNext() {
    let reg = /^\d{4,8}$/;
    if (!this.newPinInput.match(reg)) {
      this.red = true;
      prompt.showToast({
        message: '请输入新的4-8位数字pin码'
      });
      return;
    }
    this.inputValue = this.pukInput;
    this.red = false;
    this.step = 2;
  },
  onInputChange(value) {
    switch (this.step) {
      case 1:
        this.newPinInput = value.detail;
        this.inputValue = this.newPinInput;
        break;
      case 2:
        this.pukInput = value.detail;
        this.inputValue = this.pukInput;
        break;
      default:
        this.pukInput = '';
        this.newPinInput = '';
        this.inputValue = '';
        break;
    }
  },
  async handlerConfirm() {
    console.log('unlockPuk btn clicked');
    let reg = /^\d{4,8}$/;
    if (!this.newPinInput.match(reg)) {
      prompt.showToast({
        message: '请输入新的4-8位数字pin码'
      });
      this.red = true;
      return;
    }
    this.red = false;
    if (!this.pukInput.match(reg)) {
      prompt.showToast({
        message: '请输入4-8位数字的puk码'
      })
      this.red2 = true;
      return;
    }
    this.red2 = false;
//    this.showLoading = true;
    try {
      let parms = {
        newPin: this.newPinInput,
        puk: this.pukInput,
        slotId: this.slotId
      }
      console.log(`unlockPuk parms: ${JSON.stringify(parms)}`);
      let result = await unlockPukApi(parms);

      let resultNum = result.result;
      let surplus = result.remain;
      if (Object.prototype.toString.call(result) === '[object Object]') {
        console.log(`unlockPuk result: ${JSON.stringify(result)}`);
      }
      console.log(`resultNum: ${resultNum}`);
      console.log(`surplus: ${surplus}`);
      this.dealCallBackData(resultNum, surplus);
    } catch (ex) {
      this.showLoading = false;
      console.log(`unlockPuk interface error: ${ex}`);
    }
  },
  dealCallBackData(result, num) {
    switch (result) {
      case 0:
        prompt.showToast({
          message: '解锁成功'
        });
        break;
      case -1:
        prompt.showToast({
          message: '密码错误'
        })
        prompt.showToast({
          message: '您剩下可以解锁的次数有' + num
        });
        break;
      case -2:
        prompt.showToast({
          message: '卡异常'
        });
        break;
      default:
        prompt.showToast({
          message: '未知异常'
        });
        break;
    }
  }
}
