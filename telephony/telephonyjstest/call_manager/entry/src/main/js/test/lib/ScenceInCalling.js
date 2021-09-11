/**
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License")
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

import {
  CALL_STATUS_IDLE,
  CALL_MANAGER_PHONE_NUMBER_NULL,
  NULL_PHONE_NUMBER,
  CALL_STATUS_HOLDIN,
  CALL_STATUS_DISCONNECTED
} from './Const.js';
import {toString} from './ApiToPromise.js';
import call from '@ohos.telephony_call';
import observer from '@ohos.telephony_observer';

// dial call in a nomal scence,when specific state arrive,we get the information of this state
export function scenceInCalling (options) {
  return new Promise((resolve, reject) => {
    let {caseName, phoneNumber, checkState} = options;
    call.on('callDetailsChange', (err, callStateInfo) => {
      console.log(`${caseName} scenceInCalling callDetailsChange error ${toString(err)} ${toString(callStateInfo)} `);
      if (err) {
        console.log('scenceInCalling callDetailsChange error');
        reject({message:'scenceInCalling callDetailsChange error'});
        return;
      }
      if (callStateInfo.callState === checkState) {
        call.off('callDetailsChange');
        console.log(`${caseName} scenceInCalling get the right state`);
        resolve({...callStateInfo});
        return;
      }
      if (callStateInfo.callState === CALL_STATUS_DISCONNECTED) {
        console.log(`${caseName} scenceInCalling get the state CALL_STATUS_DISCONNECTED`);
        hangupCall(caseName, callStateInfo.callId)
          .then(data => {
            reject({message:`${caseName} scenceInCalling data get the state CALL_STATUS_DISCONNECTED`});
          })
          .catch(error => {
            reject({message:`${caseName} scenceInCalling error get the state CALL_STATUS_DISCONNECTED`});
          });
        return;
      }
    });
    console.log(`${caseName} dial ${toString(options)}`);
    try {
      let obj = {accountId: 0, videoState: 0, dialScene: 0, dialType:0};
      call.dial(phoneNumber, obj, (error, data) => {
        if (error) {
          console.log(`${caseName} scenceInCalling dial error,error:${toString(error)}`);
          reject(error);
          return;
        }
        if (data !== true) {
          console.log(`${caseName} scenceInCalling dial data error,data:${toString(data)}`);
          reject(data);
          return;
        }
        console.log(`${caseName} dial true,run continue`);
      });
    } catch (error) {
      console.log(`${caseName} dial try catch error,error:${toString(error)}`);
      reject(error);
    }
  });
}

/* normal function
   dial a call with number '',we shoudld get the error */
export function scenceInCallingNull (options) {
  return new Promise((resolve, reject) => {
    let {caseName} = options;
    call.dial(NULL_PHONE_NUMBER, (err, data) => {
      if (err && err.message === CALL_MANAGER_PHONE_NUMBER_NULL) {
        console.log(`${caseName} dial call null number,data:${toString(err)}`);
        resolve(data);
        return;
      }
      console.log(`${caseName} should be CALL_MANAGER_PHONE_NUMBER_NULL,dial error:${err},data:${toString(data)}`);
      reject(err ? err : data);
    });
  });
}

// holding call scence,use it should base on scenceInCalling,get the infomation at CALL_STATUS_HOLDIN state
export function scenceInHolding (options) {
  return new Promise(async (resolve, reject) => {
    let {caseName, callId} = options;
    call.on('callDetailsChange', (err, callStateInfo) => {
      if (err) {
        console.log('scenceInHolding callDetailsChange error');
        reject({message:'scenceInHolding callDetailsChange error'});
        return;
      }
      if (callStateInfo.callState === CALL_STATUS_HOLDIN) {
        call.off('callDetailsChange');
        console.log(`${caseName} scenceInHolding get the right state`);
        resolve({...callStateInfo});
        return;
      }
      if (callStateInfo.callState === CALL_STATUS_DISCONNECTED) {
        console.log(`${caseName} scenceInHolding get the state CALL_STATUS_DISCONNECTED`);
        hangupCall(caseName, callStateInfo.callId)
          .then(data => {
            reject({message:`${caseName} scenceInHolding hangupCall data get the state CALL_STATUS_DISCONNECTED`});
          })
          .catch(error => {
            reject({message:`${caseName} scenceInHolding hangupCall error get the state CALL_STATUS_DISCONNECTED`});
          });
        return;
      }
    });

    call.holdCall(callId, (error, data) => {
      if (error) {
        console.log(`${caseName} scenceInHolding holdCall error,error:${toString(error)}`);
        reject(error);
        return;
      }
    });
  });
}

// hunup call scence,use it should base on scenceInCalling,specific state arrive,get the infomation at this state
export function scenceInHangup (options) {
  return new Promise(async (resolve, reject) => {
    let {caseName, callId, checkState} = options;
    call.off('callDetailsChange');
    call.on('callDetailsChange', (err, callStateInfo) => {
      if (err) {
        console.log('scenceInHangup callDetailsChange error');
        reject({message:'scenceInHangup callDetailsChange error'});
        return;
      }
      if (callStateInfo.callState === checkState) {
        call.off('callDetailsChange');
        console.log(`${caseName} scenceInHangup get the right state`);
        resolve({...callStateInfo});
        return;
      }
      if (callStateInfo.callState === CALL_STATUS_IDLE) { // this maybe the last state
        console.log(`${caseName} scenceInHangup get the state CALL_STATUS_DISCONNECTED`);
        hangupCall(caseName, callStateInfo.callId)
          .then(data => {
            reject({message:`${caseName} scenceInHangup hangupCall data get the state CALL_STATUS_DISCONNECTED`});
          })
          .catch(error => {
            reject({message:`${caseName} scenceInHangup hangupCall error get the state CALL_STATUS_DISCONNECTED`});
          });
        return;
      }
    });
    call.hangup(callId, (error, data) => {
      if (error) {
        console.log(`${caseName} hangup error,error:${toString(error)}`);
        reject(error);
        return;
      }
    });
  });
}

// hunup the call ,used in test case
export function hangupCall2 (caseName, done, callId) {
  caseName = caseName ? caseName : '';
  if (callId) {
    call.hangup(callId)
      .then(() => {
        console.log(`${caseName} hangup success`);
        done();
      })
      .catch(error => {
        console.log(`${caseName} hangup error ${error.message},error:${toString(error)}`);
        done();
      });
  } else {
    done();
  }
}

// hunup the call ,used in packaging function
export function hangupCall (caseName, callId) {
  return new Promise((resolve, reject) => {
    call.hangup(callId)
      .then(() => {
        console.log(`${caseName} hangup success`);
        resolve(true);
      })
      .catch(error => {
        console.log(`${caseName} hangup error ${error.message},error:${toString(error)}`);
        reject(false);
      });
  });
}

/* dial call in a nomal scence used in third-party applications,when specific state arrive,
   we get the information of this state */
export function scenceInCallingForRegister (options) {
  return new Promise((resolve, reject) => {
    let {caseName} = options;
    let callId = null;
    let callChangeData = null;
    let func = null;
    if (options.isOnce) {
      func = observer.once;
    } else {
      func = observer.on;
    }
    func('callStateChange', (error, data) => {
      if (error) {
        console.log(`${caseName}  callStateChange error ${error.message},error:${toString(error)}`);
        hangupCall(caseName, callId)
          .then(data => {
            console.log(`${caseName}  callStateChange hangupCall data,data:${data}`);
            reject({message:`${caseName} callStateChange hangupCall data`});
          })
          .catch(error => {
            console.log(`${caseName}  callStateChange hangupCall error,error:${error}`);
            reject({message:`${caseName} callStateChange hangupCall error`});
          });
        return;
      }
      callChangeData = data;
    });
    scenceInCalling({...options})
      .then(data => {
        callId = data.callId;
        let tempCallChangeData = {...callChangeData};
        console.log(`${caseName}  scenceInCalling data,data:${toString(data)},
        tempcallChangeData:${tempCallChangeData}`);
        observer.off('callStateChange');
        hangupCall(caseName, callId)
          .then(data => {
            console.log(`${caseName}  scenceInCalling hangupCall data,data:${data}`);
            resolve(tempCallChangeData);
          })
          .catch(error => {
            console.log(`${caseName}  scenceInCalling hangupCall error,error:${error}`);
            reject({message:`${caseName} hangupCall error`});
          });
      })
      .catch(error => {
        console.log(`${caseName}  scenceInCalling error ${error.message},error:${toString(error)}`);
        reject(error);
      });
  });
}

// holding call scence used in third-party applications,we get the information of state at CALL_STATUS_HOLDIN state
export function scenceInCallingHoldingForRegister (options) {
  return new Promise((resolve, reject) => {
    let {caseName} = options;
    let callId = null;
    let callChangeData = null;
    let func = null;
    if (options.isOnce) {
      func = observer.once;
    } else {
      func = observer.on;
    }
    func('callStateChange', (error, data) => {
      if (error) {
        console.log(`${caseName}  callStateChange error ${error.message},error:${toString(error)}`);
        hangupCall(caseName, callId)
          .then(data => {
            console.log(`${caseName}  callStateChange hangupCall data,data:${data}`);
            reject({message:`${caseName} callStateChange hangupCall data`});
          })
          .catch(error => {
            console.log(`${caseName}  callStateChange hangupCall error,error:${error}`);
            reject({message:`${caseName} callStateChange hangupCall error`});
          });
        return;
      }
      callChangeData = data;
    });
    scenceInCalling(options)
      .then(data => {
        scenceInHolding({callId:data.callId, ...options})
          .then(data => {
            callId = data.callId;
            let tempcallChangeData = callChangeData;
            console.log(`${caseName} data,data:${toString(data)},tempcallChangeData:${tempcallChangeData}`);
            observer.off('callStateChange');
            hangupCall(caseName, callId)
              .then(data => {
                console.log(`${caseName} hangupCall data,data:${data}`);
                resolve(tempcallChangeData);
              })
              .catch(error => {
                console.log(`${caseName}  hangupCall error,error:${error}`);
                reject({message:`${caseName} hangupCall error`});
              });
          })
          .catch(error => {
            console.log(`${caseName}  scenceInHolding error ${error.message},error:${toString(error)}`);
            reject(error);
          });
      })
      .catch(error => {
        console.log(`${caseName}  scenceInCalling error ${error.message},error:${toString(error)}`);
        reject(error);
      });
  });
}
// holding call scence used in third-party applications,we get the information of state when unHoldCall the call
export function scenceInCallingNnHoldingForRegister (options) {
  return new Promise((resolve, reject) => {
    let {caseName} = options;
    let callId = null;
    let callChangeData = null;
    let func = null;
    if (options.isOnce) {
      func = observer.once;
    } else {
      func = observer.on;
    }
    func('callStateChange', (error, data) => {
      if (error) {
        console.log(`${caseName}  callStateChange error ${error.message},error:${toString(error)}`);
        hangupCall(caseName, callId)
          .then(data => {
            console.log(`${caseName}  callStateChange hangupCall data,data:${data}`);
            reject({message:`${caseName} callStateChange hangupCall data`});
          })
          .catch(error => {
            console.log(`${caseName}  callStateChange hangupCall error,error:${error}`);
            reject({message:`${caseName} callStateChange hangupCall error`});
          });
        return;
      }
      callChangeData = data;
    });
    scenceInCalling(options)
      .then(data => {
        scenceInHolding({callId:data.callId, ...options})
          .then(data => {
            callId = data.callId;
            call.unHoldCall(callId)
              .then(data => {
                let tempcallChangeData = callChangeData;
                console.log(`${caseName}  unHoldCall data,data:${toString(data)},
                tempcallChangeData:${tempcallChangeData}`);
                observer.off('callStateChange');
                hangupCall(caseName, callId)
                  .then(data => {
                    console.log(`${caseName} hangupCall data,data:${data}`);
                    resolve(tempcallChangeData);
                  })
                  .catch(error => {
                    console.log(`${caseName}  hangupCall error,error:${error}`);
                    reject({message:`${caseName} hangupCall error`});
                  });
              })
              .catch(error => {
                console.log(`${caseName}  unHoldCall error ${error.message},error:${toString(error)}`);
                reject(error);
              });
          })
          .catch(error => {
            console.log(`${caseName}  scenceInHolding error ${error.message},error:${toString(error)}`);
            reject(error);
          });
      })
      .catch(error => {
        console.log(`${caseName} scenceInCalling error ${error.message},error:${toString(error)}`);
        reject(error);
      });
  });
}
// hunup call scence used in third-party applications,we get the information of state when hunup the call
export function scenceInCallingHangupForRegister (options) {
  return new Promise((resolve, reject) => {
    let {caseName} = options;
    let callId = null;
    let callChangeData = null;
    let func = null;
    if (options.isOnce) {
      func = observer.once;
    } else {
      func = observer.on;
    }
    func('callStateChange', (error, data) => {
      if (error) {
        console.log(`${caseName}  callStateChange error ${error.message},error:${toString(error)}`);
        hangupCall(caseName, callId)
          .then(data => {
            console.log(`${caseName}  callStateChange hangupCall data,data:${data}`);
            reject({message:`${caseName} callStateChange hangupCall data`});
          })
          .catch(error => {
            console.log(`${caseName}  callStateChange hangupCall error,error:${error}`);
            reject({message:`${caseName} callStateChange hangupCall error`});
          });
        return;
      }
      callChangeData = data;
    });
    scenceInCalling(options)
      .then(data => {
        scenceInHangup({callId:data.callId, ...options})
          .then(data => {
            callId = data.callId;
            let tempcallChangeData = callChangeData;
            console.log(`${caseName}  scenceInHangup data,data:${toString(data)},
            tempcallChangeData:${tempcallChangeData}`);
            observer.off('callStateChange');
            hangupCall(caseName, callId)
              .then(data => {
                console.log(`${caseName}  hangupCall data,data:${data}`);
                resolve(tempcallChangeData);
              })
              .catch(error => {
                console.log(`${caseName}  hangupCall error,error:${error}`);
                reject({message:`${caseName} hangupCall error`});
              });
          })
          .catch(error => {
            console.log(`${caseName}  scenceInHangup error ${error.message},error:${toString(error)}`);
            reject(error);
          });
      })
      .catch(error => {
        console.log(`${caseName}  scenceInCalling error ${error.message},error:${toString(error)}`);
        reject(error);
      });
  });
}
