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


import { simObj } from '../../utils/simInfo.js'
import { getSimAccountInfoApi } from '../../utils/api.js'
import prompt from '@system.prompt';

export default {
  data: {
    slotId: simObj.slotId0,
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
    }
    console.log('end call getSimAccountInfo api');
  }
}
