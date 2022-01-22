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
import { describe, it, expect, beforeAll, afterEach } from 'deccjsunit/index';

describe('NetworkSearchDeviceInformationTest', function () {
    const SLOT_0 = 0;
    const SLOT_1 = 1;
    const SLOT_2 = 2;
    const SLOT_3 = -1;
    const IMEI_LENGTH = 15;
    const MEID_LENGTH = 14;
    const TIME_RADIO_TURNON = 5000;

    function sleep(timeout) {
        return new Promise((reslove, reject) => {
            setTimeout(() => {
                reslove();
            }, timeout);
        })
    }

    async function turnOnRadio() {
        let isOn = await radio.isRadioOn();
        if (!isOn) {
            await radio.turnOnRadio();
            await sleep(TIME_RADIO_TURNON);
            console.log('Telephony_NetworkSearch_TurnOnRadio success');
        }
    }

    beforeAll(async function () {
        await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
        await turnOnRadio();
    })

    afterEach(async function () {
        await turnOnRadio();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getIMEI_Async_0100
     * @tc.name    Test getIMEI() to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getIMEI_Async_0100', 0, async function (done) {
        radio.getIMEI((err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getIMEI_Async_0100 fail: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getIMEI_Async_0100 end data: ${data}`);
            expect(data.length === IMEI_LENGTH || data.length === MEID_LENGTH).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getIMEI_Async_0200
     * @tc.name    Test getIMEI() to check the callback result when the Radio status is off
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getIMEI_Async_0200', 0, async function (done) {
        radio.turnOffRadio(err => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getIMEI_Async_0200 turnOffRadio fail: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getIMEI((err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getIMEI_Async_0200 fail: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getIMEI_Async_0200 end data: ${data}`);
                expect(data.length === IMEI_LENGTH || data.length === MEID_LENGTH).assertTrue();
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getIMEI_Async_0300
     * @tc.name    Test getIMEI(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getIMEI_Async_0300', 0, async function (done) {
        radio.getIMEI(SLOT_0, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getIMEI_Async_0300 fail: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getIMEI_Async_0300 end data: ${data}`);
            expect(data.length === IMEI_LENGTH || data.length === MEID_LENGTH).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getIMEI_Async_0400
     * @tc.name    Test getIMEI(1) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getIMEI_Async_0400', 0, async function (done) {
        radio.getIMEI(SLOT_1, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getIMEI_Async_0400 fail: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getIMEI_Async_0400 end data: ${data}`);
            expect(data === '').assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getIMEI_Async_0500
     * @tc.name    Test getIMEI(-1) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getIMEI_Async_0500', 0, async function (done) {
        radio.getIMEI(SLOT_3, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getIMEI_Async_0500 fail: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getIMEI_Async_0500 end data: ${data}`);
            expect(data === '').assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getIMEI_Async_0600
     * @tc.name    Test getIMEI(2) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getIMEI_Async_0600', 0, async function (done) {
        radio.getIMEI(SLOT_2, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getIMEI_Async_0600 fail: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getIMEI_Async_0600 end data: ${data}`);
            expect(data === '').assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getIMEI_Async_0700
     * @tc.name    Test getIMEI(0) to check the callback result when the Radio status is off
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getIMEI_Async_0700', 0, async function (done) {
        radio.turnOffRadio(err => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getIMEI_Async_0700 turnOffRadio fail: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getIMEI(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getIMEI_Async_0700 fail: ${err}`);
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getIMEI_Async_0700 end data: ${data}`);
                expect(data.length === IMEI_LENGTH || data.length === MEID_LENGTH).assertTrue();
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getIMEI_Promise_0100
     * @tc.name    Test getIMEI() to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getIMEI_Promise_0100', 0, async function (done) {
        radio.getIMEI().then(data => {
            console.log(`Telephony_NetworkSearch_getIMEI_Promise_0100 end data: ${data}`);
            expect(data.length === IMEI_LENGTH || data.length === MEID_LENGTH).assertTrue();
            done();
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getIMEI_Promise_0100 fail: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getIMEI_Promise_0200
     * @tc.name    Test getIMEI() to check the callback result when the Radio status is off
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getIMEI_Promise_0200', 0, async function (done) {
        try {
            await radio.turnOffRadio();
            console.log('Telephony_NetworkSearch_getIMEI_Promise_0200 turnOffRadio finish');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getIMEI_Promise_0200 turnOffRadio fail: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let data = await radio.getIMEI();
            console.log(`Telephony_NetworkSearch_getIMEI_Promise_0200 success data ${data}`);
            expect(data.length === IMEI_LENGTH || data.length === MEID_LENGTH).assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getIMEI_Promise_0200 fail ${err}`);
            expect().assertFail();
        }
        done();
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getIMEI_Promise_0300
     * @tc.name    Test getIMEI(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getIMEI_Promise_0300', 0, async function (done) {
        radio.getIMEI(SLOT_0).then(data => {
            console.log(`Telephony_NetworkSearch_getIMEI_Promise_0300 end data: ${data}`);
            expect(data.length === IMEI_LENGTH || data.length === MEID_LENGTH).assertTrue();
            done();
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getIMEI_Promise_0300 fail: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getIMEI_Promise_0400
     * @tc.name    Test getIMEI(1) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getIMEI_Promise_0400', 0, async function (done) {
        radio.getIMEI(SLOT_1).then(data => {
            console.log(`Telephony_NetworkSearch_getIMEI_Promise_0400 end data: ${data}`);
            expect(data === '').assertTrue();
            done();
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getIMEI_Promise_0400 fail: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getIMEI_Promise_0500
     * @tc.name    Test getIMEI(-1) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getIMEI_Promise_0500', 0, async function (done) {
        radio.getIMEI(SLOT_3).then(data => {
            console.log(`Telephony_NetworkSearch_getIMEI_Promise_0500 end data: ${data}`);
            expect(data === '').assertTrue();
            done();
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getIMEI_Promise_0500 fail: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getIMEI_Promise_0600
     * @tc.name    Test getIMEI(2) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getIMEI_Promise_0600', 0, async function (done) {
        radio.getIMEI(SLOT_2).then(data => {
            console.log(`Telephony_NetworkSearch_getIMEI_Promise_0600 end data: ${data}`);
            expect(data === '').assertTrue();
            done();
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getIMEI_Promise_0600 fail: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getIMEI_Promise_0700
     * @tc.name    Test getIMEI() to check the callback result when the Radio status is off
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getIMEI_Promise_0700', 0, async function (done) {
        try {
            await radio.turnOffRadio();
            console.log('Telephony_NetworkSearch_getIMEI_Promise_0700 turnOffRadio finish');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getIMEI_Promise_0700 turnOffRadio fail: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let data = await radio.getIMEI(SLOT_0);
            console.log(`Telephony_NetworkSearch_getIMEI_Promise_0700 success data ${data}`);
            expect(data.length === IMEI_LENGTH || data.length === MEID_LENGTH).assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getIMEI_Promise_0700 fail ${err}`);
            expect().assertFail();
        }
        done();
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getMEID_Async_1000
     * @tc.name    Test getMEID(0) to check the callback result 
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getMEID_Async_1000', 0, async function (done) {
        radio.getMEID(SLOT_0, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getMEID_Async_1000 fail: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getMEID_Async_1000 end data: ${data}`);
            expect(data === '').assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getMEID_Promise_1000
     * @tc.name    Test getMEID() to check the callback result 
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getMEID_Promise_1000', 0, async function (done) {
        radio.getMEID(SLOT_0).then(data => {
            console.log(`Telephony_NetworkSearch_getMEID_Promise_1000 end data: ${data}`);
            expect(data === '').assertTrue();
            done();
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getMEID_Promise_1000 fail: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getUniqueDeviceId_Async_0100
     * @tc.name    Test getUniqueDeviceId() to check the callback result 
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getUniqueDeviceId_Async_0100', 0, async function (done) {
        radio.getUniqueDeviceId((err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Async_0100 fail: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Async_0100 end data: ${data}`);
            expect(data.length === IMEI_LENGTH || data.length === MEID_LENGTH).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getUniqueDeviceId_Async_0200
     * @tc.name    Test getUniqueDeviceId() to check the callback result  when the Radio status is off
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getUniqueDeviceId_Async_0200', 0, async function (done) {
        radio.turnOffRadio(err => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Async_0200 turnOffRadio fail: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getUniqueDeviceId((err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Async_0200 fail: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Async_0200 end data: ${data}`);
                expect(data.length === IMEI_LENGTH || data.length === MEID_LENGTH).assertTrue();
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getUniqueDeviceId_Async_0300
     * @tc.name    Test getUniqueDeviceId(0) to check the callback result 
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getUniqueDeviceId_Async_0300', 0, async function (done) {
        radio.getUniqueDeviceId(SLOT_0, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Async_0300 fail: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Async_0300 end data: ${data}`);
            expect(data.length === IMEI_LENGTH || data.length === MEID_LENGTH).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getUniqueDeviceId_Async_0400
     * @tc.name    Test getUniqueDeviceId(1) to check the callback result 
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getUniqueDeviceId_Async_0400', 0, async function (done) {
        radio.getUniqueDeviceId(SLOT_1, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Async_0400 fail: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Async_0400 end data: ${data}`);
            expect(data === '').assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getUniqueDeviceId_Async_0500
     * @tc.name    Test getUniqueDeviceId(-1) to check the callback result 
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getUniqueDeviceId_Async_0500', 0, async function (done) {
        radio.getUniqueDeviceId(SLOT_3, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Async_0500 fail: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Async_0500 end data: ${data}`);
            expect(data === '').assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getUniqueDeviceId_Async_0600
     * @tc.name    Test getUniqueDeviceId(2) to check the callback result 
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getUniqueDeviceId_Async_0600', 0, async function (done) {
        radio.getUniqueDeviceId(SLOT_2, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Async_0600 fail: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Async_0600 end data: ${data}`);
            expect(data === '').assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getUniqueDeviceId_Async_0700
     * @tc.name    Test getUniqueDeviceId(0) to check the callback result when the Radio status is off
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getUniqueDeviceId_Async_0700', 0, async function (done) {
        radio.turnOffRadio(err => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Async_0700 turnOffRadio fail: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getUniqueDeviceId(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Async_0700 fail: ${err}`);
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Async_0700 end data: ${data}`);
                expect(data.length === IMEI_LENGTH || data.length === MEID_LENGTH).assertTrue();
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getUniqueDeviceId_Promise_0100
     * @tc.name    Test getUniqueDeviceId() to check the callback result 
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getUniqueDeviceId_Promise_0100', 0, async function (done) {
        radio.getUniqueDeviceId().then(data => {
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Promise_0100 end data: ${data}`);
            expect(data.length === IMEI_LENGTH || data.length === MEID_LENGTH).assertTrue();
            done();
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Promise_0100 fail: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getUniqueDeviceId_Promise_0200
     * @tc.name    Test getUniqueDeviceId() to check the callback result  when the Radio status is off
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getUniqueDeviceId_Promise_0200', 0, async function (done) {
        try {
            await radio.turnOffRadio();
            console.log('Telephony_NetworkSearch_getUniqueDeviceId_Promise_0200 turnOffRadio finish');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Promise_0200 turnOffRadio fail: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let data = await radio.getUniqueDeviceId();
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Promise_0200 success data ${data}`);
            expect(data.length === IMEI_LENGTH || data.length === MEID_LENGTH).assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Promise_0200 fail ${err}`);
            expect().assertFail();
        }
        done();
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getUniqueDeviceId_Promise_0300
     * @tc.name    Test getUniqueDeviceId(0) to check the callback result 
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getUniqueDeviceId_Promise_0300', 0, async function (done) {
        radio.getUniqueDeviceId(SLOT_0).then(data => {
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Promise_0300 end data: ${data}`);
            expect(data.length === IMEI_LENGTH || data.length === MEID_LENGTH).assertTrue();
            done();
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Promise_0300 fail: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getUniqueDeviceId_Promise_0400
     * @tc.name    Test getUniqueDeviceId(1) to check the callback result 
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getUniqueDeviceId_Promise_0400', 0, async function (done) {
        radio.getUniqueDeviceId(SLOT_1).then(data => {
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Promise_0400 end data: ${data}`);
            expect(data === '').assertTrue();
            done();
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Promise_0400 fail: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getUniqueDeviceId_Promise_0500
     * @tc.name    Test getUniqueDeviceId(-1) to check the callback result 
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getUniqueDeviceId_Promise_0500', 0, async function (done) {
        radio.getUniqueDeviceId(SLOT_3).then(data => {
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Promise_0500 end data: ${data}`);
            expect(data === '').assertTrue();
            done();
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Promise_0500 fail: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getUniqueDeviceId_Promise_0600
     * @tc.name    Test getUniqueDeviceId(2) to check the callback result 
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getUniqueDeviceId_Promise_0600', 0, async function (done) {
        radio.getUniqueDeviceId(SLOT_2).then(data => {
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Promise_0600 end data: ${data}`);
            expect(data === '').assertTrue();
            done();
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Promise_0600 fail: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getUniqueDeviceId_Promise_0700
     * @tc.name    Test getUniqueDeviceId(0) to check the callback result when the Radio status is off
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getUniqueDeviceId_Promise_0700', 0, async function (done) {
        try {
            await radio.turnOffRadio();
            console.log('Telephony_NetworkSearch_getUniqueDeviceId_Promise_0700 turnOffRadio finish');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Promise_0700 turnOffRadio fail: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let data = await radio.getUniqueDeviceId(SLOT_0);
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Promise_0700 success data ${data}`);
            expect(data.length === IMEI_LENGTH || data.length === MEID_LENGTH).assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Promise_0700 fail ${err}`);
            expect().assertFail();
        }
        done();
    });
});