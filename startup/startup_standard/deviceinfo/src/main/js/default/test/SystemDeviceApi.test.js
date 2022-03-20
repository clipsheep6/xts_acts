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

// @ts-nocheck
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import device from '@ohos.device'

describe('SystemDeviceTest', function () {

    beforeAll(function () {
        console.info('beforeAll: Prerequisites at the test suite level, which are executed before the test suite is executed.');

    })

    beforeEach(function () {
        console.info('beforeEach: Prerequisites at the test case level, which are executed before each test case is executed.');

    })
    afterEach(function () {
        console.info('afterEach: Test case-level clearance conditions, which are executed after each test case is executed.');

    })
    afterAll(function () {
        console.info('afterAll: Test suite-level cleanup condition, which is executed after the test suite is executed');

    })

    console.info('start################################start');

    /**
     * @tc.number    SUB_STARTUP_SYSTEM_DEVICE_0100
     * @tc.name     testGetBrand01
     * @tc.desc      Get the device brand represented by a string and the return value is not null.
     */
     it('testGetBrand01', 0, function () {
      console.info('testGetDeviceBrand01 start');
      let ret = false;
      let brandInfo = device.brand;
      console.info('the value of the device brand is :' + brandInfo);

      expect(brandInfo).assertInstanceOf('String');
      if (brandInfo != "" && brandInfo != null && brandInfo != undefined) {
          ret = true;
      }
      expect(ret).assertTrue();

      console.info('testGetDeviceBrand01 ：end');
  })

    /**
     * @tc.number    SUB_STARTUP_SYSTEM_DEVICE_0200
     * @tc.name     testGetManufacture01
     * @tc.desc      Get the manufacture name represented by a string.
     */
      it('testGetManufacture01', 0, function () {
        console.info('device_info_test_002 start');
        let ret = false;
        let manufactureInfo = device.manufacture;
        console.info('the value of the manufactureInfo is :' + manufactureInfo);
        expect(manufactureInfo).assertInstanceOf('String');
        if (manufactureInfo != "" && manufactureInfo != null && manufactureInfo != undefined) {
            ret = true;
        }
        expect(ret).assertTrue();
        console.info('device_info_test_002 ：end');
    })

    /**
     * @tc.number    SUB_STARTUP_SYSTEM_DEVICE_0300
     * @tc.name     testDeviceModel01
     * @tc.desc      Get the internal software sub-model represented by a string and the return value is not null.
     */
     it('testDeviceModel01', 0, function () {
      console.info('testDeviceModel01 start');
      let ret = false;
      let deviceModel = device.model;
      console.info('the value of the deviceinfo deviceModel is :' + deviceModel);

      expect(deviceModel).assertInstanceOf('String');
      if (deviceModel != "" && deviceModel != null && deviceModel != undefined) {
          ret = true;
      }
      expect(ret).assertTrue();
      console.info('testDeviceModel01 : end');
  })

    /**
     * @tc.number    SUB_STARTUP_SYSTEM_DEVICE_0400
     * @tc.name     testDeviceProduct01
     * @tc.desc      Get the product series represented by a string and the return value is not null.
     */
     it('testDeviceProduct01', 0, function () {
      console.info('testDeviceProduct01 start');
      let ret = false;
      let deviceProductInfot = device.product;
      console.info('the value of the deviceinfo productSeries is :' + deviceProductInfot);

      expect(deviceProductInfot).assertInstanceOf('String');
      if (deviceProductInfot != "" && deviceProductInfot != null && deviceProductInfot != undefined) {
          ret = true;
      }
      expect(ret).assertTrue();
      console.info('testDeviceProduct01 ：end');
  })
  
    /**
     * @tc.number    SUB_STARTUP_SYSTEM_DEVICE_0500
     * @tc.name     testDeviceApiVersion01
     * @tc.desc    Get the API version number, which return value type is number and return value is greater than 0.
     */
     it('testDeviceApiVersion01', 0, function () {
      console.info('testDeviceApiVersion01 start');
      let ret = false;
      let apiVersionInfo = device.apiVersion;
      console.info('the value of the deviceinfo sdkApiVersion is :' + apiVersionInfo);

      expect(apiVersionInfo).assertInstanceOf('Number');
      if (apiVersionInfo >= 0) {
          ret = true;
      }
      expect(ret).assertTrue();

      let str = /[\w-\.\(\)]/g;
      let arr = apiVersionInfo.toString().match(str);
      let substr = arr.join('');
      let numstr = parseInt(substr);
      console.info('the value of the bufferstr is :' + numstr);
      expect(apiVersionInfo).assertEqual(numstr);

      console.info('testDeviceApiVersion01 ：end');
  })  

    /**
     * @tc.number    SUB_STARTUP_SYSTEM_DEVICE_0600
     * @tc.name      testGetDeviceType01
     * @tc.desc      Get a string representing the device type.
     */
     it('device_info_test_001', 0, function () {
      console.info('device_info_test_001 start');
      let ret = false;
      let deviceTypeInfo = device.deviceType;
      console.info('the value of the deviceType is :' + deviceTypeInfo);

      expect(deviceTypeInfo).assertInstanceOf('String');
      if (deviceTypeInfo != "" && deviceTypeInfo != null && deviceTypeInfo != undefined) {
          ret = true;
      }
      expect(ret).assertTrue()
      console.info('device_info_test_001 : end');
  })

    /**
     * @tc.number    SUB_STARTUP_SYSTEM_DEVICE_0700
     * @tc.name      testGetDeviceType01
     * @tc.desc      Get a string representing the device type.
     */
     it('device_info_test_001', 0, function () {
      console.info('device_info_test_001 start');
      let ret = false;
      let deviceTypeInfo = device.deviceType;
      console.info('the value of the deviceType is :' + deviceTypeInfo);

      expect(deviceTypeInfo).assertInstanceOf('String');
      if (deviceTypeInfo != "" && deviceTypeInfo != null && deviceTypeInfo != undefined) {
          ret = true;
      }
      expect(ret).assertTrue()
      console.info('device_info_test_001 : end');
  })
  
    /**
     * @tc.number    SUB_STARTUP_SYSTEM_DEVICE_0800
     * @tc.name      testDeviceLanguage01
     * @tc.desc      Get a string representing the device language.
     */
     it('testDeviceLanguage01', 0, function () {
      console.info('testDeviceLanguage01 start');
      let ret = false;
      let languageInfo = device.language;
      console.info('the value of the deviceType is :' + languageInfo);

      expect(languageInfo).assertInstanceOf('String');
      if (languageInfo != "" && languageInfo != null && languageInfo != undefined) {
          ret = true;
      }
      expect(ret).assertTrue()
      console.info('testDeviceLanguage01 : end');
  })
  
    /**
     * @tc.number    SUB_STARTUP_SYSTEM_DEVICE_0900
     * @tc.name      testDeviceRegion01
     * @tc.desc      Get a string representing the device region.
     */
     it('testDeviceRegion01', 0, function () {
      console.info('testDeviceRegion01 start');
      let ret = false;
      let regionInfo = device.region;
      console.info('the value of the deviceType is :' + regionInfo);

      expect(regionInfo).assertInstanceOf('String');
      if (regionInfo != "" && regionInfo != null && regionInfo != undefined) {
          ret = true;
      }
      expect(ret).assertTrue()
      console.info('testDeviceRegion01 : end');
  })
  
    /**
     * @tc.number    SUB_STARTUP_SYSTEM_DEVICE_0110
     * @tc.name      testDeviceWindowWidth01
     * @tc.desc      Get a number representing the device window width.
     */
     it('testDeviceWindowWidth01', 0, function () {
      console.info('testDeviceWindowWidth01 start');
      let ret = false;
      let windowWidthInfo = device.windowWidth;
      console.info('the value of the window width is :' + windowWidthInfo);

      expect(windowWidthInfo).assertInstanceOf('Number');
      if (windowWidthInfo >= 0) {
          ret = true;
      }
      expect(ret).assertTrue();
      console.info('testDeviceWindowWidth01 : end');
  })
  
    /**
     * @tc.number    SUB_STARTUP_SYSTEM_DEVICE_0120
     * @tc.name      testDeviceWindowHeight01
     * @tc.desc      Get a number representing the device window height.
     */
     it('testDeviceWindowHeight01', 0, function () {
      console.info('testDeviceWindowHeight01 start');
      let ret = false;
      let windowHeigthInfo = device.windowWidth;
      console.info('the value of the window width is :' + windowHeigthInfo);

      expect(windowHeigthInfo).assertInstanceOf('Number');
      if (windowHeigthInfo >= 0) {
          ret = true;
      }
      expect(ret).assertTrue();
      console.info('testDeviceWindowHeight01 : end');
  })
  
    /**
     * @tc.number    SUB_STARTUP_SYSTEM_DEVICE_0120
     * @tc.name      testDeviceScreenDensity01
     * @tc.desc      Get a number representing the creen density.
     */
     it('testDeviceScreenDensity01', 0, function () {
      console.info('testDeviceScreenDensity01 start');
      let ret = false;
      let screenDensityInfo = device.screenDensity;
      console.info('the value of the screen density is :' + screenDensityInfo);

      expect(screenDensityInfo).assertInstanceOf('Number');
      if (screenDensityInfo >= 0) {
          ret = true;
      }
      expect(ret).assertTrue();
      console.info('testDeviceScreenDensity01 : end');
  })
  
    /**
     * @tc.number    SUB_STARTUP_SYSTEM_DEVICE_0130
     * @tc.name      testDeviceScreenShape01
     * @tc.desc      Get a string representing the device screen shape.
     */
     it('testDeviceScreenShape01', 0, function () {
      console.info('testDeviceScreenShape01 start');
      let ret = false;
      let screenShapeInfo = device.screenShape;
      console.info('the value of the deviceType is :' + screenShapeInfo);

      expect(screenShapeInfo).assertInstanceOf('String');
      if (screenShapeInfo != "" && screenShapeInfo != null && screenShapeInfo != undefined) {
          ret = true;
      }
      expect(ret).assertTrue()
      console.info('testDeviceScreenShape01 : end');
  }) 
})


