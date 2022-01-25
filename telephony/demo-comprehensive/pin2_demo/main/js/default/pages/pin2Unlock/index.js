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
import { unlockPin2Api } from '../../common/serverApi/simApi.js';

export default{
  data:{
    slotId: simObj.slotId1,
    pin2Input: '',
    showKeyboard: false,
    showLoading: false,
    red: false
  },
  onInputChange(value) {
    this.pin2Input = value.detail;
  },
  async handlerConfirm() {
    console.log('unlockPin2 btn clicked');
    let reg = /^\d{4,8}$/;
    if(!this.pin2Input.match(reg)){
      prompt.showToast({
        message: '请输入4-8位数字pin2码'
      });
      this.red = true;
      return;
    }
    this.red = false;
    try {
      let parms = {
        pin2: this.pin2Input,
        slotId: this.slotId
      };
      console.log(`unlockPin2 parms: ${JSON.stringify(parms)}`);
      let result = await unlockPin2Api(parms);

      let resultNum = result.result;
      let surplus = result.remain;
      if (Object.prototype.toString.call(result) === '[object Object]') {
        console.log(`unlockPin2 result: ${JSON.stringify(result)}`);
      }
      console.log(`resultNum: ${resultNum}`);
      console.log(`surplus: ${surplus}`);
      this.dealCallBackData(resultNum, surplus);
    } catch (ex) {
      console.log(`unlockPin2 interface error: ${ex}`);
    }
  },
  dealCallBackData(result,num) {
    switch(result) {
      case 0:
        prompt.showToast({
          message: '解锁成功'
        });
      break;
      case -1:
        prompt.showToast({
          message: '密码错误'
        });
        prompt.showToast({
          message:'您剩下可以解锁的次数有' + num
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