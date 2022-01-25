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



import call from '@ohos.telephony.call';
export const answer =(callId)=>{
  return new Promise((resolve,reject)=>{
    call.answer(callId).then((res)=>{
      resolve(res)
    }).catch((err)=>{
      reject(err)
      console.log('answer: '+err);
    })
  })
}
export const reject = (callId)=>{
  return new Promise((resolve,reject)=>{
    call.reject(callId).then((res)=>{
      resolve(res)
    }).catch((err)=>{
      reject(err)
      console.log('reject: '+err);
    })
  })
}
export const dial = (phoneNumber) =>{
   return new Promise((resolve,reject)=>{
     call.dial(phoneNumber).then((res)=>{
       resolve(res)
     }).catch((err)=>{
       console.log("dial:"+err)
       reject(err)
     })
   })
}
export const HasCall = () =>{
  return new Promise((resolve,reject)=>{
    call.hasCall().then((res)=>{
      console.log("hasCall:res"+res)
      resolve(res)
    }).catch((err)=>{
      console.log("getHasCall"+err)
      reject(err)
    })
  })
}
export const getCallState = () =>{
  return new Promise((resolve,reject)=>{
    call.getCallState().then((res)=>{
      console.log("CallState:res"+res)
      resolve(res)
    }).catch((err)=>{
      console.log("getCallState:"+err)
      reject(err)
    })
  })
}