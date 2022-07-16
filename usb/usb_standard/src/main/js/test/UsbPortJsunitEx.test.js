/*
 * Copyright (c) 2021-2022 Huawei Device Co., Ltd.
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

import usb from '@ohos.usb';
import CheckEmptyUtils from './CheckEmptyUtils.js';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'

/* usb core functions test */
export default function UsbPortJsFunctionsTestEx() {
describe('UsbPortJsFunctionsTestEx', function () {

  var gPort;
  beforeAll(function () {
    console.log('*************Usb Unit UsbPortJsFunctionsTestEx Begin*************');
    var Version = usb.getVersion()
    console.info('begin test getversion :' + Version)
  })
  beforeEach(function () {
    console.info('beforeEach: *************Usb Unit Test Case*************');
  })

  afterEach(function () {
    console.info('afterEach: *************Usb Unit Test Case*************');
  })

  afterAll(function () {
    console.log('*************Usb Unit UsbPortJsFunctionsTest End*************');
  })

  /**
   * @tc.number    : SUB_USB_JS_0230
   * @tc.name      : getSupportedModes
   * @tc.desc      : 反向测试 改变id 获取指定的端口支持的模式列表的组合掩码
   */
  it('SUB_USB_JS_0230', 0, function () {
    console.info('usb SUB_USB_JS_0230 begin');
    var usbPortList = usb.getPorts()
    if (usbPortList.length == 0) {
      console.info('usb SUB_USB_JS_0230 usbPortList is null');
      expect(false).assertTrue();
      return
    }

    expect(usbPortList.length > 0).assertTrue();
    gPort = usbPortList[0]
    var portID = usbPortList[0].id + 10
    var maskCode = usb.getSupportedModes(portID)
    expect(maskCode).assertEqual(usb.NONE);

    console.info('usb SUB_USB_JS_0230 :  PASS');
    expect(true).assertTrue();
  })

  /**
   * @tc.number    : SUB_USB_JS_0030
   * @tc.name      : setPortRoles
   * @tc.desc      : dataRole参数错误
   */
  it('SUB_USB_JS_0030', 0, function () {
    var portId = gPort.id;
    var powerRole = usb.SINK;
    var dataRole = usb.NONE - 1;
    CheckEmptyUtils.sleep(2000)
    usb.setPortRoles(portId, powerRole, dataRole).then(data => {
      console.info('usb case setPortRoles return: ' + data);
      expect(data).assertTrue();
    }).catch(error => {
      console.info('usb case setPortRoles error : ' + error);
      expect(error).assertFalse();
      console.info('usb SUB_USB_JS_0030:  PASS');
    })

    console.info('usb SUB_USB_JS_0030:  PASS');
    expect(true).assertTrue();
  })

  /**
   * @tc.number    : SUB_USB_JS_0040
   * @tc.name      : setPortRoles
   * @tc.desc      : portId，powerRole参数错误
   */
  it('SUB_USB_JS_0040', 0, function () {
    var portId = gPort.id;
    var powerRole = usb.NONE - 1;
    var dataRole = usb.DEVICE;
    CheckEmptyUtils.sleep(2000)
    usb.setPortRoles(portId, powerRole, dataRole).then(data => {
      console.info('usb case setPortRoles return: ' + data);
      expect(data).assertTrue();
    }).catch(error => {
      console.info('usb case setPortRoles error : ' + error);
      expect(error).assertFalse();
      console.info('usb SUB_USB_JS_0040:  PASS');
    })

    console.info('usb SUB_USB_JS_0040:  PASS');
    expect(true).assertTrue();
  })

  /**
   * @tc.number    : SUB_USB_JS_0050
   * @tc.name      : setPortRoles
   * @tc.desc      : portId，dataRole参数错误
   */
  it('SUB_USB_JS_0050', 0, function () {
    var portId = gPort.id - 3;
    var powerRole = usb.SINK;
    var dataRole = usb.NONE - 1;
    CheckEmptyUtils.sleep(2000)
    usb.setPortRoles(portId, powerRole, dataRole).then(data => {
      console.info('usb case setPortRoles return: ' + data);
      expect(data).assertTrue();
    }).catch(error => {
      console.info('usb case setPortRoles error : ' + error);
      expect(error).assertFalse();
      console.info('usb SUB_USB_JS_0050:  PASS');
    })

    console.info('usb SUB_USB_JS_0050:  PASS');
    expect(true).assertTrue();
  })

  /**
   * @tc.number    : SUB_USB_JS_0060
   * @tc.name      : setPortRoles
   * @tc.desc      : powerRole，dataRole参数错误
   */
  it('SUB_USB_JS_0060', 0, function () {
    var portId = gPort.id;
    var powerRole = usb.NONE - 1;
    var dataRole = usb.NONE - 1;
    CheckEmptyUtils.sleep(2000)
    usb.setPortRoles(portId, powerRole, dataRole).then(data => {
      console.info('usb case setPortRoles return: ' + data);
      expect(data).assertTrue();
    }).catch(error => {
      console.info('usb case setPortRoles error : ' + error);
      expect(error).assertFalse();
      console.info('usb SUB_USB_JS_0060:  PASS');
    })

    console.info('usb SUB_USB_JS_0060:  PASS');
    expect(true).assertTrue();
  })

  /**
   * @tc.number    : SUB_USB_JS_0070
   * @tc.name      : setPortRoles
   * @tc.desc      : portId,portId，dataRole参数错误
   */
  it('SUB_USB_JS_0070', 0, function () {
    var portId = gPort.id - 1;
    var dataRole = usb.NONE - 1;
    var powerRole = usb.NONE - 1;

    CheckEmptyUtils.sleep(2000)
    usb.setPortRoles(portId, powerRole, dataRole).then(data => {
      console.info('usb case setPortRoles return: ' + data);
      expect(data).assertTrue();
    }).catch(error => {
      console.info('usb case setPortRoles error : ' + error);
      expect(error).assertFalse();
      console.info('usb SUB_USB_JS_0070:  PASS');
    })

    console.info('usb SUB_USB_JS_0070:  PASS');
    expect(true).assertTrue();
  })

  /**
   * @tc.number    : SUB_USB_JS_0080
   * @tc.name      : setPortRoles
   * @tc.desc      : portId参数错误
   */
  it('SUB_USB_JS_0080', 0, function () {
    var portId = gPort.id - 1;
    var powerRole = 1;
    var dataRole = 1;
    CheckEmptyUtils.sleep(2000)
    usb.setPortRoles(portId, powerRole, dataRole).then(data => {
      console.info('usb case setPortRoles return: ' + data);
      expect(data).assertTrue();
    }).catch(error => {
      console.info('usb case setPortRoles error : ' + error);
      expect(error).assertFalse();
      console.info('usb SUB_USB_JS_0080:  PASS');
    })

    console.info('usb SUB_USB_JS_0080:  PASS');
    expect(true).assertTrue();
  })

})
}
