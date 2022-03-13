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
import devicestatus from '@ohos.devicestatus';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'


describe('msdpInfoTest', function () {

    /**
     * @tc.number DeviceStatus_001
     * @tc.name 
     * @tc.callback:AsyncCallback<HighStillResponse> 
     * Normal
     */
    it('msdp_test_devices_status_001',0, async function(done) {
        console.log("device_status_type_001 start")
        devicestatus.on(devicestatus.DevicestatusType.TYPE_HIGH_STILL,(data) => {
            expect(data.devicestatusValue !== -1).assertTrue();
            //unregister
            devicestatus.off(devicestatus.DevicestatusType.TYPE_HIGH_STILL,() => {
                console.log("msdp_test_devices_status_001 off success");
                done();
                console.log("msdp_test_devices_status_001 success");
            })
        })
    })

    /**
     * @tc.number DeviceStatus_002
     * @tc.name 
     * @tc.callback:AsyncCallback<HighStillResponse>
     * -1 
     */
    it('msdp_test_devices_status_002',0, async function(done) {
        console.log("msdp_test_devices_status_002 start");
        devicestatus.on(-1,(data) => {
            expect(data.devicestatusValue == -1).assertTrue();
            done();
            console.log("msdp_test_devices_status_002 on success");
        })
        console.log("msdp_test_devices_status_002 success");
    })

    /**
     * @tc.number DeviceStatus_003
     * @tc.name 
     * @tc.callback:AsyncCallback<HighStillResponse>  
     * -1 
     */
    it('msdp_test_devices_status_003',0, async function(done) {
        console.log("msdp_test_devices_status_003 start")
        devicestatus.off(-1,() => {
            console.log("msdp_test_devices_status_003 off failed");
            done();
            console.log("msdp_test_devices_status_003 success");
        })
    })

    /**
     * @tc.number DeviceStatus_004
     * @tc.name 
     * @tc.callback:AsyncCallback<HighStillResponse>
     * -1 
     */
    it('msdp_test_devices_status_004',0, async function(done) {
        console.log("msdp_test_devices_status_004 start");
        devicestatus.once(devicestatus.DevicestatusType.TYPE_HIGH_STILL,(data) => {
            expect(data.devicestatusValue == -1).assertTrue();
            done();
            console.log("msdp_test_devices_status_004 once success");
        })
    })

    /**
     * @tc.number DeviceStatus_005
     * @tc.name 
     * @tc.callback:AsyncCallback<HighStillResponse>
     * -1 
     */
    it('msdp_test_devices_status_005',0, async function(done) {
        console.log("msdp_test_devices_status_005 start");
        devicestatus.once(-1,(data) => {
            expect(data.devicestatusValue == -1).assertTrue();
            done();
            console.log("msdp_test_devices_status_002 once success");
        })
        console.log("msdp_test_devices_status_002 success");
    })

    /**
     * @tc.number DeviceStatus_006
     * @tc.name 
     * @tc.callback:AsyncCallback<FineStillResponse>
     */
    it('device_status_type_006',0, async function(done) {
        console.log("device_status_type_006 start");
        devicestatus.on(devicestatus.DevicestatusType.TYPE_FINE_STILL,(data) => {
            expect(data.devicestatusValue !== -1).assertTrue();
            devicestatus.off(devicestatus.DevicestatusType.TYPE_FINE_STILL,() => {
                console.log("device_status_type_006 off success");
                done();
                console.log("device_status_type_006 success");
            })
        })
    })

    /**
     * @tc.number DeviceStatus_007
     * @tc.name 
     * @tc.callback:AsyncCallback<CarBluetoothResponse>
     */
    it('device_status_type_007',0, async function(done) {
        console.log("device_status_type_007 start");
        devicestatus.on(devicestatus.DevicestatusType.TYPE_CAR_BLUETOOTH,(data)=>{
            expect(data.devicestatusValue !== -1).assertTrue();
            devicestatus.off(devicestatus.DevicestatusType.TYPE_CAR_BLUETOOTH,()=>{
                console.log("device_status_type_007 off success");
                done();
                console.log("device_status_type_007 success");
            })
        })
    })

    /**
     * @tc.number DeviceStatus_008
     * @tc.name 设备状态的实时查询
     * @tc.callback:AsyncCallback<HighStillResponse>
     * Cycle
    */
    it('device_status_type_008',0, async function(done) {
        console.log("device_status_type_008 start");
        for (let i = 0; i < 10 ;i ++) {
            devicestatus.on(devicestatus.DevicestatusType.TYPE_HIGH_STILL,(data) => {
                expect(data.devicestatusValue !== -1).assertTrue();
                devicestatus.off(devicestatus.DevicestatusType.TYPE_HIGH_STILL,()=>{
                    console.log("device_status_type_008 off success")
                    done();
                    console.log("device_status_type_007 success");
                });
            })
        }
    })

    /**
     * @tc.number DeviceStatus_009
     * @tc.name
     * @tc.callback:AsyncCallback<HighStillResponse>
     * Cycle
    */
    it('device_status_type_009',0, async function(done) {
        console.log("device_status_type_009 start");
        for (let i = 0; i < 10 ;i ++) {
            devicestatus.on(devicestatus.DevicestatusType.TYPE_FINE_STILL,(data) => {
                expect(data.devicestatusValue !== -1).assertTrue();
                devicestatus.off(devicestatus.DevicestatusType.TYPE_FINE_STILL,() => {
                    console.log("device_status_type_009 off success");
                    done();
                    console.log("device_status_type_009 success");
                })
            })
        }
    })

    /**
     * @tc.number device_status_type_010
     * @tc.name
     * @tc.callback:AsyncCallback<HighStillResponse>
     * Cycle
    */
     it('device_status_type_010',0, async function(done) {
        console.log("device_status_type_010 start");
        for (let i = 0; i < 10 ;i ++) {
            devicestatus.on(devicestatus.DevicestatusType.TYPE_CAR_BLUETOOTH,(data) => {
                expect(data.devicestatusValue !== -1).assertTrue();
                devicestatus.off(devicestatus.DevicestatusType.TYPE_CAR_BLUETOOTH,() => {
                    console.log("device_status_type_010 off success");
                    done();
                    console.log("device_status_type_010 success");
                })
            })
        }
    })
})


