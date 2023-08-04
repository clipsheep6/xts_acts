/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
import formHost from '@ohos.app.form.formObserver';
import formInfo from '@ohos.app.form.formInfo';
import commonEvent from '@ohos.commonEventManager'
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry'
import appManager from '@ohos.app.ability.appManager';
let ACTS_CARD = {
  events: ["ACTS_FormIdA", "ACTS_FormIdB", "ACTS_FormIdC", "ACTS_FormIdD", "ACTS_FormIdE", "ACTS_FormIdF","ACTS_FormIdG","ACTS_FormIdH","ACTS_FormIdI"]
};
const ERR_FORM_EXTERNAL_PARAM_INVALID = 401;
const ERR_FORM_EXTERNAL_GET_INFO_FAILED = 16500100;
export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    beforeEach(async function () {
      sleep(500);
    })
    afterEach(async function () {
      sleep(500);
    })

    function sleep(delay) {
      let start = new Date().getTime();
      while (true) {
        if (new Date().getTime() - start > delay) {
          break;
        }
      }
    }

    /**
     * @tc.number: Acts_QueryFormInformation_0100
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_0100', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
          console.info("====>Acts_QueryFormInformation_0100 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_0100 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_0100 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_0100 start ============');

      async function subscribeCallBack(err, data) {
        console.info("Acts_QueryFormInformation_0100 ====>subscribeCallBack start ==========================>")
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }

        console.info("Acts_QueryFormInformation_0100 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_0100 ====> subscribeCallBack data:" + JSON.stringify(data));
        let formInstanceFilter = {
          bundleName: "com.example.formprovide",
        }
        await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
          console.info('Acts_QueryFormInformation_0100 getRunningFormInfosByFilter promise data is :' + JSON.stringify(dataPromise));
          expect(dataPromise.length).assertEqual(1);
          for (let n = 0; n < data.length; n++) {
            expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
            expect(dataPromise[n].formId).assertEqual(formId);
            expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
            expect(dataPromise[n].dimension).assertEqual(2);
            expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
            expect(dataPromise[n].moduleName).assertEqual("entry");
            expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
            expect(dataPromise[n].formName).assertEqual("widget");
          }
          await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataCallback) => {
            console.info('Acts_QueryFormInformation_0100 getRunningFormInfosByFilter callback data is :' + JSON.stringify(dataCallback));
            expect(dataCallback.length).assertEqual(1);
            for (let n = 0; n < data.length; n++) {
              expect(dataCallback[n].hostBundleName).assertEqual("com.example.formuser");
              expect(dataCallback[n].formId).assertEqual(formId);
              expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
              expect(dataCallback[n].dimension).assertEqual(2);
              expect(dataCallback[n].bundleName).assertEqual("com.example.formprovide");
              expect(dataCallback[n].moduleName).assertEqual("entry");
              expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
              expect(dataCallback[n].formName).assertEqual("widget");
            }
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_0100 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_0100 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_0200
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_0200', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then((async (data) => {
          console.info("====>Acts_QueryFormInformation_0200 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_0200 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_0200 ====> startAbility data:" + JSON.stringify(data));
          });
        }));
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_0200 start ============');

      async function subscribeCallBack(err, data) {
        console.info("Acts_QueryFormInformation_0200 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_0200 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        let formInstanceFilter = {
          bundleName: "com.example.test"
        }
        await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(dataPromise => {
          console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
          expect(false).assertTrue();
        }).catch(async err => {
          expect(err.code).assertEqual(ERR_FORM_EXTERNAL_GET_INFO_FAILED);
          console.info("Acts_QueryFormInformation_0900 errcode1 ====>" + err.code);
          await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataCallback) => {
            console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataCallback));
            expect(err.code).assertEqual(ERR_FORM_EXTERNAL_GET_INFO_FAILED);
            console.info("Acts_QueryFormInformation_0200 form id ====>" + formId);
            console.info('=============Acts_QueryFormInformation_0200 end ============');
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_0200 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_0200 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_0300
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_0300', 0, async function (done) {
      console.info('=============Acts_QueryFormInformation_0300 start ============');
      try {
        let formInstanceFilter = {
          bundleName: undefined
        }
        await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(dataPromise => {
          console.info("Acts_QueryFormInformation_0300 run error ====>");
          expect(false).assertTrue();
          done();
        });
      } catch (err) {
        console.info("Acts_QueryFormInformation_0300 err ====>" + err);
        console.info("Acts_QueryFormInformation_0300 err.code ====>" + err.code);
        expect(err.code).assertEqual(ERR_FORM_EXTERNAL_PARAM_INVALID);
        console.info('=============Acts_QueryFormInformation_0300 end ============');
        try {
          let formInstanceFilter = {
            bundleName: undefined
          }
          await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataCallback) => {
            console.info("Acts_QueryFormInformation_0300 run error ====>");
            expect(false).assertTrue();
            done();
          });
        } catch (err) {
          console.info("Acts_QueryFormInformation_0300 err.code ====>" + err.code);
          expect(err.code).assertEqual(ERR_FORM_EXTERNAL_PARAM_INVALID);
          console.info('=============Acts_QueryFormInformation_0300 end ============');
        }
        done();
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_0400
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_0400', 0, async function (done) {
      try {
        let formInstanceFilter = {
          bundleName: ""
        }
        await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(dataPromise => {
          console.info("Acts_QueryFormInformation_0400 run error ====>");
          expect(false).assertTrue();
          done();
        });
      } catch (err) {
        console.info("Acts_QueryFormInformation_0400 err ====>" + err);
        console.info("Acts_QueryFormInformation_0400 err.code ====>" + err.code);
        expect(err.code).assertEqual(ERR_FORM_EXTERNAL_PARAM_INVALID);
        try {
          let formInstanceFilter = {
            bundleName: ""
          }
          await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataCallback) => {
            console.info("Acts_QueryFormInformation_0400 run error ====>");
            expect(false).assertTrue();
            done();
          });
        } catch (err) {
          console.info("Acts_QueryFormInformation_0400 err ====>" + err);
          console.info("Acts_QueryFormInformation_0400 err.code ====>" + err.code);
          expect(err.code).assertEqual(ERR_FORM_EXTERNAL_PARAM_INVALID);
          console.info('=============Acts_QueryFormInformation_0400 end ============');
          done();
        }
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_0500
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_0500', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
          console.info("====>Acts_QueryFormInformation_0500 Create Subscriber====>");
          console.info("====>Acts_QueryFormInformation_0500 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_0500 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_0500 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_0500 start ============');

      async function subscribeCallBack(err, data) {
        console.info("Acts_QueryFormInformation_0500 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_0500 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        let formInstanceFilter = {
          bundleName: "com.example.formprovide",
          moduleName: "entry"
        }
        await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
          console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
          expect(dataPromise.length).assertEqual(1);
          for (let n = 0; n < data.length; n++) {
            expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
            expect(dataPromise[n].formId).assertEqual(formId);
            expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
            expect(dataPromise[n].dimension).assertEqual(2);
            expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
            expect(dataPromise[n].moduleName).assertEqual("entry");
            expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
            expect(dataPromise[n].formName).assertEqual("widget");
          }
          console.info("Acts_QueryFormInformation_0500 form id ====>" + formId);
          await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataPromise) => {
            console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(1);
            for (let n = 0; n < data.length; n++) {
              expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
              expect(dataPromise[n].formId).assertEqual(formId);
              expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
              expect(dataPromise[n].dimension).assertEqual(2);
              expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
              expect(dataPromise[n].moduleName).assertEqual("entry");
              expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
              expect(dataPromise[n].formName).assertEqual("widget");
            }
            console.info("Acts_QueryFormInformation_0500 form id ====>" + formId);
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_0500 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_0500 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_0600
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_0600', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
          console.info("====>Acts_QueryFormInformation_0600 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_0600 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_0600 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_0600 start ============');

      async function subscribeCallBack(err, data) {
        console.info("Acts_QueryFormInformation_0600 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_0600 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        let formInstanceFilter = {
          bundleName: "com.example.formprovide",
          moduleName: "testmodule"
        }
        await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(dataPromise => {
          expect(false).assertTrue();
        }).catch(async err => {
          expect(err.code).assertEqual(ERR_FORM_EXTERNAL_GET_INFO_FAILED);
          console.info("Acts_QueryFormInformation_0900 errcode1 ====>" + err.code);
          await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataPromise) => {
            console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
            expect(err.code).assertEqual(ERR_FORM_EXTERNAL_GET_INFO_FAILED);
            console.info("Acts_QueryFormInformation_0600 form id ====>" + formId);
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_0600 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_0600 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_0700
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_0700', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
          console.info("====>Acts_QueryFormInformation_0700 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_0700 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_0700 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_0700 start ============');

      async function subscribeCallBack(err, data) {
        console.info("Acts_QueryFormInformation_0700 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_0700 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        let formInstanceFilter = {
          bundleName: "com.example.formprovide",
          moduleName: undefined
        }
        await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
          console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
          expect(dataPromise.length).assertEqual(1);
          for (let n = 0; n < data.length; n++) {
            expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
            expect(dataPromise[n].formId).assertEqual(formId);
            expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
            expect(dataPromise[n].dimension).assertEqual(2);
            expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
            expect(dataPromise[n].moduleName).assertEqual("entry");
            expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
            expect(dataPromise[n].formName).assertEqual("widget");
          }
          console.info("Acts_QueryFormInformation_0700 form id ====>" + formId)
          await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataPromise) => {
            console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(1);
            for (let n = 0; n < data.length; n++) {
              expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
              expect(dataPromise[n].formId).assertEqual(formId);
              expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
              expect(dataPromise[n].dimension).assertEqual(2);
              expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
              expect(dataPromise[n].moduleName).assertEqual("entry");
              expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
              expect(dataPromise[n].formName).assertEqual("widget");
            }
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_0700 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_0700 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });


    /**
     * @tc.number: Acts_QueryFormInformation_0800
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_0800', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
          console.info("====>Acts_QueryFormInformation_0800 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.user_form_ten",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_0800 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_0800 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_0800 start ============');

      async function subscribeCallBack(err, data) {
        console.info("Acts_QueryFormInformation_0800 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_0800 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        let formInstanceFilter = {
          bundleName: "com.example.provider_form_seven",
          abilityName: "EntryFormAbility"
        }
        await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
          console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
          expect(dataPromise.length).assertEqual(1);
          for (let n = 0; n < data.length; n++) {
            expect(dataPromise[n].hostBundleName).assertEqual("com.example.user_form_ten");
            expect(dataPromise[n].formId).assertEqual(formId);
            expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
            expect(dataPromise[n].dimension).assertEqual(2);
            expect(dataPromise[n].bundleName).assertEqual("com.example.provider_form_seven");
            expect(dataPromise[n].moduleName).assertEqual("entry");
            expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
            expect(dataPromise[n].formName).assertEqual("widget");
          }
          console.info("Acts_QueryFormInformation_0800 form id ====>" + formId);
          await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataPromise) => {
            console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(1);
            for (let n = 0; n < data.length; n++) {
              expect(dataPromise[n].hostBundleName).assertEqual("com.example.user_form_ten");
              expect(dataPromise[n].formId).assertEqual(formId);
              expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
              expect(dataPromise[n].dimension).assertEqual(2);
              expect(dataPromise[n].bundleName).assertEqual("com.example.provider_form_seven");
              expect(dataPromise[n].moduleName).assertEqual("entry");
              expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
              expect(dataPromise[n].formName).assertEqual("widget");
            }
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_0800 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_0800 end ============');
              appManager.killProcessesByBundleName("com.example.user_form_ten");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_0900
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_0900', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
          console.info("====>Acts_QueryFormInformation_0900 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_0900 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_0900 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_0900 start ============');

      async function subscribeCallBack(err, data) {
        console.info("Acts_QueryFormInformation_0900 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_0900 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        let formInstanceFilter = {
          bundleName: "com.example.formprovide",
          abilityName: "AbilityTest"
        }

        await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(dataPromise => {
          console.info("Acts_QueryFormInformation_0900 errcode ====>" + err.code);
          console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
          expect(false).assertTrue();
          console.info("Acts_QueryFormInformation_0900 form id ====>" + formId);
        }).catch(async err => {
          expect(err.code).assertEqual(ERR_FORM_EXTERNAL_GET_INFO_FAILED);
          console.info("Acts_QueryFormInformation_0900 errcode ====>" + err.code);
          await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataPromise) => {
            console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
            console.info("Acts_QueryFormInformation_0900 errcode ====>" + err.code);
            expect(err.code).assertEqual(ERR_FORM_EXTERNAL_GET_INFO_FAILED);
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_0900 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_0900 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_1000
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_1000', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
          console.info("====>Acts_QueryFormInformation_1000 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_1000 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_1000 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_1000 start ============');

      async function subscribeCallBack(err, data) {
        console.info("Acts_QueryFormInformation_1000 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_1000 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        let formInstanceFilter = {
          bundleName: "com.example.formprovide",
          abilityName: undefined
        }
        await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
          console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
          expect(dataPromise.length).assertEqual(1);
          for (let n = 0; n < data.length; n++) {
            expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
            expect(dataPromise[n].formId).assertEqual(formId);
            expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
            expect(dataPromise[n].dimension).assertEqual(2);
            expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
            expect(dataPromise[n].moduleName).assertEqual("entry");
            expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
            expect(dataPromise[n].formName).assertEqual("widget");
          }
          console.info("Acts_QueryFormInformation_1000 form id ====>" + formId);
          await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataPromise) => {
            console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(1);
            for (let n = 0; n < data.length; n++) {
              expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
              expect(dataPromise[n].formId).assertEqual(formId);
              expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
              expect(dataPromise[n].dimension).assertEqual(2);
              expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
              expect(dataPromise[n].moduleName).assertEqual("entry");
              expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
              expect(dataPromise[n].formName).assertEqual("widget");
            }
            console.info("Acts_QueryFormInformation_1000 form id ====>" + formId);
            console.info('=============Acts_QueryFormInformation_1000 end ============');
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_1000 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_1000 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_1100
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_1100', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
          console.info("====>Acts_QueryFormInformation_1100 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.user_form_ten",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_1100 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_1100 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_1100 start ============');
      async function subscribeCallBack(err, data) {
        console.info("Acts_QueryFormInformation_1100 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_1100 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        let formInstanceFilter = {
          bundleName: "com.example.provider_form_seven",
          formName: "widget"
        }
        await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
          console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
          expect(dataPromise.length).assertEqual(1);
          for (let n = 0; n < data.length; n++) {
            expect(dataPromise[n].hostBundleName).assertEqual("com.example.user_form_ten");
            expect(dataPromise[n].formId).assertEqual(formId);
            expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
            expect(dataPromise[n].dimension).assertEqual(2);
            expect(dataPromise[n].bundleName).assertEqual("com.example.provider_form_seven");
            expect(dataPromise[n].moduleName).assertEqual("entry");
            expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
            expect(dataPromise[n].formName).assertEqual("widget");
          }
          console.info("Acts_QueryFormInformation_1100 form id ====>" + formId);
          await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataPromise) => {
            console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(1);
            for (let n = 0; n < data.length; n++) {
              expect(dataPromise[n].hostBundleName).assertEqual("com.example.user_form_ten");
              expect(dataPromise[n].formId).assertEqual(formId);
              expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
              expect(dataPromise[n].dimension).assertEqual(2);
              expect(dataPromise[n].bundleName).assertEqual("com.example.provider_form_seven");
              expect(dataPromise[n].moduleName).assertEqual("entry");
              expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
              expect(dataPromise[n].formName).assertEqual("widget");
            }
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_1100 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_1100 end ============');
              appManager.killProcessesByBundleName("com.example.user_form_ten");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_1200
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_1200', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
          console.info("====>Acts_QueryFormInformation_1200 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_1200 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_1200 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_1200 start ============');

      async function subscribeCallBack(err, data) {
        console.info("Acts_QueryFormInformation_1200 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_1200 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        let formInstanceFilter = {
          bundleName: "com.example.formprovide",
          formName: "test"
        }

        await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(dataPromise => {
          console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
          expect(true).assertFalse();
          console.info("Acts_QueryFormInformation_1200 form id ====>" + formId);
        }).catch(async err => {
          expect(err.code).assertEqual(ERR_FORM_EXTERNAL_GET_INFO_FAILED);
          console.info("Acts_QueryFormInformation_0900 errcode promise ====>" + err.code);
          await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataPromise) => {
            console.info("Acts_QueryFormInformation_0900 errcode callback ====>" + err.code);
            expect(err.code).assertEqual(ERR_FORM_EXTERNAL_GET_INFO_FAILED);
            console.info('=============Acts_QueryFormInformation_1200 end ============');
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_1200 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_1200 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_1300
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_1300', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
          console.info("====>Acts_QueryFormInformation_1300 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_1300 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_1300 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_1300 start ============');

      async function subscribeCallBack(err, data) {
        console.info("Acts_QueryFormInformation_1300 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_1300 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        let formInstanceFilter = {
          bundleName: "com.example.formprovide",
          formName: undefined
        }

        await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
          console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
          expect(dataPromise.length).assertEqual(1);
          for (let n = 0; n < data.length; n++) {
            expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
            expect(dataPromise[n].formId).assertEqual(formId);
            expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
            expect(dataPromise[n].dimension).assertEqual(2);
            expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
            expect(dataPromise[n].moduleName).assertEqual("entry");
            expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
            expect(dataPromise[n].formName).assertEqual("widget");
          }
          console.info("Acts_QueryFormInformation_1300 form id ====>" + formId);
          await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataPromise) => {
            console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(1);
            for (let n = 0; n < data.length; n++) {
              expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
              expect(dataPromise[n].formId).assertEqual(formId);
              expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
              expect(dataPromise[n].dimension).assertEqual(2);
              expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
              expect(dataPromise[n].moduleName).assertEqual("entry");
              expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
              expect(dataPromise[n].formName).assertEqual("widget");
            }
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_1300 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_1300 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_1400
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_1400', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
          console.info("====>Acts_QueryFormInformation_1400 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_1400 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_1400 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_1400 start ============');

      async function subscribeCallBack(err, data) {
        console.info("Acts_QueryFormInformation_1400 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_1400 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        let formInstanceFilter = {
          bundleName: "com.example.formprovide",
          moduleName: "entry",
          abilityName: "EntryFormAbility"
        }
        await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
          console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
          expect(dataPromise.length).assertEqual(1);
          for (let n = 0; n < data.length; n++) {
            expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
            expect(dataPromise[n].formId).assertEqual(formId);
            expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
            expect(dataPromise[n].dimension).assertEqual(2);
            expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
            expect(dataPromise[n].moduleName).assertEqual("entry");
            expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
            expect(dataPromise[n].formName).assertEqual("widget");
          }
          console.info("Acts_QueryFormInformation_1400 form id ====>" + formId);
          await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataPromise) => {
            console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(1);
            for (let n = 0; n < data.length; n++) {
              expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
              expect(dataPromise[n].formId).assertEqual(formId);
              expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
              expect(dataPromise[n].dimension).assertEqual(2);
              expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
              expect(dataPromise[n].moduleName).assertEqual("entry");
              expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
              expect(dataPromise[n].formName).assertEqual("widget");
            }
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_1400 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_1400 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_1500
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_1500', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async(data) => {
          console.info("====>Acts_QueryFormInformation_1500 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_1500 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_1500 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true)
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_1400 start ============');

      async function subscribeCallBack(err, data) {
        console.info("Acts_QueryFormInformation_1500 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_1500 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        let formInstanceFilter = {
          bundleName: "com.example.formprovide",
          moduleName: "entry",
          formName: "widget"
        }
        await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
          console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
          expect(dataPromise.length).assertEqual(1);
          for (let n = 0; n < data.length; n++) {
            expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
            expect(dataPromise[n].formId).assertEqual(formId);
            expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
            expect(dataPromise[n].dimension).assertEqual(2);
            expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
            expect(dataPromise[n].moduleName).assertEqual("entry");
            expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
            expect(dataPromise[n].formName).assertEqual("widget");
          }
          console.info("Acts_QueryFormInformation_1500 form id ====>" + formId);
          await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataPromise) => {
            console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(1);
            for (let n = 0; n < data.length; n++) {
              expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
              expect(dataPromise[n].formId).assertEqual(formId);
              expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
              expect(dataPromise[n].dimension).assertEqual(2);
              expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
              expect(dataPromise[n].moduleName).assertEqual("entry");
              expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
              expect(dataPromise[n].formName).assertEqual("widget");
            }
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_1500 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_1500 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_1600
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_1600', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
          console.info("====>Acts_QueryFormInformation_1600 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_1600 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_1600 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_1600 start ============');

      async function subscribeCallBack(err, data) {
        console.info("Acts_QueryFormInformation_1600 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_1600 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        let formInstanceFilter = {
          bundleName: "com.example.formprovide",
          abilityName: "EntryFormAbility",
          formName: "widget"
        }
        await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
          console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
          expect(dataPromise.length).assertEqual(1);
          for (let n = 0; n < data.length; n++) {
            expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
            expect(dataPromise[n].formId).assertEqual(formId);
            expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
            expect(dataPromise[n].dimension).assertEqual(2);
            expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
            expect(dataPromise[n].moduleName).assertEqual("entry");
            expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
            expect(dataPromise[n].formName).assertEqual("widget");
          }
          console.info("Acts_QueryFormInformation_1600 form id ====>" + formId);
          await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataPromise) => {
            console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(1);
            for (let n = 0; n < data.length; n++) {
              expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
              expect(dataPromise[n].formId).assertEqual(formId);
              expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
              expect(dataPromise[n].dimension).assertEqual(2);
              expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
              expect(dataPromise[n].moduleName).assertEqual("entry");
              expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
              expect(dataPromise[n].formName).assertEqual("widget");
            }
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_1600 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_1600 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_1700
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_1700', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
          console.info("====>Acts_QueryFormInformation_1700 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_1700 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_1700 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_1700 start ============');

      async function subscribeCallBack(err, data) {
        console.info("Acts_QueryFormInformation_1700 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_1700 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        let formInstanceFilter = {
          bundleName: "com.example.formprovide",
          abilityName: "EntryFormAbility",
          formName: "widget",
          moduleName: "entry"
        }
        await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
          console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
          expect(dataPromise.length).assertEqual(1);
          for (let n = 0; n < data.length; n++) {
            expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
            expect(dataPromise[n].formId).assertEqual(formId);
            expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
            expect(dataPromise[n].dimension).assertEqual(2);
            expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
            expect(dataPromise[n].moduleName).assertEqual("entry");
            expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
            expect(dataPromise[n].formName).assertEqual("widget");
          }
          console.info("Acts_QueryFormInformation_1700 form id ====>" + formId);
          await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataPromise) => {
            console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(1);
            for (let n = 0; n < data.length; n++) {
              expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
              expect(dataPromise[n].formId).assertEqual(formId);
              expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
              expect(dataPromise[n].dimension).assertEqual(2);
              expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
              expect(dataPromise[n].moduleName).assertEqual("entry");
              expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
              expect(dataPromise[n].formName).assertEqual("widget");
            }
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_1700 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_1700 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          });
        });

      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_1800
     * @tc.name: get running form infos by formId.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_1800', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async(data) => {
          console.info("====>Acts_QueryFormInformation_1800 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_1800 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_1800 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_1800 start ============');

      async function subscribeCallBack(err, data) {
        console.info("Acts_QueryFormInformation_1800 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_1800 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        await formHost.getRunningFormInfoById(formId).then(async dataPromise => {
          console.info('getRunningFormInfoById data is :' + JSON.stringify(dataPromise));
          expect(dataPromise.hostBundleName).assertEqual("com.example.formuser");
          expect(dataPromise.formId).assertEqual(formId);
          expect(dataPromise.visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
          expect(dataPromise.dimension).assertEqual(2);
          expect(dataPromise.bundleName).assertEqual("com.example.formprovide");
          expect(dataPromise.moduleName).assertEqual("entry");
          expect(dataPromise.abilityName).assertEqual("EntryFormAbility");
          expect(dataPromise.formName).assertEqual("widget");
          console.info("Acts_QueryFormInformation_1800 form id ====>" + formId);
          await formHost.getRunningFormInfoById(formId, (err, dataPromise) => {
            console.info('getRunningFormInfosByFilter data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.hostBundleName).assertEqual("com.example.formuser");
            expect(dataPromise.formId).assertEqual(formId);
            expect(dataPromise.visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
            expect(dataPromise.dimension).assertEqual(2);
            expect(dataPromise.bundleName).assertEqual("com.example.formprovide");
            expect(dataPromise.moduleName).assertEqual("entry");
            expect(dataPromise.abilityName).assertEqual("EntryFormAbility");
            expect(dataPromise.formName).assertEqual("widget");
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_1800 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_1800 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_1900
     * @tc.name: get running form infos by formId.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_1900', 0, async function (done) {
      let formId;
      let subscriber;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async(data) => {
          console.info("====>Acts_QueryFormInformation_1900 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_1900 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_1900 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_1900 start ============');

      async function subscribeCallBack(err, data) {
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        console.info("Acts_QueryFormInformation_1900 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_1900 ====> subscribeCallBack data:" + JSON.stringify(data));
        await formHost.getRunningFormInfoById("111").then(dataPromise => {
          console.info('getRunningFormInfoById data promise is :' + JSON.stringify(dataPromise));
          expect(false).assertTrue();
        }).catch(async err => {
          expect(err.code).assertEqual(ERR_FORM_EXTERNAL_GET_INFO_FAILED);
          console.info("Acts_QueryFormInformation_1900 errcode1 ====>" + err.code);
          await formHost.getRunningFormInfoById("111",  (err, dataPromise) => {
            console.info('getRunningFormInfoById data callback is :' + JSON.stringify(dataPromise));
            expect(err.code).assertEqual(ERR_FORM_EXTERNAL_GET_INFO_FAILED);
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_1900 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_1900 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_2000
     * @tc.name: get running form infos by formId.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_2000', 0, async function (done) {
      console.info('=============Acts_QueryFormInformation_2000 start ============');
      try{
        await formHost.getRunningFormInfoById("").then(dataPromise => {
          console.info('getRunningFormInfoById return error');
          expect(false).assertTrue();
        });
      } catch(error) {
        expect(error.code).assertEqual(ERR_FORM_EXTERNAL_PARAM_INVALID);
        try{
          await formHost.getRunningFormInfoById("", (err, dataPromise) => {
            console.info('getRunningFormInfoById return error');
            expect(false).assertTrue();
          });
        } catch(error) {
          expect(error.code).assertEqual(ERR_FORM_EXTERNAL_PARAM_INVALID);
        }
        console.info('=============Acts_QueryFormInformation_2000 end ============');
        done();
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_2100
     * @tc.name: get running form infos by formId.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_2100', 0, async function (done) {
      try {
        await formHost.getRunningFormInfoById(undefined).then(dataPromise => {
          console.info('getRunningFormInfoById return err :');
          expect(false).assertTrue();
        });
      } catch(error) {
        expect(error.code).assertEqual(ERR_FORM_EXTERNAL_PARAM_INVALID);
        try {
          await formHost.getRunningFormInfoById(undefined, (err, dataPromise) => {
            console.info('getRunningFormInfoById return err :');
            expect(false).assertTrue();
          });
        } catch(error) {
          expect(error.code).assertEqual(ERR_FORM_EXTERNAL_PARAM_INVALID);
        }
        console.info('=============Acts_QueryFormInformation_2100 end ============');
        done();
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_2400
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_2400', 0, async function (done) {
      let subscriber;
      let formIdA;
      let formIdB;
      let formIdC;
      let flag = 0;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
          console.info("====>Acts_QueryFormInformation_2400 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, async (err, data) => {
            console.info("Acts_QueryFormInformation_2400 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_2400 ====> startAbility data:" + JSON.stringify(data));
          });
          sleep(100);
          globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser2",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_2400 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_2400 ====> startAbility data:" + JSON.stringify(data));
          });
          sleep(100);
          globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser3",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_2400 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_2400 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_2400 start ============');

      async function subscribeCallBack(err, data) {
        console.info("Acts_QueryFormInformation_2400 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_2400 ====> subscribeCallBack data:" + JSON.stringify(data));
        sleep(500);
        let formInstanceFilter = {
          bundleName: "com.example.formprovide",
        }
        if (data.event == "ACTS_FormIdA") {
          formIdA = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdB") {
          formIdB = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdC") {
          formIdC = data.parameters.formId;
          flag++;
        }
        if (flag == 3) {
          await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
            console.info('Acts_QueryFormInformation_2400 getRunningFormInfosByFilter promise data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(3);
            let user1flag = false;
            let user2flag = false;
            let user3flag = false;
            for (let n = 0; n < dataPromise.length; n++) {
              if (dataPromise[n].hostBundleName == "com.example.formuser") {
                expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
                expect(dataPromise[n].formId).assertEqual(formIdA);
                expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataPromise[n].dimension).assertEqual(2);
                expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
                expect(dataPromise[n].moduleName).assertEqual("entry");
                expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
                expect(dataPromise[n].formName).assertEqual("widget");
                user1flag = true;
              } else if (dataPromise[n].hostBundleName == "com.example.formuser2") {
                expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser2");
                expect(dataPromise[n].formId).assertEqual(formIdB);
                expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataPromise[n].dimension).assertEqual(2);
                expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
                expect(dataPromise[n].moduleName).assertEqual("entry");
                expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
                expect(dataPromise[n].formName).assertEqual("widget");
                user2flag = true;
              } else if (dataPromise[n].hostBundleName == "com.example.formuser3") {
                expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser3");
                expect(dataPromise[n].formId).assertEqual(formIdC);
                expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataPromise[n].dimension).assertEqual(2);
                expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
                expect(dataPromise[n].moduleName).assertEqual("entry");
                expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
                expect(dataPromise[n].formName).assertEqual("widget");
                user3flag = true;
              } else {
                expect(false).assertTrue();
              }
            }
            expect(user1flag).assertTrue();
            expect(user2flag).assertTrue();
            expect(user3flag).assertTrue();
            await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataCallback) => {
              console.info('Acts_QueryFormInformation_2400 getRunningFormInfosByFilter callback data is :' + JSON.stringify(dataCallback));
              expect(dataCallback.length).assertEqual(3);
              let user1flag = false;
              let user2flag = false;
              let user3flag = false;
              for (let n = 0; n < dataCallback.length; n++) {
                if (dataCallback[n].hostBundleName == "com.example.formuser") {
                  expect(dataCallback[n].hostBundleName).assertEqual("com.example.formuser");
                  expect(dataCallback[n].formId).assertEqual(formIdA);
                  expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                  expect(dataCallback[n].dimension).assertEqual(2);
                  expect(dataCallback[n].bundleName).assertEqual("com.example.formprovide");
                  expect(dataCallback[n].moduleName).assertEqual("entry");
                  expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
                  expect(dataCallback[n].formName).assertEqual("widget");
                  user1flag = true;
                } else if (dataCallback[n].hostBundleName == "com.example.formuser2") {
                  expect(dataCallback[n].hostBundleName).assertEqual("com.example.formuser2");
                  expect(dataCallback[n].formId).assertEqual(formIdB);
                  expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                  expect(dataCallback[n].dimension).assertEqual(2);
                  expect(dataCallback[n].bundleName).assertEqual("com.example.formprovide");
                  expect(dataCallback[n].moduleName).assertEqual("entry");
                  expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
                  expect(dataCallback[n].formName).assertEqual("widget");
                  user2flag = true;
                } else if (dataCallback[n].hostBundleName == "com.example.formuser3") {
                  expect(dataCallback[n].hostBundleName).assertEqual("com.example.formuser3");
                  expect(dataCallback[n].formId).assertEqual(formIdC);
                  expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                  expect(dataCallback[n].dimension).assertEqual(2);
                  expect(dataCallback[n].bundleName).assertEqual("com.example.formprovide");
                  expect(dataCallback[n].moduleName).assertEqual("entry");
                  expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
                  expect(dataCallback[n].formName).assertEqual("widget");
                  user3flag = true;
                } else {
                  expect(false).assertTrue();
                }
              }
              expect(user1flag).assertTrue();
              expect(user2flag).assertTrue();
              expect(user3flag).assertTrue();
              commonEvent.unsubscribe(subscriber, function () {
                console.log('====>Acts_QueryFormInformation_2400 unsubscribe' + JSON.stringify(data));
                console.info('=============Acts_QueryFormInformation_2400 end ============');
                appManager.killProcessesByBundleName("com.example.formuser");
                appManager.killProcessesByBundleName("com.example.formuser2");
                appManager.killProcessesByBundleName("com.example.formuser3");
                formHost.deleteForm(formIdA);
                formHost.deleteForm(formIdB);
                formHost.deleteForm(formIdC);
                done();
              });
            });
          });
        }
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_2500
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_2500', 0, async function (done) {
      let subscriber;
      let formIdA;
      let formIdB;
      let formIdC;
      let flag = 0;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
          console.info("====>Acts_QueryFormInformation_2500 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, async (err, data) => {
            console.info("Acts_QueryFormInformation_2500 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_2500 ====> startAbility data:" + JSON.stringify(data));
          });
          sleep(100);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser2",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_2500 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_2500 ====> startAbility data:" + JSON.stringify(data));
          });
          sleep(100);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser3",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_2500 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_2500 ====> startAbility data:" + JSON.stringify(data));
          })
        });

      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_2500 start ============');

      async function subscribeCallBack(err, data) {
        sleep(500);
        console.info("Acts_QueryFormInformation_2500 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_2500 ====> subscribeCallBack data:" + JSON.stringify(data));

        let formInstanceFilter = {
          bundleName: "com.example.formprovide",
          abilityName: "EntryFormAbility",
          formName: "widget",
          moduleName: "entry"
        }
        if (data.event == "ACTS_FormIdA") {
          formIdA = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdB") {
          formIdB = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdC") {
          formIdC = data.parameters.formId;
          flag++;
        }
        if (flag == 3) {
          await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
            console.info('Acts_QueryFormInformation_2500 getRunningFormInfosByFilter promise data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(3);
            let user1flag = false;
            let user2flag = false;
            let user3flag = false;
            for (let n = 0; n < dataPromise.length; n++) {
              if (dataPromise[n].hostBundleName == "com.example.formuser") {
                expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
                expect(dataPromise[n].formId).assertEqual(formIdA);
                expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataPromise[n].dimension).assertEqual(2);
                expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
                expect(dataPromise[n].moduleName).assertEqual("entry");
                expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
                expect(dataPromise[n].formName).assertEqual("widget");
                user1flag = true
              } else if (dataPromise[n].hostBundleName == "com.example.formuser2") {
                expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser2");
                expect(dataPromise[n].formId).assertEqual(formIdB);
                expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataPromise[n].dimension).assertEqual(2);
                expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
                expect(dataPromise[n].moduleName).assertEqual("entry");
                expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
                expect(dataPromise[n].formName).assertEqual("widget");
                user2flag = true
              } else if (dataPromise[n].hostBundleName == "com.example.formuser3") {
                expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser3");
                expect(dataPromise[n].formId).assertEqual(formIdC);
                expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataPromise[n].dimension).assertEqual(2);
                expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
                expect(dataPromise[n].moduleName).assertEqual("entry");
                expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
                expect(dataPromise[n].formName).assertEqual("widget");
                user3flag = true
              } else {
                expect(false).assertTrue();
              }
            }
            expect(user1flag).assertTrue();
            expect(user2flag).assertTrue();
            expect(user3flag).assertTrue();
            await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataCallback) => {
              console.info('Acts_QueryFormInformation_2500 getRunningFormInfosByFilter callback data is :' + JSON.stringify(dataCallback));
              expect(dataCallback.length).assertEqual(3);
              let user1flag = false;
              let user2flag = false;
              let user3flag = false;
              for (let n = 0; n < dataCallback.length; n++) {
                if (dataCallback[n].hostBundleName == "com.example.formuser") {
                  expect(dataCallback[n].hostBundleName).assertEqual("com.example.formuser");
                  expect(dataCallback[n].formId).assertEqual(formIdA);
                  expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                  expect(dataCallback[n].dimension).assertEqual(2);
                  expect(dataCallback[n].bundleName).assertEqual("com.example.formprovide");
                  expect(dataCallback[n].moduleName).assertEqual("entry");
                  expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
                  expect(dataCallback[n].formName).assertEqual("widget");
                  user1flag = true;
                } else if (dataCallback[n].hostBundleName == "com.example.formuser2") {
                  expect(dataCallback[n].hostBundleName).assertEqual("com.example.formuser2");
                  expect(dataCallback[n].formId).assertEqual(formIdB);
                  expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                  expect(dataCallback[n].dimension).assertEqual(2);
                  expect(dataCallback[n].bundleName).assertEqual("com.example.formprovide");
                  expect(dataCallback[n].moduleName).assertEqual("entry");
                  expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
                  expect(dataCallback[n].formName).assertEqual("widget");
                  user2flag = true;
                } else if (dataCallback[n].hostBundleName == "com.example.formuser3") {
                  expect(dataCallback[n].hostBundleName).assertEqual("com.example.formuser3");
                  expect(dataCallback[n].formId).assertEqual(formIdC);
                  expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                  expect(dataCallback[n].dimension).assertEqual(2);
                  expect(dataCallback[n].bundleName).assertEqual("com.example.formprovide");
                  expect(dataCallback[n].moduleName).assertEqual("entry");
                  expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
                  expect(dataCallback[n].formName).assertEqual("widget");
                  user3flag = true;
                } else {
                  expect(false).assertTrue();
                }
              }
              expect(user1flag).assertTrue();
              expect(user2flag).assertTrue();
              expect(user3flag).assertTrue();
              commonEvent.unsubscribe(subscriber, function () {
                console.log('====>Acts_QueryFormInformation_2500 unsubscribe' + JSON.stringify(data));
                console.info('=============Acts_QueryFormInformation_2500 end ============');
                appManager.killProcessesByBundleName("com.example.formuser");
                appManager.killProcessesByBundleName("com.example.formuser2");
                appManager.killProcessesByBundleName("com.example.formuser3");
                formHost.deleteForm(formIdA);
                formHost.deleteForm(formIdB);
                formHost.deleteForm(formIdC);
                done();
              });
            });
          });
        }
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_2600
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_2600', 0, async function (done) {
      let subscriber;
      let formId;
      let formIdA;
      let formIdB;
      let formIdC;
      let flag = 0;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
          console.info("====>Acts_QueryFormInformation_2600 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.userformfourth",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_2600 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_2600 ====> startAbility data:" + JSON.stringify(data));
          })
        })
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_2600 start ============');

      async function subscribeCallBack(err, data) {
        sleep(500);
        console.info("Acts_QueryFormInformation_2600 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_2600 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formIdA = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdB") {
          formIdB = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdC") {
          formIdC = data.parameters.formId;
          flag++;
        }
        let formInstanceFilter = {
          bundleName: "com.example.formprovidersecond",
          moduleName: "entry"
        }
        if (flag == 3) {
          await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
            console.info('getRunningFormInfosByFilter promise data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(1);
            for (let n = 0; n < data.length; n++) {
              expect(dataPromise[n].hostBundleName).assertEqual("com.example.userformfourth");
              expect(dataPromise[n].formId).assertEqual(formIdA);
              expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
              expect(dataPromise[n].dimension).assertEqual(2);
              expect(dataPromise[n].bundleName).assertEqual("com.example.formprovidersecond");
              expect(dataPromise[n].moduleName).assertEqual("entry");
              expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
              expect(dataPromise[n].formName).assertEqual("widget");
            }
            console.info("Acts_QueryFormInformation_2600 form id ====>" + formIdA);
            await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataPromise) => {
              console.info('getRunningFormInfosByFilter callback data is :' + JSON.stringify(dataPromise));
              expect(dataPromise.length).assertEqual(1);
              for (let n = 0; n < data.length; n++) {
                expect(dataPromise[n].hostBundleName).assertEqual("com.example.userformfourth");
                expect(dataPromise[n].formId).assertEqual(formIdA);
                expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataPromise[n].dimension).assertEqual(2);
                expect(dataPromise[n].bundleName).assertEqual("com.example.formprovidersecond");
                expect(dataPromise[n].moduleName).assertEqual("entry");
                expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
                expect(dataPromise[n].formName).assertEqual("widget");
              }
              commonEvent.unsubscribe(subscriber, function () {
                console.log('====>Acts_QueryFormInformation_2600 unsubscribe' + JSON.stringify(data));
                console.info('=============Acts_QueryFormInformation_2500 end ============');
                appManager.killProcessesByBundleName("com.example.userformfourth");
                formHost.deleteForm(formIdA);
                formHost.deleteForm(formIdB);
                formHost.deleteForm(formIdC);
                done();
              });
            });
          });

        }
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_2700
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_2700', 0, async function (done) {
      let subscriber;
      let formIdA;
      let formIdB;
      let formIdC;
      let flag =0 ;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async(data) => {
          console.info("====>Acts_QueryFormInformation_2700 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.userformfourth",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_2700 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_2700 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_2700 start ============');

      async function subscribeCallBack(err, data) {
        console.info("Acts_QueryFormInformation_2700 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_2700 ====> subscribeCallBack data:" + JSON.stringify(data));
        sleep(500);
        if (data.event == "ACTS_FormIdA") {
          formIdA = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdB") {
          formIdB = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdC") {
          formIdC = data.parameters.formId;
          flag++;
        }
        let formInstanceFilter = {
          bundleName: "com.example.formprovidersecond",
        }
        if (flag == 3) {
          await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
            console.info('getRunningFormInfosByFilter promise data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(3);
            let user1flag = false;
            let user2flag = false;
            let user3flag = false;
            for (let n = 0; n < dataPromise.length; n++) {
              if (dataPromise[n].formId == formIdA) {
                console.info('=============Acts_QueryFormInformation_2700 dataPromise A ============');
                expect(dataPromise[n].hostBundleName).assertEqual("com.example.userformfourth");
                expect(dataPromise[n].formId).assertEqual(formIdA);
                expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataPromise[n].dimension).assertEqual(2);
                expect(dataPromise[n].bundleName).assertEqual("com.example.formprovidersecond");
                expect(dataPromise[n].moduleName).assertEqual("entry");
                expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
                expect(dataPromise[n].formName).assertEqual("widget");
                user1flag = true;
              } else if (dataPromise[n].formId == formIdB) {
                console.info('=============Acts_QueryFormInformation_2700 dataPromise B ============');
                expect(dataPromise[n].hostBundleName).assertEqual("com.example.userformfourth");
                expect(dataPromise[n].formId).assertEqual(formIdB);
                expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataPromise[n].dimension).assertEqual(2);
                expect(dataPromise[n].bundleName).assertEqual("com.example.formprovidersecond");
                expect(dataPromise[n].moduleName).assertEqual("second");
                expect(dataPromise[n].abilityName).assertEqual("SecondFormAbility");
                expect(dataPromise[n].formName).assertEqual("widget");
                user2flag = true;
              } else if (dataPromise[n].formId == formIdC) {
                console.info('=============Acts_QueryFormInformation_2700 dataPromise C ============');
                expect(dataPromise[n].hostBundleName).assertEqual("com.example.userformfourth");
                expect(dataPromise[n].formId).assertEqual(formIdC);
                expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataPromise[n].dimension).assertEqual(2);
                expect(dataPromise[n].bundleName).assertEqual("com.example.formprovidersecond");
                expect(dataPromise[n].moduleName).assertEqual("third");
                expect(dataPromise[n].abilityName).assertEqual("ThirdFormAbility");
                expect(dataPromise[n].formName).assertEqual("widget");
                user3flag = true;
              } else {
                console.info('=============Acts_QueryFormInformation_2700 dataPromise D ============');
                expect(false).assertTrue();
              }
            }
            expect(user1flag).assertTrue();
            expect(user2flag).assertTrue();
            expect(user3flag).assertTrue();
            await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataCallback) => {
              console.info('getRunningFormInfosByFilter callback data is :' + JSON.stringify(dataCallback));
              expect(dataCallback.length).assertEqual(3);
              let user1flag = false;
              let user2flag = false;
              let user3flag = false;

              for (let n = 0; n < dataCallback.length; n++) {
                if (dataCallback[n].formId == formIdA) {
                  console.info('=============Acts_QueryFormInformation_2700 dataCallback A ============');
                  expect(dataCallback[n].hostBundleName).assertEqual("com.example.userformfourth");
                  expect(dataCallback[n].formId).assertEqual(formIdA);
                  expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                  expect(dataCallback[n].dimension).assertEqual(2);
                  expect(dataCallback[n].bundleName).assertEqual("com.example.formprovidersecond");
                  expect(dataCallback[n].moduleName).assertEqual("entry");
                  expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
                  expect(dataCallback[n].formName).assertEqual("widget");
                  user1flag = true;
                } else if (dataCallback[n].formId == formIdB) {
                  console.info('=============Acts_QueryFormInformation_2700 dataCallback B ============');
                  expect(dataCallback[n].hostBundleName).assertEqual("com.example.userformfourth");
                  expect(dataCallback[n].formId).assertEqual(formIdB);
                  expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                  expect(dataCallback[n].dimension).assertEqual(2);
                  expect(dataCallback[n].bundleName).assertEqual("com.example.formprovidersecond");
                  expect(dataCallback[n].moduleName).assertEqual("second");
                  expect(dataCallback[n].abilityName).assertEqual("SecondFormAbility");
                  expect(dataCallback[n].formName).assertEqual("widget");
                  user2flag = true;
                } else if (dataCallback[n].formId == formIdC) {
                  console.info('=============Acts_QueryFormInformation_2700 dataCallback C ============');
                  expect(dataCallback[n].hostBundleName).assertEqual("com.example.userformfourth");
                  expect(dataCallback[n].formId).assertEqual(formIdC);
                  expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                  expect(dataCallback[n].dimension).assertEqual(2);
                  expect(dataCallback[n].bundleName).assertEqual("com.example.formprovidersecond");
                  expect(dataCallback[n].moduleName).assertEqual("third");
                  expect(dataCallback[n].abilityName).assertEqual("ThirdFormAbility");
                  expect(dataCallback[n].formName).assertEqual("widget");
                  user3flag = true;
                } else {
                  console.info('=============Acts_QueryFormInformation_2700 dataCallback D ============');
                  expect(false).assertTrue();
                }
              }
              expect(user1flag).assertTrue();
              expect(user2flag).assertTrue();
              expect(user3flag).assertTrue();
              commonEvent.unsubscribe(subscriber, function () {
                console.log('====>Acts_QueryFormInformation_2700 unsubscribe' + JSON.stringify(data));
                console.info('=============Acts_QueryFormInformation_2700 end ============');
                appManager.killProcessesByBundleName("com.example.userformfourth");
                formHost.deleteForm(formIdA);
                formHost.deleteForm(formIdB);
                formHost.deleteForm(formIdC);
                done();
              });
            });
          });
        }
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_2800
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_2800', 0, async function (done) {
      let subscriber;
      let formIdA;
      let formIdB;
      let formIdC;
      let flag = 0;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async(data) => {
          console.info("====>Acts_QueryFormInformation_2800 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuserfifth",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_2800 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_2800 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_2800 start ============');

      async function subscribeCallBack(err, data) {
        console.info("Acts_QueryFormInformation_2800 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_2800 ====> subscribeCallBack data:" + JSON.stringify(data));
        sleep(500);
        if (data.event == "ACTS_FormIdA") {
          formIdA = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdB") {
          formIdB = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdC") {
          formIdC = data.parameters.formId;
          flag++;
        }

        let formInstanceFilter = {
          bundleName: "com.example.formproviderthird",
          moduleName: "entry"
        }
        if (flag == 3) {
          await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
            console.info('getRunningFormInfosByFilter promise data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(2);
            let user1flag = false;
            let user2flag = false;
            for (let n = 0; n < dataPromise.length; n++) {
              if (dataPromise[n].formId == formIdA) {
                console.info('=============Acts_QueryFormInformation_2800 dataPromise A ============');
                expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuserfifth");
                expect(dataPromise[n].formId).assertEqual(formIdA);
                expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataPromise[n].dimension).assertEqual(2);
                expect(dataPromise[n].bundleName).assertEqual("com.example.formproviderthird");
                expect(dataPromise[n].moduleName).assertEqual("entry");
                expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
                expect(dataPromise[n].formName).assertEqual("widget");
                user1flag = true;
              } else if (dataPromise[n].formId == formIdB) {
                console.info('=============Acts_QueryFormInformation_2800 dataPromise B ============');
                expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuserfifth");
                expect(dataPromise[n].formId).assertEqual(formIdB);
                expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataPromise[n].dimension).assertEqual(2);
                expect(dataPromise[n].bundleName).assertEqual("com.example.formproviderthird");
                expect(dataPromise[n].moduleName).assertEqual("entry");
                expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility1");
                expect(dataPromise[n].formName).assertEqual("widget");
                user2flag = true;
              } else {
                console.info('=============Acts_QueryFormInformation_2800 dataPromise D ============');
                expect(false).assertTrue();
              }
            }
            expect(user1flag).assertTrue();
            expect(user2flag).assertTrue();
            await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataCallback) => {
              console.info('getRunningFormInfosByFilter callback data is :' + JSON.stringify(dataCallback));
              expect(dataCallback.length).assertEqual(2);
              let user1flag = false;
              let user2flag = false;
              for (let n = 0; n < dataCallback.length; n++) {
                if (dataCallback[n].formId == formIdA) {
                  console.info('=============Acts_QueryFormInformation_2800 dataCallback A ============');
                  expect(dataCallback[n].hostBundleName).assertEqual("com.example.formuserfifth");
                  expect(dataCallback[n].formId).assertEqual(formIdA);
                  expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                  expect(dataCallback[n].dimension).assertEqual(2);
                  expect(dataCallback[n].bundleName).assertEqual("com.example.formproviderthird");
                  expect(dataCallback[n].moduleName).assertEqual("entry");
                  expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
                  expect(dataCallback[n].formName).assertEqual("widget");
                  user1flag = true;
                } else if (dataCallback[n].formId == formIdB) {
                  console.info('=============Acts_QueryFormInformation_2800 dataCallback B ============');
                  expect(dataCallback[n].hostBundleName).assertEqual("com.example.formuserfifth");
                  expect(dataCallback[n].formId).assertEqual(formIdB);
                  expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                  expect(dataCallback[n].dimension).assertEqual(2);
                  expect(dataCallback[n].bundleName).assertEqual("com.example.formproviderthird");
                  expect(dataCallback[n].moduleName).assertEqual("entry");
                  expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility1");
                  expect(dataCallback[n].formName).assertEqual("widget");
                  user2flag = true;
                } else {
                  console.info('=============Acts_QueryFormInformation_2800 dataCallback D ============');
                  expect(false).assertTrue();
                }
              }
              expect(user1flag).assertTrue();
              expect(user2flag).assertTrue();
              commonEvent.unsubscribe(subscriber, function () {
                console.log('====>Acts_QueryFormInformation_2800 unsubscribe' + JSON.stringify(data));
                console.info('=============Acts_QueryFormInformation_2800 end ============');
                appManager.killProcessesByBundleName("com.example.formuserfifth");
                formHost.deleteForm(formIdA);
                formHost.deleteForm(formIdB);
                formHost.deleteForm(formIdC);
                done();
              });
            });
          })
        }
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_2900
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_2900', 0, async function (done) {
      let subscriber;
      let formIdA;
      let formIdB;
      let formIdC;
      let flag = 0;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async(data) => {
          console.info("====>Acts_QueryFormInformation_2900 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuserfifth",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_2900 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_2900 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_2900 start ============');

      async function subscribeCallBack(err, data) {
        sleep(500);
        console.info("Acts_QueryFormInformation_2900 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_2900 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formIdA = data.parameters.formId;
          flag++
        }
        if (data.event == "ACTS_FormIdB") {
          formIdB = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdC") {
          formIdC = data.parameters.formId;
          flag++;
        }

        let formInstanceFilter = {
          bundleName: "com.example.formproviderthird",
          moduleName: "entry",
          abilityName: "EntryFormAbility"
        }
        if (flag == 3) {
          await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
            console.info('getRunningFormInfosByFilter promise data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(1);
            for (let n = 0; n < dataPromise.length; n++) {
              expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuserfifth");
              expect(dataPromise[n].formId).assertEqual(formIdA);
              expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
              expect(dataPromise[n].dimension).assertEqual(2);
              expect(dataPromise[n].bundleName).assertEqual("com.example.formproviderthird");
              expect(dataPromise[n].moduleName).assertEqual("entry");
              expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
              expect(dataPromise[n].formName).assertEqual("widget");
            }
            await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataCallback) => {
              console.info('getRunningFormInfosByFilter callback data is :' + JSON.stringify(dataCallback));
              expect(dataCallback.length).assertEqual(1);
              for (let n = 0; n < dataCallback.length; n++) {
                expect(dataCallback[n].hostBundleName).assertEqual("com.example.formuserfifth");
                expect(dataCallback[n].formId).assertEqual(formIdA);
                expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataCallback[n].dimension).assertEqual(2);
                expect(dataCallback[n].bundleName).assertEqual("com.example.formproviderthird");
                expect(dataCallback[n].moduleName).assertEqual("entry");
                expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
                expect(dataCallback[n].formName).assertEqual("widget");
              }
              commonEvent.unsubscribe(subscriber, function () {
                console.log('====>Acts_QueryFormInformation_2900 unsubscribe' + JSON.stringify(data));
                console.info('=============Acts_QueryFormInformation_2900 end ============');
                appManager.killProcessesByBundleName("com.example.formuserfifth");
                formHost.deleteForm(formIdA);
                formHost.deleteForm(formIdB);
                formHost.deleteForm(formIdC);
                done();
              });
            });
          })

        }
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_3000
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_3000', 0, async function (done) {
      let subscriber;
      let formIdA;
      let formIdC;
      let formIdB;
      let flag = 0;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async(data) => {
          console.info("====>Acts_QueryFormInformation_3000 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.userformfourth",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_3000 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_3000 ====> startAbility data:" + JSON.stringify(data));
          })
        })
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_3000 start ============');

      async function subscribeCallBack(err, data) {
        sleep(200);
        console.info("Acts_QueryFormInformation_3000 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_3000 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formIdA = data.parameters.formId;
          flag++
        }
        if (data.event == "ACTS_FormIdB") {
          formIdB = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdC") {
          formIdC = data.parameters.formId;
          flag++;
        }

        let formInstanceFilter = {
          bundleName: "com.example.formprovidersecond",
          moduleName: "entry",
          abilityName: "EntryFormAbility"
        }
        if (flag == 3) {
          await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
            console.info('getRunningFormInfosByFilter promise data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(1);
            for (let n = 0; n < dataPromise.length; n++) {
              expect(dataPromise[n].hostBundleName).assertEqual("com.example.userformfourth");
              expect(dataPromise[n].formId).assertEqual(formIdA);
              expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
              expect(dataPromise[n].dimension).assertEqual(2);
              expect(dataPromise[n].bundleName).assertEqual("com.example.formprovidersecond");
              expect(dataPromise[n].moduleName).assertEqual("entry");
              expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
              expect(dataPromise[n].formName).assertEqual("widget");
            }
            await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataCallback) => {
              console.info('getRunningFormInfosByFilter callback data is :' + JSON.stringify(dataCallback));
              expect(dataCallback.length).assertEqual(1);
              for (let n = 0; n < dataCallback.length; n++) {
                expect(dataCallback[n].hostBundleName).assertEqual("com.example.userformfourth");
                expect(dataCallback[n].formId).assertEqual(formIdA);
                expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataCallback[n].dimension).assertEqual(2);
                expect(dataCallback[n].bundleName).assertEqual("com.example.formprovidersecond");
                expect(dataCallback[n].moduleName).assertEqual("entry");
                expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
                expect(dataCallback[n].formName).assertEqual("widget");
              }
              commonEvent.unsubscribe(subscriber, function () {
                console.log('====>Acts_QueryFormInformation_3000 unsubscribe' + JSON.stringify(data));
                console.info('=============Acts_QueryFormInformation_3000 end ============');
                appManager.killProcessesByBundleName("com.example.userformfourth");
                formHost.deleteForm(formIdA);
                formHost.deleteForm(formIdB);
                formHost.deleteForm(formIdC);
                done();
              });
            });
          });
        }
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_3200
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_3200', 0, async function (done) {
      let subscriber;
      let formIdA;
      let formIdB;
      let flag =0;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async(data) => {
          console.info("====>Acts_QueryFormInformation_3200 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.userformsixth",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_3200 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_3200 ====> startAbility data:" + JSON.stringify(data));
          })
        })
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_3200 start ============');

      async function subscribeCallBack(err, data) {
        sleep(500);
        console.info("Acts_QueryFormInformation_3200 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_3200 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formIdA = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdB") {
          formIdB = data.parameters.formId;
          flag++;
        }

        let formInstanceFilter = {
          bundleName: "com.example.providerformfourth",
          moduleName: "entry",
          abilityName: "EntryFormAbility"
        }
        if (flag == 2) {
          await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
            console.info('getRunningFormInfosByFilter promise data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(2);
            let user1flag = false;
            let user2flag = false;
            for (let n = 0; n < dataPromise.length; n++) {
              if (dataPromise[n].formId == formIdA) {
                console.info('=============Acts_QueryFormInformation_3200 dataPromise A ============');
                expect(dataPromise[n].hostBundleName).assertEqual("com.example.userformsixth");
                expect(dataPromise[n].formId).assertEqual(formIdA);
                expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataPromise[n].dimension).assertEqual(2);
                expect(dataPromise[n].bundleName).assertEqual("com.example.providerformfourth");
                expect(dataPromise[n].moduleName).assertEqual("entry");
                expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
                expect(dataPromise[n].formName).assertEqual("widget");
                user1flag = true;
              } else if (dataPromise[n].formId == formIdB) {
                console.info('=============Acts_QueryFormInformation_3200 dataPromise B ============');
                expect(dataPromise[n].hostBundleName).assertEqual("com.example.userformsixth");
                expect(dataPromise[n].formId).assertEqual(formIdB);
                expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataPromise[n].dimension).assertEqual(2);
                expect(dataPromise[n].bundleName).assertEqual("com.example.providerformfourth");
                expect(dataPromise[n].moduleName).assertEqual("entry");
                expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
                expect(dataPromise[n].formName).assertEqual("widget1");
                user2flag = true;
              } else {
                console.info('=============Acts_QueryFormInformation_3200 dataPromise D ============');
                expect(false).assertTrue();
              }
            }
            expect(user1flag).assertTrue();
            expect(user2flag).assertTrue();
            await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataCallback) => {
              console.info('getRunningFormInfosByFilter callback data is :' + JSON.stringify(dataCallback));
              expect(dataCallback.length).assertEqual(2);
              let user1flag = false;
              let user2flag = false;
              for (let n = 0; n < dataCallback.length; n++) {
                if (dataCallback[n].formId == formIdA) {
                  console.info('=============Acts_QueryFormInformation_3200 dataCallback A ============');
                  expect(dataCallback[n].hostBundleName).assertEqual("com.example.userformsixth");
                  expect(dataCallback[n].formId).assertEqual(formIdA);
                  expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                  expect(dataCallback[n].dimension).assertEqual(2);
                  expect(dataCallback[n].bundleName).assertEqual("com.example.providerformfourth");
                  expect(dataCallback[n].moduleName).assertEqual("entry");
                  expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
                  expect(dataCallback[n].formName).assertEqual("widget");
                  user1flag = true;
                } else if (dataCallback[n].formId == formIdB) {
                  console.info('=============Acts_QueryFormInformation_3200 dataCallback B ============');
                  expect(dataCallback[n].hostBundleName).assertEqual("com.example.userformsixth");
                  expect(dataCallback[n].formId).assertEqual(formIdB);
                  expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                  expect(dataCallback[n].dimension).assertEqual(2);
                  expect(dataCallback[n].bundleName).assertEqual("com.example.providerformfourth");
                  expect(dataCallback[n].moduleName).assertEqual("entry");
                  expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
                  expect(dataCallback[n].formName).assertEqual("widget1");
                  user2flag = true;
                } else {
                  console.info('=============Acts_QueryFormInformation_3200 dataCallback D ============');
                  expect(false).assertTrue();
                }
              }
              expect(user1flag).assertTrue();
              expect(user2flag).assertTrue();
              commonEvent.unsubscribe(subscriber, function () {
                console.log('====>Acts_QueryFormInformation_3200 unsubscribe' + JSON.stringify(data));
                console.info('=============Acts_QueryFormInformation_3200 end ============');
                appManager.killProcessesByBundleName("com.example.userformsixth");
                formHost.deleteForm(formIdA);
                formHost.deleteForm(formIdB);
                done();
              });
            });
          });
        }
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_3300
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_3300', 0, async function (done) {
      let subscriber;
      let formIdA;
      let formIdB;
      let formIdD;
      let formIdE;
      let flag = 0;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async(data) => {
          console.info("====>Acts_QueryFormInformation_3300 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.userformeight",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_3300 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_3300 ====> startAbility data:" + JSON.stringify(data));
          });
          sleep(500);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.userformseventh",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_3300 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_3300 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_3300 start ============');

      async function subscribeCallBack(err, data) {
        sleep(200);
        console.info("Acts_QueryFormInformation_3300 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_3300 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formIdA = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdB") {
          formIdB = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdD") {
          formIdD = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdE") {
          formIdE = data.parameters.formId;
          flag++;
        }
        let formInstanceFilter = {
          bundleName: "com.example.providerformfifth",
        }
        if (flag == 4) {
          await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
            console.info('getRunningFormInfosByFilter promise data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(3)
            let user1flag = false;
            let user2flag = false;
            let user3flag = false;
            for (let n = 0; n < dataPromise.length; n++) {
              if (dataPromise[n].formId == formIdA) {
                console.info('=============Acts_QueryFormInformation_3300 dataPromise A ============');
                expect(dataPromise[n].hostBundleName).assertEqual("com.example.userformseventh");
                expect(dataPromise[n].formId).assertEqual(formIdA);
                expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataPromise[n].dimension).assertEqual(2);
                expect(dataPromise[n].bundleName).assertEqual("com.example.providerformfifth");
                expect(dataPromise[n].moduleName).assertEqual("entry");
                expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
                expect(dataPromise[n].formName).assertEqual("widget");
                user1flag = true;
              } else if (dataPromise[n].formId == formIdE) {
                console.info('=============Acts_QueryFormInformation_3300 dataCallback E ============');
                expect(dataPromise[n].hostBundleName).assertEqual("com.example.userformeight");
                expect(dataPromise[n].formId).assertEqual(formIdE);
                expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataPromise[n].dimension).assertEqual(2);
                expect(dataPromise[n].bundleName).assertEqual("com.example.providerformfifth");
                expect(dataPromise[n].moduleName).assertEqual("entry");
                expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
                expect(dataPromise[n].formName).assertEqual("widget1");
                user3flag = true;
              } else if (dataPromise[n].formId == formIdD) {
                console.info('=============Acts_QueryFormInformation_3300 dataPromise B ============');
                expect(dataPromise[n].hostBundleName).assertEqual("com.example.userformeight");
                expect(dataPromise[n].formId).assertEqual(formIdD);
                expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataPromise[n].dimension).assertEqual(2);
                expect(dataPromise[n].bundleName).assertEqual("com.example.providerformfifth");
                expect(dataPromise[n].moduleName).assertEqual("entry");
                expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
                expect(dataPromise[n].formName).assertEqual("widget");
                user2flag = true;
              } else {
                console.info('=============Acts_QueryFormInformation_3300 dataPromise D ============');
                expect(false).assertTrue();
              }
            }
            expect(user1flag).assertTrue();
            expect(user2flag).assertTrue();
            expect(user3flag).assertTrue();
            await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataCallback) => {
              console.info('getRunningFormInfosByFilter callback data is :' + JSON.stringify(dataCallback));
              expect(dataCallback.length).assertEqual(3);
              let user1flag = false;
              let user2flag = false;
              let user3flag = false;
              for (let n = 0; n < dataCallback.length; n++) {
                if (dataCallback[n].formId == formIdA) {
                  console.info('=============Acts_QueryFormInformation_3300 dataCallback A ============');
                  expect(dataCallback[n].hostBundleName).assertEqual("com.example.userformseventh");
                  expect(dataCallback[n].formId).assertEqual(formIdA);
                  expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                  expect(dataCallback[n].dimension).assertEqual(2);
                  expect(dataCallback[n].bundleName).assertEqual("com.example.providerformfifth");
                  expect(dataCallback[n].moduleName).assertEqual("entry");
                  expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
                  expect(dataCallback[n].formName).assertEqual("widget");
                  user1flag = true;
                } else if (dataCallback[n].formId == formIdD) {
                  console.info('=============Acts_QueryFormInformation_3300 dataCallback D ============');
                  expect(dataCallback[n].hostBundleName).assertEqual("com.example.userformeight");
                  expect(dataCallback[n].formId).assertEqual(formIdD);
                  expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                  expect(dataCallback[n].dimension).assertEqual(2);
                  expect(dataCallback[n].bundleName).assertEqual("com.example.providerformfifth");
                  expect(dataCallback[n].moduleName).assertEqual("entry");
                  expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
                  expect(dataCallback[n].formName).assertEqual("widget");
                  user2flag = true;
                } else if (dataCallback[n].formId == formIdE) {
                  console.info('=============Acts_QueryFormInformation_3300 dataCallback E ============');
                  expect(dataCallback[n].hostBundleName).assertEqual("com.example.userformeight");
                  expect(dataCallback[n].formId).assertEqual(formIdE);
                  expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                  expect(dataCallback[n].dimension).assertEqual(2);
                  expect(dataCallback[n].bundleName).assertEqual("com.example.providerformfifth");
                  expect(dataCallback[n].moduleName).assertEqual("entry");
                  expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
                  expect(dataCallback[n].formName).assertEqual("widget1");
                  user3flag = true;
                } else {
                  console.info('=============Acts_QueryFormInformation_3300 dataCallback err ============');
                  expect(false).assertTrue();
                }
              }
              expect(user1flag).assertTrue();
              expect(user2flag).assertTrue();
              expect(user3flag).assertTrue();
              commonEvent.unsubscribe(subscriber, function () {
                console.log('====>Acts_QueryFormInformation_3300 unsubscribe' + JSON.stringify(data));
                console.info('=============Acts_QueryFormInformation_3300 end ============');
                appManager.killProcessesByBundleName("com.example.userformeight");
                appManager.killProcessesByBundleName("com.example.userformseventh");
                formHost.deleteForm(formIdA);
                formHost.deleteForm(formIdB);
                formHost.deleteForm(formIdD);
                formHost.deleteForm(formIdE);
                done();
              });
            });
          });
        }
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_3400
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_3400', 0, async function (done) {
      let subscriber;
      let formIdH;
      let formIdI;
      let formIdD;
      let formIdE;
      let formIdG;
      let flag = 0;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async(data) => {
          console.info("====>Acts_QueryFormInformation_3400 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.userformnine",
              abilityName: "EntryAbility",
            }, (err, data) => {
            globalThis.abilityContext.startAbility(
              {
                bundleName: "com.example.userformeight",
                abilityName: "EntryAbility",
              }, (err, data) => {
              console.info("Acts_QueryFormInformation_3400 ====> startAbility err:" + JSON.stringify(err))
              console.info("Acts_QueryFormInformation_3400 ====> startAbility data:" + JSON.stringify(data))
            });
            console.info("Acts_QueryFormInformation_3400 ====> startAbility err:" + JSON.stringify(err))
            console.info("Acts_QueryFormInformation_3400 ====> startAbility data:" + JSON.stringify(data))
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_3400 start ============');

      async function subscribeCallBack(err, data) {
        sleep(200);
        console.info("Acts_QueryFormInformation_3400 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_3400 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdH") {
          formIdH = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdI") {
          formIdI = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdD") {
          formIdD = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdE") {
          formIdE = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdG") {
          formIdG = data.parameters.formId;
          flag++;
        }
        let formInstanceFilter = {
          bundleName: "com.example.providerformsixth",
        }
        if (flag == 5) {
          await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
            console.info('getRunningFormInfosByFilter promise data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(2);
            let user1flag = false;
            let user2flag = false;
            for (let n = 0; n < dataPromise.length; n++) {
              if (dataPromise[n].formId == formIdH) {
                console.info('=============Acts_QueryFormInformation_3400 dataPromise A ============');
                expect(dataPromise[n].hostBundleName).assertEqual("com.example.userformnine");
                expect(dataPromise[n].formId).assertEqual(formIdH);
                expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataPromise[n].dimension).assertEqual(2);
                expect(dataPromise[n].bundleName).assertEqual("com.example.providerformsixth");
                expect(dataPromise[n].moduleName).assertEqual("entry");
                expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
                expect(dataPromise[n].formName).assertEqual("widget");
                user1flag = true;
              } else if (dataPromise[n].formId == formIdI) {
                console.info('=============Acts_QueryFormInformation_3400 dataCallback D ============');
                expect(dataPromise[n].hostBundleName).assertEqual("com.example.userformnine");
                expect(dataPromise[n].formId).assertEqual(formIdI);
                expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataPromise[n].dimension).assertEqual(2);
                expect(dataPromise[n].bundleName).assertEqual("com.example.providerformsixth");
                expect(dataPromise[n].moduleName).assertEqual("entry");
                expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
                expect(dataPromise[n].formName).assertEqual("widget1");
                user2flag = true;
              } else {
                console.info('=============Acts_QueryFormInformation_3400 dataPromise D ============');
                expect(false).assertTrue();
              }
            }
            expect(user1flag).assertTrue();
            expect(user2flag).assertTrue();
            await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataCallback) => {
              console.info('getRunningFormInfosByFilter callback data is :' + JSON.stringify(dataCallback));
              expect(dataCallback.length).assertEqual(2);
              let user1flag = false;
              let user2flag = false;
              for (let n = 0; n < dataCallback.length; n++) {
                if (dataCallback[n].formId == formIdH) {
                  console.info('=============Acts_QueryFormInformation_3400 dataCallback A ============');
                  expect(dataCallback[n].hostBundleName).assertEqual("com.example.userformnine");
                  expect(dataCallback[n].formId).assertEqual(formIdH);
                  expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                  expect(dataCallback[n].dimension).assertEqual(2);
                  expect(dataCallback[n].bundleName).assertEqual("com.example.providerformsixth");
                  expect(dataCallback[n].moduleName).assertEqual("entry");
                  expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
                  expect(dataCallback[n].formName).assertEqual("widget");
                  user1flag = true;
                } else if (dataCallback[n].formId == formIdI) {
                  console.info('=============Acts_QueryFormInformation_3400 dataCallback D ============');
                  expect(dataCallback[n].hostBundleName).assertEqual("com.example.userformnine");
                  expect(dataCallback[n].formId).assertEqual(formIdI);
                  expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                  expect(dataCallback[n].dimension).assertEqual(2);
                  expect(dataCallback[n].bundleName).assertEqual("com.example.providerformsixth");
                  expect(dataCallback[n].moduleName).assertEqual("entry");
                  expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
                  expect(dataCallback[n].formName).assertEqual("widget1");
                  user2flag = true;
                } else {
                  console.info('=============Acts_QueryFormInformation_3400 dataCallback err ============');
                  expect(false).assertTrue();
                }
              }
              expect(user1flag).assertTrue();
              expect(user2flag).assertTrue();
              commonEvent.unsubscribe(subscriber, function () {
                console.log('====>Acts_QueryFormInformation_3400 unsubscribe' + JSON.stringify(data));
                console.info('=============Acts_QueryFormInformation_3400 end ============');
                appManager.killProcessesByBundleName("com.example.userformeight");
                appManager.killProcessesByBundleName("com.example.userformnine");
                formHost.deleteForm(formIdH);
                formHost.deleteForm(formIdI);
                formHost.deleteForm(formIdD);
                formHost.deleteForm(formIdE);
                formHost.deleteForm(formIdG);
                done();
              });
            });
          });
        }
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_3700
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_3700', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
          console.info("====>Acts_QueryFormInformation_3700 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_3700 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_3700 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_3700 start ============');

      async function subscribeCallBack(err, data) {
        sleep(500);
        console.info("Acts_QueryFormInformation_3700 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_3700 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        let formInstanceFilter = {
          bundleName: "com.example.formprovide",
          moduleName: ""
        }
        await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
          console.info('getRunningFormInfosByFilter promise data is :' + JSON.stringify(dataPromise));
          expect(dataPromise.length).assertEqual(1);
          for (let n = 0; n < data.length; n++) {
            expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
            expect(dataPromise[n].formId).assertEqual(formId);
            expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
            expect(dataPromise[n].dimension).assertEqual(2);
            expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
            expect(dataPromise[n].moduleName).assertEqual("entry");
            expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
            expect(dataPromise[n].formName).assertEqual("widget");
          }
          console.info("Acts_QueryFormInformation_3700 form id ====>" + formId);
          await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataCallback) => {
            console.info('getRunningFormInfosByFilter callback data is :' + JSON.stringify(dataCallback));
            expect(dataCallback.length).assertEqual(1);
            for (let n = 0; n < data.length; n++) {
              expect(dataCallback[n].hostBundleName).assertEqual("com.example.formuser");
              expect(dataCallback[n].formId).assertEqual(formId);
              expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
              expect(dataCallback[n].dimension).assertEqual(2);
              expect(dataCallback[n].bundleName).assertEqual("com.example.formprovide");
              expect(dataCallback[n].moduleName).assertEqual("entry");
              expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
              expect(dataCallback[n].formName).assertEqual("widget");
            }
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_3700 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_3700 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_3800
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_3800', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
          console.info("====>Acts_QueryFormInformation_3800 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_3800 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_3800 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_3800 start ============');

      async function subscribeCallBack(err, data) {
        sleep(500);
        console.info("Acts_QueryFormInformation_3800 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_3800 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        let formInstanceFilter = {
          bundleName: "com.example.formprovide",
          abilityName: "" }
        await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
          console.info('getRunningFormInfosByFilter promise data is :' + JSON.stringify(dataPromise));
          expect(dataPromise.length).assertEqual(1)
          for (let n = 0; n < data.length; n++) {
            expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
            expect(dataPromise[n].formId).assertEqual(formId);
            expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
            expect(dataPromise[n].dimension).assertEqual(2);
            expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
            expect(dataPromise[n].moduleName).assertEqual("entry");
            expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
            expect(dataPromise[n].formName).assertEqual("widget");

          }
          console.info("Acts_QueryFormInformation_3800 form id ====>" + formId);
          await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataCallback) => {
            console.info('getRunningFormInfosByFilter callback data is :' + JSON.stringify(dataCallback));
            expect(dataCallback.length).assertEqual(1);
            for (let n = 0; n < data.length; n++) {
              expect(dataCallback[n].hostBundleName).assertEqual("com.example.formuser");
              expect(dataCallback[n].formId).assertEqual(formId);
              expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
              expect(dataCallback[n].dimension).assertEqual(2);
              expect(dataCallback[n].bundleName).assertEqual("com.example.formprovide");
              expect(dataCallback[n].moduleName).assertEqual("entry");
              expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
              expect(dataCallback[n].formName).assertEqual("widget");
            }
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_3800 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_3800 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_3900
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_3900', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
          console.info("====>Acts_QueryFormInformation_3900 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_3900 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_3900 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_3900 start ============');

      async function subscribeCallBack(err, data) {
        sleep(500);
        console.info("Acts_QueryFormInformation_3900 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_3900 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        let formInstanceFilter = {
          bundleName: "com.example.formprovide",
          formName: ""
        }
        await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
          console.info('getRunningFormInfosByFilter promise data is :' + JSON.stringify(dataPromise));
          expect(dataPromise.length).assertEqual(1);
          for (let n = 0; n < data.length; n++) {
            expect(dataPromise[n].hostBundleName).assertEqual("com.example.formuser");
            expect(dataPromise[n].formId).assertEqual(formId);
            expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
            expect(dataPromise[n].dimension).assertEqual(2);
            expect(dataPromise[n].bundleName).assertEqual("com.example.formprovide");
            expect(dataPromise[n].moduleName).assertEqual("entry");
            expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
            expect(dataPromise[n].formName).assertEqual("widget");
          }
          console.info("Acts_QueryFormInformation_3900 form id ====>" + formId);
          await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataCallback) => {
            console.info('getRunningFormInfosByFilter callback data is :' + JSON.stringify(dataCallback));
            expect(dataCallback.length).assertEqual(1);
            for (let n = 0; n < data.length; n++) {
              expect(dataCallback[n].hostBundleName).assertEqual("com.example.formuser");
              expect(dataCallback[n].formId).assertEqual(formId);
              expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
              expect(dataCallback[n].dimension).assertEqual(2);
              expect(dataCallback[n].bundleName).assertEqual("com.example.formprovide");
              expect(dataCallback[n].moduleName).assertEqual("entry");
              expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
              expect(dataCallback[n].formName).assertEqual("widget");
            }
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_3900 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_3900 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_4000
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_4000', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
          console.info("====>Acts_QueryFormInformation_4000 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_4000 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_4000 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertTrue();
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_4000 start ============');
      async function subscribeCallBack(err, data) {
        sleep(500);
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        console.info("Acts_QueryFormInformation_4000 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_4000 ====> subscribeCallBack data:" + JSON.stringify(data));
        try {
          await formHost.getRunningFormInfosByFilter(undefined).then(dataPromise => {
            console.info("Acts_QueryFormInformation_4000 run error ====>");
            expect(false).assertTrue();
            done();
          })
        } catch (err) {
          console.info("Acts_QueryFormInformation_4000 err ====>" + err);
          console.info("Acts_QueryFormInformation_4000 err.code ====>" + err.code);
          expect(err.code).assertEqual(ERR_FORM_EXTERNAL_PARAM_INVALID)
          try {
            await formHost.getRunningFormInfosByFilter(undefined, (err, dataCallback) => {
              console.info("Acts_QueryFormInformation_4000 run error ====>");
              expect(false).assertTrue();
              done();
            })
          } catch (err) {
            appManager.killProcessesByBundleName("com.example.formuser");
            console.info("Acts_QueryFormInformation_4000 err ====>" + err);
            console.info("Acts_QueryFormInformation_4000 err.code ====>" + err.code);
            expect(err.code).assertEqual(ERR_FORM_EXTERNAL_PARAM_INVALID);
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_4000 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_4000 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          }
        }
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_4100
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_4100', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async(data) => {
          console.info("====>Acts_QueryFormInformation_4100 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_4100 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_4100 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_4100 start ============');

      async function subscribeCallBack(err, data) {
        sleep(500);
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        console.info("Acts_QueryFormInformation_4100 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_4100 ====> subscribeCallBack data:" + JSON.stringify(data));
        try{
          await formHost.getRunningFormInfoById("abc").then(dataPromise => {
            console.info('getRunningFormInfoById data promise is :' + JSON.stringify(dataPromise));
            expect(false).assertTrue();
          }).catch(err => {
            expect(err.code).assertEqual(ERR_FORM_EXTERNAL_PARAM_INVALID);
            console.info("Acts_QueryFormInformation_4100 errcode1 ====>" + err.code);
          });
        } catch (err) {
          expect(err.code).assertEqual(ERR_FORM_EXTERNAL_PARAM_INVALID);
          try {
            await formHost.getRunningFormInfoById("abc", (err, dataPromise) => {
              console.info('getRunningFormInfoById data callback is :' + JSON.stringify(dataPromise));
              expect(err.code).assertEqual(ERR_FORM_EXTERNAL_PARAM_INVALID);
            });
          } catch(err) {
            expect(err.code).assertEqual(ERR_FORM_EXTERNAL_PARAM_INVALID);
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_4100 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_4100 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          }
        }
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_4200
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_4200', 0, async function (done) {
      let subscriber;
      let formId;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async(data) => {
          console.info("====>Acts_QueryFormInformation_4200 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_4200 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_4200 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_4200 start ============');

      async function subscribeCallBack(err, data) {
        sleep(500);
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        console.info("Acts_QueryFormInformation_4200 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_4200 ====> subscribeCallBack data:" + JSON.stringify(data));

        await formHost.getRunningFormInfoById("-1").then(dataPromise => {
          console.info('getRunningFormInfoById data promise is :' + JSON.stringify(dataPromise));
          expect(false).assertTrue();
        }).catch(async err => {
          expect(err.code).assertEqual(ERR_FORM_EXTERNAL_PARAM_INVALID);
          console.info("Acts_QueryFormInformation_4200 errcode1 ====>" + err.code);
          await formHost.getRunningFormInfoById("-1", (err, dataPromise) => {
            console.info('getRunningFormInfoById data callback is :' + JSON.stringify(dataPromise));
            expect(err.code).assertEqual(ERR_FORM_EXTERNAL_PARAM_INVALID);
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_4100 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_4100 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_4300
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_4300', 0, async function (done) {
      let formId;
      let subscriber;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async(data) => {
          console.info("====>Acts_QueryFormInformation_4300 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.formuser",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_4300 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_4300 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true)
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_4300 start ============');

      async function subscribeCallBack(err, data) {
        sleep(500);
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
        }
        console.info("Acts_QueryFormInformation_4300 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_4300 ====> subscribeCallBack data:" + JSON.stringify(data));
        await formHost.getRunningFormInfoById("0").then(dataPromise => {
          console.info('getRunningFormInfoById data promise is :' + JSON.stringify(dataPromise));
          expect(false).assertTrue();
        }).catch(async err => {
          expect(err.code).assertEqual(ERR_FORM_EXTERNAL_PARAM_INVALID);
          console.info("Acts_QueryFormInformation_4300 errcode1 ====>" + err.code);
          await formHost.getRunningFormInfoById("0", (err, dataPromise) => {
            console.info('getRunningFormInfoById data callback is :' + JSON.stringify(dataPromise));
            expect(err.code).assertEqual(ERR_FORM_EXTERNAL_PARAM_INVALID);
            commonEvent.unsubscribe(subscriber, function () {
              console.log('====>Acts_QueryFormInformation_4300 unsubscribe' + JSON.stringify(data));
              console.info('=============Acts_QueryFormInformation_4300 end ============');
              appManager.killProcessesByBundleName("com.example.formuser");
              formHost.deleteForm(formId);
              done();
            });
          });
        });
      }
    });

    /**
     * @tc.number: Acts_QueryFormInformation_3100
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_3100', 0, async function (done) {
      let subscriber;
      let formIdA;
      let formIdC;
      let formIdB;
      let flag = 0;
      try {
        await commonEvent.createSubscriber(ACTS_CARD).then(async(data) => {
          console.info("====>Acts_QueryFormInformation_3100 Create Subscriber====>");
          subscriber = data;
          await commonEvent.subscribe(subscriber, subscribeCallBack);
          await globalThis.abilityContext.startAbility(
            {
              bundleName: "com.example.userformfourth",
              abilityName: "EntryAbility",
            }, (err, data) => {
            console.info("Acts_QueryFormInformation_3100 ====> startAbility err:" + JSON.stringify(err));
            console.info("Acts_QueryFormInformation_3100 ====> startAbility data:" + JSON.stringify(data));
          });
        });
      } catch (err) {
        expect(false).assertEqual(true);
        console.error(`createSubscriber failed, code is ${err.code}, message is ${err.message}`);
      }
      console.info('=============Acts_QueryFormInformation_3100 start ============');

      async function subscribeCallBack(err, data) {
        console.info("Acts_QueryFormInformation_3100 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("Acts_QueryFormInformation_3100 ====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FormIdA") {
          formIdA = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdB") {
          formIdB = data.parameters.formId;
          flag++;
        }
        if (data.event == "ACTS_FormIdC") {
          formIdC = data.parameters.formId;
          flag++;
        }
        let formInstanceFilter = {
          bundleName: "com.example.formprovidersecond",
          moduleName: "entry",
          formName: "widget"
        }
        if (flag == 3) {
          await formHost.getRunningFormInfosByFilter(formInstanceFilter).then(async dataPromise => {
            console.info('getRunningFormInfosByFilter promise data is :' + JSON.stringify(dataPromise));
            expect(dataPromise.length).assertEqual(1);
            for (let n = 0; n < dataPromise.length; n++) {
              expect(dataPromise[n].hostBundleName).assertEqual("com.example.userformfourth");
              expect(dataPromise[n].formId).assertEqual(formIdA);
              expect(dataPromise[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
              expect(dataPromise[n].dimension).assertEqual(2);
              expect(dataPromise[n].bundleName).assertEqual("com.example.formprovidersecond");
              expect(dataPromise[n].moduleName).assertEqual("entry");
              expect(dataPromise[n].abilityName).assertEqual("EntryFormAbility");
              expect(dataPromise[n].formName).assertEqual("widget");
            }
            await formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, dataCallback) => {
              console.info('getRunningFormInfosByFilter callback data is :' + JSON.stringify(dataCallback));
              expect(dataCallback.length).assertEqual(1);
              for (let n = 0; n < dataCallback.length; n++) {
                expect(dataCallback[n].hostBundleName).assertEqual("com.example.userformfourth");
                expect(dataCallback[n].formId).assertEqual(formIdA);
                expect(dataCallback[n].visibilityType).assertEqual(formInfo.VisibilityType.UNKNOWN);
                expect(dataCallback[n].dimension).assertEqual(2);
                expect(dataCallback[n].bundleName).assertEqual("com.example.formprovidersecond");
                expect(dataCallback[n].moduleName).assertEqual("entry");
                expect(dataCallback[n].abilityName).assertEqual("EntryFormAbility");
                expect(dataCallback[n].formName).assertEqual("widget");
              }
              commonEvent.unsubscribe(subscriber, function () {
                console.log('====>Acts_QueryFormInformation_3100 unsubscribe' + JSON.stringify(data));
                console.info('=============Acts_QueryFormInformation_3100 end ============');
                appManager.killProcessesByBundleName("com.example.userformfourth");
                formHost.deleteForm(formIdA);
                formHost.deleteForm(formIdB);
                formHost.deleteForm(formIdC);
                done();
              });
            });
          });
        }
      }
    });
  })
}