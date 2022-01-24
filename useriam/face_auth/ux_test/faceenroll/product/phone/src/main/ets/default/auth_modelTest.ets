
/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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

import userAuth from '@ohos.userIAM.userAuth'
import Log from '../../../../../../common/src/main/ets/default/Log.ets'
import Constants from './common/constant.ets'

const TAG = 'auth_faceModel';

async function routeSuccess() {
  let options = {
    uri: 'pages/auth_success'
  }
  try {
    await router.push(options)
  } catch (err) {
    console.error(`fail callback, code: ${err.code}, msg: ${err.msg}`)
  }
}

async function route_back() {
  let options = {
    uri: 'pages/test1/test_case'
  }
  try {
    await router.push(options)
  } catch (err) {
    console.error(`fail callback, code: ${err.code}, msg: ${err.msg}`)
  }
}

export class auth_modelTest {
  initFaceModel() {
    Log.showInfo(TAG, 'initFaceModel');

    var result = userAuth.init()
    Log.showInfo(TAG,'initFaceModel init result:' + result)

    this.startAuth()
  }

  startAuth() {
    const auth = userAuth.getAuthenticator();
    auth.execute("FACE_ONLY", "S2", function(data) {
      Log.showInfo(TAG,'UX auth.execute:' +data)
      if (data == userIAM_userAuth.AuthenticationResult.SUCCESS) {
      Log.showInfo(TAG,'Authentication successful')
      }
      else {
        Log.showInfo(TAG, 'Authentication failed')
      }
    })
    this.authSuccess()
    this.endAuth()
  }

  endAuth(){
    Log.showInfo(TAG, 'end auth');
    userAuth.release()
    Log.showInfo(TAG,'releaseFaceModel release result:' + result)
  }

  private authSuccess()
  {
    routeSuccess()
    setTimeout(()=>{
      route_back()
    },Constants.TIMEOUT_1000)
  }

}let mFaceModel = new auth_modelTest();
export default mFaceModel as auth_modelTest;