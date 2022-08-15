/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http:// www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import audio from '@ohos.multimedia.audio';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index';

describe('audioEM', function () {
    console.info('AudioFrameworkTest: Create AudioManger Object JS Framework');
    const audioManager = audio.getAudioManager();
    var deviceRoleValue = null;
    var deviceTypeValue = null;
    function sleep (ms) {
        return new Promise(resolve => setTimeout(resolve, ms));
    }

    function displayDeviceProp(value, index, array) {
        var devRoleName;
        var devTypeName;
        if (value.deviceRole==1) {
            devRoleName = 'INPUT_DEVICE';
        }
        else if (value.deviceRole==2) {
            devRoleName = 'OUTPUT_DEVICE ';
        }
        else {
            devRoleName = 'ERROR : UNKNOWN : '+value.deviceRole;
        }

        if (value.deviceType == 1) {
            devTypeName = 'EARPIECE';
        }
        else if (value.deviceType == 2){
            devTypeName = 'SPEAKER';
        }
        else if (value.deviceType == 3){
            devTypeName = 'WIRED_HEADSET';
        }
        else if (value.deviceType == 8){
            devTypeName = 'BLUETOOTH_A2DP';
        }
        else if (value.deviceType == 15){
            devTypeName = 'MIC';
        }
        else {
            devTypeName = 'ERROR : UNKNOWN :'+value.deviceType;
        }

        console.info(`AudioFrameworkTest: device role: ${devRoleName}`);
        deviceRoleValue = value.deviceRole;
        console.info(`AudioFrameworkTest: device type: ${devTypeName}`);
        deviceTypeValue = value.deviceType;

    }

    beforeAll(function () {
        console.info('AudioFrameworkTest: beforeAll: Prerequisites at the test suite level');
    })

    beforeEach(function () {
        console.info('AudioFrameworkTest: beforeEach: Prerequisites at the test case level');
    })

    afterEach(async function () {
        console.info('AudioFrameworkTest: afterEach: Test case-level clearance conditions');
        await sleep(1000);
    })

    afterAll(async function () {
        console.info('AudioFrameworkTest: afterAll: Test suite-level cleanup condition');

    })


    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_getAudioManger_001
                * @tc.name      : getAudioManger is Not returned Empty
                * @tc.desc      : Check getAudioManger is not empty
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_getAudioManger_001', 0, function (done) {
        if(audioManager!=null){
            console.info('AudioFrameworkTest: getAudioManger : PASS');
            expect(true).assertTrue();
        }
        else{
            console.info('AudioFrameworkTest: getAudioManger : FAIL');
            expect(false).assertTrue();
        }
        done();
    })


    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_PR_getDevices_output_001
                * @tc.name      : getDevices - Output device - Promise - ENAME
                * @tc.desc      : getDevices - Output device
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_PR_getDevices_output_001', 0, async function (done) {
        deviceRoleValue = null;
        deviceTypeValue = null;
        const promise = audioManager.getDevices(audio.DeviceFlag.OUTPUT_DEVICES_FLAG)
        promise.then(function (value) {

            console.info('AudioFrameworkTest: Promise: getDevices OUTPUT_DEVICES_FLAG');
            value.forEach(displayDeviceProp);
            if (deviceTypeValue != null && deviceRoleValue != null){
                console.info('AudioFrameworkTest: Promise: getDevices : OUTPUT_DEVICES_FLAG :  PASS');
                expect(true).assertTrue();
            }
            else{
                console.info('AudioFrameworkTest: Promise: getDevices : OUTPUT_DEVICES_FLAG :  FAIL');
                expect(false).assertTrue();
            }
        });
        await promise;
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_PR_getDevices_output_enum_002
                * @tc.name      : getDevices - Output device - Promise - ENAME -
                * @tc.desc      : getDevices - Output device
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_PR_getDevices_output_enum_002', 0, async function (done) {
        deviceRoleValue = null;
        deviceTypeValue = null;
        const promise = audioManager.getDevices(1)
        promise.then(function (value) {

            console.info('AudioFrameworkTest: Promise: getDevices OUTPUT_DEVICES_FLAG');
            value.forEach(displayDeviceProp);
            if (deviceTypeValue != null && deviceRoleValue != null){
                console.info('AudioFrameworkTest: Promise: getDevices : OUTPUT_DEVICES_FLAG :  PASS');
                expect(true).assertTrue();
            }
            else{
                console.info('AudioFrameworkTest: Promise: getDevices : OUTPUT_DEVICES_FLAG :  FAIL');
                expect(false).assertTrue();
            }
        });
        await promise;
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_PR_getDevices_input_003
                * @tc.name      : getDevices - Input device - Promise - ENAME
                * @tc.desc      : getDevices - Input device
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_PR_getDevices_input_003', 0, async function (done) {
        deviceRoleValue = null;
        deviceTypeValue = null;
        const promise = audioManager.getDevices(audio.DeviceFlag.INPUT_DEVICES_FLAG);
        promise.then(function (value) {
            console.info('AudioFrameworkTest: Promise: getDevices INPUT_DEVICES_FLAG');
            value.forEach(displayDeviceProp);
            if (deviceTypeValue != null && deviceRoleValue != null){
                console.info('AudioFrameworkTest: Promise: getDevices : INPUT_DEVICES_FLAG :  PASS');
                expect(true).assertTrue();
            }
            else{
                console.info('AudioFrameworkTest: Promise: getDevices : INPUT_DEVICES_FLAG :  FAIL');
                expect(false).assertTrue();
            }
        });
        await promise;
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_PR_getDevices_input_enum_004
                * @tc.name      : getDevices - Input device - Promise - ENAME
                * @tc.desc      : getDevices - Input device
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_PR_getDevices_input_enum_004', 0, async function (done) {
        deviceRoleValue = null;
        deviceTypeValue = null;
        const promise = audioManager.getDevices(2);
        promise.then(function (value) {
            console.info('AudioFrameworkTest: Promise: getDevices INPUT_DEVICES_FLAG');
            value.forEach(displayDeviceProp);

            if (deviceTypeValue != null && deviceRoleValue != null){
                console.info('AudioFrameworkTest: Promise: getDevices : INPUT_DEVICES_FLAG :  PASS');
                expect(true).assertTrue();
            }
            else{
                console.info('AudioFrameworkTest: Promise: getDevices : INPUT_DEVICES_FLAG :  FAIL');
                expect(false).assertTrue();
            }
        });
        await promise;
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_PR_getDevices_all_005
                * @tc.name      : getDevices - ALL device - Promise - ENAME
                * @tc.desc      : getDevices - ALL device
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_PR_getDevices_all_005', 0, async function (done) {
        deviceRoleValue = null;
        deviceTypeValue = null;
        const promise = audioManager.getDevices(audio.DeviceFlag.ALL_DEVICES_FLAG);
        promise.then(function (value) {
            console.info('AudioFrameworkTest: Promise: getDevices ALL_DEVICES_FLAG');
            value.forEach(displayDeviceProp);

            if (deviceTypeValue != null && deviceRoleValue != null){
                console.info('AudioFrameworkTest: Promise: getDevices : ALL_DEVICES_FLAG :  PASS');
                expect(true).assertTrue();
            }
            else{
                console.info('AudioFrameworkTest: Promise: getDevices : ALL_DEVICES_FLAG :  FAIL');
                expect(false).assertTrue();
            }
        });
        await promise;
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_PR_getDevices_all_enum_006
                * @tc.name      : getDevices - ALL device - Promise - ENAME
                * @tc.desc      : getDevices - ALL device
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_PR_getDevices_all_enum_006', 0, async function (done) {
        deviceRoleValue = null;
        deviceTypeValue = null;
        const promise = audioManager.getDevices(3);
        promise.then(function (value) {
            console.info('AudioFrameworkTest: Promise: getDevices ALL_DEVICES_FLAG');
            value.forEach(displayDeviceProp);

            if (deviceTypeValue != null && deviceRoleValue != null){
                console.info('AudioFrameworkTest: Promise: getDevices : ALL_DEVICES_FLAG :  PASS');
                expect(true).assertTrue();
            }
            else{
                console.info('AudioFrameworkTest: Promise: getDevices : ALL_DEVICES_FLAG :  FAIL');
                expect(false).assertTrue();
            }
        });
        await promise;
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_CB_getDevices_OUT_007
                * @tc.name      : getDevices - Output device - Callback - ENAME
                * @tc.desc      : getDevices - Output device
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_CB_getDevices_OUT_007', 0, async function (done) {
        deviceRoleValue = null;
        deviceTypeValue = null;
        audioManager.getDevices(audio.DeviceFlag.OUTPUT_DEVICES_FLAG, (err, value) => {
            console.info('AudioFrameworkTest: Callback: getDevices OUTPUT_DEVICES_FLAG');
            if (err) {
                console.error(`AudioFrameworkTest: Callback: OUTPUT_DEVICES_FLAG: failed to get devices ${err.message}`);
                expect().assertFail();
            }
            else{
                console.info('AudioFrameworkTest: Callback: getDevices OUTPUT_DEVICES_FLAG');
                value.forEach(displayDeviceProp);
                if (deviceTypeValue != null && deviceRoleValue != null){
                    console.info('AudioFrameworkTest: Callback: getDevices : OUTPUT_DEVICES_FLAG :  PASS');
                    expect(true).assertTrue();
                }
                else{
                    console.info('AudioFrameworkTest: Callback: getDevices : OUTPUT_DEVICES_FLAG :  FAIL');
                    expect(false).assertTrue();
                }
            }
            done();
        });
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_CB_getDevices_OUT_ENUM_008
                * @tc.name      : getDevices - Output device - Callback - ENAME
                * @tc.desc      : getDevices - Output device
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_CB_getDevices_OUT_ENUM_008', 0, async function (done) {
        deviceRoleValue = null;
        deviceTypeValue = null;
        audioManager.getDevices(1, (err, value) => {
            console.info('AudioFrameworkTest: Callback: getDevices OUTPUT_DEVICES_FLAG');
            if (err) {
                console.error(`AudioFrameworkTest: Callback: OUTPUT_DEVICES_FLAG: failed to get devices ${err.message}`);
                expect().assertFail();
            }
            else{
                console.info('AudioFrameworkTest: Callback: getDevices OUTPUT_DEVICES_FLAG');
                value.forEach(displayDeviceProp);
                if (deviceTypeValue != null && deviceRoleValue != null){
                    console.info('AudioFrameworkTest: Callback: getDevices : OUTPUT_DEVICES_FLAG :  PASS');
                    expect(true).assertTrue();
                }
                else{
                    console.info('AudioFrameworkTest: Callback: getDevices : OUTPUT_DEVICES_FLAG :  FAIL');
                    expect(false).assertTrue();
                }
            }
            done();
        });
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_CB_getDevices_INPUT_009
                * @tc.name      : getDevices - Input device - Callback - ENAME
                * @tc.desc      : getDevices - Input device
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_CB_getDevices_INPUT_009', 0, async function (done) {
        deviceRoleValue = null;
        deviceTypeValue = null;
        audioManager.getDevices(audio.DeviceFlag.INPUT_DEVICES_FLAG, (err, value) => {
            console.info('AudioFrameworkTest: Callback: getDevices INPUT_DEVICES_FLAG');
            if (err) {
                console.error(`AudioFrameworkTest: Callback: INPUT_DEVICES_FLAG: failed to get devices ${err.message}`);
                expect().assertFail();
            }
            else{
                console.info('AudioFrameworkTest: Callback: getDevices INPUT_DEVICES_FLAG');
                value.forEach(displayDeviceProp);

                if (deviceTypeValue != null && deviceRoleValue != null){
                    console.info('AudioFrameworkTest: Callback: getDevices : INPUT_DEVICES_FLAG:  PASS');
                    expect(true).assertTrue();
                }
                else{
                    console.info('AudioFrameworkTest: Callback: getDevices : INPUT_DEVICES_FLAG:  FAIL');
                    expect(false).assertTrue();
                }
            }
            done();
        });
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_CB_getDevices_INPUT_ENUM_010
                * @tc.name      : getDevices - Input device - Callback - ENAME
                * @tc.desc      : getDevices - Input device
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_CB_getDevices_INPUT_ENUM_010', 0, async function (done) {
        deviceRoleValue = null;
        deviceTypeValue = null;
        audioManager.getDevices(2, (err, value) => {
            console.info('AudioFrameworkTest: Callback: getDevices INPUT_DEVICES_FLAG');
            if (err) {
                console.error(`AudioFrameworkTest: Callback: INPUT_DEVICES_FLAG: failed to get devices ${err.message}`);
                expect().assertFail();
            }
            else{
                console.info('AudioFrameworkTest: Callback: getDevices INPUT_DEVICES_FLAG');
                value.forEach(displayDeviceProp);

                if (deviceTypeValue != null && deviceRoleValue != null){
                    console.info('AudioFrameworkTest: Callback: getDevices : INPUT_DEVICES_FLAG:  PASS');
                    expect(true).assertTrue();
                }
                else{
                    console.info('AudioFrameworkTest: Callback: getDevices : INPUT_DEVICES_FLAG:  FAIL');
                    expect(false).assertTrue();
                }
            }
            done();
        });
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_CB_getDevices_All_011
                * @tc.name      : getDevices - ALL device - Callback - ENAME
                * @tc.desc      : getDevices - ALL device
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_getDevices_All_011', 0, async function (done) {
        deviceRoleValue = null;
        deviceTypeValue = null;
        audioManager.getDevices(audio.DeviceFlag.ALL_DEVICES_FLAG, (err, value) => {
            console.info('AudioFrameworkTest: Callback: getDevices ALL_DEVICES_FLAG');
            if (err) {
                console.error(`AudioFrameworkTest: Callback: ALL_DEVICES_FLAG: failed to get devices ${err.message}`);
                expect().assertFail();
            }
            else{
                console.info('AudioFrameworkTest: Callback: getDevices ALL_DEVICES_FLAG');
                value.forEach(displayDeviceProp);
                if (deviceTypeValue != null && deviceRoleValue != null){
                    console.info('AudioFrameworkTest: Callback: getDevices : ALL_DEVICES_FLAG:  PASS');
                    expect(true).assertTrue();
                }
                else{
                    console.info('AudioFrameworkTest: Callback: getDevices : ALL_DEVICES_FLAG:  FAIL');
                    expect(false).assertTrue();
                }
            }
            done();
        });
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_CB_getDevices_All_ENUM_012
                * @tc.name      : getDevices - ALL device - Callback - ENAME
                * @tc.desc      : getDevices - ALL device
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_CB_getDevices_All_ENUM_012', 0, async function (done) {
        deviceRoleValue = null;
        deviceTypeValue = null;
        audioManager.getDevices(3, (err, value) => {
            console.info('AudioFrameworkTest: Callback: getDevices ALL_DEVICES_FLAG');
            if (err) {
                console.error(`AudioFrameworkTest: Callback: ALL_DEVICES_FLAG: failed to get devices ${err.message}`);
                expect().assertFail();
            }
            else{
                console.info('AudioFrameworkTest: Callback: getDevices ALL_DEVICES_FLAG');
                value.forEach(displayDeviceProp);
                if (deviceTypeValue != null && deviceRoleValue != null){
                    console.info('AudioFrameworkTest: Callback: getDevices : ALL_DEVICES_FLAG:  PASS');
                    expect(true).assertTrue();
                }
                else{
                    console.info('AudioFrameworkTest: Callback: getDevices : ALL_DEVICES_FLAG:  FAIL');
                    expect(false).assertTrue();
                }
            }
            done();
        });
    })
   
    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_setDeviceActive_PR_Deactivate_015
                * @tc.name      : setDeviceActive - SPEAKER - deactivate - Promise
                * @tc.desc      : Deactivate speaker - Promise
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_setDeviceActive_PR_Deactivate_015', 0, async function (done) {
        await audioManager.setDeviceActive(audio.ActiveDeviceType.SPEAKER,false).then(function (){
            // Setting device active ENUM 2 = SPEAKER
            console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : SPEAKER: Deactivate');
            audioManager.isDeviceActive(audio.ActiveDeviceType.SPEAKER).then(function (value){
                if(value==false){
                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : SPEAKER: Deactivate : PASS :' +value);
                    expect(true).assertTrue();
                }
                else{
                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : SPEAKER: Deactivate : FAIL :' +value);
                    expect(false).assertTrue();
                }
            });
        }).catch((err) => {
            console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : SPEAKER: Deactivate : FAIL : Error :' + err.message);
            expect(false).assertTrue();
        });
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_setDeviceActive_PR_Deactivate_ENUM_016
                * @tc.name      : setDeviceActive - SPEAKER - deactivate - Promise
                * @tc.desc      : Deactivate speaker - Promise
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_setDeviceActive_PR_Deactivate_ENUM_016', 0, async function (done) {
        await audioManager.setDeviceActive(2,true).then(function (){
            console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : SPEAKER: Active');
        });
        await audioManager.setDeviceActive(2,false).then(function (){
            // Setting device active ENUM 2 = SPEAKER
            console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : SPEAKER: Deactivate');
            audioManager.isDeviceActive(2).then(function (value){
                if(value==false){
                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : SPEAKER: Deactivate : PASS :' +value);
                    expect(true).assertTrue();
                }
                else{
                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : SPEAKER: Deactivate : FAIL :' +value);
                    expect(false).assertTrue();
                }
            });
        }).catch((err) => {
            console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : SPEAKER: Deactivate : FAIL : Error :' + err.message);
            expect(false).assertTrue();
        });
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_setDeviceActive_PR_Activate_017
                * @tc.name      : setDeviceActive - SPEAKER - Activate - Promise
                * @tc.desc      : Activate speaker - Promise
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_setDeviceActive_PR_Activate_017', 0, async function (done) {
        await audioManager.setDeviceActive(audio.ActiveDeviceType.SPEAKER,true).then(function (){
            console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : SPEAKER: Activate');
            audioManager.isDeviceActive(audio.ActiveDeviceType.SPEAKER).then(function (value){
                if(value==true){
                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : SPEAKER: Activate : PASS :' +value);
                    expect(true).assertTrue();
                }
                else{
                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : SPEAKER: Activate : FAIL :' +value);
                    expect(false).assertTrue();
                }
            });
        }).catch((err) => {
            console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : SPEAKER: Activate : FAIL :Error :' + err.message);
            expect(false).assertTrue();
        });
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_setDeviceActive_PR_Activate_ENUM_018
                * @tc.name      : setDeviceActive - SPEAKER - Activate - Promise
                * @tc.desc      : Activate speaker - Promise
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_setDeviceActive_PR_Activate_ENUM_018', 0, async function (done) {
        await audioManager.setDeviceActive(2,true).then(function (){
            console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : SPEAKER: Activate');
            audioManager.isDeviceActive(2).then(function (value){
                if(value==true){
                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : SPEAKER: Activate : PASS :' +value);
                    expect(true).assertTrue();
                }
                else{
                    console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : SPEAKER: Activate : FAIL :' +value);
                    expect(false).assertTrue();
                }
            });
        }).catch((err) => {
            console.info('AudioFrameworkTest: Device Test: Promise : isDeviceActive : SPEAKER: Activate : FAIL :Error :' + err.message);
            expect(false).assertTrue();
        });
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_setDeviceActive_CB_DEACTIVATE_023
                * @tc.name      : setDeviceActive - SPEAKER - deactivate - Callback
                * @tc.desc      : Deactivate speaker - Callback
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_setDeviceActive_CB_DEACTIVATE_023', 0, async function (done) {
        audioManager.setDeviceActive(audio.ActiveDeviceType.SPEAKER,false, (err) => {
            if (err) {
                console.error(`AudioFrameworkTest: Device Test: Callback : setDeviceActive : SPEAKER: Deactivate: Error: ${err.message}`);
                expect(false).assertTrue();
            }
            else {
                console.info('AudioFrameworkTest: Device Test: Callback : setDeviceActive : SPEAKER: Active');
                audioManager.isDeviceActive(audio.ActiveDeviceType.SPEAKER,(err, value) => {
                    if (err) {
                        console.error(`AudioFrameworkTest: Device Test: Callback : isDeviceActive : SPEAKER: Deactivate: Error: ${err.message}`);
                        expect(false).assertTrue();
                    }
                    else if(value==false){
                        console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : SPEAKER: Deactivate : PASS :' +value);
                        expect(true).assertTrue();
                    }
                    else{
                        console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : SPEAKER: Deactivate : FAIL :' +value);
                        expect(false).assertTrue();
                    }
                    done();
                });
            }
            done();
        });
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_setDeviceActive_CB_DEACTIVATE_ENUM_024
                * @tc.name      : setDeviceActive - SPEAKER - deactivate - Callback
                * @tc.desc      : Deactivate speaker - Callback
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_setDeviceActive_CB_DEACTIVATE_ENUM_024', 0, async function (done) {
        await audioManager.setDeviceActive(2,true).then(function (){
            console.info('AudioFrameworkTest: Device Test: Promise : setDeviceActive : SPEAKER : Active');
        });
        audioManager.setDeviceActive(2,false, (err) => {
            if (err) {
                console.error(`AudioFrameworkTest: Device Test: Callback : setDeviceActive : SPEAKER: Deactivate: Error: ${err.message}`);
                expect(false).assertTrue();
            }
            else {
                console.info('AudioFrameworkTest: Device Test: Callback : setDeviceActive : SPEAKER: Active');
                audioManager.isDeviceActive(2,(err, value) => {
                    if (err) {
                        console.error(`AudioFrameworkTest: Device Test: Callback : isDeviceActive : SPEAKER: Deactivate: Error: ${err.message}`);
                        expect(false).assertTrue();
                    }
                    else if(value==false){
                        console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : SPEAKER: Deactivate : PASS :' +value);
                        expect(true).assertTrue();
                    }
                    else{
                        console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : SPEAKER: Deactivate : FAIL :' +value);
                        expect(false).assertTrue();
                    }
                    done();
                });
            }
            done();
        });
    })


    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_setDeviceActive_CB_ACTIVATE_025
                * @tc.name      : setDeviceActive - SPEAKER - activate - Callback
                * @tc.desc      : Activate speaker - Callback
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_setDeviceActive_CB_ACTIVATE_025', 0, async function (done) {
        audioManager.setDeviceActive(audio.ActiveDeviceType.SPEAKER,true, (err) => {
            if (err) {
                console.error(`AudioFrameworkTest: Device Test: Callback : setDeviceActive : SPEAKER: Active: Error: ${err.message}`);
                expect(false).assertTrue();
            }
            else {
                console.info('AudioFrameworkTest: Device Test: Callback : setDeviceActive : SPEAKER: Active');
                audioManager.isDeviceActive(audio.ActiveDeviceType.SPEAKER,(err, value) => {
                    if (err) {
                        console.error(`AudioFrameworkTest: Device Test: Callback : isDeviceActive : SPEAKER: Active: Error: ${err.message}`);
                        expect(false).assertTrue();
                    }
                    else if(value==true){
                        console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : SPEAKER: Active : PASS :' +value);
                        expect(true).assertTrue();
                    }
                    else{
                        console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : SPEAKER: Active : FAIL :' +value);
                        expect(false).assertTrue();
                    }
                    done();
                });
            }
            done();
        });
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_setDeviceActive_CB_ACTIVATE_ENUM_026
                * @tc.name      : setDeviceActive - SPEAKER - activate - Callback
                * @tc.desc      : Activate speaker - Callback
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_setDeviceActive_CB_ACTIVATE_ENUM_026  ', 0, async function (done) {
        audioManager.setDeviceActive(2,true, (err) => {
            if (err) {
                console.error(`AudioFrameworkTest: Device Test: Callback : setDeviceActive : SPEAKER: Active: Error: ${err.message}`);
                expect(false).assertTrue();
            }
            else {
                console.info('AudioFrameworkTest: Device Test: Callback : setDeviceActive : SPEAKER: Active');
                audioManager.isDeviceActive(2,(err, value) => {
                    if (err) {
                        console.error(`AudioFrameworkTest: Device Test: Callback : isDeviceActive : SPEAKER: Active: Error: ${err.message}`);
                        expect(false).assertTrue();
                    }
                    else if(value==true){
                        console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : SPEAKER: Active : PASS :' +value);
                        expect(true).assertTrue();
                    }
                    else{
                        console.info('AudioFrameworkTest: Device Test: Callback : isDeviceActive : SPEAKER: Active : FAIL :' +value);
                        expect(false).assertTrue();
                    }
                    done();
                });
            }
            done();
        });
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_DeviceType_001
                * @tc.name      : DeviceType - INVALID
                * @tc.desc      : DeviceType - INVALID
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_DeviceType_001', 0, async function (done) {
        expect(audio.DeviceType.INVALID).assertEqual(0);
        await sleep(50);
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_DeviceType_002
                * @tc.name      : DeviceType - WIRED_HEADSET
                * @tc.desc      : DeviceType - WIRED_HEADSET
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_DeviceType_002', 0, async function (done) {
        expect(audio.DeviceType.WIRED_HEADSET).assertEqual(3);
        await sleep(50);
        done();
    })
	
    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_DeviceType_003
                * @tc.name      : DeviceType - USB_HEADSET
                * @tc.desc      : DeviceType - USB_HEADSET
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_DeviceType_003', 0, async function (done) {
        var resultflag = false;
        if (audio.DeviceType.USB_HEADSET == 22 || audio.DeviceType.USB_HEADSET == undefined)
        resultflag = true;
        expect(resultflag).assertTrue();
        await sleep(50);
        done();
    })

	/* *
                * @tc.number    : SUB_AUDIO_MANAGER_DeviceChangeType_001
                * @tc.name      : DeviceChangeType - CONNECT  
                * @tc.desc      : DeviceChangeType - CONNECT  
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_DeviceChangeType_001', 0, async function (done) {
        expect(audio.DeviceChangeType.CONNECT).assertEqual(0);
        await sleep(50);
        done();
    })
	
	/* *
                * @tc.number    : SUB_AUDIO_MANAGER_DeviceChangeType_002
                * @tc.name      : DeviceChangeType - DISCONNECT   
                * @tc.desc      : DeviceChangeType - DISCONNECT   
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_DeviceChangeType_002', 0, async function (done) {
        expect(audio.DeviceChangeType.DISCONNECT).assertEqual(1);
        await sleep(50);
        done();
    })

    /* *
        * @tc.number    : SUB_AUDIO_MANAGER_GetRoutingManager_001
        * @tc.name      : getRoutingManager - Promise
        * @tc.desc      : getRoutingManager
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_MANAGER_GetRoutingManager_001', 0, async function (done) {
        const promise = audioManager.getRoutingManager();
        promise.then(function (){
            console.info('AudioFrameworkTest: Promise: getRoutingManager :  PASS');
            expect(true).assertTrue();
        }).catch((err) => {
            console.error(`AudioFrameworkTest: Promise: failed to get audio routing manager ${err.message}`);
            expect(false).assertTrue();
        })
        await promise;
        done();
    })

    /* *
        * @tc.number    : SUB_AUDIO_MANAGER_GetRoutingManager_002
        * @tc.name      : getRoutingManager - callback
        * @tc.desc      : getRoutingManager
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_MANAGER_GetRoutingManager_002', 0, async function (done) {
        audioManager.getRoutingManager((err) => {
            console.info('AudioFrameworkTest: Callback: getRoutingManager');
            if (err) {
                console.error(`AudioFrameworkTest: Callback: failed to get audio routing manager ${err.message}`);
                expect(false).assertTrue();
            }
            else
            {
                console.info('AudioFrameworkTest: Callback: getRoutingManager : PASS');
                expect(true).assertTrue();
            }
            done();
        });
    })

    /* *
        * @tc.number    : SUB_AUDIO_MANAGER_SelectOutputDevice_001
        * @tc.name      : selectOutputDevice - Output device - Promise
        * @tc.desc      : selectOutputDevice - deviceType to INVALID
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_MANAGER_SelectOutputDevice_001', 0, async function (done) {
        let outputAudioDeviceDescriptor =
            [{
                "deviceRole":audio.DeviceRole.OUTPUT_DEVICE,
                "deviceType":audio.DeviceType.INVALID,
                "networkId":"LocalDevice",
                "interruptGroupId":1,
                "volumeGroupId":1
            }];
        let routingManager = await audioManager.getRoutingManager();
        await routingManager.selectOutputDevice(outputAudioDeviceDescriptor).then(async function () {
            console.info('AudioFrameworkTest: Promise: selectOutputDevice DEVICES_TYPE: PASS');
            expect(true).assertTrue();
        }).catch((err) => {
            console.info('AudioFrameworkTest: Promise: selectOutputDevice DEVICES_TYPE: ERROR: ' + err.message);
            expect(false).assertTrue();
        });
        done();
    })

    /* *
        * @tc.number    : SUB_AUDIO_MANAGER_SelectOutputDevice_002
        * @tc.name      : selectOutputDevice - Output device - Promise
        * @tc.desc      : selectOutputDevice - deviceType to EARPIECE
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_MANAGER_SelectOutputDevice_002', 0, async function (done) {
        let outputAudioDeviceDescriptor =
            [{
                "deviceRole":audio.DeviceRole.OUTPUT_DEVICE,
                "deviceType":audio.DeviceType.EARPIECE,
                "networkId":"LocalDevice",
                "interruptGroupId":1,
                "volumeGroupId":1
            }];
        let routingManager = await audioManager.getRoutingManager();
        await routingManager.selectOutputDevice(outputAudioDeviceDescriptor).then(async function () {
            console.info('AudioFrameworkTest: Promise: selectOutputDevice DEVICES_TYPE: PASS');
            expect(true).assertTrue();
        }).catch((err) => {
            console.info('AudioFrameworkTest: Promise: selectOutputDevice DEVICES_TYPE: ERROR: ' + err.message);
            expect(false).assertTrue();
        });
        done();
    })

    /* *
        * @tc.number    : SUB_AUDIO_MANAGER_SelectOutputDevice_003
        * @tc.name      : selectOutputDevice - Output device - Promise
        * @tc.desc      : selectOutputDevice - deviceType to SPEAKER
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_MANAGER_SelectOutputDevice_003', 0, async function (done) {
        let outputAudioDeviceDescriptor =
            [{
                "deviceRole":audio.DeviceRole.OUTPUT_DEVICE,
                "deviceType":audio.DeviceType.SPEAKER,
                "networkId":"LocalDevice",
                "interruptGroupId":1,
                "volumeGroupId":1
            }];
        let routingManager = await audioManager.getRoutingManager();
        await routingManager.selectOutputDevice(outputAudioDeviceDescriptor).then(async function () {
            console.info('AudioFrameworkTest: Promise: selectOutputDevice DEVICES_TYPE: PASS');
            expect(true).assertTrue();
        }).catch((err) => {
            console.info('AudioFrameworkTest: Promise: selectOutputDevice DEVICES_TYPE: ERROR: ' + err.message);
            expect(false).assertTrue();
        });
        done();
    })

    /* *
        * @tc.number    : SUB_AUDIO_MANAGER_SelectOutputDevice_004
        * @tc.name      : selectOutputDevice - Output device - Promise
        * @tc.desc      : selectOutputDevice - deviceType to WIRED_HEADSET
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_MANAGER_SelectOutputDevice_004', 0, async function (done) {
        let outputAudioDeviceDescriptor =
            [{
                "deviceRole":audio.DeviceRole.OUTPUT_DEVICE,
                "deviceType":audio.DeviceType.WIRED_HEADSET,
                "networkId":"LocalDevice",
                "interruptGroupId":1,
                "volumeGroupId":1
            }];
        let routingManager = await audioManager.getRoutingManager();
        await routingManager.selectOutputDevice(outputAudioDeviceDescriptor).then(async function () {
            console.info('AudioFrameworkTest: Promise: selectOutputDevice DEVICES_TYPE: PASS');
            expect(true).assertTrue();
        }).catch((err) => {
            console.info('AudioFrameworkTest: Promise: selectOutputDevice DEVICES_TYPE: ERROR: ' + err.message);
            expect(false).assertTrue();
        });
        done();
    })

    /* *
        * @tc.number    : SUB_AUDIO_MANAGER_SelectOutputDevice_005
        * @tc.name      : selectOutputDevice - Output device - Promise
        * @tc.desc      : selectOutputDevice - deviceType to WIRED_HEADPHONES
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_MANAGER_SelectOutputDevice_005', 0, async function (done) {
        let outputAudioDeviceDescriptor =
            [{
                "deviceRole":audio.DeviceRole.OUTPUT_DEVICE,
                "deviceType":audio.DeviceType.WIRED_HEADPHONES,
                "networkId":"LocalDevice",
                "interruptGroupId":1,
                "volumeGroupId":1
            }];
        let routingManager = await audioManager.getRoutingManager();
        await routingManager.selectOutputDevice(outputAudioDeviceDescriptor).then(async function () {
            console.info('AudioFrameworkTest: Promise: selectOutputDevice DEVICES_TYPE: PASS');
            expect(true).assertTrue();
        }).catch((err) => {
            console.info('AudioFrameworkTest: Promise: selectOutputDevice DEVICES_TYPE: ERROR: ' + err.message);
            expect(false).assertTrue();
        });
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_SelectOutputDevice_006
                * @tc.name      : selectOutputDevice - Output device - Callback
                * @tc.desc      : selectOutputDevice - deviceType to BLUETOOTH_SCO
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_SelectOutputDevice_006', 0, async function (done) {
        let outputAudioDeviceDescriptor =
            [{
                "deviceRole":audio.DeviceRole.OUTPUT_DEVICE,
                "deviceType":audio.DeviceType.BLUETOOTH_SCO,
                "networkId":"LocalDevice",
                "interruptGroupId":1,
                "volumeGroupId":1
            }];
        let routingManager = await audioManager.getRoutingManager();
        routingManager.selectOutputDevice(outputAudioDeviceDescriptor, (err) => {
            if (err) {
                console.info('AudioFrameworkTest: selectOutputDevice: DEVICES_TYPE: ERROR: ' + err.message);
                expect(false).assertTrue();
            }
            else {
                console.info('AudioFrameworkTest: selectOutputDevice: DEVICES_TYPE: PASS');
                expect(true).assertTrue();
            }
        });
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_SelectOutputDevice_007
                * @tc.name      : selectOutputDevice - Output device - Callback
                * @tc.desc      : selectOutputDevice - deviceType to BLUETOOTH_A2DP
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_SelectOutputDevice_007', 0, async function (done) {
        let outputAudioDeviceDescriptor =
            [{
                "deviceRole":audio.DeviceRole.OUTPUT_DEVICE,
                "deviceType":audio.DeviceType.BLUETOOTH_A2DP,
                "networkId":"LocalDevice",
                "interruptGroupId":1,
                "volumeGroupId":1
            }];
        let routingManager = await audioManager.getRoutingManager();
        routingManager.selectOutputDevice(outputAudioDeviceDescriptor, (err) => {
            if (err) {
                console.info('AudioFrameworkTest: selectOutputDevice: DEVICES_TYPE: ERROR: ' + err.message);
                expect(false).assertTrue();
            }
            else {
                console.info('AudioFrameworkTest: selectOutputDevice: DEVICES_TYPE: PASS');
                expect(true).assertTrue();
            }
        });
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_SelectOutputDevice_008
                * @tc.name      : selectOutputDevice - Output device - Callback
                * @tc.desc      : selectOutputDevice - deviceType to MIC
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_SelectOutputDevice_008', 0, async function (done) {
        let outputAudioDeviceDescriptor =
            [{
                "deviceRole":audio.DeviceRole.OUTPUT_DEVICE,
                "deviceType":audio.DeviceType.MIC,
                "networkId":"LocalDevice",
                "interruptGroupId":1,
                "volumeGroupId":1
            }];
        let routingManager = await audioManager.getRoutingManager();
        routingManager.selectOutputDevice(outputAudioDeviceDescriptor, (err) => {
            if (err) {
                console.info('AudioFrameworkTest: selectOutputDevice: DEVICES_TYPE: ERROR: ' + err.message);
                expect(false).assertTrue();
            }
            else {
                console.info('AudioFrameworkTest: selectOutputDevice: DEVICES_TYPE: PASS');
                expect(true).assertTrue();
            }
        });
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_SelectOutputDevice_009
                * @tc.name      : selectOutputDevice - Output device - Callback
                * @tc.desc      : selectOutputDevice - deviceType to USB_HEADSET
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_SelectOutputDevice_009', 0, async function (done) {
        let outputAudioDeviceDescriptor =
            [{
                "deviceRole":audio.DeviceRole.OUTPUT_DEVICE,
                "deviceType":audio.DeviceType.USB_HEADSET,
                "networkId":"LocalDevice",
                "interruptGroupId":1,
                "volumeGroupId":1
            }];
        let routingManager = await audioManager.getRoutingManager();
        routingManager.selectOutputDevice(outputAudioDeviceDescriptor, (err) => {
            if (err) {
                console.info('AudioFrameworkTest: selectOutputDevice: DEVICES_TYPE: ERROR: ' + err.message);
                expect(false).assertTrue();
            }
            else {
                console.info('AudioFrameworkTest: selectOutputDevice: DEVICES_TYPE: PASS');
                expect(true).assertTrue();
            }
        });
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_SelectOutputDevice_010
                * @tc.name      : selectOutputDevice - Output device - Callback
                * @tc.desc      : selectOutputDevice - deviceType to DEFAULT
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_SelectOutputDevice_010', 0, async function (done) {
        let outputAudioDeviceDescriptor =
            [{
                "deviceRole":audio.DeviceRole.OUTPUT_DEVICE,
                "deviceType":audio.DeviceType.DEFAULT,
                "networkId":"LocalDevice",
                "interruptGroupId":1,
                "volumeGroupId":1
            }];
        let routingManager = await audioManager.getRoutingManager();
        routingManager.selectOutputDevice(outputAudioDeviceDescriptor, (err) => {
            if (err) {
                console.info('AudioFrameworkTest: selectOutputDevice: DEVICES_TYPE: ERROR: ' + err.message);
                expect(false).assertTrue();
            }
            else {
                console.info('AudioFrameworkTest: selectOutputDevice: DEVICES_TYPE: PASS');
                expect(true).assertTrue();
            }
        });
        done();
    })

    /* *
        * @tc.number    : SUB_AUDIO_MANAGER_SelectOutputDeviceByFilter_001
        * @tc.name      : selectOutputDeviceByFilter - Output device by filter - Promise
        * @tc.desc      : selectOutputDeviceByFilter - deviceType to EARPIECE,
        * contentType to CONTENT_TYPE_SPEECH, streamUsage to STREAM_USAGE_MEDIA
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_MANAGER_SelectOutputDeviceByFilter_001', 0, async function (done) {
        let outputAudioDeviceDescriptor =
            [{
                "deviceRole":audio.DeviceRole.OUTPUT_DEVICE,
                "deviceType":audio.DeviceType.EARPIECE,
                "networkId":"LocalDevice",
                "interruptGroupId":1,
                "volumeGroupId":1
            }];
        let outputAudioRendererFilter =
            {
                "uid":1,
                "rendererInfo":
                {
                    "contentType":audio.ContentType.CONTENT_TYPE_SPEECH,
                    "streamUsage":audio.StreamUsage.STREAM_USAGE_MEDIA,
                    "rendererFlags":0
                },
                "rendererId":2
            };
        let routingManager = await audioManager.getRoutingManager();
        await routingManager.selectOutputDeviceByFilter(outputAudioRendererFilter,
            outputAudioDeviceDescriptor).then(async function () {
            console.info('AudioFrameworkTest: Promise: selectOutputDeviceByFilter DEVICES_TYPE,\
            CONTENTTYPE, STREAMUSAGE: PASS');
            expect(true).assertTrue();
        }).catch((err) => {
            console.info('AudioFrameworkTest: Promise: selectOutputDeviceByFilter DEVICES_TYPE,\
            CONTENTTYPE, STREAMUSAGE: ERROR: ' + err.message);
            expect(false).assertTrue();
        });
        done();
    })

    /* *
        * @tc.number    : SUB_AUDIO_MANAGER_SelectOutputDeviceByFilter_002
        * @tc.name      : selectOutputDeviceByFilter - Output device by filter - Promise
        * @tc.desc      : selectOutputDeviceByFilter - deviceType to SPEAKER, contentType to
        * CONTENT_TYPE_MUSIC, streamUsage to STREAM_USAGE_MEDIA
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_MANAGER_SelectOutputDeviceByFilter_002', 0, async function (done) {
        let outputAudioDeviceDescriptor =
            [{
                "deviceRole":audio.DeviceRole.OUTPUT_DEVICE,
                "deviceType":audio.DeviceType.SPEAKER,
                "networkId":"LocalDevice",
                "interruptGroupId":1,
                "volumeGroupId":1
            }];
        let outputAudioRendererFilter =
            {
                "uid":1,
                "rendererInfo":
                {
                    "contentType":audio.ContentType.CONTENT_TYPE_MUSIC,
                    "streamUsage":audio.StreamUsage.STREAM_USAGE_MEDIA,
                    "rendererFlags":0
                },
                "rendererId":2
            };
        let routingManager = await audioManager.getRoutingManager();
        await routingManager.selectOutputDeviceByFilter(outputAudioRendererFilter,
            outputAudioDeviceDescriptor).then(async function () {
            console.info('AudioFrameworkTest: Promise: selectOutputDeviceByFilter DEVICES_TYPE,\
            CONTENTTYPE, STREAMUSAGE: PASS');
            expect(true).assertTrue();
        }).catch((err) => {
            console.info('AudioFrameworkTest: Promise: selectOutputDeviceByFilter DEVICES_TYPE,\
            CONTENTTYPE, STREAMUSAGE: ERROR: ' + err.message);
            expect(false).assertTrue();
        });
        done();
    })

    /* *
        * @tc.number    : SUB_AUDIO_MANAGER_SelectOutputDeviceByFilter_003
        * @tc.name      : selectOutputDeviceByFilter - Output device by filter - Promise
        * @tc.desc      : selectOutputDeviceByFilter - deviceType to WIRED_HEADSET, contentType to
        * CONTENT_TYPE_SPEECH, streamUsage to STREAM_USAGE_VOICE_COMMUNICATION
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_MANAGER_SelectOutputDeviceByFilter_003', 0, async function (done) {
        let outputAudioDeviceDescriptor =
            [{
                "deviceRole":audio.DeviceRole.OUTPUT_DEVICE,
                "deviceType":audio.DeviceType.WIRED_HEADSET,
                "networkId":"LocalDevice",
                "interruptGroupId":1,
                "volumeGroupId":1
            }];
        let outputAudioRendererFilter =
            {
                "uid":1,
                "rendererInfo":
                {
                    "contentType":audio.ContentType.CONTENT_TYPE_SPEECH,
                    "streamUsage":audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    "rendererFlags":0
                },
                "rendererId":2
            };
        let routingManager = await audioManager.getRoutingManager();
        await routingManager.selectOutputDeviceByFilter(outputAudioRendererFilter,
            outputAudioDeviceDescriptor).then(async function () {
            console.info('AudioFrameworkTest: Promise: selectOutputDeviceByFilter DEVICES_TYPE,\
            CONTENTTYPE, STREAMUSAGE: PASS');
            expect(true).assertTrue();
        }).catch((err) => {
            console.info('AudioFrameworkTest: Promise: selectOutputDeviceByFilter DEVICES_TYPE,\
            CONTENTTYPE, STREAMUSAGE: ERROR: ' + err.message);
            expect(false).assertTrue();
        });
        done();
    })

    /* *
        * @tc.number    : SUB_AUDIO_MANAGER_SelectOutputDeviceByFilter_004
        * @tc.name      : selectOutputDeviceByFilter - Output device by filter - Promise
        * @tc.desc      : selectOutputDeviceByFilter - deviceType to WIRED_HEADPHONES, contentType to
        *  CONTENT_TYPE_SONIFICATION, streamUsage to STREAM_USAGE_NOTIFICATION_RINGTONE
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_MANAGER_SelectOutputDeviceByFilter_004', 0, async function (done) {
        let outputAudioDeviceDescriptor =
            [{
                "deviceRole":audio.DeviceRole.OUTPUT_DEVICE,
                "deviceType":audio.DeviceType.WIRED_HEADPHONES,
                "networkId":"LocalDevice",
                "interruptGroupId":1,
                "volumeGroupId":1
            }];
        let outputAudioRendererFilter =
            {
                "uid":1,
                "rendererInfo":
                {
                    "contentType":audio.ContentType.CONTENT_TYPE_SONIFICATION,
                    "streamUsage":audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
                    "rendererFlags":0
                },
                "rendererId":2
            };
        let routingManager = await audioManager.getRoutingManager();
        await routingManager.selectOutputDeviceByFilter(outputAudioRendererFilter,
            outputAudioDeviceDescriptor).then(async function () {
            console.info('AudioFrameworkTest: Promise: selectOutputDeviceByFilter DEVICES_TYPE,\
            CONTENTTYPE, STREAMUSAGE: PASS');
            expect(true).assertTrue();
        }).catch((err) => {
            console.info('AudioFrameworkTest: Promise: selectOutputDeviceByFilter DEVICES_TYPE,\
            CONTENTTYPE, STREAMUSAGE: ERROR: ' + err.message);
            expect(false).assertTrue();
        });
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_SelectOutputDeviceByFilter_005
                * @tc.name      : selectOutputDeviceByFilter - Output device by filter - Callback
                * @tc.desc      : selectOutputDeviceByFilter - deviceType to BLUETOOTH_SCO, contentType to
                * CONTENT_TYPE_UNKNOWN, streamUsage to STREAM_USAGE_UNKNOWN
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_SelectOutputDeviceByFilter_005', 0, async function (done) {
        let outputAudioDeviceDescriptor =
            [{
                "deviceRole":audio.DeviceRole.OUTPUT_DEVICE,
                "deviceType":audio.DeviceType.BLUETOOTH_SCO,
                "networkId":"LocalDevice",
                "interruptGroupId":1,
                "volumeGroupId":1
            }];
        let outputAudioRendererFilter =
            {
                "uid":1,
                "rendererInfo":
                {
                    "contentType":audio.ContentType.CONTENT_TYPE_UNKNOWN,
                    "streamUsage":audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    "rendererFlags":0
                },
                "rendererId":2
            };
        let routingManager = await audioManager.getRoutingManager();
        routingManager.selectOutputDeviceByFilter(outputAudioRendererFilter,
            outputAudioDeviceDescriptor, (err) => {
            if (err) {
                console.info('AudioFrameworkTest: Callback: selectOutputDeviceByFilter:\
                DEVICES_TYPE, CONTENTTYPE, STREAMUSAGE: ERROR: ' + err.message);
                expect(false).assertTrue();
            }
            else {
                console.info('AudioFrameworkTest: Callback: selectOutputDeviceByFilter:\
                DEVICES_TYPE, CONTENTTYPE, STREAMUSAGE: PASS');
                expect(true).assertTrue();
            }
        });
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_SelectOutputDeviceByFilter_006
                * @tc.name      : selectOutputDeviceByFilter - Output device by filter - Callback
                * @tc.desc      : selectOutputDeviceByFilter - deviceType to BLUETOOTH_A2DP, contentType to
                * CONTENT_TYPE_SPEECH, streamUsage to STREAM_USAGE_MEDIA
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_SelectOutputDeviceByFilter_006', 0, async function (done) {
        let outputAudioDeviceDescriptor =
            [{
                "deviceRole":audio.DeviceRole.OUTPUT_DEVICE,
                "deviceType":audio.DeviceType.BLUETOOTH_A2DP,
                "networkId":"LocalDevice",
                "interruptGroupId":1,
                "volumeGroupId":1
            }];
        let outputAudioRendererFilter =
            {
                "uid":1,
                "rendererInfo":
                {
                    "contentType":audio.ContentType.CONTENT_TYPE_SPEECH,
                    "streamUsage":audio.StreamUsage.STREAM_USAGE_MEDIA,
                    "rendererFlags":0
                },
                "rendererId":2
            };
        let routingManager = await audioManager.getRoutingManager();
        routingManager.selectOutputDeviceByFilter(outputAudioRendererFilter,
            outputAudioDeviceDescriptor, (err) => {
            if (err) {
                console.info('AudioFrameworkTest: Callback: selectOutputDeviceByFilter:\
                DEVICES_TYPE, CONTENTTYPE, STREAMUSAGE: ERROR: ' + err.message);
                expect(false).assertTrue();
            }
            else {
                console.info('AudioFrameworkTest: Callback: selectOutputDeviceByFilter:\
                DEVICES_TYPE, CONTENTTYPE, STREAMUSAGE: PASS');
                expect(true).assertTrue();
            }
        });
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_SelectOutputDeviceByFilter_007
                * @tc.name      : selectOutputDeviceByFilter - Output device by filter - Callback
                * @tc.desc      : selectOutputDeviceByFilter - deviceType to MIC, contentType to
                * CONTENT_TYPE_MUSIC, streamUsage to STREAM_USAGE_VOICE_COMMUNICATION
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_SelectOutputDeviceByFilter_007', 0, async function (done) {
        let outputAudioDeviceDescriptor =
            [{
                "deviceRole":audio.DeviceRole.OUTPUT_DEVICE,
                "deviceType":audio.DeviceType.MIC,
                "networkId":"LocalDevice",
                "interruptGroupId":1,
                "volumeGroupId":1
            }];
        let outputAudioRendererFilter =
            {
                "uid":1,
                "rendererInfo":
                {
                    "contentType":audio.ContentType.CONTENT_TYPE_MUSIC,
                    "streamUsage":audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    "rendererFlags":0
                },
                "rendererId":2
            };
        let routingManager = await audioManager.getRoutingManager();
        routingManager.selectOutputDeviceByFilter(outputAudioRendererFilter,
            outputAudioDeviceDescriptor, (err) => {
            if (err) {
                console.info('AudioFrameworkTest: Callback: selectOutputDeviceByFilter:\
                DEVICES_TYPE, CONTENTTYPE, STREAMUSAGE: ERROR: ' + err.message);
                expect(false).assertTrue();
            }
            else {
                console.info('AudioFrameworkTest: Callback: selectOutputDeviceByFilter:\
                DEVICES_TYPE, CONTENTTYPE, STREAMUSAGE: PASS');
                expect(true).assertTrue();
            }
        });
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_SelectOutputDeviceByFilter_008
                * @tc.name      : selectOutputDeviceByFilter - Output device by filter - Callback
                * @tc.desc      : selectOutputDeviceByFilter - deviceType to USB_HEADSET, contentType to
                * CONTENT_TYPE_MOVIE, streamUsage to STREAM_USAGE_NOTIFICATION_RINGTONE
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_SelectOutputDeviceByFilter_008', 0, async function (done) {
        let outputAudioDeviceDescriptor =
            [{
                "deviceRole":audio.DeviceRole.OUTPUT_DEVICE,
                "deviceType":audio.DeviceType.USB_HEADSET,
                "networkId":"LocalDevice",
                "interruptGroupId":1,
                "volumeGroupId":1
            }];
        let outputAudioRendererFilter =
            {
                "uid":1,
                "rendererInfo":
                {
                    "contentType":audio.ContentType.CONTENT_TYPE_MOVIE,
                    "streamUsage":audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
                    "rendererFlags":0
                },
                "rendererId":2
            };
        let routingManager = await audioManager.getRoutingManager();
        routingManager.selectOutputDeviceByFilter(outputAudioRendererFilter,
            outputAudioDeviceDescriptor, (err) => {
            if (err) {
                console.info('AudioFrameworkTest: Callback: selectOutputDeviceByFilter:\
                DEVICES_TYPE, CONTENTTYPE, STREAMUSAGE: ERROR: ' + err.message);
                expect(false).assertTrue();
            }
            else {
                console.info('AudioFrameworkTest: Callback: selectOutputDeviceByFilter:\
                DEVICES_TYPE, CONTENTTYPE, STREAMUSAGE: PASS');
                expect(true).assertTrue();
            }
        });
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_SelectOutputDeviceByFilter_009
                * @tc.name      : selectOutputDeviceByFilter - Output device by filter - Callback
                * @tc.desc      : selectOutputDeviceByFilter - deviceType to INVALID, contentType to
                * CONTENT_TYPE_SONIFICATION, streamUsage to STREAM_USAGE_UNKNOWN
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_SelectOutputDeviceByFilter_009', 0, async function (done) {
        let outputAudioDeviceDescriptor =
            [{
                "deviceRole":audio.DeviceRole.OUTPUT_DEVICE,
                "deviceType":audio.DeviceType.INVALID,
                "networkId":"LocalDevice",
                "interruptGroupId":1,
                "volumeGroupId":1
            }];
        let outputAudioRendererFilter =
            {
                "uid":1,
                "rendererInfo":
                {
                    "contentType":audio.ContentType.CONTENT_TYPE_SONIFICATION,
                    "streamUsage":audio.StreamUsage.STREAM_USAGE_UNKNOWN,
                    "rendererFlags":0
                },
                "rendererId":2
            };
        let routingManager = await audioManager.getRoutingManager();
        routingManager.selectOutputDeviceByFilter(outputAudioRendererFilter,
            outputAudioDeviceDescriptor, (err) => {
            if (err) {
                console.info('AudioFrameworkTest: Callback: selectOutputDeviceByFilter:\
                DEVICES_TYPE, CONTENTTYPE, STREAMUSAGE: ERROR: ' + err.message);
                expect(false).assertTrue();
            }
            else {
                console.info('AudioFrameworkTest: Callback: selectOutputDeviceByFilter:\
                DEVICES_TYPE, CONTENTTYPE, STREAMUSAGE: PASS');
                expect(true).assertTrue();
            }
        });
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_MANAGER_SelectOutputDeviceByFilter_010
                * @tc.name      : selectOutputDeviceByFilter - Output device by filter - Callback
                * @tc.desc      : selectOutputDeviceByFilter - deviceType to EARPIECE, contentType to
                * CONTENT_TYPE_RINGTONE, streamUsage to STREAM_USAGE_MEDIA
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_MANAGER_SelectOutputDeviceByFilter_010', 0, async function (done) {
        let outputAudioDeviceDescriptor =
            [{
                "deviceRole":audio.DeviceRole.OUTPUT_DEVICE,
                "deviceType":audio.DeviceType.EARPIECE,
                "networkId":"LocalDevice",
                "interruptGroupId":1,
                "volumeGroupId":1
            }];
        let outputAudioRendererFilter =
            {
                "uid":1,
                "rendererInfo":
                {
                    "contentType":audio.ContentType.CONTENT_TYPE_RINGTONE,
                    "streamUsage":audio.StreamUsage.STREAM_USAGE_MEDIA,
                    "rendererFlags":0
                },
                "rendererId":2
            };
        let routingManager = await audioManager.getRoutingManager();
        routingManager.selectOutputDeviceByFilter(outputAudioRendererFilter,
            outputAudioDeviceDescriptor, (err) => {
            if (err) {
                console.info('AudioFrameworkTest: Callback: selectOutputDeviceByFilter:\
                DEVICES_TYPE, CONTENTTYPE, STREAMUSAGE: ERROR: ' + err.message);
                expect(false).assertTrue();
            }
            else {
                console.info('AudioFrameworkTest: Callback: selectOutputDeviceByFilter:\
                DEVICES_TYPE, CONTENTTYPE, STREAMUSAGE: PASS');
                expect(true).assertTrue();
            }
        });
        done();
    })

})