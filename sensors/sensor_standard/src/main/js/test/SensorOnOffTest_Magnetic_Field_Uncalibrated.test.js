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

export default function SensorJsTest_sensor_14() {
describe("SensorJsTest_sensor_14", function () {
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
     * @tc.name:SensorMagneticFieldUncalibratedJSTest001
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0010
     */
    it("SensorMagneticFieldUncalibratedJSTest001", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL0, async function (done) {
        console.info('----------------------SensorMagneticFieldUncalibratedJSTest001--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback);
        setTimeout(()=>{
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED);
            done();
        }, 500);
    })

    /*
     * @tc.name:SensorMagneticFieldUncalibratedJSTest002
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0020
     */
    it("SensorMagneticFieldUncalibratedJSTest002", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------SensorMagneticFieldUncalibratedJSTest002--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback, {'interval': 100000000});
        setTimeout(()=>{
            console.info('----------------------SensorMagneticFieldUncalibratedJSTest002 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED);
            console.info('----------------------SensorMagneticFieldUncalibratedJSTest002 off end--------------');
            done();
        }, 500);
    })

    /*
     * @tc.name:SensorMagneticFieldUncalibratedJSTest003
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0030
     */
    it("SensorMagneticFieldUncalibratedJSTest003", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, function (done) {
        console.info('----------------------SensorMagneticFieldUncalibratedJSTest003--------------');
        function onSensorCallback(data) {
            console.info('SensorMagneticFieldUncalibratedJSTest003  on error');
            expect(false).assertTrue();
            done();
        }
        try {
            sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED,
			onSensorCallback, {'interval': 100000000}, 5);
        } catch (error) {
			console.info('SensorMagneticFieldUncalibratedJSTest003 error' +error);
            errMessage = error.toString().slice(12, 49);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

    /*
     * @tc.name:SensorMagneticFieldUncalibratedJSTest004
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0040
     */
    it("SensorMagneticFieldUncalibratedJSTest004", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        sensor.once(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback);
        setTimeout(()=>{
            expect(true).assertTrue();
            done();
        }, 500);
    })

    /*
     * @tc.name:SensorMagneticFieldUncalibratedJSTest005
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0050
     */
    it("SensorMagneticFieldUncalibratedJSTest005", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, function (done) {
        function onceSensorCallback(data) {
            console.info('SensorMagneticFieldUncalibratedJSTest005  on error');
            expect(false).assertTrue();
            done();
        }
        try{
            sensor.once(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, onceSensorCallback, 5);
        } catch (error) {
            console.info('SensorMagneticFieldUncalibratedJSTest005 error' +error);
            errMessage = error.toString().slice(14, 51);
            expect(errMessage).assertEqual(errMessages[0]);
            done();
        }
    })

    /*
     * @tc.name:SensorMagneticFieldUncalibratedJSTest006
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0060
     */
    it("SensorMagneticFieldUncalibratedJSTest006", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        try {
            sensor.off(string, "");
        } catch (error) {
			console.info('SensorMagneticFieldUncalibratedJSTest006 error' + error);
            errMessage = error.toString().slice(16, 40);
            expect(errMessage).assertEqual(errMessages[2]);
            done();
        }
    })

    /*
     * @tc.name:SensorMagneticFieldUncalibratedJSTest007
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0070
     */
    it("SensorMagneticFieldUncalibratedJSTest007", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        function onSensorCallback(data) {
            console.info('SensorMagneticFieldUncalibratedJSTest007  on error');
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
     * @tc.name:SensorMagneticFieldUncalibratedJSTest008
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0080
     */
    it("SensorMagneticFieldUncalibratedJSTest008", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        function onSensorCallback(data) {
            console.info('SensorMagneticFieldUncalibratedJSTest008  on error');
            expect(false).assertTrue();
            done();
        }
        try {
            sensor.off(1000000, onSensorCallback);
        } catch (error) {
            console.info('SensorMagneticFieldUncalibratedJSTest008 error' + error);
            errMessage = error.toString().slice(13, 35);
            expect(errMessage).assertEqual(errMessages[1]);
            done();
        }
    })

    /*
     * @tc.name:SensorMagneticFieldUncalibratedJSTest009
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0090
     */
    it("SensorMagneticFieldUncalibratedJSTest009", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback);
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback2);
        setTimeout(()=>{
            console.info('----------------------SensorMagneticFieldUncalibratedJSTest009 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED);
            console.info('----------------------SensorMagneticFieldUncalibratedJSTest009 off end--------------');
            done();
        }, 1000);
    })

    /*
     * @tc.name:SensorMagneticFieldUncalibratedJSTest010
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0100
     */
    it("SensorMagneticFieldUncalibratedJSTest010", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback);
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback2);
        setTimeout(()=>{
            console.info('----------------------SensorMagneticFieldUncalibratedJSTest010 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback);
            console.info('----------------------SensorMagneticFieldUncalibratedJSTest010 off end--------------');
        }, 500);
        setTimeout(()=>{
            console.info('----------------------SensorMagneticFieldUncalibratedJSTest010 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback2);
            console.info('----------------------SensorMagneticFieldUncalibratedJSTest010 off end--------------');
            done();
        }, 1000);
    })

    /*
     * @tc.name:SensorMagneticFieldUncalibratedJSTest011
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0110
     */
    it("SensorMagneticFieldUncalibratedJSTest011", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------SensorMagneticFieldUncalibratedJSTest011--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback, {'interval': 100000000});
        sensor.once(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback2);
        setTimeout(()=>{
            console.info('----------------------SensorMagneticFieldUncalibratedJSTest011 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED);
            console.info('----------------------SensorMagneticFieldUncalibratedJSTest011 off end--------------');
            done();
        }, 1000);
    })

    /*
     * @tc.name:SensorMagneticFieldUncalibratedJSTest012
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0120
     */
    it("SensorMagneticFieldUncalibratedJSTest012", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------SensorMagneticFieldUncalibratedJSTest012--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback, {'interval': 100000000});
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback2, {'interval': 100000000});
        setTimeout(()=>{
            console.info('----------------------SensorMagneticFieldUncalibratedJSTest012 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback);
            console.info('----------------------SensorMagneticFieldUncalibratedJSTest012 off end--------------');
        }, 500);
        setTimeout(()=>{
            console.info('----------------------SensorMagneticFieldUncalibratedJSTest012 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback2);
            console.info('----------------------SensorMagneticFieldUncalibratedJSTest012 off end--------------');
            done();
        }, 1000);
    })

    /*
     * @tc.name:SensorMagneticFieldUncalibratedJSTest013
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     * @tc.number:SUB_SensorsSystem_Magnetic_Field_Uncalibrated_JSTest_0130
     */
    it("SensorMagneticFieldUncalibratedJSTest013", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------SensorMagneticFieldUncalibratedJSTest013--------------');
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback, {'interval': 100000000});
        sensor.on(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED, callback2, {'interval': 100000000});
        setTimeout(()=>{
            console.info('----------------------SensorMagneticFieldUncalibratedJSTest013 off in--------------');
            sensor.off(sensor.SensorType.SENSOR_TYPE_ID_MAGNETIC_FIELD_UNCALIBRATED);
            console.info('----------------------SensorMagneticFieldUncalibratedJSTest013 off end--------------');
            done();
        }, 1000);
    })
})}
