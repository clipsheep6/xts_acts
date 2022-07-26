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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'

describe("SensorJsTest_sensor_13", function () {
    function callback(data) {
        console.info("callback" + JSON.stringify(data));
        expect(typeof (data.x)).assertEqual("number");
        expect(typeof (data.y)).assertEqual("number");
        expect(typeof (data.z)).assertEqual("number");
    }

    function callback2(data) {
        console.info("callback2" + JSON.stringify(data));
        expect(typeof (data.x)).assertEqual("number");
        expect(typeof (data.y)).assertEqual("number");
        expect(typeof (data.z)).assertEqual("number");
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
     * @tc.number:SUB_SensorsSystem_Linear_Acceleration_JSTest_0010
     * @tc.name: LinearAcceleration_SensorJsTest001
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("LinearAcceleration_SensorJsTest001", FUNCTION|MEDIUMTEST|LEVEL0, async function (done) {
        console.info('--------LinearAcceleration_SensorJsTest001--------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION, callback);
        setTimeout(() => {
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION);
            done();
        }, 500);
    })

    /*
     * @tc.number: SUB_SensorsSystem_Linear_Acceleration_JSTest_0020
     * @tc.name: LinearAcceleration_SensorJsTest002
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("LinearAcceleration_SensorJsTest002", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------LinearAcceleration_SensorJsTest002--------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION,
		callback, { 'interval': 100000000 });
        setTimeout(() => {
            console.info('--------LinearAcceleration_SensorJsTest002 off in--------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION);
            console.info('--------LinearAcceleration_SensorJsTest002 off end--------');
            done();
        }, 500);
    })

    /*
     * @tc.number: SUB_SensorsSystem_Linear_Acceleration_JSTest_0030
     * @tc.name: LinearAcceleration_SensorJsTest003
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("LinearAcceleration_SensorJsTest003", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------LinearAcceleration_SensorJsTest003--------');
        function onSensorCallback(data) {
            console.info('LinearAcceleration_SensorJsTest003  on error');
            expect(false).assertTrue();
            done();
        }
        try {
            sensor.on(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION, 
			onSensorCallback, { 'interval': 100000000 }, 5);
        } catch (error) {
            console.info("LinearAcceleration_SensorJsTest003 error:" + error);
            errMessage = error.toString().slice(12, 49);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

    /*
     * @tc.number: SUB_SensorsSystem_Linear_Acceleration_JSTest_0040
     * @tc.name: LinearAcceleration_SensorJsTest004
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("LinearAcceleration_SensorJsTest004", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------LinearAcceleration_SensorJsTest004--------');
        sensor.once(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION, callback);
        setTimeout(() => {
            expect(true).assertTrue();
            done();
        }, 500);
    })

    /*
     * @tc.number: SUB_SensorsSystem_Linear_Acceleration_JSTest_0050
     * @tc.name: LinearAcceleration_SensorJsTest005
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("LinearAcceleration_SensorJsTest005", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------LinearAcceleration_SensorJsTest005--------');
        function onceSensorCallback(data) {
            console.info('LinearAcceleration_SensorJsTest005  on error');
            expect(false).assertTrue();
            done();
        }
        try {
            sensor.once(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION,
			onceSensorCallback, 5);
        } catch (error) {
            console.info("LinearAcceleration_SensorJsTest005 error:" + error);
            errMessage = error.toString().slice(14, 51);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

   /*
     * @tc.number: SUB_SensorsSystem_Linear_Acceleration_JSTest_0060
     * @tc.name: LinearAcceleration_SensorJsTest006
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("LinearAcceleration_SensorJsTest006", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------LinearAcceleration_SensorJsTest006--------');
        try {
            sensor.off(string, "");
        } catch (error) {
            console.info("LinearAcceleration_SensorJsTest006 error:" + error);
            errMessage = error.toString().slice(16, 40);
            expect(errMessage).assertEqual(errMessages[2]);
            done();
        }
    })

   /*
     * @tc.number: SUB_SensorsSystem_Linear_Acceleration_JSTest_0070
     * @tc.name: LinearAcceleration_SensorJsTest007
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("LinearAcceleration_SensorJsTest007", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------LinearAcceleration_SensorJsTest007--------');
        function onSensorCallback(data) {
            console.info('LinearAcceleration_SensorJsTest007  on error');
            expect(false).assertTrue();
            done();
        }
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION, onSensorCallback);
        sensor.off(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION, onSensorCallback);
        setTimeout(() => {
            expect(true).assertTrue();
            done();
        }, 500);
    })

    /*
     * @tc.number: SUB_SensorsSystem_Linear_Acceleration_JSTest_0080
     * @tc.name: LinearAcceleration_SensorJsTest008
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("LinearAcceleration_SensorJsTest008", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------LinearAcceleration_SensorJsTest008--------');
        function onSensorCallback(data) {
            console.info('LinearAcceleration_SensorJsTest008  on error');
            expect(false).assertTrue();
            done();
        }
        try {
            sensor.off(1000000, onSensorCallback);
        } catch (error) {
            console.info("LinearAcceleration_SensorJsTest008 error:" + error);
            errMessage = error.toString().slice(13, 35);
            expect(errMessage).assertEqual(errMessages[1]);
            done();
        }
    })

    /*
     * @tc.number: SUB_SensorsSystem_Linear_Acceleration_JSTest_0090
     * @tc.name: LinearAcceleration_SensorJsTest009
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("LinearAcceleration_SensorJsTest009", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------LinearAcceleration_SensorJsTest009--------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION, callback);
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION, callback2);
        setTimeout(() => {
            console.info('--------LinearAcceleration_SensorJsTest009 off in--------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION);
            console.info('--------LinearAcceleration_SensorJsTest009 off end--------');
            done();
        }, 1000);
    })

    /*
     * @tc.number: SUB_SensorsSystem_Linear_Acceleration_JSTest_0100
     * @tc.name: LinearAcceleration_SensorJsTest010
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("LinearAcceleration_SensorJsTest010", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------LinearAcceleration_SensorJsTest010--------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION, callback);
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION, callback2);
        setTimeout(() => {
            console.info('--------LinearAcceleration_SensorJsTest010 off in--------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION, callback);
            console.info('--------LinearAcceleration_SensorJsTest010 off end--------');
        }, 500);
        setTimeout(() => {
            console.info('--------LinearAcceleration_SensorJsTest010 off in--------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION, callback2);
            console.info('--------LinearAcceleration_SensorJsTest010 off end--------');
            done();
        }, 1000);
    })

    /*
     * @tc.number: SUB_SensorsSystem_Linear_Acceleration_JSTest_0110
     * @tc.name: LinearAcceleration_SensorJsTest011
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("LinearAcceleration_SensorJsTest011", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------LinearAcceleration_SensorJsTest011--------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION, 
		callback, { 'interval': 100000000 });
        sensor.once(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION, callback2);
        setTimeout(() => {
            console.info('--------LinearAcceleration_SensorJsTest011 off in--------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION);
            console.info('--------LinearAcceleration_SensorJsTest011 off end--------');
            done();
        }, 1000);
    })

    /*
     * @tc.number: SUB_SensorsSystem_Linear_Acceleration_JSTest_0120
     * @tc.name: LinearAcceleration_SensorJsTest012
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("LinearAcceleration_SensorJsTest012", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------LinearAcceleration_SensorJsTest012--------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION,
		callback, { 'interval': 100000000 });
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION, 
		callback2, { 'interval': 100000000 });
        setTimeout(() => {
            console.info('--------LinearAcceleration_SensorJsTest012 off in--------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION, callback);
            console.info('--------LinearAcceleration_SensorJsTest012 off end--------');
        }, 500);
        setTimeout(() => {
            console.info('--------LinearAcceleration_SensorJsTest012 off in--------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION, callback2);
            console.info('--------LinearAcceleration_SensorJsTest012 off end--------');
            done();
        }, 1000);
    })

    /*
     * @tc.number: SUB_SensorsSystem_Linear_Acceleration_JSTest_0130
     * @tc.name: LinearAcceleration_SensorJsTest013
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("LinearAcceleration_SensorJsTest013", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------LinearAcceleration_SensorJsTest013--------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION, 
		callback, { 'interval': 100000000 });
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION,
		callback2, { 'interval': 100000000 });
        setTimeout(() => {
            console.info('--------LinearAcceleration_SensorJsTest013 off in--------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_LINEAR_ACCELERATION);
            console.info('--------LinearAcceleration_SensorJsTest013 off end--------');
            done();
        }, 1000);
    })
})