/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


import prompt from '@system.prompt';
import { simObj } from '../../utils/slotInfo.js';
import { alterPinApi } from '../../common/serverApi/simApi.js';

export default {
  data: {
    slotId: simObj.slotIdMajor,
    newPinInput: '',
    oldPinInput: '',
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
    this.inputValue = this.oldPinInput;
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
        this.oldPinInput = value.detail;
        this.inputValue = this.oldPinInput;
        break;
      default:
        this.oldPinInput = '';
        this.newPinInput = '';
        this.inputValue = '';
        break;
    }
  },
  async handlerConfirm() {
    let reg = /^\d{4,8}$/;
    console.log('alterPin btn clicked');
    if (!this.newPinInput.match(reg)) {
      this.red = true;
      prompt.showToast({
        message: '请输入新的4-8位数字pin码'
      });
      return;
    }
    this.red = false;

    if (!this.oldPinInput.match(reg)) {
      this.red2 = true;
      prompt.showToast({
        message: '请输入旧的4-8位数字pin码'
      });
      return;
    }
    this.red2 = false;
    try {
      let parms = {
        newPin: this.newPinInput,
        oldPin: this.oldPinInput,
        slotId: this.slotId
      }
      console.log(`alterPin parms: ${JSON.stringify(parms)}`);
      let result = await alterPinApi(parms);

      let resultNum = result.result;
      let surplus = result.remain;
      if (Object.prototype.toString.call(result) === '[object Object]') {
        console.log(`alterPin result: ${JSON.stringify(result)}`);
      }
      console.log(`resultNum: ${resultNum}`);
      console.log(`surplus: ${surplus}`);
      this.dealCallBackData(resultNum, surplus);
    } catch (ex) {
      this.showLoading = false;
      console.log(`alterPin interface error: ${ex}`);
    }
  },
  dealCallBackData(result, num) {
    switch (result) {
      case 0:
        prompt.showToast({
          message: '修改成功'
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
