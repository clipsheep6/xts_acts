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

describe('ActsetworkSearchRrOptionModeTest', function () {
    const SLOT_0 = 0;
    const SLOT_1 = 1;
    const SLOT_2 = 2;
    const SLOT_3 = -1;
    const WAIT_TIME = 5000;
    const NROPTION_MODE = [
        radio.NR_OPTION_UNKNOWN,
        radio.NR_OPTION_NSA_ONLY,
        radio.NR_OPTION_SA_ONLY,
        radio.NR_OPTION_NSA_AND_SA
    ]

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
            await sleep(WAIT_TIME);
        }
    }

    async function revertPreferredMode() {
        let data = await radio.getPreferredNetwork(SLOT_0);
        if (data !== radio.PREFERRED_NETWORK_MODE_AUTO) {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            await sleep(WAIT_TIME);
        }
    }
    beforeAll(async function () {
        await turnOnRadio();
    })

    afterEach(async function () {
        await turnOnRadio();
        await revertPreferredMode();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Async_0100
     * @tc.name    Test getNrOptionMode() to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Async_0100', 0, async function (done) {
        radio.getNrOptionMode((err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0100 get fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0100 end data: ${JSON.stringify(data)}`);
            expect(NROPTION_MODE).assertContain(data);
            done();
        });
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Async_0200
     * @tc.name    Test getNrOptionMode() to check the callback result when the Radio status is off
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Async_0200', 0, async function (done) {
        radio.turnOffRadio(err => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0200 turnOffRadio fail: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getNrOptionMode((err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0200 fail: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0200 end data: ${data}`);
                expect(data === radio.NR_OPTION_UNKNOWN).assertTrue();
                done();
            });
        });
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Async_0300
     * @tc.name    Test getNrOptionMode(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Async_0300', 0, async function (done) {
        radio.getNrOptionMode(SLOT_0, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0300 get fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0300 end data: ${JSON.stringify(data)}`);
            expect(NROPTION_MODE).assertContain(data);
            done();
        });
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Async_0400
     * @tc.name    Test getNrOptionMode(1) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Async_0400', 0, async function (done) {
        radio.getNrOptionMode(SLOT_1, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0400 get fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0400 end data: ${JSON.stringify(data)}`);
            expect(data === radio.NR_OPTION_UNKNOWN).assertTrue();
            done();
        });
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Async_0500
     * @tc.name    Test getNrOptionMode(-1) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Async_0500', 0, async function (done) {
        radio.getNrOptionMode(SLOT_3, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0500 get fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0500 end data: ${JSON.stringify(data)}`);
            expect(data === radio.NR_OPTION_UNKNOWN).assertTrue();
            done();
        });
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Async_0600
     * @tc.name    Test getNrOptionMode(2) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Async_0600', 0, async function (done) {
        radio.getNrOptionMode(SLOT_2, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0600 get fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0600 end data: ${JSON.stringify(data)}`);
            expect(data === radio.NR_OPTION_UNKNOWN).assertTrue();
            done();
        });
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Async_0700
     * @tc.name    Test getNrOptionMode() to check the callback result when the Radio status is off
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Async_0700', 0, async function (done) {
        radio.turnOffRadio(err => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0700 turnOffRadio fail: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getNrOptionMode(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0700 fail: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0700 end data: ${data}`);
                expect(data === radio.NR_OPTION_UNKNOWN).assertTrue();
                done();
            });
        });
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Async_1000
     * @tc.name    Test getNrOptionMode() to check the callback result when PreferredNetwork
     *             is PREFERRED_NETWORK_MODE_LTE_EVDO_CDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Async_1000', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_EVDO_CDMA, async (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_1000 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            await sleep(WAIT_TIME);
            radio.getNrOptionMode(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_1000 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_1000 end data: ${JSON.stringify(data)}`);
                expect(data === radio.NR_OPTION_NSA_ONLY).assertTrue();
                done();
            });
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Async_1100
     * @tc.name    Test getNrOptionMode() to check the callback result when PreferredNetwork
     *             is PREFERRED_NETWORK_MODE_NR
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Async_1100', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_NR, async (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_1100 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            await sleep(WAIT_TIME);
            radio.getNrOptionMode(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_1100 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_1100 end data: ${JSON.stringify(data)}`);
                expect(data === radio.NR_OPTION_SA_ONLY).assertTrue();
                done();
            });
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Promise_0100
     * @tc.name    Test getNrOptionMode() to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Promise_0100', 0, async function (done) {
        radio.getNrOptionMode().then(data => {
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_0100 end data: ${data}`);
            expect(NROPTION_MODE).assertContain(data);
            done();
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_0100 fail: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Promise_0200
     * @tc.name    Test getNrOptionMode() to check the callback result when the Radio status is off
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Promise_0200', 0, async function (done) {
        try {
            await radio.turnOffRadio();
            console.log('Telephony_NetworkSearch_getNrOptionMode_Promise_0200 turnOffRadio finish');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_0200 turnOffRadio fail: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let data = await radio.getNrOptionMode();
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_0200 success data ${data}`);
            expect(data === radio.NR_OPTION_UNKNOWN).assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_0200 fail ${err}`);
            expect().assertFail();
        }
        done();
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Promise_0300
     * @tc.name    Test getNrOptionMode(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Promise_0300', 0, async function (done) {
        radio.getNrOptionMode(SLOT_0).then(data => {
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_0300 end data: ${data}`);
            expect(NROPTION_MODE).assertContain(data);
            done();
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_0300 fail: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Promise_0400
     * @tc.name    Test getNrOptionMode(1) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Promise_0400', 0, async function (done) {
        radio.getNrOptionMode(SLOT_1).then(data => {
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_0400 end data: ${data}`);
            expect(data === radio.NR_OPTION_UNKNOWN).assertTrue();
            done();
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_0400 fail: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Promise_0500
     * @tc.name    Test getNrOptionMode(-1) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Promise_0500', 0, async function (done) {
        radio.getNrOptionMode(SLOT_3).then(data => {
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_0500 end data: ${data}`);
            expect(data === radio.NR_OPTION_UNKNOWN).assertTrue();
            done();
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_0500 fail: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Promise_0600
     * @tc.name    Test getNrOptionMode(2) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Promise_0600', 0, async function (done) {
        radio.getNrOptionMode(SLOT_2).then(data => {
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_0600 end data: ${data}`);
            expect(data === radio.NR_OPTION_UNKNOWN).assertTrue();
            done();
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_0600 fail: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Promise_0700
     * @tc.name    Test getNrOptionMode() to check the callback result when the Radio status is off
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Promise_0700', 0, async function (done) {
        try {
            await radio.turnOffRadio();
            console.log('Telephony_NetworkSearch_getNrOptionMode_Promise_0700 turnOffRadio finish');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_0700 turnOffRadio fail: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let data = await radio.getNrOptionMode(SLOT_0);
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_0700 success data ${data}`);
            expect(data === radio.NR_OPTION_UNKNOWN).assertTrue();
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_0700 fail ${err}`);
            expect().assertFail();
        }
        done();
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Promise_1000
     * @tc.name    Test getNrOptionMode() to check the callback result when PreferredNetwork
     *             is PREFERRED_NETWORK_MODE_LTE_EVDO_CDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Promise_1000', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_EVDO_CDMA).then(async () => {
            await sleep(WAIT_TIME);
            radio.getNrOptionMode(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_1000 end data: ${data}`);
                expect(data === radio.NR_OPTION_NSA_ONLY).assertTrue();
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_1000 fail: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_1000 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Promise_1100
     * @tc.name    Test getNrOptionMode() to check the callback result when PreferredNetwork
     *             is PREFERRED_NETWORK_MODE_NR
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Promise_1100', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_NR).then(async () => {
            await sleep(WAIT_TIME);
            radio.getNrOptionMode(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_1100 end data: ${data}`);
                expect(data === radio.NR_OPTION_SA_ONLY).assertTrue();
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_1100 fail: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_1100 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_isNrSupported_Async_0100
     * @tc.name    Test getNrOptionMode() to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_isNrSupported_Async_0100', 0, async function (done) {
        radio.getNrOptionMode((err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_isNrSupported_Async_0100 get fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_isNrSupported_Async_0100 end data: ${JSON.stringify(data)}`);
            expect(NROPTION_MODE).assertContain(data);
            done();
        });
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Async_0200
     * @tc.name    Test getNrOptionMode() to check the callback result when the Radio status is off
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Async_0200', 0, async function (done) {
        radio.turnOffRadio(err => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0200 turnOffRadio fail: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getNrOptionMode((err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0200 fail: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0200 end data: ${data}`);
                expect(data === radio.NR_OPTION_UNKNOWN).assertTrue();
                done();
            });
        });
    })

    /**
     * @tc.number  Telephony_NetworkSearch_isNrSupported_0100
     * @tc.name    Test getNrOptionMode() to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_IsNrSupported_0100', 0, async function (done) {
        let data = radio.isNrSupported();
        console.log(`Telephony_NetworkSearch_IsNrSupported_0100 end data: ${data}`);
        expect(data === true).assertTrue();
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_IsNrSupported_0200
     * @tc.name    Test getNrOptionMode() to check the callback result when the Radio status is off
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_IsNrSupported_0200', 0, async function (done) {
        try {
            await radio.turnOffRadio();
            console.log('Telephony_NetworkSearch_IsNrSupported_0200 turnOffRadio finish');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_IsNrSupported_0200 turnOffRadio fail: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        let data = radio.isNrSupported();
        console.log(`Telephony_NetworkSearch_IsNrSupported_0200 end data: ${data}`);
        expect(data === true).assertTrue();
        done();
    })
});