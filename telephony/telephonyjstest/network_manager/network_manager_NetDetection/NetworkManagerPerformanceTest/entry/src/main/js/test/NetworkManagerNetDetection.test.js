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

import connection from '@ohos.net.connection';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('NetworkManagerNetDetectionTest', function () {

    const TEST_RUN_TIME = 1000;
    const DELAYL_LIMIT = 1000

    /**
     * @tc.number  Telephony_NetworkManager_reportNetConnected_Promise_0500
     * @tc.name    The reportNetConnected() test is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_reportNetConnected_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetConnected_Promise_0500';
        let handle = await connection.getDefaultNet();
        console.log(`${caseName} get netId : ${handle.netId}`);
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await connection.reportNetConnected(handle);
                console.log(`${caseName} : SUCCESS`);
            } catch (err) {
                console.log(`${caseName} fail : ${err}`);
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_reportNetConnected_Async_0500
     * @tc.name    The reportNetConnected() test is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_reportNetConnected_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetConnected_Async_0500'
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        let handle = await connection.getDefaultNet();
        console.log(`${caseName} get netId : ${handle.netId}`);
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            connection.reportNetConnected(handle, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail : ${err}`);
                } else {
                    console.log(`${caseName} : SUCCESS`);
                }
                recursive(n - 1);
            });
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_reportNetDisconnected_Promise_0600
     * @tc.name    The reportNetDisconnected() test is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Promise_0600';
        let handle = await connection.getDefaultNet();
        console.log(`${caseName} get netId : ${handle.netId}`);
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await connection.reportNetDisconnected(handle);
                console.log(`${caseName} : SUCCESS`);
            } catch (err) {
                console.log(`${caseName} fail : ${err}`);
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_reportNetDisconnected_Async_0600
     * @tc.name    The reportNetDisconnected() test is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Async_0600'
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        let handle = await connection.getDefaultNet();
        console.log(`${caseName} get netId : ${handle.netId}`);
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            connection.reportNetDisconnected(handle, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail : ${err}`);
                } else {
                    console.log(`${caseName} : SUCCESS`);
                }
                recursive(n - 1);
            });
        }
        recursive(TEST_RUN_TIME);
    })

});