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

 // @ts-nocheck
import bundle9 from '@ohos.bundle' // error
import app from '@system.app'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import demo from '@ohos.bundle'
import account from '@ohos.account.osAccount'

const ERROR = "error.hap"
const NAME1 = "com.example.myapplication1"
const NAME2 = "com.example.myapplication2"
const NAME3 = "com.example.myapplication4"
const NAME4 = "com.example.myapplication5"
const NAME5 = "com.example.myapplication6"
const VERSIONCODE1 = 1
const OBJECT = "object"
const DIR1 = "/data/app/el1/bundle/public/com.example.myapplication1/com.example.myapplication1"
const DIR2 = "/data/app/el1/bundle/public/com.example.myapplication2/com.example.myapplication2"
const DIR3 = "/data/app/el1/bundle/public/com.example.myapplication2/com.example.myapplication1"
const DESCRIPTION = "$string:mainability_description"
const APPLICATION_DESCRIPTION = "$string:entry_description"
let userId = 0;
const ABILITY_NOT_EXIST_ERROR = 17700003;

export default function ActsBundleManagerTest() {
describe('ActsBundleManagerTest', function () {

    beforeAll(async function (done) {
        await account.getAccountManager().getOsAccountLocalIdFromProcess().then(account => {
            console.info("getOsAccountLocalIdFromProcess userid  ==========" + account);
            userId = account;
            done();
        }).catch(err => {
            console.info("getOsAccountLocalIdFromProcess err ==========" + JSON.stringify(err));
            done();
        })
    });

    /**
     * @tc.number queryAbilityByWant_0100
     * @tc.name testQueryAbilityByWantPromise
     * @tc.desc Test queryAbilityByWant interfaces with none hap. (by promise)
     */
    it('testQueryAbilityByWantPromise', 0, async function (done) {
        await bundle9.queryAbilityInfo(
            {
                "bundleName": "com.example.myapplication1",
                "abilityName": "com.example.myapplication1.MainAbility",
            }, bundle9.AbilityFlag.GET_ABILITY_INFO_WITH_APPLICATION |
            bundle9.AbilityFlag.GET_ABILITY_INFO_WITH_PERMISSION,
            userId).then(data => {
                expect(data.length).assertLarger(0);
                for (let i = 0, len = data.length; i < len; i++) {
                    let datainfo = data[i];
                    console.info("testQueryAbilityByWantPromise success:" + JSON.stringify(datainfo));
                    expect(datainfo.name).assertEqual("com.example.myapplication1.MainAbility");
                    expect(datainfo.label).assertEqual("$string:app_name");
                    expect(datainfo.description).assertEqual(DESCRIPTION);
                    expect(datainfo.icon).assertEqual("$media:icon");
                    expect(datainfo.moduleName).assertEqual("entry");
                    expect(datainfo.bundleName).assertEqual(NAME1);
                    expect(datainfo.type).assertEqual(bundle9.AbilityType.PAGE);
                    expect(datainfo.orientation).assertEqual(bundle9.DisplayOrientation.UNSPECIFIED);
                    expect(datainfo.launchType).assertEqual(bundle9.LaunchType.STANDARD);
                    expect(datainfo.permissions[0]).assertEqual("com.permission.BMS_PERMISSION_CAMERA");
                    expect(datainfo.applicationInfo.name).assertEqual(NAME1);
                    expect(datainfo.applicationInfo.description).assertEqual(APPLICATION_DESCRIPTION);
                    expect(datainfo.applicationInfo.descriptionId >= 0).assertTrue();
                    expect(datainfo.applicationInfo.icon).assertEqual("$media:icon");
                    expect(datainfo.applicationInfo.iconId >= 0).assertTrue();
                    expect(datainfo.applicationInfo.label).assertEqual("$string:app_name");
                    expect(datainfo.applicationInfo.labelId >= 0).assertTrue();
                    expect(datainfo.applicationInfo.enabled).assertEqual(true);
                    for (let j = 0; j < datainfo.applicationInfo.modulesInfo.length; j++) {
                        expect(datainfo.applicationInfo.modulesInfo[j].moduleName).assertEqual("entry");
                        expect(datainfo.applicationInfo.modulesInfo[j].moduleSourceDir).assertEqual(DIR1);
                    }
                }
                done();
            }).catch(err => {
                console.info("testQueryAbilityByWantPromise err" + JSON.stringify(err));
                expect(err).assertFail();
                done();
            })
    })

    /**
     * @tc.number queryAbilityByWant_0500
     * @tc.name testQueryAbilityByWantCallback
     * @tc.desc Test queryAbilityByWant interfaces with none hap. (by callback)
     */
    it('testQueryAbilityByWantCallback', 0, async function (done) {
        bundle9.queryAbilityInfo(
            {
                "bundleName": "com.example.myapplication1",
                "abilityName": "com.example.myapplication1.MainAbility",
            }, bundle9.AbilityFlag.GET_ABILITY_INFO_WITH_APPLICATION |
            bundle9.AbilityFlag.GET_ABILITY_INFO_WITH_PERMISSION,
            userId, (err, data) => {
                if (err) {
                    console.info("testQueryAbilityByWantCallback err" + JSON.stringify(err));
                    expect(err).assertFail();
                    done();
                    return;
                }
                expect(data.length).assertLarger(0);
                for (let i = 0, len = data.length; i < len; i++) {
                    let datainfo = data[i];
                    console.info("testQueryAbilityByWantCallback success:" + JSON.stringify(datainfo));
                    expect(datainfo.name).assertEqual("com.example.myapplication1.MainAbility");
                    expect(datainfo.label).assertEqual("$string:app_name");
                    expect(datainfo.description).assertEqual(DESCRIPTION);
                    expect(datainfo.icon).assertEqual("$media:icon");
                    expect(datainfo.moduleName).assertEqual("entry");
                    expect(datainfo.bundleName).assertEqual(NAME1);
                    expect(datainfo.type).assertEqual(bundle9.AbilityType.PAGE);
                    expect(datainfo.orientation).assertEqual(bundle9.DisplayOrientation.UNSPECIFIED);
                    expect(datainfo.launchType).assertEqual(bundle9.LaunchType.STANDARD);
                    expect(datainfo.permissions[0]).assertEqual("com.permission.BMS_PERMISSION_CAMERA");
                    expect(datainfo.applicationInfo.name).assertEqual(NAME1);
                    expect(datainfo.applicationInfo.description).assertEqual(APPLICATION_DESCRIPTION);
                    expect(datainfo.applicationInfo.descriptionId >= 0).assertTrue();
                    expect(datainfo.applicationInfo.icon).assertEqual("$media:icon");
                    expect(datainfo.applicationInfo.iconId >= 0).assertTrue();
                    expect(datainfo.applicationInfo.label).assertEqual("$string:app_name");
                    expect(datainfo.applicationInfo.labelId >= 0).assertTrue();
                    expect(datainfo.applicationInfo.enabled).assertEqual(true);
                    for (let j = 0; j < datainfo.applicationInfo.modulesInfo.length; j++) {
                        expect(datainfo.applicationInfo.modulesInfo[j].moduleName).assertEqual("entry");
                        expect(datainfo.applicationInfo.modulesInfo[j].moduleSourceDir).assertEqual(DIR1);
                    }
                }
                done();
            })
    })

    /**
     * @tc.number queryAbilityByWant_0200
     * @tc.name testQueryAbilityByWantTwoHapPromise
     * @tc.desc Test queryAbilityByWant interfaces with two haps. (by promise)
     */
    it('testQueryAbilityByWantTwoHapPromise', 0, async function (done) {
        let data = await bundle9.queryAbilityInfo(
            {
                "bundleName": "com.example.myapplication2",
                "abilityName": "com.example.myapplication1.MainAbility",
            }, bundle9.AbilityFlag.GET_ABILITY_INFO_WITH_APPLICATION, userId);
        expect(data.length).assertLarger(0);
        for (let i = 0, len = data.length; i < len; i++) {
            let datainfo = data[i];
            console.info("testQueryAbilityByWantTwoHapPromise success:" + JSON.stringify(datainfo));
            expect(datainfo.name.length).assertLarger(0);
            expect(datainfo.label).assertEqual("$string:app_name");
            expect(datainfo.description).assertEqual(DESCRIPTION);
            expect(datainfo.icon).assertEqual("$media:icon");
            expect(datainfo.moduleName).assertEqual("entry");
            expect(datainfo.bundleName).assertEqual(NAME2);
            expect(datainfo.orientation).assertEqual(bundle9.DisplayOrientation.LANDSCAPE);
            expect(datainfo.launchType).assertEqual(bundle9.LaunchType.SINGLETON);
            expect(datainfo.applicationInfo.name).assertEqual(NAME2);
            expect(datainfo.applicationInfo.description).assertEqual(APPLICATION_DESCRIPTION);
            expect(datainfo.applicationInfo.descriptionId >= 0).assertTrue();
            expect(datainfo.applicationInfo.icon).assertEqual("$media:icon");
            expect(datainfo.applicationInfo.iconId >= 0).assertTrue();
            expect(datainfo.applicationInfo.label).assertEqual("$string:app_name");
            expect(datainfo.applicationInfo.labelId >= 0).assertTrue();
            expect(datainfo.applicationInfo.enabled).assertEqual(true);
            expect(datainfo.applicationInfo.modulesInfo[0].moduleName).assertEqual("entry");
            expect(datainfo.applicationInfo.modulesInfo[0].moduleSourceDir).assertEqual(DIR3);
            expect(datainfo.applicationInfo.modulesInfo[1].moduleName).assertEqual("feature");
            expect(datainfo.applicationInfo.modulesInfo[1].moduleSourceDir).assertEqual(DIR2);
        }
        done();
    })

    /**
     * @tc.number queryAbilityByWant_0600
     * @tc.name testQueryAbilityByWantTwoHapCallback
     * @tc.desc Test queryAbilityByWant interfaces with two haps. (by callback)
     */
    it('testQueryAbilityByWantTwoHapCallback', 0, async function (done) {
        await bundle9.queryAbilityInfo(
            {
                "bundleName": "com.example.myapplication2",
                "abilityName": "com.example.myapplication1.MainAbility",
            }, bundle9.AbilityFlag.GET_ABILITY_INFO_WITH_APPLICATION, userId, (error, data) => {
                expect(data.length).assertLarger(0);
                for (let i = 0, len = data.length; i < len; i++) {
                    let datainfo = data[i];
                    console.info("testQueryAbilityByWantTwoHapCallback success:" + JSON.stringify(datainfo));
                    expect(datainfo.name.length).assertLarger(0);
                    expect(datainfo.label).assertEqual("$string:app_name");
                    expect(datainfo.description).assertEqual(DESCRIPTION);
                    expect(datainfo.icon).assertEqual("$media:icon");
                    expect(datainfo.moduleName).assertEqual("entry");
                    expect(datainfo.bundleName).assertEqual(NAME2);
                    expect(datainfo.orientation).assertEqual(1);
                    expect(datainfo.launchType).assertEqual(bundle9.LaunchType.SINGLETON);
                    expect(datainfo.applicationInfo.name).assertEqual(NAME2);
                    expect(datainfo.applicationInfo.description).assertEqual(APPLICATION_DESCRIPTION);
                    expect(datainfo.applicationInfo.descriptionId >= 0).assertTrue();
                    expect(datainfo.applicationInfo.icon).assertEqual("$media:icon");
                    expect(datainfo.applicationInfo.iconId >= 0).assertTrue();
                    expect(datainfo.applicationInfo.label).assertEqual("$string:app_name");
                    expect(datainfo.applicationInfo.labelId >= 0).assertTrue();
                    expect(datainfo.applicationInfo.enabled).assertEqual(true);
                    expect(datainfo.applicationInfo.modulesInfo[0].moduleName).assertEqual("entry");
                    expect(datainfo.applicationInfo.modulesInfo[0].moduleSourceDir).assertEqual(DIR3);
                    expect(datainfo.applicationInfo.modulesInfo[1].moduleName).assertEqual("feature");
                    expect(datainfo.applicationInfo.modulesInfo[1].moduleSourceDir).assertEqual(DIR2);
                }
                done();
            })
    })

    /**
     * @tc.number queryAbilityByWant_0300
     * @tc.name testQueryAbilityByWantThereHapPromise
     * @tc.desc Test queryAbilityByWant interfaces with three haps. (by promise)
     */
    it('testQueryAbilityByWantThereHapPromise', 0, async function (done) {
        await bundle9.queryAbilityInfo({
            entities: ['entity.system.home', 'entitiesentities']
        }, bundle9.AbilityFlag.GET_ABILITY_INFO_WITH_APPLICATION, userId).then(data => {
            checkAbilityInfo0500(data)
            done();
        }).catch(err => {
            console.info("testQueryAbilityByWantThereHapPromise err" + JSON.stringify(err));
            expect(err).assertFail();
            done();
        })
    })

    function checkAbilityInfo0500(data) {
        let queryResultCount = 0;
        for (let i = 0, len = data.length; i < len; i++) {
            let datainfo = data[i];
            console.info("testQueryAbilityByWantThereHapPromise success:" + JSON.stringify(datainfo));
            if (datainfo.bundleName == NAME3) {
                expect(datainfo.name).assertEqual("com.example.myapplication.MainAbility");
                expect(datainfo.label).assertEqual("$string:app_name");
                expect(datainfo.description).assertEqual(DESCRIPTION);
                expect(datainfo.icon).assertEqual("$media:icon");
                expect(datainfo.moduleName).assertEqual("entry");
                expect(datainfo.bundleName).assertEqual(NAME3);
                expect(datainfo.type).assertEqual(bundle9.AbilityType.PAGE);
                expect(datainfo.applicationInfo.name).assertEqual(NAME3);
                expect(datainfo.applicationInfo.description).assertEqual(APPLICATION_DESCRIPTION);
                expect(datainfo.applicationInfo.descriptionId >= 0).assertTrue();
                expect(datainfo.applicationInfo.icon).assertEqual("$media:icon");
                expect(datainfo.applicationInfo.iconId >= 0).assertTrue();
                expect(datainfo.applicationInfo.label).assertEqual("$string:app_name");
                expect(datainfo.applicationInfo.labelId >= 0).assertTrue();
                expect(datainfo.orientation).assertEqual(bundle9.DisplayOrientation.PORTRAIT);
                expect(datainfo.orientation).assertEqual(2);
                expect(datainfo.applicationInfo.enabled).assertEqual(true);
                for (let j = 0; j < datainfo.applicationInfo.modulesInfo.length; j++) {
                    expect(datainfo.applicationInfo.modulesInfo[j].moduleName).assertEqual("entry");
                }
                queryResultCount++;
            }
            if (datainfo.bundleName == NAME4) {
                expect(datainfo.name).assertEqual("com.example.myapplication.MainAbility");
                expect(datainfo.type).assertEqual(bundle9.AbilityType.DATA);
                expect(datainfo.orientation).assertEqual(bundle9.DisplayOrientation.UNSPECIFIED);
                expect(datainfo.bundleName).assertEqual(NAME4);
                queryResultCount++;
            }
            if (datainfo.bundleName == NAME5) {
                expect(datainfo.name).assertEqual("com.example.myapplication.MainAbility");
                expect(datainfo.type).assertEqual(bundle9.AbilityType.PAGE);
                expect(datainfo.bundleName).assertEqual(NAME5);
                expect(datainfo.orientation).assertEqual(bundle9.DisplayOrientation.FOLLOW_RECENT);
                queryResultCount++;
            }
        }
        expect(queryResultCount).assertEqual(3);
    }

    /**
    * @tc.number queryAbilityByWant_0700
    * @tc.name testQueryAbilityByWantThereHapCallback
    * @tc.desc Test queryAbilityByWant interfaces with three haps. (by callback)
    */
    it('testQueryAbilityByWantThereHapCallback', 0, async function (done) {
        await bundle9.queryAbilityInfo(
            {
                entities: ['entity.system.home', 'entitiesentities']
            }, bundle9.AbilityFlag.GET_ABILITY_INFO_WITH_APPLICATION, userId, (err, data) => {
                if (err) {
                    console.info("testQueryAbilityByWantThereHapCallback err" + JSON.stringify(err));
                    expect(err).assertFail();
                    done();
                    return;
                }
                checkAbilityInfo0600(data);
                done();
            })
    })

    function checkAbilityInfo0600(data) {
        let queryResultCount = 0;
        for (let i = 0, len = data.length; i < len; i++) {
            let datainfo = data[i];
            console.info("testQueryAbilityByWantThereHapCallback success:" + JSON.stringify(datainfo));
            if (datainfo.bundleName == NAME3) {
                expect(datainfo.name).assertEqual("com.example.myapplication.MainAbility");
                expect(datainfo.label).assertEqual("$string:app_name");
                expect(datainfo.description).assertEqual(DESCRIPTION);
                expect(datainfo.icon).assertEqual("$media:icon");
                expect(datainfo.moduleName).assertEqual("entry");
                expect(datainfo.bundleName).assertEqual(NAME3);
                expect(datainfo.applicationInfo.name).assertEqual(NAME3);
                expect(datainfo.applicationInfo.description).assertEqual(APPLICATION_DESCRIPTION);
                expect(datainfo.applicationInfo.descriptionId >= 0).assertTrue();
                expect(datainfo.applicationInfo.icon).assertEqual("$media:icon");
                expect(datainfo.applicationInfo.iconId >= 0).assertTrue();
                expect(datainfo.applicationInfo.label).assertEqual("$string:app_name");
                expect(datainfo.applicationInfo.labelId >= 0).assertTrue();
                expect(datainfo.orientation).assertEqual(2);
                expect(datainfo.applicationInfo.enabled).assertEqual(true);
                for (let j = 0; j < datainfo.applicationInfo.modulesInfo.length; j++) {
                    expect(datainfo.applicationInfo.modulesInfo[j].moduleName).assertEqual("entry");
                }
                queryResultCount++;
            }
            if (datainfo.bundleName == NAME4) {
                expect(datainfo.name).assertEqual("com.example.myapplication.MainAbility");
                expect(datainfo.bundleName).assertEqual(NAME4);
                expect(datainfo.orientation).assertEqual(bundle9.DisplayOrientation.UNSPECIFIED);
                queryResultCount++;
            }
            if (datainfo.bundleName == NAME5) {
                expect(datainfo.name).assertEqual("com.example.myapplication.MainAbility");
                expect(datainfo.bundleName).assertEqual(NAME5);
                expect(datainfo.orientation).assertEqual(bundle9.DisplayOrientation.FOLLOW_RECENT);
                queryResultCount++;
            }
        }
        expect(queryResultCount).assertEqual(3);
    }

    /**
     * @tc.number queryAbilityByWant_0800
     * @tc.name testQueryAbilityByWantNotExistHapPromise
     * @tc.desc Test queryAbilityByWant interfaces with one hap. (by promise)
     */
    it('testQueryAbilityByWantNotExistHapPromise', 0, async function (done) {
        await bundle9.queryAbilityInfo(
            {
                "bundleName": "wrong name",
                "abilityName": "com.example.myapplication1.MainAbility"
            }, bundle9.AbilityFlag.GET_ABILITY_INFO_DEFAULT, userId).then(datainfo => {
                console.info("testQueryAbilityByWantNotExistHapPromise dataInfo : ===========" + datainfo);
                expect(datainfo).assertFail();
                done();
            }).catch(err => {
                console.info("testQueryAbilityByWantNotExistHapPromise err : ===========" + err);
                expect(err.code).assertEqual(ABILITY_NOT_EXIST_ERROR)
                done();
            })
    })

    /**
     * @tc.number queryAbilityByWant_0900
     * @tc.name testQueryAbilityByWantNotExistHapCallback
     * @tc.desc Test queryAbilityByWant interfaces with one hap. (by callback)
     */
    it('testQueryAbilityByWantNotExistHapCallback', 0, async function (done) {
        await bundle9.queryAbilityInfo(
            {
                "bundleName": "wrong name",
                "abilityName": "com.example.myapplication1.MainAbility"
            }, 0, userId, (err, datainfo) => {
                if (err) {
                    console.info("testQueryAbilityByWantNotExistHapCallback err : ===========" + err);
                    expect(err.code).assertEqual(ABILITY_NOT_EXIST_ERROR)
                    done();
                    return;
                }
                console.info("testQueryAbilityByWantNotExistHapCallback dataInfo : ===========" + datainfo);
                expect(datainfo).assertFail();
                done();
            })
    })

    /**
    * @tc.number queryAbilityByWant_0400
    * @tc.name testQueryAbilityByWantSystemHapPromise
    * @tc.desc Test queryAbilityByWant interfaces with system hap. (by promise)
    */
    it('testQueryAbilityByWantSystemHapPromise', 0, async function (done) {
        await bundle9.queryAbilityInfo(
            {
                bundleName: "wrong name",
                abilityName: "wrong name",
            }, 0, userId).then(datainfo => {
                console.info("testQueryAbilityByWantSystemHapPromise dataInfo : ===========" + datainfo);
                expect(datainfo.length).assertLarger(0);
                done();
            }).catch(err => {
                console.info("testQueryAbilityByWantSystemHapPromise err : ===========" + err);
                expect(err.code).assertEqual(ABILITY_NOT_EXIST_ERROR)
                done();
            })
    })

    /**
     * @tc.number queryAbilityByWant_1100
     * @tc.name testQueryAbilityByWantSystemHapCallback
     * @tc.desc Test queryAbilityByWant interfaces with system hap. (by callback)
     */
    it('testQueryAbilityByWantSystemHapCallback', 0, async function (done) {
        bundle9.queryAbilityInfo(                                  
            {
                bundleName: "wrong name",
                abilityName: "wrong name",
            }, 0, userId, OnReceiveEvent);

        function OnReceiveEvent(err, datainfo) {
            console.info("testQueryAbilityByWantSystemHapCallback err : ===========" + err);
            console.info("testQueryAbilityByWantSystemHapCallback dataInfo : ===========" + datainfo);
            expect(err.code).assertEqual(ABILITY_NOT_EXIST_ERROR)
            expect(datainfo).assertEqual(null);
            done();
        }
    })

    /**
    * @tc.number installErrCodeTest_0100
    * @tc.name InstallErrorCode::STATUS_FAILED_NO_SPACE_LEFT
    * @tc.desc Test install errcode STATUS_FAILED_NO_SPACE_LEFT.
    */
    it('installErrCodeTest_0100', 0, async function (done) {
        expect(demo.InstallErrorCode.SUCCESS).assertEqual(0);
        expect(demo.InstallErrorCode.STATUS_INSTALL_FAILURE).assertEqual(1);
        expect(demo.InstallErrorCode.STATUS_INSTALL_FAILURE_ABORTED).assertEqual(2);
        expect(demo.InstallErrorCode.STATUS_INSTALL_FAILURE_INVALID).assertEqual(3);
        expect(demo.InstallErrorCode.STATUS_INSTALL_FAILURE_CONFLICT).assertEqual(4);
        expect(demo.InstallErrorCode.STATUS_INSTALL_FAILURE_STORAGE).assertEqual(5);
        expect(demo.InstallErrorCode.STATUS_INSTALL_FAILURE_INCOMPATIBLE).assertEqual(6);
        expect(demo.InstallErrorCode.STATUS_UNINSTALL_FAILURE).assertEqual(7);
        expect(demo.InstallErrorCode.STATUS_UNINSTALL_FAILURE_BLOCKED).assertEqual(8);
        expect(demo.InstallErrorCode.STATUS_UNINSTALL_FAILURE_ABORTED).assertEqual(9);
        expect(demo.InstallErrorCode.STATUS_UNINSTALL_FAILURE_CONFLICT).assertEqual(10);
        expect(demo.InstallErrorCode.STATUS_INSTALL_FAILURE_DOWNLOAD_TIMEOUT).assertEqual(11);
        expect(demo.InstallErrorCode.STATUS_INSTALL_FAILURE_DOWNLOAD_FAILED).assertEqual(12);
        expect(demo.InstallErrorCode.STATUS_RECOVER_FAILURE_INVALID).assertEqual(13);
        expect(demo.InstallErrorCode.STATUS_ABILITY_NOT_FOUND).assertEqual(64);
        expect(demo.InstallErrorCode.STATUS_BMS_SERVICE_ERROR).assertEqual(65);
        expect(demo.InstallErrorCode.STATUS_FAILED_NO_SPACE_LEFT).assertEqual(66);
        expect(demo.InstallErrorCode.STATUS_GRANT_REQUEST_PERMISSIONS_FAILED).assertEqual(67);
        expect(demo.InstallErrorCode.STATUS_INSTALL_PERMISSION_DENIED).assertEqual(68);
        expect(demo.InstallErrorCode.STATUS_UNINSTALL_PERMISSION_DENIED).assertEqual(69);
        done();
    })

    /**
    * @tc.number AbilityTypeTest_0100
    * @tc.name InstallErrorCode::STATUS_FAILED_NO_SPACE_LEFT
    * @tc.desc Test install errcode STATUS_FAILED_NO_SPACE_LEFT.
    */
    it('AbilityTypeTest_0100', 0, async function (done) {
        expect(demo.AbilitySubType.CA).assertEqual(1);
        expect(bundle9.AbilityType.UNKNOWN).assertEqual(0);
        expect(demo.ExtensionAbilityType.WORK_SCHEDULER).assertEqual(1);
        expect(demo.ExtensionAbilityType.INPUT_METHOD).assertEqual(2);
        expect(demo.ExtensionAbilityType.ACCESSIBILITY).assertEqual(4);
        expect(demo.ExtensionAbilityType.DATA_SHARE).assertEqual(5);
        expect(demo.ExtensionAbilityType.FILE_SHARE).assertEqual(6);
        expect(demo.ExtensionAbilityType.STATIC_SUBSCRIBER).assertEqual(7);
        expect(demo.ExtensionAbilityType.WALLPAPER).assertEqual(8);
        expect(demo.ExtensionAbilityType.BACKUP).assertEqual(9);
        expect(demo.ColorMode.AUTO_MODE).assertEqual(-1);
        expect(demo.ColorMode.DARK_MODE).assertEqual(0);
        expect(demo.ColorMode.LIGHT_MODE).assertEqual(1);
        expect(demo.BundleFlag.GET_BUNDLE_WITH_HASH_VALUE).assertEqual(48);
        done();
    })
})

}
