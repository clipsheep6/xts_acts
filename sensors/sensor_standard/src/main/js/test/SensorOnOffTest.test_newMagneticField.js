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

export default function SensorJsTest_sensor_39() {
describe("SensorJsTest_sensor_39", function () {
    function callback(data) {
        console.info("callback" + JSON.stringify(data));
        expect(typeof (data.x)).assertEqual("number");
        expect(typeof (data.y)).assertEqual("number");
        expect(typeof (data.z)).assertEqual("number");
        expect(typeof (data.timestamp)).assertEqual("number");
    }

    function callback2(data) {
        console.info("callback2" + JSON.stringify(data));
        expect(typeof (data.x)).assertEqual("number");
        expect(typeof (data.y)).assertEqual("number");
        expect(typeof (data.z)).assertEqual("number");
        expect(typeof (data.timestamp)).assertEqual("number");
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

    const PARAMETER_ERROR_CODE = 401
    const SERVICE_EXCEPTION_CODE = 14500101
    const PARAMETER_ERROR_MSG = 'The parameter invalid.'
    const SERVICE_EXCEPTION_MSG = 'Service exception.'
	let invalid  = -1;
	
	/*
     * @tc.number:SUB_SensorsSystem_MAGNETIC_FIELD_JSTest_0010
     * @tc.name: newMagneticField_SensorJsTest001
     * @tc.desc: Functional Use Cases
     */
    it("newMagneticField_SensorJsTest001", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL0, async function (done) {
        console.info('---------newMagneticField_SensorJsTest001--------------');
        sensor.on(sensor.SensorId.MAGNETIC_FIELD, callback);
        setTimeout(()=>{
            sensor.off(sensor.SensorId.MAGNETIC_FIELD);
            done();
        }, 500);
    })

	/*
     * @tc.number:SUB_SensorsSystem_MAGNETIC_FIELD_JSTest_0010
     * @tc.name: newMagneticField_SensorJsTest002
     * @tc.desc: Illegal ID passed in
     */
    it("newMagneticField_SensorJsTest002", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('---------newMagneticField_SensorJsTest002--------------');
        function onSensorCallback(data) {
            console.info('newMagneticField_SensorJsTest002 callback in');
            expect(false).assertTrue();
        }
        try {
            sensor.on(invalid, onSensorCallback);
        } catch (error) {
            console.info("newMagneticField_SensorJsTest002 error:" + error);
            expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
            expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
            done();
        }
    })

	/*
     * @tc.number:SUB_SensorsSystem_MAGNETIC_FIELD_JSTest_0010
     * @tc.name: newMagneticField_SensorJsTest003
     * @tc.desc: For normal scenarios
     */
    it("newMagneticField_SensorJsTest003", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('---------SensorJsTest003--------------');
        sensor.on(sensor.SensorId.MAGNETIC_FIELD, callback, {'interval': 100000000});
        setTimeout(()=>{
            console.info('---------newMagneticField_SensorJsTest003 off in--------------');
            sensor.off(sensor.SensorId.MAGNETIC_FIELD);
            console.info('---------newMagneticField_SensorJsTest003 off end--------------');
            done();
        }, 500);
    })

	/*
     * @tc.number:SUB_SensorsSystem_MAGNETIC_FIELD_JSTest_0010
     * @tc.name: newMagneticField_SensorJsTest004
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("newMagneticField_SensorJsTest004", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, function (done) {
        console.info('---------newMagneticField_SensorJsTest004--------------');
        function onSensorCallback(data) {
            console.info('newMagneticField_SensorJsTest004  callback in');
            expect(typeof (data.x)).assertEqual("number");
			expect(typeof (data.y)).assertEqual("number");
			expect(typeof (data.z)).assertEqual("number");
			expect(typeof (data.timestamp)).assertEqual("number");
        }
        try {
            sensor.on(sensor.SensorId.MAGNETIC_FIELD, onSensorCallback, {'interval': 100000000}, 5);
        } catch (error) {
            console.info("newMagneticField_SensorJsTest004 error:" +error);
            expect(false).assertTrue();
            done();
        }
        setTimeout(()=>{
            console.info('---------newMagneticField_SensorJsTest004 off in--------------');
            sensor.off(sensor.SensorId.MAGNETIC_FIELD);
            console.info('---------newMagneticField_SensorJsTest004 off end--------------');
            done();
        }, 500);
    })

	/*
     * @tc.number:SUB_SensorsSystem_MAGNETIC_FIELD_JSTest_0010
     * @tc.name: newMagneticField_SensorJsTest005
     * @tc.desc: Once Normal Subscription Scenario Use Case
     */
    it("newMagneticField_SensorJsTest005", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        sensor.once(sensor.SensorId.MAGNETIC_FIELD, callback);
        setTimeout(()=>{
            expect(true).assertTrue();
            done();
        }, 500);
    })

	/*
     * @tc.number:SUB_SensorsSystem_MAGNETIC_FIELD_JSTest_0010
     * @tc.name: newMagneticField_SensorJsTest006
     * @tc.desc: Use case of illegal parameter passed into once interface
     */
    it("newMagneticField_SensorJsTest006", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        function onceSensorCallback(data) {
            console.info('newMagneticField_SensorJsTest006 callback in');
            expect(false).assertTrue();
            done();
        }
        try {
            sensor.once(invalid, onceSensorCallback);
        } catch (error) {
            console.info("newMagneticField_SensorJsTest006 error:" +error);
            expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
            expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
            done();
        }
    })

	/*
     * @tc.number:SUB_SensorsSystem_MAGNETIC_FIELD_JSTest_0010
     * @tc.name: newMagneticField_SensorJsTest007
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("newMagneticField_SensorJsTest007", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, function (done) {
        function onceSensorCallback(data) {
            console.info('newMagneticField_SensorJsTest007  on error');
            expect(typeof (data.x)).assertEqual("number");
			expect(typeof (data.y)).assertEqual("number");
			expect(typeof (data.z)).assertEqual("number");
			expect(typeof (data.timestamp)).assertEqual("number");
            done();
        }
        try{
            sensor.once(sensor.SensorId.MAGNETIC_FIELD, onceSensorCallback, 5);
        } catch (error) {
            console.info('newMagneticField_SensorJsTest007 error:' +error);
            expect(false).assertTrue();
            done();
        }
    })

	/*
     * @tc.number:SUB_SensorsSystem_MAGNETIC_FIELD_JSTest_0010
     * @tc.name: newMagneticField_SensorJsTest008
     * @tc.desc: Use case of illegal parameter passed into off interface
     */
    it("newMagneticField_SensorJsTest008", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        try {
            sensor.off(invalid, callback);
        } catch (error) {
            console.info('newMagneticField_SensorJsTest008 error:' +error);
            expect(error.code).assertEqual(PARAMETER_ERROR_CODE)
            expect(error.message).assertEqual(PARAMETER_ERROR_MSG)
            done();
        }
    })

	/*
     * @tc.number:SUB_SensorsSystem_MAGNETIC_FIELD_JSTest_0010
     * @tc.name: newMagneticField_SensorJsTest009
     * @tc.desc: Unsubscribe directly without waiting after starting subscription
     */
    it("newMagneticField_SensorJsTest009", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        function onSensorCallback(data) {
            console.info('newMagneticField_SensorJsTest009 callback in');
            expect(false).assertTrue();
            done();
        }
        sensor.on(sensor.SensorId.MAGNETIC_FIELD, onSensorCallback);
        sensor.off(sensor.SensorId.MAGNETIC_FIELD, onSensorCallback);
        setTimeout(()=>{
            expect(true).assertTrue();
            done();
        }, 500);
    })

	/*
     * @tc.number:SUB_SensorsSystem_MAGNETIC_FIELD_JSTest_0010
     * @tc.name: newnewMagneticField_SensorJsTest010
     * @tc.desc:SensorId1000000 of incoming exception
     */
    it("newnewMagneticField_SensorJsTest010", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        function onSensorCallback(data) {
            console.info('newnewMagneticField_SensorJsTest010 on error');
            expect(false).assertTrue();
        }
        try {
            sensor.off(1000000, onSensorCallback);
        } catch (error) {
            console.info("newnewMagneticField_SensorJsTest010 error:" +error);
            expect(error.code).assertEqual(PARAMETER_ERROR_CODE)
            expect(error.message).assertEqual(PARAMETER_ERROR_MSG)
            done();
        }
    })

	/*
     * @tc.number:SUB_SensorsSystem_MAGNETIC_FIELD_JSTest_0010
     * @tc.name: newMagneticField_SensorJsTest011
     * @tc.desc:Call interface multiple times
     */
    it("newMagneticField_SensorJsTest011", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        sensor.on(sensor.SensorId.MAGNETIC_FIELD, (data)=>{
            console.info("newMagneticField_SensorJsTest011 callback: " + JSON.stringify(data));
            expect(typeof (data.x)).assertEqual("number");
			expect(typeof (data.y)).assertEqual("number");
			expect(typeof (data.z)).assertEqual("number");
			expect(typeof (data.timestamp)).assertEqual("number");
        });
        sensor.on(sensor.SensorId.MAGNETIC_FIELD, (data)=>{
            console.info("newMagneticField_SensorJsTest011 callback2: " + JSON.stringify(data));
            expect(typeof (data.x)).assertEqual("number");
			expect(typeof (data.y)).assertEqual("number");
			expect(typeof (data.z)).assertEqual("number");
			expect(typeof (data.timestamp)).assertEqual("number");
        });
        setTimeout(()=>{
            console.info('---------newMagneticField_SensorJsTest011 off in--------------');
            sensor.off(sensor.SensorId.MAGNETIC_FIELD);
            console.info('---------newMagneticField_SensorJsTest011 off end--------------');
            done();
        }, 1000);
    })

	/*
     * @tc.number:SUB_SensorsSystem_MAGNETIC_FIELD_JSTest_0010
     * @tc.name: newMagneticField_SensorJsTest012
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("newMagneticField_SensorJsTest012", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, function (done) {
        try {
            sensor.off(sensor.SensorId.MAGNETIC_FIELD, 5);
        } catch (error) {
            console.info('newMagneticField_SensorJsTest012 error:'+error);
            expect(error.code).assertEqual(PARAMETER_ERROR_CODE)
            expect(error.message).assertEqual(PARAMETER_ERROR_MSG)
            done();
        }
    })

	/*
     * @tc.number:SUB_SensorsSystem_MAGNETIC_FIELD_JSTest_0010
     * @tc.name: newMagneticField_SensorJsTest013
     * @tc.desc:Call on interface and once interface respectively, and use an off interface to close
     */
    it("newMagneticField_SensorJsTest013", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('---------newMagneticField_SensorJsTest013--------------');
        sensor.on(sensor.SensorId.MAGNETIC_FIELD, (data)=>{
            console.info("newMagneticField_SensorJsTest013 callback: " + JSON.stringify(data));
            expect(typeof (data.x)).assertEqual("number");
			expect(typeof (data.y)).assertEqual("number");
			expect(typeof (data.z)).assertEqual("number");
			expect(typeof (data.timestamp)).assertEqual("number");
        }, {'interval': 100000000});
        sensor.once(sensor.SensorId.MAGNETIC_FIELD, (data)=>{
            console.info("newMagneticField_SensorJsTest013 callback2: " + JSON.stringify(data));
            expect(typeof (data.x)).assertEqual("number");
			expect(typeof (data.y)).assertEqual("number");
			expect(typeof (data.z)).assertEqual("number");
			expect(typeof (data.timestamp)).assertEqual("number");
        });
        setTimeout(()=>{
            console.info('---------newMagneticField_SensorJsTest013 off in--------------');
            sensor.off(sensor.SensorId.MAGNETIC_FIELD);
            console.info('---------newMagneticField_SensorJsTest013 off end--------------');
            done();
        }, 1000);
    })

	/*
     * @tc.number:SUB_SensorsSystem_MAGNETIC_FIELD_JSTest_0010
     * @tc.name: newMagneticField_SensorJsTest014
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("newMagneticField_SensorJsTest014", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('---------newMagneticField_SensorJsTest014--------------');
        sensor.on(sensor.SensorId.MAGNETIC_FIELD, (data)=>{
            console.info("newMagneticField_SensorJsTest014 callback: " + JSON.stringify(data));
            expect(typeof (data.x)).assertEqual("number");
			expect(typeof (data.y)).assertEqual("number");
			expect(typeof (data.z)).assertEqual("number");
			expect(typeof (data.timestamp)).assertEqual("number");
        }, {'interval': 100000000});
        sensor.on(sensor.SensorId.MAGNETIC_FIELD, (data)=>{
            console.info("newMagneticField_SensorJsTest014 callback2: " + JSON.stringify(data));
            expect(typeof (data.x)).assertEqual("number");
			expect(typeof (data.y)).assertEqual("number");
			expect(typeof (data.z)).assertEqual("number");
			expect(typeof (data.timestamp)).assertEqual("number");
        }, {'interval': 100000000});
        setTimeout(()=>{
            console.info('---------newMagneticField_SensorJsTest014 off in--------------');
            sensor.off(sensor.SensorId.MAGNETIC_FIELD);
            console.info('---------newMagneticField_SensorJsTest014 off end--------------');
            done();
        }, 1000);
    })

	/*
     * @tc.number:SUB_SensorsSystem_MAGNETIC_FIELD_JSTest_0010
     * @tc.name: newMagneticField_SensorJsTest015
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("newMagneticField_SensorJsTest015", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('---------newMagneticField_SensorJsTest015--------------');
        try {
            sensor.on();
        } catch (error) {
			console.info("newMagneticField_SensorJsTest015 error:" +error);
            expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
            expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
            done();
        }
        try {
            sensor.once();
        } catch (error) {
			console.info("newMagneticField_SensorJsTest015 error:" +error);
            expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
            expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
            done();
        }
        try {
            sensor.off();
        } catch (error) {
			console.info("newMagneticField_SensorJsTest015 error:" +error);
            expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
            expect(error.message).assertEqual(PARAMETER_ERROR_MSG);
            done();
        }
    })
	
	 /*
     * @tc.number: SUB_SensorsSystem_MAGNETIC_FIELD_JSTest_0100
     * @tc.name: newMagneticField_SensorJsTest016
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("newMagneticField_SensorJsTest016", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------newMagneticField_SensorJsTest016--------------');
        sensor.on(sensor.SensorId.MAGNETIC_FIELD, callback);
        sensor.on(sensor.SensorId.MAGNETIC_FIELD, callback2);
        setTimeout(() => {
            console.info('----------------------newMagneticField_SensorJsTest016 off in--------------');
            try {
			sensor.off(sensor.SensorId.MAGNETIC_FIELD, callback);
			} catch (error) {
            console.info("newMagneticField_SensorJsTest016 error:" + error);
			}
            console.info('----------------------newMagneticField_SensorJsTest016 off end--------------');
        }, 500);
        setTimeout(() => {
            console.info('----------------------newMagneticField_SensorJsTest016 off in--------------');
            sensor.off(sensor.SensorId.MAGNETIC_FIELD, callback2);
            console.info('----------------------newMagneticField_SensorJsTest016 off end--------------');
            done();
        }, 1000);
    })
	
	 /*
     * @tc.number: SUB_SensorsSystem_MAGNETIC_FIELD_JSTest_0120
     * @tc.name: newMagneticField_SensorJsTest017
     * @tc.desc:Verification results of the incorrect parameters of the test interface
     */
    it("newMagneticField_SensorJsTest017", TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3, async function (done) {
        console.info('----------------------newMagneticField_SensorJsTest017--------------');
        sensor.on(sensor.SensorId.MAGNETIC_FIELD, callback, { 'interval': 100000000 });
        sensor.on(sensor.SensorId.MAGNETIC_FIELD, callback2, { 'interval': 100000000 });
        setTimeout(() => {
            console.info('----------------------newMagneticField_SensorJsTest017 off in--------------');
            try {
			sensor.off(sensor.SensorId.MAGNETIC_FIELD, callback);
			} catch (error) {
            console.info("newMagneticField_SensorJsTest017 error:" + error);
			}
            console
            console.info('----------------------newMagneticField_SensorJsTest017 off end--------------');
        }, 500);
        setTimeout(() => {
            console.info('----------------------newMagneticField_SensorJsTest017_2 off in--------------');
            sensor.off(sensor.SensorId.MAGNETIC_FIELD, callback2);
            console.info('----------------------newMagneticField_SensorJsTest017_2 off end--------------');
            done();
        }, 1000);
    })
})}
