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
     * @tc.number  Telephony_NetworkManager_reportNetConnected_Promise_0400
     * @tc.name    Test reportNetConnected() to set the UID network access policy TEST_RUN_TIME times.
     *             Each time, data is returned successfully
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_reportNetConnected_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetConnected_Promise_0400';
        let handle = await connection.getDefaultNet();
        console.log(`${caseName} get netId : ${handle.netId}`);
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await connection.reportNetConnected(handle);
                expect(data).assertEqual(connection.NET_CONN_SUCCESS);
            } catch (err) {
                console.log(`${caseName} fail : ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log(`${caseName} finish`);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_reportNetConnected_Async_0400
     * @tc.name    Test reportNetConnected() to set the UID network access policy TEST_RUN_TIME times,
     *             and successfully callback data each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_reportNetConnected_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetConnected_Async_0400';
        let handle = await connection.getDefaultNet();
        console.log(`${caseName} get netId : ${handle.netId}`);
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            connection.reportNetConnected(handle, (err, data) => {
                if (err) {
                    console.log(`${caseName} erro data:${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertEqual(connection.NET_CONN_SUCCESS);
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_reportNetDisconnected_Promise_0500
     * @tc.name    Test reportNetDisconnected() to set the UID network access policy TEST_RUN_TIME times.
     *             Each time, data is returned successfully
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Promise_0500';
        let handle = await connection.getDefaultNet();
        console.log(`${caseName} get netId : ${handle.netId}`);
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await connection.reportNetDisconnected(handle);
                expect(data).assertEqual(connection.NET_CONN_SUCCESS);
            } catch (err) {
                console.log(`${caseName} fail : ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log(`${caseName} finish`);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_reportNetDisconnected_Async_0500
     * @tc.name    Test reportNetDisconnected() to set the UID network access policy TEST_RUN_TIME times,
     *             and successfully callback data each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Async_0500';
        let handle = await connection.getDefaultNet();
        console.log(`${caseName} get netId : ${handle.netId}`);
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            connection.reportNetDisconnected(handle, (err, data) => {
                if (err) {
                    console.log(`${caseName} erro data:${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertEqual(connection.NET_CONN_SUCCESS);
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

});