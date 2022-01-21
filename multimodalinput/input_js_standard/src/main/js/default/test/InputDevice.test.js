/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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

import inputDevice from '@ohos.multimodalInput.inputDevice';
import {
  describe,
  beforeAll,
  beforeEach,
  afterEach,
  afterAll,
  it,
  expect
} from 'deccjsunit/index'

describe('MultimodalInput_test', function () {
  it('inputDevice::getDeviceIds_test-01', 0, function () {
    console.log(`inputDevice::getDeviceIds_test-01 enter`);
    inputDevice.getDeviceIds((data, error) => {
      if (error) {
        console.log(`inputDevice::getDeviceIds_test-01 error:${JSON.stringify(error)}`)
        expect(false).assertTrue();
      } else {
        console.log(`inputDevice::getDeviceIds_test-01 success:${JSON.stringify(data)}`);
        expect(data).assertInstanceOf('Array');
      }
      console.log(`inputDevice::getDeviceIds_test-01 exit`);
    })
  })

  it("inputDevice::getDeviceIds_test-02", 0, function () {
    console.log(`inputDevice::getDeviceIds_test-02 enter`);
    inputDevice.getDeviceIds((data, error) => {
      if (error) {
        console.log("getDeviceIds-Error-02");
        expect(false).assertTrue();
      }
      expect(data.length == 0 || data == undefined).assertTure()
    })
    console.log(`inputDevice::getDeviceIds_test-02 exit`);
  })

  it("inputDevice::getDeviceIds_test-03", 0, function () {
    console.log(`inputDevice::getDeviceIds_test-03 enter`);
    inputDevice.getDeviceIds((data, error) => {
      if (error) {
        console.log("getDeviceIds-Error-03");
        expect(false).assertTrue();
      }
      expect(data.length > 0).assertTure()
    })
    console.log(`inputDevice::getDeviceIds_test-03 exit`);
  })

  it("inputDevice::getDeviceIds_test-04", 0, function () {
    console.log(`inputDevice::getDeviceIds_test-04 enter`);
    inputDevice.getDeviceIds((data, error) => {
      if (error) {
        console.log("getDeviceIds-Error-04");
        expect(false).assertTrue();
      } else {
        console.log("getDeviceIds-Success-04");
        expect(data.length > 0).assertTure();
      }
    })
    console.log(`inputDevice::getDeviceIds_test-04 exit`);
  })

  //getdevice

  it("inputDevice::getDevice_test-03", 0, function () {
    console.log(`inputDevice::getDevice_test-03 enter`);
    inputDevice.getDevice(1000, (data, error) => {
      if (error) {
        console.log("getDevice-Error-03");
        expect(false).assertTrue();
      }
      expect(data == null).assertTrue();
    })
    console.log(`inputDevice::getDevice_test-03 exit`);
  })

  it("inputDevice::getDevice_test-04", 0, function () {
    console.log(`inputDevice::getDevice_test-04 enter`);
    inputDevice.getDeviceIds((data, error) => {
      console.log(`getDevice_test-04::getDeviceIds:data ${JSON.stringify(data)}`)
      console.log(`getDevice_test-04::getDeviceIds:err ${JSON.stringify(error)}`)
      if (data) {
        for (var i = 0; i < data.length; i++) {
          inputDevice.getDevice(data[i], (data, error) => {
            console.log(`getDevice:data_i ${JSON.stringify(data[i])}`)
            console.log(`getDevice:data ${JSON.stringify(data)}`)
            console.log(`getDevice:err ${JSON.stringify(error)}`)
            let arr = Object.keys(data);
            expect(arr.length > 0).assertTrue();
          })
        }
      }
    });
    console.log(`inputDevice::getDevice_test-04 exit`);
  })
})