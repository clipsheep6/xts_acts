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
// @ts-nocheck
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import formHost from '@ohos.application.formHost';
import commonEvent from '@ohos.commonEvent'
import deviceManager from '@ohos.distributedHardware.deviceManager';
var FMS_SHARE_FROM = {
  events: ["FMS_SHARE_FROM_CommonEvent"]
};
export default function abilityTest() {
  const CASE_TIMEOUT = 5000;
  let cardFormId;
  describe('ActsAbilityTest', function  () {
    beforeAll(async function (done) {
      let subscriber;
      function subscribeCallBack(err, data) {
        console.debug("====> formId:====>" + JSON.stringify(data.parameters.formId));
        if (data.event == "FMS_SHARE_FROM_CommonEvent") {
          console.debug("====> formId:====>" + JSON.stringify(data.parameters.formId));
          cardFormId = data.parameters.formId
        }
      }
      function unSubscribeCallback() {
        console.debug("====>UnSubscribeCallback====>");
        done();
      }
      await commonEvent.createSubscriber(FMS_SHARE_FROM).then(async(data) => {
        console.debug("Create Subscriber====>");
        await globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.sharecardexceptionparameterstagetest',
            abilityName: 'MainAbility1'
          }, () => {
            console.debug("====>startAbility end====>");
          })
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
      })
      setTimeout(() => {
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }, CASE_TIMEOUT)
    })

    beforeEach(function (done) {
      setTimeout(() => {
          done();
      }, 3000)
    })


    /*
     * @tc.number  : FMS_ShareForm_0600
     * @tc.name    : Support cross-device sharing
     * @tc.desc    : Card interface passes in non-existent formId, promise form test
     */
    it('FMS_ShareForm_0600', 0,async function  (done) {
      console.log("start FMS_ShareForm_0600 =====>");
      await formHost.shareForm("111111", "xxxxxxx").then((data) => {
        console.log("FormMgrService shareForm FMS_ShareForm_0600 ====> result data:" + data);
        expect().assertFail();
      }).catch((err) => {
        console.log("FormMgrService shareForm FMS_ShareForm_0600 ====> result err:" + err.code);
        expect(err.code == 4).assertTrue();
      });
      done();
    })

    /*
     * @tc.number  : FMS_ShareForm_0700
     * @tc.name    : Support cross-device sharing
     * @tc.desc    : The card interface formId is passed in null, and the promise form test
     */
    it('FMS_ShareForm_0700', 0,async function  (done) {
      console.log("start FMS_ShareForm_0700 =====>");
      await formHost.shareForm(null, "xxxxxxx").then((data) => {
        console.log("FormMgrService shareForm FMS_ShareForm_0700 ====> result data:" + data);
        expect().assertFail();
      }).catch((err) => {
        console.log("FormMgrService shareForm FMS_ShareForm_0700 ====> result err:" + err.code);
        expect(err.code == 1).assertTrue();
      });
      done();
    })

    /*
     * @tc.number  : FMS_ShareForm_0800
     * @tc.name    : Support cross-device sharing
     * @tc.desc    : The card interface formId is passed in undefined, and the promise form test
     */
    it('FMS_ShareForm_0800', 0,async function  (done) {
      console.log("start FMS_ShareForm_0800 =====>");
      await formHost.shareForm(undefined, "xxxxxxx").then((data) => {
        console.log("FormMgrService shareForm FMS_ShareForm_0800 ====> result data:" + data);
        expect().assertFail();
      }).catch((err) => {
        console.log("FormMgrService shareForm FMS_ShareForm_0800 ====> result err:" + err.code);
        expect(err.code == 1).assertTrue();
      });
      done();
    })

    /*
     * @tc.number  : FMS_ShareForm_4200
     * @tc.name    : Support cross-device sharing
     * @tc.desc    : The card interface formId is passed in "", and the promise form test
     */
    it('FMS_ShareForm_4200', 0,async function  (done) {
      console.log("start FMS_ShareForm_4200 =====>");
      await formHost.shareForm("", "xxxxxxx").then((data) => {
        console.log("FormMgrService shareForm FMS_ShareForm_4200 ====> result data:" + data);
        expect().assertFail();
      }).catch((err) => {
        console.log("FormMgrService shareForm FMS_ShareForm_4200 ====> result err:" + err.code);
        expect(err.code == 1).assertTrue();
      });
      done();
    })

    /*
      * @tc.number  : FMS_ShareForm_4300
      * @tc.name    : Support cross-device sharing
      * @tc.desc    : Card interface passes in non-existent formId, callback form test
      */
    it('FMS_ShareForm_4300', 0, function  (done) {
      console.log("start FMS_ShareForm_4300 =====>");
      formHost.shareForm("111111", "xxxxxxx", (err, data) => {
        console.log("FormMgrService shareForm FMS_ShareForm_4300 ====> result data:" + data);
        console.log("FormMgrService shareForm FMS_ShareForm_4300 ====> result err:" + err.code);
        expect(err.code == 4).assertTrue();
        done();
      });
    })

    /*
     * @tc.number  : FMS_ShareForm_4400
     * @tc.name    : Support cross-device sharing
     * @tc.desc    : The card interface formId is passed in null, and the callback form test
     */
    it('FMS_ShareForm_4400', 0, function  (done) {
      console.log("start FMS_ShareForm_4400 =====>");
      formHost.shareForm(null, "xxxxxxx", (err, data) => {
        console.log("FormMgrService shareForm FMS_ShareForm_4400 ====> result data:" + data);
        console.log("FormMgrService shareForm FMS_ShareForm_4400 ====> result err:" + err.code);
        expect(err.code == 1).assertTrue();
        done();
      });
    })

    /*
     * @tc.number  : FMS_ShareForm_4500
     * @tc.name    : Support cross-device sharing
     * @tc.desc    : The card interface formId is passed in undefined, and the callback form test
     */
    it('FMS_ShareForm_4500', 0, function  (done) {
      console.log("start FMS_ShareForm_4500 =====>");
      formHost.shareForm(undefined, "xxxxxxx", (err, data) => {
        console.log("FormMgrService shareForm FMS_ShareForm_4500 ====> result data:" + data);
        console.log("FormMgrService shareForm FMS_ShareForm_4500 ====> result err:" + err.code);
        expect(err.code == 1).assertTrue();
        done();
      });
    })

    /*
     * @tc.number  : FMS_ShareForm_4600
     * @tc.name    : Support cross-device sharing
     * @tc.desc    : The card interface formId is passed in ‘’, and the callback form test
     */
    it('FMS_ShareForm_4600', 0, function  (done) {
      console.log("start FMS_ShareForm_4600 =====>");
      formHost.shareForm("", "xxxxxxx", (err, data) => {
        console.log("FormMgrService shareForm FMS_ShareForm_4600 ====> result data:" + data);
        console.log("FormMgrService shareForm FMS_ShareForm_4600 ====> result err:" + err.code);
        expect(err.code == 1).assertTrue();
        done();
      })
    })

    /*
     * @tc.number  : FMS_ShareForm_0900
     * @tc.name    : Support cross-device sharing
     * @tc.desc    : Card interface passes in non-existent deviceId, promise form test
     */
    it('FMS_ShareForm_0900', 0, async function  (done) {
      console.log("start FMS_ShareForm_0900 =====>");
      await formHost.shareForm(cardFormId.toString(), "xxxxxxx").then((data) => {
        console.log("FormMgrService shareForm FMS_ShareForm_0900 ====> result data:" + data);
        expect().assertFail();
      }).catch((err) => {
        console.log("FormMgrService shareForm FMS_ShareForm_0900 ====> result err:" + err.code);
        expect(err.code == 37).assertTrue();
      });
      done();
    })

    /*
     * @tc.number  : FMS_ShareForm_1000
     * @tc.name    : Support cross-device sharing
     * @tc.desc    : The card interface formId is passed in null, and the promise form test
     */
    it('FMS_ShareForm_1000', 0,async function  (done) {
      console.log("start FMS_ShareForm_1000 =====>");
      await formHost.shareForm(cardFormId.toString(), null).then((data) => {
        console.log("FormMgrService shareForm FMS_ShareForm_1000 ====> result data:" + data);
        expect().assertFail();
      }).catch((err) => {
        console.log("FormMgrService shareForm FMS_ShareForm_1000 ====> result err:" + err.code);
        expect(err.code == 1).assertTrue();
      });
      done();
    })

    /*
     * @tc.number  : FMS_ShareForm_1100
     * @tc.name    : Support cross-device sharing
     * @tc.desc    : The card interface formId is passed in undefined, and the promise form test
     */
    it('FMS_ShareForm_1100', 0,async function  (done) {
      console.log("start FMS_ShareForm_1100 =====>");
      await formHost.shareForm(cardFormId.toString(), undefined).then((data) => {
        console.log("FormMgrService shareForm FMS_ShareForm_1100 ====> result data:" + data);
        expect().assertFail();
      }).catch((err) => {
        console.log("FormMgrService shareForm FMS_ShareForm_1100 ====> result err:" + err.code);
        expect(err.code == 1).assertTrue();
      });
      done();
    })

    /*
     * @tc.number  : FMS_ShareForm_4700
     * @tc.name    : Support cross-device sharing
     * @tc.desc    : The card interface formId is passed in "", and the promise form test
     */
    it('FMS_ShareForm_4700', 0,async function  (done) {
      console.log("start FMS_ShareForm_4700 =====>");
      await formHost.shareForm(cardFormId.toString(), "").then((data) => {
        console.log("FormMgrService shareForm FMS_ShareForm_4700 ====> result data:" + data);
        expect().assertFail();
      }).catch((err) => {
        console.log("FormMgrService shareForm FMS_ShareForm_4700 ====> result err:" + err.code);
        expect(err.code == 1).assertTrue();
      });
      done();
    })

    /*
     * @tc.number  : FMS_ShareForm_4800
     * @tc.name    : Support cross-device sharing
     * @tc.desc    : The card interface passes in the designId of the machine, test in the form of promise
     */
    it('FMS_ShareForm_4800', 0,async function  (done) {
      let dmClass;
      let deviceId;
      console.log("FormMgrService getTrustedDeviceListSync called");
      await deviceManager.createDeviceManager("com.example.sharecardexceptionparameterstagetest", async (err, dm) => {
        console.log("FormMgrService createDeviceManager err:" + JSON.stringify(err) + '  --success:' + 
        JSON.stringify(dm))
        dmClass = dm;
        deviceId = dmClass.getLocalDeviceInfoSync();
        console.log("FormMgrService release called");
        console.log("start FMS_ShareForm_4800 =====>+" + JSON.stringify(deviceId));
        await formHost.shareForm(cardFormId.toString(), deviceId.toString()).then((data) => {
          expect().assertFail();
          console.log("FormMgrService shareForm FMS_ShareForm_4800 ====> result data:" + data);
        }).catch((err) => {
          console.log("FormMgrService shareForm FMS_ShareForm_4800 ====> result err:" + err.code);
          expect(err.code == 37).assertTrue();
        });
          dmClass.release()
          console.log("FormMgrService release called");
          done();
      });
      
    })

    /*
     * @tc.number  : FMS_ShareForm_4900
     * @tc.name    : Support cross-device sharing
     * @tc.desc    : Card interface passes in non-existent deviceId, callback form test
     */
    it('FMS_ShareForm_4900', 0, function  (done) {
      console.log("start FMS_ShareForm_4900 =====>");
        formHost.shareForm(cardFormId.toString(), "xxxxxxx", (err, data) => {
          console.log("FormMgrService shareForm FMS_ShareForm_4900 ====> result data:" + data);
          console.log("FormMgrService shareForm FMS_ShareForm_4900 ====> result err:" + err.code);
          expect(err.code == 37).assertTrue();
          done();
      });
    })

    /*
     * @tc.number  : FMS_ShareForm_5000
     * @tc.name    : Support cross-device sharing
     * @tc.desc    : The card interface formId is passed in null, and the promise form test
     */
    it('FMS_ShareForm_5000', 0, function  (done) {
      console.log("start FMS_ShareForm_5000 =====>");
      formHost.shareForm(cardFormId.toString(), null, (err, data) => {
        console.log("FormMgrService shareForm FMS_ShareForm_5000 ====> result data:" + data);
        console.log("FormMgrService shareForm FMS_ShareForm_5000 ====> result err:" + err.code);
        expect(err.code == 1).assertTrue();
        done();
      });
    })

    /*
     * @tc.number  : FMS_ShareForm_5100
     * @tc.name    : Support cross-device sharing
     * @tc.desc    : The card interface formId is passed in undefined, and the promise form test
     */
    it('FMS_ShareForm_5100', 0, function  (done) {
      console.log("start FMS_ShareForm_5100 =====>");
      formHost.shareForm(cardFormId.toString(), undefined, (err, data) => {
        console.log("FormMgrService shareForm FMS_ShareForm_5100 ====> result data:" + data);
        console.log("FormMgrService shareForm FMS_ShareForm_5100 ====> result err:" + err.code);
        expect(err.code == 1).assertTrue();
        done();
      });
    })

    /*
     * @tc.number  : FMS_ShareForm_5200
     * @tc.name    : Support cross-device sharing
     * @tc.desc    : The card interface formId is passed in "", and the promise form test
     */
    it('FMS_ShareForm_5200', 0, function  (done) {
      console.log("start FMS_ShareForm_5200 =====>");
        formHost.shareForm(cardFormId.toString(), "", (err, data) => {
          console.log("FormMgrService shareForm FMS_ShareForm_5200 ====> result data:" + data);
          console.log("FormMgrService shareForm FMS_ShareForm_5200 ====> result err:" + err.code);
          expect(err.code == 1).assertTrue();
          done();
      });
    })

    /*
     * @tc.number  : FMS_ShareForm_5300
     * @tc.name    : Support cross-device sharing
     * @tc.desc    : The card interface passes in the designId of the machine, test in the form of promise
     */
    it('FMS_ShareForm_5300', 0, function  (done) {
      let dmClass;
      let deviceId;
      console.log("FormMgrService getTrustedDeviceListSync called");
        deviceManager.createDeviceManager("com.example.sharecardexceptionparameterstagetest", async(err, dm) => {
        console.log("FormMgrService createDeviceManager err:" + JSON.stringify(err) + '  --success:' + JSON.stringify(dm))
        dmClass = dm;
        deviceId = dmClass.getLocalDeviceInfoSync();
        console.log("start FMS_ShareForm_5300 =====>+" + JSON.stringify(deviceId));
          formHost.shareForm(cardFormId.toString(), deviceId.toString(), (err, data) => {
          console.log("FormMgrService shareForm FMS_ShareForm_5300 ====> result data:" + data);
          console.log("FormMgrService shareForm FMS_ShareForm_5300 ====> result err:" + err.code);
          expect(err.code == 37).assertTrue();
          dmClass.release();
          console.log("FormMgrService release called");
          done();
        });
      });
    })
  })
}