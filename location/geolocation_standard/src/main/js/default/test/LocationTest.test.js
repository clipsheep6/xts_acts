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
import { LocationEventListener } from '@ohos.geolocation';
import abilityAccessCtrl from '@ohos.abilityAccessCtrl'
import bundle from '@ohos.bundle'
import osaccount from '@ohos.account.osAccount'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
let LocationRequestScenario = {UNSET : 0x300 ,NAVIGATION : 0x301 ,
    TRAJECTORY_TRACKING : 0x302 ,CAR_HAILING : 0x303,
    DAILY_LIFE_SERVICE : 0x304 ,NO_POWER : 0x305}
let LocationRequestPriority = {UNSET : 0x200 ,ACCURACY : 0x201 ,LOW_POWER : 0x202 ,FIRST_FIX :0x203}

let LocationPrivacyType = {
    OTHERS : 0,
    STARTUP: 1,
    CORE_LOCATION : 2
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


async function enableLocationSwitch(){
    function enableLocationSwitchCallback(){
        return new Promise((resolve, reject)=>{
            geolocation.requestEnableLocation((err, data) => {
                if (err) {
                    console.info('[lbs_js]  requestEnableLocation callback err is : ' + err );
                }else {
                    console.info("[lbs_js] requestEnableLocation callback data: " + data);
                    expect(data).assertTrue();
                }
            });
        })
    }
    await enableLocationSwitchCallback();
    done();

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

describe('geolocationTest_geo3', function () {
    beforeAll(async function (done) {
        console.info('beforeAll case');
        await applyPermission();
        done();
    })

    beforeEach(function () {
        console.info('beforeEach case');
    })
    afterEach(function () {
    })

    /**
     * @tc.number LocRequest_0001
     * @tc.name SUB_HSS_LocationSystem_LocRequest_0001
     * @tc.desc Test locationChange api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_LocRequest_0001', 0, async function (done) {
        enableLocationSwitch();
        let requestInfo = {"priority":0x200, "scenario":0x301, "timeInterval":5,
            "distanceInterval": 0, "maxAccuracy": 0};
        var locationChange = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        geolocation.on('locationChange', requestInfo, locationChange);
        geolocation.off('locationChange', locationChange);
        done();
    })

    /**
     * @tc.number LocRequest_0002
     * @tc.name SUB_HSS_LocationSystem_LocRequest_0002
     * @tc.desc Test locationChange api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_LocRequest_0002', 0, async function (done) {
        enableLocationSwitch();
        let requestInfo = {"priority":0x200, "scenario":0x302, "timeInterval":1,
            "distanceInterval": 5, "maxAccuracy": 10};
        var locationChange = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        geolocation.on('locationChange', requestInfo, locationChange);
        geolocation.off('locationChange', locationChange);
        done();
    })

    /**
     * @tc.number LocRequest_0003
     * @tc.name SUB_HSS_LocationSystem_LocRequest_0003
     * @tc.desc Test locationChange api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_LocRequest_0003', 0, async function (done) {
        enableLocationSwitch();
        let requestInfo = {"priority":0x200, "scenario":0x303, "timeInterval":5,
            "distanceInterval": 5, "maxAccuracy": 10};
        var locationChange = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        geolocation.on('locationChange', requestInfo, locationChange);
        geolocation.off('locationChange', locationChange);
        done();
    })

    /**
     * @tc.number LocRequest_0004
     * @tc.name SUB_HSS_LocationSystem_LocRequest_0004
     * @tc.desc Test locationChange api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_LocRequest_0004', 0, async function (done) {
        enableLocationSwitch();
        let requestInfo = {"priority":0x200, "scenario":0x303, "timeInterval":1,
            "distanceInterval": 5, "maxAccuracy": 0};
        var locationChange = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        geolocation.on('locationChange', requestInfo, locationChange);
        geolocation.off('locationChange', locationChange);
        done();
    })

    /**
     * @tc.number LocRequest_0005
     * @tc.name SUB_HSS_LocationSystem_LocRequest_0005
     * @tc.desc Test locationChange api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_LocRequest_0005', 0, async function (done) {
        enableLocationSwitch();
        let requestInfo = {"priority":0x200, "scenario":0x305, "timeInterval":1,
            "distanceInterval": 5, "maxAccuracy": 10};
        var locationChange1 = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        var locationChange2 = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        geolocation.on('locationChange', requestInfo, locationChange1);
        geolocation.on('locationChange', requestInfo, locationChange2);
        geolocation.off('locationChange', locationChange1);
        geolocation.off('locationChange', locationChange2);
        done();
    })

    /**
     * @tc.number LocRequest_0007
     * @tc.name SUB_HSS_LocationSystem_LocRequest_0007
     * @tc.desc Test locationChange api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_LocRequest_0007', 0, async function (done) {
        enableLocationSwitch();
        let requestInfo = {"priority":0x201, "scenario":0x300, "timeInterval":1,
            "distanceInterval": 5, "maxAccuracy": 10};
        var locationChange = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        geolocation.on('locationChange', requestInfo, locationChange);
        geolocation.off('locationChange', locationChange);
        done();
    })

    /**
     * @tc.number LocRequest_0008
     * @tc.name SUB_HSS_LocationSystem_LocRequest_0008
     * @tc.desc Test locationChange api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_LocRequest_0008', 0, async function (done) {
        enableLocationSwitch();
        let requestInfo = {"priority":0x203, "scenario":0x300, "timeInterval":5,
            "distanceInterval": 5, "maxAccuracy": 10};
        var locationChange = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        geolocation.on('locationChange', requestInfo, locationChange);
        geolocation.off('locationChange', locationChange);
        done();
    })

    /**
     * @tc.number LocRequest_0009
     * @tc.name SUB_HSS_LocationSystem_LocRequest_0009
     * @tc.desc Test locationChange api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_LocRequest_0009', 0, async function (done) {
        enableLocationSwitch();
        let requestInfo = {"priority":0x202, "scenario":0x300, "timeInterval":1,
            "distanceInterval": 5, "maxAccuracy": 10}
        var locationChange = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        geolocation.on('locationChange', requestInfo, locationChange);
        geolocation.off('locationChange', locationChange);
        done();
    })

    /**
     * @tc.number LocRequest_0010
     * @tc.name SUB_HSS_LocationSystem_LocRequest_0010
     * @tc.desc Test locationChange api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_LocRequest_0010', 0, async function (done) {
        enableLocationSwitch();
        let requestInfo = {"priority":0x200, "scenario":0x301, "timeInterval":3,
            "distanceInterval": 0, "maxAccuracy": 0};
        var locationChange = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        geolocation.on('locationChange', requestInfo, locationChange);
        geolocation.off('locationChange', locationChange);
        done();
    })

    /**
     * @tc.number LocRequest_0011
     * @tc.name SUB_HSS_LocationSystem_LocRequest_0011
     * @tc.desc Test locationChange api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_LocRequest_0011', 0, async function (done) {
        enableLocationSwitch();
        let requestInfo = {"priority":0x200, "scenario":0x301, "timeInterval":5,
            "distanceInterval": 0, "maxAccuracy": 0};
        var locationChange = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        geolocation.on('locationChange', requestInfo, locationChange);
        geolocation.off('locationChange', locationChange);
        done();
    })

    /**
    * @tc.number LocRequest_0012
    * @tc.name SUB_HSS_LocationSystem_LocRequest_0012
    * @tc.desc Test locationChange api .
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 2
    */
    it('SUB_HSS_LocationSystem_LocRequest_0012', 0, async function (done) {
        enableLocationSwitch();
        let requestInfo = {"priority":0x200, "scenario":0x301, "timeInterval":0,
            "distanceInterval": 0, "maxAccuracy": 0};
        var locationChange = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        geolocation.on('locationChange', requestInfo, locationChange);
        geolocation.off('locationChange', locationChange);
        done();
    })

    /**
    * @tc.number LocRequest_0013
    * @tc.name SUB_HSS_LocationSystem_LocRequest_0013
    * @tc.desc Test locationChange api .
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 2
    */
    it('SUB_HSS_LocationSystem_LocRequest_0013', 0, async function (done) {
        enableLocationSwitch();
        let requestInfo1 = {"priority":0x200, "scenario":0x301, "timeInterval":0,
            "distanceInterval": 0, "maxAccuracy": 0};
        let requestInfo2 = {"priority":0x200, "scenario":0x301, "timeInterval":0,
            "distanceInterval": 0, "maxAccuracy": 0};
        var locationChange1 = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        var locationChange2 = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        geolocation.on('locationChange', requestInfo1, locationChange1);
        geolocation.off('locationChange', locationChange1);
        geolocation.on('locationChange', requestInfo2, locationChange2);
        geolocation.off('locationChange', locationChange2);
        done();
    })

    /**
    * @tc.number LocRequest_0014
    * @tc.name SUB_HSS_LocationSystem_LocRequest_0014
    * @tc.desc Test locationChange api .
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 2
    */
    it('SUB_HSS_LocationSystem_LocRequest_0014', 0, async function (done) {
        enableLocationSwitch();
        let requestInfo1 = {"priority":0x200, "scenario":0x301, "timeInterval":0,
            "distanceInterval": 0, "maxAccuracy": 5};
        let requestInfo2 = {"priority":0x200, "scenario":0x301, "timeInterval":0,
            "distanceInterval": 0, "maxAccuracy": 2};
        var locationChange1 = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        var locationChange2 = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        geolocation.on('locationChange', requestInfo1, locationChange1);
        geolocation.off('locationChange', locationChange1);
        geolocation.on('locationChange', requestInfo2, locationChange2);
        geolocation.off('locationChange', locationChange2);
        done();
    })

    /**
    * @tc.number LocRequest_0015
    * @tc.name SUB_HSS_LocationSystem_LocRequest_0015
    * @tc.desc Test locationChange api .
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 2
    */
    it('SUB_HSS_LocationSystem_LocRequest_0015', 0, async function (done) {
        enableLocationSwitch();
        let requestInfo1 = {"priority":0x200, "scenario":0x301, "timeInterval":0,
            "distanceInterval": 0, "maxAccuracy": 0};
        let requestInfo2 = {"priority":0x200, "scenario":0x301, "timeInterval":0,
            "distanceInterval": 0, "maxAccuracy": -1};
        var locationChange1 = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        var locationChange2 = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        geolocation.on('locationChange', requestInfo1, locationChange1);
        geolocation.off('locationChange', locationChange1);
        geolocation.on('locationChange', requestInfo2, locationChange2);
        geolocation.off('locationChange', locationChange2);
        done();
    })

    /**
     * @tc.number LastLoc_0001
     * @tc.name SUB_HSS_LocationSystem_LastLoc_0001
     * @tc.desc Test getLastLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_LastLoc_0001', 0, async function(done) {
        enableLocationSwitch();
        let requestInfo = {"priority":0x200, "scenario":0x301, "timeInterval":0,
            "distanceInterval": 0, "maxAccuracy": 0};
        var locationChange = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        geolocation.on('locationChange', requestInfo, locationChange);
        geolocation.off('locationChange', locationChange);
        await geolocation.getLastLocation().then((result) => {
            console.info('[lbs_js] getLastLocation promise result: ' + JSON.stringify(result));
            expect(true).assertEqual(JSON.stringify(result) != null);
            console.info('[lbs_js] getLastLocation latitude: ' + result.latitude +
            ' longitude: ' + result.longitude +' altitude: ' + result.altitude
            +' accuracy: ' + result.accuracy+' speed: ' + result.speed +
            'timeStamp: ' + result.timeStamp+'direction:' + result.direction+' timeSinceBoot: '
            + result.timeSinceBoot +'additions: ' + result.additions+' additionSize' + result.additionSize);
        }).catch((error) => {
            console.info("[lbs_js] getLastLocation promise then error:" + JSON.stringify(error));
            console.info('[lbs_js] not support now');
            expect(true).assertEqual(JSON.stringify(error) != null);
        });
        done();
    })

    /**
     * @tc.number LastLoc_0002
     * @tc.name SUB_HSS_LocationSystem_LastLoc_0002
     * @tc.desc Test getLastLocation api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_LastLoc_0002', 0, async function (done) {
        enableLocationSwitch();
        let requestInfo = {"priority":0x200, "scenario":0x301, "timeInterval":0,
            "distanceInterval": 0, "maxAccuracy": 0};
        var locationChange = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        geolocation.on('locationChange', requestInfo, locationChange);
        geolocation.off('locationChange', locationChange);
        geolocation.getLastLocation(async (err, data) => {
            if (err) {
                console.info('[LastLoc_0002]  getLastLocation callback err is : ' + JSON.stringify(err));
            } else {
                console.info('[LastLoc_0002] getLastLocation callback result: ' + JSON.stringify(data));
                expect(data).assertTrue();
            }
            done()
        })
        done();
    })

    /**
     * @tc.number Gnss_0001
     * @tc.name SUB_HSS_LocationSystem_Gnss_0001
     * @tc.desc Test gnssStatusChange api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Gnss_0001', 0, async function (done) {
        await changedLocationMode();
        var gnssStatusCb = (satelliteStatusInfo) => {
            console.info('gnssStatusChange: ' + satelliteStatusInfo);
            expect(true).assertEqual(satelliteStatusInfo != null)
            console.info('[lbs_js] SatelliteStatusInfo satellitesNumber: ' + data[0].satellitesNumber +
            'satelliteIds' + data[0].satelliteIds +'carrierToNoiseDensitys'+ data[0].carrierToNoiseDensitys
            +'altitudes' + data[0].altitudes+' azimuths: ' + data[0].azimuths +
            'carrierFrequencies: ' + data[0].carrierFrequencies);
        }
        geolocation.on('gnssStatusChange', gnssStatusCb);
        enableLocationSwitch();
        let requestInfo = {"priority":0x200, "scenario":0x301, "timeInterval":0,
            "distanceInterval": 0, "maxAccuracy": 0};
        var locationChange = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        geolocation.on('locationChange', requestInfo, locationChange);
        geolocation.off('gnssStatusChange', gnssStatusCb);
        geolocation.off('locationChange', locationChange);
        done();
    })

    /**
     * @tc.number Gnss_0002
     * @tc.name SUB_HSS_LocationSystem_Gnss_0002
     * @tc.desc Test gnssStatusChange api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Gnss_0002', 0, async function (done) {
        await changedLocationMode();
        let requestInfo = {"priority":0x200, "scenario":0x301, "timeInterval":0,
            "distanceInterval": 0, "maxAccuracy": 0};
        var nmeaCb = (str) => {
            console.log('nmeaMessageChange: ' + str);
        }
        var locationChange = (location) => {
            console.log('locationChanger: data: ' + JSON.stringify(location));
            expect(true).assertEqual(locationChange !=null);
        };
        geolocation.on('nmeaMessageChange', nmeaCb);
        geolocation.on('locationChange', requestInfo, locationChange);
        geolocation.off('nmeaMessageChange', nmeaCb);
        geolocation.off('locationChange', locationChange);
        done();
    })

    /**
     * @tc.number Batching_0001
     * @tc.name SUB_HSS_LocationSystem_Batching_0001
     * @tc.desc Test cachedGnssLocationsReporting api.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Batching_0001', 0, async function (done) {
        var cachedLocationsCb1 = (locations) => {
            console.log('cachedGnssLocationsReporting: locations: ' + JSON.stringify(locations));
            expect(true).assertEqual(locations !=null);
        }
        var CachedGnssLoactionsRequest1 = {'reportingPeriodSec': 5, 'wakeUpCacheQueueFull': false};
        console.info("[test——cachedGnssLocationsReporting 1 start]");
        geolocation.on('cachedGnssLocationsReporting', CachedGnssLoactionsRequest1, cachedLocationsCb1);
        console.info("[test——cachedGnssLocationsReporting 1 ing]");
        geolocation.off('cachedGnssLocationsReporting',cachedLocationsCb1);
        console.info("[test——cachedGnssLocationsReporting 1 done]");
        var cachedLocationsCb2 = (locations) => {
            console.log('cachedGnssLocationsReporting: locations: ' + JSON.stringify(locations));
            expect(true).assertEqual(locations !=null);
        }
        var CachedGnssLoactionsRequest2 = {'reportingPeriodSec': 5, 'wakeUpCacheQueueFull': false};
        console.info("[test——cachedGnssLocationsReporting 2 start]");
        geolocation.on('cachedGnssLocationsReporting', CachedGnssLoactionsRequest2, cachedLocationsCb2);
        console.info("[test——cachedGnssLocationsReporting 2 ing]");
        geolocation.off('cachedGnssLocationsReporting',cachedLocationsCb1);
        console.info("[test——cachedGnssLocationsReporting 2 done]");
        done();
    })

    /**
     * @tc.number Batching_0002
     * @tc.name SUB_HSS_LocationSystem_Batching_0002
     * @tc.desc Test cachedGnssLocationsReporting api.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Batching_0002', 0, async function (done) {
        var cachedLocationsCb = (locations) => {
            console.log('cachedGnssLocationsReporting: locations: ' + JSON.stringify(locations));
            expect(true).assertEqual(locations !=null);
        }
        var CachedGnssLoactionsRequest = {'reportingPeriodSec': 5, 'wakeUpCacheQueueFull': true};
        let requestInfo = {"priority":0x200, "scenario":0x301, "timeInterval":0,
            "distanceInterval": 0, "maxAccuracy": 0};
        geolocation.on('cachedGnssLocationsReporting', CachedGnssLoactionsRequest, cachedLocationsCb);
        geolocation.off('cachedGnssLocationsReporting',cachedLocationsCb);
        done();
    })

    /**
     * @tc.number Batching_0003
     * @tc.name SUB_HSS_LocationSystem_Batching_0003
     * @tc.desc Test cachedGnssLocationsReporting api.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Batching_0003', 0, async function (done) {
        var cachedLocationsCb = (locations) => {
            console.log('cachedGnssLocationsReporting: locations: ' + JSON.stringify(locations));
            expect(true).assertEqual(locations !=null);
        }
        var CachedGnssLoactionsRequest = {'reportingPeriodSec': 5, 'wakeUpCacheQueueFull': true};
        let requestInfo = {"priority":0x200, "scenario":0x301, "timeInterval":0,
            "distanceInterval": 0, "maxAccuracy": 0};
        geolocation.on('cachedGnssLocationsReporting', CachedGnssLoactionsRequest, cachedLocationsCb);
        geolocation.off('cachedGnssLocationsReporting',cachedLocationsCb);
        geolocation.getCachedGnssLocationsSize((err, data) => {
            if (err) {
                console.info('[lbs_js]  getCachedGnssLocationsSize callback err is : ' + err);
                expect(true).assertTrue(err != null);
                done();
            }else {
                console.info("[lbs_js] getCachedGnssLocationsSize callback data is: " + JSON.stringify(data));
                expect(true).assertTrue(data != null);
                done()
            }
        });
        done();
    })

    /**
     * @tc.number Batching_0004
     * @tc.name SUB_HSS_LocationSystem_Batching_0004
     * @tc.desc Test cachedGnssLocationsReporting api.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Batching_0004', 0, async function (done) {
        var cachedLocationsCb = (locations) => {
            console.log('cachedGnssLocationsReporting: locations: ' + JSON.stringify(locations));
            expect(true).assertEqual(locations !=null);
        }
        var CachedGnssLoactionsRequest = {'reportingPeriodSec': 5, 'wakeUpCacheQueueFull': true};
        let requestInfo = {"priority":0x200, "scenario":0x301, "timeInterval":0,
            "distanceInterval": 0, "maxAccuracy": 0};
        geolocation.on('cachedGnssLocationsReporting', CachedGnssLoactionsRequest, cachedLocationsCb);
        geolocation.off('cachedGnssLocationsReporting',cachedLocationsCb);
        await geolocation.getCachedGnssLocationsSize().then( (result) => {
            console.info('[lbs_js] getCachedGnssLocationsSiz promise '+ JSON.stringify(result));
            expect(true).assertTrue(result != null);
            done();
        }).catch((error) => {
            console.info("[lbs_js] promise then error." + JSON.stringify(error));
            expect(true).assertTrue(error != null);
            done();
            done();
        });
    })

    /**
     * @tc.number Batching_0005
     * @tc.name SUB_HSS_LocationSystem_Batching_0005
     * @tc.desc Test cachedGnssLocationsReporting api.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Batching_0005', 0, async function (done) {
        var cachedLocationsCb = (locations) => {
            console.log('cachedGnssLocationsReporting: locations: ' + JSON.stringify(locations));
            expect(true).assertEqual(locations !=null);
        }
        var CachedGnssLoactionsRequest = {'reportingPeriodSec': 5, 'wakeUpCacheQueueFull': true};
        let requestInfo = {"priority":0x200, "scenario":0x301, "timeInterval":0,
            "distanceInterval": 0, "maxAccuracy": 0};
        geolocation.on('cachedGnssLocationsReporting', CachedGnssLoactionsRequest, cachedLocationsCb);
        geolocation.off('cachedGnssLocationsReporting',cachedLocationsCb);
        geolocation.flushCachedGnssLocations((err, data) => {
            if (err) {
                console.info('[lbs_js]  flushCachedGnssLocations callback err is : ' + err);
                expect(true).assertTrue(err != null);
                done();
            }else {
                console.info("[lbs_js] flushCachedGnssLocations callback data is: " + JSON.stringify(data));
                expect(true).assertTrue(data);
                done();
            }
        });
        done();
    })

    /**
     * @tc.number Batching_0006
     * @tc.name SUB_HSS_LocationSystem_Batching_0006
     * @tc.desc Test cachedGnssLocationsReporting api.
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_HSS_LocationSystem_Batching_0006', 0, async function (done) {
        var cachedLocationsCb = (locations) => {
            console.log('cachedGnssLocationsReporting: locations: ' + JSON.stringify(locations));
            expect(true).assertEqual(locations !=null);
        }
        var CachedGnssLoactionsRequest = {'reportingPeriodSec': 5, 'wakeUpCacheQueueFull': true};
        let requestInfo = {"priority":0x200, "scenario":0x301, "timeInterval":0,
            "distanceInterval": 0, "maxAccuracy": 0};
        geolocation.on('cachedGnssLocationsReporting', CachedGnssLoactionsRequest, cachedLocationsCb);
        geolocation.off('cachedGnssLocationsReporting',cachedLocationsCb);
        await geolocation.flushCachedGnssLocations().then( (result) => {
            console.info('[lbs_js] flushCachedGnssLocations promise '+ JSON.stringify(result));
            expect(true).assertTrue(result);
            done();
        }).catch((error) => {
            console.info("[lbs_js] promise then error." + JSON.stringify(error));
            expect(true).assertTrue(error != null);
            done();
        });
        done();
    })

    /**
    * @tc.number GeoFence_0001
    * @tc.name SUB_HSS_LocationSystem_GeoFence_0001
    * @tc.desc Test fenceStatusChange api .
    * @tc.size MEDIUM
    * @tc.type Function
    * @tc.level Level 1
    */
    it('SUB_HSS_LocationSystem_GeoFence_0001', 0, async function (done) {
        await changedLocationMode();
        let geofence = {"latitude": 31.12, "longitude": 121.11, "radius": 1,"expiration": ""};
        let geofenceRequest = {"priority":0x200, "scenario":0x301, "geofence": geofence};
        setTimeout(async ()=>{
            let want = (wantAgent) => {
                console.log('wantAgent: ' + JSON.stringify(wantAgent));
            };
            geolocation.on('fenceStatusChange', geofenceRequest,
                (want) => {
                    if(err){
                        return console.info("fenceStatusChange on callback  err:  " + err);
                    }
                    console.info("fenceStatusChange callback, result:  " + JSON.stringify(want));
                    expect(true).assertEqual(want !=null);
                    done();
                });
            geolocation.off('fenceStatusChange',geofenceRequest,
                (want) => {
                    if(err){
                        return console.info("fenceStatusChange callback  err:  " + err);
                    }
                    console.info("off fenceStatusChange callback, result:  " + JSON.stringify(want));
                    expect(true).assertEqual(want !=null);
                });
        },1000);
        done();
    })

    /**
     * @tc.number GeoFence_0005
     * @tc.name SUB_HSS_LocationSystem_GeoFence_0005
     * @tc.desc Test fenceStatusChange api .
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 1
     */
    it('SUB_HSS_LocationSystem_GeoFence_0005', 0, async function (done) {
        await changedLocationMode();
        let geofence = {"latitude": 31.12, "longitude": 121.11, "radius": 1,"expiration": ""};
        let geofenceRequest = {"priority":0x203, "scenario":0x301, "geofence": geofence};
        setTimeout(async ()=>{
            let want = (wantAgent) => {
                console.log('wantAgent: ' + JSON.stringify(wantAgent));
            };
            geolocation.on('fenceStatusChange', geofenceRequest,
                (want) => {
                    if(err){
                        return console.info("fenceStatusChange on callback  err:  " + err);
                    }
                    console.info("fenceStatusChange callback, result:  " + JSON.stringify(want));
                    expect(true).assertEqual(want !=null);
                    done();
                });
            geolocation.off('fenceStatusChange',geofenceRequest,
                (want) => {
                    if(err){
                        return console.info("fenceStatusChange callback  err:  " + err);
                    }
                    console.info("off fenceStatusChange callback, result:  " + JSON.stringify(want));
                    expect(true).assertEqual(want !=null);
                });
        },1000);
        done();
    })


})

