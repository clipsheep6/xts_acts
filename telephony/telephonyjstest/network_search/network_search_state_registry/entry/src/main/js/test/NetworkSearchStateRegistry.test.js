/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License')
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import observer from '@ohos.telephony.observer';
import radio from '@ohos.telephony.radio';
import napi from '@ohos.napi_mock_vendor';
import { describe, it, expect, beforeAll } from 'deccjsunit/index';

describe('NetworkSearchStateRegistryTest', function () {
    const SLOT_0 = 0;
    const DELAY_TRIGGER_TIME = 3000;
    const TYPE_NETWORK_STATE_CHANGE = 'networkStateChange';
    const TYPE_SIGNAL_INFO_CHANGE = 'signalInfoChange';
    let mockNetworkState = {};
    let mockSignal = {};

    const REG_STATE_NOT_REG = 0;
    const REG_STATE_HOME_NOLY = 1;
    const REG_STATE_SEARCH = 2;
    const REG_STATE_NO_SERVICE = 3;
    const REG_STATE_INVALID = 4;
    const REG_STATE_ROAMING = 5;
    const REG_STATE_EMERGENCY_ONLY = 6;
    

    function sleep(timeout) {
        return new Promise((reslove, reject) => {
            setTimeout(() => {
                reslove();
            }, timeout);
        })
    }

    beforeAll(async function () {
        await radio.turnOnRadio();
        await sleep(6000);
        let result = napi.initMockVendor();
        console.log(`Telephony_StateRegistry_mockChange init result: ${result}`);
    })

    function filter(arry) {
        let newArry = arry.filter(item => item.signalType === radio.NETWORK_TYPE_GSM);
        if (newArry.length === 0) {
            newArry.put({
                signalType: radio.NETWORK_TYPE_GSM,
                signalLevel: 5
            })
        }
        return newArry;
    }

    function getRegStatus(data){
        if(data.regStatus === radio.REG_STATE_NO_SERVICE){
            return REG_STATE_INVALID;
        }else if(data.regStatus === radio.REG_STATE_IN_SERVICE){
            return REG_STATE_NOT_REG;
        }else if(data.regStatus === radio.REG_STATE_EMERGENCY_CALL_ONLY){
            return REG_STATE_NO_SERVICE;
        }else if(data.regStatus === radio.REG_STATE_POWER_OFF) {
            return REG_STATE_ROAMING;
        }else {
            return REG_STATE_HOME_NOLY;
        }
    }

    function mockChange(type, times) {
        return new Promise((reslove, reject) => {
            for (let index = 1; index <= times; index++) {
                setTimeout(async () => {
                    if (type === TYPE_NETWORK_STATE_CHANGE) {
                        let data = await radio.getNetworkState(SLOT_0);
                        console.log(`Telephony_StateRegistry_mockChange getNetworkState data: ${JSON.stringify(data)}`)
                        mockNetworkState = {
                            longOperatorName: data.longOperatorName,
                            shortOperatorName: data.shortOperatorName,
                            plmnNumeric: data.plmnNumeric,
                            isRoaming: data.isRoaming ? 1 : 0,
                            regState: getRegStatus(data),
                            nsaState: radio.NSA_STATE_NOT_SUPPORT,
                            isCaActive: data.isCaActive ? 1 : 0,
                            isEmergency: data.isEmergency ? 1 : 0
                        }
                        console.log(`Telephony_StateRegistry_mockChange mockdata=${JSON.stringify(mockNetworkState)}`);
                        let ret = napi.changeNetworkStats(mockNetworkState)
                        console.log(`Telephony_StateRegistry_mockChange ret=${ret}`)
                    } else if (type === TYPE_SIGNAL_INFO_CHANGE) {
                        let data = await radio.getSignalInformation(SLOT_0);
                        console.log(`Telephony_StateRegistry_mockChange getSignalInfo data: ${JSON.stringify(data)}`)
                        mockSignal = {
                            signalType: radio.NETWORK_TYPE_GSM,
                            signalLevel: filter(data)[0].signalLevel === 5 ? 3 : 5
                        }
                        console.log(`Telephony_StateRegistry_mockChange  mockdata=${JSON.stringify(mockSignal)}`);
                        let ret = napi.changeSignal(mockSignal)
                        console.log(`Telephony_StateRegistry_mockChange ret=${ret}`)
                    }
                    if (index === times) {
                        reslove();
                    }
                }, DELAY_TRIGGER_TIME * index);
            }
        })
    }

    function networkStateAssert(networkState){
        if (mockNetworkState.regState === REG_STATE_NOT_REG) {
            expect(networkState.regStatus).assertEqual(radio.REG_STATE_NO_SERVICE);
        } else if (mockNetworkState.regState === REG_STATE_HOME_NOLY) {
            expect(networkState.regStatus).assertEqual(radio.REG_STATE_IN_SERVICE);
        }else if (mockNetworkState.regState === REG_STATE_SEARCH) {
            expect(networkState.regStatus).assertEqual(radio.REG_STATE_NO_SERVICE);
        }else if (mockNetworkState.regState === REG_STATE_NO_SERVICE) {
            expect(networkState.regStatus).assertEqual(radio.REG_STATE_NO_SERVICE);
        }else if (mockNetworkState.regState === REG_STATE_INVALID) {
            expect(networkState.regStatus).assertEqual(radio.REG_STATE_POWER_OFF);
        } else if (mockNetworkState.regState === REG_STATE_ROAMING) {
            expect(networkState.regStatus).assertEqual(radio.REG_STATE_IN_SERVICE);
        }else if (mockNetworkState.regState === REG_STATE_EMERGENCY_ONLY) {
            expect(networkState.regStatus).assertEqual(radio.REG_STATE_EMERGENCY_CALL_ONLY);
        }else{
            expect().assertFail();
        }
    }
    
    /**
     * @tc.number  Telephony_StateRegistry_on_0100
     * @tc.name    Add a networkStatus change listen and test observer.on() to view the callback results
     * @tc.desc    Function test
     */
    it('Telephony_StateRegistry_on_0100', 0, async function (done) {
        let changeTimes = 3;
        let count = 0;
        observer.on(TYPE_NETWORK_STATE_CHANGE, (networkState) => {
            console.log(`Telephony_StateRegistry_on_0100 networkStateChanged data: ${JSON.stringify(networkState)}`);
            count++;
            networkStateAssert(networkState);
        });
        await mockChange(TYPE_NETWORK_STATE_CHANGE, changeTimes);
        await sleep(DELAY_TRIGGER_TIME);
        observer.off(TYPE_NETWORK_STATE_CHANGE);
        expect(count).assertEqual(changeTimes);
        done();
    });

    /**
     * @tc.number  Telephony_StateRegistry_on_0200
     * @tc.name    Add a networkStatus change listen and test observer.on({slotId:0}) to view the callback results
     * @tc.desc    Function test
     */
    it('Telephony_StateRegistry_on_0200', 0, async function (done) {
        let changeTimes = 3;
        let count = 0;
        observer.on(TYPE_NETWORK_STATE_CHANGE, { slotId: SLOT_0 }, (networkState) => {
            console.log(`Telephony_StateRegistry_on_0200 networkStateChanged data: ${JSON.stringify(networkState)}`);
            count++;
            networkStateAssert(networkState);
        });
        await mockChange(TYPE_NETWORK_STATE_CHANGE, changeTimes);
        await sleep(DELAY_TRIGGER_TIME);
        observer.off(TYPE_NETWORK_STATE_CHANGE);
        expect(count).assertEqual(changeTimes);
        done();
    });

    /**
     * @tc.number  Telephony_StateRegistry_on_0300
     * @tc.name    Add a signalLevel change listen and test observer.on() to view the callback results
     * @tc.desc    Function test
     */
    it('Telephony_StateRegistry_on_0300', 0, async function (done) {
        let changeTimes = 3;
        let count = 0;
        observer.on(TYPE_SIGNAL_INFO_CHANGE, (signalInfo) => {
            console.log(`Telephony_StateRegistry_on_0300 signalInfoChanged data: ${JSON.stringify(signalInfo)}`);
            count++;
            expect(JSON.stringify(signalInfo)).assertContain(JSON.stringify(mockSignal));
        });
        await mockChange(TYPE_SIGNAL_INFO_CHANGE, changeTimes);
        await sleep(DELAY_TRIGGER_TIME);
        observer.off(TYPE_SIGNAL_INFO_CHANGE);
        expect(count).assertEqual(changeTimes);
        done();
    });

    /**
     * @tc.number  Telephony_StateRegistry_on_0400
     * @tc.name    Add a signalLevel change listen and test observer.on({slotId:0}) to view the callback results
     * @tc.desc    Function test
     */
    it('Telephony_StateRegistry_on_0400', 0, async function (done) {
        let changeTimes = 3;
        let count = 0;
        observer.on(TYPE_SIGNAL_INFO_CHANGE, (signalInfo) => {
            console.log(`Telephony_StateRegistry_on_0400 signalInfoChanged data: ${JSON.stringify(signalInfo)}`);
            count++;
            expect(JSON.stringify(signalInfo)).assertContain(JSON.stringify(mockSignal));
        });
        await mockChange(TYPE_SIGNAL_INFO_CHANGE, changeTimes);
        await sleep(DELAY_TRIGGER_TIME);
        observer.off(TYPE_SIGNAL_INFO_CHANGE)
        expect(count).assertEqual(changeTimes);
        done();
    });

    /**
     * @tc.number  Telephony_StateRegistry_off_0100
     * @tc.name    Add a networkStatus change listen and test observer.off() to view the callback results
     * @tc.desc    Function test
     */
    it('Telephony_StateRegistry_off_0100', 0, async function (done) {
        let changeTimes = 2;
        let count = 0;
        observer.on(TYPE_NETWORK_STATE_CHANGE, (networkState) => {
            console.log(`Telephony_StateRegistry_on_0100 networkStateChanged data: ${JSON.stringify(networkState)}`);
            count++;
            networkStateAssert(networkState);
        });
        await mockChange(TYPE_NETWORK_STATE_CHANGE, changeTimes);
        await sleep(DELAY_TRIGGER_TIME);
        observer.off(TYPE_NETWORK_STATE_CHANGE);
        expect(count).assertEqual(changeTimes);
        await mockChange(TYPE_NETWORK_STATE_CHANGE, changeTimes);
        await sleep(DELAY_TRIGGER_TIME);
        expect(count).assertEqual(changeTimes);
        done();
    });

    /**
     * @tc.number  Telephony_StateRegistry_off_0200
     * @tc.name    Add a signalLevel change listen and test observer.off() to view the callback results
     * @tc.desc    Function test
     */
    it('Telephony_StateRegistry_off_0200', 0, async function (done) {
        let changeTimes = 2;
        let count = 0;
        observer.on(TYPE_SIGNAL_INFO_CHANGE, (signalInfo) => {
            console.log(`Telephony_StateRegistry_off_0200 signalInfoChanged data: ${JSON.stringify(signalInfo)}`);
            count++;
            expect(JSON.stringify(signalInfo)).assertContain(JSON.stringify(mockSignal));
        });
        await mockChange(TYPE_SIGNAL_INFO_CHANGE, changeTimes);
        await sleep(DELAY_TRIGGER_TIME);
        observer.off(TYPE_SIGNAL_INFO_CHANGE);
        expect(count).assertEqual(changeTimes);
        await mockChange(TYPE_SIGNAL_INFO_CHANGE, changeTimes);
        await sleep(DELAY_TRIGGER_TIME);
        expect(count).assertEqual(changeTimes);
        done();
    });
});
