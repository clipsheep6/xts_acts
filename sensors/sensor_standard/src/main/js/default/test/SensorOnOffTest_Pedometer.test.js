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

describe("SensorJsTest_sensor_18", function () {
    function callback(data) {
        console.info("callback" + JSON.stringify(data));
		expect(typeof (data.steps)).assertEqual("number");
    }

    function callback2(data) {
        console.info("callback2" + JSON.stringify(data));
		expect(typeof (data.steps)).assertEqual("number");
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

    let errMessages = ['ReferenceError: onSensorCallback is not defined', 'Error: On: "SubscribeSensor failed"',
    'Error: On: "The number of parameters is not valid"','Error: Once: "SubscribeSensor failed"',
	'Error: Once: "The number of parameters is not valid"','ReferenceError: string is not defined',
	'Error: Off: "Should subscribe first"','Error: Off: "Should subscribe first"'];

    let errMessage;

     /*
     * @tc.number:SUB_SensorsSystem_Pedometer_JSTest_0010
     * @tc.name: SensorPedometerJSTest001
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorPedometerJSTest001", FUNCTION|MEDIUMTEST|LEVEL0, async function (done) {
        console.info('--------SensorPedometerJSTest001--------');
		try {
            sensor.on(sensor.SensorType.SENSOR_TYPE_ID_PEDOMETER, onSensorCallback);
        } catch (error) {
            console.info("SensorPedometerJSTest001 error:" + error);
            errMessage = error.toString();
			console.info("SensorPedometerJSTest001 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
		 setTimeout(() => {
            expect(true).assertTrue();
            done();
        }, 500);
    })

    /*
     * @tc.number: SUB_SensorsSystem_Pedometer_JSTest_0010
     * @tc.name: SensorPedometerJSTest002
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorPedometerJSTest002", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------SensorPedometerJSTest002--------');
		try {
            sensor.on(sensor.SensorType.SENSOR_TYPE_ID_PEDOMETER,
			callback, { 'interval': 100000000 });
        } catch (error) {
            console.info("SensorPedometerJSTest002 error:" + error);
            errMessage = error.toString();
			console.info("SensorPedometerJSTest002 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[1]);
            done();
        }
    })

    /*
     * @tc.number: SUB_SensorsSystem_Pedometer_JSTest_0030
     * @tc.name: SensorPedometerJSTest003
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorPedometerJSTest003", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------SensorPedometerJSTest003--------');
        function onSensorCallback(data) {
            console.info('SensorPedometerJSTest003  on error');
            expect(typeof (data.steps)).assertEqual("number");
        }
        try {
            sensor.on(sensor.SensorType.SENSOR_TYPE_ID_PEDOMETER, 
			onSensorCallback, { 'interval': 100000000 }, 5);
        } catch (error) {
            console.info("SensorPedometerJSTest003 error:" + error);
            errMessage = error.toString();
            expect(errMessage).assertEqual(errMessages[2]);
            done();
        }
    })

    /*
     * @tc.number: SUB_SensorsSystem_Pedometer_JSTest_0040
     * @tc.name: SensorPedometerJSTest004
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorPedometerJSTest004", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------SensorPedometerJSTest004--------');
        try{
		sensor.once(sensor.SensorType.SENSOR_TYPE_ID_PEDOMETER, callback);
		} catch (error) {
            console.info("SensorPedometerJSTest004 error:" + error);
            errMessage = error.toString();
			console.info("SensorPedometerJSTest004 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[3]);
			done();
        }
    })

    /*
     * @tc.number: SUB_SensorsSystem_Pedometer_JSTest_0050
     * @tc.name: SensorPedometerJSTest005
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorPedometerJSTest005", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------SensorPedometerJSTest005--------');
        function onceSensorCallback(data) {
            console.info('SensorPedometerJSTest005 on error');
            expect(typeof (data.steps)).assertEqual("number");
        }
        try {
            sensor.once(sensor.SensorType.SENSOR_TYPE_ID_PEDOMETER, onceSensorCallback, 5);
        } catch (error) {
            console.info("SensorPedometerJSTest005 error:" + error);
            errMessage = error.toString();
			console.info("SensorPedometerJSTest005 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[4]);
            done();
        }
    })

   /*
     * @tc.number: SUB_SensorsSystem_Pedometer_JSTest_0060
     * @tc.name: SensorPedometerJSTest006
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorPedometerJSTest006", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------SensorPedometerJSTest006--------');
        try {
            sensor.off(string, "");
        } catch (error) {
            console.info("SensorPedometerJSTest006 error:" + error);
            errMessage = error.toString();
			console.info("SensorPedometerJSTest006 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[5]);
            done();
        }
    })

   /*
     * @tc.number: SUB_SensorsSystem_Pedometer_JSTest_0070
     * @tc.name: SensorPedometerJSTest007
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorPedometerJSTest007", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------SensorPedometerJSTest007--------');
        function offSensorCallback(data) {
            console.info('SensorPedometerJSTest007  on error');
            expect(typeof (data.steps)).assertEqual("number");
        }
       try {
           sensor.off(sensor.SensorType.SENSOR_TYPE_ID_PEDOMETER, offSensorCallback);
            } catch (error) {
            console.info("SensorPedometerJSTest007 error:" + error);
            errMessage = error.toString();
			console.info("SensorPedometerJSTest007 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[6]);
            done();
        }
    })

    /*
     * @tc.number: SUB_SensorsSystem_Pedometer_JSTest_0080
     * @tc.name: SensorPedometerJSTest008
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorPedometerJSTest008", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------SensorPedometerJSTest008--------');
        function onSensorCallback(data) {
            console.info('SensorPedometerJSTest008  on error');
            expect(typeof (data.steps)).assertEqual("number");
        }
        try {
            sensor.off(1000000, onSensorCallback);
        } catch (error) {
            console.info("SensorPedometerJSTest008 error:" + error);
            errMessage = error.toString();
			console.info("SensorPedometerJSTest008 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[7]);
            done();
        }
    })
})