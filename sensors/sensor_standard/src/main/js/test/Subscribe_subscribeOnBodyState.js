/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
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
import sensor from '@system.sensor'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect, TestType, Size, Level } from '@ohos/hypium'

export default function SensorJsTest_Sensor_32() {
describe("SensorJsTest_Sensor_32", function () {
    beforeAll(function () {

        /*
         * @tc.setup: setup invoked before all testcases
         */
        console.info('beforeAll caled')
    })

    afterAll(function () {

        /*
         * @tc.teardown: teardown invoked after all testcases
         */
        console.info('afterAll caled')
    })

    beforeEach(function () {

        /*
         * @tc.setup: setup invoked before each testcases
         */
        console.info('beforeEach caled')
    })

    afterEach(function () {

        /*
         * @tc.teardown: teardown invoked after each testcases
         */
        console.info('afterEach caled')
    })

    let errMessages = ['The number of parameters is not valid', 'UnsubscribeSensor failed',
    'Wrong argument type, should be object'];

    let errMessage;

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeOnBodyState_JSTest_0010
     * @tc.name: subscribeOnBodyState_SensorJsTest001
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeOnBodyState_SensorJsTest001", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL0, async function (done) {
        console.info('----------------------subscribeOnBodyState_SensorJsTest001---------------------------');
        sensor.subscribeOnBodyState({
            success: function (data) {
                console.info("subscribeOnBodyState_SensorJsTest001 success" + JSON.stringify(data));
                expect(typeof (data.value)).assertEqual("boolean");
            },
            fail: function (data, code) {
                console.error('subscribeOnBodyState_SensorJsTest001 failed. Code: ' + code + '; Data: ' + data);
                expect(code).assertEqual(1001);
            },
        });
        setTimeout(() => {
            try {
                sensor.unsubscribeOnBodyState();
            } catch (error) {
                console.info('subscribeOnBodyState_SensorJsTest001_unsubscribeOnBodyState error ' + error);
            }
            setTimeout(() => {
                expect(true).assertTrue();
                done();
            }, 500);
        }, 1000);
    })

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeOnBodyState_JSTest_0020
     * @tc.name: subscribeOnBodyState_SensorJsTest002
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeOnBodyState_SensorJsTest002", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, function (done) {
        console.info('----------------------subscribeOnBodyState_SensorJsTest002---------------------------');
        try {
            sensor.subscribeOnBodyState({
                success: function (data) {
                    console.info("subscribeOnBodyState_SensorJsTest002 success:" + JSON.stringify(data));
                    expect(typeof (data.value)).assertEqual("boolean");
                },
                fail: function (data, code) {
                    console.error('subscribeOnBodyState_SensorJsTest002 failed. Code: ' + code + '; Data: ' + data);
                    expect(code).assertEqual(1001);
                },
            }, 25);
        } catch (error) {
            errMessage = error.toString().slice(19, 56);
            console.info('subscribeOnBodyState_SensorJsTest002 error:' + error);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeOnBodyState_JSTest_0030
     * @tc.name: subscribeOnBodyState_SensorJsTest003
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeOnBodyState_SensorJsTest003", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, function (done) {
        console.info('----------------------subscribeOnBodyState_SensorJsTest003---------------------------');
        try {
            sensor.subscribeOnBodyState({
                success: function (data) {
                    console.info("subscribeOnBodyState_SensorJsTest003 success:" + JSON.stringify(data));
                    expect(typeof (data.value)).assertEqual("boolean");
                },
                fail: function (data, code) {
                    console.error('subscribeOnBodyState_SensorJsTest003 failed. Code: ' + code + '; Data: ' + data);
                    expect(code).assertEqual(1001);
                },
            }, function () {
            }, 25);
        } catch (error) {
            var errMessage = error.toString().slice(19, 56);
            console.info('subscribeOnBodyState_SensorJsTest003 error:' + error);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeOnBodyState_JSTest_0040
     * @tc.name: subscribeOnBodyState_SensorJsTest004
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeOnBodyState_SensorJsTest004", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------subscribeOnBodyState_SensorJsTest004---------------------------');
        try {
            sensor.unsubscribeOnBodyState('xxx');
        } catch (error) {
            errMessage = error.toString().slice(21, 58);
            console.info('subscribeOnBodyState_SensorJsTest004 error:' + error);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeOnBodyState_JSTest_0050
     * @tc.name: subscribeOnBodyState_SensorJsTest005
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeOnBodyState_SensorJsTest005", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------subscribeOnBodyState_SensorJsTest005---------------------------');
        try {
            sensor.subscribeOnBodyState();
        } catch (error) {
            errMessage = error.toString().slice(19, 56);
            console.info('subscribeOnBodyState_SensorJsTest005 error:' + error);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeOnBodyState_JSTest_0060
     * @tc.name: subscribeOnBodyState_SensorJsTest006
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeOnBodyState_SensorJsTest006", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------subscribeOnBodyState_SensorJsTest006---------------------------');
        try {
            sensor.subscribeOnBodyState('xxx');
        } catch (error) {
            errMessage = error.toString().slice(19, 56);
            console.info('subscribeOnBodyState_SensorJsTest006 error:' + error);
            expect(errMessage).assertEqual(errMessages[2]);
            done();
        }
    })

     /*
     * @tc.number:SUB_SensorsSystem_SubscribeOnBodyState_JSTest_0070
     * @tc.name: subscribeOnBodyState_SensorJsTest007
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeOnBodyState_SensorJsTest007", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, function (done) {
        console.info('----------------------subscribeOnBodyState_SensorJsTest007---------------------------');
        sensor.subscribeOnBodyState({
            success: function (data) {
                console.info("subscribeOnBodyState_SensorJsTest007 success:" + JSON.stringify(data));
                expect(typeof (data.value)).assertEqual("boolean");
            },
            fail: function (data, code) {
                console.error('subscribeOnBodyState_SensorJsTest007 failed. Code: ' + code + '; Data: ' + data);
                expect(code).assertEqual(1001);
            },
        });
        sensor.subscribeOnBodyState({
            success: function (data) {
                console.info("subscribeOnBodyState_SensorJsTest007_1 success:" + JSON.stringify(data));
                expect(typeof (data.value)).assertEqual("boolean");
            },
            fail: function (data, code) {
                console.error('subscribeOnBodyState_SensorJsTest007_1 failed. Code: ' + code + '; Data: ' + data);
                expect(code).assertEqual(1001);
            },
        });
        setTimeout(() => {
            try {
                sensor.unsubscribeOnBodyState();
            } catch (error) {
                console.info('subscribeOnBodyState_SensorJsTest007_unsubscribeOnBodyState error' + error);
            }
            setTimeout(() => {
                expect(true).assertTrue();
                done();
            }, 500);
        }, 1000);
    })

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeOnBodyState_JSTest_0080
     * @tc.name: subscribeOnBodyState_SensorJsTest008
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeOnBodyState_SensorJsTest008", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------subscribeOnBodyState_SensorJsTest008---------------------------');
        try {
            sensor.unsubscribeOnBodyState();
        } catch (error) {
            errMessage = error.toString().slice(21, 45);
            console.info('subscribeOnBodyState_SensorJsTest008 error:' + error);
            expect(errMessage).assertEqual(errMessages[1]);
            done();
        }
    })

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeOnBodyState_JSTest_0090
     * @tc.name: subscribeOnBodyState_SensorJsTest009
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeOnBodyState_SensorJsTest009", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, function (done) {
        console.info('----------------------subscribeOnBodyState_SensorJsTest009---------------------------');
        sensor.subscribeOnBodyState({
            success: function (data) {
                console.info("subscribeOnBodyState_SensorJsTest009 success:" + JSON.stringify(data));
                expect(typeof (data.heartRate)).assertEqual("number");
            },
            fail: function (data, code) {
                console.error('subscribeOnBodyState_SensorJsTest009 failed. Code: ' + code + '; Data: ' + data);
                expect(code).assertEqual(1001);
            },
        });
        try {
            sensor.unsubscribeOnBodyState();
        } catch (error) {
            console.info('subscribeOnBodyState_SensorJsTest009_unsubscribeOnBodyState error' + error);
        }
        setTimeout(() => {
            expect(true).assertTrue();
            done();
        }, 500);
    })
})

    }
