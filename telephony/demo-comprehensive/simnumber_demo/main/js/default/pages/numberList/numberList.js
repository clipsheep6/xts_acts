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
import router from '@system.router';
import {
  queryIccDiallingNumbersApi,
  delIccDiallingNumbersApi,
  updateIccDiallingNumbersApi
} from '../../common/js/serverApi.js'
import {SlotObj, ContactType} from '../../utils/simInfo.js';

export default {
  data: {
    list: []
  },
  onShow() {
    this.getNumberList();
  },
  async getNumberList() {
    console.log('getNumberList click');
    try {
      const result = await queryIccDiallingNumbersApi(SlotObj.slotId0, ContactType.GENERAL_CONTACT);
      this.list = result;
      prompt.showToast({message: '获取成功'});
    } catch(ex) {
      prompt.showToast({message: `获取失败: ${ex.message}`});
    }
  },
  goUpdate(item) {
    console.log('update');
    console.log(JSON.stringify(item));
    router.push({
      uri: 'pages/add/add',
      params: {
        diallingNumbersInfo: item,
        optFlag: 'update'
      }
    })
  },
  async update(item) {
    console.log('update');
    console.log(JSON.stringify(item));
    let numInfo = {
      ...item
    }
    numInfo.alphaTag = numInfo.alphaTag + new Date().getTime();
    try {
      const result = await updateIccDiallingNumbersApi(SlotObj.slotId0, ContactType.GENERAL_CONTACT, numInfo);
      prompt.showToast({message: '更新成功'});
    } catch(ex) {
      prompt.showToast({message: `更新失败  ${ex.message}`});
    }
  },
  async del(item) {
    console.log(JSON.stringify(item));
    try {
      const result = await delIccDiallingNumbersApi(SlotObj.slotId0, ContactType.GENERAL_CONTACT, item);
      prompt.showToast({message: '删除成功'});
      this.getNumberList();
    } catch(ex) {
      prompt.showToast({message: `删除失败  ${ex.message}`});
    }
  }
}
