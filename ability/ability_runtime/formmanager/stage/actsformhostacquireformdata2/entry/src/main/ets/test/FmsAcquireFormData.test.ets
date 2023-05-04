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

import commonEvent from '@ohos.commonEvent';
import { beforeAll, afterAll, beforeEach, afterEach, describe, expect, it } from '@ohos/hypium'
import formHost from '@ohos.app.form.formHost';
import formError from '@ohos.application.formError';


var acquiredFormData_Event = {
    events: ["FMS_FORM_ACQUIRE_DATA_commonEvent"]
};
const ERR_NOT_EXIST_ID_CODE = 16501000;
const ERR_OK = 200;
let subscriberOnAcquired;

export default function test() {
    let cardFormId;
    describe(`FmsAcquireFormDataTest`, () => {
        beforeAll(async (done) => {
            let subscriber;
            function subscribeSupplyCallback(err,data) {
                console.log("===>formId:===>" + JSON.stringify(data.parameters.formId));
                if (data.event == "FMS_FORM_ACQUIRE_DATA_commonEvent") {
                    console.log("===>formId:===>" + JSON.stringify(data.parameters.formId));
                    cardFormId = data.parameters.formId;
                }
            }
            function unSubscribeSupplyCallback() {
                console.log("===>unSubscribeSupplyCallback:===>");
                done();
            }
            await commonEvent.createSubscriber(acquiredFormData_Event).then(async(data) => {
                console.log("Create Subscriber ====>");
                await globalThis.abilityContext.startAbility(
                    {
                        bundleName:'com.example.acquireformdatatest',
                        abilityName: 'MainAbility'
                    }, () => {
                        console.log("startAbility end ====>");
                    })
                subscriber = data;
                commonEvent.subscribe(subscriber, subscribeSupplyCallback);
            })
            setTimeout(function () {
                commonEvent.subscribe(subscriber, unSubscribeSupplyCallback);
            }, 5000);
        })

        beforeEach(function (done) {
            setTimeout(function () {
                done();
            }, 3000);
        });

        /**
         * @tc.number: FMS_AcquireFormData_0100
         * @tc.name: Support form host to get form data
         * @tc.desc: Card interface passes in non-exsitent formId, promise form test
         */
        it(`FMS_AcquireFormData_0100`, 0, async function (done) {
            console.log("start FMS_AcquireFormData_0100 =====>");
            await formHost.acquireFormData("1111").then((data) => {
              console.error("FormMgrService acquiredFormData FMS_AcquireFormData_0100 ====> result data" + data);
              expect().assertFail();
            }).catch((err) => {
              console.error("FormMgrService acquiredFormData FMS_AcquireFormData_0100 ====> result err" + JSON.stringify(err));
              expect(ERR_NOT_EXIST_ID_CODE).assertEqual(err.data);
            });
            done();
        });

        /**
         * @tc.number: FMS_AcquireFormData_0200
         * @tc.name: Support form host to get form data
         * @tc.desc: The Card interface formId is null, promise form test
         */
        it(`FMS_AcquireFormData_0200`, 0, async function (done) {
            console.log("start FMS_AcquireFormData_0200 =====>");
            await formHost.acquireFormData(null).then((data) => {
              console.error("FormMgrService acquiredFormData FMS_AcquireFormData_0200 ====> result data" + data);
              expect().assertFail();
            }).catch((err) => {
              console.error("FormMgrService acquiredFormData FMS_AcquireFormData_0200 ====> result err" + JSON.stringify(err));
              expect(ERR_NOT_EXIST_ID_CODE).assertEqual(err.data);
            });
            done();
        });

        /**
         * @tc.number: FMS_AcquireFormData_0300
         * @tc.name: Support form host to get form data
         * @tc.desc: The Card interface formId is undefined, promise form test
         */
        it(`FMS_AcquireFormData_0300`, 0, async function (done) {
            console.log("start FMS_AcquireFormData_0300 =====>");
            await formHost.acquireFormData(undefined).then((data) => {
              console.error("FormMgrService acquiredFormData FMS_AcquireFormData_0300 ====> result data" + data);
              expect().assertFail();
            }).catch((err) => {
              console.error("FormMgrService acquiredFormData FMS_AcquireFormData_0300 ====> result err" + JSON.stringify(err));
              expect(ERR_NOT_EXIST_ID_CODE).assertEqual(err.data);
            });
            done();
        });


        /**
         * @tc.number: FMS_AcquireFormData_0400
         * @tc.name: Support form host to get form data
         * @tc.desc: The Card interface formId is "", promise form test
         */
        it(`FMS_AcquireFormData_0400`, 0, async function (done) {
            console.log("start FMS_AcquireFormData_0400 =====>");
            await formHost.acquireFormData("").then((data) => {
              console.error("FormMgrService acquiredFormData FMS_AcquireFormData_0400 ====> result data" + data);
              expect().assertFail();
            }).catch((err) => {
              console.error("FormMgrService acquiredFormData FMS_AcquireFormData_0400 ====> result err" + JSON.stringify(err));
              expect(ERR_NOT_EXIST_ID_CODE).assertEqual(err.data);
            });
            done();
        });

        /**
         * @tc.number: FMS_AcquireFormData_0500
         * @tc.name: Support form host to get form data
         * @tc.desc: Card interface passes in non-exsitent, callback form test
         */
        it(`FMS_AcquireFormData_0500`, 0, async function (done) {
            console.log("start FMS_AcquireFormData_0500 =====>");
            await formHost.acquireFormData("1111", (error, data) => {
              console.error("FormMgrService acquiredFormData FMS_AcquireFormData_0500 ====> result data" + data);
              console.error("FormMgrService acquiredFormData FMS_AcquireFormData_0500 ====> result err" + JSON.stringify(error));
              expect(ERR_NOT_EXIST_ID_CODE).assertEqual(error.data);
              done();
            });
        });

        /**
         * @tc.number: FMS_AcquireFormData_0600
         * @tc.name: Support form host to get form data
         * @tc.desc: The Card interface formId is null, callback form test
         */
        it(`FMS_AcquireFormData_0600`, 0, async function (done) {
            console.log("start FMS_AcquireFormData_0600 =====>");
            await formHost.acquireFormData(null, (error, data) => {
              console.error("FormMgrService acquiredFormData FMS_AcquireFormData_0600 ====> result data" + data);
              console.error("FormMgrService acquiredFormData FMS_AcquireFormData_0600 ====> result err" + JSON.stringify(error));
              expect(ERR_NOT_EXIST_ID_CODE).assertEqual(error.data);
              done();
            });
        });

        /**
         * @tc.number: FMS_AcquireFormData_0700
         * @tc.name: Support form host to get form data
         * @tc.desc: The Card interface formId is undefined, callback form test
         */
        it(`FMS_AcquireFormData_0700`, 0, async function (done) {
            console.log("start FMS_AcquireFormData_0700 =====>");
            await formHost.acquireFormData(undefined, (error, data) => {
              console.error("FormMgrService acquiredFormData FMS_AcquireFormData_0700 ====> result data" + data);
              console.error("FormMgrService acquiredFormData FMS_AcquireFormData_0700 ====> result err" + JSON.stringify(error));
              expect(ERR_NOT_EXIST_ID_CODE).assertEqual(error.data);
              done();
            });
        });


        /**
         * @tc.number: FMS_AcquireFormData_0800
         * @tc.name: Support form host to get form data
         * @tc.desc: The Card interface formId is "", callback form test
         */
         it(`FMS_AcquireFormData_0800`, 0, async function (done) {
            console.log("start FMS_AcquireFormData_0800 =====>");
            await formHost.acquireFormData("", (error, data) => {
              console.error("FormMgrService acquiredFormData FMS_AcquireFormData_0800 ====> result data" + data);
              console.error("FormMgrService acquiredFormData FMS_AcquireFormData_0800 ====> result err" + JSON.stringify(error));
              expect(ERR_NOT_EXIST_ID_CODE).assertEqual(error.data);
              done();
            });
        });

        /**
         * @tc.number: FMS_AcquireFormData_0900
         * @tc.name: Support form host to get form data
         * @tc.desc: The Card interface formId is right, callback form test
         */
        it(`FMS_AcquireFormData_0900`, 0, async function (done) {
            console.log("start FMS_AcquireFormData_0900 =====>");
            await formHost.acquireFormData(cardFormId.toString(), (error, data) => {
              console.error("FormMgrService acquiredFormData FMS_AcquireFormData_0900 ====> result data" + data);
              console.error("FormMgrService acquiredFormData FMS_AcquireFormData_0900 ====> result err" + JSON.stringify(error));
                expect(ERR_OK).assertEqual(error.data);
              done();
            });
        });

        /**
         * @tc.number: FMS_AcquireFormData_1000
         * @tc.name: Support form host to get form data
         * @tc.desc: The Card interface formId is undefined, promise form test
         */
        it(`FMS_AcquireFormData_1000`, 0, async function (done) {
            console.log("start FMS_AcquireFormData_1000 =====>");
            await formHost.acquireFormData(cardFormId.toString()).then((data) => {
              console.error("FormMgrService acquiredFormData FMS_AcquireFormData_1000 ====> result data" + data);
            }).catch((err) => {
              console.error("FormMgrService acquiredFormData FMS_AcquireFormData_1000 ====> result err" + JSON.stringify(err));
              expect().assertFail();
            });
            done();
        });
    });
}