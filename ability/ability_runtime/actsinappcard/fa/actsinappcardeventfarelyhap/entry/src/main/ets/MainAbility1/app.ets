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
 
import featureAbility from '@ohos.ability.featureAbility';
import commonEvent from '@ohos.commonEvent'
let message;
let commonEventData={
  parameters:{
    message:message
  }
}

export default {
  async onCreate() {
    console.info('MainAbility1 onCreate');
    let want = await featureAbility.getWant();
    console.log("MainAbility1 onCreate want:"+JSON.stringify(want.parameters));
    AppStorage.SetOrCreate('bundleName', "com.example.actsinappcardroutereventfatest");
    AppStorage.SetOrCreate('abilityName', "FormAbility");
    AppStorage.SetOrCreate('moduleName', "entry");
    AppStorage.SetOrCreate('formName', "widget1");
    commonEventData.parameters.message=want.parameters.message
    if(want.parameters.message == "add detail"){
      commonEvent.publish("ACTS_FORM_ID",commonEventData,(err)=>{
        console.log(`ACTS_InAppCardRouterEvent_0700====>publish:err:` + JSON.stringify(err));
      })
    }
    if(want.parameters.message == undefined){
      commonEvent.publish("ACTS_FORM_ID5",commonEventData,(err)=>{
        console.log(`ACTS_InAppCardRouterEvent_1100====>publish:err:` + JSON.stringify(err));
      })
    }
    if(want.parameters.message == ""){
      commonEvent.publish("ACTS_FORM_ID6",commonEventData,(err)=>{
        console.log(`ACTS_InAppCardRouterEvent_1200====>publish:err:` + JSON.stringify(err));
      })
    }
  },
  onDestroy() {
    console.info('Application onDestroy')
  }
}