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

import radio from '@ohos.telephony.radio';
import { describe, afterAll, it, expect } from 'deccjsunit/index';

describe('NetworkSearchPreferredModeTest', function () {
    const SLOT_0 = 0;
    const PREFERRED_MODE_ERR7 = 7;
    const PREFERRED_MODE_ERR1 = -1;
    let garrLongOperatorName = ['CHINA MOBILE', 'CHN-UNICOM', 'CHINA TELECOM'];

    afterAll(async function () {
        try {
            radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_recoverPreferredMode success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverPreferredMode fail err: ${err}`);
            expect().assertFail();
            return;
        }
        console.log('Telephony_NetworkSearch_recoverPreferredMode End!!!');
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getOperatorName_Async_0100
     * @tc.name    Verify the normal input of "slotId", test getOperatorName() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getOperatorName_Async_0100', 0, async function (done) {
        radio.getOperatorName(SLOT_0, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getOperatorName_Async_0100 FAIL err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getOperatorName_Async_0100 finish  data: ${data}`);
            expect(garrLongOperatorName).assertContain(data);
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getOperatorName_Async_0400
     * @tc.name    Verify the abnormal input of "slotId", test getOperatorName() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getOperatorName_Async_0400', 0, async function (done) {
        let slotId = -1;
        radio.getOperatorName(slotId, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getOperatorName_Async_0400 FAIL err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getOperatorName_Async_0400 finish  data: ${data}`);
            expect(data === '').assertTrue();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getOperatorName_Async_0500
     * @tc.name    Verify the abnormal input of "slotId", test getOperatorName() to view the callback result
     * @tc.desc    Function test
     */
     it('Telephony_NetworkSearch_getOperatorName_Async_0500', 0, async function (done) {
        let slotId = 1;
        radio.getOperatorName(slotId, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getOperatorName_Async_0500 FAIL err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getOperatorName_Async_0500 finish  data: ${data}`);
            expect(data === '').assertTrue();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getOperatorName_Async_0600
     * @tc.name    Verify the abnormal input of "slotId", test getOperatorName() to view the callback result
     * @tc.desc    Function test
     */
     it('Telephony_NetworkSearch_getOperatorName_Async_0600', 0, async function (done) {
        let slotId = 2;
        radio.getOperatorName(slotId, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getOperatorName_Async_0600 FAIL err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getOperatorName_Async_0600 finish  data: ${data}`);
            expect(data === '').assertTrue();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getOperatorName_Promise_0100
     * @tc.name    Verify the normal input of "slotId", test getOperatorName() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getOperatorName_Promise_0100', 0, async function (done) {
        try {
            let data = await radio.getOperatorName(SLOT_0);
            console.log(`Telephony_NetworkSearch_getOperatorName_Promise_0100 finish  data: ${data}`);
            expect(garrLongOperatorName).assertContain(data);
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getOperatorName_Promise_0100 FAIL err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getOperatorName_Promise_0400
     * @tc.name    Verify the abnormal input of "slotId", test getOperatorName() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getOperatorName_Promise_0400', 0, async function (done) {
        let slotId = -1;
        try {
            let data = await radio.getOperatorName(slotId);
            console.log(`Telephony_NetworkSearch_getOperatorName_Promise_0400 finish data: ${data}`);
            expect(data === '').assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getOperatorName_Promise_0400 FAIL err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getOperatorName_Promise_0500
     * @tc.name    Verify the abnormal input of "slotId", test getOperatorName() to view the callback result
     * @tc.desc    Function test
     */
     it('Telephony_NetworkSearch_getOperatorName_Promise_0500', 0, async function (done) {
        let slotId = 1;
        try {
            let data = await radio.getOperatorName(slotId);
            console.log(`Telephony_NetworkSearch_getOperatorName_Promise_0500 finish data: ${data}`);
            expect(data === '').assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getOperatorName_Promise_0500 FAIL err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getOperatorName_Promise_0600
     * @tc.name    Verify the abnormal input of "slotId", test getOperatorName() to view the callback result
     * @tc.desc    Function test
     */
     it('Telephony_NetworkSearch_getOperatorName_Promise_0600', 0, async function (done) {
        let slotId = 2;
        try {
            let data = await radio.getOperatorName(slotId);
            console.log(`Telephony_NetworkSearch_getOperatorName_Promise_0600 finish data: ${data}`);
            expect(data === '').assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getOperatorName_Promise_0600 FAIL err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_0100
     * @tc.name    Verify the default value of the callback, test getPreferredNetworkMode() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Async_0100', 0, async function (done) {
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            console.log('Telephony_NetworkSearch_recoverPreferredMode success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverPreferredMode fail err: ${err}`);
            expect().assertFail();
            return;
        }
        radio.getPreferredNetwork(SLOT_0, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0100 get FAIL err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0100 finish data: ${data}`);
            expect(data === radio.PREFERRED_NETWORK_MODE_AUTO).assertTrue();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_0200
     * @tc.name    The current preferred network mode is to set the GSM network type,
     *             test getPreferredNetworkMode() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Async_0200', 0, async function (done) {
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            console.log('Telephony_NetworkSearch_recoverPreferredMode success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverPreferredMode fail err: ${err}`);
            expect().assertFail();
            return;
        }
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_GSM, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0200 set FAIL err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0200 get FAIL err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0200 finish data: ${data}`);
                expect(data === radio.PREFERRED_NETWORK_MODE_GSM).assertTrue();
                done();
            })
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_0300
     * @tc.name    The current preferred network mode is to set the WCDMA network type,
     *             test getPreferredNetworkMode() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Async_0300', 0, async function (done) {
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            console.log('Telephony_NetworkSearch_recoverPreferredMode success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverPreferredMode fail err: ${err}`);
            expect().assertFail();
            return;
        }
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_WCDMA, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0300 set FAIL err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0300 get FAIL err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0300 finish  data: ${data}`);
                expect(data === radio.PREFERRED_NETWORK_MODE_WCDMA).assertTrue();
                done();
            })
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_0400
     * @tc.name    The current preferred network mode is to set the LTE network type,
     *             test getPreferredNetworkMode() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Async_0400', 0, async function (done) {
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            console.log('Telephony_NetworkSearch_recoverPreferredMode success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverPreferredMode fail err: ${err}`);
            expect().assertFail();
            return;
        }
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0400 set FAIL err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0400 get FAIL err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0400 finish  data: ${data}`);
                expect(data === radio.PREFERRED_NETWORK_MODE_LTE).assertTrue();
                done();
            })
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_0500
     * @tc.name    The current preferred network mode is to set the LTE\WCDMA network type,
     *             test getPreferredNetworkMode() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Async_0500', 0, async function (done) {
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            console.log('Telephony_NetworkSearch_recoverPreferredMode success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverPreferredMode fail err: ${err}`);
            expect().assertFail();
            return;
        }
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_WCDMA, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0500 set FAIL err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0500 get FAIL err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0500 finish  data: ${data}`);
                expect(data === radio.PREFERRED_NETWORK_MODE_LTE_WCDMA).assertTrue();
                done();
            })
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_0600
     * @tc.name    The current preferred network mode is to set the LTE\WCDMA\GSM network type,
     *             test getPreferredNetworkMode() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Async_0600', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_WCDMA_GSM, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0600 set FAIL err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0600 get FAIL err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0600 finish  data: ${data}`);
                expect(data === radio.PREFERRED_NETWORK_MODE_AUTO).assertTrue();
                done();
            })
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_0700
     * @tc.name    The current preferred network mode is to set the WCDMA\GSM network type,
     *             test getPreferredNetworkMode() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Async_0700', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_WCDMA_GSM, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0700 set FAIL err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0700 get FAIL err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0700 finish  data: ${data}`);
                expect(data === radio.PREFERRED_NETWORK_MODE_WCDMA_GSM).assertTrue();
                done();
            })
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_1000
     * @tc.name    Verify the abnormal input of "slotId", test getPreferredNetworkMode() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Async_1000', 0, async function (done) {
        let slotId = -1;
        radio.getPreferredNetwork(slotId, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1000 get PASS err: ${err}`);
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1000 finish FAIL data: ${data}`);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_1100
     * @tc.name    When the Radio status is off, test getPreferredNetwork() to see the return value
     * @tc.desc    Function test
     */
     it('Telephony_NetworkSearch_getPreferredNetwork_Async_1100', 0, async function (done) {
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            console.log('Telephony_NetworkSearch_recoverPreferredMode success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverPreferredMode fail err: ${err}`);
            expect().assertFail();
            return;
        }
        try {
            await radio.turnOffRadio();
            console.log('Telephony_NetworkSearch_getPreferredNetwork_Async_1100 trunOffRadio success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1100 trunOffRadio fail ${err}`);
            expect().assertFail();
            done();
            return;
        }
        radio.getPreferredNetwork(SLOT_0,async (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1100 get fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1100 finish  data: ${data}`);
            expect(data === radio.PREFERRED_NETWORK_MODE_AUTO).assertTrue();
            try {
                await radio.turnOnRadio();
                console.log('Telephony_NetworkSearch_getPreferredNetwork_Async_1100 trunOnRadio success');
            } catch (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1100 trunOnRadio fail ${err}`);
                expect().assertFail();
                done();
                return;
            }
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_1200
     * @tc.name    Verify the abnormal input of "slotId", test getPreferredNetworkMode() to view the callback result
     * @tc.desc    Function test
     */
     it('Telephony_NetworkSearch_getPreferredNetwork_Async_1200', 0, async function (done) {
        let slotId = 1;
        radio.getPreferredNetwork(slotId, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1200 get PASS err: ${err}`);
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1200 finish FAIL data: ${data}`);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_1300
     * @tc.name    Verify the abnormal input of "slotId", test getPreferredNetworkMode() to view the callback result
     * @tc.desc    Function test
     */
     it('Telephony_NetworkSearch_getPreferredNetwork_Async_1300', 0, async function (done) {
        let slotId = 2;
        radio.getPreferredNetwork(slotId, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1300 get PASS err: ${err}`);
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1300 finish FAIL data: ${data}`);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Promise_0100
     * @tc.name    Verify the default value of callback, test getPreferredNetworkMode() to view the return result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Promise_0100', 0, async function (done) {
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            console.log('Telephony_NetworkSearch_recoverPreferredMode success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverPreferredMode fail err: ${err}`);
            expect().assertFail();
            return;
        }
        try {
            let data = await radio.getPreferredNetwork(SLOT_0);
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_0100 finish  data: ${data}`);
            expect(data === radio.PREFERRED_NETWORK_MODE_AUTO).assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_0100 FAIL err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Promise_0200
     * @tc.name    The current preferred network mode is to set the GSM network type, test getPreferredNetworkMode()
     *             to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Promise_0200', 0, async function (done) {
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_GSM);
            let data = await radio.getPreferredNetwork(SLOT_0);
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_0200 finish data: ${data}`);
            expect(data === radio.PREFERRED_NETWORK_MODE_GSM).assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_0200 FAIL err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Promise_0300
     * @tc.name    The current preferred network mode is to set the WCDMA network type,
     *             test getPreferredNetworkMode() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Promise_0300', 0, async function (done) {
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_WCDMA);
            let data = await radio.getPreferredNetwork(SLOT_0);
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_0300 finish data: ${data}`);
            expect(data === radio.PREFERRED_NETWORK_MODE_WCDMA).assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_0300 FAIL err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Promise_0400
     * @tc.name    The current preferred network mode is to set the LTE network type,
     *             test getPreferredNetworkMode() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Promise_0400', 0, async function (done) {
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE);
            let data = await radio.getPreferredNetwork(SLOT_0);
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_0400 finish data: ${data}`);
            expect(data === radio.PREFERRED_NETWORK_MODE_LTE).assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_0400 FAIL err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Promise_0500
     * @tc.name    The current preferred network mode is to set the LTE\WCDMA network type,
     *             test getPreferredNetworkMode() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Promise_0500', 0, async function (done) {
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_WCDMA);
            let data = await radio.getPreferredNetwork(SLOT_0);
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_0500 finish data: ${data}`);
            expect(data === radio.PREFERRED_NETWORK_MODE_LTE_WCDMA).assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_0500 FAIL err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Promise_0600
     * @tc.name    The current preferred network mode is to set the LTE\WCDMA\GSM network type,
     *             test getPreferredNetworkMode() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Promise_0600', 0, async function (done) {
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_WCDMA_GSM);
            let data = await radio.getPreferredNetwork(SLOT_0);
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_0600 finish data: ${data}`);
            expect(data === radio.PREFERRED_NETWORK_MODE_AUTO).assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_0600 FAIL err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Promise_0700
     * @tc.name    The current preferred network mode is to set the WCDMA\GSM network type,
     *             test getPreferredNetworkMode() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Promise_0700', 0, async function (done) {
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_WCDMA_GSM);
            let data = await radio.getPreferredNetwork(SLOT_0);
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_0700 finish data: ${data}`);
            expect(data === radio.PREFERRED_NETWORK_MODE_WCDMA_GSM).assertTrue();
        } catch (err) {
            console.log('Telephony_NetworkSearch_getPreferredNetwork_Promise_0700 FAIL err' + err);
            expect().assertFail();
            done();
            return;
        }
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Promise_1000
     * @tc.name    Verify the abnormal input of "slotId", test getPreferredNetworkMode() to view the return result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Promise_1000', 0, async function (done) {
        try {
            let slotId = -1;
            let data = await radio.getPreferredNetwork(slotId);
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1000 FAIL  data: ${data}`);
            expect().assertFail();
            done();
            return;
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1000 finish PASS err: ${err}`);
            done();
            return;
        }
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_1100
     * @tc.name    When the Radio status is off, test getPreferredNetwork() to see the return value
     * @tc.desc    Function test
     */
     it('Telephony_NetworkSearch_getPreferredNetwork_Promise_1100', 0, async function (done) {
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            console.log('Telephony_NetworkSearch_recoverPreferredMode success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverPreferredMode fail err: ${err}`);
            expect().assertFail();
            return;
        }
        try {
            await radio.turnOffRadio();
            console.log('Telephony_NetworkSearch_getPreferredNetwork_Promise_1100 trunOffRadio success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1100 trunOffRadio fail ${err}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let data = await radio.getPreferredNetwork(SLOT_0);
            console.log(
                `Telephony_NetworkSearch_getPreferredNetwork_Promise_1100 finish data: ${JSON.stringify(data)}`);
            expect(data === radio.PREFERRED_NETWORK_MODE_AUTO).assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1100 FAIL err: ${err}`);
            expect().assertFail();
        }
        try {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_getPreferredNetwork_Promise_1100 trunOnRadio success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1100 trunOnRadio fail ${err}`);
            expect().assertFail();
            done();
            return;
        }
       done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Promise_1200
     * @tc.name    Verify the abnormal input of "slotId", test getPreferredNetworkMode() to view the return result
     * @tc.desc    Function test
     */
     it('Telephony_NetworkSearch_getPreferredNetwork_Promise_1200', 0, async function (done) {
        try {
            let slotId = 1;
            let data = await radio.getPreferredNetwork(slotId);
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1200 FAIL  data: ${data}`);
            expect().assertFail();
            done();
            return;
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1200 finish PASS err: ${err}`);
            done();
            return;
        }
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Promise_1300
     * @tc.name    Verify the abnormal input of "slotId", test getPreferredNetworkMode() to view the return result
     * @tc.desc    Function test
     */
     it('Telephony_NetworkSearch_getPreferredNetwork_Promise_1300', 0, async function (done) {
        try {
            let slotId = 2;
            let data = await radio.getPreferredNetwork(slotId);
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1300 FAIL  data: ${data}`);
            expect().assertFail();
            done();
            return;
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1300 finish PASS err: ${err}`);
            done();
            return;
        }
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Async_0100
     * @tc.name    Verify the abnormal input of "preferredNetworkMode",
     *             test setPreferredNetwork() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Async_0100', 0, async function (done) {
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_GSM);
            let data = await radio.getPreferredNetwork(SLOT_0);
            console.log(`Telephony_NetworkSearch_recoverPreferredMode success data: ${JSON.stringify(data)}`);
            expect(data === radio.PREFERRED_NETWORK_MODE_GSM).assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverPreferredMode fail err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        radio.setPreferredNetwork(SLOT_0, PREFERRED_MODE_ERR1, (err,data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0100 set  err: ${err}`);
                radio.getPreferredNetwork(SLOT_0, (err, data) => {
                    if (err) {
                        console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0100 get FAIL err: ${err}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(
                        `Telephony_NetworkSearch_setPreferredNetwork_Async_0100 finish data: ${JSON.stringify(data)}`);
                    expect(data === radio.PREFERRED_NETWORK_MODE_GSM).assertTrue();
                    done();
                    return;
                })
                
            } else {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0100 FAIL err: ${err}`);
                expect().assertFail();
                done();
            }
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Async_0400
     * @tc.name    Verify the "slotId" abnormal input, test setPreferredNetwork() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Async_0400', 0, async function (done) {
        let slotId = -1;
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            let data = await radio.getPreferredNetwork(SLOT_0);
            console.log(`Telephony_NetworkSearch_recoverPreferredMode success data: ${JSON.stringify(data)}`);
            expect(data === radio.PREFERRED_NETWORK_MODE_AUTO).assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverPreferredMode fail err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        radio.setPreferredNetwork(slotId, radio.PREFERRED_NETWORK_MODE_GSM, (err,data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0400 finish err: ${err}`);
                radio.getPreferredNetwork(SLOT_0, (err, data) => {
                    if (err) {
                        console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0400 get FAIL err: ${err}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(
                        `Telephony_NetworkSearch_setPreferredNetwork_Async_0400 finish data: ${JSON.stringify(data)}`);
                    expect(data === radio.PREFERRED_NETWORK_MODE_AUTO).assertTrue();
                    done();
                    return;
                })
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0400 FAIL: not go to err`);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Async_0500
     * @tc.name    When the Radio status is off, test setPreferredNetwork() to see the return value
     * @tc.desc    Function test
     */
     it('Telephony_NetworkSearch_setPreferredNetwork_Async_0500', 0, async function (done) {
        try {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_setPreferredNetwork_Async_0500 trunOnRadio success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0500 trunOnRadio fail ${err}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            console.log('Telephony_NetworkSearch_recoverPreferredMode success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverPreferredMode fail err: ${err}`);
            expect().assertFail();
            return;
        }
        try {
            await radio.turnOffRadio();
            console.log('Telephony_NetworkSearch_setPreferredNetwork_Async_0500 trunOffRadio success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0500 trunOffRadio fail ${err}`);
            expect().assertFail();
            done();
            return;
        }
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_WCDMA, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0500 set FAIL err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, async (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0500 get FAIL err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0500 finish  data: ${data}`);
                expect(data === radio.PREFERRED_NETWORK_MODE_WCDMA).assertTrue();
                try {
                    await radio.turnOnRadio();
                    console.log('Telephony_NetworkSearch_setPreferredNetwork_Async_0500 trunOnRadio success');
                } catch (err) {
                    console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0500 trunOnRadio fail ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                done();
            })
        })
        
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Async_0600
     * @tc.name    Verify the "slotId" abnormal input, test setPreferredNetwork() to view the callback result
     * @tc.desc    Function test
     */
     it('Telephony_NetworkSearch_setPreferredNetwork_Async_0600', 0, async function (done) {
        let slotId = 1;
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            let data = await radio.getPreferredNetwork(SLOT_0);
            console.log(`Telephony_NetworkSearch_recoverPreferredMode success data: ${JSON.stringify(data)}`);
            expect(data === radio.PREFERRED_NETWORK_MODE_AUTO).assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverPreferredMode fail err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        radio.setPreferredNetwork(slotId, radio.PREFERRED_NETWORK_MODE_GSM, (err,data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0600 finish err: ${err}`);
                radio.getPreferredNetwork(SLOT_0, (err, data) => {
                    if (err) {
                        console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0600 get FAIL err: ${err}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(
                        `Telephony_NetworkSearch_setPreferredNetwork_Async_0600 finish data: ${JSON.stringify(data)}`);
                    expect(data === radio.PREFERRED_NETWORK_MODE_AUTO).assertTrue();
                    done();
                    return;
                })
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0600 FAIL: not go to err`);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Async_0700
     * @tc.name    Verify the "slotId" abnormal input, test setPreferredNetwork() to view the callback result
     * @tc.desc    Function test
     */
     it('Telephony_NetworkSearch_setPreferredNetwork_Async_0700', 0, async function (done) {
        let slotId = 2;
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            let data = await radio.getPreferredNetwork(SLOT_0);
            console.log(`Telephony_NetworkSearch_recoverPreferredMode success data: ${JSON.stringify(data)}`);
            expect(data === radio.PREFERRED_NETWORK_MODE_AUTO).assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverPreferredMode fail err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        radio.setPreferredNetwork(slotId, radio.PREFERRED_NETWORK_MODE_GSM, (err,data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0700 finish err: ${err}`);
                radio.getPreferredNetwork(SLOT_0, (err, data) => {
                    if (err) {
                        console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0700 get FAIL err: ${err}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(
                        `Telephony_NetworkSearch_setPreferredNetwork_Async_0700 finish data: ${JSON.stringify(data)}`);
                    expect(data === radio.PREFERRED_NETWORK_MODE_AUTO).assertTrue();
                    done();
                    return;
                })
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0700 FAIL: not go to err`);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Async_0800
     * @tc.name    Set the preferred network mode to LTE network type,
     *             and verify the RadioTechnology return value
     * @tc.desc    Function test
     */
     it('Telephony_NetworkSearch_setPreferredNetwork_Async_0800', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE, (err,data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0800 FAIL: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getRadioTech(SLOT_0, (err, {
                psRadioTech,
                csRadioTech
            }) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0800 fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(
                `Telephony_NetworkSearch_setPreferredNetwork_Async_0800 finish ps: ${psRadioTech} cs: ${csRadioTech}`);
                expect(psRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_LTE)
                expect(csRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_LTE)
                done();
            });
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Promise_0100
     * @tc.name    Verify the abnormal input of "preferredNetworkMode",
     *             test setPreferredNetwork() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Promise_0100', 0, async function (done) {
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            let data = await radio.getPreferredNetwork(SLOT_0);
            console.log(`Telephony_NetworkSearch_recoverPreferredMode success data: ${JSON.stringify(data)}`);
            expect(data === radio.PREFERRED_NETWORK_MODE_AUTO).assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverPreferredMode fail err: ${err}`);
            expect().assertFail();
            return;
        }
        try {
            await radio.setPreferredNetwork(SLOT_0, PREFERRED_MODE_ERR7);
            console.log('Telephony_NetworkSearch_setPreferredNetwork_Promise_0100 set FAIL: not go to err');
            expect().assertFail();
            done();
            return;
        } catch (err) {
            try {
                let data = await radio.getPreferredNetwork(SLOT_0);
                console.log(
                    `Telephony_NetworkSearch_setPreferredNetwork_Promise_0100 finish data: ${JSON.stringify(data)}`);
                expect(data === radio.PREFERRED_NETWORK_MODE_AUTO).assertTrue();
            } catch (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_0100 FAIL err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Promise_0400
     * @tc.name    Verify the abnormal input of "slotId", test setPreferredNetwork() return result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Promise_0400', 0, async function (done) {
        let soltId = -1;
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            console.log('Telephony_NetworkSearch_recoverPreferredMode success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverPreferredMode fail err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await radio.setPreferredNetwork(soltId, radio.PREFERRED_NETWORK_MODE_GSM);
            console.log('Telephony_NetworkSearch_setPreferredNetwork_Promise_0400 set fail: not go to err');
            expect().assertFail();
        } catch (err) {
            try {
                let data = await radio.getPreferredNetwork(SLOT_0);
                console.log(
                    `Telephony_NetworkSearch_setPreferredNetwork_Promise_0400 finish data: ${JSON.stringify(data)}`);
                expect(data === radio.PREFERRED_NETWORK_MODE_AUTO).assertTrue();
            } catch (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_0400 FAIL err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Promise_0500
     * @tc.name    When the Radio status is off, test setPreferredNetwork() to see the return value
     * @tc.desc    Function test
     */
     it('Telephony_NetworkSearch_setPreferredNetwork_Promise_0500', 0, async function (done) {
        try {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_setPreferredNetwork_Promise_0500 trunOnRadio success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_0500 trunOnRadio fail ${err}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            console.log('Telephony_NetworkSearch_recoverPreferredMode success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverPreferredMode fail err: ${err}`);
            expect().assertFail();
            return;
        }
        try {
            await radio.turnOffRadio();
            console.log('Telephony_NetworkSearch_setPreferredNetwork_Promise_0500 trunOffRadio success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_0500 trunOffRadio fail ${err}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_WCDMA);
            let data = await radio.getPreferredNetwork(SLOT_0);
            console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_0500 finish data: ${data}`);
            expect(data === radio.PREFERRED_NETWORK_MODE_WCDMA).assertTrue();
        } catch (err) {
            console.log('Telephony_NetworkSearch_setPreferredNetwork_Promise_0500 FAIL err' + err);
            expect().assertFail();
            done();
            return;
        }
        try {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_setPreferredNetwork_Promise_0500 trunOnRadio success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_0500 trunOnRadio fail ${err}`);
            expect().assertFail();
            done();
            return;
        }
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Promise_0600
     * @tc.name    Verify the abnormal input of "slotId", test setPreferredNetwork() return result
     * @tc.desc    Function test
     */
     it('Telephony_NetworkSearch_setPreferredNetwork_Promise_0600', 0, async function (done) {
        let soltId = 1;
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            console.log('Telephony_NetworkSearch_recoverPreferredMode success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverPreferredMode fail err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await radio.setPreferredNetwork(soltId, radio.PREFERRED_NETWORK_MODE_GSM);
            console.log('Telephony_NetworkSearch_setPreferredNetwork_Promise_0600 set fail: not go to err');
            expect().assertFail();
        } catch (err) {
            try {
                let data = await radio.getPreferredNetwork(SLOT_0);
                console.log(
                    `Telephony_NetworkSearch_setPreferredNetwork_Promise_0600 finish data: ${JSON.stringify(data)}`);
                expect(data === radio.PREFERRED_NETWORK_MODE_AUTO).assertTrue();
            } catch (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_0600 FAIL err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Promise_0700
     * @tc.name    Verify the abnormal input of "slotId", test setPreferredNetwork() return result
     * @tc.desc    Function test
     */
     it('Telephony_NetworkSearch_setPreferredNetwork_Promise_0700', 0, async function (done) {
        let soltId = 2;
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            console.log('Telephony_NetworkSearch_recoverPreferredMode success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverPreferredMode fail err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await radio.setPreferredNetwork(soltId, radio.PREFERRED_NETWORK_MODE_GSM);
            console.log('Telephony_NetworkSearch_setPreferredNetwork_Promise_0700 set fail: not go to err');
            expect().assertFail();
        } catch (err) {
            try {
                let data = await radio.getPreferredNetwork(SLOT_0);
                console.log(
                    `Telephony_NetworkSearch_setPreferredNetwork_Promise_0700 finish data: ${JSON.stringify(data)}`);
                expect(data === radio.PREFERRED_NETWORK_MODE_AUTO).assertTrue();
            } catch (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_0700 FAIL err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Promise_0800
     * @tc.name    Set the preferred network mode to LTE network type,
     *             and verify the RadioTechnology return value
     * @tc.desc    Function test
     */
     it('Telephony_NetworkSearch_setPreferredNetwork_Promise_0800', 0, async function (done) {
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE);
        } catch (err) {
            console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_0800 set fail err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let data = await radio.getRadioTech(SLOT_0);
            console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_0800 finish data: ${data}`);
            expect(data.psRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_LTE)
            expect(data.csRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_LTE)
        } catch (err) {
            console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_0800 fail err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        done()
    })
})
