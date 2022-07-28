/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// @ts-nocheck

import sensor from '@ohos.sensor'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'

function sleep(NumberMillis) {
    let now = new Date()
    let exitTime = now.getTime() + NumberMillis
    while (true) {
        now = new Date()
        if (now.getTime > exitTime) {
            return
        }
    }
}

describe('GetSensorInfoList', function () {
    beforeAll(async function (done) {
        console.info('beforeAll caled')
		sensor.getSensorList((error, data) => {
			if (error) {
				console.info('getSensorInfoTest error');
				expect(false).assertTrue();
			} else {
				for (let i = 0; i < data.length; i++) {
					switch (data[i].sensorTypeId){
						case (errMessages[0]):
							require('./Subscribe_subscribeAccelerometer.js')
							require('./SensorOnOffTest_Accelerometer_test.js')
							break;
						case (errMessages[1]):
							require('./SensorOnOffTest_MagneticField_test.js')
							break;
						case (errMessages[2]):
							require('./SensorOnOffTest_Ambient_light_test.js')
							require('./Subscribe_subscribeLight.js')
							break;
						case (errMessages[3]):
							require('./SensorOnOffTest_GyroScope_test.js')
							require('./Subscribe_subscribeGyroscope.js')
							break;
						case (errMessages[4]):
							require('./SensorOnOffTest_Orientating_test.js')
							break;
						case (errMessages[5]):
							require('./SensorOnOffTest_Gravity_test.js')
							break;
						case (errMessages[6]):
							require('./SensorOnOffTest_Linear_Acceleration_test.js')
							break;
						case (errMessages[7]):
							require('./SensorOnOffTest_RotatingVector_test.js')
							break;
						case (errMessages[8]):
							require('./SensorOnOffTest_Hall_test.js')
							break;
						case (errMessages[9]):
							require('./SensorOnOffTest_Magnetic_Field_Uncalibrated_test.js')
							break;
						case (errMessages[10]):
							require('./SensorOnOffTest_Accelerometer_Uncalibrated_test.js')
							break;
						case (errMessages[11]):
							require('./SensorOnOffTest_Gyroscope_Uncalibrated_test.js')
							break;
						case (errMessages[12]):
							require('./SensorOnOffTest_Significant_Motion_test.js')
							break;
						case (errMessages[13]):
							console.info('data'+ i +'.sensorTypeId'+data[i].sensorTypeId);
							console.info('errMessages[13]'+ errMessages[13]);
							break;
				}
				console.info("getSensorInfoTest " + i);
				}
			}
			done();
		})
	})

    afterAll(function () {
        console.info('afterAll caled')
    })

    beforeEach(function () {
        console.info('beforeEach caled')
    })

    afterEach(function () {
        console.info('afterEach caled')
    })
	
	let errMessages = [1,6,5,2,256,257,258,259,10,261,281,263,264,0]

 })