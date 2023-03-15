/**
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

import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import request from "@ohos.request";
import fileio from '@ohos.fileio';
import commoneventmanager from '@ohos.commonEventManager';
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import subtype from '@ohos.InputMethodSubtype';
import inputMethod from '@ohos.inputMethod';



export default function inputMethodEngineJSUnit() {
  describe('inputMethodEngine', function () {
    var inputSever = {
      packageName: '',
      methodId: '',
      name:'',
      id:'',
      extra:{}
    }

    /**
     * beforeEach: Prerequisites at the test case level, which are executed before each test case is executed.
     */
    beforeAll(async (done) => {
      let inputM = inputMethod.getCurrentInputMethod();
      console.info("====>beforeAll: getCurrentInputMethod inputMethodEngineJSUnit to: " + JSON.stringify(inputM));
      inputSever.packageName = inputM.packageName;
      inputSever.methodId = inputM.methodId;
      inputSever.name = inputM.packageName;
      inputSever.id = inputM.methodId;

      let inputDemoService : subtype = {
        id: "com.example.myapplication",
        label: "InputDemoService",
        name: "",
        mode: "lower",
        locale: "",
        language: "",
        icon: "",
        iconId: 0,
        extra: {}
      }
      try{
        await inputMethod.switchCurrentInputMethodSubtype(inputDemoService);
        setTimeout(() => {
          console.info("====>beforeAll: inputMethodEngineJSUnit switchCurrentInputMethodSubtype success");
          done();
        },2000)
      }catch(err){
        console.info("====>beforeAll: inputMethodEngineJSUnit fail" + JSON.stringify(err));
      }
    })

    /**
     * afterEach: Test case-level clearance conditions, which are executed after each test case is executed.
     */
    afterAll(async (done) => {
      try{
        await inputMethod.switchInputMethod(inputSever);
        setTimeout(() => {
          console.info("====>afterAll: inputMethodEngineJSUnit switchInputMethod success");
          done();
        },2000)
      }catch(err){
        console.info("====>afterAll: inputMethodEngineJSUnit fail" + JSON.stringify(err));
      }
    })

    let getFocusCmd = "uiput -T -c 701 1442";
    let abilityDelegator;

    async function runCmd(cmd){
      console.info("====>runCmdInfo: " + cmd);
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
      await abilityDelegator.executeShellCommand(cmd);
    }

    it('inputMethodEngine_test_getInputMethodAbility_001', 0, async function (done) {
      function unSubscriberCallback(err){
        console.info("====>inputMethodEngine_test_getInputMethodAbility_001 unSubscriberCallback start");
        if (err) {
          console.error("====>inputMethodEngine_test_getInputMethodAbility_001 unSubscriberCallback failed: " + JSON.stringify(err));
        }else{
          console.info("====>inputMethodEngine_test_getInputMethodAbility_001 unSubscriberCallback finsh");
        }
      }

      function subscriberCallback(err, data){
        console.debug("====>inputMethodEngine_test_getInputMethodAbility_001 subscriberCallback data: " + JSON.stringify(data));
        commoneventmanager.unsubscribe(subscriber, unSubscriberCallback);
        let t = setTimeout(() => {
          try{
            expect(data.data).assertEqual("SUCCESS");
            console.debug("====>inputMethodEngine_test_getInputMethodAbility_001 end<====");
            clearTimeout(t);
            done();
          }catch(err){
            console.debug("====>inputMethodEngine_test_getInputMethodAbility_001 end<====" + JSON.stringify(err));
            clearTimeout(t)
            done();
          }
        }, 500)
      }

      async function publishCallback(err){
        if (err) {
          console.debug("====>inputMethodEngine_test_getInputMethodAbility_001 end<====" + JSON.stringify(err));
        }else{
          runCmd(getFocusCmd);
        }
      }

      var commonEventSubscribeInfo = {
        events: ["inputMethodEngine_test_getInputMethodAbility_001"]
      }
      var subscriber;
      commoneventmanager.createSubscriber(commonEventSubscribeInfo).then(function (data){
        subscriber = data;
        console.debug("====>inputMethodEngine_test_getInputMethodAbility_001 subscribe data: " + JSON.stringify(data));
        commoneventmanager.subscribe(subscriber, subscriberCallback);
        console.debug("====>inputMethodEngine_test_getInputMethodAbility_001 subscribe finish====");
      })

      var commonEventPublishData = {
        code: 1
      }
      commoneventmanager.publish("test1", commonEventPublishData, publishCallback)

    });





  })
}