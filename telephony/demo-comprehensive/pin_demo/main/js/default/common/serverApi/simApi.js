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
 * 获取sim卡状态
 */
export const getSimStateApi = (slotId) => {
  return new Promise((resolve, reject) => {
    sim.getSimState(slotId).then((res) => {
      resolve(res);
    }).catch((err) => {
      reject(err.message);
    });
  });
}

/*
 * 解锁pin码
 */
export const unlockPinApi = (parms) => {
  return new Promise((resolve, reject) => {
    sim.unlockPin(parms.slotId, parms.pin, (err, result) => {
      if(err){
        reject(err.message);
      } else {
        resolve(result);
      }
    });
  });
}

/*
 * 修改pin码
 */
export const alterPinApi = (parms) => {
  return new Promise((resolve, reject) => {
    sim.alterPin(parms.slotId, parms.newPin, parms.oldPin, (err, result) => {
      if(err){
        reject(err.message);
      } else {
        resolve(result);
      }
    });
  });
}

/*
 * 解锁puk码
 */
export const unlockPukApi = (parms) => {
  return new Promise((resolve, reject) => {
    sim.unlockPuk(parms.slotId, parms.newPin, parms.puk, (err, result) => {
      if(err){
        reject(err.message);
      } else {
        resolve(result);
      }
    });
  });
}

/*
 * 打开、关闭pin锁
 */
export const setLockStateApi = (parms) => {
  return new Promise((resolve, reject) => {
    sim.setLockState(
      parms.slotId,
      {lockType: parms.lockType, password: parms.password, state: parms.state},
      (err, result) => {
      if(err){
        reject(err.message);
      } else {
        resolve(result);
      }
    });
  });
}

