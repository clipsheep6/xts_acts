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

import bluetooth from '@ohos.bluetooth.access';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium'
import { UiComponent, UiDriver, BY, Component, Driver, UiWindow, ON, MatchPattern, DisplayRotation, ResizeDirection, UiDirection, MouseButton, WindowMode, PointerMatrix, UIElementInfo, UIEventObserver } from '@ohos.UiTest'

    function sleep(delay : number) : Promise<void> {
        return new Promise(resovle => setTimeout(resovle, delay))
    }
    async function openPhone() {
        try{
            let drivers = Driver.create();
            console.info('[bluetooth_js] bt driver create:'+ drivers);            
            await drivers.delayMs(1000);
            await drivers.wakeUpDisplay();
            await drivers.delayMs(5000);
            await drivers.swipe(1500, 1000, 1500, 100);
            await drivers.delayMs(10000);
        } catch (error) {
            console.info('[bluetooth_js] driver error info:'+ error);
        }
    }

    let PERMISSION_TEXT:string = "允许";
    let OPEN_BT_TEXT:string = "开启";
    let CLOSE_BT_TEXT:string = "关闭";

    async function clickRequestPermission(text:string) {
        console.info('[bluetooth_js] clickRequestPermission start');
        let driver = Driver.create();
        await driver.delayMs(3000);
        try {
            let button = await driver.findComponent(ON.text(text));
            await button.click();
            await driver.delayMs(3000);
            console.info('[bluetooth_js] clickRequestPermission end');
        } catch (err) {
            console.info('[bluetooth_js] clickRequestPermission failed. ' + err);
        }
        try {
            let button1 = await driver.findComponent(ON.text("允许"));
            await button1.click();
            await driver.delayMs(3000);
            console.info('[bluetooth_js] click 允许 end');
        } catch (err) {
            console.info('[bluetooth_js] click 允许 failed. ' + err);
        }
    }
    function onReceiveEvent(data : bluetooth.BluetoothState) {
            console.info('bluetooth state001 =' + JSON.stringify(data));
        }
    
export default function btAccessTest() {
describe('btAccessTest', () => {
    
    beforeAll(async (done : Function) =>  {
        console.info('beforeAll called')
        await clickRequestPermission(PERMISSION_TEXT);
        await openPhone();
        done();
    })
    beforeEach(() => {
        console.info('beforeEach called')
    })
    afterEach(() => {
        console.info('afterEach called')
    })
    afterAll(() => {
        console.info('afterAll called')
    })

    /**
     * @tc.number SUB_COMMUNICATION_BLUETOOTHACCESS_STATECHANGE_0100
     * @tc.name testEnableBluetooth
     * @tc.desc Test enableBluetooth api10
     * @tc.type Function
     * @tc.size MediumTest
     * @tc.level Level 3
     */
     it('SUB_COMMUNICATION_BLUETOOTHACCESS_STATECHANGE_0100', 0, async (done : Function) =>  {
        let state = bluetooth.getState();
        console.info('[bluetooth_js] bluetooth state = '+ JSON.stringify(state));
        if(state != bluetooth.BluetoothState.STATE_OFF) {
            bluetooth.disableBluetooth();
            await clickRequestPermission(CLOSE_BT_TEXT);
            await sleep(10000);
            let closeSt = bluetooth.getState();
            console.info('[bluetooth_js] bluetooth disable state ='+ JSON.stringify(closeSt));
            expect(closeSt).assertEqual(bluetooth.BluetoothState.STATE_OFF);
        } else {
            console.info('[bluetooth_js] bluetooth state is OFF');
        } 
        try {
            bluetooth.enableBluetooth();
            await clickRequestPermission(OPEN_BT_TEXT);
            await sleep(10000);
        } catch (error) {
            console.error(`[bluetooth_js] enable StateChange error, code is ${error.code},message is ${error.message}`);
            expect(Number(error.code)).assertEqual(2900099);
        }
        let openSt = bluetooth.getState();
        console.info('[bluetooth_js] bluetooth enable state ='+ JSON.stringify(openSt));
        expect(openSt).assertEqual(bluetooth.BluetoothState.STATE_ON);
        done();
    })

    /**
     * @tc.number SUB_COMMUNICATION_BLUETOOTHACCESS_STATECHANGE_0200
     * @tc.name testDisableBluetooth
     * @tc.desc Test disableBluetooth api10
     * @tc.type Function
     * @tc.size MediumTest
     * @tc.level Level 3
     */
     it('SUB_COMMUNICATION_BLUETOOTHACCESS_STATECHANGE_0200', 0, async (done : Function) =>  {
        let state = bluetooth.getState();
        console.info('[bluetooth_js] bluetooth state = '+ JSON.stringify(state));
        if(state != bluetooth.BluetoothState.STATE_ON) {
            bluetooth.enableBluetooth();
            await clickRequestPermission(OPEN_BT_TEXT);
            await sleep(10000);
            let openSt = bluetooth.getState();
            console.info('[bluetooth_js] bluetooth enable state ='+ JSON.stringify(openSt));
            expect(openSt).assertEqual(bluetooth.BluetoothState.STATE_ON);
        } else {
            console.info('[bluetooth_js] bluetooth state is ON');
        } 
        try {
            bluetooth.disableBluetooth();
            await clickRequestPermission(CLOSE_BT_TEXT);
            await sleep(10000);
        } catch (error) {
            console.error(`[bluetooth_js] disable StateChange error, code is ${error.code},message is ${error.message}`);
            expect(Number(error.code)).assertEqual(2900099);
        }
        let closeSt = bluetooth.getState();
        console.info('[bluetooth_js] bluetooth disable state ='+ JSON.stringify(closeSt));
        expect(closeSt).assertEqual(bluetooth.BluetoothState.STATE_OFF);
        done();
    })

    /**
     * @tc.number SUB_COMMUNICATION_BLUETOOTHACCESS_STATECHANGE_0300
     * @tc.name testGetState
     * @tc.desc Test getState api10
     * @tc.type Function
     * @tc.size MediumTest
     * @tc.level Level 3
     */
     it('SUB_COMMUNICATION_BLUETOOTHACCESS_STATECHANGE_0300', 0, async (done : Function) =>  {
        try {
            let state = bluetooth.getState();
            expect(state >= 0 && state <= 6).assertTrue();
        } catch (error) {
            console.error("[bluetooth_js] bluetooth getState errCode:" + error.code + ",bluetooth getState errMessage:" + error.message);
            expect(Number(error.code)).assertEqual(2900099);
        }
        done();
    })

    /**
     * @tc.number SUB_COMMUNICATION_BLUETOOTHACCESS_STATECHANGE_0400
     * @tc.name testOnStateChange
     * @tc.desc Test on 'stateChange' api10
     * @tc.type Function
     * @tc.size MediumTest
     * @tc.level Level 0
     */
    it('SUB_COMMUNICATION_BLUETOOTHACCESS_STATECHANGE_0400', 0, async (done : Function) =>  {
    try {
        await bluetooth.on('stateChange', onReceiveEvent);
        let state = bluetooth.getState();
        console.info('[bluetooth_js] get bluetooth state' + JSON.stringify(state));
        if (state != bluetooth.BluetoothState.STATE_ON) {
            bluetooth.enableBluetooth();
            await clickRequestPermission(OPEN_BT_TEXT);
            await sleep(10000);
            let state1 = bluetooth.getState();
            console.info('[bluetooth_js] enable state ' + JSON.stringify(state1));
            expect(state1).assertEqual(bluetooth.BluetoothState.STATE_ON);
        }
    } catch (error) {
        console.error(`[bluetooth_js]enable StateChange error, code is ${error.code},message is ${error.message}`);
        expect(Number(error.code)).assertEqual(2900099);
    }    
    bluetooth.off('stateChange', onReceiveEvent);
    done();
    })

    /**
     * @tc.number SUB_COMMUNICATION_BLUETOOTHACCESS_STATECHANGE_0500
     * @tc.name testOnStateChange
     * @tc.desc Test off 'stateChange' api10
     * @tc.type Function
     * @tc.size MediumTest
     * @tc.level Level 0
     */
    it('SUB_COMMUNICATION_BLUETOOTHACCESS_STATECHANGE_0500', 0, async (done : Function) =>  {
    try {
        await bluetooth.on('stateChange', onReceiveEvent);
        await sleep(3000);
        await bluetooth.off('stateChange', onReceiveEvent);
        let state = bluetooth.getState();
        console.info('[bluetooth_js] get bluetooth state001' + JSON.stringify(state));
        if (state != bluetooth.BluetoothState.STATE_OFF) {
            bluetooth.disableBluetooth();
            await clickRequestPermission(CLOSE_BT_TEXT);
            await sleep(10000);
            let state1 = bluetooth.getState();
            console.info('[bluetooth_js] disable state001 ' + JSON.stringify(state1));
            expect(state1).assertEqual(bluetooth.BluetoothState.STATE_OFF);
        }
    } catch (error) {
        console.error(`[bluetooth_js]disable StateChange error, code is ${error.code},message is ${error.message}`);
        expect(Number(error.code)).assertEqual(2900099);
    }    
    done();
    })

    /**
     * @tc.number SUB_COMMUNICATION_BLUETOOTHACCESS_STATECHANGE_0600
     * @tc.name testBluetoothState
     * @tc.desc Test BluetoothState api10
     * @tc.type Function
     * @tc.size MediumTest
     * @tc.level Level 0
     */
     it('SUB_COMMUNICATION_BLUETOOTHACCESS_STATECHANGE_0600', 0, async (done : Function) =>  {
        let STATE_ON = bluetooth.BluetoothState.STATE_ON;
        console.info("[bluetooth_js]STATE_ON : " + JSON.stringify(STATE_ON));
        expect(true).assertEqual(STATE_ON == 2);
        let STATE_OFF = bluetooth.BluetoothState.STATE_OFF;
        console.info("[bluetooth_js]STATE_OFF : " + JSON.stringify(STATE_OFF));
        expect(true).assertEqual(STATE_OFF == 0);
        let STATE_TURNING_ON = bluetooth.BluetoothState.STATE_TURNING_ON;
        console.info("[bluetooth_js]STATE_TURNING_ON : " + JSON.stringify(STATE_TURNING_ON));
        expect(true).assertEqual(STATE_TURNING_ON == 1);
        let STATE_TURNING_OFF = bluetooth.BluetoothState.STATE_TURNING_OFF;
        console.info("[bluetooth_js]STATE_TURNING_OFF : " + JSON.stringify(STATE_TURNING_OFF));
        expect(true).assertEqual(STATE_TURNING_OFF == 3);
        let STATE_BLE_TURNING_ON = bluetooth.BluetoothState.STATE_BLE_TURNING_ON;
        console.info("[bluetooth_js]STATE_BLE_TURNING_ON : " + JSON.stringify(STATE_BLE_TURNING_ON));
        expect(true).assertEqual(STATE_BLE_TURNING_ON == 4);
        let STATE_BLE_ON = bluetooth.BluetoothState.STATE_BLE_ON;
        console.info("[bluetooth_js]STATE_BLE_ON : " + JSON.stringify(STATE_BLE_ON));
        expect(true).assertEqual(STATE_BLE_ON == 5);
        let STATE_BLE_TURNING_OFF = bluetooth.BluetoothState.STATE_BLE_TURNING_OFF;
        console.info("[bluetooth_js]STATE_BLE_TURNING_OFF : " + JSON.stringify(STATE_BLE_TURNING_OFF));
        expect(true).assertEqual(STATE_BLE_TURNING_OFF == 6);
        done();
    })
})
}