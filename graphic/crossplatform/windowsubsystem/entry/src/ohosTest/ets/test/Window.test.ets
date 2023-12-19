/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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
import window from '@ohos.window';
import { BusinessError } from '@ohos.base';
import common from '@ohos.app.ability.common';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import { Driver, ON } from '@ohos.UiTest'
import { startAbility, waitUiReadyMs } from '../utils/index'


export default function WindowTest() {
  describe('WindowTest', () => {
    console.log('====>################################WindowTest Test start*************');

    /**
     * beforeAll: PreWindowTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(async () => {
      console.info("====>beforeAll: PreWindow are executed.");
    });

    /**
     * beforeEach: PreWindowTest at the test case level, which are executed before each test case is executed.
     */
    beforeEach(() => {
      console.info("====>beforeEach: PreWindow is executed.");
    });

    /**
     * afterEach: Test case-level clearance conditions, which are executed after each test case is executed.
     */
    afterEach(() => {
      console.info("====>afterEach: Test case-level clearance conditions is executed.");
    });

    /**
     * afterAll: Test suite-level cleanup condition, which is executed after the test suite is executed.
     */
    afterAll(() => {
      console.info("====>afterAll: Test suite-level cleanup condition is executed");
    });


    /**
     * @tc.number TEST_WINDOW_001
     * @tc.name Test Window
     * @tc.desc Window life cycle.
     */
    it('TEST_WINDOW_001', 0, async (done: Function) => {
      try {
        await startAbility('com.example.windowsubsystem', 'EntryAbility')
        let driver = Driver.create()
        await driver.delayMs(waitUiReadyMs)
        let windowClass: window.Window | undefined = AppStorage.get('windowEntryAbility') as window.Window
        windowClass.on('windowEvent', (data: number) => {
          console.info('TEST_WINDOW_001. data:' + JSON.stringify(data));
          expect(data === 3 || data === 4).assertTrue()
        })
        const toMainAbility = await driver.findComponent(ON.id('toMainAbility'))
        await toMainAbility.click()
        await driver.delayMs(waitUiReadyMs)
        windowClass.off('windowEvent')
        done()
      } catch (exception) {
        console.error('Failed to TEST_WINDOW_001. Cause: ' + JSON.stringify(exception));
        done()
      }

    })

    /**
     * @tc.number TEST_WINDOW_002
     * @tc.name Test Window
     * @tc.desc Window life cycle.
     */
    it('TEST_WINDOW_002', 0, async (done: Function) => {
      try {
        await startAbility('com.example.windowsubsystem', 'EntryAbility')
        let driver = Driver.create()
        await driver.delayMs(waitUiReadyMs)
        let windowClass: window.Window | undefined = AppStorage.get('windowEntryAbility') as window.Window
        windowClass.on('windowEvent', (data: number) => {
          console.info('TEST_WINDOW_002. data:' + JSON.stringify(data));
          if (data === 1 || data === 2) {
            expect(data === 1 || data === 2).assertTrue()
          }
        })
        const toMainAbility = await driver.findComponent(ON.id('toMainAbility'))
        await toMainAbility.click()
        await driver.delayMs(waitUiReadyMs)
        const toEntryAbility = await driver.findComponent(ON.id('toEntryAbility'))
        await toEntryAbility.click()
        await driver.delayMs(waitUiReadyMs)
        windowClass.off('windowEvent')
        done()
      } catch (exception) {
        console.error('Failed to TEST_WINDOW_002. Cause: ' + JSON.stringify(exception));
        done()
      }

    })

    /**
     * @tc.number TEST_WINDOW_003
     * @tc.name Test Window
     * @tc.desc Turn off listening for click events outside this window area.
     */
    it('TEST_WINDOW_003', 0, async (done: Function) => {
      try {
        await startAbility('com.example.windowsubsystem', 'EntryAbility')
        let driver = Driver.create()
        await driver.delayMs(waitUiReadyMs)
        let windowClass: window.Window | undefined = AppStorage.get('windowEntryAbility') as window.Window
        let flag: Boolean = false
        let cl1 = (data: number) => {
          console.info('TEST_WINDOW_003. cl1data:' + JSON.stringify(data));
          flag = true
        }
        let cl2 = (data: number) => {
          console.info('TEST_WINDOW_003. cl2data:' + JSON.stringify(data));
          console.info('TEST_WINDOW_003. flag:' + JSON.stringify(flag));
          expect(flag).assertFalse()
        }
        windowClass.on('windowEvent', cl1)
        windowClass.on('windowEvent', cl2)
        windowClass.off('windowEvent', cl1)
        const toMainAbility = await driver.findComponent(ON.id('toMainAbility'))
        await toMainAbility.click()
        await driver.delayMs(waitUiReadyMs)
        windowClass.off('windowEvent', cl2)
        done()
      } catch (exception) {
        console.error('Failed to TEST_WINDOW_003. Cause: ' + JSON.stringify(exception));
        done()
      }
    })

    /**
     * @tc.number TEST_WINDOW_004
     * @tc.name Test Window
     * @tc.desc Get the current window color gamut mode.
     */
    it('TEST_WINDOW_004', 0, async (done: Function) => {
      try {
        await startAbility('com.example.windowsubsystem', 'EntryAbility')
        let driver = Driver.create()
        await driver.delayMs(waitUiReadyMs)
        let windowClass: window.Window | undefined = AppStorage.get('windowEntryAbility') as window.Window

        let value = windowClass.getWindowColorSpace();
        console.log('getWindowColorSpace:', value)
        expect(value === 0 || value === 1).assertTrue()
        done()
      } catch (exception) {
        console.error('Failed to TEST_WINDOW_004. Cause: ' + JSON.stringify(exception));
        done()
      }
    })

    /**
     * @tc.number TEST_WINDOW_005
     * @tc.name Test Window
     * @tc.desc Set the current window to default color gamut mode and use callback asynchronous callback
     */
    it('TEST_WINDOW_005', 0, async (done: Function) => {
      try {
        await startAbility('com.example.windowsubsystem', 'EntryAbility')
        let driver = Driver.create()
        await driver.delayMs(waitUiReadyMs)
        let windowClass: window.Window | undefined = AppStorage.get('windowEntryAbility') as window.Window
        windowClass.setWindowColorSpace(window.ColorSpace.DEFAULT, (err: BusinessError) => {
          const errCode: number = err.code;
          if (errCode) {
            console.error('Failed to set window colorspace. Cause:' + JSON.stringify(err));
            return;
          }
          console.info('Succeeded in setting window colorspace.');
          let value = (windowClass as window.Window).getWindowColorSpace();
          console.log('setWindowColorSpace:', value)
          expect(value === 0).assertTrue()
        });
        done()
      } catch (exception) {
        console.error('Failed to TEST_WINDOW_005. Cause: ' + JSON.stringify(exception));
        done()
      }
    })

    /**
     * @tc.number TEST_WINDOW_006
     * @tc.name Test Window
     * @tc.desc Set the current window to wide color gamut mode and use callback asynchronous callback
     */
    it('TEST_WINDOW_006', 0, async (done: Function) => {
      try {
        await startAbility('com.example.windowsubsystem', 'EntryAbility')
        let driver = Driver.create()
        await driver.delayMs(waitUiReadyMs)
        let windowClass: window.Window | undefined = AppStorage.get('windowEntryAbility') as window.Window
        windowClass.setWindowColorSpace(window.ColorSpace.WIDE_GAMUT, (err: BusinessError) => {
          const errCode: number = err.code;
          if (errCode) {
            console.error('Failed to set window colorspace. Cause:' + JSON.stringify(err));
            return;
          }
          console.info('Succeeded in setting window colorspace.');
          let value = (windowClass as window.Window).getWindowColorSpace();
          console.log('setWindowColorSpace:', value)
          expect(value === 1).assertTrue()
        });
        done()
      } catch (exception) {
        console.error('Failed to TEST_WINDOW_006. Cause: ' + JSON.stringify(exception));
        done()
      }
    })

    /**
     * @tc.number TEST_WINDOW_007
     * @tc.name Test Window
     * @tc.desc Set the current window to default color gamut mode and use Promise asynchronous callback.
     */
    it('TEST_WINDOW_007', 0, async (done: Function) => {
      try {
        await startAbility('com.example.windowsubsystem', 'EntryAbility')
        let driver = Driver.create()
        await driver.delayMs(waitUiReadyMs)
        let windowClass: window.Window | undefined = AppStorage.get('windowEntryAbility') as window.Window
        let promise = windowClass.setWindowColorSpace(window.ColorSpace.DEFAULT);
        promise.then(() => {
          console.info('Succeeded in setting window colorspace.');
          let value = (windowClass as window.Window).getWindowColorSpace();
          console.log('setWindowColorSpace:', value)
          expect(value === 0).assertTrue()
        }).catch((err: BusinessError) => {
          console.error('Failed to set window colorspace. Cause: ' + JSON.stringify(err));
        });
        done()
      } catch (exception) {
        console.error('Failed to TEST_WINDOW_007. Cause:' + JSON.stringify(exception));
        done()
      }
    })

    /**
     * @tc.number TEST_WINDOW_008
     * @tc.name Test Window
     * @tc.desc Set the current window to wide gamut mode and use Promise asynchronous callback.
     */
    it('TEST_WINDOW_008', 0, async (done: Function) => {
      try {
        await startAbility('com.example.windowsubsystem', 'EntryAbility')
        let driver = Driver.create()
        await driver.delayMs(waitUiReadyMs)
        let windowClass: window.Window | undefined = AppStorage.get('windowEntryAbility') as window.Window
        let promise = windowClass.setWindowColorSpace(window.ColorSpace.WIDE_GAMUT);
        promise.then(() => {
          console.info('Succeeded in setting window colorspace.');
          let value = (windowClass as window.Window).getWindowColorSpace();
          console.log('setWindowColorSpace:', value)
          expect(value === 1).assertTrue()
        }).catch((err: BusinessError) => {
          console.error('Failed to set window colorspace. Cause: ' + JSON.stringify(err));
        });
        done()
      } catch (exception) {
        console.error('Failed to TEST_WINDOW_008. Cause:' + JSON.stringify(exception));
        done()
      }
    })

    /**
     * @tc.number TEST_WINDOW_009
     * @tc.name Test Window
     * @tc.desc Get the current window color gamut mode
     */
    it('TEST_WINDOW_009', 0, async (done: Function) => {
      try {
        // 未创建窗口
        let windowClass: window.Window = window.findWindow("uncreatedWindow");
        let value = windowClass.getWindowColorSpace();
        console.log('getWindowColorSpace:', value)
        expect(value === 0 || value === 1).assertTrue()
        done()
      } catch (err) {
        expect(err.code === 1300002).assertTrue()
        console.error('Failed to TEST_WINDOW_009. Cause: ' + JSON.stringify(err));
        done()
      }
    })

    /**
     * @tc.number TEST_WINDOW_010
     * @tc.name Test Window
     * @tc.desc Set the current window to default color gamut mode and use callback asynchronous callback
     */
    it('TEST_WINDOW_010', 0, async (done: Function) => {
      try {
        let windowClass: window.Window = window.findWindow("uncreatedWindow");
        windowClass.setWindowColorSpace(window.ColorSpace.DEFAULT, (err: BusinessError) => {
          const errCode: number = err.code;
          if (errCode) {
            console.error('Failed to set window colorspace. Cause:' + JSON.stringify(err));
            return;
          }
          console.info('Succeeded in setting window colorspace.');
          let value = windowClass.getWindowColorSpace();
          console.log('setWindowColorSpace:', value)
          expect(value === 0).assertTrue()
        });
        done()
      } catch (err) {
        expect(err.code === 1300002).assertTrue()
        console.error('Failed to TEST_WINDOW_010. Cause: ' + JSON.stringify(err));
        done()
      }
    })

    /**
     * @tc.number TEST_WINDOW_011
     * @tc.name Test Window
     * @tc.desc Set the current window to wide color gamut mode and use callback asynchronous callback.
     */
    it('TEST_WINDOW_011', 0, async (done: Function) => {
      try {
        let windowClass: window.Window = window.findWindow("uncreatedWindow");
        windowClass.setWindowColorSpace(window.ColorSpace.WIDE_GAMUT, (err: BusinessError) => {
          const errCode: number = err.code;
          if (errCode) {
            console.error('Failed to set window colorspace. Cause:' + JSON.stringify(err));
            return;
          }
          console.info('Succeeded in setting window colorspace.');
          let value = windowClass.getWindowColorSpace();
          console.log('setWindowColorSpace:', value)
          expect(value === 1).assertTrue()
        });
        done()
      } catch (err) {
        expect(err.code === 1300002).assertTrue()
        console.error('Failed to TEST_WINDOW_011. Cause: ' + JSON.stringify(err));
        done()
      }
    })

    /**
     * @tc.number TEST_WINDOW_012
     * @tc.name Test Window
     * @tc.desc Set the current window to default color gamut mode and use Promise asynchronous callback.
     */
    it('TEST_WINDOW_012', 0, async (done: Function) => {
      try {
        let windowClass: window.Window = window.findWindow("uncreatedWindow");
        let promise = windowClass.setWindowColorSpace(window.ColorSpace.DEFAULT);
        promise.then(() => {
          console.info('Succeeded in setting window colorspace.');
          let value = windowClass.getWindowColorSpace();
          console.log('setWindowColorSpace:', value)
          expect(value === 0).assertTrue()
        }).catch((err: BusinessError) => {
          console.error('Failed to set window colorspace. Cause: ' + JSON.stringify(err));
        });
        done()
      } catch (err) {
        expect(err.code === 1300002).assertTrue()
        console.error('Failed to TEST_WINDOW_012. Cause: ' + JSON.stringify(err));
        done()
      }
    })

    /**
     * @tc.number TEST_WINDOW_013
     * @tc.name Test Window
     * @tc.desc Set the current window to wide gamut mode and use Promise asynchronous callback.
     */
    it('TEST_WINDOW_013', 0, async (done: Function) => {
      try {
        let windowClass: window.Window = window.findWindow("uncreatedWindow");
        let promise = windowClass.setWindowColorSpace(window.ColorSpace.WIDE_GAMUT);
        promise.then(() => {
          console.info('Succeeded in setting window colorspace.');
          let value = windowClass.getWindowColorSpace();
          console.log('setWindowColorSpace:', value)
          expect(value === 1).assertTrue()
        }).catch((err: BusinessError) => {
          console.error('Failed to set window colorspace. Cause: ' + JSON.stringify(err));
        });
        done()
      } catch (err) {
        expect(err.code === 1300002).assertTrue()
        console.error('Failed to TEST_WINDOW_013. Cause: ' + JSON.stringify(err));
        done()
      }
    })

    console.log('====>################################WindowTest Test end*************');
  })
}