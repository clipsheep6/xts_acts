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

describe("SensorJsTest_sensor_21", function () {
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
     * @tc.number:SUB_SensorsSystem_Significant_Motion_JSTest_0010
     * @tc.name: SensorSignificantMotionJSTest001
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorSignificantMotionJSTest001", FUNCTION|MEDIUMTEST|LEVEL0, async function (done) {
        console.info('----------------------SensorSignificantMotionJSTest001-----------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION, callback);
        setTimeout(() => {
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION);
            done();
        }, 500);
    })

     /*
     * @tc.number:SUB_SensorsSystem_Significant_Motion_JSTest_0020
     * @tc.name: SensorSignificantMotionJSTest002
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorSignificantMotionJSTest002", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('----------------------SensorSignificantMotionJSTest002-----------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION, callback, { 'interval': 100000000 });
        setTimeout(() => {
            console.info('----------------------SensorSignificantMotionJSTest002 off in-----------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION);
            console.info('----------------------SensorSignificantMotionJSTest002 off end-----------');
            done();
        }, 500);
    })

     /*
     * @tc.number:SUB_SensorsSystem_Significant_Motion_JSTest_0030
     * @tc.name: SensorSignificantMotionJSTest003
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorSignificantMotionJSTest003", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('----------------------SensorSignificantMotionJSTest003-----------');
        function onSensorCallback(data) {
            console.info('SensorSignificantMotionJSTest003  on error');
            expect(false).assertTrue();
            done();
        }
        try {
            sensor.on(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION,
			onSensorCallback, { 'interval': 100000000 }, 5);
        } catch (error) {
            console.info("SensorSignificantMotionJSTest003 error:" + error);
            errMessage = error.toString().slice(12, 49);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

    /*
     * @tc.number:SUB_SensorsSystem_Significant_Motion_JSTest_0040
     * @tc.name: SensorSignificantMotionJSTest004
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorSignificantMotionJSTest004", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('----------------------SensorSignificantMotionJSTest004-----------');
        sensor.once(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION, callback);
        setTimeout(() => {
            expect(true).assertTrue();
            done();
        }, 500);
    })

     /*
     * @tc.number:SUB_SensorsSystem_Significant_Motion_JSTest_0050
     * @tc.name: SensorSignificantMotionJSTest005
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorSignificantMotionJSTest005", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('----------------------SensorSignificantMotionJSTest005-----------');
        function onceSensorCallback(data) {
            console.info('SensorSignificantMotionJSTest005  on error');
            expect(false).assertTrue();
            done();
        }
        try {
            sensor.once(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION, onceSensorCallback, 5);
        } catch (error) {
            console.info("SensorSignificantMotionJSTest005 error:" + error);
            errMessage = error.toString().slice(14, 51);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

     /*
     * @tc.number:SUB_SensorsSystem_Significant_Motion_JSTest_0060
     * @tc.name: SensorSignificantMotionJSTest006
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorSignificantMotionJSTest006", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('----------------------SensorSignificantMotionJSTest006-----------');
        try {
            sensor.off(string, "");
        } catch (error) {
            console.info("SensorSignificantMotionJSTest006 error:" + error);
            errMessage = error.toString().slice(16, 40);
            expect(errMessage).assertEqual(errMessages[2]);
            done();
        }
    })

     /*
     * @tc.number:SUB_SensorsSystem_Significant_Motion_JSTest_0070
     * @tc.name: SensorSignificantMotionJSTest007
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorSignificantMotionJSTest007", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('----------------------SensorSignificantMotionJSTest007-----------');
        function onSensorCallback(data) {
            console.info('SensorSignificantMotionJSTest007  on error');
            expect(false).assertTrue();
            done();
        }
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION, onSensorCallback);
        sensor.off(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION, onSensorCallback);
        setTimeout(() => {
            expect(true).assertTrue();
            done();
        }, 500);
    })

     /*
     * @tc.number:SUB_SensorsSystem_Significant_Motion_JSTest_0080
     * @tc.name: SensorSignificantMotionJSTest008
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorSignificantMotionJSTest008", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('----------------------SensorSignificantMotionJSTest008-----------');
        function onSensorCallback(data) {
            console.info('SensorSignificantMotionJSTest008  on error');
            expect(false).assertTrue();
            done();
        }
        try {
            sensor.off(1000000, onSensorCallback);
        } catch (error) {
            console.info("SensorSignificantMotionJSTest008 error:" + error);
            errMessage = error.toString().slice(13, 35);
            expect(errMessage).assertEqual(errMessages[1]);
            done();
        }
    })

     /*
     * @tc.number:SUB_SensorsSystem_Significant_Motion_JSTest_0090
     * @tc.name: SensorSignificantMotionJSTest009
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorSignificantMotionJSTest009", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('----------------------SensorSignificantMotionJSTest009-----------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION, callback);
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION, callback2);
        setTimeout(() => {
            console.info('----------------------SensorSignificantMotionJSTest009 off in-----------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION);
            console.info('----------------------SensorSignificantMotionJSTest009 off end-----------');
            done();
        }, 1000);
    })

     /*
     * @tc.number:SUB_SensorsSystem_Significant_Motion_JSTest_0100
     * @tc.name: SensorSignificantMotionJSTest010
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorSignificantMotionJSTest010", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('----------------------SensorSignificantMotionJSTest010-----------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION, callback);
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION, callback2);
        setTimeout(() => {
            console.info('----------------------SensorSignificantMotionJSTest010 off in-----------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION, callback);
            console.info('----------------------SensorSignificantMotionJSTest010 off end-----------');
        }, 500);
        setTimeout(() => {
            console.info('----------------------SensorSignificantMotionJSTest010 off in-----------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION, callback2);
            console.info('----------------------SensorSignificantMotionJSTest010 off end-----------');
            done();
        }, 1000);
    })

    /*
     * @tc.number:SUB_SensorsSystem_Significant_Motion_JSTest_0110
     * @tc.name: SensorSignificantMotionJSTest011
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorSignificantMotionJSTest011", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('----------------------SensorSignificantMotionJSTest011-----------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION, callback, { 'interval': 100000000 });
        sensor.once(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION, callback2);
        setTimeout(() => {
            console.info('----------------------SensorSignificantMotionJSTest011 off in-----------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION);
            console.info('----------------------SensorSignificantMotionJSTest011 off end-----------');
            done();
        }, 1000);
    })

    /*
     * @tc.number:SUB_SensorsSystem_Significant_Motion_JSTest_0120
     * @tc.name: SensorSignificantMotionJSTest012
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorSignificantMotionJSTest012", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('----------------------SensorSignificantMotionJSTest012-----------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION, callback, { 'interval': 100000000 });
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION, callback2, { 'interval': 100000000 });
        setTimeout(() => {
            console.info('----------------------SensorSignificantMotionJSTest012 off in-----------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION, callback);
            console.info('----------------------SensorSignificantMotionJSTest012 off end-----------');
        }, 500);
        setTimeout(() => {
            console.info('----------------------SensorSignificantMotionJSTest012 off in-----------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION, callback2);
            console.info('----------------------SensorSignificantMotionJSTest012 off end-----------');
            done();
        }, 1000);
    })

     /*
     * @tc.number:SUB_SensorsSystem_Significant_Motion_JSTest_0130
     * @tc.name: SensorSignificantMotionJSTest013
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("SensorSignificantMotionJSTest013", FUNCTION|MEDIUMTEST|LEVEL3, async function (done) {
        console.info('----------------------SensorSignificantMotionJSTest013-----------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION, callback, { 'interval': 100000000 });
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION, callback2, { 'interval': 100000000 });
        setTimeout(() => {
            console.info('----------------------SensorSignificantMotionJSTest013 off in-----------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_SIGNIFICANT_MOTION);
            console.info('----------------------SensorSignificantMotionJSTest013 off end-----------');
            done();
        }, 1000);
    })
})