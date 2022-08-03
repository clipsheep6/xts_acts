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

export default function SensorJsTest_Sensor_10() {
describe("SensorJsTest_Sensor_10", function () {
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
     * @tc.name: GyroscopeUncalibratedJSTest001
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("GyroscopeUncalibratedJSTest001", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL0, async function (done) {
        console.info('----------------------GyroscopeUncalibratedJSTest001--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback);
        setTimeout(() => {
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED);
            done();
        }, 500);
    })

     /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0020
     * @tc.name: GyroscopeUncalibratedJSTest002
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("GyroscopeUncalibratedJSTest002", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------GyroscopeUncalibratedJSTest002--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback, { 'interval': 100000000 });
        setTimeout(() => {
            console.info('----------------------GyroscopeUncalibratedJSTest002 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED);
            console.info('----------------------GyroscopeUncalibratedJSTest002 off end--------------');
            done();
        }, 500);
    })

     /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0030
     * @tc.name: GyroscopeUncalibratedJSTest003
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("GyroscopeUncalibratedJSTest003", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------GyroscopeUncalibratedJSTest003--------------');
        function onSensorCallback(data) {
            console.info('GyroscopeUncalibratedJSTest003  on error');
            expect(false).assertTrue();
            done();
        }
        try {
            sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED,
			onSensorCallback, { 'interval': 100000000 }, 5);
        } catch (error) {
            console.info("GyroscopeUncalibratedJSTest003 error:" + error);
            errMessage = error.toString().slice(12, 49);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

    /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0040
     * @tc.name: GyroscopeUncalibratedJSTest004
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("GyroscopeUncalibratedJSTest004", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------GyroscopeUncalibratedJSTest004--------------');
        sensor.once(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback);
        setTimeout(() => {
            expect(true).assertTrue();
            done();
        }, 500);
    })

     /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0050
     * @tc.name: GyroscopeUncalibratedJSTest005
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("GyroscopeUncalibratedJSTest005", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------GyroscopeUncalibratedJSTest005--------------');
        function onceSensorCallback(data) {
            console.info('GyroscopeUncalibratedJSTest005  on error');
            expect(false).assertTrue();
            done();
        }
        try {
            sensor.once(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, onceSensorCallback, 5);
        } catch (error) {
            console.info("GyroscopeUncalibratedJSTest005 error:" + error);
            errMessage = error.toString().slice(14, 51);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

     /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0060
     * @tc.name: GyroscopeUncalibratedJSTest006
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("GyroscopeUncalibratedJSTest006", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------GyroscopeUncalibratedJSTest006--------------');
        try {
            sensor.off(string, "");
        } catch (error) {
            console.info("GyroscopeUncalibratedJSTest006 error:" + error);
            errMessage = error.toString().slice(16, 40);
            expect(errMessage).assertEqual(errMessages[2]);
            done();
        }
    })

     /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0070
     * @tc.name: GyroscopeUncalibratedJSTest007
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("GyroscopeUncalibratedJSTest007", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------GyroscopeUncalibratedJSTest007--------------');
        function onSensorCallback(data) {
            console.info('GyroscopeUncalibratedJSTest007  on error');
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
     * @tc.name: GyroscopeUncalibratedJSTest008
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("GyroscopeUncalibratedJSTest008", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------GyroscopeUncalibratedJSTest008--------------');
        function onSensorCallback(data) {
            console.info('GyroscopeUncalibratedJSTest008  on error');
            expect(false).assertTrue();
            done();
        }
        try {
            sensor.off(1000000, onSensorCallback);
        } catch (error) {
            console.info("GyroscopeUncalibratedJSTest008 error:" + error);
            errMessage = error.toString().slice(13, 35);
            expect(errMessage).assertEqual(errMessages[1]);
            done();
        }
    })

     /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0090
     * @tc.name: GyroscopeUncalibratedJSTest009
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("GyroscopeUncalibratedJSTest009", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------GyroscopeUncalibratedJSTest009--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback);
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback2);
        setTimeout(() => {
            console.info('----------------------GyroscopeUncalibratedJSTest009 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED);
            console.info('----------------------GyroscopeUncalibratedJSTest009 off end--------------');
            done();
        }, 1000);
    })

     /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0100
     * @tc.name: GyroscopeUncalibratedJSTest010
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("GyroscopeUncalibratedJSTest010", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------GyroscopeUncalibratedJSTest010--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback);
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback2);
        setTimeout(() => {
            console.info('----------------------GyroscopeUncalibratedJSTest010 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback);
            console.info('----------------------GyroscopeUncalibratedJSTest010 off end--------------');
        }, 500);
        setTimeout(() => {
            console.info('----------------------GyroscopeUncalibratedJSTest010 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback2);
            console.info('----------------------GyroscopeUncalibratedJSTest010 off end--------------');
            done();
        }, 1000);
    })

    /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0110
     * @tc.name: GyroscopeUncalibratedJSTest011
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("GyroscopeUncalibratedJSTest011", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------GyroscopeUncalibratedJSTest011--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback, { 'interval': 100000000 });
        sensor.once(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback2);
        setTimeout(() => {
            console.info('----------------------GyroscopeUncalibratedJSTest011 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED);
            console.info('----------------------GyroscopeUncalibratedJSTest011 off end--------------');
            done();
        }, 1000);
    })

    /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0120
     * @tc.name: GyroscopeUncalibratedJSTest012
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("GyroscopeUncalibratedJSTest012", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------GyroscopeUncalibratedJSTest012--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback, { 'interval': 100000000 });
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback2, { 'interval': 100000000 });
        setTimeout(() => {
            console.info('----------------------GyroscopeUncalibratedJSTest012 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback);
            console.info('----------------------GyroscopeUncalibratedJSTest012 off end--------------');
        }, 500);
        setTimeout(() => {
            console.info('----------------------GyroscopeUncalibratedJSTest012 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback2);
            console.info('----------------------GyroscopeUncalibratedJSTest012 off end--------------');
            done();
        }, 1000);
    })

     /*
     * @tc.number:SUB_SensorsSystem_Gyroscope_Uncalibrated_JSTest_0130
     * @tc.name: GyroscopeUncalibratedJSTest013
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("GyroscopeUncalibratedJSTest013", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------GyroscopeUncalibratedJSTest013--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback, { 'interval': 100000000 });
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED, callback2, { 'interval': 100000000 });
        setTimeout(() => {
            console.info('----------------------GyroscopeUncalibratedJSTest013 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_GYROSCOPE_UNCALIBRATED);
            console.info('----------------------GyroscopeUncalibratedJSTest013 off end--------------');
            done();
        }, 1000);
    })
})}
