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

import featureAbility from '@ohos.ability.featureability'
import commonEvent from '@ohos.commonevent'

export default {
  onCreate() {
    console.info("Application onCreate");

    var context = featureAbility.getContext();
    console.log("context: " + JSON.stringify(context))
    context.getCallingBundle((err, data) => {
      console.log("err: " + JSON.stringify(err) + ", data: " + JSON.stringify(data))
      if(data != ""){
        console.log("getCallingBundle success" + JSON.stringify(data));
        commonEvent.publish("getBundle", {
          parameters:{
            bundle: data
          }
        }, () => {
          console.log("MainAbility2 Publish CallBack data.Bundle")
        });
      }
    })
  },
  onDestroy() {
    console.info("Application onDestroy");
  }
};
