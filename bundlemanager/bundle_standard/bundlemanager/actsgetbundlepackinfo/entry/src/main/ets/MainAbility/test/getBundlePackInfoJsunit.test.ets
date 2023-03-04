/**
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

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index.ets';
import Utils from './Utils';
import Bundle from '@ohos.bundle';

const BUNDLE_NAME = 'com.open.harmony.packagemag';
const BUNDLE_NAME_OTHER = 'com.example.myapplication.hmservice';
const BUNDLE_NAME_A = 'com.example.myapplicationA.hmserviceA';
const FLAG_OTHER = 0;

const ERROR_FLAG = -1;
const SLEEP_TIME_1000 = 1000;
const SLEEP_TIME_2000 = 2000;
const KEY = 'bundle_getBundlePackInfo_test_';

export default function getBundlePackInfoJsunit() {
    describe('appInfoTest', function () {
        beforeEach(async function (done) {
            console.info('getBundlePackInfo before each called');
            done()
        });

        afterEach(async function () {
            await Utils.sleep(SLEEP_TIME_1000);
            console.info('getBundlePackInfo after each called');
        });

        /**
         * @tc.number  bundle_getBundlePackInfo_test_001
         * @tc.name  getBundlePackInfo: Support package brief information query, get the brief information of the package.
         * @tc.desc  Function test
         */
        it(KEY + '001', 0, async function (done) {
            let details;
            let wrong;
            let GET_PACK_INFO_ALL = 0x00000000;
            console.info(KEY + ' 001 promise START');
            Bundle.getBundlePackInfo(BUNDLE_NAME, GET_PACK_INFO_ALL).then((data) => {
                details = data;
                console.info(KEY + ' 001 promise data is: ' + JSON.stringify(data));
            }).catch((error) => {
                wrong = error;
                console.info(KEY + ' 001 promise error is: ' + JSON.stringify(error));
            });
            await Utils.sleep(SLEEP_TIME_1000);
            expectSuccessStatus_0000(KEY + '001', details);
            console.log("------------end bundle_getBundlePackInfo_test_001-------------");
            done();
        });

        /**
         * @tc.number  bundle_getBundlePackInfo_test_002
         * @tc.name  getBundlePackInfo: Support package brief information query, get the brief information of the package.
         * @tc.desc  Function test
         */
        it(KEY + '002', 0, async function (done) {
            let details;
            let wrong;
            let GET_PACK_INFO_ALL = 0x00000000;
            console.info(KEY + ' 002 callBack START');
            Bundle.getBundlePackInfo(BUNDLE_NAME, GET_PACK_INFO_ALL, (error, data) => {
                if (error) {
                    wrong = error;
                    console.info(KEY + ' 002 callBack error: ' + JSON.stringify(error));
                } else {
                    details = data;
                    console.info(KEY + ' 002 callBack data is:' + JSON.stringify(data));
                }
            });
            await Utils.sleep(SLEEP_TIME_1000);
            expectSuccessStatus_0000(KEY + '002', details);
            console.log("------------end bundle_getBundlePackInfo_test_002-------------");
            done();
        });

        /**
         * @tc.number  bundle_getBundlePackInfo_test_003
         * @tc.name  getBundlePackInfo: Support package brief information query, get the brief information of the package.
         * @tc.desc  Function test
         */
        it(KEY + '003', 0, async function (done) {
            let details;
            let wrong;
            let GET_PACKAGES = 0x00000001;
            console.info(KEY + ' 003 promise START');
            Bundle.getBundlePackInfo(BUNDLE_NAME, GET_PACKAGES).then((data) => {
                details = data;
                console.info(KEY + ' 003 promise data is: ' + JSON.stringify(details));
            }).catch((error) => {
                wrong = error;
                console.info(KEY + ' 003 promise error is: ' + wrong);
            });
            setTimeout(function () {
                expect(typeof (details)).assertEqual('object');
                expect(Array.isArray(details.packages)).assertEqual(true);
                for (var s = 0; s < details.packages.length; s++) {
                    let packs = details.packages[s];
                    expect(typeof (packs.name)).assertEqual('string');
                    expect(packs.name).assertEqual("entry-debug-standard-ark-unsigned");
                    expect(typeof (packs.moduleType)).assertEqual('string');
                    expect(packs.moduleType).assertEqual("entry");
                    expect(typeof (packs.deliveryWithInstall)).assertEqual('boolean');
                    expect(packs.deliveryWithInstall).assertEqual(true);
                    expect(Array.isArray(packs.deviceType)).assertEqual(true);
                    for (var i = 0; i < packs.deviceType.length; i++) {
                        expect(typeof (packs.deviceType[i])).assertEqual('string');
                        expect(packs.deviceType[0]).assertEqual("phone");
                    }
                }
                setTimeout(function () {
                    console.log("------------end bundle_getBundlePackInfo_test_003-------------");
                    done();
                }, 1000);
            }, 1500);
        });

        /**
         * @tc.number  bundle_getBundlePackInfo_test_004
         * @tc.name  getBundlePackInfo: Support package brief information query, get the brief information of the package.
         * @tc.desc  Function test
         */
        it(KEY + '004', 0, async function (done) {
            let details;
            let wrong;
            let GET_BUNDLE_SUMMARY = 0x00000002
            console.info(KEY + ' 004 promise START');
            Bundle.getBundlePackInfo(BUNDLE_NAME, GET_BUNDLE_SUMMARY).then((data) => {
                details = data;
                console.info(KEY + ' 004 promise data is: ' + JSON.stringify(details));
            }).catch((error) => {
                wrong = error;
                console.info(KEY + ' 004 promise error is: ' + wrong);
            });
            setTimeout(function () {
                let summary = details.summary;
                expect(typeof (summary)).assertEqual('object');
                expect(typeof (summary.app)).assertEqual('object');
                if (null !== summary.app) {
                    expect(typeof (summary.app.bundleName)).assertEqual('string');
                    expect(summary.app.bundleName).assertEqual("com.open.harmony.packagemag");
                    expect(typeof (summary.app.version)).assertEqual('object');
                    if (null !== summary.app.version) {
                        let version = summary.app.version;
                        expect(typeof (version.minCompatibleVersionCode)).assertEqual('number');
                        expect(version.minCompatibleVersionCode).assertEqual(0);
                        expect(typeof (version.name)).assertEqual('string');
                        expect(version.name).assertEqual("1.0.0");
                        expect(typeof (version.code)).assertEqual('number');
                        expect(version.code).assertEqual(1000000);
                    }
                }
                setTimeout(function () {
                    console.log("------------end bundle_getBundlePackInfo_test_004-------------");
                    done();
                }, 1000);
            }, 1500);
        });

        /**
         * @tc.number  bundle_getBundlePackInfo_test_005
         * @tc.name  getBundlePackInfo: Support package brief information query, get the brief information of the package.
         * @tc.desc  Function test
         */
        it(KEY + '005', 0, async function (done) {
            let details;
            let wrong;
            let GET_MODULE_SUMMARY = 0x00000004;
            console.info(KEY + ' 005 promise START');
            Bundle.getBundlePackInfo(BUNDLE_NAME, GET_MODULE_SUMMARY).then((data) => {
                details = data;
                console.info(KEY + ' 005 promise data is: ' + JSON.stringify(data));
            }).catch((error) => {
                wrong = error;
                console.info(KEY + ' 005 promise error is: ' + error);
            });
            await Utils.sleep(SLEEP_TIME_1000);
            getSummaryInfo_005(KEY + '005', details);
            done();
        });

        /**
         * @tc.number  bundle_getBundlePackInfo_test_006
         * @tc.name  getBundlePackInfo: Support package brief information query, get the brief information of the package.
         * @tc.desc  Function test
         */
        it(KEY + '006', 0, async function (done) {
            let details;
            let wrong;
            let GET_PACK_INFO_ALL =  0x00000000;
            console.info(KEY + ' 006 callBack START');
            Bundle.getBundlePackInfo('', GET_PACK_INFO_ALL, (error, data) => {
                if (error) {
                    wrong = error;
                    console.info(KEY + ' 006 callBack error: ' + JSON.stringify(error));
                } else {
                    details = data;
                    console.info(KEY + ' 006 callBack data is:' + JSON.stringify(data));
                    expect(details).assertFail();
                }
            });
            await Utils.sleep(1000);
            expect(wrong).assertEqual(1);
            done();
        });

        /**
         * @tc.number  bundle_getBundlePackInfo_test_007
         * @tc.name  getBundlePackInfo: Support package brief information query, get the brief information of the package.
         * @tc.desc  Function test
         */
        it(KEY + '007', 0, async function (done) {
            let details;
            let wrong;
            console.info(KEY + ' 007 callBack START');
            Bundle.getBundlePackInfo(BUNDLE_NAME, '', (error, data) => {
                if (error) {
                    wrong =error;
                    console.info(KEY + ' 007 callBack error: ' + error);
                } else {
                    details = data;
                    console.info(KEY + ' 007 callBack data is:' + JSON.stringify(data));
                    expect(details).assertFail();
                }
            });
            await Utils.sleep(1000);
            expect(wrong).assertEqual(1);
            done();
        });

        /**
         * @tc.number  bundle_getBundlePackInfo_test_008
         * @tc.name  getBundlePackInfo: Support package brief information query, get the brief information of the package.
         * @tc.desc  Function test
         */
        it(KEY + '008', 0, async function (done) {
            let details;
            let wrong;
            console.info(KEY + ' 008 callBack START');
            Bundle.getBundlePackInfo('', '', (error, data) => {
                if (error) {
                    wrong = error;
                    console.info(KEY + ' 008 callBack error: ' + JSON.stringify(error));
                } else {
                    details = data;
                    console.info(KEY + ' 008 callBack data is:' + JSON.stringify(data));
                    expect(details).assertFail();
                }
            });
            await Utils.sleep(1000);
            expect(wrong).assertEqual(1);
            done();
        });

        /**
         * @tc.number  bundle_getBundlePackInfo_test_009
         * @tc.name  getBundlePackInfo: Support package brief information query, get the brief information of the package.
         * @tc.desc  Function test
         */
        it(KEY + '009', 0, async function (done) {
            let details;
            let wrong;
            let GET_PACK_INFO_ALL =  0x00000000;
            console.info(KEY + ' 009 callBack START');
            Bundle.getBundlePackInfo(BUNDLE_NAME + 'aa', GET_PACK_INFO_ALL, (error, data) => {
                if (error) {
                    wrong = error;
                    console.info(KEY + ' 009 callBack error: ' + error);
                } else {
                    details = data;
                    console.info(KEY + ' 009 callBack data is:' + JSON.stringify(data));
                    expect(details).assertFail();
                }
            });
            await Utils.sleep(1000);
            expect(wrong).assertEqual(1);
            done();
        });



        /**
         * @tc.number  bundle_getBundlePackInfo_test_010
         * @tc.name  getBundlePackInfo: Support package brief information query, get the brief information of the package.
         * @tc.desc  Function test
         */
        it(KEY + '010', 0, async function (done) {
            let details;
            let wrong;
            console.info(KEY + '010 callBack START');
            Bundle.getBundlePackInfo(BUNDLE_NAME, ERROR_FLAG, (error, data) => {
                if (error) {
                    wrong = error;
                    console.info(KEY + ' 010 callBack error: ' + JSON.stringify(error));
                } else {
                    details = data;
                    console.info(KEY + ' 010 callBack data is:' + JSON.stringify(data));
                    expect(details).assertFail();
                }
            });
            await Utils.sleep(1000);
            expect(wrong).assertEqual(2);
            done();
        });

        /**
         * @tc.number  bundle_getBundlePackInfo_test_011
         * @tc.name  getBundlePackInfo: Support package brief information query, get the brief information of the package.
         * @tc.desc  Function test
         */
        it(KEY + '011', 0, async function (done) {
            let details;
            let wrong;
            let BUNDLE_NAME_NUMBER = 1;
            let GET_PACK_INFO_ALL =  0x00000000;
            console.info(KEY + ' 011 callBack START');
            Bundle.getBundlePackInfo(BUNDLE_NAME_NUMBER, GET_PACK_INFO_ALL, (error, data) => {
                if (error) {
                    wrong = error;
                    console.info(KEY + ' 011 callBack error: ' + JSON.stringify(error));
                } else {
                    details = data;
                    console.info(KEY + ' 011 callBack data is:' + JSON.stringify(data));
                    expect(details).assertFail();
                }
            });
            await Utils.sleep(1000);
            expect(wrong).assertEqual(1);
            done();
        });

        /**
         * @tc.number  bundle_getBundlePackInfo_test_012
         * @tc.name  getBundlePackInfo: Support package brief information query, get the brief information of the package.
         * @tc.desc  Function test
         */
        it(KEY + '012', 0, async function (done) {
            let details;
            let wrong;
            let FLAG = 6;
            console.info(KEY + ' 012 callBack START');
            Bundle.getBundlePackInfo(BUNDLE_NAME, FLAG, (error, data) => {
                if (error) {
                    wrong = error;
                    console.info(KEY + ' 012 callBack error: ' + JSON.stringify(error));
                } else {
                    details = data;
                    console.info(KEY + ' 012 callBack data is:' + JSON.stringify(data));
                    expect(details).assertFail();
                }
            });
            await Utils.sleep(1000);
            expect(wrong).assertEqual(2);
            done();
        });

        /**
         * @tc.number  bundle_getBundlePackInfo_test_013
         * @tc.name  getBundlePackInfo: Support package brief information query, get the brief information of the package.
         * @tc.desc  Function test
         */
        it(KEY + '013', 0, async function (done) {
            let details;
            let wrong;
            console.info(KEY + '013 promise START');
            Bundle.getBundlePackInfo(BUNDLE_NAME_OTHER, FLAG_OTHER).then((data) => {
                details = data;
                console.info(KEY + ' 013 promise data: ' + JSON.stringify(data));
                expect(details).assertFail();
            }).catch((error) => {
                wrong = error;
                console.info(KEY + ' 013 promise error: ' + JSON.stringify(error));
            });
            await Utils.sleep(1000);
            expect(wrong).assertEqual(1);
            done();
        });

        function expectSuccessStatus_0000(msg, details) {
            console.info("---getBundlePackInfo start  ------");
            console.info(msg + " ---getBundlePackInfo start details : " + JSON.stringify(details));
            expect(typeof (details)).assertEqual('object');
            expect(Array.isArray(details.packages)).assertEqual(true);
            for (var s = 0; s < details.packages.length; s++) {
                let packs = details.packages[s];
                expect(typeof (packs.name)).assertEqual('string');
                expect(packs.name).assertEqual("entry-debug-standard-ark-unsigned");
                expect(typeof (packs.moduleType)).assertEqual('string');
                expect(packs.moduleType).assertEqual("entry");
                expect(typeof (packs.deliveryWithInstall)).assertEqual('boolean');
                expect(packs.deliveryWithInstall).assertEqual(true);
                expect(Array.isArray(packs.deviceType)).assertEqual(true);
                for (var i = 0; i < packs.deviceType.length; i++) {
                    expect(typeof (packs.deviceType[i])).assertEqual('string');
                    expect(packs.deviceType[0]).assertEqual("phone");
                }
            }
            expect(typeof (details.summary)).assertEqual('object');
            console.info(msg + " ---getBundlePackInfo start details.summary : " + JSON.stringify(details.summary));
            if (null !== details.summary) {
                getSummaryInfo_0000(msg, details);
            }
        };

        function getSummaryInfo_0000(msg, details) {
            console.info("---getBundlePackInfo getSummaryInfo start  ------");
            console.info(msg + " ---getBundlePackInfo getSummaryInfo details : " + JSON.stringify(details));
            let summary = details.summary;
            expect(typeof (summary.app)).assertEqual('object');
            if (null !== summary.app) {
                expect(typeof (summary.app.bundleName)).assertEqual('string');
                expect(summary.app.bundleName).assertEqual("com.open.harmony.packagemag");
                expect(typeof (summary.app.version)).assertEqual('object');
                if (null !== summary.app.version) {
                    let version = summary.app.version;
                    expect(typeof (version.minCompatibleVersionCode)).assertEqual('number');
                    expect(version.minCompatibleVersionCode).assertEqual(0);
                    expect(typeof (version.name)).assertEqual('string');
                    expect(version.name).assertEqual("1.0.0");
                    expect(typeof (version.code)).assertEqual('number');
                    expect(version.code).assertEqual(1000000);
                }
            }
            expect(Array.isArray(summary.modules)).assertEqual(true);
            console.info(msg + " ---getBundlePackInfo getSummaryInfo summary.modules : " + JSON.stringify(summary.modules));
            if (null !== summary.modules) {
                getModulesInfo_0000(msg, summary.modules);
            }
        };

        function getModulesInfo_0000(msg, modules) {
            console.info("---getBundlePackInfo getModulesInfo start  ------");
            console.info(msg + " ---getBundlePackInfo getModulesInfo modules : " + JSON.stringify(modules));
            expect(Array.isArray(modules)).assertEqual(true);
            for (var j = 0; j < modules.length; j++) {
                if (msg === "bundle_getBundlePackInfo_test_005") {
                    console.info(msg + " ---getBundlePackInfo getModulesInfo modules.mainAbility : " + JSON.stringify(modules[j].mainAbility));
                    if (modules[j].mainAbility === "com.open.harmony.packagemag.MainAbility") {
                        expect(typeof (modules[j].mainAbility)).assertEqual('string');
                        expect(modules[j].mainAbility).assertEqual("com.open.harmony.packagemag.MainAbility");
                    } else if (modules[j].mainAbility === ".MainAbility") {
                        expect(typeof (modules[j].mainAbility)).assertEqual('string');
                        expect(modules[j].mainAbility).assertEqual(".MainAbility");
                    }
                }

                if (modules[j].mainAbility === "com.open.harmony.packagemag.MainAbility") {
                    let apiVersion = modules[j].apiVersion;
                    if (null !== apiVersion) {
                        expect(typeof (apiVersion)).assertEqual('object');
                        expect(typeof (apiVersion.releaseType)).assertEqual('string');
                        expect(apiVersion.releaseType).assertEqual("Beta1");
                        expect(typeof (apiVersion.compatible)).assertEqual('number');
                        expect(apiVersion.compatible).assertEqual(7);
                        expect(typeof (apiVersion.target)).assertEqual('number');
                        expect(apiVersion.target).assertEqual(8);
                    }
                    expect(Array.isArray(modules[j].deviceType)).assertEqual(true);
                    expect(modules[j].deviceType[0]).assertEqual("phone");
                    let distro = modules[j].distro;
                    if (null !== distro) {
                        expect(typeof (distro)).assertEqual('object');
                        expect(typeof (distro.deliveryWithInstall)).assertEqual('boolean');
                        expect(distro.deliveryWithInstall).assertEqual(true);
                        expect(typeof (distro.installationFree)).assertEqual('boolean');
                        expect(distro.installationFree).assertEqual(false);
                        expect(typeof (distro.moduleName)).assertEqual('string');
                        expect(distro.moduleName).assertEqual("entry");
                        expect(typeof (distro.moduleType)).assertEqual('string');
                        expect(distro.moduleType).assertEqual("entry");
                    }
                    expect(Array.isArray(modules[j].abilities)).assertEqual(true);
                    console.info(msg + " ---getBundlePackInfo getModulesInfo modules[j].abilities: " + JSON.stringify(modules[j].abilities));
                    if (modules[j].abilities != null) {
                        getAbilitiesInfo_0000(msg, modules[j].abilities);
                    }
                };

                if (modules[j].mainAbility === ".MainAbility") {
                    let apiVersion = modules[j].apiVersion;
                    if (null !== apiVersion) {
                        expect(typeof (apiVersion)).assertEqual('object');
                        expect(typeof (apiVersion.releaseType)).assertEqual('string');
                        expect(apiVersion.releaseType).assertEqual("Beta1");
                        expect(typeof (apiVersion.compatible)).assertEqual('number');
                        expect(apiVersion.compatible).assertEqual(7);
                        expect(typeof (apiVersion.target)).assertEqual('number');
                        expect(apiVersion.target).assertEqual(8);
                    }
                    expect(Array.isArray(modules[j].deviceType)).assertEqual(true);
                    expect(modules[j].deviceType[0]).assertEqual("phone");
                    let distro = modules[j].distro;
                    if (null !== distro) {
                        expect(typeof (distro)).assertEqual('object');
                        expect(typeof (distro.deliveryWithInstall)).assertEqual('boolean');
                        expect(distro.deliveryWithInstall).assertEqual(true);
                        expect(typeof (distro.installationFree)).assertEqual('boolean');
                        expect(distro.installationFree).assertEqual(false);
                        expect(typeof (distro.moduleName)).assertEqual('string');
                        expect(distro.moduleName).assertEqual("myapplication2");
                        expect(typeof (distro.moduleType)).assertEqual('string');
                        expect(distro.moduleType).assertEqual("feature");
                    }
                    expect(Array.isArray(modules[j].abilities)).assertEqual(true);
                    console.info(msg + " ---getBundlePackInfo getModulesInfo modules[j].abilities: " + JSON.stringify(modules[j].abilities));
                    if (modules[j].abilities != null) {
                        getAbilitiesInfo_feature(msg, modules[j].abilities);
                    }
                };
            }
        };

        function getAbilitiesInfo_0000(msg, data) {
            console.info("---getBundlePackInfo getAbilitiesInfo start  ------");
            console.info(msg + " ---getBundlePackInfo getAbilitiesInfo data : " + JSON.stringify(data));
            for (let l = 0; l < data.length; l++) {
                if (data[l].name === "com.open.harmony.packagemag.MainAbility") {
                    expect(typeof (data[l].name)).assertEqual('string');
                    expect(data[l].name).assertEqual("com.open.harmony.packagemag.MainAbility");
                    expect(typeof (data[l].label)).assertEqual('string');
                    expect(data[l].label).assertEqual("$string:entry_MainAbility");
                    expect(typeof (data[l].visible)).assertEqual('boolean');
                    expect(data[l].visible).assertEqual(true);
                } else if (data[l].name === "com.open.harmony.packagemag.ServiceAbility") {
                    expect(typeof (data[l].name)).assertEqual('string');
                    expect(data[l].name).assertEqual("com.open.harmony.packagemag.ServiceAbility");
                    expect(typeof (data[l].label)).assertEqual('string');
                    expect(data[l].label).assertEqual("");
                    expect(typeof (data[l].visible)).assertEqual('boolean');
                    expect(data[l].visible).assertEqual(false);
                } else if (data[l].name === "com.open.harmony.packagemag.MainAbility2") {
                    expect(typeof (data[l].name)).assertEqual('string');
                    expect(data[l].name).assertEqual("com.open.harmony.packagemag.MainAbility2");
                    expect(typeof (data[l].label)).assertEqual('string');
                    expect(data[l].label).assertEqual("$string:entry_MainAbility2");
                    expect(typeof (data[l].visible)).assertEqual('boolean');
                    expect(data[l].visible).assertEqual(false);
                }
                if (data[l].forms.length > 0) {
                    expect(Array.isArray(data[l].forms)).assertEqual(true);
                    for (let g = 0; g < data[l].forms.length; g++) {
                        let dataForm = data[l].forms[g];
                        expect(typeof (dataForm.name)).assertEqual('string');
                        expect(dataForm.name).assertEqual("Form_Js");
                        expect(typeof (dataForm.type)).assertEqual('string');
                        expect(dataForm.type).assertEqual("JS");
                        expect(typeof (dataForm.updateEnabled)).assertEqual('boolean');
                        expect(dataForm.updateEnabled).assertEqual(true);
                        expect(typeof (dataForm.scheduledUpdateTime)).assertEqual('string');
                        expect(dataForm.scheduledUpdateTime).assertEqual("10:30");
                        expect(typeof (dataForm.updateDuration)).assertEqual('number');
                        expect(dataForm.updateDuration).assertEqual(1);
                        expect(typeof (dataForm.defaultDimension)).assertEqual('string');
                        expect(dataForm.defaultDimension).assertEqual("2*2");
                        expect(Array.isArray(dataForm.supportDimensions)).assertEqual(true);
                        if(dataForm.supportDimensions.length > 0){
                            expect(dataForm.supportDimensions[0]).assertEqual("2*2");
                            expect(dataForm.supportDimensions[1]).assertEqual("2*4");
                            expect(dataForm.supportDimensions[2]).assertEqual("4*4");
                        }
                    }
                }
            }
        };

        function getAbilitiesInfo_feature(msg, data) {
            console.info("---getBundlePackInfo getAbilitiesInfo_feature start  ------");
            console.info(msg + " ---getBundlePackInfo getAbilitiesInfo_feature data : " + JSON.stringify(data));
            for (let l = 0; l < data.length; l++) {
                expect(typeof (data[l].name)).assertEqual('string');
                expect(data[l].name).assertEqual("com.example.myapplication2.MainAbility");
                expect(typeof (data[l].label)).assertEqual('string');
                expect(data[l].label).assertEqual("$string:myapplication2_MainAbility");
                expect(typeof (data[l].visible)).assertEqual('boolean');
                expect(data[l].visible).assertEqual(true);
                if (data[l].forms.length > 0) {
                    expect(Array.isArray(data[l].forms)).assertEqual(true);
                    for (let g = 0; g < data[l].forms.length; g++) {
                        let dataForm = data[l].forms[g];
                        expect(typeof (dataForm.name)).assertEqual('string');
                        expect(dataForm.name).assertEqual("Form_Js");
                        expect(typeof (dataForm.type)).assertEqual('string');
                        expect(dataForm.type).assertEqual("JS");
                        expect(typeof (dataForm.updateEnabled)).assertEqual('boolean');
                        expect(dataForm.updateEnabled).assertEqual(true);
                        expect(typeof (dataForm.scheduledUpdateTime)).assertEqual('string');
                        expect(dataForm.scheduledUpdateTime).assertEqual("10:30");
                        expect(typeof (dataForm.updateDuration)).assertEqual('number');
                        expect(dataForm.updateDuration).assertEqual(1);
                        expect(typeof (dataForm.defaultDimension)).assertEqual('string');
                        expect(dataForm.defaultDimension).assertEqual("2*2");
                        expect(Array.isArray(dataForm.supportDimensions)).assertEqual(true);
                        if(dataForm.supportDimensions.length > 0){
                            expect(dataForm.supportDimensions[0]).assertEqual("2*2");
                            expect(dataForm.supportDimensions[1]).assertEqual("2*4");
                            expect(dataForm.supportDimensions[2]).assertEqual("4*4");
                        }
                    }
                }
            }
        };

        function getSummaryInfo_005(msg, details) {
            console.info("---getBundlePackInfo getSummaryInfo_005 start  ------");
            console.info(msg + " ---getSummaryInfo_005 details : " + JSON.stringify(details));
            let summary = details.summary;
            expect(typeof (summary)).assertEqual('object');
            expect(Array.isArray(summary.modules)).assertEqual(true);
            console.info(msg + " ---getSummaryInfo_005 summary.modules : " + JSON.stringify(summary.modules));
            if (null !== summary.modules) {
                getModulesInfo_0000(msg, summary.modules);
            }
        };
    })
}