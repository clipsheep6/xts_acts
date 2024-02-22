/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import ohosWindow from '@ohos.window';
import screen from '@ohos.screen';
import display from '@ohos.display';
import deviceInfo from '@ohos.deviceInfo';
import { UiDriver, BY, ON, PointerMatrix } from '@ohos.UiTest'
import { BusinessError } from '@ohos.base';

export default function interfaceSupportSessionManagerTest(context, windowStage, abilityStorage) {
  describe('interface_support_sessionManager_test', function () {
    console.log('describe interface_support_sessionManager_test start!!!')

    async function sleep(time) {
      let timeoutId = null;
      let promise = new Promise(resolve => {
        timeoutId = setTimeout(() => {
          resolve('sleep finished');
        }, time);
      })
      let result = await promise;
      clearTimeout(timeoutId)
    }

    let currentDeviceIsRk = false;
    beforeAll(async function () {
      // 获取当前的设备类型，区分是否是RK
      let deviceTypeInfo = deviceInfo.deviceType
      currentDeviceIsRk = deviceTypeInfo === 'default' ? true : false;
      console.info('the value of the deviceType is :' + deviceInfo.deviceType);
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_2510
     * @tc.name      : testKeepKeyboardOnFocus_SubWindow_True
     * @tc.desc      : The soft keyboard created by other Windows is retained when the window is in focusc.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testKeepKeyboardOnFocus_SubWindow_True', 0, async function () {
      let caseName = 'testKeepKeyboardOnFocus_SubWindow_True';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let subWindow = null;
      subWindow = await windowStage.createSubWindow('testKeepKeyboardOnFocus_SubWindow').catch((err) => {
        expect().assertFail();
      });
      expect(!!subWindow).assertTrue();
      try {
        subWindow.keepKeyboardOnFocus(true);
        await subWindow.destroyWindow();
      } catch (exception) {
        await subWindow.destroyWindow();
        if (!currentDeviceIsRk) {
          console.error(msgStr + 'Failed to keep keyboard onFocus. Cause: ' + JSON.stringify(exception));
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + +JSON.stringify(exception))
          expect(exception.code).assertEqual(801);
        }
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_2520
     * @tc.name      : testKeepKeyboardOnFocus_SubWindow_False
     * @tc.desc      : The soft keyboard created by other Windows is retained when the window is in focus.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testKeepKeyboardOnFocus_SubWindow_False', 0, async function () {
      let caseName = 'testKeepKeyboardOnFocus_SubWindow_False';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let subWindow = null;
      subWindow = await windowStage.createSubWindow('testKeepKeyboardOnFocus_SubWindow_False').catch((err) => {
        expect().assertFail();
      });
      expect(!!subWindow).assertTrue();
      try {
        subWindow.keepKeyboardOnFocus(false);
        await subWindow.destroyWindow();
      } catch (exception) {
        await subWindow.destroyWindow();
        if (!currentDeviceIsRk) {
          console.error(msgStr + 'Failed to keep keyboard onFocus. Cause: ' + JSON.stringify(exception));
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + +JSON.stringify(exception))
          expect(exception.code).assertEqual(801);
        }
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_2530
     * @tc.name      : testKeepKeyboardOnFocus_SystemWindow_False
     * @tc.desc      : The soft keyboard created by other Windows is retained when the window is in focus
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testKeepKeyboardOnFocus_SystemWindow_False', 0, async function () {
      let caseName = 'testKeepKeyboardOnFocus_SystemWindow_False';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let windowConfig = {
        name: 'testKeepKeyboardOnFocus_SystemWindow_False',
        windowType: ohosWindow.WindowType.TYPE_SYSTEM_TOAST,
        ctx: context
      };
      let tempWnd = null;
      tempWnd = await ohosWindow.createWindow(windowConfig).catch((err) => {
        console.log(msgStr + 'createWindow tempWnd failed');
        expect().assertFail();
      });
      expect(!!tempWnd).assertTrue();
      try {
        tempWnd.keepKeyboardOnFocus(false);
        await tempWnd.destroyWindow();
      } catch (exception) {
        await tempWnd.destroyWindow();
        if (!currentDeviceIsRk) {
          console.error(msgStr + 'Failed to keep keyboard onFocus. Cause: ' + JSON.stringify(exception));
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + +JSON.stringify(exception))
          expect(exception.code).assertEqual(801);
        }
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_2540
     * @tc.name      : testKeepKeyboardOnFocus_SystemWindow_True
     * @tc.desc      : The soft keyboard created by other Windows is retained when the window is in focus.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testKeepKeyboardOnFocus_SystemWindow_True', 0, async function () {
      let caseName = 'testKeepKeyboardOnFocus_SystemWindow_True';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let windowConfig = {
        name: 'testKeepKeyboardOnFocus_SystemWindow_True',
        windowType: ohosWindow.WindowType.TYPE_SYSTEM_TOAST,
        ctx: context
      };
      let tempWnd = null;
      tempWnd = await ohosWindow.createWindow(windowConfig).catch((err) => {
        console.log(msgStr + 'createWindow tempWnd failed');
        expect().assertFail();
      });
      expect(!!tempWnd).assertTrue();
      try {
        tempWnd.keepKeyboardOnFocus(false);
        await tempWnd.destroyWindow();
      } catch (exception) {
        await tempWnd.destroyWindow();
        if (!currentDeviceIsRk) {
          console.error(msgStr + 'Failed to keep keyboard onFocus. Cause: ' + JSON.stringify(exception));
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + +JSON.stringify(exception))
          expect(exception.code).assertEqual(801);
        }
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_2550
     * @tc.name      : testKeepKeyboardOnFocus_WindowStateAbnormal
     * @tc.desc      : The soft keyboard created by other Windows is retained when the window is in focus
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testKeepKeyboardOnFocus_WindowStateAbnormal', 0, async function () {
      let caseName = 'testKeepKeyboardOnFocus_SystemWindow_True';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let windowConfig = {
        name: 'testKeepKeyboardOnFocus_SystemWindow_True',
        windowType: ohosWindow.WindowType.TYPE_SYSTEM_TOAST,
        ctx: context
      };
      let tempWnd = null;
      tempWnd = await ohosWindow.createWindow(windowConfig).catch((err) => {
        console.log(msgStr + 'createWindow tempWnd failed');
        expect().assertFail();
      });
      expect(!!tempWnd).assertTrue();
      await tempWnd.destroyWindow();
      try {
        tempWnd.keepKeyboardOnFocus(false);
        expect().assertFail();
      } catch (exception) {
        console.error(msgStr + 'Failed to keep keyboard onFocus. Cause: ' + JSON.stringify(exception));
        expect(exception.code).assertEqual(1300002);
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_2560
     * @tc.name      : testKeepKeyboardOnFocus_MainWindow
     * @tc.desc      : The soft keyboard created by other Windows is retained when the window is in focus
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testKeepKeyboardOnFocus_MainWindow', 0, async function () {
      let caseName = 'testKeepKeyboardOnFocus_MainWindow';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let tempWnd = null
      tempWnd = await windowStage.getMainWindow().catch((err) => {
        expect().assertFail();
      });
      expect(!!tempWnd).assertTrue();
      try {
        tempWnd.keepKeyboardOnFocus(true);
        expect().assertFail();
      } catch (exception) {
        console.error(msgStr + 'Failed to keep keyboard onFocus. Cause: ' + JSON.stringify(exception));
        expect(exception.code).assertEqual(1300004);
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_2570
     * @tc.name      : testWindowOffWindowVisibilityChange_UnregisteredOff
     * @tc.desc      : Enable this window to listen for status change events
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testWindowOffWindowVisibilityChange_UnregisteredOff', 0, async function () {
      let caseName = 'testWindowOffWindowVisibilityChange_UnregisteredOff';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let windowConfig = {
        name: "testWindowOffWindowVisibilityChange_UnregisteredOff",
        windowType: ohosWindow.WindowType.TYPE_FLOAT,
        ctx: context,
      };
      let win = null;
      win = await ohosWindow.createWindow(windowConfig).catch((err) => {
        console.log(msgStr + 'ohosWindow.createWindow ' + 'catched, err: ' + JSON.stringify(err));
        expect().assertFail();
      });
      expect(!!win).assertTrue();
      try {
        win.off('windowVisibilityChange');
        await win.destroyWindow();
        expect().assertFail();
      } catch (exception) {
        await win.destroyWindow();
        console.error(msgStr + 'Failed to disable the listener for system avoid area changes. Cause: ' + JSON.stringify(exception));
        expect(exception.code).assertEqual(1300002);
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_2580
     * @tc.name      : testWindowOffWindowVisibilityChange_RepeatOff
     * @tc.desc      : Enable this window to listen for status change events
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testWindowOffWindowVisibilityChange_RepeatOff', 0, async function () {
      let caseName = 'testWindowOffWindowVisibilityChange_RepeatOff';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let windowConfig = {
        name: "testWindowOffWindowVisibilityChange_RepeatOff",
        windowType: ohosWindow.WindowType.TYPE_FLOAT,
        ctx: context,
      };
      let win = null;
      win = await ohosWindow.createWindow(windowConfig).catch((err) => {
        console.log(msgStr + 'ohosWindow.createWindow ' + 'catched, err: ' + JSON.stringify(err));
        expect().assertFail();
      });
      expect(!!win).assertTrue();
      try {
        win.on('windowVisibilityChange', (boolean) => {
          console.info(msgStr + 'Window visibility changed, isVisible=' + boolean);
        });
      } catch (exception) {
        if (!currentDeviceIsRk) {
          console.error('Failed to register callback. Cause: ' + JSON.stringify(exception));
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + JSON.stringify(exception))
          expect(exception.code).assertEqual(801);
        }
      }
      try {
        win.off('windowVisibilityChange');
      } catch (exception) {
        if (!currentDeviceIsRk) {
          console.error(msgStr + 'Failed to unregister callback. Cause: ' + JSON.stringify(exception));
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + JSON.stringify(exception))
          expect(exception.code).assertEqual(1300002);
        }
      }
      try {
        win.off('windowVisibilityChange');
        await win.destroyWindow();
        expect().assertFail();
      } catch (exception) {
        await win.destroyWindow();
        console.error(msgStr + 'Failed to unregister callback Cause: ' + JSON.stringify(exception));
        expect(exception.code).assertEqual(1300002);
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_2590
     * @tc.name      : testSetSingleFrameComposerEnabled_True
     * @tc.desc      : Disable/Enable the function of single frame compositing render node
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testSetSingleFrameComposerEnabled_True', 0, async function () {
      let caseName = 'testSetSingleFrameComposerEnabled_True';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let windowConfig = {
        name: "testSetSingleFrameComposerEnabled_True",
        windowType: ohosWindow.WindowType.TYPE_FLOAT,
        ctx: context,
      };
      let win = null;
      win = await ohosWindow.createWindow(windowConfig).catch((err) => {
        console.log(msgStr + 'ohosWindow.createWindow ' + 'catched, err: ' + JSON.stringify(err));
        expect().assertFail();
      });
      expect(!!win).assertTrue();
      await win.setSingleFrameComposerEnabled(true).then(async () => {
        console.info(msgStr + 'Succeeded in enabling the single-frame-composer function.');
        await win.destroyWindow();
      }).catch((err) => {
        if (!currentDeviceIsRk) {
          console.error(msgStr + `ailed to enable the single-frame-composer function. code:${err.code}, message:${err.message}.`);
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + JSON.stringify(err))
          expect(err.code).assertEqual(801);
        }
      });
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_2600
     * @tc.name      : testSetSingleFrameComposerEnabled_False
     * @tc.desc      : Disable/Enable the function of single frame compositing render node
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testSetSingleFrameComposerEnabled_False', 0, async function () {
      let caseName = 'testSetSingleFrameComposerEnabled_False';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let windowConfig = {
        name: "testSetSingleFrameComposerEnabled_False",
        windowType: ohosWindow.WindowType.TYPE_FLOAT,
        ctx: context,
      };
      let win = null;
      win = await ohosWindow.createWindow(windowConfig).catch((err) => {
        console.log(msgStr + 'ohosWindow.createWindow ' + 'catched, err: ' + JSON.stringify(err));
        expect().assertFail();
      });
      expect(!!win).assertTrue();
      await win.setSingleFrameComposerEnabled(false).then(async () => {
        console.info(msgStr + 'Succeeded in enabling the single-frame-composer function.');
        await win.destroyWindow();
      }).catch((err) => {
        if (!currentDeviceIsRk) {
          console.error(msgStr + `Failed to enable the single-frame-composer function. code:${err.code}, message:${err.message}.`);
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + JSON.stringify(err))
          expect(err.code).assertEqual(801);
        }
      });
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_2610
     * @tc.name      : testSetSingleFrameComposerEnabled_WindowStateAbnormal
     * @tc.desc      : Disable/Enable the function of single frame compositing render node
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testSetSingleFrameComposerEnabled_WindowStateAbnormal', 0, async function () {
      let caseName = 'testSetSingleFrameComposerEnabled_WindowStateAbnormal';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let windowConfig = {
        name: "testSetSingleFrameComposerEnabled_WindowStateAbnormal",
        windowType: ohosWindow.WindowType.TYPE_FLOAT,
        ctx: context,
      };
      let win = null;
      win = await ohosWindow.createWindow(windowConfig).catch((err) => {
        console.log(msgStr + 'ohosWindow.createWindow ' + 'catched, err: ' + JSON.stringify(err));
        expect().assertFail();
      });
      expect(!!win).assertTrue();
      await win.destroyWindow();
      await win.setSingleFrameComposerEnabled(false).then(() => {
        console.info(msgStr + 'Succeeded in enabling the single-frame-composer function.');
        expect().assertFail();
      }).catch((err) => {
        console.error(msgStr + `Failed to enable the single-frame-composer function. code:${err.code}, message:${err.message}.`);
        expect(err.code).assertEqual(1300002);
      });
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_2620
     * @tc.name      : testSetSingleFrameComposerEnabled_Invalid_ParameThree
     * @tc.desc      : Disable/Enable the function of single frame compositing render node
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testSetSingleFrameComposerEnabled_Invalid_ParameThree', 0, async function () {
      let caseName = 'testSetSingleFrameComposerEnabled_Invalid_ParameThree';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let windowConfig = {
        name: "testSetSingleFrameComposerEnabled_Invalid_ParameThree",
        windowType: ohosWindow.WindowType.TYPE_FLOAT,
        ctx: context,
      };
      let win = null;
      win = await ohosWindow.createWindow(windowConfig).catch((err) => {
        console.log(msgStr + 'ohosWindow.createWindow ' + 'catched, err: ' + JSON.stringify(err));
        expect().assertFail();
      });
      expect(!!win).assertTrue();
      await win.setSingleFrameComposerEnabled(false, true).then(async () => {
        console.info(msgStr + 'Succeeded in enabling the single-frame-composer function.');
        await win.destroyWindow();
        expect().assertFail();
      }).catch(async (err) => {
        console.error(msgStr + `Failed to enable the single-frame-composer function. code:${err.code}, message:${err.message}.`);
        await win.destroyWindow();
        expect(err.code).assertEqual(401);
      });
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_3730
     * @tc.name      : testResize_MinLimits
     * @tc.desc      : Change the current window size
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testResize_MinLimits', 0, async function () {
      let caseName = 'testResize_MinLimits';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let windowId = 'testResize_MinLimits';
      let windowConfig = {
        name: windowId, windowType: ohosWindow.WindowType.TYPE_DIALOG, ctx: context
      };
      let tempWnd = null;
      let windowLimits = null;
      tempWnd = await ohosWindow.createWindow(windowConfig).catch((err) => {
        console.log(msgStr + 'createWindow tempWnd failed');
        expect().assertFail();
      });
      expect(!!tempWnd).assertTrue();
      await tempWnd.loadContent('MainAbility/pages/second/second').catch((err) => {
        console.log(msgStr + 'tempWnd.loadContent failed');
        expect().assertFail();
      });
      try {
        windowLimits = tempWnd.getWindowLimits();
        console.log(msgStr + 'windowLimits is: ' + JSON.stringify(windowLimits));
      } catch (exception) {
        if (!currentDeviceIsRk) {
          console.error(msgStr + 'Failed to obtain the window limits of window. Cause: ' + JSON.stringify(exception));
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + JSON.stringify(exception))
          expect(exception.code).assertEqual(801);
        }
      }
      if (!currentDeviceIsRk) {
        console.log(msgStr + 'width is: ' + windowLimits.minWidth + ' ' + "height is: " + windowLimits.minHeight);
        await tempWnd.resize(windowLimits.minWidth, windowLimits.minHeight).catch((err) => {
          console.log(msgStr + 'tempWnd.resize failed');
          expect().assertFail();
        });
        console.log(msgStr + 'tempWnd.resize successed');
      }
      await tempWnd.showWindow().catch((err) => {
        console.log(msgStr + 'tempWnd.showWindow failed');
        expect().assertFail();
      });
      console.log(msgStr + 'tempWnd.showWindow successed');
      await tempWnd.destroyWindow();
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_3740
     * @tc.name      : testResize_MaxLimits
     * @tc.desc      : Change the current window size
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testResize_MaxLimits', 0, async function () {
      let caseName = 'testResize_MaxLimits';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let windowId = 'testResize_MaxLimits';
      let windowConfig = {
        name: windowId, windowType: ohosWindow.WindowType.TYPE_DIALOG, ctx: context
      };
      let tempWnd = null;
      let windowLimits = null;
      tempWnd = await ohosWindow.createWindow(windowConfig).catch((err) => {
        console.log(msgStr + 'createWindow tempWnd failed');
        expect().assertFail();
      });
      expect(!!tempWnd).assertTrue();
      await tempWnd.loadContent('MainAbility/pages/second/second').catch((err) => {
        console.log(msgStr + 'tempWnd.loadContent failed');
        expect().assertFail();
      });
      try {
        windowLimits = tempWnd.getWindowLimits();
        console.log(msgStr + 'windowLimits is: ' + JSON.stringify(windowLimits));
      } catch (exception) {
        if (!currentDeviceIsRk) {
          console.error(msgStr + 'Failed to obtain the window limits of window. Cause: ' + JSON.stringify(exception));
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + JSON.stringify(exception))
          expect(exception.code).assertEqual(801);
        }
      }
      if (!currentDeviceIsRk) {
        console.log(msgStr + 'width is: ' + windowLimits.maxWidth + ' ' + "height is: " + windowLimits.maxHeight);
        await tempWnd.resize(windowLimits.maxWidth, windowLimits.maxHeight).catch((err) => {
          console.log(msgStr + 'tempWnd.resize failed');
          expect().assertFail();
        });
        console.log(msgStr + 'tempWnd.resize successed');
      }
      await tempWnd.showWindow().catch((err) => {
        console.log(msgStr + 'tempWnd.showWindow failed');
        expect().assertFail();
      });
      console.log(msgStr + 'tempWnd.showWindow successed');
      await tempWnd.destroyWindow();
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_3750
     * @tc.name      : testResize_MaxAndMinLimits
     * @tc.desc      : Change the current window size
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testResize_MaxAndMinLimits', 0, async function () {
      let caseName = 'testResize_MaxAndMinLimits';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let windowId = 'testResize_MaxAndMinLimits';
      let windowConfig = {
        name: windowId, windowType: ohosWindow.WindowType.TYPE_DIALOG, ctx: context
      };
      let tempWnd = null;
      let windowLimits = null;
      tempWnd = await ohosWindow.createWindow(windowConfig).catch((err) => {
        console.log(msgStr + 'createWindow tempWnd failed');
        expect().assertFail();
      });
      expect(!!tempWnd).assertTrue();
      await tempWnd.loadContent('MainAbility/pages/second/second').catch((err) => {
        console.log(msgStr + 'tempWnd.loadContent failed');
        expect().assertFail();
      });
      try {
        windowLimits = tempWnd.getWindowLimits();
        console.log(msgStr + 'windowLimits is: ' + JSON.stringify(windowLimits));
      } catch (exception) {
        if (!currentDeviceIsRk) {
          console.error(msgStr + 'Failed to obtain the window limits of window. Cause: ' + JSON.stringify(exception));
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + JSON.stringify(exception))
          expect(exception.code).assertEqual(801);
        }
      }
      if (!currentDeviceIsRk) {
        console.log(msgStr + 'width is: ' + windowLimits.minWidth + ' ' + "height is: " + windowLimits.maxHeight);
        await tempWnd.resize(windowLimits.minWidth, windowLimits.maxHeight).catch((err) => {
          console.log(msgStr + 'tempWnd.resize failed');
          expect().assertFail();
        });
        console.log(msgStr + 'tempWnd.resize successed');
      }
      await tempWnd.showWindow().catch((err) => {
        console.log(msgStr + 'tempWnd.showWindow failed');
        expect().assertFail();
      });
      console.log(msgStr + 'tempWnd.showWindow successed');
      await tempWnd.destroyWindow();
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_3760
     * @tc.name      : testResize_Over_MaxLimits
     * @tc.desc      : Change the current window size
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testResize_Over_MaxLimits', 0, async function () {
      let caseName = 'testResize_Over_MaxLimits';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let windowId = 'testResize_Over_MaxLimits';
      let windowConfig = {
        name: windowId, windowType: ohosWindow.WindowType.TYPE_DIALOG, ctx: context
      };
      let tempWnd = null;
      let windowLimits = null;
      tempWnd = await ohosWindow.createWindow(windowConfig).catch((err) => {
        console.log(msgStr + 'createWindow tempWnd failed');
        expect().assertFail();
      });
      expect(!!tempWnd).assertTrue();
      await tempWnd.loadContent('MainAbility/pages/second/second').catch((err) => {
        console.log(msgStr + 'tempWnd.loadContent failed');
        expect().assertFail();
      });
      await tempWnd.moveWindowTo(0, 0).catch((err: BusinessError) => {
        console.error(msgStr + 'Failed to move the window. Cause: ' + JSON.stringify(err));
        expect().assertFail();
      });
      await tempWnd.showWindow().catch((err: BusinessError) => {
        console.error(msgStr + 'Failed to show the window. Cause: ' + JSON.stringify(err));
        expect().assertFail();
      });
      try {
        windowLimits = tempWnd.getWindowLimits();
        console.log(msgStr + 'windowLimits is: ' + JSON.stringify(windowLimits));
      } catch (exception) {
        if (!currentDeviceIsRk) {
          console.error(msgStr + 'Failed to obtain the window limits of window. Cause: ' + JSON.stringify(exception));
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + JSON.stringify(exception))
          expect(exception.code).assertEqual(801);
        }
      }
      if (!currentDeviceIsRk) {
        let _width = windowLimits.maxWidth + 100;
        let _height = windowLimits.maxHeight + 5;
        console.log(msgStr + 'width is: ' + _width + ' ' + "height is: " + _height);
        await tempWnd.resize(_width, _height).then(() => {
          console.log(msgStr + 'tempWnd.resize successed');
        }).catch((err) => {
          console.log(msgStr + 'tempWnd.resize failed Cause: ' + JSON.stringify(err));
          expect().assertFail();
        });
        await sleep(1000)
        let properties = tempWnd.getWindowProperties();
        console.log(msgStr + " getWindowProperties is: " + JSON.stringify(properties))
        expect(properties.windowRect.width).assertEqual(windowLimits.maxWidth)
        expect(properties.windowRect.height).assertEqual(windowLimits.maxHeight)
      }
      await tempWnd.destroyWindow();
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_3770
     * @tc.name      : testResize_setAndGet_MinLimits
     * @tc.desc      : Change the current window size
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testResize_setAndGet_MinLimits', 0, async function () {
      let caseName = 'testResize_setAndGet_MinLimits';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let windowId = 'testResize_setAndGet_MinLimits';
      let windowConfig = {
        name: windowId, windowType: ohosWindow.WindowType.TYPE_DIALOG, ctx: context
      };
      let tempWnd = null;
      let windowLimits = null;
      tempWnd = await ohosWindow.createWindow(windowConfig).catch((err) => {
        console.log(msgStr + 'createWindow tempWnd failed');
        expect().assertFail();
      });
      expect(!!tempWnd).assertTrue();
      await tempWnd.loadContent('MainAbility/pages/second/second').catch((err) => {
        console.log(msgStr + 'tempWnd.loadContent failed');
        expect().assertFail();
      });
      let winLimits: ohosWindow.WindowLimits = {
        maxWidth: 1500,
        maxHeight: 1000,
        minWidth: 500,
        minHeight: 400
      };
      await tempWnd.setWindowLimits(winLimits).then((data) => {
        console.info(msgStr + 'Succeeded in changing the window limits. Cause:' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        if (!currentDeviceIsRk) {
          console.error(msgStr + 'Failed to change the window limits. Cause: ' + JSON.stringify(err));
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + +JSON.stringify(err))
          expect(err.code).assertEqual(801);
        }
      });
      try {
        windowLimits = tempWnd.getWindowLimits();
        console.log(msgStr + 'windowLimits is: ' + JSON.stringify(windowLimits));
      } catch (exception) {
        if (!currentDeviceIsRk) {
          console.error(msgStr + 'Failed to obtain the window limits of window. Cause: ' + JSON.stringify(exception));
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + JSON.stringify(exception))
          expect(exception.code).assertEqual(801);
        }
      }
      if (!currentDeviceIsRk) {
        console.log(msgStr + 'width is: ' + windowLimits.minWidth + ' ' + "height is: " + windowLimits.minHeight);
        await tempWnd.resize(windowLimits.minWidth, windowLimits.minHeight).then(() => {
          console.log(msgStr + 'tempWnd.resize successed');
        }).catch((err) => {
          console.log(msgStr + 'tempWnd.resize failed');
          expect().assertFail();
        });
      }
      await tempWnd.showWindow().catch((err) => {
        console.log(msgStr + 'tempWnd.showWindow failed');
        expect().assertFail();
      });
      console.log(msgStr + 'tempWnd.showWindow successed');
      await tempWnd.destroyWindow();
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_3780
     * @tc.name      : testResize_setAndGet_MaxLimits
     * @tc.desc      : Change the current window size
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testResize_setAndGet_MaxLimits', 0, async function () {
      let caseName = 'testResize_setAndGet_MaxLimits';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let windowId = 'testResize_setAndGet_MaxLimits';
      let windowConfig = {
        name: windowId, windowType: ohosWindow.WindowType.TYPE_DIALOG, ctx: context
      };
      let tempWnd = null;
      let windowLimits = null;
      tempWnd = await ohosWindow.createWindow(windowConfig).catch((err) => {
        console.log(msgStr + 'createWindow tempWnd failed');
        expect().assertFail();
      });
      expect(!!tempWnd).assertTrue();
      await tempWnd.loadContent('MainAbility/pages/second/second').catch((err) => {
        console.log(msgStr + 'tempWnd.loadContent failed');
        expect().assertFail();
      });
      let winLimits: ohosWindow.WindowLimits = {
        maxWidth: 1000,
        maxHeight: 1200,
        minWidth: 200,
        minHeight: 200
      };
      await tempWnd.setWindowLimits(winLimits).then((data) => {
        console.info(msgStr + 'Succeeded in changing the window limits. Cause:' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        if (!currentDeviceIsRk) {
          console.error(msgStr + 'Failed to change the window limits. Cause: ' + JSON.stringify(err));
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + +JSON.stringify(err))
          expect(err.code).assertEqual(801);
        }
      });
      try {
        windowLimits = tempWnd.getWindowLimits();
        console.log(msgStr + 'windowLimits is: ' + JSON.stringify(windowLimits));
      } catch (exception) {
        if (!currentDeviceIsRk) {
          console.error(msgStr + 'Failed to obtain the window limits of window. Cause: ' + JSON.stringify(exception));
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + JSON.stringify(exception))
          expect(exception.code).assertEqual(801);
        }
      }
      if (!currentDeviceIsRk) {
        console.log(msgStr + 'width is: ' + windowLimits.maxWidth + ' ' + "height is: " + windowLimits.maxHeight);
        await tempWnd.resize(windowLimits.maxWidth, windowLimits.maxHeight).catch((err) => {
          console.log(msgStr + 'tempWnd.resize failed');
          expect().assertFail();
        });
        console.log(msgStr + 'tempWnd.resize successed');
      }
      await tempWnd.showWindow().catch((err) => {
        console.log(msgStr + 'tempWnd.showWindow failed');
        expect().assertFail();
      });
      console.log(msgStr + 'tempWnd.showWindow successed');
      await tempWnd.destroyWindow();
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_3790
     * @tc.name      : testResize_setAndGet_MaxAndMinLimits
     * @tc.desc      : Change the current window size
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testResize_setAndGet_MaxAndMinLimits', 0, async function () {
      let caseName = 'testResize_setAndGet_MaxAndMinLimits';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let windowId = 'testResize_setAndGet_MaxAndMinLimits';
      let windowConfig = {
        name: windowId, windowType: ohosWindow.WindowType.TYPE_DIALOG, ctx: context
      };
      let tempWnd = null;
      let windowLimits = null;
      tempWnd = await ohosWindow.createWindow(windowConfig).catch((err) => {
        console.log(msgStr + 'createWindow tempWnd failed');
        expect().assertFail();
      });
      expect(!!tempWnd).assertTrue();
      await tempWnd.loadContent('MainAbility/pages/second/second').catch((err) => {
        console.log(msgStr + 'tempWnd.loadContent failed');
        expect().assertFail();
      });
      let winLimits: ohosWindow.WindowLimits = {
        maxWidth: 1000,
        maxHeight: 1200,
        minWidth: 200,
        minHeight: 200
      };
      await tempWnd.setWindowLimits(winLimits).then((data) => {
        console.info(msgStr + 'Succeeded in changing the window limits. Cause:' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        if (!currentDeviceIsRk) {
          console.error(msgStr + 'Failed to change the window limits. Cause: ' + JSON.stringify(err));
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + +JSON.stringify(err))
          expect(err.code).assertEqual(801);
        }
      });
      try {
        windowLimits = tempWnd.getWindowLimits();
        console.log(msgStr + 'windowLimits is: ' + JSON.stringify(windowLimits));
      } catch (exception) {
        if (!currentDeviceIsRk) {
          console.error(msgStr + 'Failed to obtain the window limits of window. Cause: ' + JSON.stringify(exception));
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + JSON.stringify(exception))
          expect(exception.code).assertEqual(801);
        }
      }
      if (!currentDeviceIsRk) {
        console.log(msgStr + 'width is: ' + windowLimits.minWidth + ' ' + "height is: " + windowLimits.maxHeight);
        await tempWnd.resize(windowLimits.minWidth, windowLimits.maxHeight).catch((err) => {
          console.log(msgStr + 'tempWnd.resize failed');
          expect().assertFail();
        });
        console.log(msgStr + 'tempWnd.resize successed');
      }
      await tempWnd.showWindow().catch((err) => {
        console.log(msgStr + 'tempWnd.showWindow failed');
        expect().assertFail();
      });
      console.log(msgStr + 'tempWnd.showWindow successed');
      await tempWnd.destroyWindow();
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_3800
     * @tc.name      : testResize_setAndGet_Over_MaxLimits
     * @tc.desc      : Change the current window size
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testResize_setAndGet_Over_MaxLimits', 0, async function () {
      let caseName = 'testResize_setAndGet_Over_MaxLimits';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let windowId = 'testResize_setAndGet_Over_MaxLimits';
      let windowConfig = {
        name: windowId, windowType: ohosWindow.WindowType.TYPE_DIALOG, ctx: context
      };
      let tempWnd = null;
      let windowLimits = null;
      tempWnd = await ohosWindow.createWindow(windowConfig).catch((err) => {
        console.log(msgStr + 'createWindow tempWnd failed');
        expect().assertFail();
      });
      expect(!!tempWnd).assertTrue();
      await tempWnd.loadContent('MainAbility/pages/second/second').catch((err) => {
        console.log(msgStr + 'tempWnd.loadContent failed');
        expect().assertFail();
      });
      await tempWnd.moveWindowTo(0, 0).catch((err: BusinessError) => {
        console.error(msgStr + 'Failed to move the window. Cause: ' + JSON.stringify(err));
        expect().assertFail();
      });
      await tempWnd.showWindow().catch((err: BusinessError) => {
        console.error(msgStr + 'Failed to show the window. Cause: ' + JSON.stringify(err));
        expect().assertFail();
      });
      let winLimits: ohosWindow.WindowLimits = {
        maxWidth: 1000,
        maxHeight: 1200,
        minWidth: 200,
        minHeight: 200
      };
      await tempWnd.setWindowLimits(winLimits).then((data) => {
        console.info(msgStr + 'Succeeded in changing the window limits. Cause:' + JSON.stringify(data));
      }).catch((err: BusinessError) => {
        if (!currentDeviceIsRk) {
          console.error(msgStr + 'Failed to change the window limits. Cause: ' + JSON.stringify(err));
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + +JSON.stringify(err))
          expect(err.code).assertEqual(801);
        }
      });
      try {
        windowLimits = tempWnd.getWindowLimits();
        console.log(msgStr + 'windowLimits is: ' + JSON.stringify(windowLimits));
      } catch (exception) {
        if (!currentDeviceIsRk) {
          console.error(msgStr + 'Failed to obtain the window limits of window. Cause: ' + JSON.stringify(exception));
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + JSON.stringify(exception))
          expect(exception.code).assertEqual(801);
        }
      }
      if (!currentDeviceIsRk) {
        let _width = windowLimits.maxWidth + 100;
        let _height = windowLimits.maxHeight + 5;
        console.log(msgStr + 'width is: ' + _width + ' ' + "height is: " + _height);
        await tempWnd.resize(_width, _height).then(() => {
          console.log(msgStr + 'tempWnd.resize successed');
        }).catch((err) => {
          console.log(msgStr + 'tempWnd.resize failed Cause: ' + JSON.stringify(err));
          expect().assertFail();
        });
        await sleep(1000)
        let properties = tempWnd.getWindowProperties();
        console.log(msgStr + " getWindowProperties is: " + JSON.stringify(properties))
        expect(properties.windowRect.width).assertEqual(windowLimits.maxWidth)
        expect(properties.windowRect.height).assertEqual(windowLimits.maxHeight)
      }
      await tempWnd.destroyWindow();
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_3810
     * @tc.name      : testResize_SubWindow_LimitMin_Callback
     * @tc.desc      : Verify that the main window size is limited
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testResize_SubWindow_LimitMin_Callback', 0, async function (done) {
      let caseName = 'testResize_SubWindow_LimitMin_Callback';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let subMin = null;
      subMin = await windowStage.createSubWindow('testResize_SubWindow_LimitMin_Callback').catch((err: BusinessError) => {
        console.error('Failed to create the subwindow. Cause: ' + JSON.stringify(err));
      });
      expect(!!subMin).assertTrue();
      await subMin.loadContent('MainAbility/pages/second/second').catch((err) => {
        console.error(msgStr + 'Failed to loadContent the window. Cause: ' + JSON.stringify(err));
        expect().assertFail();
        done();
      });
      await subMin.moveWindowTo(0, 0).catch((err: BusinessError) => {
        console.error(msgStr + 'Failed to move the window. Cause: ' + JSON.stringify(err));
        expect().assertFail();
        done();
      });
      await subMin.showWindow().catch((err: BusinessError) => {
        console.error(msgStr + 'Failed to show the window. Cause: ' + JSON.stringify(err));
        expect().assertFail();
        done();
      });
      let windowLimits = null;
      try {
        windowLimits = subMin.getWindowLimits();
        console.log(msgStr + 'windowLimits is: ' + JSON.stringify(windowLimits));
      } catch (exception) {
        if (!currentDeviceIsRk) {
          console.error(msgStr + 'Failed to obtain the window limits of window. Cause: ' + JSON.stringify(exception));
          expect().assertFail();
          done();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + JSON.stringify(exception))
          expect(exception.code).assertEqual(801);
          done();
        }
      }
      if (!currentDeviceIsRk) {
        let _width = windowLimits.minWidth;
        let _height = windowLimits.minHeight;
        console.log(msgStr + 'width is: ' + _width + ' ' + "height is: " + _height);
        subMin.resize(_width, _height, async (err: BusinessError) => {
          const errCode: number = err.code;
          if (errCode) {
            console.error(msgStr + 'Failed to change the window size. Cause:' + JSON.stringify(err));
            expect().assertFail();
            done();
            return;
          }
          console.info(msgStr + 'Succeeded in changing the window size.');
          await sleep(1000)
          let properties = subMin.getWindowProperties();
          console.log(msgStr + " getWindowProperties is: " + JSON.stringify(properties))
          expect(properties.windowRect.width).assertEqual(_width)
          expect(properties.windowRect.height).assertEqual(_height)
          await subMin.destroyWindow();
          done();
        });
      } else {
        await subMin.destroyWindow();
        done();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_3820
     * @tc.name      : testResize_SubWindow_LimitMax_Callback
     * @tc.desc      : Verify that the main window size is limited
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testResize_SubWindow_LimitMax_Callback', 0, async function (done) {
      let caseName = 'testResize_SubWindow_LimitMax_Callback';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let subMin = null;
      subMin = await windowStage.createSubWindow('testResize_SubWindow_LimitMax_Callback').catch((err: BusinessError) => {
        console.error('Failed to create the subwindow. Cause: ' + JSON.stringify(err));
      });
      expect(!!subMin).assertTrue();
      await subMin.loadContent('MainAbility/pages/second/second').catch((err) => {
        console.error(msgStr + 'Failed to loadContent the window. Cause: ' + JSON.stringify(err));
        expect().assertFail();
        done();
      });
      await subMin.moveWindowTo(0, 0).catch((err: BusinessError) => {
        console.error(msgStr + 'Failed to move the window. Cause: ' + JSON.stringify(err));
        expect().assertFail();
        done();
      });
      await subMin.showWindow().catch((err: BusinessError) => {
        console.error(msgStr + 'Failed to show the window. Cause: ' + JSON.stringify(err));
        expect().assertFail();
        done();
      });
      let windowLimits = null;
      try {
        windowLimits = subMin.getWindowLimits();
        console.log(msgStr + 'windowLimits is: ' + JSON.stringify(windowLimits));
      } catch (exception) {
        if (!currentDeviceIsRk) {
          console.error(msgStr + 'Failed to obtain the window limits of window. Cause: ' + JSON.stringify(exception));
          expect().assertFail();
          done();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + JSON.stringify(exception))
          expect(exception.code).assertEqual(801);
          done();
        }
      }
      if (!currentDeviceIsRk) {
        let _width = windowLimits.maxWidth;
        let _height = windowLimits.maxHeight;
        console.log(msgStr + 'width is: ' + _width + ' ' + "height is: " + _height);
        subMin.resize(_width, _height, async (err: BusinessError) => {
          const errCode: number = err.code;
          if (errCode) {
            console.error(msgStr + 'Failed to change the window size. Cause:' + JSON.stringify(err));
            expect().assertFail();
            done();
            return;
          }
          console.info(msgStr + 'Succeeded in changing the window size.');
          await sleep(1000)
          let properties = subMin.getWindowProperties();
          console.log(msgStr + " getWindowProperties is: " + JSON.stringify(properties))
          expect(properties.windowRect.width).assertEqual(_width)
          expect(properties.windowRect.height).assertEqual(_height)
          await subMin.destroyWindow();
          done();
        });
      } else {
        await subMin.destroyWindow();
        done();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_3830
     * @tc.name      : testResize_SubWindow_Over_MaxLimits
     * @tc.desc      : Verify that the main window size is limited
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testResize_SubWindow_Over_MaxLimits', 0, async function () {
      let caseName = 'testResize_SubWindow_Over_MaxLimits';
      let msgStr = 'jsunittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let subMin = null;
      subMin = await windowStage.createSubWindow('testResize_SubWindow_Over_MaxLimits').catch((err: BusinessError) => {
        console.error('Failed to create the subwindow. Cause: ' + JSON.stringify(err));
      });
      expect(!!subMin).assertTrue();
      await subMin.loadContent('MainAbility/pages/second/second').catch((err) => {
        console.error(msgStr + 'Failed to loadContent the window. Cause: ' + JSON.stringify(err));
        expect().assertFail();
      });
      await subMin.moveWindowTo(0, 0).catch((err: BusinessError) => {
        console.error(msgStr + 'Failed to move the window. Cause: ' + JSON.stringify(err));
        expect().assertFail();
      });
      await subMin.showWindow().catch((err: BusinessError) => {
        console.error(msgStr + 'Failed to show the window. Cause: ' + JSON.stringify(err));
        expect().assertFail();
      });
      let windowLimits = null;
      try {
        windowLimits = subMin.getWindowLimits();
        console.log(msgStr + 'windowLimits is: ' + JSON.stringify(windowLimits));
      } catch (exception) {
        if (!currentDeviceIsRk) {
          console.error(msgStr + 'Failed to obtain the window limits of window. Cause: ' + JSON.stringify(exception));
          expect().assertFail();
        } else {
          console.log(msgStr + '当前设备类型不支持系统能力SystemCapability.Window.SessionManager')
          console.log(msgStr + JSON.stringify(exception))
          expect(exception.code).assertEqual(801);
        }
      }
      if (!currentDeviceIsRk) {
        let _width = windowLimits.maxWidth + 10;
        let _height = windowLimits.maxHeight + 20;
        console.log(msgStr + 'width is: ' + _width + ' ' + "height is: " + _height);
        await subMin.resize(_width, _height).then(async () => {
          console.info(msgStr + 'Succeeded in changing the window size.');
        }).catch((err: BusinessError) => {
          console.error(msgStr + 'Failed to change the window size. Cause: ' + JSON.stringify(err));
          expect().assertFail();
        });
        await sleep(1000)
        let properties = subMin.getWindowProperties();
        console.log(msgStr + " getWindowProperties is: " + JSON.stringify(properties))
        expect(properties.windowRect.width).assertEqual(windowLimits.maxWidth)
        expect(properties.windowRect.height).assertEqual(windowLimits.maxHeight)
      }
      await subMin.destroyWindow();
    })
  })
}
