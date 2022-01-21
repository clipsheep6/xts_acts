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
import { describe, it, expect, beforeAll, afterAll, afterEach } from 'deccjsunit/index';

describe('NetworkManagerGetSpecifiNetFunction.test', function () {
    const DEFAULT_NET_ID = 100;
    const TEST_RUN_TIME = 1000;
    const DELAY_LIMIT = 1000;

    //==================================getDefaultNet==================================
    /**
     * @tc.number  Telephony_NetworkManager_getDefaultNet_Promise_0300
     * @tc.name    The test GetDefaultNet() was executed 1000 times with
     *             an output delay of less than 1000000us
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getDefaultNet_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getDefaultNet_Promise_0300';
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data= await connection.getDefaultNet();
                expect(data.netId).assertEqual(DEFAULT_NET_ID);
            } catch (err) {
                console.log(`${caseName}` + err );
                expect().assertFail();
                done();
                return;
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAY_LIMIT);
        done();
    });

    /**
     * @tc.number  Telephony_NetworkManager_getDefaultNet_Async_0300
     * @tc.name    The test GetDefaultNet() was executed 1000 times with
     *             an output delay of less than 1000000us
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getDefaultNet_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getDefaultNet_Async_0300'
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAY_LIMIT);
                done();
            }
            startTime = new Date().getTime();
            connection.getDefaultNet((err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} get data fail: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data.netId).assertEqual(DEFAULT_NET_ID);
                recursive(n - 1);
            });
        }
        recursive(TEST_RUN_TIME);
    });
    //==================================getDefaultNet==================================
    //==================================hasDefaultNet==================================
    /**
     * @tc.number  Telephony_NetworkManager_hasDefaultNet_Promise_0300
     * @tc.name    Test HasDefaultNet() is executed 1000 times with an
     *             output latency of less than 1000000us
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_hasDefaultNet_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_hasDefaultNet_Promise_0300';
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data= await connection.hasDefaultNet();
                expect(data).assertTrue();
            } catch (err) {
                console.log(`${caseName} fail:${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAY_LIMIT);
        done();
    });

    /**
     * @tc.number  Telephony_NetworkManager_hasDefaultNet_Async_0300
     * @tc.name    Test HasDefaultNet() is executed 1000 times with an
     *             output latency of less than 1000000us
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_hasDefaultNet_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_hasDefaultNet_Async_0300'
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAY_LIMIT);
                done();
            }
            startTime = new Date().getTime();
            connection.hasDefaultNet((err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} get data fail:${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertTrue();
                recursive(n - 1);
            });
        }
        recursive(TEST_RUN_TIME);
    });
    //==================================HasDefaultNet==================================
});
