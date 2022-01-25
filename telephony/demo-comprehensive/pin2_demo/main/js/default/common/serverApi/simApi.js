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


import sim from '@ohos.telephony.sim';

/*
 * 解锁pin2码
 */
export const unlockPin2Api = (parms) => {
  return new Promise((resolve, reject) => {
    sim.unlockPin2(parms.slotId, parms.pin2, (err, result) => {
      if(err){
        reject(err.message);
      } else {
        resolve(result);
      }
    });
  });
}

/*
 * 修改pin2码
 */
export const alterPin2Api = (parms) => {
  return new Promise((resolve, reject) => {
    sim.alterPin2(parms.slotId, parms.newPin2, parms.oldPin2, (err, result) => {
      if(err){
        reject(err.message);
      } else {
        resolve(result);
      }
    });
  });
}

/*
 * 解锁puk2码
 */
export const unlockPuk2Api = (parms) => {
  return new Promise((resolve, reject) => {
    sim.unlockPuk2(parms.slotId, parms.newPin2, parms.puk2, (err, result) => {
      if(err){
        reject(err.message);
      } else {
        resolve(result);
      }
    });
  });
}



