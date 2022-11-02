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
export default function UsbFunctionsJsFunctionsTest() {
describe('UsbFunctionsJsFunctionsTest', function () {

  beforeAll(function () {
    console.log('*************Usb Unit UsbFunctionsJsFunctionsTest Begin*************');
    var Version = usb.getVersion()
    console.info('begin test getversion :' + Version)
    // version > 17  host currentMode = 2 device currentMode = 1
    var usbPortList = usb.getPorts()
    if (usbPortList.length > 0) {
      if (usbPortList[0].status.currentMode == 2) {
        usb.setPortRoles(usbPortList[0].id, usb.SINK, usb.DEVICE).then(data => {
          console.info('usb case setPortRoles return: ' + data);
        }).catch(error => {
          console.info('usb case setPortRoles error : ' + error);
        });
        CheckEmptyUtils.sleep(8000)
        console.log('*************Usb Unit switch to device Begin*************');
      }
    }
  })
  beforeEach(function () {
    console.info('beforeEach: *************Usb Unit  Test Case*************');
  })
  afterEach(function () {
    console.info('afterEach: *************Usb Unit  Test Case*************');
  })
  afterAll(function () {
    console.log('*************Usb Unit UsbFunctionsJsFunctionsTest End*************');
  })

  /**
   * @tc.number    : SUB_USB_JS_0330
   * @tc.name      : getCurrentFunctions
   * @tc.desc      : 获取当前设备模式 掩码与描述字符转换
   */
  it('SUB_USB_JS_0330', 0, function () {
    console.info('usb SUB_USB_JS_0330 begin');
    var maskCode = usb.getCurrentFunctions();
    console.info('usb case getCurrentFunctions return: ' + maskCode);

    var strMaskCode = usb.usbFunctionsToString(maskCode)
    console.info('usb case usbFunctionsToString return str: ' + strMaskCode);
    var nMaskCode = usb.usbFunctionsFromString(strMaskCode)
    console.info('usb case strMaskCode usbFunctionsFromString return int: ' + nMaskCode);
    expect(nMaskCode).assertEqual(maskCode);
    console.info('usb SUB_USB_JS_0330 :  PASS');
    expect(true).assertTrue();
  })

  /**
   * @tc.number    : SUB_USB_JS_0340
   * @tc.name      : usbFunctionString
   * @tc.desc      : 反向测试 获取当前设备模式 掩码与描述字符转换
   */
  it('SUB_USB_JS_0340', 0, function () {
    console.info('usb SUB_USB_JS_0340 begin');
    var maskCode = usb.getCurrentFunctions();
    console.info('usb case getCurrentFunctions return: ' + maskCode);

    var strMaskCode = usb.usbFunctionsToString(maskCode)
    console.info('usb case usbFunctionsToString return str: ' + strMaskCode);
    var nMaskCode = usb.usbFunctionsFromString(strMaskCode)
    console.info('usb case strMaskCode usbFunctionsFromString return int: ' + nMaskCode);

    var errmaskCode = 0
    var strMaskCode = usb.usbFunctionsToString(errmaskCode)

    console.info('usb case ' + errmaskCode + ' usbFunctionsToString return str: ' + strMaskCode);

    var errStrMaskCode = 'none'
    var nMaskCode = usb.usbFunctionsFromString(errStrMaskCode)
    expect(nMaskCode).assertEqual(usb.NONE);
    console.info('usb case errStrMaskCode ' + errStrMaskCode +
      ' usbFunctionsFromString return int: ' + nMaskCode);

    console.info('usb SUB_USB_JS_0340 :  PASS');
  })

  /**
   * @tc.number    : SUB_USB_JS_1000
   * @tc.name      : getCurrentFunctions
   * @tc.desc      : 反向测试 获取当前设备模式 入参错误(无参接口传参)
   */
  it('SUB_USB_JS_1000', 0, function () {
    console.info('usb SUB_USB_JS_1000 begin');
    try {
      var maskCode = usb.getCurrentFunctions("invalid");
      console.info('usb 1000 case getCurrentFunctions return: ' + maskCode);
      expect(false).assertTrue();
    } catch (err) {
      console.info('usb 1000 catch err code: ' + err.code + ' message: ' + err.message);
      expect(err.code).assertEqual(401);
      console.info('usb SUB_USB_JS_1000 :  PASS');
    }
  })
})
}
