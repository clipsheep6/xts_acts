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

import bluetooth from '@ohos.bluetooth';
import abilityAccessCtrl from '@ohos.abilityAccessCtrl'
import bundle from '@ohos.bundle'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium'
import { UiComponent, UiDriver, BY, Component, Driver, UiWindow, ON, MatchPattern, DisplayRotation, ResizeDirection, UiDirection, MouseButton, WindowMode, PointerMatrix, UIElementInfo, UIEventObserver } from '@ohos.UiTest'

const PERMISSION_USER_SET = 1;
const PERMISSION_USER_NAME1 = "ohos.permission.LOCATION";
const PERMISSION_USER_NAME2 = 'ohos.permission.LOCATION_IN_BACKGROUND';
let tokenID = undefined;
async function grantPerm() {
    console.info("====grant Permission start====");
    let appInfo = await bundle.getApplicationInfo('ohos.acts.communication.bluetooth.bluetoothhost', 0, 100);
    tokenID = appInfo.accessTokenId;
    console.info("accessTokenId" + appInfo.accessTokenId + " bundleName:" + appInfo.bundleName);
    let atManager = abilityAccessCtrl.createAtManager();
    if (atManager != null) {
        await atManager.grantUserGrantedPermission(tokenID, PERMISSION_USER_NAME1, PERMISSION_USER_SET).then((result) => {
            console.info('[permission] case grantUserGrantedPermission success :' + JSON.stringify(result));
            console.info("tokenId" + tokenID + " result:" + result);
        }).catch((err) => {
            console.info('[permission] case grantUserGrantedPermission failed :' + JSON.stringify(err));
        });
        await atManager.grantUserGrantedPermission(tokenID, PERMISSION_USER_NAME2, PERMISSION_USER_SET).then((results) => {
            console.info('[permission] case grantUserGrantedPermission success :' + JSON.stringify(results));
            console.info("tokenId" + tokenID + " result:" + results);
        }).catch((error) => {
            console.info('[permission] case grantUserGrantedPermission failed :' + JSON.stringify(error));
        });
    } else {
        console.info('[permission] case apply permission failed, createAtManager failed');
    }
    console.info("====grant Permission end====");
}

export default function btDiscoveryTest() {
describe('btDiscoveryTest', function() {
    function sleep(delay) {
        return new Promise(resovle => setTimeout(resovle, delay))
    }

    async function clickTheWindow() {
        try{
            let driver = Driver.create();
            console.info('[bluetooth_js] bt driver create:'+ driver);            
            await driver.delayMs(1000);
            await driver.wakeUpDisplay();
            await driver.delayMs(3000);
            await driver.swipe(1500, 1000, 1500, 100);
            await driver.delayMs(3000);
            await driver.click(950, 2550);
            await driver.delayMs(1500);
            await driver.click(950, 2550);
        } catch (error) {
            console.info('[bluetooth_js] driver error info:'+ error);
        }
    }

    async function tryToEnableBt() {
        let sta = bluetooth.getState();
        switch(sta){
            case 0:
                bluetooth.enableBluetooth();
                clickTheWindow();
                await sleep(10000);
                let sta1 = bluetooth.getState();
                console.info('[bluetooth_js] bt turn off:'+ JSON.stringify(sta1));
                break;
            case 1:
                console.info('[bluetooth_js] bt turning on:'+ JSON.stringify(sta));
                await sleep(3000);
                break;
            case 2:
                console.info('[bluetooth_js] bt turn on:'+ JSON.stringify(sta));
                break;
            case 3:
                bluetooth.enableBluetooth();
                clickTheWindow();
                await sleep(10000);
                let sta2 = bluetooth.getState();
                console.info('[bluetooth_js] bt turning off:'+ JSON.stringify(sta2));
                break;
            default:
                console.info('[bluetooth_js] enable success');
        }
    }

    beforeAll(async function (done) {
        console.info('beforeAll called')
        await grantPerm();
        done()
    })
    beforeEach(async function(done) {
        console.info('beforeEach called')
        await tryToEnableBt()
        done()
    })
    afterEach(function () {
        console.info('afterEach called')
    })
    afterAll(function () {
        console.info('afterAll called')
    })

    /**
     * @tc.number SUB_COMMUNICATION_BLUETOOTH_DISCOVERY_0100
     * @tc.name TEST DISCOVERY
     * @tc.desc TEST DISCOVERY 
     * @tc.type Function
     * @tc.level Level 0
     */
    it('SUB_COMMUNICATION_BLUETOOTH_DISCOVERY_0100', 0, async function (done) {
        function onReceiveEvent(data){
            console.info('[bluetooth_js] Device' + JSON.stringify(data)+ 
                 'length' + data.length);
            expect(true).assertTrue(data.length > 0);
        }
        bluetooth.on("bluetoothDeviceFind", onReceiveEvent);
        let result = bluetooth.startBluetoothDiscovery();
        await sleep(3000);
        console.info('[bluetooth_js] startDiscovery'+result);
        expect(result).assertTrue();
        bluetooth.off('bluetoothDeviceFind', onReceiveEvent);
        result = bluetooth.stopBluetoothDiscovery();
        console.info('[bluetooth_js] stopDiscovery'+result);
        expect(true).assertTrue();
        done();
    })

    /**
     * @tc.number SUB_COMMUNICATION_BLUETOOTH_DISCOVERY_0300
     * @tc.name TEST DISCOVERY
     * @tc.desc TEST DISCOVERY api 8.
     * @tc.type Function
     * @tc.level Level 1
     */
    it('SUB_COMMUNICATION_BLUETOOTH_DISCOVERY_0300', 0, async function (done) {
        let result1 = bluetooth.setBluetoothScanMode(bluetooth.ScanMode.SCAN_MODE_CONNECTABLE,10);
        expect(result1).assertTrue();
        let getScanMode = bluetooth.getBluetoothScanMode();
        console.info('[bluetooth_js] getScanMode = '+ JSON.stringify(getScanMode));
        expect(true).assertEqual(getScanMode == bluetooth.ScanMode.SCAN_MODE_CONNECTABLE);
        let result = bluetooth.startBluetoothDiscovery();
        await sleep(2000);
        console.info('[bluetooth_js] startDiscovery1'+result);
        expect(result).assertTrue();
        let result2 = bluetooth.startBluetoothDiscovery();
        console.info('[bluetooth_js] startDiscovery2'+result2);
        expect(result2).assertFalse();
        done();
    })
})
}


