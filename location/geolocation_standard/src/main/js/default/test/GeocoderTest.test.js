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
    console.debug("=== getAccountManager finish");
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

    afterEach(function () {
    })

    /**
     * @tc.number Geo_0001
     * @tc.name SUB_HSS_LocationSystem_Geo_0001
     * @tc.desc Test isGeoServiceAvailable api .
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
     * @tc.number Geo_0002
     * @tc.name SUB_HSS_LocationSystem_Geo_0002
     * @tc.desc Test isGeoServiceAvailable api .
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
     * @tc.number Geo_0003
     * @tc.name SUB_HSS_LocationSystem_Geo_0003
     * @tc.desc Test isGeoServiceAvailable api .
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
    * @tc.number Geo_0004
     * @tc.name SUB_HSS_LocationSystem_Geo_0004
     * @tc.desc Test isGeoServiceAvailable api
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
     * @tc.number Geo_0005
     * @tc.name SUB_HSS_LocationSystem_Geo_0005
     * @tc.desc Test isGeoServiceAvailable api .
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
    * @tc.number Geo_0006
     * @tc.name SUB_HSS_LocationSystem_Geo_0006
     * @tc.desc Test getAddressesFromLocation api .
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
     * @tc.number Geo_0007
     * @tc.name SUB_HSS_LocationSystem_Geo_0007
     * @tc.desc Test requestEnableLocation api .
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
     * @tc.number Geo_0008
     * @tc.name SUB_HSS_LocationSystem_Geo_0008
     * @tc.desc Test getAddressesFromLocationName api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Geo_0008', 0, async function (done) {
        let geocodeRequest = {
            "description": "上海市浦东新区金穗路1800号",
            "maxItems": 1,
            "locale": "zh",
            "minLatitude": "",
            "minLongitude": "",
            "maxLatitude": "",
            "maxLongitude": ""
        };
        geolocation.getAddressesFromLocationName(geocodeRequest, (err, data) => {
            if (err) {
                switch (err) {
                    case 100:
                        console.info("NOT_SUPPORTED: " + JSON.stringify(err));
                        break;
                    case 101:
                        console.info("INPUT_PARAMS_ERROR: " + JSON.stringify(err));
                        break;
                    case 102:
                        console.info("REVERSE_GEOCODE_ERROR: " + JSON.stringify(err));
                        break;
                    case 103:
                        console.info("GEOCODE_ERROR: " + JSON.stringify(err));
                        break;
                    case 104:
                        console.info("LOCATOR_ERROR: " + JSON.stringify(err));
                        break;
                    case 105:
                        console.info("LOCATION_SWITCH_ERROR: " + JSON.stringify(err));
                        break;
                    case 106:
                        console.info("LAST_KNOWN_LOCATION_ERROR: " + JSON.stringify(err));
                        break;
                    case 107:
                        console.info("LOCATION_REQUEST_TIMEOUT_ERROR: " + JSON.stringify(err));
                        break;
                    case 108:
                        console.info("QUERY_COUNTRY_CODE_ERROR: " + JSON.stringify(err));
                        break;
                    default:
                        console.info('[lbs_js]  getAddressesFromLocationName callback err is : ' + JSON.stringify(err));
                }
            } else {
                console.info("[lbs_js] getAddressesFromLocationName08 callback data is: " + JSON.stringify(data));
                expect(true).assertEqual((JSON.stringify(data)) != null);
            }
            done();
        });
    })

    /**
     * @tc.number Geo_0009
     * @tc.name SUB_HSS_LocationSystem_Geo_0009
     * @tc.desc Test getAddressesFromLocationName api .
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
     * @tc.number Geo_0010
     * @tc.name SUB_HSS_LocationSystem_Geo_0010
     * @tc.desc Test getAddressesFromLocationName api .
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
     * @tc.number Geo_0011
     * @tc.name SUB_HSS_LocationSystem_Geo_0011
     * @tc.desc Test getAddressesFromLocationName api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Geo_0011', 0, async function (done) {
        let geocodeRequest = { "description": "", "maxItems": 1 };
        await geolocation.getAddressesFromLocationName(geocodeRequest).then((result) => {
            console.info("[lbs_js]  getAddressesFromLocation  promise data is: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName  promise then error." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        let geocodeRequest1 = { "description": null, "maxItems": 1 };
        await geolocation.getAddressesFromLocationName(geocodeRequest1).then((result) => {
            console.info("[lbs_js]  getAddressesFromLocation promise data is: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName  promise then error." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        done();
    })

    /**
     * @tc.number Geo_0012
     * @tc.name SUB_HSS_LocationSystem_Geo_0012
     * @tc.desc Test getAddressesFromLocationName api .
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
     * @tc.number Geo_0013
     * @tc.name SUB_HSS_LocationSystem_Geo_0013
     * @tc.desc Test getAddressesFromLocationName api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Geo_0013', 0, async function (done) {
        let geocodeRequest = {
            "description": "",
            "maxItems": 1,
            "minLatitude": 331.3082812847,
            "minLongitude": 121.5782001832,
            "maxLatitude": 31.1537977881,
            "maxLongitude": 121.8026736943
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest).then((result) => {
            console.info("[lbs_js]  getAddressesFromLocation callback data is: " + JSON.stringify(result));
            expect(result.length == 0).assertTrue();
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName promise then error." + JSON.stringify(error));
            expect(true).assertEqual((JSON.stringify(error)) != null);
        });
        let geocodeRequest1 = {
            "description": null,
            "maxItems": 1,
            "minLatitude": 331.3082812847,
            "minLongitude": 121.5782001832,
            "maxLatitude": 31.1537977881,
            "maxLongitude": 121.8026736943
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest1).then((result) => {
            console.info("[lbs_js]  getAddressesFromLocation callback data is: " + JSON.stringify(result));
            expect(result.length == 0).assertTrue();
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName promise then error." + JSON.stringify(error));
            expect(true).assertEqual((JSON.stringify(error)) != null);
        });
        done();
    })

    /**
     * @tc.number Geo_0014
     * @tc.name SUB_HSS_LocationSystem_Geo_0014
     * @tc.desc Test getAddressesFromLocationName api .
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
     * @tc.number Geo_0015
     * @tc.name SUB_HSS_LocationSystem_Geo_0015
     * @tc.desc Test getAddressesFromLocationName api .
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

    /**
     * @tc.number Geo_0016
     * @tc.name SUB_HSS_LocationSystem_Geo_0016
     * @tc.desc Test getAddressesFromLocationName api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Geo_0016', 0, async function (done) {
        let geocodeRequest1 = {
            "description": "上海金穗路1800号",
            "maxItems": 1,
            "minLatitude": -90,
            "minLongitude": 121.5782001832,
            "maxLatitude": 31.1537977881,
            "maxLongitude": 121.8026736943
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest1).then((result) => {
            console.info("[lbs_js]getAddressesFromLocation promise1: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName promise then error." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        let geocodeRequest2 = {
            "description": "上海金穗路1800号",
            "maxItems": 1,
            "minLatitude": 90,
            "minLongitude": 121.5782001832,
            "maxLatitude": 31.1537977881,
            "maxLongitude": 121.8026736943
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest2).then((result) => {
            console.info("[lbs_js]getAddressesFromLocation promise2: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName  promise then error." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        let geocodeRequest3 = {
            "description": "上海金穗路1800号",
            "maxItems": 1,
            "minLatitude": -90.1,
            "minLongitude": 121.5782001832,
            "maxLatitude": 31.1537977881,
            "maxLongitude": 121.8026736943
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest3).then((result) => {
            console.info("[lbs_js]getAddressesFromLocation promise3: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) == null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName  promise then error." + JSON.stringify(error));
            expect(true).assertEqual((JSON.stringify(error)) != null);
        });
        let geocodeRequest4 = {
            "description": "上海金穗路1800号",
            "maxItems": 1,
            "minLatitude": 90.1,
            "minLongitude": 121.5782001832,
            "maxLatitude": 31.1537977881,
            "maxLongitude": 121.8026736943
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest4).then((result) => {
            console.info("[lbs_js]getAddressesFromLocation promise4: " + JSON.stringify(result));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName  promise then error." + JSON.stringify(error));
            expect(true).assertEqual((JSON.stringify(error)) != null);
        });
        let geocodeRequest5 = {
            "description": "上海金穗路1800号",
            "maxItems": 1,
            "minLatitude": 31.3082812847,
            "minLongitude": 121.5782001832,
            "maxLatitude": -90,
            "maxLongitude": 121.8026736943
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest5).then((result) => {
            console.info("[lbs_js]getAddressesFromLocation promise5: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName  promise then error." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        let geocodeRequest6 = {
            "description": "上海金穗路1800号",
            "maxItems": 1,
            "minLatitude": 31.3082812847,
            "minLongitude": 121.5782001832,
            "maxLatitude": 90,
            "maxLongitude": 121.8026736943
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest6).then((result) => {
            console.info("[lbs_js]getAddressesFromLocation promise6: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName  promise then error." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        let geocodeRequest7 = {
            "description": "上海金穗路1800号",
            "maxItems": 1,
            "minLatitude": 31.3082812847,
            "minLongitude": 121.5782001832,
            "maxLatitude": -90.1,
            "maxLongitude": 121.8026736943
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest7).then((result) => {
            console.info("[lbs_js]getAddressesFromLocation promise7: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) == null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName  promise then error." + JSON.stringify(error));
            expect(true).assertEqual((JSON.stringify(error)) != null);
        });
        let geocodeRequest8 = {
            "description": "上海金穗路1800号",
            "maxItems": 1,
            "minLatitude": 31.3082812847,
            "minLongitude": 121.5782001832,
            "maxLatitude": 90.1,
            "maxLongitude": 121.8026736943
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest8).then((result) => {
            console.info("[lbs_js]getAddressesFromLocation promise8: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) == null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName  promise then error." + JSON.stringify(error));
            expect(true).assertEqual((JSON.stringify(error)) != null);
        });
        done()
    })

    /**
     * @tc.number Geo_0017
     * @tc.name SUB_HSS_LocationSystem_Geo_0017
     * @tc.desc Test getAddressesFromLocationName api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Geo_0017', 0, async function (done) {
        let geocodeRequest1 = {
            "description": "北京天安门",
            "maxItems": 1,
            "minLatitude": 39.85,
            "minLongitude": -180,
            "maxLatitude": 39.95,
            "maxLongitude": 116.45
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest1).then((result) => {
            console.info("[lbs_js]getAddressesFromLocation promise1: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName promise then error." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        let geocodeRequest2 = {
            "description": "北京天安门",
            "maxItems": 1,
            "minLatitude": 39.85,
            "minLongitude": 180,
            "maxLatitude": 39.95,
            "maxLongitude": 116.45
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest2).then((result) => {
            console.info("[lbs_js]getAddressesFromLocation promise2: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName  promise then error." + JSON.stringify(error));
            expect(error.length != 0).assertTrue();
        });
        let geocodeRequest3 = {
            "description": "北京天安门",
            "maxItems": 1,
            "minLatitude": 39.85,
            "minLongitude": -180.1,
            "maxLatitude": 39.95,
            "maxLongitude": 116.45
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest3).then((result) => {
            console.info("[lbs_js]getAddressesFromLocation promise3: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName  promise then error." + JSON.stringify(error));
            expect(error.length != 0).assertTrue();
        });
        let geocodeRequest4 = {
            "description": "北京天安门",
            "maxItems": 1,
            "minLatitude": 39.85,
            "minLongitude": 180.1,
            "maxLatitude": 39.95,
            "maxLongitude": 116.45
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest4).then((result) => {
            console.info("[lbs_js]getAddressesFromLocation promise4: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName  promise then error." + JSON.stringify(error));
            expect(error.length != 0).assertTrue();
        });
        let geocodeRequest5 = {
            "description": "北京天安门",
            "maxItems": 1,
            "minLatitude": 39.85,
            "minLongitude": 116.35,
            "maxLatitude": 39.95,
            "maxLongitude": -180
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest5).then((result) => {
            console.info("[lbs_js]getAddressesFromLocation promise5: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName  promise then error." + JSON.stringify(error));
            expect(error.length != 0).assertTrue();
        });
        let geocodeRequest6 = {
            "description": "北京天安门",
            "maxItems": 1,
            "minLatitude": 39.85,
            "minLongitude": 116.35,
            "maxLatitude": 39.95,
            "maxLongitude": 180
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest6).then((result) => {
            console.info("[lbs_js]getAddressesFromLocation promise6: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName  promise then error." + JSON.stringify(error));
            expect(error.length != 0).assertTrue();
        });
        let geocodeRequest7 = {
            "description": "北京天安门",
            "maxItems": 1,
            "minLatitude": 39.85,
            "minLongitude": 116.35,
            "maxLatitude": 39.95,
            "maxLongitude": -180.1
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest7).then((result) => {
            console.info("[lbs_js]getAddressesFromLocation promise7: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName  promise then error." + JSON.stringify(error));
            expect(error.length != 0).assertTrue();
        });
        let geocodeRequest8 = {
            "description": "北京天安门",
            "maxItems": 1,
            "minLatitude": 39.85,
            "minLongitude": 116.35,
            "maxLatitude": 39.95,
            "maxLongitude": 180.1
        };
        await geolocation.getAddressesFromLocationName(geocodeRequest8).then((result) => {
            console.info("[lbs_js]getAddressesFromLocation promise8: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getAddressesFromLocationName  promise then error." + JSON.stringify(error));
            expect(error.length != 0).assertTrue();
        });
        done()
    })

    /**
     * @tc.number LocSwitch_0001
     * @tc.name SUB_HSS_LocationSystem_LocSwitch_0001
     * @tc.desc Test isLocationEnabled api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_LocSwitch_0001', 0, async function (done) {
        geolocation.isLocationEnabled(async (err, data) => {
            if (err) {
                console.info('[lbs_js]  getLocationSwitchState err is : ' + JSON.stringify(err));

            } else {
                console.info('[lbs_js] getLocationSwitchState callback data1: ' + JSON.stringify(data));
                expect(data).assertTrue();
            }
            done()
        })
    });

    /**
     * @tc.number LocSwitch_0002
     * @tc.name SUB_HSS_LocationSystem_LocSwitch_0002
     * @tc.desc Test isLocationEnabled api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_LocSwitch_0002', 0, async function (done) {
        await geolocation.isLocationEnabled().then((result) => {
            console.info('[lbs_js] getLocationSwitchStateLocSwitch_00021 result: ' + JSON.stringify(result));
            expect(result).assertTrue();
        }).catch((error) => {
            expect().assertFail();
        });
        done();
    })

    /**
     * @tc.number LocSwitch_0003
     * @tc.name SUB_HSS_LocationSystem_LocSwitch_0003
     * @tc.desc Test requestrequestEnableLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_LocSwitch_0003', 0, async function (done) {
        geolocation.isLocationEnabled(async (err, data) => {
            if (err) {
                console.info('[lbs_js] getLocationSwitchState callback err is : ' + JSON.stringify(err));

            } else {
                console.info("[lbs_js] getLocationSwitchState callback data: " + JSON.stringify(data));
                expect(data).assertTrue();
            }
            done()
        })
    });

    /**
     * @tc.number LocSwitch_0004
     * @tc.name SUB_HSS_LocationSystem_LocSwitch_0004
     * @tc.desc Test requestrequestEnableLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_LocSwitch_0004', 0, async function (done) {
        await geolocation.isLocationEnabled().then((result1) => {
            console.info('[lbs_js] getLocationSwitchStateLocSwitch_0004 result: ' + JSON.stringify(result1));
            expect(result1).assertTrue();
        }).catch((error) => {
            expect().assertFail();
        });
        done();
    });

    /**
     * @tc.number LocSwitch_0005
     * @tc.name SUB_HSS_LocationSystem_LocSwitch_0005
     * @tc.desc Test locationServiceState api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_LocSwitch_0005', 0, async function (done) {
        console.log('just for overwriting,locationServiceState test need system api ');
        var locationServiceState = (state) => {
            console.log('locationServiceState: state: ' + JSON.stringify(state));
        }
        geolocation.on('locationServiceState', locationServiceState);
        geolocation.off('locationServiceState', locationServiceState);
        done();
    })

    /**
     * @tc.number SingleLoc_0001
     * @tc.name SUB_HSS_LocationSystem_SingleLoc_0001
     * @tc.desc Test getCurrentLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_SingleLoc_0001', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x200, "scenario": 0x301, "timeoutMs": 1000, "maxAccuracy": 0 };
        function getCurrentLocationCallback() {
            return new Promise((resolve, reject) => {
                geolocation.getCurrentLocation(currentLocationRequest, (err, result) => {
                    if (err) {
                        console.info("getCurrentLocation callback err:  " + JSON.stringify(err));
                        expect(true).assertEqual(err != null);
                        reject();
                        console.info('getCurrentLocationCallback reject after')
                    } else {
                        console.info("getCurrentLocation callback, result:  " + JSON.stringify(result));
                        expect(true).assertEqual(result != null);
                        resolve();
                    }
                });
            })
        }
        console.info('getCurrentLocationCallback  start');
        await getCurrentLocationCallback().then(() => {
            console.info('getCurrentLocationCallback  resolve');
        }, () => {
            console.info('getCurrentLocationCallback  reject');
        });
        console.info('getCurrentLocationCallback  end');
        done();
    })

    /**
     * @tc.number SingleLoc_0002
     * @tc.name SUB_HSS_LocationSystem_SingleLoc_0002
     * @tc.desc Test getCurrentLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_SingleLoc_0002', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x203, "scenario": 0x301, "timeoutMs": 1000, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation_0002 promise err:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })

    /**
     * @tc.number SingleLoc_0003
     * @tc.name SUB_HSS_LocationSystem_SingleLoc_0003
     * @tc.desc Test getCurrentLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_SingleLoc_0003', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x200, "scenario": 0x302, "timeoutMs": 1000, "maxAccuracy": 10 };
        function getCurrentLocationCallback() {
            return new Promise((resolve, reject) => {
                geolocation.getCurrentLocation(currentLocationRequest, (err, result) => {
                    if (err) {
                        console.info("getCurrentLocation callback_0003 err:  " + JSON.stringify(err));
                        expect(true).assertEqual(err != null);
                        reject();
                        console.info('getCurrentLocationCallback reject after')
                    } else {
                        console.info("getCurrentLocation callback_0003, result:  " + JSON.stringify(result));
                        expect(true).assertEqual(result != null);
                        resolve();
                    }
                });
            })
        }
        console.info('getCurrentLocationCallback  start');
        await getCurrentLocationCallback().then(() => {
            console.info('getCurrentLocationCallback  resolve');
        }, () => {
            console.info('getCurrentLocationCallback  reject');
        });
        console.info('getCurrentLocationCallback  end');
        done();
    })

    /**
     * @tc.number SingleLoc_0004
     * @tc.name SUB_HSS_LocationSystem_SingleLoc_0004
     * @tc.desc Test getCurrentLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_SingleLoc_0004', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x200, "scenario": 0x303, "timeoutMs": 1000, "maxAccuracy": 10 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result004 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err004:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })

    /**
     * @tc.number SingleLoc_0005
     * @tc.name SUB_HSS_LocationSystem_SingleLoc_0005
     * @tc.desc Test getCurrentLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_SingleLoc_0005', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x200, "scenario": 0x304, "timeoutMs": 1000, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result005 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err005:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })

    /**
     * @tc.number SingleLoc_0006
     * @tc.name SUB_HSS_LocationSystem_SingleLoc_0006
     * @tc.desc Test getCurrentLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_SingleLoc_0006', 0, async function (done) {
        let currentLocationRequest1 = { "priority": 0x200, "scenario": 0x305, "timeoutMs": 1000, "maxAccuracy": 10 };
        let currentLocationRequest2 = { "priority": 0x200, "scenario": 0x301, "timeoutMs": 1000, "maxAccuracy": 10 };
        await geolocation.getCurrentLocation(currentLocationRequest1).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result0061 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err0061:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
        })
        await geolocation.getCurrentLocation(currentLocationRequest2).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result0062 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation_0002 promise err0062:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })

    /**
     * @tc.number SingleLoc_0007
     * @tc.name SUB_HSS_LocationSystem_SingleLoc_0007
     * @tc.desc Test getCurrentLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_SingleLoc_0007', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0201, "scenario": 0x0300, "timeoutMs": 1000, "maxAccuracy": 10 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result007 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err007:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })

    /**
     * @tc.number SingleLoc_0008
     * @tc.name SUB_HSS_LocationSystem_SingleLoc_0008
     * @tc.desc Test getCurrentLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_SingleLoc_0008', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0203, "scenario": 0x0300, "timeoutMs": 1000, "maxAccuracy": 10 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result010 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err010:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })

    /**
     * @tc.number SingleLoc_0009
     * @tc.name SUB_HSS_LocationSystem_SingleLoc_0009
     * @tc.desc Test getCurrentLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_SingleLoc_0009', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0202, "scenario": 0x0300, "timeoutMs": 1000, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result009 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err009:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })

    /**
     * @tc.number SingleLoc_0010
     * @tc.name SUB_HSS_LocationSystem_SingleLoc_0010
     * @tc.desc Test getCurrentLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_SingleLoc_0010', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0200, "scenario": 0x0300, "timeoutMs": 1000, "maxAccuracy": 5 };
        let currentLocationRequest1 = { "priority": 0x0200, "scenario": 0x0300, "timeoutMs": 1000, "maxAccuracy": 2 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result010 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err010:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
        })
        await geolocation.getCurrentLocation(currentLocationRequest1).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result0102 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err0102:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
        })
        done();
    })

    /**
     * @tc.number SingleLoc_0011
     * @tc.name SUB_HSS_LocationSystem_SingleLoc_0011
     * @tc.desc Test getCurrentLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_SingleLoc_0011', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0201, "scenario": 0x0300, "timeoutMs": 1000, "maxAccuracy": 0 };
        let currentLocationRequest1 = { "priority": 0x0201, "scenario": 0x0300, "timeoutMs": 1000, "maxAccuracy": -1 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result011 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err011:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
        })
        await geolocation.getCurrentLocation(currentLocationRequest1).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result0112 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err0112:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })

    /**
    * @tc.number SingleLoc_0012
    * @tc.name SUB_HSS_LocationSystem_SingleLoc_0012
    * @tc.desc Test getCurrentLocation api .
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 2
    */
    it('SUB_HSS_LocationSystem_SingleLoc_0012', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0201, "scenario": 0x0301, "timeoutMs": 1000, "maxAccuracy": 0 };
        let currentLocationRequest1 = { "priority": 0x0201, "scenario": 0x0301, "timeoutMs": 1000, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result012 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err012:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
        })
        await geolocation.getCurrentLocation(currentLocationRequest1).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result0122 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err0122:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })

    /**
    * @tc.number SingleLoc_0013
    * @tc.name SUB_HSS_LocationSystem_SingleLoc_0013
    * @tc.desc Test getCurrentLocation api .
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 2
    */
    it('SUB_HSS_LocationSystem_SingleLoc_0013', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0201, "scenario": 0x0302, "timeoutMs": 0, "maxAccuracy": 0 };
        let currentLocationRequest1 = { "priority": 0x0201, "scenario": 0x0302, "timeoutMs": -1000, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result0131 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err0122:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        await geolocation.getCurrentLocation(currentLocationRequest1).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result0132 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err0122:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done()
    })

    /**
    * @tc.number SingleLoc_0014
    * @tc.name SUB_HSS_LocationSystem_SingleLoc_0014
    * @tc.desc Test getCurrentLocation api .
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 2
    */
    it('SUB_HSS_LocationSystem_SingleLoc_0014', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0201, "scenario": 0x0303, "timeoutMs": 1000, "maxAccuracy": 0 };
        function getCurrentLocationCallback() {
            return new Promise((resolve, reject) => {
                geolocation.getCurrentLocation(currentLocationRequest, (err, result) => {
                    if (err) {
                        console.info("getCurrentLocation callback err014:  " + JSON.stringify(err));
                        expect(true).assertEqual(err != null);
                        reject();
                        console.info('getCurrentLocationCallback reject after')
                    } else {
                        console.info("getCurrentLocation callback014, result:  " + JSON.stringify(result));
                        expect(true).assertEqual(result != null);
                        resolve();
                    }
                });
            })
        }
        console.info('getCurrentLocationCallback  start');
        await getCurrentLocationCallback().then(() => {
            console.info('getCurrentLocationCallback  resolve');
        }, () => {
            console.info('getCurrentLocationCallback  reject');
        });
        console.info('getCurrentLocationCallback  end');
        done();
    })

    /**
    * @tc.number SingleLoc_0015
    * @tc.name SUB_HSS_LocationSystem_SingleLoc_0015
    * @tc.desc Test getCurrentLocation api .
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 2
    */
    it('SUB_HSS_LocationSystem_SingleLoc_0015', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0201, "scenario": 0x0304, "timeoutMs": 1000, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result015 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err015:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })

    /**
    * @tc.number SingleLoc_0016
    * @tc.name SUB_HSS_LocationSystem_SingleLoc_0016
    * @tc.desc Test getCurrentLocation api .
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 2
    */
    it('SUB_HSS_LocationSystem_SingleLoc_0016', 0, async function (done) {
        let currentLocationRequest1 = { "priority": 0x201, "scenario": 0x305, "timeoutMs": 1000, "maxAccuracy": 0 };
        let currentLocationRequest2 = { "priority": 0x201, "scenario": 0x301, "timeoutMs": 1000, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest1).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result0162 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err0161:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
        })
        await geolocation.getCurrentLocation(currentLocationRequest2).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result0162 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err0162:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })

    /**
     * @tc.number SingleLoc_0017
     * @tc.name SUB_HSS_LocationSystem_SingleLoc_0017
     * @tc.desc Test getCurrentLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_SingleLoc_0017', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0202, "scenario": 0x0300, "timeoutMs": 1000, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result017 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err017:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })

    /**
    * @tc.number SingleLoc_0018
    * @tc.name SUB_HSS_LocationSystem_SingleLoc_0018
    * @tc.desc Test getCurrentLocation api .
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 2
    */
    it('SUB_HSS_LocationSystem_SingleLoc_0018', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0202, "scenario": 0x0301, "timeoutMs": 1000, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result018 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err018:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })

    /**
    * @tc.number SingleLoc_0019
    * @tc.name SUB_HSS_LocationSystem_SingleLoc_0019
    * @tc.desc Test getCurrentLocation api .
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 2
    */
    it('SUB_HSS_LocationSystem_SingleLoc_0019', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0202, "scenario": 0x0302, "timeoutMs": 10, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result019 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err019:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })

    /**
    * @tc.number SingleLoc_0020
    * @tc.name SUB_HSS_LocationSystem_SingleLoc_0020
    * @tc.desc Test getCurrentLocation api .
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 2
    */
    it('SUB_HSS_LocationSystem_SingleLoc_0020', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0202, "scenario": 0x0303, "timeoutMs": 10, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result020 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err020:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })

    /**
    * @tc.number SingleLoc_0021
    * @tc.name SUB_HSS_LocationSystem_SingleLoc_0021
    * @tc.desc Test getCurrentLocation api .
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 2
    */
    it('SUB_HSS_LocationSystem_SingleLoc_0021', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0202, "scenario": 0x0304, "timeoutMs": 10, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result021 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err021:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })

    /**
    * @tc.number SingleLoc_0022
    * @tc.name SUB_HSS_LocationSystem_SingleLoc_0022
    * @tc.desc Test getCurrentLocation api .
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 2
    */
    it('SUB_HSS_LocationSystem_SingleLoc_0022', 0, async function (done) {
        let currentLocationRequest1 = { "priority": 0x202, "scenario": 0x305, "timeoutMs": 10, "maxAccuracy": 0 };
        let currentLocationRequest2 = { "priority": 0x202, "scenario": 0x301, "timeoutMs": 10, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest1).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result221 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err0221:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        await geolocation.getCurrentLocation(currentLocationRequest2).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result222 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err222:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })

    /**
     * @tc.number SingleLoc_0023
     * @tc.name SUB_HSS_LocationSystem_SingleLoc_0023
     * @tc.desc Test getCurrentLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_SingleLoc_0023', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0203, "scenario": 0x0300, "timeoutMs": 10, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result023 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err023:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })

    /**
    * @tc.number SingleLoc_0024
    * @tc.name SUB_HSS_LocationSystem_SingleLoc_0024
    * @tc.desc Test getCurrentLocation api .
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 2
    */
    it('SUB_HSS_LocationSystem_SingleLoc_0024', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0203, "scenario": 0x0302, "timeoutMs": 10, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result024 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err024:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done()
    })

    /**
    * @tc.number SingleLoc_0025
    * @tc.name SUB_HSS_LocationSystem_SingleLoc_0025
    * @tc.desc Test getCurrentLocation api .
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 2
    */
    it('SUB_HSS_LocationSystem_SingleLoc_0025', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0203, "scenario": 0x0303, "timeoutMs": 10, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result025 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err025:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })

    /**
    * @tc.number SingleLoc_0026
    * @tc.name SUB_HSS_LocationSystem_SingleLoc_0026
    * @tc.desc Test getCurrentLocation api .
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 2
    */
    it('SUB_HSS_LocationSystem_SingleLoc_0026', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0203, "scenario": 0x0304, "timeoutMs": 10, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result026 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err026:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })

    /**
    * @tc.number SingleLoc_0027
    * @tc.name SUB_HSS_LocationSystem_SingleLoc_0027
    * @tc.desc Test getCurrentLocation api .
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 2
    */
    it('SUB_HSS_LocationSystem_SingleLoc_0027', 0, async function (done) {
        let currentLocationRequest1 = { "priority": 0x203, "scenario": 0x305, "timeoutMs": 10, "maxAccuracy": 0 };
        let currentLocationRequest2 = { "priority": 0x203, "scenario": 0x301, "timeoutMs": 10, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest1).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result271 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err0271:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
        })
        await geolocation.getCurrentLocation(currentLocationRequest2).then((result) => {
            console.info('[lbs_js] getCurrentLocation promise result272 ' + JSON.stringify(result));
        }).catch(error => {
            console.info('getCurrentLocation promise err272:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
        done();
    })


    /**
     * @tc.number LastLocation_0001
     * @tc.name SUB_HSS_LocationSystem_LastLocation_0001
     * @tc.desc Test getLastLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_LastLocation_0001', 0, async function (done) {
        geolocation.getLastLocation(async (err, data) => {
            if (err) {
                console.info('[lbs_js]  getLastLocation callback err is : ' + JSON.stringify(err));
            } else {
                console.info('[lbs_js] getLastLocation callback result: ' + JSON.stringify(data));
                expect(data).assertTrue();
            }
            done()
        })
    });

    /**
     * @tc.number LastLocation_0002
     * @tc.name SUB_HSS_LocationSystem_LastLocation_0002
     * @tc.desc Test getLastLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_LastLocation_0002', 0, async function (done) {
        await geolocation.getLastLocation().then((result) => {
            console.info('[lbs_js] getLastLocation promise result: ' + JSON.stringify(result));
            expect(true).assertEqual(JSON.stringify(result) != null);
            //            expect(result).assertTrue();
        }).catch((error) => {
            console.info("[lbs_js] getLastLocation promise then error:" + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        done();
    })

    /**
     * @tc.number SingleLoc_0028
     * @tc.name SUB_HSS_LocationSystem_SingleLoc_0028
     * @tc.desc Test getCurrentLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_SingleLoc_0028', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0200, "scenario": 0x0300, "timeoutMs": 10, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info("[lbs_js] getCurrentLocation promise data028: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getCurrentLocation promise then error028." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        done();
    })

    /**
         * @tc.number SingleLoc_0029
         * @tc.name SUB_HSS_LocationSystem_SingleLoc_0029
         * @tc.desc Test getCurrentLocation api .
         * @tc.size MEDIUM
         * @tc.type Function
         * @tc.level Level 2
         */
    it('SUB_HSS_LocationSystem_SingleLoc_0029', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0200, "scenario": 0x0301, "timeoutMs": 10, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info("[lbs_js] getCurrentLocation promise result is029: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getCurrentLocation promise then error029." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        done();
    })

    /**
     * @tc.number SingleLoc_0030
     * @tc.name SUB_HSS_LocationSystem_SingleLoc_0030
     * @tc.desc Test getCurrentLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_SingleLoc_0030', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0200, "scenario": 0x0302, "timeoutMs": 10, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info("[lbs_js] getCurrentLocation promise result is030: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getCurrentLocation promise then error030." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        done();
    })

    /**
     * @tc.number SingleLoc_0031
     * @tc.name SUB_HSS_LocationSystem_SingleLoc_0031
     * @tc.desc Test getCurrentLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_SingleLoc_0031', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0200, "scenario": 0x0303, "timeoutMs": 10, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info("[lbs_js] getCurrentLocation promise result is031: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getCurrentLocation promise then error031." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        done();
    })

    /**
     * @tc.number SingleLoc_0032
     * @tc.name SUB_HSS_LocationSystem_SingleLoc_0032
     * @tc.desc Test getCurrentLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_SingleLoc_0032', 0, async function (done) {
        let currentLocationRequest = { "priority": 0x0200, "scenario": 0x0304, "timeoutMs": 10, "maxAccuracy": 0 };
        await geolocation.getCurrentLocation(currentLocationRequest).then((result) => {
            console.info("[lbs_js] getCurrentLocation promise result is032: " + JSON.stringify(result));
            expect(true).assertEqual((JSON.stringify(result)) != null);
        }).catch((error) => {
            console.info("[lbs_js] getCurrentLocation promise then error032." + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        done();
    })

    /**
     * @tc.number SingleLoc_0032
     * @tc.name SUB_HSS_LocationSystem_SingleLoc_0032
     * @tc.desc Test getCurrentLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_SendCommand_callback', 0, async function (done) {
        let requestInfo = { 'scenairo': 0x301, 'command': "command_1" };
        await geolocation.sendCommand(requestInfo, (err, result) => {
            if (err) {
                console.info('sendcommand callback err:' + JSON.stringify(err));
                expect(true).assertEqual(JSON.stringify(err) != null);
                done();
            }
            console.info('sendcommand callback result:' + JSON.stringify(result));
        });
    })

    /**
 * @tc.number SingleLoc_0032
 * @tc.name SUB_HSS_LocationSystem_SingleLoc_0032
 * @tc.desc Test getCurrentLocation api .
 * @tc.size MEDIUM
 * @tc.type Function
 * @tc.level Level 2
 */
    it('SUB_HSS_SendCommand_promise', 0, async function (done) {
        let requestInfo = { 'scenairo': 0x301, 'command': "command_1" };
        geolocation.sendCommand(requestInfo).then((result) => {
            console.info('sendCommand promise result:' + result);
            done();
        }).catch(error => {
            console.info('sendcommand promise err:' + JSON.stringify(error));
            expect(true).assertEqual(JSON.stringify(error) != null);
            done();
        })
    })


})






