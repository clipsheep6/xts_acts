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
import {addIccDiallingNumbersApi, updateIccDiallingNumbersApi} from '../../common/js/serverApi.js'
import {SlotObj, ContactType} from '../../utils/simInfo.js';
export default {
  data: {
    inputValue: '',
    username: '',
    telnum: '',
    currentInput: '',
    optFlag: 'add',
    diallingNumbersInfo: {}
  },
  onShow() {
    console.log(`optFlag: ${this.optFlag}`);
    console.log(JSON.stringify(this.diallingNumbersInfo));
    if (this.optFlag === 'update') {
      this.username = String(this.diallingNumbersInfo.alphaTag) || '';
      this.telnum = String(this.diallingNumbersInfo.number) || '';
    }
  },
  cellClick({detail: val}) {
    if(this.currentInput === 'username') {
      if (val === 'del') {
        this.username =  this.username.substr(0, this.username.length - 1);
        return;
      }
      if(this.username.length >= 11) {
        return;
      }
      this.username += val;
      console.log(`this.username ${this.username}`);
    } else if (this.currentInput === 'telnum') {
      if (val === 'del') {
        this.telnum =  this.telnum.substr(0, this.telnum.length - 1);
        return;
      }
      if(this.telnum.length >= 11) {
        return;
      }
      this.telnum += val;
      console.log(typeof this.telnum)
      console.log(`this.telnum ${this.telnum}`);
    }
  },
  handleInput(target, val) {
    if (val === 'del') {
      this.clearPhone(target);
      return;
    }
    target += val;
  },
  clearPhone(val) {
    val = val.substr(0, val.length - 1);
  },
  changeTarget(target) {
    this.currentInput = target;
    console.log(`currentInput: ${target}`);
  },
  save() {
    const regx = /\d{11}/;
    if (!this.username) {
      prompt.showToast({message: '请输入姓名'});
      return;
    }
    if (!this.telnum.match(regx)) {
      prompt.showToast({message: '请输入11位数字的手机号'})
    }
    console.log('save---');
    this.diallingNumbersInfo.alphaTag = this.username;
    this.diallingNumbersInfo.number = this.telnum;

    if (this.optFlag === 'add') {
      this.diallingNumbersInfo.recordNumber = 0;
      this.add(this.diallingNumbersInfo);
    } else {
      this.update(this.diallingNumbersInfo);
    }
  },
  async add(diallingNumbersInfo) {
    console.log('add');
    console.log(JSON.stringify(diallingNumbersInfo));
    try {
      const result = await addIccDiallingNumbersApi(SlotObj.slotId0,
        ContactType.GENERAL_CONTACT, diallingNumbersInfo);
      prompt.showToast({message: '保存成功'});
    } catch(ex) {
      prompt.showToast({message: `保存失败  ${ex.message}`});
    }
  },
  async update(diallingNumbersInfo) {
    console.log('update');
    console.log(JSON.stringify(diallingNumbersInfo));
    try {
      const result = await updateIccDiallingNumbersApi(SlotObj.slotId0,
        ContactType.GENERAL_CONTACT, diallingNumbersInfo);
      prompt.showToast({message: '保存成功'});
    } catch(ex) {
      prompt.showToast({message: `保存失败  ${ex.message}`});
    }
  },
}
