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
import sensor from '@ohos.sensor'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect, TestType, Size, Level } from '@ohos/hypium'

export default function SensorJsTest_sensor_10() {
describe("SensorJsTest_sensor_10", function () {
    function callback(data) {
        console.info("callback" + JSON.stringify(data));
        expect(typeof (data.x)).assertEqual("number");
        expect(typeof (data.y)).assertEqual("number");
        expect(typeof (data.z)).assertEqual("number");
        expect(typeof (data.biasX)).assertEqual("number");
        expect(typeof (data.biasY)).assertEqual("number");
        expect(typeof (data.biasZ)).assertEqual("number");
    }

    function callback2(data) {
        console.info("callback2" + JSON.stringify(data));
        expect(typeof (data.x)).assertEqual("number");
        expect(typeof (data.y)).assertEqual("number");
        expect(typeof (data.z)).assertEqual("number");
        expect(typeof (data.biasX)).assertEqual("number");
        expect(typeof (data.biasY)).assertEqual("number");
        expect(typeof (data.biasZ)).assertEqual("number");
    }

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

    let errMessages = ['The number of parameters is not valid', 'Should subscribe first',
    'string is not defined'];

    let errMessage;

    /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0010
     * @tc.name: SensorGyroscopeUncalibratedJSTest001
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorGyroscopeUncalibratedJSTest001", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL0, async function (done) {
        console.info('----------------------SensorGyroscopeUncalibratedJSTest001--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback);
        setTimeout(() => {
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED);
            done();
        }, 500);
    })

     /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0020
     * @tc.name: SensorGyroscopeUncalibratedJSTest002
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorGyroscopeUncalibratedJSTest002", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------SensorGyroscopeUncalibratedJSTest002--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback, { 'interval': 100000000 });
        setTimeout(() => {
            console.info('----------------------SensorGyroscopeUncalibratedJSTest002 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED);
            console.info('----------------------SensorGyroscopeUncalibratedJSTest002 off end--------------');
            done();
        }, 500);
    })

     /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0030
     * @tc.name: SensorGyroscopeUncalibratedJSTest003
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorGyroscopeUncalibratedJSTest003", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------SensorGyroscopeUncalibratedJSTest003--------------');
        function onSensorCallback(data) {
            console.info('SensorGyroscopeUncalibratedJSTest003  on error');
            expect(false).assertTrue();
            done();
        }
        try {
            sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED,
			onSensorCallback, { 'interval': 100000000 }, 5);
        } catch (error) {
            console.info("SensorGyroscopeUncalibratedJSTest003 error:" + error);
            errMessage = error.toString().slice(12, 49);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

    /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0040
     * @tc.name: SensorGyroscopeUncalibratedJSTest004
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorGyroscopeUncalibratedJSTest004", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------SensorGyroscopeUncalibratedJSTest004--------------');
        sensor.once(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback);
        setTimeout(() => {
            expect(true).assertTrue();
            done();
        }, 500);
    })

     /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0050
     * @tc.name: SensorGyroscopeUncalibratedJSTest005
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorGyroscopeUncalibratedJSTest005", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------SensorGyroscopeUncalibratedJSTest005--------------');
        function onceSensorCallback(data) {
            console.info('SensorGyroscopeUncalibratedJSTest005  on error');
            expect(false).assertTrue();
            done();
        }
        try {
            sensor.once(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, onceSensorCallback, 5);
        } catch (error) {
            console.info("SensorGyroscopeUncalibratedJSTest005 error:" + error);
            errMessage = error.toString().slice(14, 51);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

     /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0060
     * @tc.name: SensorGyroscopeUncalibratedJSTest006
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorGyroscopeUncalibratedJSTest006", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------SensorGyroscopeUncalibratedJSTest006--------------');
        try {
            sensor.off(string, "");
        } catch (error) {
            console.info("SensorGyroscopeUncalibratedJSTest006 error:" + error);
            errMessage = error.toString().slice(16, 40);
            expect(errMessage).assertEqual(errMessages[2]);
            done();
        }
    })

     /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0070
     * @tc.name: SensorGyroscopeUncalibratedJSTest007
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorGyroscopeUncalibratedJSTest007", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------SensorGyroscopeUncalibratedJSTest007--------------');
        function onSensorCallback(data) {
            console.info('SensorGyroscopeUncalibratedJSTest007  on error');
            expect(false).assertTrue();
            done();
        }
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, onSensorCallback);
        sensor.off(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, onSensorCallback);
        setTimeout(() => {
            expect(true).assertTrue();
            done();
        }, 500);
    })

     /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0080
     * @tc.name: SensorGyroscopeUncalibratedJSTest008
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorGyroscopeUncalibratedJSTest008", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------SensorGyroscopeUncalibratedJSTest008--------------');
        function onSensorCallback(data) {
            console.info('SensorGyroscopeUncalibratedJSTest008  on error');
            expect(false).assertTrue();
            done();
        }
        try {
            sensor.off(1000000, onSensorCallback);
        } catch (error) {
            console.info("SensorGyroscopeUncalibratedJSTest008 error:" + error);
            errMessage = error.toString().slice(13, 35);
            expect(errMessage).assertEqual(errMessages[1]);
            done();
        }
    })

     /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0090
     * @tc.name: SensorGyroscopeUncalibratedJSTest009
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorGyroscopeUncalibratedJSTest009", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------SensorGyroscopeUncalibratedJSTest009--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback);
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback2);
        setTimeout(() => {
            console.info('----------------------SensorGyroscopeUncalibratedJSTest009 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED);
            console.info('----------------------SensorGyroscopeUncalibratedJSTest009 off end--------------');
            done();
        }, 1000);
    })

     /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0100
     * @tc.name: SensorGyroscopeUncalibratedJSTest010
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorGyroscopeUncalibratedJSTest010", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------SensorGyroscopeUncalibratedJSTest010--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback);
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback2);
        setTimeout(() => {
            console.info('----------------------SensorGyroscopeUncalibratedJSTest010 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback);
            console.info('----------------------SensorGyroscopeUncalibratedJSTest010 off end--------------');
        }, 500);
        setTimeout(() => {
            console.info('----------------------SensorGyroscopeUncalibratedJSTest010 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback2);
            console.info('----------------------SensorGyroscopeUncalibratedJSTest010 off end--------------');
            done();
        }, 1000);
    })

    /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0110
     * @tc.name: SensorGyroscopeUncalibratedJSTest011
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorGyroscopeUncalibratedJSTest011", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------SensorGyroscopeUncalibratedJSTest011--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback, { 'interval': 100000000 });
        sensor.once(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback2);
        setTimeout(() => {
            console.info('----------------------SensorGyroscopeUncalibratedJSTest011 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED);
            console.info('----------------------SensorGyroscopeUncalibratedJSTest011 off end--------------');
            done();
        }, 1000);
    })

    /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0120
     * @tc.name: SensorGyroscopeUncalibratedJSTest012
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorGyroscopeUncalibratedJSTest012", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------SensorGyroscopeUncalibratedJSTest012--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback, { 'interval': 100000000 });
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback2, { 'interval': 100000000 });
        setTimeout(() => {
            console.info('----------------------SensorGyroscopeUncalibratedJSTest012 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback);
            console.info('----------------------SensorGyroscopeUncalibratedJSTest012 off end--------------');
        }, 500);
        setTimeout(() => {
            console.info('----------------------SensorGyroscopeUncalibratedJSTest012 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback2);
            console.info('----------------------SensorGyroscopeUncalibratedJSTest012 off end--------------');
            done();
        }, 1000);
    })

     /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0130
     * @tc.name: SensorGyroscopeUncalibratedJSTest013
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorGyroscopeUncalibratedJSTest013", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------SensorGyroscopeUncalibratedJSTest013--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback, { 'interval': 100000000 });
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback2, { 'interval': 100000000 });
        setTimeout(() => {
            console.info('----------------------SensorGyroscopeUncalibratedJSTest013 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED);
            console.info('----------------------SensorGyroscopeUncalibratedJSTest013 off end--------------');
            done();
        }, 1000);
    })
})}
