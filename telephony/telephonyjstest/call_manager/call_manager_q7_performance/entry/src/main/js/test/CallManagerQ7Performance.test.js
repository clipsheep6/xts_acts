/**
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License")
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

import call from '@ohos.telephony.call';
import {describe, afterAll, it, expect, beforeAll} from 'deccjsunit/index';
import {
    DEFAULT_SLOT_ID,
    CALL_MODE_IMS,
    CALL_MODE_SEND_RECEIVE,
    CALL_ID_NOT_EXIST,
    RTT_MSG,
    PHONE_LIST
} from './lib/Const.js';
import {toString} from './lib/ApiToPromise.js';
import {apiToPerfomace} from './lib/ApiToPromisePerfomance.js';
import {
    callDetailsChangeOn,
    callDetailsChangeOff
} from './lib/ScenceInCalling.js';
describe('CallManagementReliablePerformance', function () {
    beforeAll(async function (done) {
        callDetailsChangeOn();
        try {
            await call.setCallPreferenceMode(DEFAULT_SLOT_ID, CALL_MODE_IMS);
            console.log('Telephony_CallManager setCallPreferenceMode success');
        } catch (error) {
            console.log(`Telephony_CallManager setCallPreferenceMode error,error:${toString(error)}`);
        }
        done();
    });

    afterAll(function () {
        callDetailsChangeOff();
        console.log('Telephony_CallManager all 16 case is over for callmanager CallManagementReliablePerformance');
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_combineConference_Async_0400
     * @tc.name    Run function combineConference by args
     *             callId CALL_ID_NOT_EXIST by callback for TEST_PERF_COUNT times,
     *             the callback function always return error,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_combineConference_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_combineConference_Async_0400';
        apiToPerfomace({
            func: 'combineConference',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [CALL_ID_NOT_EXIST, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_combineConference_Promise_0400
     * @tc.name    Run function combineConference by args
     *             callId CALL_ID_NOT_EXIST by promise for TEST_PERF_COUNT times,
     *             the function always return error,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_combineConference_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_combineConference_Promise_0400';
        apiToPerfomace({
            func: 'combineConference',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [CALL_ID_NOT_EXIST]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_separateConference_Async_0400
     * @tc.name    Run function separateConference by args
     *             callId CALL_ID_NOT_EXIST by callback for TEST_PERF_COUNT times,
     *             the callback function always return error,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_separateConference_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_separateConference_Async_0400';
        apiToPerfomace({
            func: 'separateConference',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [CALL_ID_NOT_EXIST, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_separateConference_Promise_0400
     * @tc.name    Run function separateConference by args
     *             callId CALL_ID_NOT_EXIST by promise for TEST_PERF_COUNT times,
     *             the function always return error,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_separateConference_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_separateConference_Promise_0400';
        apiToPerfomace({
            func: 'separateConference',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [CALL_ID_NOT_EXIST]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_joinConference_Async_0400
     * @tc.name    Run function joinConference by args
     *             mainCallId CALL_ID_NOT_EXIST,callNumberList PHONE_LIST by callback for TEST_PERF_COUNT times,
     *             the callback function always return error,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_joinConference_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_joinConference_Async_0400';
        apiToPerfomace({
            func: 'joinConference',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [CALL_ID_NOT_EXIST, PHONE_LIST, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_joinConference_Promise_0400
     * @tc.name    Run function joinConference by args
     *             mainCallId CALL_ID_NOT_EXIST,callNumberList PHONE_LIST by promise for TEST_PERF_COUNT times,
     *             the function always return error,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_joinConference_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_joinConference_Promise_0400';
        apiToPerfomace({
            func: 'joinConference',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [CALL_ID_NOT_EXIST, PHONE_LIST]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableLteEnhanceMode_Async_0700
     * @tc.name    Run function enableLteEnhanceMode by args slotId DEFAULT_SLOT_ID,value true
     *             by callback for TEST_PERF_COUNT times,
     *             the callback function always return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_enableLteEnhanceMode_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableLteEnhanceMode_Async_0700';
        apiToPerfomace({
            func: 'enableLteEnhanceMode',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [DEFAULT_SLOT_ID, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableLteEnhanceMode_Promise_0700
     * @tc.name    Run function enableLteEnhanceMode by args slotId DEFAULT_SLOT_ID
     *             by promise for TEST_PERF_COUNT times,
     *             the function always return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_enableLteEnhanceMode_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableLteEnhanceMode_Promise_0700';
        apiToPerfomace({
            func: 'enableLteEnhanceMode',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [DEFAULT_SLOT_ID]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableLteEnhanceMode_Async_0700
     * @tc.name    Run function disableLteEnhanceMode by args slotId DEFAULT_SLOT_ID,value true
     *             by callback for TEST_PERF_COUNT times,
     *             the callback function always return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_disableLteEnhanceMode_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableLteEnhanceMode_Async_0700';
        apiToPerfomace({
            func: 'disableLteEnhanceMode',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [DEFAULT_SLOT_ID, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableLteEnhanceMode_Promise_0700
     * @tc.name    Run function disableLteEnhanceMode by args slotId DEFAULT_SLOT_ID
     *             by promise for TEST_PERF_COUNT times,
     *             the function always return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_disableLteEnhanceMode_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableLteEnhanceMode_Promise_0700';
        apiToPerfomace({
            func: 'disableLteEnhanceMode',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [DEFAULT_SLOT_ID]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Async_0700
     * @tc.name    Run function isLteEnhanceModeEnabled by args slotId DEFAULT_SLOT_ID,
     *             by callback for TEST_PERF_COUNT times,
     *             the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Async_0700';
        apiToPerfomace({
            func: 'isLteEnhanceModeEnabled',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return true;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [DEFAULT_SLOT_ID, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Promise_0700
     * @tc.name    Run function isLteEnhanceModeEnabled by args slotId DEFAULT_SLOT_ID,
     *             by promise for TEST_PERF_COUNT times,
     *             the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Promise_0700';
        apiToPerfomace({
            func: 'isLteEnhanceModeEnabled',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return true;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [DEFAULT_SLOT_ID]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_startRTT_Async_0400
     * @tc.name    Run function startRTT by args callId CALL_ID_NOT_EXIST,msg RTT_MSG
     *             by callback for TEST_PERF_COUNT times,
     *             the callback function always return error,the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_startRTT_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_startRTT_Async_0400';
        apiToPerfomace({
            func: 'startRTT',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [CALL_ID_NOT_EXIST, RTT_MSG, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_startRTT_Promise_0400
     * @tc.name    Run function startRTT by args callId CALL_ID_NOT_EXIST,msg RTT_MSG
     *             by promise for TEST_PERF_COUNT times,
     *             the function always return error the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_startRTT_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_startRTT_Promise_0400';
        apiToPerfomace({
            func: 'startRTT',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [CALL_ID_NOT_EXIST, RTT_MSG]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_stopRTT_Async_0400
     * @tc.name    Run function stopRTT by args callId CALL_ID_NOT_EXIST by callback for TEST_PERF_COUNT times,
     *             the callback function always return error,the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_stopRTT_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_stopRTT_Async_0400';
        apiToPerfomace({
            func: 'stopRTT',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [CALL_ID_NOT_EXIST, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_stopRTT_Promise_0400
     * @tc.name    Run function stopRTT by args callId CALL_ID_NOT_EXIST by promise for TEST_PERF_COUNT times,
     *             the function always return error,the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_stopRTT_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_stopRTT_Promise_0400';
        apiToPerfomace({
            func: 'stopRTT',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [CALL_ID_NOT_EXIST]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Async_0900
     * @tc.name    Run function updateImsCallMode by args callId CALL_ID_NOT_EXIST,mod CALL_MODE_SEND_RECEIVE
     *             by callback for TEST_PERF_COUNT times,
     *             the callback function always return error,the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Async_0900', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Async_0900';
        apiToPerfomace({
            func: 'updateImsCallMode',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [CALL_ID_NOT_EXIST, CALL_MODE_SEND_RECEIVE, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Promise_0900
     * @tc.name    Run function updateImsCallMode by args callId callId CALL_ID_NOT_EXIST,mod CALL_MODE_SEND_RECEIVE
     *             by promise for TEST_PERF_COUNT times,
     *             the function always return error,the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Promise_0900', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Promise_0900';
        apiToPerfomace({
            func: 'updateImsCallMode',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [CALL_ID_NOT_EXIST, CALL_MODE_SEND_RECEIVE]);
    });
});
