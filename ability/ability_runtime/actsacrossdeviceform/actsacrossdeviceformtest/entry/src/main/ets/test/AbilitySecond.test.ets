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

import { describe, it, expect, beforeAll } from '@ohos/hypium'
import formHost from '@ohos.application.formHost'
import abilityAccessCtrl from '@ohos.abilityAccessCtrl'
import bundle from '@ohos.bundle'
import commonEvent from '@ohos.commonEvent'

var TAG = 'ACTS_AcrossDevicesForm'
var ERROR_FORM_ID = '1'
var ERROR_REQUEST_CODE = 9

const PERMISSION_USER_SET = 1;
const PERMISSION_USER_NAME = "ohos.permission.DISTRIBUTED_DATASYNC";
var tokenID = undefined;

var ACTS_CARD = {
  events: ["ERR_CODE"]
};

export default function abilitySecondTest() {
  describe('ActsAcrossDeviceFormTest', function () {

    beforeAll(async function (done) {
      console.debug(`${TAG}====>beforeAll start====`);
      var appInfo = await bundle.getApplicationInfo('com.across_devices_form.actsacrossdeviceformtest', 0, 100);
      tokenID = appInfo.accessTokenId;
      console.debug(`${TAG} accessTokenId:` + appInfo.accessTokenId);
      console.debug(`${TAG} abilityAccessCtrl:` + JSON.stringify(abilityAccessCtrl));
      var atManager = await abilityAccessCtrl.createAtManager();
      console.debug(`${TAG} atManager:` + JSON.stringify(atManager));
      var result = await atManager.grantUserGrantedPermission(tokenID, PERMISSION_USER_NAME, PERMISSION_USER_SET);
      console.debug(`${TAG} result: ${JSON.stringify(result)}`);
      console.debug(`${TAG}====>beforeAll end====`);
      done();
    })

    /*
    * @tc.number: ACTS_AcrossDevicesFormAddDelete_0500
    * @tc.name: Create a card,id is wrong
    * @tc.desc: Create a card,id is wrong,return error code
    */
    it('ACTS_AcrossDevicesFormAddDelete_0500', 0, function (done) {
      let subscriber;
      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug(`${TAG} AddDelete_1700 Create Subscriber`);
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(
          {
            bundleName: "com.across_devices_form.actsacrossdeviceformtest",
            abilityName: "MainAbility",
          }, (err, data) => {
            console.info(`${TAG} AddDelete_0500 startAbility err:` + JSON.stringify(err))
            console.info(`${TAG} AddDelete_0500 startAbility data:` + JSON.stringify(data))
          })
      })

      function subscribeCallBack(err, data) {
        console.info(`${TAG} AddDelete_0500 subscribeCallBack err:` + JSON.stringify(err));
        console.info(`${TAG} AddDelete_0500 subscribeCallBack data:` + JSON.stringify(data))
        console.info(`${TAG} AddDelete_0500 subscribeCallBack errcode:` + JSON.stringify(data.parameters.errCode.errcode))
        if (data.event == ACTS_CARD.events[0]) {
          expect(data.parameters.errCode.errcode == "2293809").assertTrue()
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }
      function unSubscribeCallback() {
        console.debug(`${TAG} unSubscribeCallback`)
        done()
      }
    })

    /**
      * @tc.number: ACTS_AcrossDevicesFormAddDelete_2000_1
      * @tc.name: Delete crossing devices form
      * @tc.desc: Delete crossing devices form by 'AsyncCallback'
     */
    it('ACTS_AcrossDevicesFormAddDelete_2000_1', 0, function (done) {
      console.info("ACTS_AcrossDevicesFormAddDelete_2000_1 begin")
      formHost.deleteForm(ERROR_FORM_ID, (err) => {
        console.info(`${TAG} err: ${JSON.stringify(err)}`)
        expect(err.code).assertEqual(ERROR_REQUEST_CODE);
        done();
      })
      console.info("ACTS_AcrossDevicesFormAddDelete_2000_1 end")
    })

    /**
     * @tc.number: ACTS_AcrossDevicesFormAddDelete_2000_2
     * @tc.name: Delete crossing devices form
     * @tc.desc: Delete crossing devices form by 'promise'
    */
    it('ACTS_AcrossDevicesFormAddDelete_2000_2', 0, function (done) {
      console.info("ACTS_AcrossDevicesFormAddDelete_2000_2 begin")
      formHost.deleteForm(ERROR_FORM_ID).then(() => {
        console.info(`${TAG} deleteForm(Promise) success`)
        expect(null).assertFail()
        done();
      }).catch((err) => {
        console.info(`${TAG} error: ${JSON.stringify(err)}`);
        expect(err.code).assertEqual(ERROR_REQUEST_CODE);
        done();
      })
      console.info("ACTS_AcrossDevicesFormAddDelete_2000_2 end")
    })

    /**
     * @tc.number: ACTS_AcrossDevicesFormAddDelete_3000
     * @tc.name: Release crossing devices form
     * @tc.desc: Release crossing devices form by 'promise'
    */
    it('ACTS_AcrossDevicesFormAddDelete_3000', 0, function (done) {
      console.info(`${TAG} AddDelete_3000 (Promise) begin`)
      formHost.releaseForm(ERROR_FORM_ID).then(() => {
        console.info(`${TAG} AddDelete_31(Promise) success`)
        expect(null).assertFail()
        done();
      }).catch((err) => {
        console.info(`${TAG} AddDelete_3000 error: ${JSON.stringify(err)}`);
        expect(err.code).assertEqual(ERROR_REQUEST_CODE);
        done();
      })
      console.info(`${TAG} AddDelete_3000 (Promise) end`)
    })

    /**
     * @tc.number: ACTS_AcrossDevicesFormAddDelete_3100
     * @tc.name: Release crossing devices form
     * @tc.desc: Release crossing devices form by 'AsyncCallback'
    */
    it('ACTS_AcrossDevicesFormAddDelete_3100', 0, function (done) {
      console.info(`${TAG} AddDelete_3100 (AsyncCallback) begin`)
      formHost.releaseForm(ERROR_FORM_ID, (err) => {
        console.info(`${TAG} err: ${JSON.stringify(err)}`)
        expect(err.code).assertEqual(ERROR_REQUEST_CODE);
        done();
      })
      console.info(`${TAG} AddDelete_3200 (AsyncCallback) end`)
    })

    /**
     * @tc.number: ACTS_AcrossDevicesFormAddDelete_3200
     * @tc.name: Release crossing devices form
     * @tc.desc: Release crossing devices form by 'AsyncCallback',parameter isReleaseCache is true
    */
    it('ACTS_AcrossDevicesFormAddDelete_3200', 0, function (done) {
      console.info(`${TAG} AddDelete_3200 (AsyncCallback) begin`)
      formHost.releaseForm(ERROR_FORM_ID, true, (err) => {
        console.info(`${TAG} err: ${JSON.stringify(err)}`)
        expect(err.code).assertEqual(ERROR_REQUEST_CODE);
        done();
      })
      console.info(`${TAG} AddDelete_3200 (AsyncCallback) end`)
    })



  })
}