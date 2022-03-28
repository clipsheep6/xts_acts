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

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index"
import commonEvent from '@ohos.commonevent'


export default function applicationContextTest(abilityContext) {
  describe('applicationContextTest', function () {

    
    /**
      * @tc.number: SUB_AA_OpenHarmony_ApplicationContext_0300
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_ApplicationContext_0300', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_ApplicationContext_0300";
      console.log(TAG + " --- start");
      var context = abilityContext.getApplicationContext();
      var result = await context.resourceManager.getString(16777218);
      console.log(TAG + " result = " + JSON.stringify(result));
      expect(result).assertEqual("entry_MainAbility");
      done();
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_ApplicationContext_0400
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_ApplicationContext_0400', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_ApplicationContext_0400";
      console.log(TAG + " --- start");
      var context = abilityContext.getApplicationContext();
      var result = context.applicationInfo.name;
      console.log(TAG + " result = " + JSON.stringify(result));
      expect(result).assertEqual("com.example.applicationcontext");
      done();
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_ApplicationContext_0600
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_ApplicationContext_0600', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_ApplicationContext_0600";
      console.log(TAG + " --- start");
      var context = globalThis.stageContext.getApplicationContext();
      var result = context.applicationInfo.name;
      console.log(TAG + " result = " + JSON.stringify(result));
      expect(result).assertEqual("com.example.applicationcontext");
      done();
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_ApplicationContext_0900
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_ApplicationContext_0900', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_ApplicationContext_0900";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.applicationcontext",
        abilityName: "com.example.applicationcontext.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + ' - startAbility: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });

      setTimeout(async function() {
        var serviceContext = globalThis.extensionContext.getApplicationContext();
        var result = await serviceContext.resourceManager.getString(16777218);
        console.log(TAG + " result = " + result);
        expect(result).assertEqual("entry_MainAbility");
        done();
      }, 500)
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_ApplicationContext_1000
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_ApplicationContext_1000', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_ApplicationContext_1000";
      console.log(TAG + " --- start");

      abilityContext.startAbility({
        bundleName: "com.example.applicationcontext",
        abilityName: "com.example.applicationcontext.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + ' - startAbility: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });

      setTimeout(async function() {
        var serviceContext = globalThis.extensionContext.getApplicationContext();
        var result = serviceContext.applicationInfo.name;
        console.log(TAG + " result = " + result);
        expect(result).assertEqual("com.example.applicationcontext");
        done();
      }, 500)
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_ApplicationContext_1300
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_ApplicationContext_1300', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_ApplicationContext_1300";
      console.log(TAG + " --- start");
      var context = abilityContext.getApplicationContext();
      var context2 = context.getApplicationContext();
      var result = await context2.resourceManager.getString(16777218);
      console.log(TAG + " result = " + result);
      expect(result).assertEqual("entry_MainAbility");
      done();
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_ApplicationContext_1400
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_ApplicationContext_1400', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_ApplicationContext_1400";
      console.log(TAG + " --- start");
      var context = abilityContext.getApplicationContext();
      var context2 = context.getApplicationContext();
      var result = context2.applicationInfo.name;
      console.log(TAG + " result = " + result);
      expect(result).assertEqual("com.example.applicationcontext");
      done();
    });

  })
}