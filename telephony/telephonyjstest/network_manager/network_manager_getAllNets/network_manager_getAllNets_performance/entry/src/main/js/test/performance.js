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
    
    describe('performance.test', function () {
        const DEFAULT_NET_ID = 100;
        const TEST_RUN_TIME = 1000;
        const DELAY_LIMIT_ONCE = 1;
        var DEFAULT_NET_OBJ = new connection.NetHandle(DEFAULT_NET_ID);

        //==================================getAllNets==================================
        /**
         * @tc.number  Telephony_NetworkManager_getAllNets_Async_0300
         * @tc.name    The test getAllNets() was executed 1000 times with
         *             an output delay of less than 1000us call once.
         * @tc.desc    Function test
         */
        it('Telephony_NetworkManager_getAllNets_Async_0300', 0, async function (done) {
            let caseName = 'Telephony_NetworkManager_getAllNets_Async_0300';
            for (let index = 0; index < TEST_RUN_TIME; index++) {
                let startTime = new Date().getTime();
                connection.getAllNets((err, data) => {
                    if (err) {
                        console.log(`${caseName} get data fail: ${err}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                });
                let endTime = new Date().getTime();
                expect(endTime - startTime).assertLess(DELAY_LIMIT_ONCE);
            }
            console.log(`${caseName} finish`);
            done();
        });
    
        /**
         * @tc.number  Telephony_NetworkManager_getAllNets_Async_0400
         * @tc.name    The test getAllNets() was executed 1000 times with
         *             an output delay of less than 1000000us.
         * @tc.desc    Function test
         */
        it('Telephony_NetworkManager_getAllNets_Async_0400', 0, async function (done) {
            let caseName = 'Telephony_NetworkManager_getAllNets_Async_0400';
            let startTime = new Date().getTime();
            for (let index = 0; index < TEST_RUN_TIME; index++) {
                connection.getAllNets((err, data) => {
                    if (err) {
                        console.log(`${caseName} get data fail: ${err}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                });
            }
            let endTime = new Date().getTime();
            console.log(`${caseName} done useTime: ${endTime - startTime}`);
            expect(endTime - startTime).assertLess(DELAY_LIMIT_ONCE * TEST_RUN_TIME);
            done();
        });
    
        /**
         * @tc.number  Telephony_NetworkManager_getAllNets_Promise_0300
         * @tc.name    The test getAllNets() was executed 1000 times with
         *             an output delay of less than 1000us call once.
         * @tc.desc    Performance test
         */
        it('Telephony_NetworkManager_getAllNets_Promise_0300', 0, async function (done) {
            let caseName = 'Telephony_NetworkManager_getAllNets_Promise_0300';
            for (let index = 0; index < TEST_RUN_TIME; index++) {
                let startTime = new Date().getTime();
                try {
                    let data= await connection.getAllNets();
                } catch (err) {
                    console.log(`${caseName}` + err );
                    expect().assertFail();
                    done();
                    return;
                }
                let endTime = new Date().getTime();
                expect(endTime - startTime).assertLess(DELAY_LIMIT_ONCE);
            }
            console.log(`${caseName} finish`);
            done();
        });
    
        /**
         * @tc.number  Telephony_NetworkManager_getAllNets_Promise_0400
         * @tc.name    The test getAllNets() was executed 1000 times with
         *             an output delay of less than 1000000us.
         * @tc.desc    Performance test
         */
        it('Telephony_NetworkManager_getAllNets_Promise_0400', 0, async function (done) {
            let caseName = 'Telephony_NetworkManager_getAllNets_Promise_0400';
            let startTime = new Date().getTime();
            for (let index = 0; index < TEST_RUN_TIME; index++) {
                try {
                    let data= await connection.getAllNets();
                } catch (err) {
                    console.log(`${caseName}` + err );
                    expect().assertFail();
                    done();
                    return;
                }
            }
            let endTime = new Date().getTime();
            console.log(`${caseName} done useTime: ${endTime - startTime}`);
            expect(endTime - startTime).assertLess(DELAY_LIMIT_ONCE * TEST_RUN_TIME);
            done();
        });
    
        //==================================getConnectionProperties==================================
        /**
         * @tc.number  Telephony_NetworkManager_getConnectionProperties_Async_0400
         * @tc.name    The test getConnectionProperties() was executed 1000 times with
         *             an output delay of less than 1000us call once.
         * @tc.desc    Function test
         */
        it('Telephony_NetworkManager_getConnectionProperties_Async_0400', 0, async function (done) {
            let caseName = 'Telephony_NetworkManager_getConnectionProperties_Async_0400';
            for (let index = 0; index < TEST_RUN_TIME; index++) {
                let startTime = new Date().getTime();
                connection.getConnectionProperties(DEFAULT_NET_OBJ, (err, data) => {
                    if (err) {
                        console.log(`${caseName} get data fail: ${err}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                });
                let endTime = new Date().getTime();
                expect(endTime - startTime).assertLess(DELAY_LIMIT_ONCE);
            }
            console.log(`${caseName} finish`);
            done();
        });

        /**
         * @tc.number  Telephony_NetworkManager_getConnectionProperties_Async_0500
         * @tc.name    The test getConnectionProperties() was executed 1000 times with
         *             an output delay of less than 1000000us.
         * @tc.desc    Function test
         */
        it('Telephony_NetworkManager_getConnectionProperties_Async_0500', 0, async function (done) {
            let caseName = 'Telephony_NetworkManager_getConnectionProperties_Async_0500';
            let startTime = new Date().getTime();
            for (let index = 0; index < TEST_RUN_TIME; index++) {
                connection.getConnectionProperties(DEFAULT_NET_OBJ, (err, data) => {
                    if (err) {
                        console.log(`${caseName} get data fail: ${err}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                });
            }
            let endTime = new Date().getTime();
            console.log(`${caseName} done useTime: ${endTime - startTime}`);
            expect(endTime - startTime).assertLess(DELAY_LIMIT_ONCE * TEST_RUN_TIME);
            done();
        });

        /**
         * @tc.number  Telephony_NetworkManager_getConnectionProperties_Promise_0400
         * @tc.name    The test getConnectionProperties() was executed 1000 times with
         *             an output delay of less than 1000us call once.
         * @tc.desc    Performance test
         */
        it('Telephony_NetworkManager_getConnectionProperties_Promise_0400', 0, async function (done) {
            let caseName = 'Telephony_NetworkManager_getConnectionProperties_Promise_0400';
            for (let index = 0; index < TEST_RUN_TIME; index++) {
                let startTime = new Date().getTime();
                try {
                    let data= await connection.getConnectionProperties(DEFAULT_NET_OBJ);
                } catch (err) {
                    console.log(`${caseName}` + err );
                    expect().assertFail();
                    done();
                    return;
                }
                let endTime = new Date().getTime();
                expect(endTime - startTime).assertLess(DELAY_LIMIT_ONCE);
            }
            console.log(`${caseName} finish`);
            done();
        });

        /**
         * @tc.number  Telephony_NetworkManager_getConnectionProperties_Promise_0500
         * @tc.name    The test getConnectionProperties() was executed 1000 times with
         *             an output delay of less than 1000000us.
         * @tc.desc    Performance test
         */
        it('Telephony_NetworkManager_getConnectionProperties_Promise_0500', 0, async function (done) {
            let caseName = 'Telephony_NetworkManager_getConnectionProperties_Promise_0500';
            let startTime = new Date().getTime();
            for (let index = 0; index < TEST_RUN_TIME; index++) {
                try {
                    let data= await connection.getConnectionProperties(DEFAULT_NET_OBJ);
                } catch (err) {
                    console.log(`${caseName}` + err );
                    expect().assertFail();
                    done();
                    return;
                }
            }
            let endTime = new Date().getTime();
            console.log(`${caseName} done useTime: ${endTime - startTime}`);
            expect(endTime - startTime).assertLess(DELAY_LIMIT_ONCE * TEST_RUN_TIME);
            done();
        });

        //==================================getNetCapabilities==================================
        /**
         * @tc.number  Telephony_NetworkManager_getNetCapabilities_Async_0400
         * @tc.name    The test getNetCapabilities() was executed 1000 times with
         *             an output delay of less than 1000us call once.
         * @tc.desc    Function test
         */
        it('Telephony_NetworkManager_getNetCapabilities_Async_0400', 0, async function (done) {
            let caseName = 'Telephony_NetworkManager_getNetCapabilities_Async_0400';
            for (let index = 0; index < TEST_RUN_TIME; index++) {
                let startTime = new Date().getTime();
                connection.getNetCapabilities(DEFAULT_NET_OBJ, (err, data) => {
                    if (err) {
                        console.log(`${caseName} get data fail: ${err}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                });
                let endTime = new Date().getTime();
                expect(endTime - startTime).assertLess(DELAY_LIMIT_ONCE);
            }
            console.log(`${caseName} finish`);
            done();
        });

        /**
         * @tc.number  Telephony_NetworkManager_getNetCapabilities_Async_0500
         * @tc.name    The test getNetCapabilities() was executed 1000 times with
         *             an output delay of less than 1000000us.
         * @tc.desc    Function test
         */
        it('Telephony_NetworkManager_getNetCapabilities_Async_0500', 0, async function (done) {
            let caseName = 'Telephony_NetworkManager_getNetCapabilities_Async_0500';
            let startTime = new Date().getTime();
            for (let index = 0; index < TEST_RUN_TIME; index++) {
                connection.getNetCapabilities(DEFAULT_NET_OBJ, (err, data) => {
                    if (err) {
                        console.log(`${caseName} get data fail: ${err}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                });
            }
            let endTime = new Date().getTime();
            console.log(`${caseName} done useTime: ${endTime - startTime}`);
            expect(endTime - startTime).assertLess(DELAY_LIMIT_ONCE * TEST_RUN_TIME);
            done();
        });

        /**
         * @tc.number  Telephony_NetworkManager_getNetCapabilities_Promise_0400
         * @tc.name    The test getNetCapabilities() was executed 1000 times with
         *             an output delay of less than 1000us call once.
         * @tc.desc    Performance test
         */
        it('Telephony_NetworkManager_getNetCapabilities_Promise_0400', 0, async function (done) {
            let caseName = 'Telephony_NetworkManager_getNetCapabilities_Promise_0400';
            for (let index = 0; index < TEST_RUN_TIME; index++) {
                let startTime = new Date().getTime();
                try {
                    let data= await connection.getNetCapabilities(DEFAULT_NET_OBJ);
                } catch (err) {
                    console.log(`${caseName}` + err );
                    expect().assertFail();
                    done();
                    return;
                }
                let endTime = new Date().getTime();
                expect(endTime - startTime).assertLess(DELAY_LIMIT_ONCE);
            }
            console.log(`${caseName} finish`);
            done();
        });

        /**
         * @tc.number  Telephony_NetworkManager_getNetCapabilities_Promise_0500
         * @tc.name    The test getNetCapabilities() was executed 1000 times with
         *             an output delay of less than 1000000us.
         * @tc.desc    Performance test
         */
        it('Telephony_NetworkManager_getNetCapabilities_Promise_0500', 0, async function (done) {
            let caseName = 'Telephony_NetworkManager_getNetCapabilities_Promise_0500';
            let startTime = new Date().getTime();
            for (let index = 0; index < TEST_RUN_TIME; index++) {
                try {
                    let data= await connection.getNetCapabilities(DEFAULT_NET_OBJ);
                } catch (err) {
                    console.log(`${caseName}` + err );
                    expect().assertFail();
                    done();
                    return;
                }
            }
            let endTime = new Date().getTime();
            console.log(`${caseName} done useTime: ${endTime - startTime}`);
            expect(endTime - startTime).assertLess(DELAY_LIMIT_ONCE * TEST_RUN_TIME);
            done();
        });
    });