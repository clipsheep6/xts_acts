/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
 
import featureAbility from '@ohos.ability.featureAbility'
import commonEvent from '@ohos.commonEvent'
let message;
let commonEventData={
  parameters:{
    message:message
  }
}

export default {
  async onCreate() {
    console.info('MainAbility3 onCreate')
    var want = await featureAbility.getWant();
    console.log("MainAbility3 onCreate want"+JSON.stringify(want.parameters));
    AppStorage.SetOrCreate('bundleName', want.parameters.bundleName);
    AppStorage.SetOrCreate('abilityName', want.parameters.abilityName);
    AppStorage.SetOrCreate('moduleName', want.parameters.moduleName);
    AppStorage.SetOrCreate('formName', want.parameters.formName);
    globalThis.abilityWant = want;
    commonEventData.parameters.message=want.parameters.message
    if(want.parameters.message == 'add detail3'){
      commonEvent.publish("ACTS_FORM_ID3",commonEventData,(err)=>{
        console.log(`ACTS_InAppCardRouterEvent3====>publish:err:` + JSON.stringify(err));
      })
    }
  },
  onDestroy() {
    console.info('Application onDestroy')
  },
}