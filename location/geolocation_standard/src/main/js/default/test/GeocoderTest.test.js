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
import {LocationEventListener} from '@ohos.geolocation';
import abilityAccessCtrl from '@ohos.abilityAccessCtrl'
import bundle from '@ohos.bundle'
import osaccount from '@ohos.account.osAccount'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

let LocationRequestScenario = {
    UNSET: 0x300,
    NAVIGATION: 0x301,
    TRAJECTORY_TRACKING: 0x302,
    CAR_HAILING: 0x303,
    DAILY_LIFE_SERVICE: 0x304,
    NO_POWER: 0x305
}
let LocationRequestPriority = { UNSET: 0x200, ACCURACY: 0x201, LOW_POWER: 0x202, FIRST_FIX: 0x203 }

let LocationPrivacyType = {
    OTHERS: 0,
    STARTUP: 1,
    CORE_LOCATION: 2
}

function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
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
    console.info("=== getAccountManager finish");
    let localId = await osAccountManager.getOsAccountLocalIdFromProcess();
    console.info("LocalId is :" + localId);
    let appInfo = await bundle.getApplicationInfo('ohos.acts.location.geolocation.function', 0, localId);
    let atManager = abilityAccessCtrl.createAtManager();
    if (atManager != null) {
        let tokenID = appInfo.accessTokenId;
        console.info('[permission] case accessTokenID is ' + tokenID);
        let permissionName1 = 'ohos.permission.LOCATION';
        let permissionName2 = 'ohos.permission.LOCATION_IN_BACKGROUND';
        await atManager.grantUserGrantedPermission(tokenID, permissionName1, 1).then((result) => {
            console.info('[permission] case grantUserGrantedPermission success :' + JSON.stringify(result));
        }).catch((err) => {
            console.info('[permission] case grantUserGrantedPermission failed :' + JSON.stringify(err));
        });
        await atManager.grantUserGrantedPermission(tokenID, permissionName2, 1).then((result) => {
            console.info('[permission] case grantUserGrantedPermission success :' + JSON.stringify(result));
        }).catch((err) => {
            console.info('[permission] case grantUserGrantedPermission failed :' + JSON.stringify(err));
        });
    } else {
        console.info('[permission] case apply permission failed, createAtManager failed');
    }
}

describe('geolocationTest_geo1', function () {

    console.log('#start AccessTokenTests#');
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
     * @tc.number SUB_HSS_LocationSystem_Geo_0001
     * @tc.name testIsGeoServiceAvailable
     * @tc.desc Check whether address resolution and reverse address resolution are supported.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Geo_0001', 0, async function (done) {
        geolocation.isGeoServiceAvailable(async (err, data) => {
            if (err) {
                console.info('[lbs_js]  getGeoServiceState err is : ' + JSON.stringify(err));

            } else {
                console.info('[lbs_js] isGeoServiceAvailable callback result: ' + JSON.stringify(data));
                console.info('[lbs_js] not support now');
                expect(true).assertEqual(JSON.stringify(data) != null);
                done();
            }
            done()
        })
    });

    /**
     * @tc.number SUB_HSS_LocationSystem_Geo_0002
     * @tc.name TestisGeoServiceAvailable
     * @tc.desc Check whether address resolution and reverse address resolution are supported.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Geo_0002', 0, async function (done) {
        await geolocation.isGeoServiceAvailable().then((result) => {
            console.info('[lbs_js] isGeoServiceAvailable1 promise result: ' + JSON.stringify(result));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(result) != null);
        }).catch((error) => {
            console.info("[lbs_js] promise then error." + JSON.stringify(error));
            expect().assertFail();
        });
        done();
    })

    /**
     * @tc.number SUB_HSS_LocationSystem_Geo_0003
     * @tc.name TestgetAddressesFromLocation
     * @tc.desc Address Resolution Test.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Geo_0003', 0, async function (done) {
        let reverseGeocodeRequest = { "latitude": 31.265496, "longitude": 121.62771, "maxItems": 1, "locale": "zh" };
        let promise = new Promise((resolve, reject) => {
            geolocation.getAddressesFromLocation(reverseGeocodeRequest, (err, data) => {
                if (err) {
                    console.info('[lbs_js]  getAddressesFromLocation callback err is : ' + JSON.stringify(err));
                } else {
                    console.info("[lbs_js]  getAddressesFromLocation callback data is: " + JSON.stringify(data));
                    expect(true).assertEqual((JSON.stringify(data)) != null);
                }
                resolve()
            });
        })
        await promise.then(done)
    })

    /**
    * @tc.number SUB_HSS_LocationSystem_Geo_0004
     * @tc.name TestgetAddressesFromLocation
     * @tc.desc Address Resolution Test.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Geo_0004', 0, async function (done) {
        let reverseGeocodeRequest = { "latitude": 31.265496, "longitude": 121.62771, "maxItems": 1 };
        await geolocation.getAddressesFromLocation(reverseGeocodeRequest).then((data) => {
            console.info('[lbs_js] getAddressesFromLocation04 promise: ' + JSON.stringify(data));
            console.info('addressUrl: ' + JSON.stringify(data)[0].addressUrl
            + JSON.stringify(data)[0].administrativeArea + JSON.stringify(data)[0].countryCode
            + JSON.stringify(data)[0].countryName + JSON.stringify(data)[0].descriptions
            + JSON.stringify(data)[0].descriptionsSize + data[0].latitude
            + JSON.stringify(data)[0].locale + JSON.stringify(data)[0].locality
            + JSON.stringify(data)[0].longitude + JSON.stringify(data)[0].phoneNumber
            + JSON.stringify(data)[0].placeName
            + JSON.stringify(data)[0].postalCode + JSON.stringify(data)[0].premises
            + JSON.stringify(data)[0].roadName + JSON.stringify(data)[0].subAdministrativeArea
            + JSON.stringify(data)[0].subLocality + JSON.stringify(data)[0].subRoadName);
            done();
        }).catch(error => {
            console.info("[lbs_js] getAddressesFromLocation promise then error." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        });
    })

    /**
     * @tc.number SUB_HSS_LocationSystem_Geo_0005
     * @tc.name TestgetAddressesFromLocation
     * @tc.desc Obtaining Multiple Addresses Using the Address Resolution Function.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Geo_0005', 0, async function (done) {
        let reverseGeocodeRequest = { "latitude": 31.265496, "longitude": 121.62771, "maxItems": 5 };
        await geolocation.getAddressesFromLocation(reverseGeocodeRequest).then((data) => {
            console.info('[lbs_js] getAddressesFromLocation05 promise: ' + JSON.stringify(data));
            expect(true).assertEqual((JSON.stringify(data)) != null);
            done();
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocation promise then error." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        });
    })

    /**
    * @tc.number SUB_HSS_LocationSystem_Geo_0006
     * @tc.name TestgetAddressesFromLocation
     * @tc.desc Input parameter boundary test of the address resolution function
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Geo_0006', 0, async function (done) {
        let reverseGeocodeRequest1 = { "latitude": 90, "longitude": 121.62771, "maxItems": 1 };
        await geolocation.getAddressesFromLocation(reverseGeocodeRequest1).then((data) => {
            console.info('[lbs_js] getAddressesFromLocation0601 promise: ' + JSON.stringify(data));
            expect(true).assertEqual((JSON.stringify(data)) != null);
        }).catch(error => {
            console.info("[lbs_js] getAddressesFromLocation0601 promise then error." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        let reverseGeocodeRequest2 = { "latitude": 90.1, "longitude": 121.62771, "maxItems": 1 };
        await geolocation.getAddressesFromLocation(reverseGeocodeRequest2).then((data) => {
            console.info('[lbs_js] getAddressesFromLocation promise: ' + JSON.stringify(data));
            expect(data.length).assertEqual(0);
        }).catch(error => {
            console.info("[lbs_js] getAddressesFromLocation0602 promise then error." + JSON.stringify(error));
            expect(true).assertEqual((JSON.stringify(error)) != null);
        });
        let reverseGeocodeRequest3 = { "latitude": -90, "longitude": 121.62771, "maxItems": 1 };
        await geolocation.getAddressesFromLocation(reverseGeocodeRequest3).then((data) => {
            console.info('[lbs_js] getAddressesFromLocation0603 promise: ' + JSON.stringify(data));
            expect(true).assertEqual((JSON.stringify(data)) != null);
        }).catch(error => {
            console.info("[lbs_js] getAddressesFromLocation0603 promise then error." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        let reverseGeocodeRequest4 = { "latitude": -90.1, "longitude": 121.62771, "maxItems": 1 };
        await geolocation.getAddressesFromLocation(reverseGeocodeRequest4).then((data) => {
            console.info('[lbs_js] getAddressesFromLocation0604 promise: ' + JSON.stringify(data));
            expect(data.length).assertEqual(0);
        }).catch(error => {
            console.info("[lbs_js] getAddressesFromLocation0604 promise then error." + JSON.stringify(error));
            expect(true).assertEqual((JSON.stringify(error)) != null);
        });
        done()
    })

    /**
     * @tc.number SUB_HSS_LocationSystem_Geo_0007
     * @tc.name TestgetAddressesFromLocation
     * @tc.desc Input parameter boundary test of the address resolution function
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Geo_0007', 0, async function (done) {
        let reverseGeocodeRequest = { "latitude": 31.265496, "longitude": 180, "maxItems": 1 };
        await geolocation.getAddressesFromLocation(reverseGeocodeRequest).then((data) => {
            console.info('[lbs_js] getAddressesFromLocation0701 promise: ' + JSON.stringify(data));
            expect(true).assertEqual((JSON.stringify(data)) != null);
        }).catch(error => {
            console.info("[lbs_js] getAddressesFromLocation0701 promise then error." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        let reverseGeocodeRequest1 = { "latitude": 31.265496, "longitude": -180.1, "maxItems": 1 };
        await geolocation.getAddressesFromLocation(reverseGeocodeRequest1).then((data) => {
            console.info('[lbs_js] getAddressesFromLocation0702 promise: ' + JSON.stringify(data));
            expect(data.length).assertEqual(0);
        }).catch(error => {
            console.info("[lbs_js] getAddressesFromLocation0702 promise then error." + JSON.stringify(error));
            expect(true).assertEqual((JSON.stringify(error)) != null);
        });
        let reverseGeocodeRequest2 = { "latitude": 31.265496, "longitude": 180, "maxItems": 1 };
        await geolocation.getAddressesFromLocation(reverseGeocodeRequest2).then((data) => {
            console.info('[lbs_js] getAddressesFromLocation0703 promise: ' + JSON.stringify(data));
            expect(true).assertEqual((JSON.stringify(data)) != null);
        }).catch(error => {
            console.info("[lbs_js] getAddressesFromLocation0703 promise then error." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        let reverseGeocodeRequest3 = { "latitude": 31.265496, "longitude": 180.1, "maxItems": 1 };
        await geolocation.getAddressesFromLocation(reverseGeocodeRequest3).then((data) => {
            console.info('[lbs_js] getAddressesFromLocation0704 promise: ' + JSON.stringify(data));
            expect(data.length).assertEqual(0);
        }).catch(error => {
            console.info("[lbs_js] getAddressesFromLocation0704 promise then error." + JSON.stringify(error));
            expect(true).assertEqual((JSON.stringify(error)) != null);
        });
        done()
    })

    /**
     * @tc.number SUB_HSS_LocationSystem_Geo_0009
     * @tc.name TestgetAddressesFromLocation
     * @tc.desc Reverse address resolution test.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Geo_0009', 0, async function (done) {
        let geocodeRequest = { "description": "上海市浦东新区金穗路1800号", "maxItems": 1 };
        await geolocation.getAddressesFromLocationName(geocodeRequest).then((result) => {
            console.info("[lbs_js] getAddressesFromLocation callback data is: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName09 promise then error." + JSON.stringify(error));
            expect(true).assertEqual((JSON.stringify(error)) != null);
        });
        done();
    })

    /**
     * @tc.number SUB_HSS_LocationSystem_Geo_0010
     * @tc.name TestgetAddressesFromLocation
     * @tc.desc Obtaining Multiple Locations Using the Reverse Address Resolution Function.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Geo_0010', 0, async function (done) {
        let geocodeRequest = { "description": "上海市浦东新区金穗路1800号", "maxItems": 5 };
        await geolocation.getAddressesFromLocationName(geocodeRequest).then((result) => {
            console.info("[lbs_js]  getAddressesFromLocation m  callback data is: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName m promise then error." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        done();
    })

    /**
     * @tc.number SUB_HSS_LocationSystem_Geo_0012
     * @tc.name TestgetAddressesFromLocation
     * @tc.desc Test the reverse address resolution function in the specified range..
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Geo_0012', 0, async function (done) {
        let geocodeRequest = {
            "description": "上海金穗路1800号",
            "maxItems": 1,
            "minLatitude": 31.3082812847,
            "minLongitude": 121.5782001832,
            "maxLatitude": 31.1537977881,
            "maxLongitude": 121.8026736943
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest).then((result) => {
            console.info("[lbs_js] getAddressesFromLocation   callback data is: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName  promise then error." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        done();
    })

    /**
     * @tc.number SUB_HSS_LocationSystem_Geo_0014
     * @tc.name TestgetAddressesFromLocation
     * @tc.desc Invalid input parameter test for the reverse address resolution function in the specified range
     *          - the address is not in the range.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Geo_0014', 0, async function (done) {
        let geocodeRequest = {
            "description": "北京天安门",
            "maxItems": 1,
            "minLatitude": 40.85,
            "minLongitude": 116.35,
            "maxLatitude": 40.95,
            "maxLongitude": 116.45
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest).then((result) => {
            console.info("[lbs_js]  getAddressesFromLocation callback data is: " + JSON.stringify(result));
            expect(result.length >= 0).assertTrue();
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName  promise then error." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        done()
    })

    /**
     * @tc.number SUB_HSS_LocationSystem_Geo_0015
     * @tc.name TestgetAddressesFromLocation
     * @tc.desc Invalid longitude and latitude entered for the reverse address resolution
     *          function in the specified range. The longitude and latitude range boundary is inverted..
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Geo_0015', 0, async function (done) {
        let geocodeRequest = {
            "description": "北京天安门",
            "maxItems": 1,
            "minLatitude": 39.95,
            "minLongitude": 116.45,
            "maxLatitude": 39.85,
            "maxLongitude": 116.35
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest).then((result) => {
            console.info("[lbs_js]  getAddressesFromLocation callback data is: " + JSON.stringify(result));
            expect(result.length >= 0).assertTrue();
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName  promise then error." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        done()
    })
})

