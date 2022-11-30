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

import { describe, it, expect, afterEach, beforeAll } from '@ohos/hypium'
import commonEvent from '@ohos.commonEvent'

let Subscriber;
let TAG;

let subscriberInfo_AbilityContext = {
  events: ["StartMainAbility3_CommonEvent_ContextOne", "StartMainAbility4_CommonEvent_ContextOne",
    "AssistContextTwo_StageAbilityA_Start_CommonEvent"],
};

export default function userContextPropertiesTest(abilityContext) {
  describe('ActsUserContextPropertiesTest', function () {

    beforeAll(async (done) => {
      console.log("ActsUserContextPropertiesTest afterAll called");
      await abilityContext.startAbility({
        bundleName: "com.example.usercontextpropertiestest",
        abilityName: "MainAbility2"
      }).then((data) => {
        console.log('ActsUserContextPropertiesTest - startMainAbility2: ' + JSON.stringify(data));
      }).catch((err) => {
        console.log("ActsUserContextPropertiesTest - startMainAbility2 failed: "
          + JSON.stringify(err));
        done()
      })

      setTimeout(function () {
        console.log("ActsUserContextPropertiesTest afterAll end");
        done();
      }, 3000);
    })

    afterEach(async (done) => {
      console.log("ActsUserContextPropertiesTest afterEach called");
      let wantInfo = {
        bundleName: "com.example.usercontextpropertiestest",
        abilityName: "MainAbility"
      }
      await abilityContext.startAbility(wantInfo).then((data) => {
        console.log("ActsUserContextPropertiesTest startMainAbility data : " + JSON.stringify(data));
      }).catch((err) => {
        console.log("ActsUserContextPropertiesTest startMainAbility err : " + JSON.stringify(err));
      })

      setTimeout(function () {
        console.log("ActsUserContextPropertiesTest afterEach end");
        done();
      }, 1500);
    })

    /**
     * @tc.number: SUB_AA_OpenHarmony_UserContext_0100
     * @tc.name: Under Multi-user Check that context paths of different Ability in the same hap are the same.
     * @tc.desc: Function test
     * @tc.level   3
     */
    it('SUB_AA_OpenHarmony_UserContext_0100', 0, async function (done) {
      TAG = "SUB_AA_OpenHarmony_UserContext_0100"
      console.log(TAG + "--- start");

      checkAbilityContextDir();
      checkContextDirEqualA(abilityContext, globalThis.abilityContext2);
      done()
      console.log(TAG + "--- end");


    });

    /**
     * @tc.number: SUB_AA_OpenHarmony_UserContext_0200
     * @tc.name: Under Multi-user Check that context paths of different Ability in the same hap are the same.
     * @tc.desc:  Function test
     * @tc.level   3
     */
    it('SUB_AA_OpenHarmony_UserContext_0200', 0, async function (done) {
      TAG = "SUB_AA_OpenHarmony_UserContext_0200"
      console.log(TAG + "--- start");
      checkApplicationContextDir(abilityContext.getApplicationContext());
      checkApplicationContextDir(globalThis.abilityStageContext.getApplicationContext());
      checkApplicationContextDir(globalThis.abilityContext2.getApplicationContext());
      checkContextDirEqualA(abilityContext.getApplicationContext(),
        globalThis.abilityContext2.getApplicationContext())
      checkContextDirEqualA(abilityContext.getApplicationContext(),
        globalThis.abilityStageContext.getApplicationContext())
      done()
    });

    /**
     * @tc.number: SUB_AA_OpenHarmony_UserContext_0300
     * @tc.name: Under Multi-user Check that context paths of different Ability in the different hap are the same.
     * @tc.desc: Function test
     * @tc.level   3
     */
    it('SUB_AA_OpenHarmony_UserContext_0300', 0, async function (done) {
      TAG = "SUB_AA_OpenHarmony_UserContext_0300"
      console.log(TAG + " --- start");

      checkAbilityContextDir();

      function SubscribeCallBack(err, data) {
        console.log(TAG + " Subscribe CallBack data: " + JSON.stringify(data)
          + "err: " + JSON.stringify(err));
        checkContextDirEqualB(abilityContext, globalThis.abilityContextA)
        commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
      }

      await commonEvent.createSubscriber(subscriberInfo_AbilityContext).then(async (data) => {
        console.log(TAG + " Create Subscriber");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      function UnSubscribeCallback() {
        console.log(TAG + " UnSubscribe CallBack");
        done();
      }

      await abilityContext.startAbility({
        bundleName: "com.example.usercontextpropertiestest",
        abilityName: "MainAbility3",
      }).then((data) => {
        console.log(TAG + ' - startAbility: ' + JSON.stringify(data));
      }).catch((err) => {
        console.log(TAG + " - start failed" + JSON.stringify(err));
        expect.assertFail()
        done()
      })
    });

    /**
     * @tc.number: SUB_AA_OpenHarmony_UserContext_0400
     * @tc.name: Under Multi-user Check that ApplicationContext paths of different
     * Ability in the different hap are the same.
     * @tc.desc: Function test
     * @tc.level   3
     */
    it('SUB_AA_OpenHarmony_UserContext_0400', 0, async function (done) {
      TAG = "SUB_AA_OpenHarmony_UserContext_0400"
      console.log(TAG + " --- start");

      checkAbilityStageContextDir();

      function SubscribeCallBack(err, data) {
        console.log(TAG + " Subscribe CallBack data: " + JSON.stringify(data)
          + "err: " + JSON.stringify(err));
        checkContextDirEqualB(globalThis.abilityStageContext, globalThis.abilityStageContextA)
        commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
      }

      await commonEvent.createSubscriber(subscriberInfo_AbilityContext).then(async (data) => {
        console.log(TAG + " Create Subscriber");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      function UnSubscribeCallback() {
        console.log(TAG + " UnSubscribe CallBack");
        done();
      }

      await abilityContext.startAbility({
        bundleName: "com.example.usercontextpropertiestest",
        abilityName: "MainAbility3",
      }).then((data) => {
        console.log(TAG + ' - startAbility: ' + JSON.stringify(data));
      }).catch((err) => {
        console.log(TAG + " - start failed" + JSON.stringify(err));
        expect.assertFail()
        done()
      })
    });


    /**
     * @tc.number: SUB_AA_OpenHarmony_UserContext_0500
     * @tc.name: Under Multi-user  Check that context paths of different Ability in the same hap are the same.
     * @tc.desc: Function test
     * @tc.level   3
     */
    it('SUB_AA_OpenHarmony_UserContext_0500', 0, async function (done) {
      TAG = "SUB_AA_OpenHarmony_UserContext_0500"
      console.log(TAG + " --- start");
      let abilityBundleContext1 = abilityContext.createBundleContext("com.example.usercontextpropertiestest");
      let abilityBundleContext2 = globalThis.abilityContext2
        .createBundleContext("com.example.usercontextpropertiestest");
      checkBundleContextDir(abilityBundleContext1);
      checkContextDirEqualA(abilityBundleContext1, abilityBundleContext2);
      console.log(TAG + " --- end");
      done()
    });

    /**
     * @tc.number: SUB_AA_OpenHarmony_UserContext_0600
     * @tc.name: Under Multi-user Check that ApplicationContext paths of different
     * Ability in the same hap are the same.
     * @tc.desc: Function test
     * @tc.level   3
     */
    it('SUB_AA_OpenHarmony_UserContext_0600', 0, async function (done) {
      TAG = "SUB_AA_OpenHarmony_UserContext_1800"
      console.log(TAG + " --- start");
      let abilityBundleContext1 = abilityContext.createBundleContext("com.example.usercontextpropertiestest");
      let abilityBundleContext2 = globalThis.abilityContext2
        .createBundleContext("com.example.usercontextpropertiestest");
      let abilityStageBundleContext2 = globalThis.abilityStageContext
        .createBundleContext("com.example.usercontextpropertiestest");
      checkBundleContextDir(abilityBundleContext1);
      checkContextDirEqualA(abilityBundleContext1, abilityBundleContext2);
      checkContextDirEqualA(abilityBundleContext1, abilityStageBundleContext2);
      console.log(TAG + " --- end");
      done()
    });

    /**
     * @tc.number: SUB_AA_OpenHarmony_UserContext_0700
     * @tc.name: Under Multi-user Check that ApplicationContext paths of different
     * Ability in the different hap are the same.
     * @tc.desc: Function test
     * @tc.level   3
     */
    it('SUB_AA_OpenHarmony_UserContext_0700', 0, async function (done) {
      TAG = "SUB_AA_OpenHarmony_UserContext_0700"
      console.log(TAG + " --- start");
      let abilityBundleContext1 = abilityContext.createBundleContext("com.example.usercontextpropertiestest");

      checkBundleContextDir(abilityBundleContext1);

      function SubscribeCallBack(err, data) {
        console.log(TAG + " Subscribe CallBack data: " + JSON.stringify(data)
          + "err: " + JSON.stringify(err));
        let abilityBundleContext2 = globalThis.abilityContextA.createBundleContext(
          "com.example.usercontextpropertiestest");
        checkContextDirEqualA(abilityBundleContext1, abilityBundleContext2);
        commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
      }

      await commonEvent.createSubscriber(subscriberInfo_AbilityContext).then(async (data) => {
        console.log(TAG + " Create Subscriber");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      function UnSubscribeCallback() {
        console.log(TAG + " UnSubscribe CallBack");
        done();
      }

      await abilityContext.startAbility({
        bundleName: "com.example.usercontextpropertiestest",
        abilityName: "MainAbility3",
      }).then((data) => {
        console.log(TAG + ' - startAbility: ' + JSON.stringify(data));
      }).catch((err) => {
        console.log(TAG + " - start failed" + JSON.stringify(err));
        expect.assertFail()
        done()
      })
    });

    /**
     * @tc.number: SUB_AA_OpenHarmony_UserContext_0800
     * @tc.name: Under Multi-user Check that ApplicationContext paths of different
     * Ability in the different hap are the same.
     * @tc.desc: Function test
     * @tc.level   3
     */
    it('SUB_AA_OpenHarmony_UserContext_0800', 0, async function (done) {
      TAG = "SUB_AA_OpenHarmony_UserContext_0800"
      console.log(TAG + " --- start");
      let abilityStageBundleContext1 = globalThis.abilityStageContext.createBundleContext(
        "com.example.usercontextpropertiestest");

      checkBundleContextDir(abilityStageBundleContext1);

      function SubscribeCallBack(err, data) {
        console.log(TAG + " Subscribe CallBack data: " + JSON.stringify(data)
          + "err: " + JSON.stringify(err));
        let abilityBundleContext2 = globalThis.abilityStageContextA.createBundleContext(
          "com.example.usercontextpropertiestest");
        checkContextDirEqualA(abilityStageBundleContext1, abilityBundleContext2);
        commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
      }

      await commonEvent.createSubscriber(subscriberInfo_AbilityContext).then(async (data) => {
        console.log(TAG + " Create Subscriber");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      function UnSubscribeCallback() {
        console.log(TAG + " UnSubscribe CallBack");
        done();
      }

      await abilityContext.startAbility({
        bundleName: "com.example.usercontextpropertiestest",
        abilityName: "MainAbility3",
      }).then((data) => {
        console.log(TAG + ' - startAbility: ' + JSON.stringify(data));
      }).catch((err) => {
        console.log(TAG + " - start failed" + JSON.stringify(err));
        expect.assertFail()
        done()
      })
    });

    /**
     * @tc.number: SUB_AA_OpenHarmony_UserContext_0900
     * @tc.name: Under Multi-user Check that ApplicationContext paths of different
     * Ability in the different hap are the same.
     * @tc.desc: Function test
     * @tc.level   3
     */
    it('SUB_AA_OpenHarmony_UserContext_0900', 0, async function (done) {
      TAG = "SUB_AA_OpenHarmony_UserContext_0900"
      console.log(TAG + " --- start");
      let abilityBundleContext1 = abilityContext.getApplicationContext()
        .createBundleContext("com.example.usercontextpropertiestest")
      let abilityStageBundleContext1 = globalThis.abilityStageContext.getApplicationContext()
        .createBundleContext(
          "com.example.usercontextpropertiestest");

      checkBundleContextDir(abilityBundleContext1);

      function SubscribeCallBack(err, data) {
        console.log(TAG + " Subscribe CallBack data: " + JSON.stringify(data)
          + "err: " + JSON.stringify(err));
        let abilityBundleContext2 = abilityContext.getApplicationContext()
          .createBundleContext("com.example.usercontextpropertiestest")
        let abilityStageBundleContext2 = globalThis.abilityStageContext.getApplicationContext()
          .createBundleContext(
            "com.example.usercontextpropertiestest");
        checkContextDirEqualA(abilityBundleContext1, abilityStageBundleContext1);
        checkContextDirEqualA(abilityBundleContext2, abilityStageBundleContext2);
        checkContextDirEqualA(abilityBundleContext1, abilityStageBundleContext2);
        commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
      }

      await commonEvent.createSubscriber(subscriberInfo_AbilityContext).then(async (data) => {
        console.log(TAG + " Create Subscriber");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      function UnSubscribeCallback() {
        console.log(TAG + " UnSubscribe CallBack");
        done();
      }

      await abilityContext.startAbility({
        bundleName: "com.example.usercontextpropertiestest",
        abilityName: "MainAbility3",
      }).then((data) => {
        console.log(TAG + ' - startAbility: ' + JSON.stringify(data));
      }).catch((err) => {
        console.log(TAG + " - start failed" + JSON.stringify(err));
        expect.assertFail()
        done()
      })
    });

    /**
     * @tc.number: SUB_AA_OpenHarmony_UserContext_1000
     * @tc.name: Under Multi-user Check that Context paths of different
     * Ability in the different hap are the same.
     * @tc.desc: Function test
     * @tc.level   3
     */
    it('SUB_AA_OpenHarmony_UserContext_1000', 0, async function (done) {
      TAG = "SUB_AA_OpenHarmony_UserContext_1000"
      console.log(TAG + " --- start");
      let abilityBundleContext1 = abilityContext.createBundleContext("com.example.usercontextpropertiestest");

      checkBundleContextDir(abilityBundleContext1);

      function SubscribeCallBack(err, data) {
        console.log(TAG + " Subscribe CallBack data: " + JSON.stringify(data)
          + "err: " + JSON.stringify(err));
        if (data.event == 'StartMainAbility4_CommonEvent_ContextOne') {
          checkAssistHapBundleContextDir(data.parameters.abilityBundleContextAssistTwo)
          commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
        }
      }

      await commonEvent.createSubscriber(subscriberInfo_AbilityContext).then(async (data) => {
        console.log(TAG + " Create Subscriber");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      function UnSubscribeCallback() {
        console.log(TAG + " UnSubscribe CallBack");
        done();
      }

      await abilityContext.startAbility({
        bundleName: "com.example.actsusercontextassisttwo",
        abilityName: "MainAbility4",
        parameters: {
          startId: 7,
        }
      }).then((data) => {
        console.log(TAG + ' - startAbility: ' + JSON.stringify(data));
      }).catch((err) => {
        console.log(TAG + " - start failed" + JSON.stringify(err));
        expect.assertFail()
        done()
      })
    });

    /**
     * @tc.number: SUB_AA_OpenHarmony_UserContext_1100
     * @tc.name: Under Multi-user Check that Context paths of different
     * Ability in the different hap are the same.
     * @tc.desc: Function test
     * @tc.level   3
     */
    it('SUB_AA_OpenHarmony_UserContext_1100', 0, async function (done) {
      TAG = "SUB_AA_OpenHarmony_UserContext_1100"
      console.log(TAG + " --- start");
      let abilityStageBundleContext1 = globalThis.abilityStageContext
        .createBundleContext("com.example.usercontextpropertiestest");

      checkBundleContextDir(abilityStageBundleContext1);

      function SubscribeCallBack(err, data) {
        console.log(TAG + " Subscribe CallBack data: " + JSON.stringify(data)
          + "err: " + JSON.stringify(err));
        if (data.event == 'AssistContextTwo_StageAbilityA_Start_CommonEvent') {
          checkAssistHapBundleContextDir(data.parameters.abilityStageBundleContxtAssistOne)
          commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
        }
      }

      await commonEvent.createSubscriber(subscriberInfo_AbilityContext).then(async (data) => {
        console.log(TAG + " Create Subscriber");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      function UnSubscribeCallback() {
        console.log(TAG + " UnSubscribe CallBack");
        done();
      }

      await abilityContext.startAbility({
        bundleName: "com.example.actsusercontextassisttwo",
        abilityName: "MainAbility4",
        parameters: {
          startId: 8,
        }
      }).then((data) => {
        console.log(TAG + ' - startAbility: ' + JSON.stringify(data));
      }).catch((err) => {
        console.log(TAG + " - start failed" + JSON.stringify(err));
        expect.assertFail()
        done()
      })
    });

    /**
     * @tc.number: SUB_AA_OpenHarmony_UserContext_2500
     * @tc.name: Under Multi-user Check that ApplicationContex paths of different
     * Ability in the different hap are the same.
     * @tc.desc: Function test
     * @tc.level   3
     */
    it('SUB_AA_OpenHarmony_UserContext_2500', 0, async function (done) {
      TAG = "SUB_AA_OpenHarmony_UserContext_2500"
      console.log(TAG + " --- start");
      let num = 0;
      let abilityStageAppBundleContext;
      let abilityAppBundleContext;
      let abilityAppBundleContext1 = globalThis.abilityStageContext.getApplicationContext()
        .createBundleContext("com.example.usercontextpropertiestest");
      let abilityStageAppBundleContext1 = globalThis.abilityStageContext.getApplicationContext()
        .createBundleContext("com.example.usercontextpropertiestest");

      checkBundleContextDir(abilityAppBundleContext1);
      checkContextDirEqualA(abilityAppBundleContext1, abilityStageAppBundleContext1)

      function SubscribeCallBack(err, data) {
        console.log(TAG + " Subscribe CallBack data: " + JSON.stringify(data)
          + "err: " + JSON.stringify(err));
        if (data.event == 'AssistContextTwo_StageAbilityA_Start_CommonEvent') {
          commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
        }
        if (data.event == 'AssistContextTwo_StageAbilityA_Start_CommonEvent') {
          console.log(TAG + " AssistContextTwo_StageAbilityA_Start_CommonEvent")
          num++;
          abilityStageAppBundleContext = data.parameters.abilityStageAppContextAssistOne
        }
        if (data.event == 'StartMainAbility4_CommonEvent_ContextOne') {
          console.log(TAG + " StartMainAbility4_CommonEvent_ContextOne")
          num++;
          abilityAppBundleContext = data.parameters.abilityAppContextAssistTwo
        }
        if (num == 2) {
          console.log(TAG + " start expect");
          checkAssistHapBundleContextDir(abilityAppBundleContext)
          checkContextDirEqualA(abilityAppBundleContext, abilityStageAppBundleContext)
          commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
        }
      }

      await commonEvent.createSubscriber(subscriberInfo_AbilityContext).then(async (data) => {
        console.log(TAG + " Create Subscriber");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      function UnSubscribeCallback() {
        console.log(TAG + " UnSubscribe CallBack");
        done();
      }

      await abilityContext.startAbility({
        bundleName: "com.example.actsusercontextassisttwo",
        abilityName: "MainAbility4",
        parameters: {
          startId: 9,
        }
      }).then((data) => {
        console.log(TAG + ' - startAbility: ' + JSON.stringify(data));
      }).catch((err) => {
        console.log(TAG + " - start failed" + JSON.stringify(err));
        expect.assertFail()
        done()
      })
    });

    function checkApplicationContextDir(applicationContext) {
      expect(applicationContext.cacheDir).assertEqual("/data/storage/el2/base/cache");
      expect(applicationContext.tempDir).assertEqual("/data/storage/el2/base/temp");
      expect(applicationContext.filesDir).assertEqual("/data/storage/el2/base/files");
      expect(applicationContext.distributedFilesDir).assertEqual("/data/storage/el2/distributedfiles");
      expect(applicationContext.databaseDir).assertEqual("/data/storage/el2/database");
      expect(applicationContext.preferencesDir).assertEqual("/data/storage/el2/base/preferences");
      expect(applicationContext.bundleCodeDir).assertEqual("/data/storage/el1/bundle");
    }

    function checkAbilityContextDir() {
      expect(abilityContext.cacheDir).assertEqual("/data/storage/el2/base/haps/entry_test/cache");
      expect(abilityContext.tempDir).assertEqual("/data/storage/el2/base/haps/entry_test/temp");
      expect(abilityContext.filesDir).assertEqual("/data/storage/el2/base/haps/entry_test/files");
      expect(abilityContext.distributedFilesDir).assertEqual("/data/storage/el2/distributedfiles");
      expect(abilityContext.databaseDir).assertEqual("/data/storage/el2/database/entry_test");
      expect(abilityContext.preferencesDir).assertEqual("/data/storage/el2/base/haps/entry_test/preferences");
      expect(abilityContext.bundleCodeDir).assertEqual("/data/storage/el1/bundle");
    }

    function checkContextDirEqualA(abilityContext, abilityContext2) {
      expect(abilityContext.cacheDir).assertEqual(abilityContext2.cacheDir);
      expect(abilityContext.tempDir).assertEqual(abilityContext2.tempDir);
      expect(abilityContext.filesDir).assertEqual(abilityContext2.filesDir);
      expect(abilityContext.distributedFilesDir).assertEqual(abilityContext2.distributedFilesDir);
      expect(abilityContext.databaseDir).assertEqual(abilityContext2.databaseDir);
      expect(abilityContext.storageDir).assertEqual(abilityContext2.storageDir);
      expect(abilityContext.bundleCodeDir).assertEqual(abilityContext2.bundleCodeDir);
    }

    function checkContextDirEqualB(abilityContext, abilityContext2) {
      expect(abilityContext2.cacheDir == "/data/storage/el2/base/haps/feature_assistone/cache" &&
        abilityContext2.cacheDir != abilityContext.cacheDir).assertTrue();
      expect(abilityContext2.databaseDir == "/data/storage/el2/database/feature_assistone" &&
        abilityContext2.databaseDir != abilityContext.databaseDir).assertTrue();
      expect(abilityContext2.filesDir == "/data/storage/el2/base/haps/feature_assistone/files" &&
        abilityContext2.filesDir != abilityContext.filesDir).assertTrue();
      expect(abilityContext2.preferencesDir == "/data/storage/el2/base/haps/feature_assistone/preferences" &&
        abilityContext2.preferencesDir != abilityContext.preferencesDir).assertTrue();
      expect(abilityContext2.tempDir == "/data/storage/el2/base/haps/feature_assistone/temp" &&
        abilityContext2.tempDir != abilityContext.tempDir).assertTrue();
      expect(abilityContext.distributedFilesDir).assertEqual(abilityContext2.distributedFilesDir);
      expect(abilityContext.bundleCodeDir).assertEqual(abilityContext2.bundleCodeDir);
    }

    function checkAbilityStageContextDir() {
      expect(globalThis.abilityStageContext.cacheDir).assertEqual("/data/storage/el2/base/haps/entry_test/cache");
      expect(globalThis.abilityStageContext.tempDir).assertEqual("/data/storage/el2/base/haps/entry_test/temp");
      expect(globalThis.abilityStageContext.filesDir).assertEqual("/data/storage/el2/base/haps/entry_test/files");
      expect(globalThis.abilityStageContext.distributedFilesDir).assertEqual("/data/storage/el2/distributedfiles");
      expect(globalThis.abilityStageContext.databaseDir).assertEqual("/data/storage/el2/database/entry_test");
      expect(globalThis.abilityStageContext.preferencesDir).assertEqual("/data/storage/el2/base/haps/entry_test/preferences");
      expect(globalThis.abilityStageContext.bundleCodeDir).assertEqual("/data/storage/el1/bundle");
    }

    function checkBundleContextDir(bundleContext) {
      expect(bundleContext.bundleCodeDir).assertEqual("/data/bundles/com.example.usercontextpropertiestest");
      expect(bundleContext.tempDir).assertEqual("/data/app/el2/101/base/com.example.usercontextpropertiestest/temp");
      expect(bundleContext.filesDir).assertEqual("/data/app/el2/101/base/com.example.usercontextpropertiestest/files");
      expect(bundleContext.cacheDir).assertEqual("/data/app/el2/101/base/com.example.usercontextpropertiestest/cache");
      expect(bundleContext.databaseDir).assertEqual("/data/app/el2/101/database/com.example.usercontextpropertiestest");
      expect(bundleContext.preferencesDir).assertEqual("/data/app/el2/101/base/com.example.usercontextpropertiestest/preferences");
      expect(bundleContext.distributedFilesDir).assertEqual("/mnt/hmdfs/101/device_view/local/data/com.example.usercontextpropertiestest");
    }

    function checkAssistHapBundleContextDir(bundleContext) {
      expect(bundleContext.bundleCodeDir).assertEqual("/data/bundles/com.example.actsusercontextassisttwo");
      expect(bundleContext.tempDir).assertEqual("/data/app/el2/101/base/com.example.actsusercontextassisttwo/temp");
      expect(bundleContext.filesDir).assertEqual("/data/app/el2/101/base/com.example.actsusercontextassisttwo/files");
      expect(bundleContext.cacheDir).assertEqual("/data/app/el2/101/base/com.example.actsusercontextassisttwo/cache");
      expect(bundleContext.databaseDir).assertEqual("/data/app/el2/101/database/com.example.actsusercontextassisttwo");
      expect(bundleContext.preferencesDir).assertEqual("/data/app/el2/101/base/com.example.actsusercontextassisttwo/preferences");
      expect(bundleContext.distributedFilesDir).assertEqual("/mnt/hmdfs/101/device_view/local/data/com.example.actsusercontextassisttwo");
    }
  })
}