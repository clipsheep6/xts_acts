/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

import formManager from '@ohos.ability.formManager'
import {describe, it, expect} from 'deccjsunit/index'

const TIMEOUT = 3000;
describe('ActsGetAllFormsInfoTest', function () {
    console.log("ActsGetAllFormsInfoTest===start");

    /**
     * @tc.name getAllFormsInfo test
     * @tc.number FMS_getFormsInfo_0500
     * @tc.desc All form configuration information is queried successfully (by AsyncCallback)
     */
    it('FMS_getFormsInfo_0500_callback', 0, async function (done) {
        console.log("FMS_getFormsInfo_0500_callback begin");

        var ret = formManager.getAllFormsInfo(
            (result, data) => {
                console.log("FMS_getFormsInfo_0500_callback, the forms number:" + data.length);
                console.log("FMS_getFormsInfo_0500_callback async::sucess, data json:" + JSON.stringify(data));
                var dataB = data.filter((p) => {
                    return p.bundleName == "com.form.formsystemtestserviceb";
                });
                var dataC = data.filter((p) => {
                    return p.bundleName == "com.form.formsystemtestservicec";
                });
                console.log("FMS_getFormsInfo_0500_callback async::sucess, dataB json:" + JSON.stringify(dataB));
                console.log("FMS_getFormsInfo_0500_callback async::sucess, dataC json:" + JSON.stringify(dataC));
                console.log("FMS_getFormsInfo_0500_callback async::result, result:" + result);
                expect(result).assertEqual(1);

                expect(dataB[0].name).assertEqual("FormB_Js001");
                expect(dataB[0].description).assertEqual("form_description");
                expect(dataB[0].type).assertEqual(1);
                expect(dataB[0].colorMode).assertEqual(-1);
                expect(dataB[0].jsComponentName).assertEqual("card");
                expect(dataB[0].isDefault).assertEqual(1);
                expect(dataB[0].updateEnabled).assertEqual(1);
                expect(dataB[0].updateDuration).assertEqual(1);
                expect(dataB[0].scheduledUpdateTime).assertEqual("10:30");
                expect(dataB[0].formVisibleNotify).assertEqual(1);
                expect(dataB[0].defaultDimension).assertEqual(1);
                expect(dataB[0].supportDimensions[0]).assertEqual(1);
                expect(dataB[0].supportDimensions[1]).assertEqual(2);
                expect(dataB[0].metaData.customizeData[0].name).assertEqual("originWidgetName");
                expect(dataB[0].metaData.customizeData[0].value).assertEqual("myTest");

                expect(dataC[0].name).assertEqual("FormC_Js001");
                expect(dataC[0].description).assertEqual("form_description");
                expect(dataC[0].type).assertEqual(1);
                expect(dataC[0].colorMode).assertEqual(-1);
                expect(dataC[0].jsComponentName).assertEqual("card");
                expect(dataC[0].isDefault).assertEqual(1);
                expect(dataC[0].updateEnabled).assertEqual(1);
                expect(dataC[0].updateDuration).assertEqual(1);
                expect(dataC[0].scheduledUpdateTime).assertEqual("10:30");
                expect(dataC[0].formVisibleNotify).assertEqual(1);
                expect(dataC[0].defaultDimension).assertEqual(1);
                expect(dataC[0].supportDimensions[0]).assertEqual(1);
                expect(dataC[0].supportDimensions[1]).assertEqual(2);
                expect(dataC[0].metaData.customizeData[0].name).assertEqual("originWidgetName");
                expect(dataC[0].metaData.customizeData[0].value).assertEqual("myTest");
                console.log("FMS_getFormsInfo_0500_callback result end");
                done();
            }
        );

        setTimeout(function () {
            console.info('=====================FMS_getFormsInfo_0500_callback==================end');
        }, TIMEOUT)
        console.log("FMS_getFormsInfo_0500_callback end, ret:"+ret);
    })

    /**
     * @tc.name getAllFormsInfo test
     * @tc.number FMS_getFormsInfo_0500
     * @tc.desc All form configuration information is queried successfully (by Promise)
     */
     it('FMS_getFormsInfo_0500_promise', 0, async function (done) {
        console.log("FMS_getFormsInfo_0500_promise begin");

        var promise = formManager.getAllFormsInfo();
        promise.then((data) => {
            console.log("FMS_getFormsInfo_0500_promise, the forms number:" + data.length);
            console.log("FMS_getFormsInfo_0500_promise async::sucess, data json:" + JSON.stringify(data));
            var dataB = data.filter((p) => {
                return p.bundleName == "com.form.formsystemtestserviceb";
            });
            var dataC = data.filter((p) => {
                return p.bundleName == "com.form.formsystemtestservicec";
            });
            console.log("FMS_getFormsInfo_0500_promise async::sucess, datab json:" + JSON.stringify(dataB));
            console.log("FMS_getFormsInfo_0500_promise async::sucess, datac json:" + JSON.stringify(dataC));
            
            expect(dataB[0].name).assertEqual("FormB_Js001");
            expect(dataB[0].description).assertEqual("form_description");
            expect(dataB[0].type).assertEqual(1);
            expect(dataB[0].colorMode).assertEqual(-1);
            expect(dataB[0].jsComponentName).assertEqual("card");
            expect(dataB[0].isDefault).assertEqual(1);
            expect(dataB[0].updateEnabled).assertEqual(1);
            expect(dataB[0].updateDuration).assertEqual(1);
            expect(dataB[0].scheduledUpdateTime).assertEqual("10:30");
            expect(dataB[0].formVisibleNotify).assertEqual(1);
            expect(dataB[0].defaultDimension).assertEqual(1);
            expect(dataB[0].supportDimensions[0]).assertEqual(1);
            expect(dataB[0].supportDimensions[1]).assertEqual(2);
            expect(dataB[0].metaData.customizeData[0].name).assertEqual("originWidgetName");
            expect(dataB[0].metaData.customizeData[0].value).assertEqual("myTest");

            expect(dataC[0].name).assertEqual("FormC_Js001");
            expect(dataC[0].description).assertEqual("form_description");
            expect(dataC[0].type).assertEqual(1);
            expect(dataC[0].colorMode).assertEqual(-1);
            expect(dataC[0].jsComponentName).assertEqual("card");
            expect(dataC[0].isDefault).assertEqual(1);
            expect(dataC[0].updateEnabled).assertEqual(1);
            expect(dataC[0].updateDuration).assertEqual(1);
            expect(dataC[0].scheduledUpdateTime).assertEqual("10:30");
            expect(dataC[0].formVisibleNotify).assertEqual(1);
            expect(dataC[0].defaultDimension).assertEqual(1);
            expect(dataC[0].supportDimensions[0]).assertEqual(1);
            expect(dataC[0].supportDimensions[1]).assertEqual(2);
            expect(dataC[0].metaData.customizeData[0].name).assertEqual("originWidgetName");
            expect(dataC[0].metaData.customizeData[0].value).assertEqual("myTest");
            console.log("FMS_getFormsInfo_0500_promise result end");
            done();
        });

        setTimeout(function () {
            console.info('=====================FMS_getFormsInfo_0500_promise==================end');
        }, TIMEOUT)
    })
}) 
