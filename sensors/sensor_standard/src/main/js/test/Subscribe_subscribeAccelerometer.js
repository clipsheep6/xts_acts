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

export default function SensorJsTest_sensor_25() {
describe("SensorJsTest_sensor_25", function () {
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

    let errMessages = ['The number of parameters is not valid', 'Wrong argument type, should be object',
    'UnsubscribeSensor failed'];

    let errMessage;

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeAccelerometer_JSTest_0010
     * @tc.name: subscribeAccelerometer_SensorJsTest001
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeAccelerometer_SensorJsTest001", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL0, async function (done) {
        console.info('----------------------subscribeAccelerometer_SensorJsTest001---------------------------');
        sensor.subscribeAccelerometer({
            interval: 'game',
            success: function (data) {
                console.info("subscribeAccelerometer_SensorJsTest001 success" + JSON.stringify(data));
                expect(typeof (data.x)).assertEqual("number");
                expect(typeof (data.y)).assertEqual("number");
                expect(typeof (data.z)).assertEqual("number");
            },
            fail: function (data, code) {
                console.log("subscribeAccelerometer_SensorJsTest001 is failed, data: " + data + ", code: " + code);
                expect(false).assertTrue();
            },
        });
        setTimeout(() => {
            try {
                sensor.unsubscribeAccelerometer();
            } catch (error) {
                console.info('subscribeAccelerometer_SensorJsTest001_unsubscribeAccelerometer error' + error);
                expect(false).assertTrue();
            }
            setTimeout(() => {
                expect(true).assertTrue();
                done();
            }, 500);
        }, 1000);
    })

   /*
     * @tc.number:SUB_SensorsSystem_SubscribeAccelerometer_JSTest_0020
     * @tc.name: subscribeAccelerometer_SensorJsTest002
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeAccelerometer_SensorJsTest002", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------subscribeAccelerometer_SensorJsTest002---------------------------');
        sensor.subscribeAccelerometer({
            interval: 'ui',
            success: function (data) {
                console.info("subscribeAccelerometer_SensorJsTest002 success" + JSON.stringify(data));
                expect(typeof (data.x)).assertEqual("number");
                expect(typeof (data.y)).assertEqual("number");
                expect(typeof (data.z)).assertEqual("number");
            },
            fail: function (data, code) {
                console.log("subscribeAccelerometer_SensorJsTest002 is failed, data: " + data + ", code: " + code);
                expect(false).assertTrue();
            },
        });
        setTimeout(() => {
            try {
                sensor.unsubscribeAccelerometer();
            } catch (error) {
                console.info('subscribeAccelerometer_SensorJsTest002_unsubscribeAccelerometer error' + error);
                expect(false).assertTrue();
            }
            setTimeout(() => {
                expect(true).assertTrue();
                done();
            }, 500);
        }, 1000);
    })

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeAccelerometer_JSTest_0030
     * @tc.name: subscribeAccelerometer_SensorJsTest003
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeAccelerometer_SensorJsTest003", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------subscribeAccelerometer_SensorJsTest003---------------------------');
        sensor.subscribeAccelerometer({
            interval: 'normal',
            success: function (data) {
                console.info("subscribeAccelerometer_SensorJsTest003 success" + JSON.stringify(data));
                expect(typeof (data.x)).assertEqual("number");
                expect(typeof (data.y)).assertEqual("number");
                expect(typeof (data.z)).assertEqual("number");
            },
            fail: function (data, code) {
                console.log("subscribeAccelerometer_SensorJsTest003 is failed, data: " + data + ", code: " + code);
                expect(false).assertTrue();
            },
        });

        setTimeout(() => {
            try {
                sensor.unsubscribeAccelerometer();
            } catch (error) {
                console.info('subscribeAccelerometer_SensorJsTest003_unsubscribeAccelerometer error' + error);
                expect(false).assertTrue();
            }
            setTimeout(() => {
                expect(true).assertTrue();
                done();
            }, 500);
        }, 1000);
    })

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeAccelerometer_JSTest_0040
     * @tc.name: subscribeAccelerometer_SensorJsTest004
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeAccelerometer_SensorJsTest004", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------subscribeAccelerometer_SensorJsTest004---------------------------');
        try {
            sensor.subscribeAccelerometer({
                interval: 'normal',
                success: function (data) {
                    console.info("subscribeAccelerometer_SensorJsTest004 success" + JSON.stringify(data));
                    expect(typeof (data.x)).assertEqual("number");
                    expect(typeof (data.y)).assertEqual("number");
                    expect(typeof (data.z)).assertEqual("number");
                },
                fail: function (data, code) {
                    console.log("subscribeAccelerometer_SensorJsTest004 is failed, data: " + data + ", code: " + code);
                    expect(false).assertTrue();
                },
            }, 25);
        } catch (error) {
            errMessage = error.toString().slice(19, 56);
            console.info('subscribeAccelerometer_SensorJsTest004 error:' + error);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeAccelerometer_JSTest_0050
     * @tc.name: subscribeAccelerometer_SensorJsTest005
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeAccelerometer_SensorJsTest005", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------subscribeAccelerometer_SensorJsTest005---------------------------');
        try {
            sensor.subscribeAccelerometer({
                interval: 'normal',
                success: function (data) {
                    console.info("subscribeAccelerometer_SensorJsTest005 success" + JSON.stringify(data));
                    expect(typeof (data.x)).assertEqual("number");
                    expect(typeof (data.y)).assertEqual("number");
                    expect(typeof (data.z)).assertEqual("number");
                },
                fail: function (data, code) {
                    console.log("subscribeAccelerometer_SensorJsTest005 is failed, data: " + data + ", code: " + code);
                    expect(false).assertTrue();
                },
            }, function () {
            }, 25);
        } catch (error) {
            errMessage = error.toString().slice(19, 56);
            console.info('subscribeAccelerometer_SensorJsTest005 error:' + error);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeAccelerometer_JSTest_0060
     * @tc.name: subscribeAccelerometer_SensorJsTest006
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeAccelerometer_SensorJsTest006", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------subscribeAccelerometer_SensorJsTest006---------------------------');
        sensor.subscribeAccelerometer({
            interval: 'normal',
            success: function (data) {
                console.info("subscribeAccelerometer_SensorJsTest006 success" + JSON.stringify(data));
                expect(typeof (data.x)).assertEqual("number");
                expect(typeof (data.y)).assertEqual("number");
                expect(typeof (data.z)).assertEqual("number");
            },
            fail: function (data, code) {
                console.log("subscribeAccelerometer_SensorJsTest006 is failed, data: " + data + ", code: " + code);
                expect(false).assertTrue();
            },
        });

        sensor.subscribeAccelerometer({
            interval: 'normal',
            success: function (data) {
                console.info("subscribeAccelerometer_SensorJsTest006_1 success" + JSON.stringify(data));
                expect(typeof (data.x)).assertEqual("number");
                expect(typeof (data.y)).assertEqual("number");
                expect(typeof (data.z)).assertEqual("number");
            },
            fail: function (data, code) {
                console.log("subscribeAccelerometer_SensorJsTest006_1 is failed, data: " + data + ", code: " + code);
                expect(false).assertTrue();
            },
        });

        setTimeout(() => {
            try {
                sensor.unsubscribeAccelerometer();
            } catch (error) {
                console.info('subscribeAccelerometer_SensorJsTest006_unsubscribeAccelerometer error' + error);
                expect(false).assertTrue();
            }
            setTimeout(() => {
                expect(true).assertTrue();
                done();
            }, 500);
        }, 1000);
    })

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeAccelerometer_JSTest_0070
     * @tc.name: subscribeAccelerometer_SensorJsTest007
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeAccelerometer_SensorJsTest007", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------subscribeAccelerometer_SensorJsTest007---------------------------');
        try {
            sensor.subscribeAccelerometer();
        } catch (error) {
            errMessage = error.toString().slice(19, 56);
            console.info('subscribeAccelerometer_SensorJsTest007 error:' + error);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeAccelerometer_JSTest_0080
     * @tc.name: subscribeAccelerometer_SensorJsTest008
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeAccelerometer_SensorJsTest008", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------subscribeAccelerometer_SensorJsTest008---------------------------');
        try {
            sensor.subscribeAccelerometer('xxx');
        } catch (error) {
            errMessage = error.toString().slice(19, 56);
            console.info('subscribeAccelerometer_SensorJsTest008 error:' + error);
            expect(errMessage).assertEqual(errMessages[1]);
            done();
        }
    })

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeAccelerometer_JSTest_0090
     * @tc.name: subscribeAccelerometer_SensorJsTest009
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeAccelerometer_SensorJsTest009", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------subscribeAccelerometer_SensorJsTest009---------------------------');
        try {
            sensor.unsubscribeAccelerometer('xxx');
        } catch (error) {
            errMessage = error.toString().slice(21, 58);
            console.info('subscribeAccelerometer_SensorJsTest009 error:' + error);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeAccelerometer_JSTest_0100
     * @tc.name: subscribeAccelerometer_SensorJsTest010
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeAccelerometer_SensorJsTest010", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------subscribeAccelerometer_SensorJsTest010---------------------------');
        sensor.subscribeAccelerometer({
            interval: 'xxx',
            success: function (data) {
                console.info("subscribeAccelerometer_SensorJsTest010 success" + JSON.stringify(data));
                expect(typeof (data.x)).assertEqual("number");
                expect(typeof (data.y)).assertEqual("number");
                expect(typeof (data.z)).assertEqual("number");
            },
            fail: function (data, code) {
                console.log("subscribeAccelerometer_SensorJsTest010 is failed, data: " + data + ", code: " + code);
                expect(code).assertEqual(202);
                done();
            },
        });
    })

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeAccelerometer_JSTest_0110
     * @tc.name: subscribeAccelerometer_SensorJsTest011
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeAccelerometer_SensorJsTest011", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------subscribeAccelerometer_SensorJsTest011---------------------------');
        try {
            sensor.unsubscribeAccelerometer();
        } catch (error) {
            errMessage = error.toString().slice(21, 45);
            console.info('subscribeAccelerometer_SensorJsTest011 error:' + error);
            expect(errMessage).assertEqual(errMessages[2]);
            done();
        }
    })

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeAccelerometer_JSTest_0120
     * @tc.name: subscribeAccelerometer_SensorJsTest012
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeAccelerometer_SensorJsTest012", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------subscribeAccelerometer_SensorJsTest012---------------------------');
        sensor.subscribeAccelerometer({
            interval: 'normal',
            success: function (data) {
                console.info("subscribeAccelerometer_SensorJsTest012 success" + JSON.stringify(data));
                expect(typeof (data.x)).assertEqual("number");
                expect(typeof (data.y)).assertEqual("number");
                expect(typeof (data.z)).assertEqual("number");
                done();
            },
        });
    })

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeAccelerometer_JSTest_0130
     * @tc.name: subscribeAccelerometer_SensorJsTest013
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeAccelerometer_SensorJsTest013", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------subscribeAccelerometer_SensorJsTest013---------------------------');
        sensor.subscribeAccelerometer({
            interval: 'normal',
            success: function (data) {
                console.info("subscribeAccelerometer_SensorJsTest013 success" + JSON.stringify(data));
                expect(typeof (data.x)).assertEqual("number");
                expect(typeof (data.y)).assertEqual("number");
                expect(typeof (data.z)).assertEqual("number");
                done();
            },
            fail: function (data, code) {
                console.log("subscribeAccelerometer_SensorJsTest013 is failed, data: " + data + ", code: " + code);
                expect(false).assertTrue();
            },
        });
    })

    /*
     * @tc.number:SUB_SensorsSystem_SubscribeAccelerometer_JSTest_0140
     * @tc.name: subscribeAccelerometer_SensorJsTest014
     * @tc.desc:Verification results of the incorrect parameters of the test interface.
     */
    it("subscribeAccelerometer_SensorJsTest014", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------subscribeAccelerometer_SensorJsTest014---------------------------');
        sensor.subscribeAccelerometer({
            interval: 'normal',
            success: function (data) {
                console.info("subscribeAccelerometer_SensorJsTest014 success" + JSON.stringify(data));
                expect(typeof (data.x)).assertEqual("number");
                expect(typeof (data.y)).assertEqual("number");
                expect(typeof (data.z)).assertEqual("number");
            },
            fail: function (data, code) {
                console.log("subscribeAccelerometer_SensorJsTest014 is failed, data: " + data + ", code: " + code);
                expect(false).assertTrue();
            },
        });
        try {
            sensor.unsubscribeAccelerometer();
        } catch (error) {
            console.info('subscribeAccelerometer_SensorJsTest014_unsubscribeAccelerometer error' + error);
        }
        setTimeout(() => {
            expect(true).assertTrue();
            done();
        }, 500);
    })
})}
