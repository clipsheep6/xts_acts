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

export default function SensorJsTest_Sensor_6() {
describe("SensorJsTest_Sensor_6", function () {
    function callback(data) {
        console.info('AccelerometerUncalibratedJSTest on  success, x: ' + data.x + "y: " 
        + data.y + "z: " + data.z + "biasX:" + data.biasX + "biasY: " 
        + data.biasY + "biasZ: " + data.biasZ);
        expect(typeof (data.x)).assertEqual("number");
        expect(typeof (data.y)).assertEqual("number");
        expect(typeof (data.z)).assertEqual("number");
        expect(typeof (data.biasX)).assertEqual("number");
        expect(typeof (data.biasY)).assertEqual("number");
        expect(typeof (data.biasZ)).assertEqual("number");
    }

    function callback2(data) {
        console.info('AccelerometerUncalibratedJSTest on  success, x: ' + data.x + "y: " 
        + data.y + "z: " + data.z + "biasX:" + data.biasX + "biasY: " 
        + data.biasY + "biasZ: " + data.biasZ);
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
     * @tc.number:SUB_SensorsSystem_Accelerometer_Uncalibrated_JSTest_0010
     * @tc.name: AccelerometerUncalibratedJSTest001
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("AccelerometerUncalibratedJSTest001", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL0, async function (done) {
        console.info('----------------------AccelerometerUncalibratedJSTest001----------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED, callback);
        setTimeout(() => {
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED);
            done();
        }, 500);
    })

    /*
     * @tc.number: SUB_SensorsSystem_Accelerometer_Uncalibrated_JSTest_0020
     * @tc.name: AccelerometerUncalibratedJSTest002
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("AccelerometerUncalibratedJSTest002", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------AccelerometerUncalibratedJSTest002----------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED, callback, { 'interval': 100000000 });
        setTimeout(() => {
            console.info('----------------------AccelerometerUncalibratedJSTest002 off in----------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED);
            console.info('----------------------AccelerometerUncalibratedJSTest002 off end----------------');
            done();
        }, 500);
    })

    /*
     * @tc.number: SUB_SensorsSystem_Accelerometer_Uncalibrated_JSTest_0030
     * @tc.name: AccelerometerUncalibratedJSTest003
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("AccelerometerUncalibratedJSTest003", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------AccelerometerUncalibratedJSTest003----------------');
        function onSensorCallback(data) {
            console.info('AccelerometerUncalibratedJSTest003  on error');
            expect(false).assertTrue();
            done();
        }
        try {
            sensor.on(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED,
			onSensorCallback, { 'interval': 100000000 }, 5);
        } catch (error) {
            console.info("AccelerometerUncalibratedJSTest003 error:" + error);
            errMessage = error.toString().slice(12, 49);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

    /*
     * @tc.number: SUB_SensorsSystem_Accelerometer_Uncalibrated_JSTest_0040
     * @tc.name: AccelerometerUncalibratedJSTest004
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("AccelerometerUncalibratedJSTest004", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------AccelerometerUncalibratedJSTest004----------------');
        sensor.once(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED, callback);
        setTimeout(() => {
            expect(true).assertTrue();
            done();
        }, 500);
    })

    /*
     * @tc.number: SUB_SensorsSystem_Accelerometer_Uncalibrated_JSTest_0050
     * @tc.name: AccelerometerUncalibratedJSTest005
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("AccelerometerUncalibratedJSTest005", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------AccelerometerUncalibratedJSTest005----------------');
        function onceSensorCallback(data) {
            console.info('AccelerometerUncalibratedJSTest005  on error');
            expect(false).assertTrue();
            done();
        }
        try {
            sensor.once(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED, onceSensorCallback, 5);
        } catch (error) {
            console.info("AccelerometerUncalibratedJSTest005 error:" + error);
            errMessage = error.toString().slice(14, 51);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

   /*
     * @tc.number: SUB_SensorsSystem_Accelerometer_Uncalibrated_JSTest_0060
     * @tc.name: AccelerometerUncalibratedJSTest006
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("AccelerometerUncalibratedJSTest006", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------AccelerometerUncalibratedJSTest006----------------');
        try {
            sensor.off(string, "");
        } catch (error) {
            console.info("AccelerometerUncalibratedJSTest006 error:" + error);
            errMessage = error.toString().slice(16, 40);
            expect(errMessage).assertEqual(errMessages[2]);
            done();
        }
    })

   /*
     * @tc.number: SUB_SensorsSystem_Accelerometer_Uncalibrated_JSTest_0070
     * @tc.name: AccelerometerUncalibratedJSTest007
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("AccelerometerUncalibratedJSTest007", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------AccelerometerUncalibratedJSTest007----------------');
        function onSensorCallback(data) {
            console.info('AccelerometerUncalibratedJSTest007  on error');
            expect(false).assertTrue();
            done();
        }
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED, onSensorCallback);
        sensor.off(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED, onSensorCallback);
        setTimeout(() => {
            expect(true).assertTrue();
            done();
        }, 500);
    })

    /*
     * @tc.number: SUB_SensorsSystem_Accelerometer_Uncalibrated_JSTest_0080
     * @tc.name: AccelerometerUncalibratedJSTest008
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("AccelerometerUncalibratedJSTest008", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------AccelerometerUncalibratedJSTest008----------------');
        function onSensorCallback(data) {
            console.info('AccelerometerUncalibratedJSTest008  on error');
            expect(false).assertTrue();
            done();
        }
        try {
            sensor.off(1000000, onSensorCallback);
        } catch (error) {
            console.info("AccelerometerUncalibratedJSTest008 error:" + error);
            errMessage = error.toString().slice(13, 35);
            expect(errMessage).assertEqual(errMessages[1]);
            done();
        }
    })

    /*
     * @tc.number: SUB_SensorsSystem_Accelerometer_Uncalibrated_JSTest_0090
     * @tc.name: AccelerometerUncalibratedJSTest009
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("AccelerometerUncalibratedJSTest009", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------AccelerometerUncalibratedJSTest009----------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED, callback);
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED, callback2);
        setTimeout(() => {
            console.info('----------------------AccelerometerUncalibratedJSTest009 off in----------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED);
            console.info('----------------------AccelerometerUncalibratedJSTest009 off end----------------');
            done();
        }, 1000);
    })

    /*
     * @tc.number: SUB_SensorsSystem_Accelerometer_Uncalibrated_JSTest_0100
     * @tc.name: AccelerometerUncalibratedJSTest010
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("AccelerometerUncalibratedJSTest010", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------AccelerometerUncalibratedJSTest010----------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED, callback);
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED, callback2);
        setTimeout(() => {
            console.info('----------------------AccelerometerUncalibratedJSTest010 off in----------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED, callback);
            console.info('----------------------AccelerometerUncalibratedJSTest010 off end----------------');
        }, 500);
        setTimeout(() => {
            console.info('----------------------AccelerometerUncalibratedJSTest010 off in----------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED, callback2);
            console.info('----------------------AccelerometerUncalibratedJSTest010 off end----------------');
            done();
        }, 1000);
    })

    /*
     * @tc.number: SUB_SensorsSystem_Accelerometer_Uncalibrated_JSTest_0110
     * @tc.name: AccelerometerUncalibratedJSTest011
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("AccelerometerUncalibratedJSTest011", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------AccelerometerUncalibratedJSTest011----------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED, callback, { 'interval': 100000000 });
        sensor.once(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED, callback2);
        setTimeout(() => {
            console.info('----------------------AccelerometerUncalibratedJSTest011 off in----------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED);
            console.info('----------------------AccelerometerUncalibratedJSTest011 off end----------------');
            done();
        }, 1000);
    })

    /*
     * @tc.number: SUB_SensorsSystem_Accelerometer_Uncalibrated_JSTest_0120
     * @tc.name: AccelerometerUncalibratedJSTest012
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("AccelerometerUncalibratedJSTest012", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------AccelerometerUncalibratedJSTest012----------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED, callback, { 'interval': 100000000 });
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED, callback2, { 'interval': 100000000 });
        setTimeout(() => {
            console.info('----------------------AccelerometerUncalibratedJSTest012 off in----------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED, callback);
            console.info('----------------------AccelerometerUncalibratedJSTest012 off end----------------');
        }, 500);
        setTimeout(() => {
            console.info('----------------------AccelerometerUncalibratedJSTest012 off in----------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED, callback2);
            console.info('----------------------AccelerometerUncalibratedJSTest012 off end----------------');
            done();
        }, 1000);
    })

    /*
     * @tc.number: SUB_SensorsSystem_Accelerometer_Uncalibrated_JSTest_0130
     * @tc.name: AccelerometerUncalibratedJSTest013
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("AccelerometerUncalibratedJSTest013", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------AccelerometerUncalibratedJSTest013----------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED, callback, { 'interval': 100000000 });
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED, callback2, { 'interval': 100000000 });
        setTimeout(() => {
            console.info('----------------------AccelerometerUncalibratedJSTest013 off in----------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_ACCELEROMETER_UNCALIBRATED);
            console.info('----------------------AccelerometerUncalibratedJSTest013 off end----------------');
            done();
        }, 1000);
    })
})}
