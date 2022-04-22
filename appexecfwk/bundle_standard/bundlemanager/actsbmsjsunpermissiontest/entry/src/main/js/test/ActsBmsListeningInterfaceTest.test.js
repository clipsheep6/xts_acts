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

import bundle from '@ohos.bundle'
import innerBundle from '@ohos.bundle.innerBundleManager'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit'

const BUNDLE_NAME1 = 'com.example.third1';
const REGISTER_FAILED = 1;
const UNREGISTER_FAILED = 1;
const USER_ID = 100;

describe('ActsBmsListeningInterfaceTest', function () {

    /*
    * @tc.number: BMS_Listening_Interface_On_0100
    * @tc.name: test the on ability
    * @tc.desc: 1.Turn on the listening function to listen for HAP package installation, update and uninstallation
    *           2.Install, uninstall, and update to check whether the package name exists
    */
    it('BMS_Listening_Interface_On_0100', 0, async function (done) {
        var status = 'normal'
        function Add(bundleName, userId) {
            console.log('BMS_Listening_Interface_On_0100 status: ' + status);
            expect(status).assertEqual('add');
            expect(bundleName).assertEqual(BUNDLE_NAME1);
            expect(userId).assertEqual(USER_ID);
        }
        function Update(bundleName, userId) {
            console.log('BMS_Listening_Interface_On_0100 status: ' + status);
            expect(status).assertEqual('update');
            expect(bundleName).assertEqual(BUNDLE_NAME1);
            expect(userId).assertEqual(USER_ID);
        }
        function Remove(bundleName, userId) {
            console.log('BMS_Listening_Interface_On_0100 status: ' + status);
            expect(status).assertEqual('remove');
            expect(bundleName).assertEqual(BUNDLE_NAME1);
            expect(userId).assertEqual(USER_ID);
        }
        var callback = {
            "add": Add,
            "update": Update,
            "remove": Remove
        }
        bundle.getBundleInstaller().then(installer => {
            function onReceiveinstallEvent(err, data) {
                status = 'add';
                console.log('BMS_Listening_Interface_On_0100 install called: ' + data)
                expect(err.code).assertEqual(0);
                expect(data.status).assertEqual(0);
                expect(data.statusMessage).assertEqual('SUCCESS');
                installer.install(['/data/test/bmsThirdBundleTest1.hap'],
                    {
                        userId: 100,
                        installFlag: 1,
                        isKeepData: false,
                    }, (err, data) => {
                        status = 'update';
                        expect(err.code).assertEqual(0);
                        expect(data.status).assertEqual(0);
                        expect(data.statusMessage).assertEqual('SUCCESS');
                        installer.uninstall(BUNDLE_NAME1,
                            {
                                userId: 100,
                                installFlag: 1,
                                isKeepData: false
                            }
                            , (err, data) => {
                                status = 'remove';
                                expect(err.code).assertEqual(0);
                                expect(data.status).assertEqual(0);
                                expect(data.statusMessage).assertEqual('SUCCESS');
                                done();
                            });
                    });
            }
            innerBundle.on("BundleStatusChange", callback, (err, data) => {
                console.info('======BMS_Listening_Interface_On_0100.data3=====' + JSON.stringify(err));
                expect(err).assertEqual(REGISTER_FAILED);
                installer.install(['/data/test/bmsThirdBundleTest1.hap'],
                    {
                        userId: 100,
                        installFlag: 0,
                        isKeepData: false,
                    }, onReceiveinstallEvent);
            })
        })
    })

    /*
    * @tc.number: BMS_Listening_Interface_Off_0100
    * @tc.name: test the off ability
    * @tc.desc: 1.Turn on the listening function to listen for HAP package installation, update and uninstallation
    *           2.Install, uninstall, and update to check whether the package name exists
    */
    it('BMS_Listening_Interface_Off_0100', 0, async function (done) {
        innerBundle.off("BundleStatusChange", (err, data) => {
            console.info('======BMS_Listening_Interface_Off_0100.data3=====' + JSON.stringify(err));
            expect(err).assertEqual(UNREGISTER_FAILED);
            done();
        })
    })
})