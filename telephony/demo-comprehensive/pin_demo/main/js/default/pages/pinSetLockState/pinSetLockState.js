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
import { setLockStateApi } from '../../common/serverApi/simApi.js';

export default {
  data: {
    slotId: simObj.slotIdMajor,
    pinInput: '',
    showKeyboard: false,
    enable: 1,
    showLoading: false,
    red: false
  },
  onInputChange(value) {
    this.pinInput = value.detail;
  },
  onRadioChange(inputValue, e) {
    this.enable = e.value;
  },
  async handlerConfirm() {
    console.log('setLockState btn clicked');
    let reg = /^\d{4,8}$/;
    if (!this.pinInput.match(reg)) {
      prompt.showToast({
        message: '请输入4-8位数字的pin码'
      });
      this.red = true;
      return;
    }
    this.red = false;
    try {
      let parms = {
        slotId: this.slotId,
        lockType: 1,
        password: this.pinInput,
        state: +this.enable,
      };
      console.log(`setLockState parms: ${JSON.stringify(parms)}`);
      let result = await setLockStateApi(parms);

      let resultNum = result.result;
      let surplus = result.remain;
      if (Object.prototype.toString.call(result) === '[object Object]') {
        console.log(`setLockState result: ${JSON.stringify(result)}`);
      }
      console.log(`resultNum: ${resultNum}`);
      console.log(`surplus: ${surplus}`);
      this.dealCallBackData(resultNum, surplus);
    } catch (ex) {
      this.showLoading = false;
      console.log(`setLockState interface error: ${ex}`);
    }
  },
  dealCallBackData(result, num) {
    switch (result) {
      case 0:
        prompt.showToast({
          message: '操作成功'
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
