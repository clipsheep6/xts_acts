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

export default function SensorJsTest_Sensor_19() {
describe("SensorJsTest_Sensor_19", function () {
    function callback(data) {
        console.info("callback" + JSON.stringify(data));
		expect(typeof (data.distance)).assertEqual("number");
    }

    function callback2(data) {
        console.info("callback2" + JSON.stringify(data));
		expect(typeof (data.distance)).assertEqual("number");
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
	'Error: On: "SubscribeSensor failed"','Error: Off: "Should subscribe first"'];

    let errMessage;
	
     /*
     * @tc.number:SUB_SensorsSystem_Proxinity_JSTest_0010
     * @tc.name: SensorProxinityJSTest001
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorProxinityJSTest001", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL0, async function (done) {
        console.info('--------SensorProxinityJSTest001--------');
		try {
            sensor.on(sensor.SensorType.SENSOR_TYPE_ID_PROXIMITY, onSensorCallback);
        } catch (error) {
            console.info("SensorProxinityJSTest001 error:" + error);
            errMessage = error.toString();
			console.info("SensorProxinityJSTest001 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
		 setTimeout(() => {
            expect(true).assertTrue();
            done();
        }, 500);
    })

    /*
     * @tc.number: SUB_SensorsSystem_Proxinity_JSTest_0010
     * @tc.name: SensorProxinityJSTest002
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorProxinityJSTest002", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('--------SensorProxinityJSTest002--------');
		try {
            sensor.on(sensor.SensorType.SENSOR_TYPE_ID_PROXIMITY,
			callback, { 'interval': 100000000 });
        } catch (error) {
            console.info("SensorProxinityJSTest002 error:" + error);
            errMessage = error.toString();
			console.info("SensorProxinityJSTest002 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[1]);
            done();
        }
    })

    /*
     * @tc.number: SUB_SensorsSystem_Proxinity_JSTest_0030
     * @tc.name: SensorProxinityJSTest003
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorProxinityJSTest003", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('--------SensorProxinityJSTest003--------');
        function onSensorCallback(data) {
            console.info('SensorProxinityJSTest003  on error');
            expect(typeof (data.distance)).assertEqual("number");
        }
        try {
            sensor.on(sensor.SensorType.SENSOR_TYPE_ID_PROXIMITY, 
			onSensorCallback, { 'interval': 100000000 }, 5);
        } catch (error) {
            console.info("SensorProxinityJSTest003 error:" + error);
            errMessage = error.toString();
            expect(errMessage).assertEqual(errMessages[2]);
            done();
        }
    })

    /*
     * @tc.number: SUB_SensorsSystem_Proxinity_JSTest_0040
     * @tc.name: SensorProxinityJSTest004
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorProxinityJSTest004", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('--------SensorProxinityJSTest004--------');
        try{
		sensor.once(sensor.SensorType.SENSOR_TYPE_ID_PROXIMITY, callback);
		} catch (error) {
            console.info("SensorProxinityJSTest004 error:" + error);
            errMessage = error.toString();
			console.info("SensorProxinityJSTest004 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[3]);
			done();
        }
    })

    /*
     * @tc.number: SUB_SensorsSystem_Proxinity_JSTest_0050
     * @tc.name: SensorProxinityJSTest005
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorProxinityJSTest005", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('--------SensorProxinityJSTest005--------');
        function onceSensorCallback(data) {
            console.info('SensorProxinityJSTest005 on error');
            expect(typeof (data.distance)).assertEqual("number");
        }
        try {
            sensor.once(sensor.SensorType.SENSOR_TYPE_ID_PROXIMITY, onceSensorCallback, 5);
        } catch (error) {
            console.info("SensorProxinityJSTest005 error:" + error);
            errMessage = error.toString();
			console.info("SensorProxinityJSTest005 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[4]);
            done();
        }
    })

   /*
     * @tc.number: SUB_SensorsSystem_Proxinity_JSTest_0060
     * @tc.name: SensorProxinityJSTest006
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorProxinityJSTest006", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('--------SensorProxinityJSTest006--------');
        try {
            sensor.off(string, "");
        } catch (error) {
            console.info("SensorProxinityJSTest006 error:" + error);
            errMessage = error.toString();
			console.info("SensorProxinityJSTest006 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[5]);
            done();
        }
    })

   /*
     * @tc.number: SUB_SensorsSystem_Proxinity_JSTest_0070
     * @tc.name: SensorProxinityJSTest007
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorProxinityJSTest007", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('--------SensorProxinityJSTest007--------');
        function onSensorCallback(data) {
            console.info('SensorProxinityJSTest007  on error');
            expect(typeof (data.distance)).assertEqual("number");
        }
       try {
		   sensor.on(sensor.SensorType.SENSOR_TYPE_ID_PROXIMITY, onSensorCallback);
           sensor.off(sensor.SensorType.SENSOR_TYPE_ID_PROXIMITY);
            } catch (error) {
            console.info("SensorProxinityJSTest007 error:" + error);
            errMessage = error.toString();
			console.info("SensorProxinityJSTest007 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[6]);
            done();
        }
    })

    /*
     * @tc.number: SUB_SensorsSystem_Proxinity_JSTest_0080
     * @tc.name: SensorProxinityJSTest008
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorProxinityJSTest008", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('--------SensorProxinityJSTest008--------');
        function onSensorCallback(data) {
            console.info('SensorProxinityJSTest008  on error');
            expect(typeof (data.distance)).assertEqual("number");
        }
        try {
            sensor.off(1000000, onSensorCallback);
        } catch (error) {
            console.info("SensorProxinityJSTest008 error:" + error);
            errMessage = error.toString();
			console.info("SensorProxinityJSTest008 errMessage:" + errMessage);
            expect(errMessage).assertEqual(errMessages[7]);
            done();
        }
    })
})
}
