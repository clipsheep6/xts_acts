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

    console.log("*************Edited 2021/08/26 Battery Unit Test Begin*************");

    /**
     * @tc.number BatteryService_001
     * @tc.name battery_soc_test
     * @tc.desc Battery acquisition kit
     */
    it('battery_soc_test1', 0, function () {
        var batterySoc = batteryInfo.batterySOC;
        console.info('batterySoc = ' + batterySoc);
        expect(batterySoc >= 0 && batterySoc <= 100).assertEqual('1');
    }) //2021-08-26:Pass

    /**
     * @tc.number BatteryManager_002
     * @tc.name battery_soc_test
     * @tc.desc Battery charging kit
     */
    it('battery_soc_test2', 0, function () {
        var chargingStatus = batteryInfo.chargingStatus;
        var batteryPluggedType = batteryInfo.BatteryPluggedType.NONE;
        var batterySoc = batteryInfo.batterySOC;
        console.info('batteryPluggedType = ' + batteryPluggedType);
        expect(batteryPluggedType === 0).assertEqual('1');
        console.info('chargingStatus = ' + chargingStatus);
        expect(chargingStatus >= 0 && chargingStatus <= 4).assertEqual('1');
        console.info('batterySoc = ' + batterySoc);
        expect(batterySoc >= 0 && batterySoc <= 100).assertEqual('1');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryService_003
     * @tc.name enum_plugged_type_test_ac
     * @tc.desc BatteryPluggedType values Interface Test
     */
    it('battery_soc_test', 0, function () {
        var batterySoc = batteryInfo.batterySOC;
        var batteryPluggedType = batteryInfo.BatteryPluggedType.AC;
        console.info('batteryPluggedType = ' + batteryPluggedType);
        expect(batteryPluggedType === 1).assertEqual('1');
        console.info('batterySoc = ' + batterySoc);
        expect(batterySoc >= 0 && batterySoc <= 100).assertEqual('1');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryService_004
     * @tc.name enum_plugged_type_test_usb
     * @tc.desc BatteryPluggedType values Interface Test
     */
    it('battery_soc_test', 0, function () {
        var batterySoc = batteryInfo.batterySOC;
        var batteryPluggedType = batteryInfo.BatteryPluggedType.USB;
        console.info('batteryPluggedType = ' + batteryPluggedType);
        expect(batteryPluggedType === 2).assertEqual('1');
        console.info('batterySoc = ' + batterySoc);
        expect(batterySoc >= 0 && batterySoc <= 100).assertEqual('1');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryService_005
     * @tc.name enum_plugged_type_test_wireless
     * @tc.desc BatteryPluggedType values Interface Test
     */
    it('battery_soc_test', 0, function () {
        var batterySoc = batteryInfo.batterySOC;
        var batteryPluggedType = batteryInfo.BatteryPluggedType.WIRELESS;
        console.info('batteryPluggedType = ' + batteryPluggedType);
        expect(batteryPluggedType === 3).assertEqual('1')
        console.info('batterySoc = ' + batterySoc);
        expect(batterySoc >= 0 && batterySoc <= 100).assertEqual('1')
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_006
     * @tc.name charging_status_test
     * @tc.desc Battery charging kit
     */
    it('charging_status_test', 0, function () {
        var chargingStatus = batteryInfo.chargingStatus;
        console.info('chargingStatus = ' + chargingStatus);
        expect(chargingStatus >= 0 && chargingStatus <= 4).assertEqual('1');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_007
     * @tc.name charging_status_test
     * @tc.desc Battery charging kit
     */
    it('charging_status_test', 0, function () {
        var chargingStatus = batteryInfo.BatteryChargeState.NONE;
        console.info('chargingStatus = ' + chargingStatus);
        expect(chargingStatus === 0).assertEqual('1')
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_008
     * @tc.name charging_status_test
     * @tc.desc Battery charging kit
     */
    it('charging_status_test', 0, function () {
        var chargingStatus = batteryInfo.BatteryChargeState.ENABLE;
        console.info('chargingStatus = ' + chargingStatus);
        expect(chargingStatus === 1).assertEqual('1')
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_009
     * @tc.name charging_status_test
     * @tc.desc Battery charging kit
     */
    it('charging_status_test', 0, function () {
        var chargingStatus = batteryInfo.BatteryChargeState.DISABLE;
        console.info('chargingStatus = ' + chargingStatus);
        expect(chargingStatus === 2).assertEqual('1');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_010
     * @tc.name charging_status_test
     * @tc.desc Battery charging kit
     */
    it('charging_status_test', 0, function () {
        var chargingStatus = batteryInfo.BatteryChargeState.FULL;
        console.info('chargingStatus = ' + chargingStatus);
        expect(chargingStatus === 3).assertEqual('1')
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_011
     * @tc.name plugged_type_test
     * @tc.desc Obtaining the USB Connection Type KIT
     */
    it('plugged_type_test', 0, function () {
        var pluggedType = batteryInfo.pluggedType;
        console.info('pluggedType = ' + pluggedType);
        expect(pluggedType >= 0 && pluggedType <= 4).assertEqual('1');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_012
     * @tc.name plugged_type_test
     * @tc.desc Obtaining the USB Connection Type KIT
     */
    it('plugged_type_test', 0, function () {
        var pluggedType = batteryInfo.pluggedType;
        var batteryPluggedType = batteryInfo.BatteryPluggedType.NONE;
        console.info('batteryPluggedType = ' + batteryPluggedType);
        expect(batteryPluggedType === 0).assertEqual('1');
        console.info('pluggedType = ' + pluggedType);
        expect(pluggedType >= 0 && pluggedType <= 4).assertEqual('1');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_013
     * @tc.name voltage_test
     * @tc.desc Obtaining the Voltage Interface KIT
     */
    it('voltage_test', 0, function () {
        var voltage = batteryInfo.voltage;
        var batteryPluggedType = batteryInfo.BatteryPluggedType.AC;
        console.info('batteryPluggedType = ' + batteryPluggedType);
        expect(batteryPluggedType === 1).assertEqual('1');
        console.info('voltage = ' + voltage);
        expect(voltage >= 0).assertEqual('1');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_014
     * @tc.name voltage_test
     * @tc.desc Obtaining the Voltage Interface KIT
     */
    it('voltage_test', 0, function () {
        var voltage = batteryInfo.voltage;
        var batteryPluggedType = batteryInfo.BatteryPluggedType.USB;
        console.info('batteryPluggedType = ' + batteryPluggedType);
        expect(batteryPluggedType === 2).assertEqual('1');
        console.info('voltage = ' + voltage);
        expect(voltage >= 0).assertEqual('1');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_015
     * @tc.name plugged_type_test
     * @tc.desc Obtaining the USB Connection Type KIT
     */
    it('plugged_type_test', 0, function () {
        var pluggedType = batteryInfo.pluggedType;
        var batteryPluggedType = batteryInfo.BatteryPluggedType.WIRELESS;
        console.info('batteryPluggedType = ' + batteryPluggedType);
        expect(batteryPluggedType === 3).assertEqual('1')
        console.info('pluggedType = ' + pluggedType);
        expect(pluggedType >= 0 && pluggedType <= 4).assertEqual('1');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_016
     * @tc.name voltage_test
     * @tc.desc Obtaining the Voltage Interface KIT
     */
    it('voltage_test', 0, function () {
        var voltage = batteryInfo.voltage;
        console.info('voltage = ' + voltage);
        expect(voltage >= 0).assertEqual('1');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_017
     * @tc.name voltage_test
     * @tc.desc Obtaining the Voltage Interface KIT
     */
    it('voltage_test', 0, function () {
        var voltage = batteryInfo.voltage;
        var batteryPluggedType = batteryInfo.BatteryPluggedType.NONE;
        console.info('batteryPluggedType = ' + batteryPluggedType);
        expect(batteryPluggedType === 0).assertEqual('1');
        console.info('voltage = ' + voltage);
        expect(voltage >= 0).assertEqual('1');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_018
     * @tc.name voltage_test
     * @tc.desc Obtaining the Voltage Interface KIT
     */
    it('voltage_test', 0, function () {
        var voltage = batteryInfo.voltage;
        var batteryPluggedType = batteryInfo.BatteryPluggedType.AC;
        console.info('batteryPluggedType = ' + batteryPluggedType);
        expect(batteryPluggedType === 1).assertEqual('1');
        console.info('voltage = ' + voltage);
        expect(voltage >= 0).assertEqual('1')
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_019
     * @tc.name voltage_test
     * @tc.desc Obtaining the Voltage Interface KIT
     */
    it('voltage_test', 0, function () {
        var voltage = batteryInfo.voltage;
        var batteryPluggedType = batteryInfo.BatteryPluggedType.USB;
        console.info('batteryPluggedType = ' + batteryPluggedType);
        expect(batteryPluggedType === 2).assertEqual('1');
        console.info('voltage = ' + voltage);
        expect(voltage >= 0).assertEqual('1')
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_020
     * @tc.name voltage_test
     * @tc.desc Obtaining the Voltage Interface KIT
     */
    it('voltage_test', 0, function () {
        var voltage = batteryInfo.voltage;
        var batteryPluggedType = batteryInfo.BatteryPluggedType.WIRELESS;
        console.info('batteryPluggedType = ' + batteryPluggedType);
        expect(batteryPluggedType === 3).assertEqual('1');
        console.info('voltage = ' + voltage);
        expect(voltage >= 0).assertEqual('1');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_021
     * @tc.name health_status_test
     * @tc.desc Get Battery Health Get KIT
     */
    it('health_status_test', 0, function () {
        var healthStatus = batteryInfo.healthStatus;
        console.info('healthStatus = ' + healthStatus);
        expect(healthStatus >= 0 && healthStatus <= 6).assertEqual('1');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_022
     * @tc.name health_status_test
     * @tc.desc Get Battery Health Get KIT
     */
    it('health_status_test', 0, function () {
        var healthStatus = batteryInfo.healthStatus;
        var batteryhealthStatus = batteryInfo.BatteryHealthState.UNKNOWN;
        console.info('batteryhealthStatus = ' + batteryhealthStatus);
        expect(batteryhealthStatus === 0).assertEqual('1');
        console.info('healthStatus = ' + healthStatus);
        expect(healthStatus >= 0 && healthStatus <= 6).assertEqual('1');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_023
     * @tc.name health_status_test
     * @tc.desc Get Battery Health Get KIT
     */
    it('health_status_test', 0, function () {
        var healthStatus = batteryInfo.healthStatus;
        var batteryhealthStatus = batteryInfo.BatteryHealthState.GOOD;
        console.info('batteryhealthStatus = ' + batteryhealthStatus);
        expect(batteryhealthStatus === 1).assertEqual('1');
        console.info('healthStatus = ' + healthStatus);
        expect(healthStatus >= 0 && healthStatus <= 6).assertEqual('1');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_024
     * @tc.name health_status_test
     * @tc.desc Get Battery Health Get KIT
     */
    it('health_status_test', 0, function () {
        var healthStatus = batteryInfo.healthStatus;
        var batteryhealthStatus = batteryInfo.BatteryHealthState.OVERHEAT;
        console.info('batteryhealthStatus = ' + batteryhealthStatus);
        expect(batteryhealthStatus === 2).assertEqual('1')
        console.info('healthStatus = ' + healthStatus);
        expect(healthStatus >= 0 && healthStatus <= 6).assertEqual('1');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_025
     * @tc.name health_status_test
     * @tc.desc Get Battery Health Get KIT
     */
    it('health_status_test', 0, function () {
        var healthStatus = batteryInfo.healthStatus;
        var batteryhealthStatus = batteryInfo.BatteryHealthState.OVERVOLTAGE;
        console.info('batteryhealthStatus = ' + batteryhealthStatus);
        expect(batteryhealthStatus === 3).assertEqual('1')
        console.info('healthStatus = ' + healthStatus);
        expect(healthStatus >= 0 && healthStatus <= 6).assertEqual('1');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_026
     * @tc.name health_status_test
     * @tc.desc Get Battery Health Get KIT
     */
    it('health_status_test', 0, function () {
        var healthStatus = batteryInfo.healthStatus;
        var batteryhealthStatus = batteryInfo.BatteryHealthState.COLD;
        console.info('batteryhealthStatus = ' + batteryhealthStatus);
        expect(batteryhealthStatus === 4).assertEqual('1')
        console.info('healthStatus = ' + healthStatus);
        expect(healthStatus >= 0 && healthStatus <= 6).assertEqual('1');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_027
     * @tc.name health_status_test
     * @tc.desc Get Battery Health Get KIT
     */
    it('health_status_test', 0, function () {
        var healthStatus = batteryInfo.healthStatus;
        var batteryhealthStatus = batteryInfo.BatteryHealthState.DEAD;
        console.info('batteryhealthStatus = ' + batteryhealthStatus);
        expect(batteryhealthStatus === 5).assertEqual('1')
        console.info('healthStatus = ' + healthStatus);
        expect(healthStatus >= 0 && healthStatus <= 6).assertEqual('1');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_028
     * @tc.name technology_test
     * @tc.desc Obtaining the Battery Technology Interface KIT
     */
    it('technology_test', 0, function () {
        var technology = batteryInfo.technology;
        console.info('technology = ' + technology);
        expect(technology).assertEqual('Li-ion')
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_029
     * @tc.name technology_test
     * @tc.desc Obtaining the Battery Technology Interface KIT
     */
    it('technology_test', 0, function () {
        var technology = batteryInfo.technology;
        var batteryPluggedType = batteryInfo.BatteryPluggedType.NONE;
        console.info('batteryPluggedType = ' + batteryPluggedType);
        expect(batteryPluggedType === 0).assertEqual('1');
        console.info('technology = ' + technology);
        expect(technology).assertEqual('Li-ion')
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_030
     * @tc.name technology_test
     * @tc.desc Obtaining the Battery Technology Interface KIT
     */
    it('technology_test', 0, function () {
        var technology = batteryInfo.technology;
        var batteryPluggedType = batteryInfo.BatteryPluggedType.AC;
        console.info('batteryPluggedType = ' + batteryPluggedType);
        expect(batteryPluggedType === 1).assertEqual('1')
        console.info('technology = ' + technology);
        expect(technology).assertEqual('Li-ion')
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_031
     * @tc.name technology_test
     * @tc.desc Obtaining the Battery Technology Interface KIT
     */
    it('technology_test', 0, function () {
        var technology = batteryInfo.technology;
        var batteryPluggedType = batteryInfo.BatteryPluggedType.USB;
        console.info('batteryPluggedType = ' + batteryPluggedType);
        expect(batteryPluggedType === 2).assertEqual('1');
        console.info('technology = ' + technology);
        expect(technology).assertEqual('Li-ion');
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_032
     * @tc.name technology_test
     * @tc.desc Obtaining the Battery Technology Interface KIT
     */
    it('technology_test', 0, function () {
        var technology = batteryInfo.technology;
        var batteryPluggedType = batteryInfo.BatteryPluggedType.WIRELESS;
        console.info('batteryPluggedType = ' + batteryPluggedType);
        expect(batteryPluggedType === 3).assertEqual('1')
        console.info('technology = ' + technology);
        expect(technology).assertEqual('Li-ion')
    }) //2021/08/26:Pass

    /**
     * @tc.number BatteryManager_033
     * @tc.name battery_temperature_test
     * @tc.desc BatteryTemperature values Interface Test
     */
    it('battery_temperature_test', 0, function () {
        var batteryTemperature = batteryInfo.batteryTemperature;
        console.info('batteryTemperature = ' + batteryTemperature);
        expect(batteryTemperature <= 600).assertEqual('1');
    }) //2021/08/26:pass

    /**
     * @tc.number BatteryManager_034
     * @tc.name battery_temperature_test
     * @tc.desc BatteryTemperature values Interface Test
     */
    it('battery_temperature_test', 0, function () {
        var batteryTemperature = batteryInfo.batteryTemperature;
        var batteryPluggedType = batteryInfo.BatteryPluggedType.NONE;
        console.info('batteryPluggedType = ' + batteryPluggedType);
        expect(batteryPluggedType === 0).assertEqual('1');
        console.info('batteryTemperature = ' + batteryTemperature);
        expect(batteryTemperature <= 600).assertEqual('1');
    }) //2021/08/26:pass

    /**
     * @tc.number BatteryManager_035
     * @tc.name battery_temperature_test
     * @tc.desc BatteryTemperature values Interface Test
     */
    it('battery_temperature_test', 0, function () {
        var batteryTemperature = batteryInfo.batteryTemperature;
        var batteryPluggedType = batteryInfo.BatteryPluggedType.AC;
        console.info('batteryPluggedType = ' + batteryPluggedType);
        expect(batteryPluggedType === 1).assertEqual('1');
        console.info('batteryTemperature = ' + batteryTemperature);
        expect(batteryTemperature <= 600).assertEqual('1');
    }) //2021/08/26:pass

    /**
     * @tc.number BatteryManager_036
     * @tc.name battery_temperature_test
     * @tc.desc BatteryTemperature values Interface Test
     */
    it('battery_temperature_test', 0, function () {
        var batteryTemperature = batteryInfo.batteryTemperature;
        var batteryPluggedType = batteryInfo.BatteryPluggedType.USB;
        console.info('batteryPluggedType = ' + batteryPluggedType);
        expect(batteryPluggedType === 2).assertEqual('1');
        console.info('batteryTemperature = ' + batteryTemperature);
        expect(batteryTemperature <= 600).assertEqual('1');
    }) //2021/08/26:pass

    /**
     * @tc.number BatteryManager_037
     * @tc.name battery_temperature_test
     * @tc.desc BatteryTemperature values Interface Test
     */
    it('battery_temperature_test', 0, function () {
        var batteryTemperature = batteryInfo.batteryTemperature;
        var batteryPluggedType = batteryInfo.BatteryPluggedType.WIRELESS;
        console.info('batteryPluggedType = ' + batteryPluggedType);
        expect(batteryPluggedType === 3).assertEqual('1');
        console.info('batteryTemperature = ' + batteryTemperature);
        expect(batteryTemperature <= 600).assertEqual('1');
    }) //2021/08/26:pass

})