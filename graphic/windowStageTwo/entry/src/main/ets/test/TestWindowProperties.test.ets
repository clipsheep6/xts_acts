import { hilog } from '@kit.PerformanceAnalysisKit';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import pipWindow from '@ohos.PiPWindow';
import { BusinessError } from '@ohos.base';
import window from '@ohos.window';
import common from '@ohos.app.ability.common';
import screenshot from '@ohos.screenshot';


export default function testWindowProperties(context: common.UIAbilityContext) {
  describe('windowProperties_test', () => {
    let windowStage: window.WindowStage;
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(() => {
      windowStage = AppStorage.get('windowStage') as window.WindowStage;
      // pipController = AppStorage.get('pipController') as PiPWindow.PiPController;
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
    })
    beforeEach(() => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(() => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0100
     * @tc.name      : testGetWindowPropertiesInMainWindow
     * @tc.desc      : get the current window properties
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetWindowPropertiesInMainWindow', 0, (done: Function) => {
      let caseName = 'TestGetWindowPropertiesInMainWindow';
      try {
        let windowClass = windowStage.getMainWindowSync();
        let properties = windowClass.getWindowProperties();
        console.info(`${caseName} Succeeded get window proerties`);
        expect(properties !== null).assertTrue();
        done();
      } catch (exception) {
        if(exception.code == 801) {
          console.info(`${caseName}: The current device type does not support, message: ${exception.message}`);
          expect(true).assertTrue();
          done();
        } else {
          console.error(`${caseName} Error. Cause code: ${exception.code}, message: ${exception.message}`);
          expect().assertFail();
          done();
        }
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0200
     * @tc.name      : testGetWindowPropertiesInSubWindow
     * @tc.desc      : get the current window properties
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetWindowPropertiesInSubWindow', 0, (done: Function) => {
      let caseName = 'TestGetWindowPropertiesInSubWindow';
      try {
        windowStage.createSubWindow('subWindow').then((data) => {
          console.info('Succeeded in creating the subWindow. Data:' + JSON.stringify(data));
          let properties = data.getWindowProperties();
          console.info(`${caseName} Succeeded get window proerties`);
          expect(properties !== null).assertTrue();
          done();
        }).catch((err: BusinessError) => {
          if(err.code == 801) {
            console.info(`${caseName}: The current device type does not support to create the Window, message: ${err.message}`);
            expect(true).assertTrue();
            done();
          } else {
            console.error(`${caseName}: Failed to create the Window. Cause code: ${err.code}, message: ${err.message}`);
            expect().assertFail();
            done();
          }
        });
      } catch (exception) {
        console.error(`${caseName}: Failed to create the window. Cause code: ${exception.code}, message: ${exception.message}`);
        expect().assertFail();
        done();
      }
    })

  })
}

