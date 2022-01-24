import sim from '@ohos.telephony.sim';

export const getSimAccountInfoApi =(slotId) => {
  return new Promise((resolve,reject) => {
    sim.getSimAccountInfo(slotId).then((res) => {
      resolve(res);
    }).catch((err) => {
      console.log(`getSimAccountInfo err: ${err.message}`);
      reject(err);
    })
  })
}
