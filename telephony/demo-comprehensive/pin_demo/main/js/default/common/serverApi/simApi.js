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
    sim.setLockState(parms.slotId, {lockType: parms.lockType, password: parms.password, state: parms.state}, (err, result) => {
      if(err){
        reject(err.message);
      } else {
        resolve(result);
      }
    });
  });
}

