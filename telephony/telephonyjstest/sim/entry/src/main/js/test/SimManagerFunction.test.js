/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License')
 * you may not  use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import sim from '@ohos.telephony_sim'
import {simSlotId} from '../default/utils/Constant.test.js'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('SimManagerFunction', function () {
    /**
    * @tc.number  Telephony_Sim_getSimAccountInfo_Async_0100
    * @tc.name    Enter normal parameters to test whether the getSimAccountInfo
    *             interface function can execute normally.
    * @tc.desc    Function test
    */
    it('Telephony_Sim_getSimAccountInfo_Async_0100', 0, async function (done) {
        var dispName = 'simDefaultDisplayName';
        var dispNum = 'simDefaultDisplayNumber';
        sim.getSimAccountInfo(simSlotId.SLOTID_0, (err, data) => {
            if (err) {
                console.log('Telephony_Sim_getSimAccountInfo_Async_0100 fail, err: ' + err.message);
                expect().assertFail();
                done();
                return;
            }
            expect(data.slotIndex == simSlotId.SLOTID_0).assertTrue();
            // return; the default piling data as simDefaultDisplayName.
            expect(data.showName == dispName).assertTrue();
            // return; the default piling data as simDefaultDisplayNumber.
            expect(data.showNumber == dispNum).assertTrue();
            console.log('Telephony_Sim_getSimAccountInfo_Async_0100 finish');
            done();
        })
    })

    /**
    * @tc.number  Telephony_Sim_getSimAccountInfo_Async_0200
    * @tc.name    Enter exception parameters to test whether the getSimAccountInfo
    *             interface function can execute normally.
    * @tc.desc    Function test
    */
    it('Telephony_Sim_getSimAccountInfo_Async_0200', 0, async function (done) {
        sim.getSimAccountInfo(simSlotId.SLOTID_4, (err, data) => {
            if (err) {
                // Enter the exception ID to enter err.
                console.log('Telephony_Sim_getSimAccountInfo_Async_0200 finish');
                done();
                return;
            }
            expect().assertFail();
            console.log('Telephony_Sim_getSimAccountInfo_Async_0200 fail');
            done();
        })
    })

    /**
    * @tc.number  Telephony_Sim_getSimAccountInfo_Promise_0100
    * @tc.name    Enter normal parameters to test whether the getSimAccountInfo
    *             interface function can execute normally.
    * @tc.desc    Function test
    */
    it('Telephony_Sim_getSimAccountInfo_Promise_0100', 0, async function (done) {
        var dispName = 'simDefaultDisplayName';
        var dispNum = 'simDefaultDisplayNumber';
        try {
            var data = await sim.getSimAccountInfo(simSlotId.SLOTID_0);
            expect(data.slotIndex == simSlotId.SLOTID_0).assertTrue();
            // return; the default piling data as simDefaultDisplayName.
            expect(data.showName == dispName).assertTrue();
            // return; the default piling data as simDefaultDisplayNumber.
            expect(data.showNumber == dispNum).assertTrue();
            console.log('Telephony_Sim_getSimAccountInfo_Async_0100 finish');
        } catch (err) {
            console.log('Telephony_Sim_getSimAccountInfo_Promise_0100 fail, err: ' + err.message);
            expect().assertFail();
            done();
            return;
        }
        console.log('Telephony_Sim_getSimAccountInfo_Promise_0100 finish');
        done();
    })

    /**
    * @tc.number  Telephony_Sim_getSimAccountInfo_Promise_0200
    * @tc.name    Enter exception parameters to test whether the getSimAccountInfo
    *             interface function can execute normally.
    * @tc.desc    Function test
    */
    it('Telephony_Sim_getSimAccountInfo_Promise_0200', 0, async function (done) {
        try {
            var data = await sim.getSimAccountInfo(simSlotId.SLOTID_4);
        } catch (err) {
            // Enter the exception ID to enter err.
            console.log('Telephony_Sim_getSimAccountInfo_Promise_0200 finish');
            done();
            return;
        }
        expect().assertFail();
        console.log('Telephony_Sim_getSimAccountInfo_Promise_0200 fail');
        done();
    })

    /**
    * @tc.number  Telephony_Sim_getDefaultVoiceSlotId_Async_0100
    * @tc.name    The test first sets the default card number and then calls
    *             the getDefaultVoiceLotid interface to get the SIM ID.
    * @tc.desc    Function test
    */
    it('Telephony_Sim_getDefaultVoiceSlotId_Async_0100', 0, async function (done) {
        var defaultValue = 0;
        sim.getDefaultVoiceSlotId((err, result) => {
            if (err) {
                console.log('Telephony_Sim_getDefaultVoiceSlotId_Async_0100 fail, err: ' + err.message);
                expect().assertFail();
                done();
                return;
            }
            defaultValue = result;
        })
        sim.setDefaultVoiceSlotId(simSlotId.SLOTID_0, (err) => {
            if (err) {
                console.log('Telephony_Sim_getDefaultVoiceSlotId_Async_0100 setDefaultVoiceSlotId_err: ' + err.message);
                expect().assertFail();
                done();
                return;
            }
            sim.getDefaultVoiceSlotId((err, data) => {
                if (err) {
                    console.log('Telephony_Sim_getDefaultVoiceSlotId_Async_0100 fail, err: ' + err.message);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log('Telephony_Sim_getDefaultVoiceSlotId_Async_0100, data = ' + data);
                expect(data == simSlotId.SLOTID_0).assertTrue();
                // Restore Settings
                sim.setDefaultVoiceSlotId(defaultValue, (err) => {
                    if (err) {
                        console.log('Telephony_Sim_getDefaultVoiceSlotId_Async_0100 setDefaultVoiceSlotId_err: '
                        + err.message);
                        expect().assertFail();
                        done();
                        return;
                    }
                })
                console.log('Telephony_Sim_getDefaultVoiceSlotId_Async_0100 finish');
                done();
                return;
            })
        })
    })

    /**
    * @tc.number  Telephony_Sim_getDefaultVoiceSlotId_Async_0200
    * @tc.name    The test first sets the default card number and then calls
    *             the getDefaultVoiceLotid interface to get the SIM ID.
    * @tc.desc    Function test
    */
    it('Telephony_Sim_getDefaultVoiceSlotId_Async_0200', 0, async function (done) {
        var defaultValue = 0;
        sim.getDefaultVoiceSlotId((err, result) => {
            if (err) {
                console.log('Telephony_Sim_getDefaultVoiceSlotId_Async_0200 fail, err: ' + err.message);
                expect().assertFail();
                done();
                return;
            }
            defaultValue = result;
        })
        sim.setDefaultVoiceSlotId(simSlotId.SLOTID_2, (err) => {
            if (err) {
                console.log('Telephony_Sim_getDefaultVoiceSlotId_Async_0200：setDefaultVoiceSlotId_err: '
                + err.message);
                expect().assertFail();
                done();
                return;
            }
            sim.getDefaultVoiceSlotId((err, data) => {
                if (err) {
                    console.log('Telephony_Sim_getDefaultVoiceSlotId_Async_0200 fail, err: ' + err.message);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log('Telephony_Sim_getDefaultVoiceSlotId_Async_0200, data = ' + data);
                expect(data == simSlotId.SLOTID_2).assertTrue();
                // Restore Settings
                sim.setDefaultVoiceSlotId(defaultValue, (err) => {
                    if (err) {
                        console.log('Telephony_Sim_getDefaultVoiceSlotId_Async_0200 setDefaultVoiceSlotId_err: '
                        + err.message);
                        expect().assertFail();
                        done();
                        return;
                    }
                })
                console.log('Telephony_Sim_getDefaultVoiceSlotId_Async_0200 finish');
                done();
                return;
            })
        })
    })

    /**
    * @tc.number  Telephony_Sim_getDefaultVoiceSlotId_Promise_0100
    * @tc.name    The test first sets the default card number and then calls
    *             the getDefaultVoiceLotid interface to get the default SIM ID.
    * @tc.desc    Function test
    */
    it('Telephony_Sim_getDefaultVoiceSlotId_Promise_0100', 0, async function (done) {
        var defaultValue = 0;
        var result = await sim.getDefaultVoiceSlotId();
        defaultValue = result;
        try {
            await sim.setDefaultVoiceSlotId(simSlotId.SLOTID_2);
            try {
                var data = await sim.getDefaultVoiceSlotId();
                expect(data == simSlotId.SLOTID_2).assertTrue();
            } catch (err) {
                console.log('Telephony_Sim_getDefaultVoiceSlotId_Promise_0100 fail, err: ' + err.message);
                expect().assertFail();
                done();
                return;
            }
            // Restore Settings
            await sim.setDefaultVoiceSlotId(defaultValue);
            console.log('Telephony_Sim_getDefaultVoiceSlotId_Promise_0100 finish');
            done();
            return;
        } catch (err) {
            console.log('Telephony_Sim_getDefaultVoiceSlotId_Promise_0100:setDefaultVoiceSlotId_err: ' + err.message);
            expect().assertFail();
            done();
            return;
        }
    })

    /**
    * @tc.number  Telephony_Sim_getDefaultVoiceSlotId_Promise_0200
    * @tc.name    The test first sets the default card number and then calls
    *             the getDefaultVoiceLotid interface to get the default SIM ID.
    * @tc.desc    Function test
    */
    it('Telephony_Sim_getDefaultVoiceSlotId_Promise_0200', 0, async function (done) {
        var defaultValue = 0;
        var result = await sim.getDefaultVoiceSlotId();
        defaultValue = result;
        try {
            await sim.setDefaultVoiceSlotId(simSlotId.SLOTID_0);
            try {
                var data = await sim.getDefaultVoiceSlotId();
                console.log('Telephony_Sim_getDefaultVoiceSlotId_Promise_0200, data = ' + data);
                expect(data == simSlotId.SLOTID_0).assertTrue();
                // Restore Settings
                await sim.setDefaultVoiceSlotId(defaultValue);
                console.log('Telephony_Sim_getDefaultVoiceSlotId_Promise_0200 finish');
                done();
                return;
            } catch (err) {
                console.log('Telephony_Sim_getDefaultVoiceSlotId_Promise_0200 fail, err: ' + err.message);
                expect().assertFail();
                done();
                return;
            }
        } catch (err) {
            console.log('Telephony_Sim_getDefaultVoiceSlotId_Promise_0200:setDefaultVoiceSlotId_err: ' + err.message);
            expect().assertFail();
            done();
            return;
        }
    })

    /**
    * @tc.number  Telephony_Sim_setDefaultVoiceSlotId_Async_0100
    * @tc.name    Test the setDefaultVoiceLotid interface when the input SIM ID parameter is 4.
    * @tc.desc    Function test
    */
    it('Telephony_Sim_setDefaultVoiceSlotId_Async_0100', 0, async function (done) {
        sim.setDefaultVoiceSlotId(simSlotId.SLOTID_4, (err) => {
            if (err) {
                //Expect slotid 4 return; err here.
                sim.getDefaultVoiceSlotId((err, result) => {
                    if (err) {
                        console.log('Telephony_Sim_setDefaultVoiceSlotId_Async_0300 getDefaultVoiceSlotId_fail, err: '
                        + err.message);
                        expect().assertFail();
                        done();
                        return;
                    }
                    expect(result != simSlotId.SLOTID_4).assertTrue();
                })
                console.log('Telephony_Sim_setDefaultVoiceSlotId_Async_0200 finish');
                done();
                return;
            }
            expect().assertFail();
            console.log('Telephony_Sim_setDefaultVoiceSlotId_Async_0200 fail');
            done();
        })
    })

    /**
    * @tc.number  Telephony_Sim_setDefaultVoiceSlotId_Promise_0100
    * @tc.name    Test the setDefaultVoiceLotid interface when the input SIM ID parameter is 4.
    * @tc.desc    Function test
    */
    it('Telephony_Sim_setDefaultVoiceSlotId_Promise_0100', 0, async function (done) {
        try {
            var data = await sim.setDefaultVoiceSlotId(simSlotId.SLOTID_4);
        } catch (err) {
            //Expect slotid 4 return; err here.
            var result = await sim.getDefaultVoiceSlotId();
            expect(result != simSlotId.SLOTID_4).assertTrue();
            console.log('Telephony_Sim_setDefaultVoiceSlotId_Promise_0300 finish');
            done();
            return;
        }
        expect().assertFail();
        console.log('Telephony_Sim_setDefaultVoiceSlotId_Promise_0300 fail');
        done();
    })
})