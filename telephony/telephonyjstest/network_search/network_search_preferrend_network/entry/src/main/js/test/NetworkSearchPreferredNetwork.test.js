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

describe('ActsNetworkSearchPreferredNetworkTest', function () {
    const SLOT_0 = 0;
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
        }
    }

    beforeAll(async function () {
        await turnOnRadio();
        await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
    })

    afterEach(async function () {
        await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_1100
     * @tc.name    Test getPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_CDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Async_1100', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_CDMA, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1100 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1100 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1100 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_CDMA);
                done();
            })
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_1200
     * @tc.name    Test getPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_EVDO
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Async_1200', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_EVDO, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1200 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1200 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1200 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_EVDO);
                done();
            })
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_1300
     * @tc.name    Test getPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_EVDO_CDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Async_1300', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_EVDO_CDMA, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1300 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1300 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1300 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_EVDO_CDMA);
                done();
            })
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_1400
     * @tc.name    Test getPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_WCDMA_GSM_EVDO_CDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Async_1400', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_WCDMA_GSM_EVDO_CDMA, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1400 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1400 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1400 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_WCDMA_GSM_EVDO_CDMA);
                done();
            })
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_1500
     * @tc.name    Test getPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_LTE_EVDO_CDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Async_1500', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_EVDO_CDMA, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1500 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1500 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1500 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_LTE_EVDO_CDMA);
                done();
            })
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_1600
     * @tc.name    Test getPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_LTE_WCDMA_GSM_EVDO_CDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Async_1600', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_WCDMA_GSM_EVDO_CDMA, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1600 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1600 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1600 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_LTE_WCDMA_GSM_EVDO_CDMA);
                done();
            })
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_1700
     * @tc.name    Test getPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_TDSCDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Async_1700', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_TDSCDMA, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1700 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1700 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1700 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_TDSCDMA);
                done();
            })
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_1800
     * @tc.name    Test getPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_TDSCDMA_GSM
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Async_1800', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_TDSCDMA_GSM, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1800 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1800 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_1800 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_TDSCDMA_GSM);
                done();
            })
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Promise_1100
     * @tc.name    Test getPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_CDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Promise_1100', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_CDMA).then(() => {
            radio.getPreferredNetwork(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1100 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_CDMA);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1100 get fail err: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1100 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Promise_1200
     * @tc.name    Test getPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_EVDO
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Promise_1200', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_EVDO).then(() => {
            radio.getPreferredNetwork(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1200 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_EVDO);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1200 get fail err: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1200 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Promise_1300
     * @tc.name    Test getPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_EVDO_CDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Promise_1300', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_EVDO_CDMA).then(() => {
            radio.getPreferredNetwork(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1300 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_EVDO_CDMA);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1300 get fail err: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1300 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Promise_1400
     * @tc.name    Test getPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_WCDMA_GSM_EVDO_CDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Promise_1400', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_WCDMA_GSM_EVDO_CDMA).then(() => {
            radio.getPreferredNetwork(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1400 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_WCDMA_GSM_EVDO_CDMA);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1400 get fail err: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1400 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Promise_1500
     * @tc.name    Test getPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_LTE_EVDO_CDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Promise_1500', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_EVDO_CDMA).then(() => {
            radio.getPreferredNetwork(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1500 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_LTE_EVDO_CDMA);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1500 get fail err: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1500 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Promise_1600
     * @tc.name    Test getPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_LTE_WCDMA_GSM_EVDO_CDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Promise_1600', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_WCDMA_GSM_EVDO_CDMA).then(() => {
            radio.getPreferredNetwork(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1600 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_LTE_WCDMA_GSM_EVDO_CDMA);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1600 get fail err: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1600 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Promise_1700
     * @tc.name    Test getPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_TDSCDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Promise_1700', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_TDSCDMA).then(() => {
            radio.getPreferredNetwork(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1700 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_TDSCDMA);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1700 get fail err: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1700 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Promise_1800
     * @tc.name    Test getPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_TDSCDMA_GSM
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Promise_1800', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_TDSCDMA_GSM).then(() => {
            radio.getPreferredNetwork(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1800 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_TDSCDMA_GSM);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1800 get fail err: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_1800 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Async_1200
     * @tc.name    Test setPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_TDSCDMA_WCDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Async_1200', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_TDSCDMA_WCDMA, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1200 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1200 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1200 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_TDSCDMA_WCDMA);
                done();
            })
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Async_1300
     * @tc.name    Test setPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_TDSCDMA_WCDMA_GSM
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Async_1300', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_TDSCDMA_WCDMA_GSM, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1300 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1300 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1300 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_TDSCDMA_WCDMA_GSM);
                done();
            })
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Async_1400
     * @tc.name    Test setPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_LTE_TDSCDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Async_1400', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_TDSCDMA, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1400 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1400 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1400 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_LTE_TDSCDMA);
                done();
            })
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Async_1500
     * @tc.name    Test setPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_LTE_TDSCDMA_GSM
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Async_1500', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_TDSCDMA_GSM, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1500 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1500 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1500 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_LTE_TDSCDMA_GSM);
                done();
            })
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Async_1600
     * @tc.name    Test setPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_LTE_TDSCDMA_WCDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Async_1600', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_TDSCDMA_WCDMA, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1600 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1600 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1600 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_LTE_TDSCDMA_WCDMA);
                done();
            })
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Async_1700
     * @tc.name    Test setPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_LTE_TDSCDMA_WCDMA_GSM
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Async_1700', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_TDSCDMA_WCDMA_GSM, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1700 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1700 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1700 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_LTE_TDSCDMA_WCDMA_GSM);
                done();
            })
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Async_1800
     * @tc.name    Test setPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_TDSCDMA_WCDMA_GSM_EVDO_CDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Async_1800', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_TDSCDMA_WCDMA_GSM_EVDO_CDMA, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1800 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1800 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1800 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_TDSCDMA_WCDMA_GSM_EVDO_CDMA);
                done();
            })
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Async_1900
     * @tc.name    Test setPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_LTE_TDSCDMA_WCDMA_GSM_EVDO_CDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Async_1900', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_TDSCDMA_WCDMA_GSM_EVDO_CDMA, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1900 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1900 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_1900 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_LTE_TDSCDMA_WCDMA_GSM_EVDO_CDMA);
                done();
            })
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Promise_0100
     * @tc.name    Test setPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             not supported mode
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Promise_0100', 0, async function (done) {
        let preferredMode = 77;
        radio.setPreferredNetwork(SLOT_0, preferredMode, (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_0100 set fail err: ${err}`);
                radio.getPreferredNetwork(SLOT_0, (err, data) => {
                    if (err) {
                        console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_0100 get fail err: ${err}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_0100 finish  data: ${data}`);
                    expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_AUTO);
                    done();
                })
            } else {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_0100 set not into err`);
                expect().assertFail();
                done();
            }
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Promise_1200
     * @tc.name    Test setPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_TDSCDMA_WCDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Promise_1200', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_TDSCDMA_WCDMA).then(() => {
            radio.getPreferredNetwork(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1200 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_TDSCDMA_WCDMA);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1200 get fail err: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1200 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Promise_1300
     * @tc.name    Test setPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_TDSCDMA_WCDMA_GSM
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Promise_1300', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_TDSCDMA_WCDMA_GSM).then(() => {
            radio.getPreferredNetwork(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1300 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_TDSCDMA_WCDMA_GSM);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1300 get fail err: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1300 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Promise_1400
     * @tc.name    Test setPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_LTE_TDSCDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Promise_1400', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_TDSCDMA).then(() => {
            radio.getPreferredNetwork(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1400 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_LTE_TDSCDMA);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1400 get fail err: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1400 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Promise_1500
     * @tc.name    Test setPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_LTE_TDSCDMA_GSM
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Promise_1500', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_TDSCDMA_GSM).then(() => {
            radio.getPreferredNetwork(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1500 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_LTE_TDSCDMA_GSM);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1500 get fail err: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1500 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Promise_1600
     * @tc.name    Test setPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_LTE_TDSCDMA_WCDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Promise_1600', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_TDSCDMA_WCDMA).then(() => {
            radio.getPreferredNetwork(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1600 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_LTE_TDSCDMA_WCDMA);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1600 get fail err: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1600 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Promise_1700
     * @tc.name    Test setPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_LTE_TDSCDMA_WCDMA_GSM
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Promise_1700', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_TDSCDMA_WCDMA_GSM).then(() => {
            radio.getPreferredNetwork(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1700 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_LTE_TDSCDMA_WCDMA_GSM);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1700 get fail err: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1700 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Promise_1800
     * @tc.name    Test setPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_TDSCDMA_WCDMA_GSM_EVDO_CDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Promise_1800', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_TDSCDMA_WCDMA_GSM_EVDO_CDMA).then(() => {
            radio.getPreferredNetwork(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1800 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_TDSCDMA_WCDMA_GSM_EVDO_CDMA);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1800 get fail err: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1800 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Promise_1900
     * @tc.name    Test setPreferredNetwork(0) to check the callback result when PreferredNetworkMode is
     *             PREFERRED_NETWORK_MODE_LTE_TDSCDMA_WCDMA_GSM_EVDO_CDMA
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Promise_1900', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_TDSCDMA_WCDMA_GSM_EVDO_CDMA).then(() => {
            radio.getPreferredNetwork(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1900 finish  data: ${data}`);
                expect(data).assertEqual(radio.PREFERRED_NETWORK_MODE_LTE_TDSCDMA_WCDMA_GSM_EVDO_CDMA);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1900 get fail err: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_1900 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    });
})