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

describe("SensorJsTest_sensor_8", function () {
    function callback(data) {
        console.info("callback" + JSON.stringify(data));
		expect(typeof (data.pressure)).assertEqual("number");
    }

    function callback2(data) {
        console.info("callback2" + JSON.stringify(data));
		expect(typeof (data.pressure)).assertEqual("number");
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
     * @tc.number:SUB_SensorsSystem_Barometer_JSTest_0010
     * @tc.name: SensorBarometerJSTest001
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorBarometerJSTest001", FUNCTION|MEDIUMTEST|LEVEL0, async function (done) {
        console.info('--------SensorBarometerJSTest001--------');
		try {
            sensor.on(sensor.SensorType.SENSOR_TYPE_ID_BAROMETER, onSensorCallback);
        } catch (error) {
            console.info("SensorBarometerJSTest001 error:" + error);
            errMessage = error.toString();
			console.info("SensorBarometerJSTest001 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
		 setTimeout(() => {
            expect(true).assertTrue();
            done();
        }, 500);
    })

    /*
     * @tc.number: SUB_SensorsSystem_Barometer_JSTest_0010
     * @tc.name: SensorBarometerJSTest002
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorBarometerJSTest002", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------SensorBarometerJSTest002--------');
		try {
            sensor.on(sensor.SensorType.SENSOR_TYPE_ID_BAROMETER,
			callback, { 'interval': 100000000 });
        } catch (error) {
            console.info("SensorBarometerJSTest002 error:" + error);
            errMessage = error.toString();
			console.info("SensorBarometerJSTest002 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[1]);
            done();
        }
    })

    /*
     * @tc.number: SUB_SensorsSystem_Barometer_JSTest_0030
     * @tc.name: SensorBarometerJSTest003
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorBarometerJSTest003", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------SensorBarometerJSTest003--------');
        function onSensorCallback(data) {
            console.info('SensorBarometerJSTest003  on error');
            expect(typeof (data.pressure)).assertEqual("number");
        }
        try {
            sensor.on(sensor.SensorType.SENSOR_TYPE_ID_BAROMETER, 
			onSensorCallback, { 'interval': 100000000 }, 5);
        } catch (error) {
            console.info("SensorBarometerJSTest003 error:" + error);
            errMessage = error.toString();
            expect(errMessage).assertEqual(errMessages[2]);
            done();
        }
    })

    /*
     * @tc.number: SUB_SensorsSystem_Barometer_JSTest_0040
     * @tc.name: SensorBarometerJSTest004
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorBarometerJSTest004", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------SensorBarometerJSTest004--------');
        try{
		sensor.once(sensor.SensorType.SENSOR_TYPE_ID_BAROMETER, callback);
		} catch (error) {
            console.info("SensorBarometerJSTest004 error:" + error);
            errMessage = error.toString();
			console.info("SensorBarometerJSTest004 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[3]);
			done();
        }
    })

    /*
     * @tc.number: SUB_SensorsSystem_Barometer_JSTest_0050
     * @tc.name: SensorBarometerJSTest005
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorBarometerJSTest005", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------SensorBarometerJSTest005--------');
        function onceSensorCallback(data) {
            console.info('SensorBarometerJSTest005 on error');
            expect(typeof (data.pressure)).assertEqual("number");
        }
        try {
            sensor.once(sensor.SensorType.SENSOR_TYPE_ID_BAROMETER, onceSensorCallback, 5);
        } catch (error) {
            console.info("SensorBarometerJSTest005 error:" + error);
            errMessage = error.toString();
			console.info("SensorBarometerJSTest005 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[4]);
            done();
        }
    })

   /*
     * @tc.number: SUB_SensorsSystem_Barometer_JSTest_0060
     * @tc.name: SensorBarometerJSTest006
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorBarometerJSTest006", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------SensorBarometerJSTest006--------');
        try {
            sensor.off(string, "");
        } catch (error) {
            console.info("SensorBarometerJSTest006 error:" + error);
            errMessage = error.toString();
			console.info("SensorBarometerJSTest006 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[5]);
            done();
        }
    })

   /*
     * @tc.number: SUB_SensorsSystem_Barometer_JSTest_0070
     * @tc.name: SensorBarometerJSTest007
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorBarometerJSTest007", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------SensorBarometerJSTest007--------');
        function offSensorCallback(data) {
            console.info('SensorBarometerJSTest007  on error');
            expect(typeof (data.pressure)).assertEqual("number");
        }
       try {
           sensor.off(sensor.SensorType.SENSOR_TYPE_ID_BAROMETER, offSensorCallback);
            } catch (error) {
            console.info("SensorBarometerJSTest007 error:" + error);
            errMessage = error.toString();
			console.info("SensorBarometerJSTest007 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[6]);
            done();
        }
    })

    /*
     * @tc.number: SUB_SensorsSystem_Barometer_JSTest_0080
     * @tc.name: SensorBarometerJSTest008
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorBarometerJSTest008", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('--------SensorBarometerJSTest008--------');
        function onSensorCallback(data) {
            console.info('SensorBarometerJSTest008  on error');
            expect(typeof (data.pressure)).assertEqual("number");
        }
        try {
            sensor.off(1000000, onSensorCallback);
        } catch (error) {
            console.info("SensorBarometerJSTest008 error:" + error);
            errMessage = error.toString();
			console.info("SensorBarometerJSTest008 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[7]);
            done();
        }
    })
})