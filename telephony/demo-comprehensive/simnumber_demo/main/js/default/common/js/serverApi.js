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


import sim from '@ohos.telephony.sim'

// 查询联系人列表
export const queryIccDiallingNumbersApi = (slotId, type) => {
  console.log('begin queryIccDiallingNumbersApi');
  return new Promise((resolve, reject) => {
    sim.queryIccDiallingNumbers(slotId, type).then(res => {
      console.log(`queryIccDiallingNumbers api then res: ${JSON.stringify(res)}`);
      resolve(res);
    }).catch(err => {
      console.log(`queryIccDiallingNumbers api error: ${JSON.stringify(err)}`);
      reject(err);
    })
  });
}
// 新增联系人
export const addIccDiallingNumbersApi = (slotId, type, diallingNumbersInfo) => {
  return new Promise((resolve, reject) => {
    sim.addIccDiallingNumbers(slotId, type, diallingNumbersInfo).then(res => {
      console.log(`addIccDiallingNumbers api then res: ${JSON.stringify(res)}`);
      resolve(res);
    }).catch(err => {
      console.log(`addIccDiallingNumbers api error: ${JSON.stringify(err)}`);
      reject(err);
    })
  });
}
// 删除联系人
export const delIccDiallingNumbersApi = (slotId, type, diallingNumbersInfo) => {
  return new Promise((resolve, reject) => {
    sim.delIccDiallingNumbers(slotId, type, diallingNumbersInfo).then(res => {
      console.log(`delIccDiallingNumbers api then res: ${JSON.stringify(res)}`);
      resolve(res);
    }).catch(err => {
      console.log(`delIccDiallingNumbers api error: ${JSON.stringify(err)}`);
      reject(err);
    })
  });
}
// 修改联系人
export const updateIccDiallingNumbersApi = (slotId, type, diallingNumbersInfo) => {
  return new Promise((resolve, reject) => {
    sim.updateIccDiallingNumbers(slotId, type, diallingNumbersInfo).then(res => {
      console.log(`updateIccDiallingNumbers api then res: ${JSON.stringify(res)}`);
      resolve(res);
    }).catch(err => {
      console.log(`updateIccDiallingNumbers api error: ${JSON.stringify(err)}`);
      reject(err);
    })
  });
}