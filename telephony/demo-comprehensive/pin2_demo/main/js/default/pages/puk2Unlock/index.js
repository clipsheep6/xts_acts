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
import { unlockPuk2Api } from '../../common/serverApi/simApi.js';

export default{
  data:{
    slotId: simObj.slotId1,
    newPin2Input: '',
    puk2Input: '',
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
    this.inputValue = this.newPin2Input;
  },
  // 下一步
  handlerNext() {
    let reg = /^\d{4,8}$/;
    if (!this.newPin2Input.match(reg)) {
      this.red = true;
      prompt.showToast({
        message: '请输入新的4-8位数字pin2码'
      });
      return;
    }
    this.inputValue = this.puk2Input;
    this.red = false;
    this.step = 2;
  },
  onInputChange(value) {
    switch (this.step) {
      case 1:
        this.newPin2Input = value.detail;
        this.inputValue = this.newPin2Input;
      break;
      case 2:
        this.puk2Input = value.detail;
        this.inputValue = this.puk2Input;
      break;
      default:
        this.newPin2Input = '';
        this.puk2Input = '';
        this.inputValue = '';
        break;
    }
  },
  async handlerConfirm(){
    console.log('unlockPuk2 btn clicked')
    let reg = /^\d{4,8}$/
    if(!this.newPin2Input.match(reg)){
      prompt.showToast({
        message: '请输入新的4-8位数字pin2码'
      })
      this.red = true;
      return;
    }
    this.red = false;
    if(!this.puk2Input.match(reg)){
      prompt.showToast({
        message: '请输入的4-8位数字puk2码'
      })
      return;
    }
    try{
      let parms = {
        newPin2: this.newPin2Input,
        puk2: this.puk2Input,
        slotId: this.slotId
      }
      console.log(`unlockPuk2 parms: ${JSON.stringify(parms)}`);
      let result = await unlockPuk2Api(parms);

      let resultNum = result.result;
      let surplus = result.remain;
      if (Object.prototype.toString.call(result) === '[object Object]') {
        console.log(`unlockPuk2 result: ${JSON.stringify(result)}`);
      }
      console.log(`resultNum: ${resultNum}`);
      console.log(`surplus: ${surplus}`);
      this.dealCallBackData(resultNum, surplus);
    } catch (ex) {
      console.log(`unlockPuk2 interface error ${ex}`);
    }
  },
  dealCallBackData(result,num){
    switch(result){
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