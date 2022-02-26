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
import app from '@system.app'
import geofence from '@ohos.geofence';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('msdpInfoTest', function () {
       /*
         * @tc.number Geofence_001
         * @tc.name 设备状态状态的订阅和去订阅
         * @tc.callback:AsyncCallback<PointGeofenceResponse>
         * Normal
         */
        it('msdp_test_geo_fence_001', 0, async function (done) {
            console.log("msdp_test_geo_fence_001 start")
     geofence.onPoint(geofence.GeofenceType.GEOFENCE_OPTION_ADD_POINT_GEOFENCE, {centerCoordinate: [1,2], radius: 1.0}, (data) => {
                expect(data.GeofenceValue !== -1).assertTrue();
                console.log("msdp_test_geo_fence_001 on success");
                console.log("msdp_test_geofence=" + JSON.stringify(data));
     geofence.offPoint(geofence.GeofenceType.GEOFENCE_OPTION_ADD_POINT_GEOFENCE, {centerCoordinate: [1,2], radius: 1.0}, () => {

                    console.log("msdp_test_geo_fence_001 off success");
                    done();
                });
            })
        })

        it('msdp_test_geo_fence_002', 0, async function(done) {
            console.log("msdp_test_geo_fence_002 start")
            geofence.offPoint(3, {centerCoordinate: [1,2], radius: 1.0}, () => {
                console.log("msdp_test_geo_fence_002 off failed");
                done();
                console.log("msdp_test_geo_fence_002 success");
            })
        })

        it('msdp_test_geo_fence_003', 0, async function(done) {
            console.log("msdp_test_geo_fence_003 start")
            geofence.offPoint(-1, {centerCoordinate: [1,2], radius: 1.0}, () => {
                console.log("msdp_test_geo_fence_003 off failed");
                done();
                console.log("msdp_test_geo_fence_003 success");
            })
        })

        /**
         * @tc.number Geofence_004
         * @tc.name 设备状态状态的订阅和去订阅
         * @tc.callback:AsyncCallback<HighStillResponse> 判断设备是否处于高度静止状态
         * Normal
         */
        it('msdp_test_geo_fence_004', 0, async function(done) {
            console.log("msdp_test_geo_fence_004 start");
     geofence.onSet(geofence.GeofenceType.GEOFENCE_OPTION_NO_MORE_REMINDERS, 10);
            done();
            console.log("msdp_test_geo_fence_004 once success");
        })

        /**
         * @tc.number DeviceStatus_005
         * @tc.name 设备状态状态的订阅和去订阅
         * @tc.callback:AsyncCallback<HighStillResponse>
         * -1
         */
        it('msdp_test_geo_fence_005', 0, async function(done) {
            console.log("msdp_test_geo_fence_005 start");
            geofence.onSet(-1, 10);
            done();
            console.log("msdp_test_geo_fence_005 success");
        })

        /**
         * @tc.number Geofence_006
         * @tc.name 设备状态状态的订阅和去订阅
         * @tc.callback:AsyncCallback<FineStillResponse> 判断设备是否处于相对静止状态
         * Normal
         */
        it('msdp_test_geo_fence_006', 0, async function(done) {
            console.log("msdp_test_geo_fence_006_2 start");
     geofence.onPoi(geofence.GeofenceType.GEOFENCE_OPTION_ADD_POI_GEOFENCE, {keyword:"xinghaiguangchang" , poiType: "guangcahng",poiCity:"dalian"}, (data) => {
                console.log('data_006='+JSON.stringify(data))
                expect(data.GeofenceValue !== -1).assertTrue();
     geofence.offPoi(geofence.GeofenceType.GEOFENCE_OPTION_ADD_POI_GEOFENCE, {keyword:"xinghaiguangchang" , poiType: "guangcahng",poiCity:"dalian"}, () => {
                    console.log("msdp_test_geo_fence_006 off success");
                    console.log("msdp_test_geo_fence_006 success");
                    done();
                })
            })
        })

        it('msdp_test_geo_fence_008', 0, async function(done) {
            console.log("msdp_test_geo_fence_008 start");
            geofence.offPoi(-1, {centerCoordinate: [1,2], radius: 1.0}, () => {
                console.log("msdp_test_geo_fence_008 off failed");
                done();
                console.log("msdp_test_geo_fence_008 success");
            })
        })

        /**
         * @tc.number DeviceStatus_008
         * @tc.name 设备状态的实时查询
         * @tc.callback:AsyncCallback<HighStillResponse> 判断设备是否处于高度静止状态
         * Cycle
        */
        it('msdp_test_geo_fence_009', 0, async function(done) {
            console.log("msdp_test_geo_fence_009 start");
            for (let i = 0; i < 10 ;i ++) {
                console.log('case9_for='+i)
     geofence.onPoi(geofence.GeofenceType.GEOFENCE_OPTION_ADD_POI_GEOFENCE, {keyword:"xinghaiguangchang" , poiType: "guangcahng",poiCity:"dalian"}, (data) => {
                    console.log('data_009='+JSON.stringify(data))
                    expect(data.GeofenceValue !== -1).assertTrue();
     geofence.offPoi(geofence.GeofenceType.GEOFENCE_OPTION_ADD_POI_GEOFENCE, {keyword:"xinghaiguangchang" , poiType: "guangcahng",poiCity:"dalian"}, () => {
                        console.log("msdp_test_geo_fence_009 off success");
                        done();
                        console.log("msdp_test_geo_fence_009 success");
                    })
                })
            }
        })

        it('msdp_test_geo_fence_010', 0, async function(done) {
            console.log("msdp_test_geo_fence_010 start");

            for (let i = 0; i < 10 ;i ++) {
                console.log("msdp_test_geo_fence_010.2 start")
     geofence.onPoint(geofence.GeofenceType.GEOFENCE_OPTION_ADD_POINT_GEOFENCE, {centerCoordinate: [1,2], radius: 1.0}, (data) => {
                    expect(data.GeofenceValue !== -1).assertTrue();
                    console.log("msdp_test_geo_fence_010 on success");
                    console.log("msdp_test_geofence=" + JSON.stringify(data));
     geofence.offPoint(geofence.GeofenceType.GEOFENCE_OPTION_ADD_POINT_GEOFENCE, {centerCoordinate: [1,2], radius: 1.0}, () => {

                        console.log("msdp_test_geo_fence_010 off success");
                        done();
                    });
                })
            }
        })
})


