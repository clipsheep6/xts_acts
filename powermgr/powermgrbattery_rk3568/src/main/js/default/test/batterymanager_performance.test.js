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

import batteryInfo from '@ohos.batteryInfo';
import {describe, it, expect} from 'deccjsunit/index';

describe('appInfoTest', function () {

    console.log("*************Edited 2022/02/01 Battery Performance Test Begin*************");
	var MAXNUM = 1000;
	
	/**
     * @tc.number BatteryPerformance_001
     * @tc.name battery_temperature_test
     * @tc.desc Battery acquisition kit
     */
    it('BatteryPerformance_001', 0, function () {
		let startTime = new Date().getTime();
		for (let i = 0; i < MAXNUM; i++) {
			batteryInfo.batteryTemperature;
		}

        let waitTime = new Date().getTime()-startTime;
        let avgTime = waitTime; //us
        console.info(`BATTERY_Performance_001: Promise: getTemperature Wait Time :  ${waitTime}`);
        if (avgTime<300)
        {
            console.info(`BATTERY_Performance_001: Promise: getTemperature Average Time: PASS : ${avgTime}`);
            expect(true).assertTrue();
        }
        else{
            console.info(`BATTERY_Performance_001: Promise: getTemperature Average Time: FAIL : ${avgTime}`);
            expect(false).assertTrue();
        }
    })
	
	/**
     * @tc.number BatteryPerformance_002
     * @tc.name battery_chargingstatus_test
     * @tc.desc Battery acquisition kit
     */
    it('BatteryPerformance_002', 0, function () {
		let startTime = new Date().getTime();
		for (let i = 0; i < MAXNUM; i++) {
			batteryInfo.chargingStatus;
		}

        let waitTime = new Date().getTime()-startTime;
        let avgTime = waitTime; //us
        console.info(`BATTERY_Performance_002: Promise: getChargingStatus Wait Time :  ${waitTime}`);
        if (avgTime<300)
        {
            console.info(`BATTERY_Performance_002: Promise: getChargingStatus Average Time: PASS : ${avgTime}`);
            expect(true).assertTrue();
        }
        else{
            console.info(`BATTERY_Performance_002: Promise: getChargingStatus Average Time: FAIL : ${avgTime}`);
            expect(false).assertTrue();
        }
    })

	/**
     * @tc.number BatteryPerformance_003
     * @tc.name battery_healthstatus_test
     * @tc.desc Battery acquisition kit
     */
    it('BatteryPerformance_003', 0, function () {
		let startTime = new Date().getTime();
		for (let i = 0; i < MAXNUM; i++) {
			batteryInfo.healthStatus;
		}

        let waitTime = new Date().getTime()-startTime;
        let avgTime = waitTime; //us
        console.info(`BatteryPerformance_003: Promise: getHealthStatus Wait Time :  ${waitTime}`);
        if (avgTime<350)
        {
            console.info(`BatteryPerformance_003: Promise: getHealthStatus Average Time: PASS : ${avgTime}`);
            expect(true).assertTrue();
        }
        else{
            console.info(`BatteryPerformance_003: Promise: getHealthStatus Average Time: FAIL : ${avgTime}`);
            expect(false).assertTrue();
        }
    })

	/**
     * @tc.number BatteryPerformance_004
     * @tc.name battery_pluggedtype_test
     * @tc.desc Battery acquisition kit
     */
    it('BatteryPerformance_004', 0, function () {
		let startTime = new Date().getTime();
		for (let i = 0; i < MAXNUM; i++) {
			batteryInfo.pluggedType;
		}

        let waitTime = new Date().getTime()-startTime;
        let avgTime = waitTime; //us
        console.info(`BatteryPerformance_004: Promise: getPluggedType Wait Time :  ${waitTime}`);
        if (avgTime<300)
        {
            console.info(`BatteryPerformance_004: Promise: getPluggedType Average Time: PASS : ${avgTime}`);
            expect(true).assertTrue();
        }
        else{
            console.info(`BatteryPerformance_004: Promise: getPluggedType Average Time: FAIL : ${avgTime}`);
            expect(false).assertTrue();
        }
    })
	
	/**
     * @tc.number BatteryPerformance_005
     * @tc.name battery_technology_test
     * @tc.desc Battery acquisition kit
     */
    it('BatteryPerformance_005', 0, function () {
		let startTime = new Date().getTime();
		for (let i = 0; i < MAXNUM; i++) {
			batteryInfo.technology;
		}

        let waitTime = new Date().getTime()-startTime;
        let avgTime = waitTime; //us
        console.info(`BatteryPerformance_005: Promise: getTechnology Wait Time :  ${waitTime}`);
        if (avgTime<300)
        {
            console.info(`BatteryPerformance_005: Promise: getTechnology Average Time: PASS : ${avgTime}`);
            expect(true).assertTrue();
        }
        else{
            console.info(`BatteryPerformance_005: Promise: getTechnology Average Time: FAIL : ${avgTime}`);
            expect(false).assertTrue();
        }
    })

    /**
     * @tc.number BatteryPerformance_006
     * @tc.name battery_capacity_test
     * @tc.desc Battery acquisition kit
     */
    it('BatteryPerformance_006', 0, function () {
		let startTime = new Date().getTime();
		for (let i = 0; i < MAXNUM; i++) {
			batteryInfo.batterySOC;
		}

        let waitTime = new Date().getTime()-startTime;
        let avgTime = waitTime; //us
        console.info(`BatteryPerformance_006: Promise: getCapacity Wait Time :  ${waitTime}`);
        if (avgTime<300)
        {
            console.info(`BatteryPerformance_006: Promise: getCapacity Average Time: PASS : ${avgTime}`);
            expect(true).assertTrue();
        }
        else{
            console.info(`BatteryPerformance_006: Promise: getCapacity Average Time: FAIL : ${avgTime}`);
            expect(false).assertTrue();
        }
    })
	
	/**
     * @tc.number BatteryPerformance_007
     * @tc.name battery_voltage_test
     * @tc.desc Battery acquisition kit
     */
    it('BatteryPerformance_007', 0, function () {
		let startTime = new Date().getTime();
		for (let i = 0; i < MAXNUM; i++) {
			batteryInfo.voltage;
		}

        let waitTime = new Date().getTime()-startTime;
        let avgTime = waitTime; //us
        console.info(`BatteryPerformance_007: Promise: getVoltage Wait Time :  ${waitTime}`);
        if (avgTime<300)
        {
            console.info(`BatteryPerformance_007: Promise: getVoltage Average Time: PASS : ${avgTime}`);
            expect(true).assertTrue();
        }
        else{
            console.info(`BatteryPerformance_007: Promise: getVoltage Average Time: FAIL : ${avgTime}`);
            expect(false).assertTrue();
        }
    })

})