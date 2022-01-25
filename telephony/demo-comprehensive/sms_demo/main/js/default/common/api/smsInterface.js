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

import sms from '@ohos.telephony.sms'

export const getAllMsgInterface = (slotId) =>{
   return new Promise((resolve,reject)=>{
     sms.getAllSimMessages(slotId).then((res)=>{
       console.log("getAllSimMessages res"+JSON.stringify(res))
       resolve(res)
     }).catch((err)=>{
       console.log("getAllSimMessages err"+err)
       reject(err)
     })
   })
}
export const updateSimMessageInterface = (options) =>{
  console.log('updateSimMessageInterface222')
  return new Promise((resolve,reject)=>{
    sms.updateSimMessage(options).then((res)=>{
      resolve(res)
      console.log('updateSimMessageInterface res:'+res);
    }).catch((err)=>{
      console.log("updateSimMessage err"+ err)
      reject(err)
    })
  })
}
export const  addSimMessageInterface = (options) =>{
  console.log(JSON.stringify(options)+"options")
  console.log("typeof-object" + Object.prototype.toString.call(options))
  return new Promise((resolve,reject)=>{
    sms.addSimMessage(options).then((res)=>{
      resolve(res)
    }).catch((err)=>{
      console.log("addSimMessage err"+err)
      reject(err)
    })
  })
}
export const  delSimMessageInterface = (slotId,index) =>{
  console.log('delSimMessageInterface call ');
  return new Promise((resolve,reject)=>{
    console.log('delSimMessageInterface222 ');
    sms.delSimMessage(slotId,index).then((res)=>{
      console.log('delSimMessageInterface333 ');
      resolve(res)
    }).catch((err)=>{
      console.log('delSimMessage err'+err)
      reject(err)
    })
  })
}