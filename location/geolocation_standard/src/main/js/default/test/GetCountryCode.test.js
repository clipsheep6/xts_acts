/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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
import geolocation from '@ohos.geolocation';
import geolocations from '@system.geolocation';
import abilityAccessCtrl from '@ohos.abilityAccessCtrl'
import bundle from '@ohos.bundle'
import osaccount from '@ohos.account.osAccount'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
    console.info('[lbs_js]sleep function');
}

async function changedLocationMode(){
    await geolocation.isLocationEnabled().then(async(result) => {
        console.info('[lbs_js] getLocationSwitchState result: ' + JSON.stringify(result));
        if(!result){
            await geolocation.requestEnableLocation().then(async(result) => {
                await sleep(3000);
                console.info('[lbs_js] test requestEnableLocation promise result: ' + JSON.stringify(result));
            }).catch((error) => {
                console.info("[lbs_js] promise then error." + JSON.stringify(error));
                expect().assertFail();
            });
        }
    });
    await geolocation.isLocationEnabled().then(async(result) => {
        console.info('[lbs_js] check LocationSwitchState result: ' + JSON.stringify(result));
    });
}

async function applyPermission() {
    let osAccountManager = osaccount.getAccountManager();
    console.info("====>testgetuserid get AccountManager finish====");
    let localId = await osAccountManager.getOsAccountLocalIdFromProcess();
    console.info("====>testgetuserid localId obtained by process:" + localId);
    let appInfo = await bundle.getApplicationInfo('ohos.acts.location.geolocation.function', 0, localId);
    let atManager = abilityAccessCtrl.createAtManager();
    if (atManager != null) {
        let tokenID = appInfo.accessTokenId;
        console.info('[permission] case accessTokenID is ' + tokenID);
        let permissionName1 = 'ohos.permission.LOCATION';
        let permissionName2 = 'ohos.permission.LOCATION_IN_BACKGROUND';
        await atManager.grantUserGrantedPermission(tokenID, permissionName1, 1).then((result) => {
            console.info('[permission] case grantUserGrantedPermission success :' + result);
        }).catch((err) => {
            console.info('[permission] case grantUserGrantedPermission failed :' + err);
        });
        await atManager.grantUserGrantedPermission(tokenID, permissionName2, 1).then((result) => {
            console.info('[permission] case grantUserGrantedPermission success :' + result);
        }).catch((err) => {
            console.info('[permission] case grantUserGrantedPermission failed :' + err);
        });
    } else {
        console.info('[permission] case apply permission failed, createAtManager failed');
    }
}

let CountryCodeType = {
        COUNTRY_CODE_FROM_LOCALE : 1,
        COUNTRY_CODE_FROM_SIM:2,
        COUNTRY_CODE_FROM_LOCATION:3,
        COUNTRY_CODE_FROM_NETWORK:4,
    }

describe('geolocationTest_4', function () {
    beforeAll(async function (done) {
        console.info('beforeAll case');
        await applyPermission();
        done();
    })

    beforeEach(async function (done) {
        console.info('beforeEach case');
        await changedLocationMode();
        done();
    })
    
    /**
     * @tc.number SUB_HSS_LocationSystem_CountryCode_0100
     * @tc.name Test getCountryCode
     * @tc.desc Obtaining Country Code Information
     * @tc.type Function
     * @tc.level since 9
     */
    it('SUB_HSS_LocationSystem_CountryCode_0100', 0, async function (done) {
        await geolocation.getCountryCode().then((result) => {
            console.info("[lbs_js] getCountryCode promise result: " + JSON.stringify(result));
            console.info("[lbs_js] country :" + result.country);
            console.info("[lbs_js] type: " + result.type);
            expect(true).assertTrue(JSON.stringify(result)==CountryCodeType.COUNTRY_CODE_FROM_LOCALE);
            expect(true).assertTrue(JSON.stringify(result)!=CountryCodeType.COUNTRY_CODE_FROM_SIM);
            expect(true).assertTrue(JSON.stringify(result)!=CountryCodeType.COUNTRY_CODE_FROM_LOCATION);
            expect(true).assertTrue(JSON.stringify(result)!=CountryCodeType.COUNTRY_CODE_FROM_NETWORK);
        }).catch((error) => {
            console.info("[lbs_js] getCountryCode promise then error."  + JSON.stringify(error));
            expect().assertFail();
        });
        done();
    })

    /**
     * @tc.number SUB_HSS_LocationSystem_CountryCode_0200
     * @tc.name Test getCountryCode
     * @tc.desc Obtaining Country Code Information
     * @tc.type Function
     * @tc.level since 9
     */
    it('SUB_HSS_LocationSystem_CountryCode_0200', 0, async function (done) {
        function getCountryCodeCallback() {
            return new Promise((resolve, reject) => {
                geolocation.getCountryCode((err) => {
                    if (err) {
                        return console.info("getCountryCode callback err:  " + JSON.stringify(err));
                    } else {
                        console.info("getCountryCode callback success");
                    }
                    resolve();
                })
            })
        }
        await getCountryCodeCallback();
        done();
    })

    /**
     * @tc.number SUB_HSS_LocationSystem_CountryCode_0300
     * @tc.name getCountryCode_on_off
     * @tc.desc The interception country code is changed.
     * @tc.type Function
     * @tc.level since 9
     */
    it('SUB_HSS_LocationSystem_CountryCode_0300', 0, async function (done) {
        console.info("[lbs_js]countryCodeChange");
        geolocation.on('countryCodeChange', function (data) {
            console.info('[lbs_js] countryCodeChange' +JSON.stringify(data) );
        });
        await geolocation.getCountryCode().then((result) => {
            console.info("[lbs_js] getCountryCode promise result: " + JSON.stringify(result));
            expect(true).assertTrue(JSON.stringify(result)!=null);
        }).catch((error) => {
            console.info("[lbs_js] getCountryCode promise then error."  + JSON.stringify(error));
            expect().assertFail();
        });
        geolocation.off('countryCodeChange', function (data) {
            console.info('[lbs_js] countryCodeChange' + JSON.stringify(data));
            done();
        })
        done();
    })

})




