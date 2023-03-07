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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import formHost from '@ohos.app.form.formHost';
import formInfo from '@ohos.app.form.formInfo';
import { FormInfoTest } from '../../common/FormInfoTest'

var TAG = 'ACTS_AcrossDevicesForm'
var ERROR_DEVICE_ID = '1'
var ERROR_PREVIEW_CODE = 16500100


export default function abilityTest() {
  describe('ActsAcrossDeviceFormTest', function () {
    let formInfoTest = new FormInfoTest();
    let filter: formInfo.FormInfoFilter = {
      deviceId: ERROR_DEVICE_ID,
      bundleName: formInfoTest.stage_b_bundle,
      moduleName: 'entry'
    }

    /**
     * @tc.number: ACTS_AcrossDevicesFormInfo_0600
     * @tc.name: Get crossing devices form info
     * @tc.desc: Get crossing devices form info by 'AsyncCallback'
    */
    it('ACTS_AcrossDevicesFormInfo_0600', 0, function (done) {
      console.info("ACTS_AcrossDevicesFormInfo_0600 begin")
      formHost.getFormsInfo(filter, (err, data) => {
        console.info(`${TAG} filter:${JSON.stringify(filter)}`);
        console.info(`${TAG} err:${JSON.stringify(err)}`);
        console.info(`${TAG} data:${JSON.stringify(data)}`);
        expect(data.length).assertEqual(0)
        done()
      })
      console.info("ACTS_AcrossDevicesFormInfo_0600 end")
    })

    /**
     * @tc.number: ACTS_AcrossDevicesFormInfo_1300
     * @tc.name: Get crossing devices form info
     * @tc.desc: Get crossing devices form info by 'promise'
    */
    it('ACTS_AcrossDevicesFormInfo_1300', 0, function (done) {
      console.info("ACTS_AcrossDevicesFormInfo_1300 begin")
      formHost.getFormsInfo(filter)
        .then((data) => {
          console.info(`${TAG} filter:${JSON.stringify(filter)}`);
          console.info(`${TAG} data:${JSON.stringify(data)}`);
          expect(data.length).assertEqual(0)
          done()
        })
        .catch((err) => {
          console.info(`${TAG}, err:${JSON.stringify(err)}`);
          expect(null).assertFail()
          done()
        })
      console.info("ACTS_AcrossDevicesFormInfo_1300 end")
    })

    /**
     * @tc.number: ACTS_AcrossDevicesFormInfo_2000_1
     * @tc.name: Get local form info by api8
     * @tc.desc: Get local form info by api8
    */
    it('ACTS_AcrossDevicesFormInfo_2000_1', 0, function (done) {
      console.info("ACTS_AcrossDevicesFormInfo_2000_1 begin")
      formHost.getAllFormsInfo((err, data) => {
        console.info(`${TAG} getAllFormsInfo_async, err: ${JSON.stringify(err)}`);
        data.forEach((val, ind) => {
          console.info(`${TAG} getAllFormsInfo_async, form[${ind}]: ${JSON.stringify(val)}`);
        })
        let expectForms = new Set(["form_02", "form_03", "form_04", "form_05", "form_06", "form_07"])
        let message = formInfoTest.assertFormInfo(data, expectForms)
        expect(message).assertEqual('pass')
        done();
      })
      console.info("ACTS_AcrossDevicesFormInfo_2000_1 end")
    })

    /**
     * @tc.number: ACTS_AcrossDevicesFormInfo_2000_2
     * @tc.name: Get local form info by api8
     * @tc.desc: Get local form info by api8
    */
    it('ACTS_AcrossDevicesFormInfo_2000_2', 0, function (done) {
      console.info("ACTS_AcrossDevicesFormInfo_2000_2 begin")
      formHost.getAllFormsInfo()
        .then((data) => {
          data.forEach((val, ind) => {
            console.info(`${TAG} getAllFormsInfo_promise, form[${ind}]: ${JSON.stringify(val)}`);
          })
          let expectForms = new Set(["form_02", "form_03", "form_04", "form_05", "form_06", "form_07"])
          let message = formInfoTest.assertFormInfo(data, expectForms)
          expect(message).assertEqual('pass')
          done();
        })
        .catch((err) => {
          console.info(`${TAG} getAllFormsInfo_promise, err: ${JSON.stringify(err)}`);
          expect(null).assertFail()
          done()
        })
      console.info("ACTS_AcrossDevicesFormInfo_2000_2 end")
    })

    /**
     * @tc.number: ACTS_AcrossDevicesFormInfo_2000_3
     * @tc.name: Get local form info by api8
     * @tc.desc: Get local form info by api8
    */
    it('ACTS_AcrossDevicesFormInfo_2000_3', 0, function (done) {
      console.info("ACTS_AcrossDevicesFormInfo_2000_3 begin")
      formHost.getFormsInfo(formInfoTest.stage_b_bundle, (err, data) => {
        console.info(`${TAG} getFormsInfo_async(stage), err: ${JSON.stringify(err)}`);
        data.forEach((val, ind) => {
          console.info(`${TAG} getFormsInfo_async(stage), form[${ind}]: ${JSON.stringify(val)}`);
        })
        let expectForms = new Set(["form_02", "form_03", "form_04",])
        let message = formInfoTest.assertFormInfo(data, expectForms)
        expect(message).assertEqual('pass')
        done();
      })
      console.info("ACTS_AcrossDevicesFormInfo_2000_3 end")
    })


    /**
     * @tc.number: ACTS_AcrossDevicesFormInfo_2000_4
     * @tc.name: Get local form info by api8
     * @tc.desc: Get local form info by api8
    */
    it('ACTS_AcrossDevicesFormInfo_2000_4', 0, function (done) {
      console.info("ACTS_AcrossDevicesFormInfo_2000_4 begin")
      formHost.getFormsInfo(formInfoTest.stage_b_bundle, 'entry', (err, data) => {
        console.info(`${TAG} getFormsInfo_async(stage_entry), err: ${JSON.stringify(err)}`);
        data.forEach((val, ind) => {
          console.info(`${TAG} getFormsInfo_async(stage_entry), form[${ind}]: ${JSON.stringify(val)}`);
        })
        let expectForms = new Set(["form_02", "form_03",])
        let message = formInfoTest.assertFormInfo(data, expectForms)
        expect(message).assertEqual('pass')
        done();
      })
      console.info("ACTS_AcrossDevicesFormInfo_2000_4 end")
    })

    /**
     * @tc.number: ACTS_AcrossDevicesFormInfo_2000_5
     * @tc.name: Get local form info by api8
     * @tc.desc: Get local form info by api8
    */
    it('ACTS_AcrossDevicesFormInfo_2000_5', 0, function (done) {
      console.info("ACTS_AcrossDevicesFormInfo_2000_5 begin")
      formHost.getFormsInfo(formInfoTest.fa_bundle)
        .then((data) => {
          data.forEach((val, ind) => {
            console.info(`${TAG} getFormsInfo_promise(fa), form[${ind}]: ${JSON.stringify(val)}`);
          })
          let expectForms = new Set(["form_05", "form_06", "form_07"])
          let message = formInfoTest.assertFormInfo(data, expectForms)
          expect(message).assertEqual('pass')
          done();
        })
        .catch((err) => {
          console.info(`${TAG} getFormsInfo_promise(fa), err: ${JSON.stringify(err)}`);
          expect(null).assertFail()
          done()
        })
      console.info("ACTS_AcrossDevicesFormInfo_2000_5 end")
    })

    /**
     * @tc.number: ACTS_AcrossDevicesFormInfo_2000_6
     * @tc.name: Get local form info by api8
     * @tc.desc: Get local form info by api8
    */
    it('ACTS_AcrossDevicesFormInfo_2000_6', 0, function (done) {
      console.info("ACTS_AcrossDevicesFormInfo_2000_6 begin")
      formHost.getFormsInfo(formInfoTest.fa_bundle, 'entry')
        .then((data) => {
          data.forEach((val, ind) => {
            console.info(`${TAG} getFormsInfo_promise(fa_entry), form[${ind}]: ${JSON.stringify(val)}`);
          })
          let expectForms = new Set(["form_05", "form_06", "form_07"])
          let message = formInfoTest.assertFormInfo(data, expectForms)
          expect(message).assertEqual('pass')
          done();
        })
        .catch((err) => {
          console.info(`${TAG} getFormsInfo_promise(fa_entry), err: ${JSON.stringify(err)}`);
          expect(null).assertFail()
          done()
        })
      console.info("ACTS_AcrossDevicesFormInfo_2000_6 end")
    })

    /**
     * @tc.number: ACTS_AcrossDevicesFormPreview_0600_1
     * @tc.name: Get PreviewImage across devices by api8
     * @tc.desc: Get PreviewImage across devices by 'AsyncCallback'
    */
    it('ACTS_AcrossDevicesFormPreview_0600_1', 0, function (done) {
      console.info("ACTS_AcrossDevicesFormPreview_0600_1 begin")
      var want = {
        "parameters": {
          "ohos.extra.param.key.bundle_name": 'com.across_devices_form.actsacrossdeviceformtest',
          "ohos.extra.param.key.module_name": 'entry',
          "ohos.extra.param.key.ability_name": 'FormAbility',
          "ohos.extra.param.key.form_name": 'widget'
        }
      }
      formHost.getFormPreviewImage(want, (err, data) => {
        console.info(`${TAG}Preview_0600_1 (AsyncCallback) : ${JSON.stringify(err.message)}`)
        console.info(`${TAG}Preview_0600_1 (AsyncCallback) : ${JSON.stringify(err)}`)
        expect(err.code).assertEqual(ERROR_PREVIEW_CODE)
        done()
      })
      console.info("ACTS_AcrossDevicesFormPreview_0600_1 end")
    })

    /**
     * @tc.number: ACTS_AcrossDevicesFormPreview_0600_2
     * @tc.name: Get PreviewImage across devices by api8
     * @tc.desc: Get PreviewImage across devices by 'promise'
    */
    it('ACTS_AcrossDevicesFormPreview_0600_2', 0, function (done) {
      console.info("ACTS_AcrossDevicesFormPreview_0600_2 begin")
      var want = {
        "parameters": {
          "ohos.extra.param.key.bundle_name": 'com.across_devices_form.actsacrossdeviceformtest',
          "ohos.extra.param.key.module_name": 'entry',
          "ohos.extra.param.key.ability_name": 'FormAbility',
          "ohos.extra.param.key.form_name": 'widget'
        }
      }
      formHost.getFormPreviewImage(want).then((data) => {
        console.info(`${TAG}Preview_0600_2 (Promise) : ${JSON.stringify(data)}`)
        done()
      }).catch((err) => {
        console.info(`${TAG}Preview_0600_2 (Promise) : ${JSON.stringify(err.message)}`)
        console.info(`${TAG}Preview_0600_2 (Promise) : ${JSON.stringify(err)}`)
        expect(err.code).assertEqual(ERROR_PREVIEW_CODE)
        done()
      })
      console.info("ACTS_AcrossDevicesFormPreview_0600_2 end")
    })

  })
}