/* Copyright (C) 2021 Huawei Device Co., Ltd.
   Licensed under the Apache License, Version 2.0 (the "License")
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License. */

import call from '@ohos.telephony_call';
import callInner from '@ohos.tel_call_manager_inner_api';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index';

describe('CallManagement', function () {
    const TEST_RUN_TIME = 10;
    const BAD_CALLID = -100;
    const NULLZERO = 0;
    const MAIN_CALLID_1001 = 1001;
    const SLOT_1 = 1;
    const ACTIVATE_TRUE = true;
    const ACTIVATE_FALSE = true;

    /* @tc.number  Telephony_CallManager_isInEmergencyCall_Async_0300
       @tc.name    Test the function runs 10 times, stability test
       @tc.desc    Reliability test */
    it('Telephony_CallManager_isInEmergencyCall_Async_0300', 0, async function (done) {
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            call.isInEmergencyCall((err, res) => {
                if (err) {
                    console.log('Telephony_CallManager_isInEmergencyCall_Async_0300 fail');
                    expect().assertFail();
                }
                expect(res).assertFalse();
                console.log('Telephony_CallManager_isInEmergencyCall_Async_0300 finish');
                done();
            });
        }

    });

    /**
  * @tc.number  Telephony_CallManager_isInEmergencyCall_Promise_0300
  * @tc.name    Test the function runs 10 times, stability test
  * @tc.desc    Reliability test
  */
    it('Telephony_CallManager_isInEmergencyCall_Promise_0300', 0, async function (done) {
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            try {
                var promise = call.isInEmergencyCall();
                promise.then((data) => {
                    console.log(`Telephony_CallManager_isInEmergencyCall_Promise_0100 data = ${data}`);
                    expect(data).assertFalse();
                });
            } catch (err) {
                console.log('Telephony_CallManager_isInEmergencyCall_Promise_0100 fail');
                expect().assertFail();
                done();
                return;
            }
        }
        console.log('Telephony_CallManager_isInEmergencyCall_Promise_0300 finish');
        done();
    });

    /* @tc.number  Telephony_CallManager_startDtmf_Async_1100
       @tc.name    Test the function runs 10 times, stability test
       @tc.desc    Reliability test */
    it('Telephony_CallManager_startDtmf_Async_1100', 0, async function (done) {
        var callId = 1004;
        var dtmfNum0 = 0;
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            call.startDtmf(callId, dtmfNum0, (err) => {
                if (err) {
                    console.log('Telephony_CallManager_startDtmf_Async_1100 finish');
                }
                // no return value
                expect().assertFail();
            });
        }
        console.log('Telephony_CallManager_startDtmf_Async_1100 finish');
    });

    /**
  * @tc.number  Telephony_CallManager_startDtmf_Promise_1200
  * @tc.name    Test the function runs 10 times, stability test
  * @tc.desc    Reliability test
  */
    it('Telephony_CallManager_startDtmf_Promise_1200', 0, async function (done) {
        var callid1004 = 1004;
        var dtmfNum0 = 0;
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            try {
                await call.startDtmf(callid1004, dtmfNum0);
                expect().assertFail();
            } catch (err) {
                console.log('Telephony_CallManager_startDtmf_Promise_1200 finish');
            }
        }
        console.log('Telephony_CallManager_startDtmf_Promise_1200 finish');
        done();
    });

    /* @tc.number  Telephony_CallManager_stopDtmf_Async_0300
       @tc.name    Test the function runs 10 times, stability test
       @tc.desc    Reliability test */
    it('Telephony_CallManager_stopDtmf_Async_0300', 0, async function (done) {
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            call.stopDtmf(MAIN_CALLID_1001, '0', (err) => {
                if (err) {
                    console.log('Telephony_CallManager_stopDtmf_Async_0300 finish');
                }
                // no return value
                expect().assertFail();
            });
        }
        console.log('Telephony_CallManager_startDtmf_Async_1100 finish');
        done();
    });

    /**
  * @tc.number  Telephony_CallManager_stopDtmf_Promise_0300
  * @tc.name    Test the function runs 10 times, stability test
  * @tc.desc    Reliability test
  */
    it('Telephony_CallManager_stopDtmf_Promise_0300', 0, async function (done) {
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            try {
                await call.stopDtmf(MAIN_CALLID_1001);
                console.log('Telephony_CallManager_stopDtmf_Promise_0200 fail');
                expect().assertFail();
            } catch (err) {
                console.log('Telephony_CallManager_stopDtmf_Promise_0200 finish');
            }
        }
        console.log('Telephony_CallManager_stopDtmf_Promise_0300 finish');
        done();
    });

    /* @tc.number  Telephony_CallManager_sendDtmf_Async_0600
       @tc.name    Test the function runs 10 times, stability test
       @tc.desc    Reliability test */
    it('Telephony_CallManager_sendDtmf_Async_0600', 0, async function (done) {
        var B = 66;
        var cnt = 0;
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            call.sendDtmf(MAIN_CALLID_1001, B, (err) => {
                if (err) {
                    console.log('Telephony_CallManager_sendDtmf_Async_0600 finish');
                }
                // no return value
                expect().assertFail();
            });
        }
        console.log('Telephony_CallManager_sendDtmf_Async_0600 finish');
        done();
    });

    /**
  * @tc.number  Telephony_CallManager_sendDtmf_Promise_0600
  * @tc.name    Test the function runs 10 times, stability test
  * @tc.desc    Reliability test
  */
    it('Telephony_CallManager_sendDtmf_Promise_0600', 0, async function (done) {
        var B = 66;
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            try {
                await call.sendDtmf(MAIN_CALLID_1001, B);
                console.log('Telephony_CallManager_sendDtmf_Promise_0600 fail');
                expect().assertFail();
            } catch (err) {
                console.log('Telephony_CallManager_sendDtmf_Promise_0600 finish');
            }
        }
        console.log('Telephony_CallManager_sendDtmf_Promise_0600 finish');
        done();
    });

    /* @tc.number  Telephony_CallManager_sendBurstDtmf_Async_1300
       @tc.name    Test the function runs 10 times, stability test
       @tc.desc    Reliability test */
    it('Telephony_CallManager_sendBurstDtmf_Async_1300', 0, async function (done) {
        var cnt = 0;
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            var BunchDtmfOptions = {
                callId: MAIN_CALLID_1001,
                str: '4',
                on: 0,
                off: 0
            };
            call.sendBurstDtmf(BunchDtmfOptions, (err) => {
                if (err) {
                    console.log('Telephony_CallManager_sendBurstDtmf_Async_1300 finish');
                }
                // no return value
                expect().assertFail();
            });
        }
        console.log('Telephony_CallManager_sendBurstDtmf_Async_1300 finish');
        done();
    });

    /**
  * @tc.number  Telephony_CallManager_sendBurstDtmf_Promise_1300
  * @tc.name    Test the function runs 10 times, stability test
  * @tc.desc    Reliability test
  */
    it('Telephony_CallManager_sendBurstDtmf_Promise_1300', 0, async function (done) {
        var BunchDtmfOptions = {
            callId: MAIN_CALLID_1001,
            str: '4',
            on: 0,
            off: 0
        };
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            try {
                await call.sendBurstDtmf(BunchDtmfOptions);
                console.log('Telephony_CallManager_sendBurstDtmf_Promise_1300 fail');
                expect().assertFail();
            } catch (err) {
                console.log('Telephony_CallManager_sendBurstDtmf_Promise_1300 finish');

            }
        }
        console.log('Telephony_CallManager_sendBurstDtmf_Promise_1300 finish');
        done();
    });

    /* @tc.number  Telephony_CallManager_getCallWaiting_Async_0400
       @tc.name    Test the function runs 10 times, stability test
       @tc.desc    Reliability test */
    it('Telephony_CallManager_getCallWaiting_Async_0400', 0, async function (done) {
        var cnt = 0;
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            call.setCallWaiting(SLOT_1, ACTIVATE_FALSE, (err) => {
                if (err) {
                    console.log('Telephony_CallManager_getCallWaiting_Async_0200 fail');
                    expect().assertFail();
                    done();
                    return;
                }
                call.getCallWaiting(SLOT_1, (err, res) => {
                    if (err) {
                        console.log('Telephony_CallManager_getCallWaiting_Async_0200 fail');
                        expect().assertFail();
                        done();
                        return;
                    }
                    expect(res === NULLZERO).assertTrue();
                    cnt++;
                    if (cnt === TEST_RUN_TIME) {
                        console.log('Telephony_CallManager_getCallWaiting_Async_0200 finish');
                        done();
                    }
                });
            });
        }
    });

    /**
  * @tc.number  Telephony_CallManager_getCallWaiting_Promise_0300
  * @tc.name    Test the function runs 10 times, stability test
  * @tc.desc    Reliability test
  */
    it('Telephony_CallManager_getCallWaiting_Promise_0300', 0, async function (done) {
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            try {
                await call.setCallWaiting(SLOT_1, ACTIVATE_FALSE);
                var data = await call.getCallWaiting(SLOT_1);
                expect(data === NULLZERO).assertTrue();
                console.log('Telephony_CallManager_getCallWaiting_Promise_0300 finish');
            } catch (err) {
                console.log('Telephony_CallManager_getCallWaiting_Promise_0300 fail');
                expect().assertFail();
                done();
                return;
            }
        }
        console.log('Telephony_CallManager_getCallWaiting_Promise_0300 finish');
        done();
    });

    /* @tc.number  Telephony_CallManager_setCallWaiting_Async_0300
       @tc.name    Test the function runs 10 times, stability test
       @tc.desc    Reliability test */
    it('Telephony_CallManager_setCallWaiting_Async_0300', 0, async function (done) {
        var cnt = 0;
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            call.setCallWaiting(SLOT_1, ACTIVATE_FALSE, (err) => {
                if (err) {
                    console.log('Telephony_CallManager_getCallWaiting_Async_0200 fail');
                    expect().assertFail();
                    done();
                    return;
                }
                // no return value
                cnt++;
                if (cnt === TEST_RUN_TIME) {
                    done();
                }
            });
        }
    });

    /**
  * @tc.number  Telephony_CallManager_setCallWaiting_Promise_0300
  * @tc.name    Test the function runs 10 times, stability test
  * @tc.desc    Reliability test
  */
    it('Telephony_CallManager_setCallWaiting_Promise_0300', 0, async function (done) {
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            try {
                await call.setCallWaiting(SLOT_1, ACTIVATE_FALSE);
            } catch (err) {
                console.log('Telephony_CallManager_setCallWaiting_Promise_0300 fail');
                expect().assertFail();
                done();
                return;
            }
        }
        console.log('Telephony_CallManager_setCallWaiting_Promise_0300 finish');
        done();
    });

    /* @tc.number  Telephony_CallManager_combineConference_Async_0300
       @tc.name    Test the function runs 10 times, stability test
       @tc.desc    Reliability test */
    it('Telephony_CallManager_combineConference_Async_0300', 0, async function (done) {
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            call.combineConference(MAIN_CALLID_1001, (err) => {
                if (err) {
                    console.log('Telephony_CallManager_combineConference_Async_0300 finish');
                }
                expect().assertFail();
            });
        }
        console.log('Telephony_CallManager_combineConference_Async_0300 finish');
        done();
    });

    /**
  * @tc.number  Telephony_CallManager_combineConference_Promise_0300
  * @tc.name    Test the function runs 10 times, stability test
  * @tc.desc    Reliability test
  */
    it('Telephony_CallManager_combineConference_Promise_0300', 0, async function (done) {
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            try {
                await call.combineConference(MAIN_CALLID_1001);
                expect().assertFail();
            } catch (err) {
                done();
            }
        }
        console.log('Telephony_CallManager_combineConference_Promise_0300 finish');
        done();
    });

    /* @tc.number  Telephony_CallManager_getMainCallId_Async_0300
       @tc.name    Test the function runs 10 times, stability test
       @tc.desc    Reliability test */
    it('Telephony_CallManager_getMainCallId_Async_0300', 0, async function (done) {
        var cnt = 0;
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            call.getMainCallId(MAIN_CALLID_1001, (err, res) => {
                if (err) {
                    console.log('Telephony_CallManager_getMainCallId_Async_0300 fail');
                    done();
                }
                // no return value
                expect(res !== null).assertTrue();
            });
        }
        console.log('Telephony_CallManager_getMainCallId_Async_0300 finish');
        done();
    });

    /**
  * @tc.number  Telephony_CallManager_getMainCallId_Promise_0300
  * @tc.name    Test the function runs 10 times, stability test
  * @tc.desc    Reliability test
  */
    it('Telephony_CallManager_getMainCallId_Promise_0300', 0, async function (done) {
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            try {
                var data = await call.getMainCallId(MAIN_CALLID_1001);
                expect(data !== null).assertTrue();
                console.log('Telephony_CallManager_getMainCallId_Promise_0300 fail');
            } catch (err) {
                console.log('Telephony_CallManager_getMainCallId_Promise_0300 finish');
                done();
            }
        }
        console.log('Telephony_CallManager_getMainCallId_Promise_0300 finish');
        done();
    });

    /* @tc.number  Telephony_CallManager_getSubCallIdList_Async_0300
       @tc.name    Test the function runs 10 times, stability test
       @tc.desc    Reliability test */
    it('Telephony_CallManager_getSubCallIdList_Async_0300', 0, async function (done) {
        var cnt = 0;
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            call.getSubCallIdList(MAIN_CALLID_1001, (err, res) => {
                if (err) {
                // do nothing
                }
                expect(res !== null).assertTrue();
            });
        }
        console.log('Telephony_CallManager_getSubCallIdList_Async_0300 finish');
        done();
    });

    /**
  * @tc.number  Telephony_CallManager_getSubCallIdList_Promise_0300
  * @tc.name    Test the function runs 10 times, stability test
  * @tc.desc    Reliability test
  */
    it('Telephony_CallManager_getSubCallIdList_Promise_0300', 0, async function (done) {
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            try {
                var data = await call.getSubCallIdList(MAIN_CALLID_1001);
                expect(data !== null).assertTrue();
            } catch (err) {
                console.log('Telephony_CallManager_getSubCallIdList_Promise_0300 finish');
                expect().assertFail();
                done();
            }
        }
        console.log('Telephony_CallManager_getSubCallIdList_Promise_0300 finish');
        done();
    });

    /* @tc.number  Telephony_CallManager_getCallIdListForConference_Async_0300
       @tc.name    Test the function runs 10 times, stability test
       @tc.desc    Reliability test */
    it('Telephony_CallManager_getCallIdListForConference_Async_0300', 0, async function (done) {
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            call.getCallIdListForConference(MAIN_CALLID_1001, (err, res) => {
                if (err) {
                    console.log('Telephony_CallManager_getCallIdListForConference_Async_0300 fail');
                }
            });
        }
        console.log('Telephony_CallManager_getCallIdListForConference_Async_0300 finish');
        done();
    });

    /**
  * @tc.number  Telephony_CallManager_getCallIdListForConference_Promise_0300
  * @tc.name    Test the function runs 10 times, stability test
  * @tc.desc    Reliability test
  */
    it('Telephony_CallManager_getCallIdListForConference_Promise_0300', 0, async function (done) {
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            try {
                var data = await call.getCallIdListForConference(MAIN_CALLID_1001);
                expect(data !== null).assertTrue();
            } catch (err) {
                console.log('Telephony_CallManager_getCallIdListForConference_Promise_0300 finish');
                done();
                return;
            }
        }
        console.log('Telephony_CallManager_getCallIdListForConference_Promise_0300 fial');
        done();
    });

    /**
     * @tc.number  Telephony_CallManager_answer_Async_0300
     * @tc.name    Test the function runs 10 times, stability test
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_answer_Async_0300', 0, async function (done) {
        var callId999 = 999;
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            call.answer(callId999, (err, data) => {
                if (err) {
                    // do nothing when err
                } else {
                    expect(data).assertFalse();
                }
            });
        }
        console.log('Telephony_CallManager_answer_Async_0300 finish');
        done();
    });

    /**
     * @tc.number  Telephony_CallManager_answer_Promise_0300
     * @tc.name    Test the function runs 10 times, stability test
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_answer_Promise_0300', 0, async function (done) {
        var callId999 = 999;
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            try {
                var data = await call.answer(callId999);
                expect(data).assertFalse();
            } catch (err) {
                // do nothing when err
            }
        }
        console.log('Telephony_CallManager_answer_Promise_0300 finish');
        done();
    });

    /**
     * @tc.number  Telephony_CallManager_reject_Async_0300
     * @tc.name    Test the function runs 10 times, stability test
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_reject_Async_0300', 0, async function (done) {
        var callId999 = 999;
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            call.reject(callId999, (err, data) => {
                if (err) {
                    // do nothing when err
                } else {
                    expect(data).assertFalse();
                }
            });
        }
        console.log('Telephony_CallManager_reject_Async_0300 finish');
        done();
    });

    /**
     * @tc.number  Telephony_CallManager_reject_Promise_0300
     * @tc.name    Test the function runs 10 times, stability test
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_reject_Promise_0300', 0, async function (done) {
        var callId999 = 999;
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            try {
                await call.reject(callId999);
            } catch (err) {
                // do nothing when err
            }
        }
        console.log('Telephony_CallManager_reject_Promise_0300 finish');
        done();
    });

    /**
     * @tc.number  Telephony_CallManager_hangup_Async_0300
     * @tc.name    Test the function runs 10 times, stability test
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_hangup_Async_0300', 0, async function (done) {
        var callId999 = 999;
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            call.hangup(callId999, (err, data) => {
                if (err) {
                    // do nothing when err
                } else {
                    expect(data).assertFalse();
                }
            });
        }
        console.log('Telephony_CallManager_hangup_Async_0300 finish');
        done();
    });

    /**
     * @tc.number  Telephony_CallManager_hangup_Promise_0300
     * @tc.name    Test the function runs 10 times, stability test
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_hangup_Promise_0300', 0, async function (done) {
        var callId999 = 999;
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            try {
                await call.hangup(callId999);
            } catch (err) {
                // no nothing when err
            }
        }
        console.log('Telephony_CallManager_hangup_Promise_0300 finish');
        done();
    });
});
