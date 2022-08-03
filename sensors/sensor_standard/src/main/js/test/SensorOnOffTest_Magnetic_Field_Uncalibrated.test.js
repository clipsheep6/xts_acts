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

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium'

export default function SensorJsTest_Sensor_14() {
describe("SensorJsTest_Sensor_14", function () {
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
    
    beforeAll(function() {
		
        /*
         * @tc.setup: setup invoked before all testcases
         */
         console.info('beforeAll caled')
    })
    
    afterAll(function() {
		
        /*
         * @tc.teardown: teardown invoked after all testcases
         */
         console.info('afterAll caled')
    })
    
    beforeEach(function() {
		
        /*
         * @tc.setup: setup invoked before each testcases
         */
         console.info('beforeEach caled')
    })
    
    afterEach(function() {
		
        /*
         * @tc.teardown: teardown invoked after each testcases
         */
         console.info('afterEach caled')
    })
	
	let errMessages = ['The number of parameters is not valid', 'Should subscribe first',
    'string is not defined'];
	
    let errMessage;

    /*
     * @tc.name:MagneticFieldUncalibratedJSTest001
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0010
     */
    it("MagneticFieldUncalibratedJSTest001", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL0, async function (done) {
        console.info('----------------------MagneticFieldUncalibratedJSTest001--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback);
        setTimeout(()=>{
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED);
            done();
        }, 500);
    })

    /*
     * @tc.name:MagneticFieldUncalibratedJSTest002
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0020
     */
    it("MagneticFieldUncalibratedJSTest002", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------MagneticFieldUncalibratedJSTest002--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback, {'interval': 100000000});
        setTimeout(()=>{
            console.info('----------------------MagneticFieldUncalibratedJSTest002 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED);
            console.info('----------------------MagneticFieldUncalibratedJSTest002 off end--------------');
            done();
        }, 500);
    })

    /*
     * @tc.name:MagneticFieldUncalibratedJSTest003
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0030
     */
    it("MagneticFieldUncalibratedJSTest003", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, function (done) {
        console.info('----------------------MagneticFieldUncalibratedJSTest003--------------');
        function onSensorCallback(data) {
            console.info('MagneticFieldUncalibratedJSTest003  on error');
            expect(false).assertTrue();
            done();
        }
        try {
            sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED,
			onSensorCallback, {'interval': 100000000}, 5);
        } catch (error) {
			console.info('MagneticFieldUncalibratedJSTest003 error' +error);
            errMessage = error.toString().slice(12, 49);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

    /*
     * @tc.name:MagneticFieldUncalibratedJSTest004
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0040
     */
    it("MagneticFieldUncalibratedJSTest004", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        sensor.once(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback);
        setTimeout(()=>{
            expect(true).assertTrue();
            done();
        }, 500);
    })

    /*
     * @tc.name:MagneticFieldUncalibratedJSTest005
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0050
     */
    it("MagneticFieldUncalibratedJSTest005", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, function (done) {
        function onceSensorCallback(data) {
            console.info('MagneticFieldUncalibratedJSTest005  on error');
            expect(false).assertTrue();
            done();
        }
        try{
            sensor.once(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, onceSensorCallback, 5);
        } catch (error) {
            console.info('MagneticFieldUncalibratedJSTest005 error' +error);
            errMessage = error.toString().slice(14, 51);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

    /*
     * @tc.name:MagneticFieldUncalibratedJSTest006
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0060
     */
    it("MagneticFieldUncalibratedJSTest006", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        try {
            sensor.off(string, "");
        } catch (error) {
			console.info('MagneticFieldUncalibratedJSTest006 error' + error);
            errMessage = error.toString().slice(16, 40);
            expect(errMessage).assertEqual(errMessages[2]);
            done();
        }
    })

    /*
     * @tc.name:MagneticFieldUncalibratedJSTest007
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0070
     */
    it("MagneticFieldUncalibratedJSTest007", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        function onSensorCallback(data) {
            console.info('MagneticFieldUncalibratedJSTest007  on error');
            expect(false).assertTrue();
            done();
        }
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, onSensorCallback);
        sensor.off(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, onSensorCallback);
        setTimeout(()=>{
            expect(true).assertTrue();
            done();
        }, 500);
    })

    /*
     * @tc.name:MagneticFieldUncalibratedJSTest008
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0080
     */
    it("MagneticFieldUncalibratedJSTest008", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        function onSensorCallback(data) {
            console.info('MagneticFieldUncalibratedJSTest008  on error');
            expect(false).assertTrue();
            done();
        }
        try {
            sensor.off(1000000, onSensorCallback);
        } catch (error) {
            console.info('MagneticFieldUncalibratedJSTest008 error' + error);
            errMessage = error.toString().slice(13, 35);
            expect(errMessage).assertEqual(errMessages[1]);
            done();
        }
    })

    /*
     * @tc.name:MagneticFieldUncalibratedJSTest009
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0090
     */
    it("MagneticFieldUncalibratedJSTest009", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback);
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback2);
        setTimeout(()=>{
            console.info('----------------------MagneticFieldUncalibratedJSTest009 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED);
            console.info('----------------------MagneticFieldUncalibratedJSTest009 off end--------------');
            done();
        }, 1000);
    })

    /*
     * @tc.name:MagneticFieldUncalibratedJSTest010
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0100
     */
    it("MagneticFieldUncalibratedJSTest010", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback);
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback2);
        setTimeout(()=>{
            console.info('----------------------MagneticFieldUncalibratedJSTest010 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback);
            console.info('----------------------MagneticFieldUncalibratedJSTest010 off end--------------');
        }, 500);
        setTimeout(()=>{
            console.info('----------------------MagneticFieldUncalibratedJSTest010 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback2);
            console.info('----------------------MagneticFieldUncalibratedJSTest010 off end--------------');
            done();
        }, 1000);
    })

    /*
     * @tc.name:MagneticFieldUncalibratedJSTest011
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0110
     */
    it("MagneticFieldUncalibratedJSTest011", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------MagneticFieldUncalibratedJSTest011--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback, {'interval': 100000000});
        sensor.once(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback2);
        setTimeout(()=>{
            console.info('----------------------MagneticFieldUncalibratedJSTest011 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED);
            console.info('----------------------MagneticFieldUncalibratedJSTest011 off end--------------');
            done();
        }, 1000);
    })

    /*
     * @tc.name:MagneticFieldUncalibratedJSTest012
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0120
     */
    it("MagneticFieldUncalibratedJSTest012", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------MagneticFieldUncalibratedJSTest012--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback, {'interval': 100000000});
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback2, {'interval': 100000000});
        setTimeout(()=>{
            console.info('----------------------MagneticFieldUncalibratedJSTest012 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback);
            console.info('----------------------MagneticFieldUncalibratedJSTest012 off end--------------');
        }, 500);
        setTimeout(()=>{
            console.info('----------------------MagneticFieldUncalibratedJSTest012 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback2);
            console.info('----------------------MagneticFieldUncalibratedJSTest012 off end--------------');
            done();
        }, 1000);
    })

    /*
     * @tc.name:MagneticFieldUncalibratedJSTest013
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0130
     */
    it("MagneticFieldUncalibratedJSTest013", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------MagneticFieldUncalibratedJSTest013--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback, {'interval': 100000000});
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback2, {'interval': 100000000});
        setTimeout(()=>{
            console.info('----------------------MagneticFieldUncalibratedJSTest013 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED);
            console.info('----------------------MagneticFieldUncalibratedJSTest013 off end--------------');
            done();
        }, 1000);
    })
})}
