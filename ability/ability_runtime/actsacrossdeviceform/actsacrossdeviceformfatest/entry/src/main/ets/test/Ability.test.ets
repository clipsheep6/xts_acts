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
import abilityAccessCtrl from '@ohos.abilityAccessCtrl'
import bundle from '@ohos.bundle'
import deviceManager from '@ohos.distributedHardware.deviceManager'
import formHost from '@ohos.app.form.formHost'
import formInfo from '@ohos.app.form.formInfo'
import formHostOld from '@ohos.application.formHost'
import formBindingData from '@ohos.app.form.formBindingData'
import formProvider from '@ohos.application.formProvider'
import { FormInfoTest } from '../../common/FormInfoTest'

var TAG = '[ACTS_AcrossDevicesForm]'
var ERROR_FORM_ID = '1'
var formInfoTest: FormInfoTest = new FormInfoTest();
var ERROR_REQUEST_CODE = 9
var ERROR_UPDATE_CODE = 9

const PERMISSION_USER_SET = 1;
const PERMISSION_USER_NAME = "ohos.permission.DISTRIBUTED_DATASYNC";
var tokenID = undefined;

async function getLocalDevice() {
  console.log(`${TAG} getLocalDevice called`)
  let localDeviceId: string = '';
  await deviceManager.createDeviceManager(formInfoTest.fa_test_bundle, (err, dManager) => {
     console.log(`${TAG} getLocalDevice err: ${JSON.stringify(err)}`)
     console.log(`${TAG} getLocalDevice deviceManager: ${JSON.stringify(dManager)}`)
     if ( dManager ) {
       localDeviceId = dManager.getLocalDeviceInfoSync().deviceId
       dManager.release();
     } else {
       console.log(`${TAG} getLocalDevice: createDeviceManager fail`);
     }
  });
  return localDeviceId;
}

function getFormsInfoPromise(caseId, filter, expectForms, done) {
    formHost.getFormsInfo(filter).then((data) => {
        console.info(`${caseId}, filter: ${JSON.stringify(filter)}`);
        data.forEach((val, ind) => {
            console.info(`${TAG} ${caseId}, form[${ind}]: ${JSON.stringify(val)}`);
        })
        let message = formInfoTest.assertFormInfo(data, expectForms)
        expect(message).assertEqual('pass')
        done();
    })
    .catch((err) => {
        console.info(`${caseId}, err: ${JSON.stringify(err)}`);
        expect(null).assertFail()
        done()
    })
}

function getFormsInfoAsync(caseId, filter, expectForms, done) {
    formHost.getFormsInfo(filter, (err, data) => {
        console.info(`${caseId}, filter: ${JSON.stringify(filter)}`);
        console.info(`${caseId}, err: ${JSON.stringify(err)}`);
        data.forEach((val, ind) => {
            console.info(`${caseId}, form[${ind}]: ${JSON.stringify(val)}`);
        })
        let message = formInfoTest.assertFormInfo(data, expectForms)
        expect(message).assertEqual('pass')
        done();
    })
}

export default function abilityTest() {

    describe('ActsAcrossDeviceFormFATest', function () {
        beforeAll(async function (done) {
            console.debug(`${TAG}====>beforeAll start====`);
            var appInfo = await bundle.getApplicationInfo('com.across_devices_form.actsacrossdeviceformfatest', 0, 100);
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

        /**
         * @tc.number: ACTS_AcrossDevicesFormUpdated_0700_1
         * @tc.name: Form user refresh crossing devices form
         * @tc.desc: Form user refresh crossing devices form by 'Promise'
        */
        it('ACTS_AcrossDevicesFormUpdated_0700_1',0, function (done) {
            console.info("ACTS_AcrossDevicesFormUpdated_0700_1 begin")
            formHostOld.requestForm(ERROR_FORM_ID).catch((err) => {
                console.info(`${TAG}Updated_0700_1 err: ${JSON.stringify(err.message)}`);
                console.info(`${TAG}Updated_0700_1 err: ${JSON.stringify(err)}`);
                expect(err.code).assertEqual(ERROR_REQUEST_CODE);
                done();
            })
            console.info("ACTS_AcrossDevicesFormUpdated_0700_1 end")
        })

        /**
         * @tc.number: ACTS_AcrossDevicesFormUpdated_0700_2
         * @tc.name: Form user refresh crossing devices form
         * @tc.desc: Form user refresh crossing devices form by 'AsyncCallback'
        */
        it('ACTS_AcrossDevicesFormUpdated_0700_2',0, function (done) {
            console.info("ACTS_AcrossDevicesFormUpdated_0700_2 begin")
            formHostOld.requestForm(ERROR_FORM_ID, (err) => {
                console.info(`${TAG}Updated_0700_2 err: ${JSON.stringify(err.message)}`);
                console.info(`${TAG}Updated_0700_2 err: ${JSON.stringify(err)}`);
                expect(err.code).assertEqual(ERROR_REQUEST_CODE);
                done();
            })
            console.info("ACTS_AcrossDevicesFormUpdated_0700_2 end")
        })

        /**
         * @tc.number: ACTS_AcrossDevicesFormUpdated_0800_1
         * @tc.name: Provider actively refresh crossing devices form
         * @tc.desc: Provider actively refresh crossing devices form by 'AsyncCallback'
        */
        it('ACTS_AcrossDevicesFormUpdated_0800_1',0, function (done) {
            console.info("ACTS_AcrossDevicesFormUpdated_0800_1 begin")
            let obj = {
                "updateCount": 1
            };
            let formData = formBindingData.createFormBindingData(obj);
            formProvider.updateForm(ERROR_FORM_ID, formData, (err) => {
                console.info(`${TAG}Updated_0800_1 err: ${JSON.stringify(err.message)}`);
                console.info(`${TAG}Updated_0800_1 err: ${JSON.stringify(err)}`);
                expect(err.code).assertEqual(ERROR_UPDATE_CODE);
                done();
            })
            console.info("ACTS_AcrossDevicesFormUpdated_0800_1 end")
        })

        /**
         * @tc.number: ACTS_AcrossDevicesFormUpdated_0800_2
         * @tc.name: Provider actively refresh crossing devices form
         * @tc.desc: Provider actively refresh crossing devices form by 'promise'
        */
        it('ACTS_AcrossDevicesFormUpdated_0800_2',0, function (done) {
            console.info("ACTS_AcrossDevicesFormUpdated_0800_2 begin")
            let obj = {
                "updateCount": 2
            };
            let formData = formBindingData.createFormBindingData(obj);
            formProvider.updateForm(ERROR_FORM_ID, formData).then(() => {
                console.info(`${TAG}Updated_0800_2 updateForm(Promise) success`);
                expect(null).assertFail();
                done();
            }).catch((err) => {
                console.info(`${TAG}Updated_0800_2 err: ${JSON.stringify(err.message)}`);
                console.info(`${TAG}Updated_0800_2 err: ${JSON.stringify(err)}`);
                expect(err.code).assertEqual(ERROR_UPDATE_CODE);
                done();
            })
            console.info("ACTS_AcrossDevicesFormUpdated_0800_2 end")
        })

        /**
         * @tc.number: ACTS_AcrossDevicesFormInfo_2100_1
         * @tc.name: Get local form info by api9
         * @tc.desc: Get local form info by api9
        */
        it('ACTS_AcrossDevicesFormInfo_2100_1',0, function (done) {
            let caseId = 'ACTS_AcrossDevicesFormInfo_2100_1'
            console.info(`${caseId} begin`)
            let filter: formInfo.FormInfoFilter = {}
            let expectForms = new Set(["form_08", "form_09"])
            getFormsInfoPromise(caseId, filter, expectForms, done)
            console.info(`${caseId} end`)
        })

        /**
         * @tc.number: ACTS_AcrossDevicesFormInfo_2100_2
         * @tc.name: Get local form info by api9
         * @tc.desc: Get local form info by api9
        */
        it('ACTS_AcrossDevicesFormInfo_2100_2',0, async function (done) {
            let caseId = 'ACTS_AcrossDevicesFormInfo_2100_2'
            console.info(`${caseId} begin`)
            let localDeviceId = await getLocalDevice()
            console.info(`${caseId} ${localDeviceId}`)
            let filter: formInfo.FormInfoFilter = {deviceId: localDeviceId}
            let expectForms = new Set(["form_08", "form_09"])
            getFormsInfoPromise(caseId, filter, expectForms, done)
            console.info(`${caseId} end`)
        })

        /**
         * @tc.number: ACTS_AcrossDevicesFormInfo_2100_3
         * @tc.name: Get local form info by api9
         * @tc.desc: Get local form info by api9
        */
        it('ACTS_AcrossDevicesFormInfo_2100_3',0, function (done) {
            let caseId = 'ACTS_AcrossDevicesFormInfo_2100_3'
            console.info(`${caseId} begin`)
            let filter: formInfo.FormInfoFilter = {deviceId: ''}
            let expectForms = new Set(["form_08", "form_09"])
            getFormsInfoPromise(caseId, filter, expectForms, done)
            console.info(`${caseId} end`)
        })

        /**
         * @tc.number: ACTS_AcrossDevicesFormInfo_2100_4
         * @tc.name: Get local form info by api9
         * @tc.desc: Get local form info by api9
        */
        it('ACTS_AcrossDevicesFormInfo_2100_4',0, function (done) {
            let caseId = 'ACTS_AcrossDevicesFormInfo_2100_4'
            console.info(`${caseId} begin`)
            let filter: formInfo.FormInfoFilter = {deviceId: null}
            let expectForms = new Set(["form_08", "form_09"])
            getFormsInfoPromise(caseId, filter, expectForms, done)
            console.info(`${caseId} end`)
        })

        /**
         * @tc.number: ACTS_AcrossDevicesFormInfo_2100_5
         * @tc.name: Get local form info by api9
         * @tc.desc: Get local form info by api9
        */
        it('ACTS_AcrossDevicesFormInfo_2100_5',0, function (done) {
            let caseId = 'ACTS_AcrossDevicesFormInfo_2100_5'
            console.info(`${caseId} begin`)
            let filter: formInfo.FormInfoFilter = {deviceId: undefined}
            let expectForms = new Set(["form_08", "form_09"])
            getFormsInfoPromise(caseId, filter, expectForms, done)
            console.info(`${caseId} end`)
        })

        /**
         * @tc.number: ACTS_AcrossDevicesFormInfo_2100_6
         * @tc.name: Get local form info by api9
         * @tc.desc: Get local form info by api9
        */
        it('ACTS_AcrossDevicesFormInfo_2100_6',0, function (done) {
            let caseId = 'ACTS_AcrossDevicesFormInfo_2100_6'
            console.info(`${caseId} begin`)
            let filter: formInfo.FormInfoFilter = {bundleName: formInfoTest.stage_b_bundle}
            let expectForms = new Set(["form_02", "form_03", "form_04"])
            getFormsInfoPromise(caseId, filter, expectForms, done)
            console.info(`${caseId} end`)
        })

        /**
         * @tc.number: ACTS_AcrossDevicesFormInfo_2100_7
         * @tc.name: Get local form info by api9
         * @tc.desc: Get local form info by api9
        */
        it('ACTS_AcrossDevicesFormInfo_2100_7',0, function (done) {
            let caseId = 'ACTS_AcrossDevicesFormInfo_2100_7'
            console.info(`${caseId} begin`)
            let filter: formInfo.FormInfoFilter = {bundleName: ''}
            let expectForms = new Set(["form_08", "form_09"])
            getFormsInfoPromise(caseId, filter, expectForms, done)
            console.info(`${caseId} end`)
        })

        /**
         * @tc.number: ACTS_AcrossDevicesFormInfo_2100_8
         * @tc.name: Get local form info by api9
         * @tc.desc: Get local form info by api9
        */
        it('ACTS_AcrossDevicesFormInfo_2100_8',0, function (done) {
            let caseId = 'ACTS_AcrossDevicesFormInfo_2100_8'
            console.info(`${caseId} begin`)
            let filter: formInfo.FormInfoFilter = {bundleName: null}
            let expectForms = new Set(["form_08", "form_09"])
            getFormsInfoPromise(caseId, filter, expectForms, done)
            console.info(`${caseId} end`)
        })

        /**
         * @tc.number: ACTS_AcrossDevicesFormInfo_2100_9
         * @tc.name: Get local form info by api9
         * @tc.desc: Get local form info by api9
        */
        it('ACTS_AcrossDevicesFormInfo_2100_9',0, function (done) {
            let caseId = 'ACTS_AcrossDevicesFormInfo_2100_9'
            console.info(`${caseId} begin`)
            let filter: formInfo.FormInfoFilter = {bundleName: undefined}
            let expectForms = new Set(["form_08", "form_09"])
            getFormsInfoPromise(caseId, filter, expectForms, done)
            console.info(`${caseId} end`)
        })

        /**
         * @tc.number: ACTS_AcrossDevicesFormInfo_2100_10
         * @tc.name: Get local form info by api9
         * @tc.desc: Get local form info by api9
        */
        it('ACTS_AcrossDevicesFormInfo_2100_10',0, function (done) {
            let caseId = 'ACTS_AcrossDevicesFormInfo_2100_10'
            console.info(`${caseId} begin`)
            let filter: formInfo.FormInfoFilter = {moduleName: 'entry'}
            let expectForms = new Set(["form_08"])
            getFormsInfoAsync(caseId, filter, expectForms, done)
            console.info(`${caseId} end`)
        })

        /**
         * @tc.number: ACTS_AcrossDevicesFormInfo_2100_11
         * @tc.name: Get local form info by api9
         * @tc.desc: Get local form info by api9
        */
        it('ACTS_AcrossDevicesFormInfo_2100_11',0, function (done) {
            let caseId = 'ACTS_AcrossDevicesFormInfo_2100_11'
            console.info(`${caseId} begin`)
            let filter: formInfo.FormInfoFilter = {moduleName: ''}
            let expectForms = new Set(["form_08", "form_09"])
            getFormsInfoAsync(caseId, filter, expectForms, done)
            console.info(`${caseId} end`)
        })

        /**
         * @tc.number: ACTS_AcrossDevicesFormInfo_2100_12
         * @tc.name: Get local form info by api9
         * @tc.desc: Get local form info by api9
        */
        it('ACTS_AcrossDevicesFormInfo_2100_12',0, function (done) {
            let caseId = 'ACTS_AcrossDevicesFormInfo_2100_12'
            console.info(`${caseId} begin`)
            let filter: formInfo.FormInfoFilter = {moduleName: null}
            let expectForms = new Set(["form_08", "form_09"])
            getFormsInfoAsync(caseId, filter, expectForms, done)
            console.info(`${caseId} end`)
        })

        /**
         * @tc.number: ACTS_AcrossDevicesFormInfo_2100_13
         * @tc.name: Get local form info by api9
         * @tc.desc: Get local form info by api9
        */
        it('ACTS_AcrossDevicesFormInfo_2100_13',0, function (done) {
            let caseId = 'ACTS_AcrossDevicesFormInfo_2100_13'
            console.info(`${caseId} begin`)
            let filter: formInfo.FormInfoFilter = {moduleName: undefined}
            let expectForms = new Set(["form_08", "form_09"])
            getFormsInfoAsync(caseId, filter, expectForms, done)
            console.info(`${caseId} end`)
        })

        /**
         * @tc.number: ACTS_AcrossDevicesFormInfo_2100_14
         * @tc.name: Get local form info by api9
         * @tc.desc: Get local form info by api9
        */
        it('ACTS_AcrossDevicesFormInfo_2100_14',0, function (done) {
            let caseId = 'ACTS_AcrossDevicesFormInfo_2100_14'
            console.info(`${caseId} begin`)
            let filter: formInfo.FormInfoFilter = {deviceId: null, bundleName: formInfoTest.fa_bundle}
            let expectForms = new Set(["form_05", "form_06", "form_07"])
            getFormsInfoAsync(caseId, filter, expectForms, done)
            console.info(`${caseId} end`)
        })

        /**
         * @tc.number: ACTS_AcrossDevicesFormInfo_2100_15
         * @tc.name: Get local form info by api9
         * @tc.desc: Get local form info by api9
        */
        it('ACTS_AcrossDevicesFormInfo_2100_15',0, function (done) {
            let caseId = 'ACTS_AcrossDevicesFormInfo_2100_15'
            console.info(`${caseId} begin`)
            let filter: formInfo.FormInfoFilter = {
                deviceId: '',
                bundleName: formInfoTest.fa_bundle,
                moduleName: 'entry'
            }
            let expectForms = new Set(["form_05", "form_06", "form_07"])
            getFormsInfoAsync(caseId, filter, expectForms, done)
            console.info(`${caseId} end`)
        })

    })
}