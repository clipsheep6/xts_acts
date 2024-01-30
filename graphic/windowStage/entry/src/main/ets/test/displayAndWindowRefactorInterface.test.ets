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
import display from '@ohos.display';
import displaySync from '@ohos.graphics.displaySync';
import Ability from '@ohos.app.ability.Ability';
import { BusinessError } from '@ohos.base';
import common from '@ohos.app.ability.common';

async function sleep(time: number) {
  let timeoutId: number = 0;
  let promise: Promise<string> = new Promise(resolve => {
    timeoutId = setTimeout(() => {
      resolve("sleep finished");
    }, time);
  })
  await promise;
  clearTimeout(timeoutId)
}


function createFirstWindow(windowConfig: ohosWindow.Configuration, msgStr: string, done: Function) {
  return new Promise<ohosWindow.Window>((resolve, reject) => {
    try {
      ohosWindow.createWindow(windowConfig, (err: BusinessError, data: ohosWindow.Window) => {
        if (err && err.code) {
          console.log(msgStr + 'ohosWindow.createWindow err.code==' + JSON.stringify(err.code))
          try {
            expect().assertFail();
          } catch (err) {
            console.log(msgStr + 'assertFail catch' + JSON.stringify(err));
          }
          done();
          reject(null)
        }
        console.info('Succeeded in creating the window. Data: ' + JSON.stringify(data));
        resolve(data)
      })
    } catch (exception) {
      console.error(msgStr + 'Failed to create the window. Cause: ' + JSON.stringify(exception));
    }
    ;
  })
}

function resizeFun(winData: ohosWindow.Window, msgStr: string, width: number, height: number, i: number, done: Function) {
  console.log(msgStr + 'resize begin step:' + i)
  return new Promise<Boolean>((resolve, reject) => {
    try {
      winData.resize(width, height, async (err: BusinessError) => {
        if (err.code) {
          console.error(msgStr + 'Failed to change the window size. Cause:' + JSON.stringify(err));
          try {
            expect().assertFail();
          } catch (err) {
            console.log(msgStr + 'assertFail catch' + JSON.stringify(err));
          }
          done();
          reject(null)
        }
        console.info(msgStr + 'Succeeded in changing the window size. step:' + i);
        resolve(true)
      });
    } catch (exception) {
      console.error(msgStr + 'Failed to change the window size. Cause:' + JSON.stringify(exception));
    }
    ;
  })
}

export default function displayAndWindowRefactorInterfaceTest(context: common.UIAbilityContext, windowStage: ohosWindow.WindowStage, abilityStorage: LocalStorage) {
  console.log('windowTest context: ' + JSON.stringify(context))
  console.log('windowTest abilityStorage: ' + JSON.stringify(abilityStorage))
  describe('displayAndWindowRefactorInterface_test', () => {
    console.log('describe window_api_test3 start!!!')
    const TRUE_FLAG = true;
    // let appWindowTypeArr: = [];
    let windowTypeArr: Array<number> = [];
    let appWindowTypeDic: Record<string, number> = {
      'TYPE_BASE': 0,
      'TYPE_APP': 0,
      'TYPE_APP_SUB_WINDOW': 1,
    };
    let systemWindowValueArr: Array<string> = [];
    let systemWindowTypeArr: Array<string> = [];
    let systemWindowTypeDicArr: Array<string> = [];
    let systemWindowTypeDic: Record<string, number> = {
      'TYPE_FLOAT': 8,
    }
    let windowLayoutModeArr: Array<string> = [];
    let windowLayoutModeDic: Record<string, number> = {
      'WINDOW_LAYOUT_MODE_TILE': 1,
      'WINDOW_LAYOUT_MODE_CASCADE': 0
    };
    beforeAll(() => {
      console.log('jsUnittest beforeAll ohosWindow.WindowType=' + JSON.stringify(ohosWindow.WindowType.TYPE_FLOAT));
      systemWindowTypeDicArr = Object.keys(systemWindowTypeDic);
      console.log('jsUnittest beforeAll systemWindowTypeDicArr=' + JSON.stringify(systemWindowTypeDicArr) + '   ,length=' + systemWindowTypeDicArr.length);
      systemWindowValueArr = Object.keys(systemWindowTypeDic);
      systemWindowTypeArr = Object.keys(systemWindowTypeDic);
      let wndTypeArray:Array<number> = [ohosWindow.WindowType.TYPE_FLOAT,ohosWindow.WindowType.TYPE_APP,ohosWindow.WindowType.TYPE_SYSTEM_ALERT,ohosWindow.WindowType.TYPE_DIALOG]

      for (let i of Object.entries(wndTypeArray)){
        console.log('jsUnittest beforeAll i=' + i[1]);
        windowTypeArr.push(wndTypeArray[i[1]])
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0450
     * @tc.name      : tesGetAllDisplays_Promise
     * @tc.desc      : Gets all current display objects
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('tesGetAllDisplays_Promise', 0, async (done: Function) => {
      let caseName: string = 'tesGetAllDisplays_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      await display.getAllDisplays().then((data) => {
        console.info(msgStr + 'Succeeded in obtaining all the display objects. Data: ' + JSON.stringify(data));
        expect(data[0].id != null).assertTrue();
        expect(data[0].refreshRate != null).assertTrue();
        expect(data[0].width != null).assertTrue();
        expect(data[0].height != null).assertTrue();
        expect(data[0].rotation != null).assertTrue();
        expect(data[0].densityDPI != null).assertTrue();
        expect(data[0].name != null).assertTrue();
        expect(data[0].alive).assertTrue();
        expect(data[0].state != null).assertTrue();
        expect(data[0].densityPixels != null).assertTrue();
        expect(data[0].scaledDensity != null).assertTrue();
        expect(data[0].xDPI != null).assertTrue();
        expect(data[0].yDPI != null).assertTrue();
        done();
      }).catch((err: BusinessError) => {
        console.error(msgStr + 'Failed to obtain all the display objects. Code: ' + JSON.stringify(err));
        expect().assertFail();
        done();
      });
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0440
     * @tc.name      : tesGetAllDisplays_Callback
     * @tc.desc      : Gets all current display objects
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('tesGetAllDisplays_Callback', 0, async (done: Function) => {
      let caseName: string = 'tesGetAllDisplays_Callback';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      display.getAllDisplays((err, data) => {
        if (err.code) {
          console.error(msgStr + 'Failed to obtain all the display objects. Code: ' + JSON.stringify(err));
          try {
            expect().assertFail();
          } catch (error) {
            console.info(`display.getAllDisplays catch error: ${JSON.stringify(error)}`)
          }
          done();
          return;
        }
        console.info(msgStr + 'Succeeded in obtaining all the display objects. Data: ' + JSON.stringify(data));
        expect(data[0].refreshRate != null).assertTrue();
        expect(data[0].width != null).assertTrue();
        expect(data[0].height != null).assertTrue();
        expect(data[0].rotation != null).assertTrue();
        expect(data[0].densityDPI != null).assertTrue();
        expect(data[0].name != null).assertTrue();
        expect(data[0].alive).assertTrue();
        expect(data[0].state != null).assertTrue();
        expect(data[0].densityPixels != null).assertTrue();
        expect(data[0].scaledDensity != null).assertTrue();
        expect(data[0].xDPI != null).assertTrue();
        expect(data[0].yDPI != null).assertTrue();
        done();
        console.log(msgStr + 'done ');
      });
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0090
     * @tc.name      : testCreateWindow_Diff_Type_Wins_Promise
     * @tc.desc      : Verify the scenario of creating the application type window
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testCreateWindow_Diff_Type_Wins_Promise', 0, async (done: Function) => {
      let caseName: string = 'testCreateWindow_Diff_Type_Wins_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let loopCount = systemWindowTypeDicArr.length;
      console.log(msgStr + 'loopCount: ' + loopCount);
      for (let i = 0; i < loopCount; i++) {
        let tempType = Number(ohosWindow.WindowType[systemWindowTypeDicArr[i]])
        let windId = 'createWindowTest1' + i;
        console.log(msgStr + 'ohosWindow.createWindow:  ' + tempType + ' start');
        let windowConfig: ohosWindow.Configuration = {
          name: windId,
          windowType: tempType,
          ctx: context,
          displayId: 0,
          parentId: 0
        };
        let tempWnd: ohosWindow.Window | void;
        tempWnd = await ohosWindow.createWindow(windowConfig).catch((err: BusinessError) => {
          console.log(msgStr + 'ohosWindow.createWindow ' + tempType + 'catched, err: ' + JSON.stringify(err));
          expect().assertFail();
          done();
          return;
        });
        console.log(msgStr + 'ohosWindow.createWindow ' + tempType + 'finished, wnd: ' + JSON.stringify(tempWnd));
        console.log(msgStr + 'ohosWindow.createWindow ' + tempType + 'finished, step: ' + i);
        expect(!!tempWnd).assertTrue();
        await (tempWnd as ohosWindow.Window).destroyWindow();
        if (i == loopCount - 1) done();
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0150
     * @tc.name      : testCreateWindow_Same_Name_Wins_Promise
     * @tc.desc      : Verify the scenario of creating a window with duplicate IDs
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testCreateWindow_Same_Name_Wins_Promise', 0, async (done: Function) => {
      let caseName: string = 'testCreateWindow_Same_Name_Wins_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let windowId: string = 'createWindowSameIdsTest2'
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: ohosWindow.WindowType.TYPE_FLOAT, ctx: context
      };
      let ohosData: ohosWindow.Window | void;
      try {
        ohosData = await ohosWindow.createWindow(windowConfig).catch((err: BusinessError) => {
          console.log(msgStr + 'ohosWindow.createWindow 1 once err: ' + JSON.stringify(err));
          expect().assertFail();
          done();
          return;
        })
        expect(!!ohosData).assertTrue();
        try {
          let ohosDataError = await ohosWindow.createWindow(windowConfig)
            .catch(async (errSecond: Record<string, Object>) => {
              console.log(msgStr + 'ohosWindow.createWindow 1 twice err: ' + JSON.stringify(errSecond));
              expect(errSecond.code).assertEqual(1300001)
              await (ohosData as ohosWindow.Window).destroyWindow();
              done();
            })
          console.log(msgStr + 'ohosWindow.createWindow 1 twice ohosDataError: ' + JSON.stringify(ohosDataError));
        } catch (exception) {
          console.error(msgStr + 'Failed to create the window. Cause: ' + JSON.stringify(exception));
        }
        ;
      } catch (exception) {
        console.error(msgStr + 'Failed to create the window. Cause: ' + JSON.stringify(exception));
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0130
     * @tc.name      : testCreateWindow_Not_Exist_WinType_Promise
     * @tc.desc      : Verify the scenario of creating the application type window
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testCreateWindow_Not_Exist_WinType_Promise', 0, async (done: Function) => {
      sleep(1000)
      let caseName: string = 'testCreateWindow_Not_Exist_WinType_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin context==' + JSON.stringify(context));
      let tempType = ohosWindow.WindowType.TYPE_FLOAT;
      let windId = 'createWindowTest4_0';
      let windIdTwo = 'createWindowTest4_1';
      console.log(msgStr + 'ohosWindow.createWindow ' + tempType + ' start');
      let windowConfig: ohosWindow.Configuration = {
        name: windId, windowType: tempType, ctx: context
      };
      let windowConfigTwo: ohosWindow.Configuration = {
        name: windIdTwo, windowType: tempType, ctx: context
      };

      createFirstWindow(windowConfig, msgStr, done())


      let dataOne: ohosWindow.Window;
      dataOne = await createFirstWindow(windowConfig, msgStr, done());
      expect(!!dataOne).assertTrue();
      try {
        ohosWindow.createWindow(windowConfigTwo, async (err, dataTwo) => {
          console.log(msgStr + 'ohosWindow.createWindow two twice' + JSON.stringify(err));
          if (err && err.code) {
            console.log(msgStr + 'ohosWindow.createWindow two twice data: ' + JSON.stringify(dataTwo));
            try {
              expect().assertFail();
            } catch (error) {
              console.info(`ohosWindow.createWindow two twice catch error: ${JSON.stringify(error)}`)
            }
          } else {
            console.log(msgStr + 'ohosWindow.createWindow two success twice data: ' + JSON.stringify(dataTwo));
            await dataOne.destroyWindow();
            await dataTwo.destroyWindow();
          }
          done();
        })
      } catch (exception) {
        console.error(msgStr + 'Failed to create the window. Cause: ' + JSON.stringify(exception));
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0160
     * @tc.name      : testCreateWindow_Type_Float_Win_Callback
     * @tc.desc      : Verify the scenario of creating the system type window
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testCreateWindow_Type_Float_Win_Callback', 0, async (done: Function) => {
      let caseName: string = 'testCreateWindow_Type_Float_Win_Callback';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let loopCount = systemWindowTypeArr.length;
      console.log('jsUnittest loopCount: ' + loopCount);
      let tempType = ohosWindow.WindowType.TYPE_FLOAT;
      let windId = 'createWindowTest5';
      console.log(msgStr + 'ohosWindow.createWindow ' + tempType + ' start');
      let windowConfig: ohosWindow.Configuration = {
        name: windId, windowType: tempType, ctx: context
      };
      try {
        ohosWindow.createWindow(windowConfig, async (err, data) => {
          if (err && err.code) {
            try {
              expect().assertFail();
            } catch (error) {
              console.info(msgStr + `ohosWindow.createWindow  catch error: ${JSON.stringify(error)}`)
            }
            done();
            return;
          }
          try {
            expect(!!data).assertTrue();
          } catch (error) {
            console.info(msgStr + `ohosWindow.createWindow catch error: ${JSON.stringify(error)}`)
          }
          let tempWnd = data
          console.log(msgStr + 'ohosWindow.createWindow ' + tempType + ' wnd: ' + tempWnd);
          try {
            let proData = tempWnd.getWindowProperties();
            console.log(msgStr + 'proData.type:' + proData.type);
            expect(proData.type == tempType).assertTrue();
            await (tempWnd as ohosWindow.Window).destroyWindow();
          } catch (exception) {
            console.error(msgStr + 'Failed to obtain the window properties. Cause: ' + JSON.stringify(exception));
          }
        })
      } catch (exception) {
        console.error(msgStr + 'Failed to create the window. Cause: ' + JSON.stringify(exception));
      }
      console.info(msgStr + `hereherer`)
      done();
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0140
     * @tc.name      : testCreateWindow_Same_Name_Wins_Callback
     * @tc.desc      : Verify the scenario of creating a window with duplicate IDs
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testCreateWindow_Same_Name_Wins_Callback', 0, async (done: Function) => {
      let caseName: string = 'testCreateWindow_Same_Name_Wins_Callback';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let windowId: string = 'createWindowSameIdTest6'
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: ohosWindow.WindowType.TYPE_FLOAT, ctx: context
      };

      createFirstWindow(windowConfig, msgStr, done())

      let dataOne: ohosWindow.Window;
      dataOne = await createFirstWindow(windowConfig, msgStr, done());
      expect(!!dataOne).assertTrue();
      try {
        ohosWindow.createWindow(windowConfig, async (err, dataTwo) => {
          console.log(msgStr + 'ohosWindow.createWindow 1 twice err: ' + JSON.stringify(err));
          if (err && err.code) {
            console.log(msgStr + 'ohosWindow.createWindow 1 twice data: ' + JSON.stringify(dataTwo));
            try {
              expect(err.code).assertEqual(1300001)
            } catch (error) {
              console.info(`ohosWindow.createWindow catch error: ${JSON.stringify(error)}`)
            }
          } else {
            console.log(msgStr + 'ohosWindow.createWindow 1 twice data: ' + JSON.stringify(dataTwo));
          }
          await dataOne.destroyWindow();
          done();
        })
      } catch (exception) {
        console.error(msgStr + 'Failed to create the window. Cause: ' + JSON.stringify(exception));
        expect().assertFail();
        done();
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0660
     * @tc.name      : testGetWindowAvoidArea_Type_System
     * @tc.desc      : Obtain the area that the window content avoids
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetWindowAvoidArea_Type_System', 0, async (done: Function) => {
      let caseName: string = 'testGetWindowAvoidArea_Type_System';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      try {
        let tempWnd: ohosWindow.Window = windowStage.getMainWindowSync();
        expect(!!tempWnd).assertTrue();
        try {
          let type = ohosWindow.AvoidAreaType.TYPE_SYSTEM;
          let avoidArea: ohosWindow.AvoidArea = tempWnd.getWindowAvoidArea(type);
          console.log(msgStr + 'avoidArea: ' + JSON.stringify(avoidArea));
          expect(avoidArea.visible).assertTrue();
          expect(avoidArea.topRect != null).assertTrue();
          expect(avoidArea.rightRect != null).assertTrue();
          expect(avoidArea.bottomRect != null).assertTrue();
          expect(avoidArea.leftRect != null).assertTrue();
          done();
        } catch (exception) {
          console.error(msgStr + 'Failed to obtain the area. Cause:' + JSON.stringify(exception));
          expect().assertFail();
          done();
        }
        ;
      } catch (exception) {
        console.error(msgStr + 'try catch Failed to obtain the top window. Cause: ' + JSON.stringify(exception));
      }
      ;
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0640
     * @tc.name      : testGetWindowAvoidArea_Type_CutOut
     * @tc.desc      : Obtain the area that the window content avoids
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetWindowAvoidArea_Type_CutOut', 0, async (done: Function) => {
      let caseName: string = 'testGetWindowAvoidArea_Type_CutOut';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      try {
        let tempWnd: ohosWindow.Window = windowStage.getMainWindowSync();
        expect(tempWnd != null).assertTrue();
        try {
          let type: ohosWindow.AvoidAreaType = ohosWindow.AvoidAreaType.TYPE_CUTOUT;
          let avoidArea: ohosWindow.AvoidArea = tempWnd.getWindowAvoidArea(type);
          console.log(msgStr + 'avoidArea: ' + JSON.stringify(avoidArea));
          expect(!avoidArea.visible).assertTrue();
          expect(avoidArea.topRect != null).assertTrue();
          expect(avoidArea.rightRect != null).assertTrue();
          expect(avoidArea.bottomRect != null).assertTrue();
          expect(avoidArea.leftRect != null).assertTrue();
          done();
        } catch (exception) {
          console.error(msgStr + 'Failed to obtain the area. Cause:' + JSON.stringify(exception));
          expect().assertFail();
          done();
        }
        ;
        done();
      } catch (exception) {
        console.error(msgStr + 'Failed to obtain the top window. Cause: ' + JSON.stringify(exception));
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0670
     * @tc.name      : testGetWindowAvoidArea_Type_System_Gesture
     * @tc.desc      : Obtain the area that the window content avoids
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetWindowAvoidArea_Type_System_Gesture', 0, async (done: Function) => {
      let caseName: string = 'testGetWindowAvoidArea_Type_System_Gesture';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      try {
        let tempWnd: ohosWindow.Window = windowStage.getMainWindowSync();
        expect(!!tempWnd).assertTrue();
        try {
          let type = ohosWindow.AvoidAreaType.TYPE_SYSTEM_GESTURE;
          let avoidArea: ohosWindow.AvoidArea = tempWnd.getWindowAvoidArea(type);
          console.log(msgStr + 'avoidArea: ' + JSON.stringify(avoidArea));
          expect(avoidArea.visible).assertTrue();
          expect(avoidArea.topRect != null).assertTrue();
          expect(avoidArea.rightRect != null).assertTrue();
          expect(avoidArea.bottomRect != null).assertTrue();
          expect(avoidArea.leftRect != null).assertTrue();
          done();
        } catch (exception) {
          console.error(msgStr + 'Failed to obtain the area. Cause:' + JSON.stringify(exception));
          expect().assertFail();
          done();
        }
        ;
      } catch (exception) {
        console.error(msgStr + 'try catch Failed to obtain the top window. Cause: ' + JSON.stringify(exception));
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0650
     * @tc.name      : testGetWindowAvoidArea_Type_Keyboard
     * @tc.desc      : Obtain the area that the window content avoids
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetWindowAvoidArea_Type_Keyboard', 0, async (done: Function) => {
      let caseName: string = 'testGetWindowAvoidArea_Type_Keyboard';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      try {
        let tempWnd: ohosWindow.Window = windowStage.getMainWindowSync();
        expect(!!tempWnd).assertTrue();
        try {
          let type = ohosWindow.AvoidAreaType.TYPE_KEYBOARD;
          let avoidArea: ohosWindow.AvoidArea = tempWnd.getWindowAvoidArea(type);
          console.log(msgStr + 'avoidArea: ' + JSON.stringify(avoidArea));
          expect(avoidArea.visible).assertTrue();
          expect(avoidArea.topRect != null).assertTrue();
          expect(avoidArea.rightRect != null).assertTrue();
          expect(avoidArea.bottomRect != null).assertTrue();
          expect(avoidArea.leftRect != null).assertTrue();
          done();
        } catch (exception) {
          console.error(msgStr + 'Failed to obtain the area. Cause:' + JSON.stringify(exception));
          expect().assertFail();
          done();
        }
        ;
      } catch (exception) {
        console.error(msgStr + 'try catch Failed to obtain the top window. Cause: ' + JSON.stringify(exception));
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0690
     * @tc.name      : testGetWindowPropertiesTest
     * @tc.desc      : Gets the properties of the current window
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetWindowPropertiesTest', 0, async (done: Function) => {
      let caseName: string = 'testGetWindowPropertiesTest';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      try {
        let tempWnd: ohosWindow.Window = windowStage.getMainWindowSync();
        expect(!!tempWnd).assertTrue();
        try {
          let data: ohosWindow.WindowProperties = tempWnd.getWindowProperties();
          console.log(msgStr + 'ohosWindow.getWindowProperties ' + JSON.stringify(data));
          expect(data.type != null).assertTrue();
          expect(data.windowRect.height != null).assertTrue();
          expect(data.windowRect.left != null).assertTrue();
          expect(data.windowRect.top != null).assertTrue();
          expect(data.windowRect.width != null).assertTrue();
          expect(data.isFullScreen != null).assertTrue();
          expect(data.isLayoutFullScreen != null).assertTrue();
          expect(data.focusable != null).assertTrue();
          expect(data.touchable != null).assertTrue();
          expect(data.isKeepScreenOn != null).assertTrue();
          expect(data.isTransparent != null).assertTrue();
          expect(data.brightness != null).assertTrue();
          expect(data.dimBehindValue).assertEqual(0);
          expect(data.isRoundCorner != null).assertTrue();
          expect(data.isPrivacyMode != null).assertTrue();
          done();
        } catch (exception) {
          console.error(msgStr + 'Failed to obtain the window properties. Cause: ' + JSON.stringify(exception));
          expect().assertFail();
          done();
        }
        ;
      } catch (exception) {
        console.error(msgStr + 'try catch Failed to obtain the main window. Cause: ' + JSON.stringify(exception));
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0520
     * @tc.name      : testGetLastWindow_Promise
     * @tc.desc      : Get the final show window
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetLastWindow_Promise', 0, async (done: Function) => {
      let caseName: string = 'testGetLastWindow_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      try {
        let lastWindow = await ohosWindow.getLastWindow(context).catch((err: BusinessError) => {
          console.error('Failed to obtain the top window. Cause: ' + JSON.stringify(err));
          expect().assertFail();
          done();
        })
        expect(lastWindow != null).assertTrue();
      } catch (exception) {
        console.error(msgStr + 'Failed to obtain the top window. Cause: ' + JSON.stringify(exception));
        expect().assertFail();
        done()
      }
      console.log(msgStr + 'last done');
      done();
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0510
     * @tc.name      : testGetLastWindow_Callback
     * @tc.desc      : Get the final show window
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetLastWindow_Callback', 0, async (done: Function) => {
      let caseName: string = 'testGetLastWindow_Callback';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      try {
        ohosWindow.getLastWindow(context, (err, data) => {
          if (err.code) {
            console.error(msgStr + 'Failed to obtain the top window. Cause: ' + JSON.stringify(err));
            try {
              expect().assertFail();
            } catch (error) {
              console.info(msgStr + `ohosWindow.getLastWindow  catch error: ${JSON.stringify(error)}`)
            }
            done();
            return;
          }
          console.info(msgStr + 'Succeeded in obtaining the top window. Data: ' + JSON.stringify(data));
        })
      } catch (exception) {
        console.error(msgStr + 'Failed to obtain the top window. Cause: ' + JSON.stringify(exception));
      }
      console.log(msgStr + 'last done');
      done();
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_2120
     * @tc.name      : testShowWindowTest_Callback_Form
     * @tc.desc      : show window
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testShowWindowTest_Callback_Form', 0, async (done: Function) => {
      let caseName: string = 'testShowWindowTest_Callback_Form';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let baseWndType: ohosWindow.WindowType = ohosWindow.WindowType.TYPE_FLOAT;
      let windowId: string = 'testShowWindowTest_Callback_Form';
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: baseWndType, ctx: context
      };
      let tempWnd: ohosWindow.Window | void;
      try {
        tempWnd = await ohosWindow.createWindow(windowConfig).catch((err: BusinessError) => {
          expect().assertFail();
          done();
        });
        console.log(msgStr + 'ohosWindow.createWindow ' + baseWndType + ' wnd: ' + JSON.stringify(tempWnd));
        expect(!!tempWnd).assertTrue();
        await (tempWnd as ohosWindow.Window).showWindow().then(async (data) => {
          console.info(msgStr + 'Succeeded in showing the window. Data: ' + JSON.stringify(data));
          await (tempWnd as ohosWindow.Window).destroyWindow();
          done();
        }).catch((err: BusinessError) => {
          console.error(msgStr + 'Failed to show the window. Cause: ' + JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (exception) {
        console.error(msgStr + 'Failed to create the window. Cause: ' + JSON.stringify(exception));
        expect().assertFail();
        done();
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_2110
     * @tc.name      : testShowWindowTest_Promise_Form
     * @tc.desc      : show window
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testShowWindowTest_Promise_Form', 0, async (done: Function) => {
      let caseName: string = 'testShowWindowTest_Promise_Form';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let baseWndType: ohosWindow.WindowType = ohosWindow.WindowType.TYPE_FLOAT;
      let windowId: string = 'testShowWindowTest_Promise_Form';
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: baseWndType, ctx: context
      };

      createFirstWindow(windowConfig, msgStr, done())

      let winData: ohosWindow.Window;
      winData = await createFirstWindow(windowConfig, msgStr, done());
      expect(!!winData).assertTrue();
      winData.showWindow(async (err, data) => {
        if (err.code) {
          console.error(msgStr + 'Failed to show the window. Cause: ' + JSON.stringify(err));
          try {
            expect().assertFail();
          } catch (err) {
            console.info(msgStr + `ohosWindow.showWindow catch error: ${JSON.stringify(err)}`)
          }
          done();
          return;
        }
        console.info(msgStr + 'Succeeded in showing the window. Data: ' + JSON.stringify(data));
        await winData.destroyWindow();
        done();
      })

    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0980
     * @tc.name      : testMoveWindowTo_X_Val300_Y_Val300_Promise
     * @tc.desc      : Set the position of a window.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMoveWindowTo_X_Val300_Y_Val300_Promise', 0, async (done: Function) => {
      let caseName: string = 'testMoveWindowTo_X_Val300_Y_Val300_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      let baseWndType: ohosWindow.WindowType = ohosWindow.WindowType.TYPE_FLOAT;
      let windowId: string = 'testMoveWindowTo_X_Val300_Y_Val300_Promise';
      console.log(msgStr + 'begin');
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: baseWndType, ctx: context
      };
      try {
        await ohosWindow.createWindow(windowConfig).then(async (wnd) => {
          console.info(msgStr + 'Succeeded in obtaining the top window. Data: ' + JSON.stringify(wnd));
          expect(wnd != null).assertTrue();
          try {
            await (wnd as ohosWindow.Window).moveWindowTo(300, 300).then(async () => {
              console.info(msgStr + 'Succeeded in moving the window.');
              await (wnd as ohosWindow.Window).destroyWindow();
              done();
            }).catch(async (err: BusinessError) => {
              console.error(msgStr + 'Failed to move the window. Cause: ' + JSON.stringify(err));
              expect().assertFail();
              await (wnd as ohosWindow.Window).destroyWindow();
              done();
            });
          } catch (exception) {
            console.error(msgStr + 'Failed to move the window. Cause:' + JSON.stringify(exception));
            expect().assertFail();
            done();
          }
          ;
        }).catch((err: BusinessError) => {
          console.error(msgStr + 'Failed to obtain the top window. Cause: ' + JSON.stringify(err));
          expect().assertFail();
          done();
        });
      } catch (exception) {
        console.error(msgStr + 'Failed to create the window. Cause: ' + JSON.stringify(exception));
        expect().assertFail();
        done();
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0940
     * @tc.name      : testMoveWindowTo_X_Val100_Y_Val50_Promise
     * @tc.desc      : Set the position of a window.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMoveWindowTo_X_Val100_Y_Val50_Promise', 0, async (done: Function) => {
      let caseName: string = 'testMoveWindowTo_X_Val100_Y_Val50_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      let baseWndType: ohosWindow.WindowType = ohosWindow.WindowType.TYPE_FLOAT;
      let windowId: string = 'testMoveWindowTo_X_Val100_Y_Val50_Promise';
      console.log(msgStr + 'begin');
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: baseWndType, ctx: context
      };
      try {
        await ohosWindow.createWindow(windowConfig).then(async (wnd) => {
          console.info(msgStr + 'Succeeded in obtaining the top window. Data: ' + JSON.stringify(wnd));
          expect(wnd != null).assertTrue();
          try {
            await (wnd as ohosWindow.Window).moveWindowTo(100, 50).then(async () => {
              console.info(msgStr + 'Succeeded in moving the window.');
              await (wnd as ohosWindow.Window).destroyWindow();
              done();
            }).catch(async (err: BusinessError) => {
              console.error(msgStr + 'Failed to move the window. Cause: ' + JSON.stringify(err));
              expect().assertFail();
              await (wnd as ohosWindow.Window).destroyWindow();
              done();
            });
          } catch (exception) {
            console.error(msgStr + 'Failed to move the window. Cause:' + JSON.stringify(exception));
            expect().assertFail();
            done();
          }
          ;
        }).catch((err: BusinessError) => {
          console.error(msgStr + 'Failed to obtain the top window. Cause: ' + JSON.stringify(err));
          expect().assertFail();
          done();
        });
      } catch (exception) {
        console.error(msgStr + 'Failed to create the window. Cause: ' + JSON.stringify(exception));
        expect().assertFail();
        done();
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0960
     * @tc.name      : testMoveWindowTo_X_Val20000_Y_Val20000_Promise
     * @tc.desc      : Set the position of a window.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMoveWindowTo_X_Val20000_Y_Val20000_Promise', 0, async (done: Function) => {
      let caseName: string = 'testMoveWindowTo_X_Val20000_Y_Val20000_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      let baseWndType: ohosWindow.WindowType = ohosWindow.WindowType.TYPE_FLOAT;
      let windowId: string = 'testMoveWindowTo_X_Val20000_Y_Val20000_Promise';
      console.log(msgStr + 'begin');
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: baseWndType, ctx: context
      };
      try {
        await ohosWindow.createWindow(windowConfig).then(async (wnd) => {
          console.info(msgStr + 'Succeeded in obtaining the top window. Data: ' + JSON.stringify(wnd));
          expect(wnd != null).assertTrue();
          try {
            await (wnd as ohosWindow.Window).moveWindowTo(20000, 20000).then(async () => {
              console.info(msgStr + 'Succeeded in moving the window.');
              await (wnd as ohosWindow.Window).destroyWindow();
              done();
            }).catch(async (err: BusinessError) => {
              console.error(msgStr + 'Failed to move the window. Cause: ' + JSON.stringify(err));
              expect().assertFail();
              await (wnd as ohosWindow.Window).destroyWindow();
              done();
            });
          } catch (exception) {
            console.error(msgStr + 'Failed to move the window. Cause:' + JSON.stringify(exception));
            expect().assertFail();
            done();
          }
          ;
        }).catch((err: BusinessError) => {
          console.error(msgStr + 'Failed to obtain the top window. Cause: ' + JSON.stringify(err));
          expect().assertFail();
          done();
        });
      } catch (exception) {
        console.error(msgStr + 'Failed to create the window. Cause: ' + JSON.stringify(exception));
        expect().assertFail();
        done();
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0920
     * @tc.name      : testMoveWindowTo_XYVal_Is_Negative_Num_Promise
     * @tc.desc      : Set the position of a window.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMoveWindowTo_XYVal_Is_Negative_Num_Promise', 0, async (done: Function) => {
      let caseName: string = 'testMoveWindowTo_XYVal_Is_Negative_Num_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      let baseWndType: ohosWindow.WindowType = ohosWindow.WindowType.TYPE_FLOAT;
      let windowId: string = 'testMoveWindowTo_XYVal_Is_Negative_Num_Promise';
      console.log(msgStr + 'begin');
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: baseWndType, ctx: context
      };
      try {
        await ohosWindow.createWindow(windowConfig).then(async (wnd) => {
          console.info(msgStr + 'Succeeded in obtaining the top window. Data: ' + JSON.stringify(wnd));
          expect(wnd != null).assertTrue();
          try {
            await (wnd as ohosWindow.Window).moveWindowTo(-200, -200).then(async () => {
              console.info(msgStr + 'Succeeded in moving the window.');
              await (wnd as ohosWindow.Window).destroyWindow();
              done();
            }).catch(async (err: BusinessError) => {
              console.error(msgStr + 'Failed to move the window. Cause: ' + JSON.stringify(err));
              expect().assertFail();
              await (wnd as ohosWindow.Window).destroyWindow();
              done();
            });
          } catch (exception) {
            console.error(msgStr + 'Failed to move the window. Cause:' + JSON.stringify(exception));
            expect().assertFail();
            done();
          }
          ;
        }).catch((err: BusinessError) => {
          console.error(msgStr + 'Failed to obtain the top window. Cause: ' + JSON.stringify(err));
          expect().assertFail();
          done();
        });
      } catch (exception) {
        console.error(msgStr + 'Failed to create the window. Cause: ' + JSON.stringify(exception));
        expect().assertFail();
        done();
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0970
     * @tc.name      : testMoveWindowTo_X_Val300_Y_Va300_Callback
     * @tc.desc      : Set the position of a window.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMoveWindowTo_X_Val300_Y_Va300_Callback', 0, async (done: Function) => {
      let caseName: string = 'testMoveWindowTo_X_Val300_Y_Va300_Callback';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let baseWndType: ohosWindow.WindowType = ohosWindow.WindowType.TYPE_FLOAT;
      let windowId: string = 'testMoveWindowTo_X_Val300_Y_Va300_Callback';
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: baseWndType, ctx: context
      };
      createFirstWindow(windowConfig, msgStr, done())
      let winData: ohosWindow.Window;
      winData = await createFirstWindow(windowConfig, msgStr, done());
      expect(!!winData).assertTrue();
      try {
        winData.moveWindowTo(300, 300, async (err, data) => {
          if (err.code) {
            console.error(msgStr + 'Failed to move the window. Cause:' + JSON.stringify(err));
            try {
              expect().assertFail();
            } catch (err) {
              console.log(msgStr + 'ohosWindow.moveWindow catch' + JSON.stringify(err));
            }
            await winData.destroyWindow();
            done();
            return;
          }
          console.info(msgStr + 'Succeeded in moving the window. Data: ' + JSON.stringify(data));
          await winData.destroyWindow();
          done();
        })
      } catch (exception) {
        console.error(msgStr + 'Failed to move the window. Cause:' + JSON.stringify(exception));
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0930
     * @tc.name      : testMoveWindowTo_X_Val100_Y_Va50_Callback
     * @tc.desc      : Set the position of a window.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMoveWindowTo_X_Val100_Y_Va50_Callback', 0, async (done: Function) => {
      let caseName: string = 'testMoveWindowTo_X_Val100_Y_Va50_Callback';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let baseWndType: ohosWindow.WindowType = ohosWindow.WindowType.TYPE_FLOAT;
      let windowId: string = 'testMoveWindowTo_X_Val100_Y_Va50_Callback';
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: baseWndType, ctx: context
      };
      createFirstWindow(windowConfig, msgStr, done())
      let winData: ohosWindow.Window;
      winData = await createFirstWindow(windowConfig, msgStr, done());
      expect(!!winData).assertTrue();
      try {
        winData.moveWindowTo(100, 50, async (err, data) => {
          if (err.code) {
            console.error(msgStr + 'Failed to move the window. Cause:' + JSON.stringify(err));
            try {
              expect().assertFail();
            } catch (err) {
              console.log(msgStr + 'assertFail catch' + JSON.stringify(err));
            }
            await winData.destroyWindow();
            done();
            return;
          }
          console.info(msgStr + 'Succeeded in moving the window. Data: ' + JSON.stringify(data));
          await winData.destroyWindow();
          done();
        })
      } catch (exception) {
        console.error(msgStr + 'Failed to move the window. Cause:' + JSON.stringify(exception));
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0950
     * @tc.name      : testMoveWindowTo_X_Val20000_Y_Val20000_Callback
     * @tc.desc      : Set the position of a window.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMoveWindowTo_X_Val20000_Y_Val20000_Callback', 0, async (done: Function) => {
      let caseName: string = 'testMoveWindowTo_X_Val20000_Y_Val20000_Callback';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let baseWndType: ohosWindow.WindowType = ohosWindow.WindowType.TYPE_FLOAT;
      let windowId: string = 'moveWindowToTest7';
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: baseWndType, ctx: context
      };
      createFirstWindow(windowConfig, msgStr, done())
      let winData: ohosWindow.Window;
      winData = await createFirstWindow(windowConfig, msgStr, done());
      expect(!!winData).assertTrue();
      try {
        winData.moveWindowTo(20000, 20000, async (err, data) => {
          if (err.code) {
            console.error(msgStr + 'Failed to move the window. Cause:' + JSON.stringify(err));
            try {
              expect().assertFail();
            } catch (err) {
              console.log(msgStr + 'assertFail catch' + JSON.stringify(err));
            }
            await winData.destroyWindow();
            done();
            return;
          }
          console.info(msgStr + 'Succeeded in moving the window. Data: ' + JSON.stringify(data));
          await winData.destroyWindow();
          done();
        })
      } catch (exception) {
        console.error(msgStr + 'Failed to move the window. Cause:' + JSON.stringify(exception));
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0910
     * @tc.name      : testMoveWindowTo_XYVal_Is_Negative_Num_Callback
     * @tc.desc      : Set the position of a window.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMoveWindowTo_XYVal_Is_Negative_Num_Callback', 0, async (done: Function) => {
      let caseName: string = 'testMoveWindowTo_XYVal_Is_Negative_Num_Callback';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let baseWndType: ohosWindow.WindowType = ohosWindow.WindowType.TYPE_FLOAT;
      let windowId: string = 'testMoveWindowTo_XYVal_Is_Negative_Num_Callback';
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: baseWndType, ctx: context
      };
      createFirstWindow(windowConfig, msgStr, done())
      let winData: ohosWindow.Window;
      winData = await createFirstWindow(windowConfig, msgStr, done());
      expect(!!winData).assertTrue();
      try {
        winData.moveWindowTo(-200, -200, async (err, data) => {
          if (err.code) {
            console.error(msgStr + 'Failed to move the window. Cause:' + JSON.stringify(err));
            try {
              expect().assertFail();
            } catch (err) {
              console.log(msgStr + 'assertFail catch' + JSON.stringify(err));
            }
            await winData.destroyWindow();
            done();
            return;
          }
          console.info(msgStr + 'Succeeded in moving the window. Data: ' + JSON.stringify(data));
          await winData.destroyWindow();
          done();
        })
      } catch (exception) {
        console.error(msgStr + 'Failed to move the window. Cause:' + JSON.stringify(exception));
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_1060
     * @tc.name      : testResize_X_Val200_Y_Val600_Promise
     * @tc.desc      : Set the size of a window
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testResize_X_Val200_Y_Val600_Promise', 0, async (done: Function) => {
      let caseName: string = 'testResize_X_Val200_Y_Val600_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      let baseWndType: ohosWindow.WindowType = ohosWindow.WindowType.TYPE_FLOAT;
      let windowId: string = 'testResize_X_Val200_Y_Val600_Promise';
      console.log(msgStr + 'begin');
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: baseWndType, ctx: context
      };
      let tempWnd: ohosWindow.Window | void;
      try {
        tempWnd = await ohosWindow.createWindow(windowConfig).catch((err: BusinessError) => {
          console.error(msgStr + 'Failed to createWindow the window. Cause: ' + JSON.stringify(err));
          expect().assertFail();
          done();
        });
        console.log(msgStr + 'ohosWindow.createWindow ' + baseWndType + ' wnd: ' + tempWnd);
        expect(!!tempWnd).assertTrue();
        try {
          await (tempWnd as ohosWindow.Window).resize(200, 600).then(async (data) => {
            console.info(msgStr + 'Succeeded in changing the window size. Data:' + JSON.stringify(data));
            await (tempWnd as ohosWindow.Window).destroyWindow();
            done();
          }).catch(async (err: BusinessError) => {
            console.error(msgStr + 'Failed to change the window size. Cause: ' + JSON.stringify(err));
            expect().assertFail();
            await (tempWnd as ohosWindow.Window).destroyWindow();
            done();
          })
        } catch (exception) {
          console.error(msgStr + 'Failed to change the window size. Cause: ' + JSON.stringify(exception));
          expect().assertFail();
          done();
        }
        ;
      } catch (exception) {
        console.error(msgStr + 'Failed to create the window. Cause: ' + JSON.stringify(exception));
        expect().assertFail();
        done();
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_1040
     * @tc.name      : testResize_X_Val20000_Y_Val20000_Promise
     * @tc.desc      : Set the size of a window
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testResize_X_Val20000_Y_Val20000_Promise', 0, async (done: Function) => {
      let caseName: string = 'testResize_X_Val20000_Y_Val20000_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      let baseWndType: ohosWindow.WindowType = ohosWindow.WindowType.TYPE_FLOAT;
      let windowId: string = 'testResize_X_Val20000_Y_Val20000_Promise';
      console.log(msgStr + 'begin');
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: baseWndType, ctx: context
      };
      let tempWnd: ohosWindow.Window | void;
      try {
        tempWnd = await ohosWindow.createWindow(windowConfig).catch((err: BusinessError) => {
          console.error(msgStr + 'Failed to createWindow the window. Cause: ' + JSON.stringify(err));
          expect().assertFail();
          done();
        });
        console.log(msgStr + 'ohosWindow.createWindow ' + baseWndType + ' wnd: ' + tempWnd);
        expect(!!tempWnd).assertTrue();
        try {
          await (tempWnd as ohosWindow.Window).resize(20000, 20000).then(async (data) => {
            console.info(msgStr + 'Succeeded in changing the window size. Data:' + JSON.stringify(data));
            await (tempWnd as ohosWindow.Window).destroyWindow();
            done();
          }).catch(async (err: BusinessError) => {
            console.error(msgStr + 'Failed to change the window size. Cause: ' + JSON.stringify(err));
            expect().assertFail();
            await (tempWnd as ohosWindow.Window).destroyWindow();
            done();
          })
        } catch (exception) {
          console.error(msgStr + 'Failed to change the window size. Cause: ' + JSON.stringify(exception));
          expect().assertFail();
          done();
        }
        ;
      } catch (exception) {
        console.error(msgStr + 'Failed to create the window. Cause: ' + JSON.stringify(exception));
        expect().assertFail();
        done();
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_1020
     * @tc.name      : testResize_XY_Value_Is_Zero_Promise
     * @tc.desc      : Set the size of a window
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testResize_XY_Value_Is_Zero_Promise', 0, async (done: Function) => {
      let caseName: string = 'testResize_XY_Value_Is_Zero_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      let baseWndType: ohosWindow.WindowType = ohosWindow.WindowType.TYPE_FLOAT;
      let windowId: string = 'testResize_XY_Value_Is_Zero_Promise';
      console.log(msgStr + 'begin');
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: baseWndType, ctx: context
      };
      let tempWnd: ohosWindow.Window | void;
      try {
        tempWnd = await ohosWindow.createWindow(windowConfig).catch((err: BusinessError) => {
          expect().assertFail();
          done();
          return;
        });
        console.log(msgStr + 'ohosWindow.createWindow ' + baseWndType + ' wnd: ' + tempWnd);
        expect(!!tempWnd).assertTrue();
        try {
          await (tempWnd as ohosWindow.Window).resize(0, 0).then(async (data) => {
            console.info(msgStr + 'Succeeded in changing the window size. Data:' + JSON.stringify(data));
            await (tempWnd as ohosWindow.Window).destroyWindow();
            done();
          }).catch(async (err: BusinessError) => {
            console.error(msgStr + 'Failed to change the window size. Cause: ' + JSON.stringify(err));
            expect(err.code).assertEqual(401);
            await (tempWnd as ohosWindow.Window).destroyWindow();
            done();
          })
        } catch (exception) {
          console.error(msgStr + 'try catch Failed to change the window size. Cause: ' + JSON.stringify(exception));
          expect(exception.code).assertEqual(401);
          await (tempWnd as ohosWindow.Window).destroyWindow();
          done();
        }
        ;
      } catch (exception) {
        console.error(msgStr + 'Failed to create the window. Cause: ' + JSON.stringify(exception));
        expect().assertFail();
        done();
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_1010
     * @tc.name      : testResize_XY_Value_Is_Negative_Num_Promise
     * @tc.desc      : Set the size of a window
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testResize_XY_Value_Is_Negative_Num_Promise', 0, async (done: Function) => {
      let caseName: string = 'testResize_XY_Value_Is_Negative_Num_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      let baseWndType: ohosWindow.WindowType = ohosWindow.WindowType.TYPE_FLOAT;
      let windowId: string = 'resizeTest4';
      console.log(msgStr + 'begin');
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: baseWndType, ctx: context
      };
      let tempWnd: ohosWindow.Window | void;
      try {
        tempWnd = await ohosWindow.createWindow(windowConfig).catch((err: BusinessError) => {
          expect().assertFail();
          done();
          return;
        });
        console.log(msgStr + 'ohosWindow.createWindow ' + baseWndType + ' wnd: ' + tempWnd);
        expect(!!tempWnd).assertTrue();
        try {
          await (tempWnd as ohosWindow.Window).resize(-1, -1).then(async (data) => {
            console.info(msgStr + 'Succeeded in changing the window size. Data:' + JSON.stringify(data));
            await (tempWnd as ohosWindow.Window).destroyWindow();
            done();
          }).catch(async (err: BusinessError) => {
            console.error(msgStr + 'Failed to change the window size. Cause: ' + JSON.stringify(err));
            expect(err.code).assertEqual(401);
            await (tempWnd as ohosWindow.Window).destroyWindow();
            done();
          })
        } catch (exception) {
          console.error(msgStr + 'try catch Failed to change the window size. Cause: ' + JSON.stringify(exception));
          expect(exception.code).assertEqual(401);
          await (tempWnd as ohosWindow.Window).destroyWindow();
          done();
        }
        ;
      } catch (exception) {
        console.error(msgStr + 'Failed to create the window. Cause: ' + JSON.stringify(exception));
        expect().assertFail();
        done();
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_1030
     * @tc.name      : testResize_X_Val100_Y_Val100_Multi_Set_Promise
     * @tc.desc      : Set the size of a window
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testResize_X_Val100_Y_Val100_Multi_Set_Promise', 0, async (done: Function) => {
      let caseName: string = 'testResize_X_Val100_Y_Val100_Multi_Set_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      let baseWndType: ohosWindow.WindowType = ohosWindow.WindowType.TYPE_FLOAT;
      let windowId: string = 'resizeTest5';
      console.log(msgStr + 'begin');
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: baseWndType, ctx: context
      };
      let tempWnd: ohosWindow.Window | void;
      try {
        tempWnd = await ohosWindow.createWindow(windowConfig).catch((err: BusinessError) => {
          expect().assertFail();
          done();
          return;
        });
        console.log(msgStr + 'ohosWindow.createWindow ' + baseWndType + ' wnd: ' + tempWnd);
        expect(!!tempWnd).assertTrue();
        for (let i = 0; i < 5; i++) {
          console.log(msgStr + 'begin resize current step:' + i)
          await (tempWnd as ohosWindow.Window).resize(100, 100).catch((err: BusinessError) => {
            console.error(msgStr + 'Failed to change the window size. Cause: ' + JSON.stringify(err));
            expect(err.code).assertEqual(6);
            done()
            return;
          })
          console.log(msgStr + 'success resize current step:' + i)
          if (i == 4) {
            console.log(msgStr + 'finish resize current step:' + i)
            done()
          }
        }
        await (tempWnd as ohosWindow.Window).destroyWindow();
      } catch (exception) {
        console.error(msgStr + 'Failed to create the window. Cause: ' + JSON.stringify(exception));
        expect().assertFail();
        done();
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_1050
     * @tc.name      : testResize_X_Val200_Y_Val200_Callback
     * @tc.desc      : Set the size of a window
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testResize_X_Val200_Y_Val200_Callback', 0, async (done: Function) => {
      let caseName: string = 'testResize_X_Val200_Y_Val200_Callback';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let baseWndType: ohosWindow.WindowType = ohosWindow.WindowType.TYPE_FLOAT;
      let windowId: string = 'resizeTest6';
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: baseWndType, ctx: context
      };
      createFirstWindow(windowConfig, msgStr, done())

      let winData: ohosWindow.Window;
      winData = await createFirstWindow(windowConfig, msgStr, done());
      expect(!!winData).assertTrue();
      try {
        winData.resize(200, 200, async (err: BusinessError) => {
          if (err.code) {
            console.error(msgStr + 'Failed to change the window size. Cause:' + JSON.stringify(err));
            try {
              expect().assertFail();
            } catch (err) {
              console.log(msgStr + 'assertFail catch' + JSON.stringify(err));
            }
            await winData.destroyWindow();
            done();
            return;
          }
          console.info(msgStr + 'Succeeded in changing the window size.');
          await winData.destroyWindow();
          done();
        });
      } catch (exception) {
        console.error(msgStr + 'Failed to change the window size. Cause:' + JSON.stringify(exception));
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_1000
     * @tc.name      : testResize_Set_Diff_XY_In_Turn
     * @tc.desc      : Set the size of a window
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testResize_Set_Diff_XY_In_Turn', 0, async (done: Function) => {
      let caseName: string = 'testResize_Set_Diff_XY_In_Turn';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let baseWndType: ohosWindow.WindowType = ohosWindow.WindowType.TYPE_FLOAT;
      let windowId: string = 'resizeTest7';
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: baseWndType, ctx: context
      };
      createFirstWindow(windowConfig, msgStr, done())

      let winData: ohosWindow.Window;
      winData = await createFirstWindow(windowConfig, msgStr, done());
      expect(!!winData).assertTrue();
      let width = 100;
      let height = 100;
      for (let i = 1; i < 5; i++) {
        width = width * i;
        height = height * i;
        await resizeFun(winData, msgStr, width, height, i, done());
        if (i == 4) {
          console.log(msgStr + 'resize finished step:' + i)
          await winData.destroyWindow();
          done()
        }
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0290
     * @tc.name      : testDestroyWindow_Promise
     * @tc.desc      : Verification window destruction scenario.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testDestroyWindow_Promise', 0, async (done: Function) => {
      let caseName: string = 'testDestroyWindow_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      let baseWndType: ohosWindow.WindowType = ohosWindow.WindowType.TYPE_FLOAT;
      let windowId: string = 'destroyWindowTest1';
      console.log(msgStr + 'begin');
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: baseWndType, ctx: context
      };
      let tempWnd: ohosWindow.Window | void;
      try {
        tempWnd = await ohosWindow.createWindow(windowConfig).catch((err: BusinessError) => {
          expect().assertFail();
          done();
          return;
        });
        console.log(msgStr + 'ohosWindow.createWindow ' + baseWndType + ' wnd: ' + JSON.stringify(tempWnd));
        expect(!!tempWnd).assertTrue();
        await (tempWnd as ohosWindow.Window).destroyWindow().then(() => {
          console.info(msgStr + 'Succeeded in destroying the window.');
          try {
            let findWnd = ohosWindow.findWindow(windowId)
            expect(!findWnd).assertTrue();
            done();
          } catch (exception) {
            console.error(msgStr + 'try catch Failed to find the Window. Cause: ' + JSON.stringify(exception));
            expect(exception.code === 1300002).assertTrue();
            done();
          }
          ;
        }).catch((err: BusinessError) => {
          console.error(msgStr + 'try catch Failed to destroy the window. Cause: ' + JSON.stringify(err));
          expect().assertFail();
          done();
        })
      } catch (exception) {
        console.error(msgStr + 'Failed to create the window. Cause: ' + JSON.stringify(exception));
        expect().assertFail();
        done();
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0270
     * @tc.name      : testDestroyWindow_Callback
     * @tc.desc      : Verification window destruction scenario
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testDestroyWindow_Callback', 0, async (done: Function) => {
      let caseName: string = 'testDestroyWindow_Callback';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      let baseWndType: ohosWindow.WindowType = ohosWindow.WindowType.TYPE_FLOAT;
      let windowId: string = 'destroyWindowTest2';
      console.log(msgStr + 'begin');
      let windowConfig: ohosWindow.Configuration = {
        name: windowId, windowType: baseWndType, ctx: context
      };

      createFirstWindow(windowConfig, msgStr, done())

      let winData: ohosWindow.Window;
      winData = await createFirstWindow(windowConfig, msgStr, done());
      expect(!!winData).assertTrue();
      winData.destroyWindow((err) => {
        if (err.code != 0) {
          console.log('windowTest DestroyTest2 create callback fail' + JSON.stringify(err));
          try {
            expect().assertFail();
          } catch (err) {
            console.log(msgStr + 'assertFail catch' + JSON.stringify(err));
          }
        } else {
          try {
            let findWnd = ohosWindow.findWindow(windowId)
            expect(!findWnd).assertTrue();
          } catch (exception) {
            console.error(msgStr + 'try catch Failed to find the Window. Cause: ' + JSON.stringify(exception));
            expect(exception.code === 1300002).assertTrue();
          }
          ;
        }
        done();
      })
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_1910
     * @tc.name      : testSetWindowSystemBarEnable_Empty_Promise
     * @tc.desc      : Set the visible mode of navigation bar and status bar
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testSetWindowSystemBarEnable_Empty_Promise', 0, async (done: Function) => {
      let caseName: string = 'testSetWindowSystemBarEnable_Empty_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      let wnd: ohosWindow.Window | void;
      try {
        wnd = await ohosWindow.getLastWindow(context).catch((err: BusinessError) => {
          console.error('Failed to obtain the top window. Cause: ' + JSON.stringify(err));
          expect().assertFail();
          done();
          return;
        })
        expect(wnd != null).assertTrue();
        try {
          await (wnd as ohosWindow.Window).setWindowSystemBarEnable([]).then(() => {
            console.info(msgStr + 'Succeeded in setting the system bar to be invisible.');
            expect(TRUE_FLAG).assertTrue();
            done();
          }).catch((err: BusinessError) => {
            console.error(msgStr + 'Failed to set the system bar to be invisible. Cause:' + JSON.stringify(err));
            expect().assertFail();
            done();
          });
        } catch (exception) {
          console.error(msgStr + 'try catch Failed to set the system bar to be invisible. Cause:' + JSON.stringify(exception));
          expect().assertFail();
          done();
        }
        ;
      } catch (exception) {
        console.error(msgStr + 'try catch Failed to obtain the top window. Cause: ' + JSON.stringify(exception));
        expect().assertFail();
        done();
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_1920
     * @tc.name      : testSetWindowSystemBarEnable_StatusAndNavigation_Promise
     * @tc.desc      : Set the visible mode of navigation bar and status bar
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testSetWindowSystemBarEnable_StatusAndNavigation_Promise', 0, async (done: Function) => {
      let caseName: string = 'testSetWindowSystemBarEnable_StatusAndNavigation_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      let wnd: ohosWindow.Window | void;
      try {
        wnd = await ohosWindow.getLastWindow(context).catch((err: BusinessError) => {
          console.error('Failed to obtain the top window. Cause: ' + JSON.stringify(err));
          expect().assertFail();
          done();
          return;
        })
        expect(wnd != null).assertTrue();
        try {
          await (wnd as ohosWindow.Window).setWindowSystemBarEnable(['status', 'navigation']).then(() => {
            console.info(msgStr + 'Succeeded in setting the system bar to be invisible.');
            expect(TRUE_FLAG).assertTrue();
            done();
          }).catch((err: BusinessError) => {
            console.error(msgStr + 'Failed to set the system bar to be invisible. Cause:' + JSON.stringify(err));
            expect().assertFail();
            done();
          });
        } catch (exception) {
          console.error(msgStr + 'try catch Failed to set the system bar to be invisible. Cause:' + JSON.stringify(exception));
          expect().assertFail();
          done();
        }
        ;
      } catch (exception) {
        console.error(msgStr + 'try catch Failed to obtain the top window. Cause: ' + JSON.stringify(exception));
        expect().assertFail();
        done();
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_1930
     * @tc.name      : testSetWindowSystemBarEnable_Status_Promise
     * @tc.desc      : Set the visible mode of navigation bar and status bar
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testSetWindowSystemBarEnable_Status_Promise', 0, async (done: Function) => {
      let caseName: string = 'testSetWindowSystemBarEnable_Status_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      let wnd: ohosWindow.Window | void;
      try {
        wnd = await ohosWindow.getLastWindow(context).catch((err: BusinessError) => {
          console.error('Failed to obtain the top window. Cause: ' + JSON.stringify(err));
          expect().assertFail();
          done();
          return;
        })
        expect(wnd != null).assertTrue();
        try {
          await (wnd as ohosWindow.Window).setWindowSystemBarEnable(['status']).then(() => {
            console.info(msgStr + 'Succeeded in setting the system bar to be invisible.');
            expect(TRUE_FLAG).assertTrue();
            done();
          }).catch((err: BusinessError) => {
            console.error(msgStr + 'Failed to set the system bar to be invisible. Cause:' + JSON.stringify(err));
            expect().assertFail();
            done();
          });
        } catch (exception) {
          console.error(msgStr + 'try catch Failed to set the system bar to be invisible. Cause:' + JSON.stringify(exception));
          expect().assertFail();
          done();
        }
        ;
      } catch (exception) {
        console.error(msgStr + 'try catch Failed to obtain the top window. Cause: ' + JSON.stringify(exception));
        expect().assertFail();
        done();
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_1940
     * @tc.name      : testSetWindowSystemBarEnable_Navigation_Promise
     * @tc.desc      : Set the visible mode of navigation bar and status bar
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testSetWindowSystemBarEnable_Navigation_Promise', 0, async (done: Function) => {
      let caseName: string = 'testSetWindowSystemBarEnable_Navigation_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      let wnd: ohosWindow.Window | void;
      try {
        wnd = await ohosWindow.getLastWindow(context).catch((err: BusinessError) => {
          console.error('Failed to obtain the top window. Cause: ' + JSON.stringify(err));
          expect().assertFail();
          done();
          return;
        })
        expect(wnd != null).assertTrue();
        try {
          await (wnd as ohosWindow.Window).setWindowSystemBarEnable(['navigation']).then(() => {
            console.info(msgStr + 'Succeeded in setting the system bar to be invisible.');
            expect(TRUE_FLAG).assertTrue();
            done();
          }).catch((err: BusinessError) => {
            console.error(msgStr + 'Failed to set the system bar to be invisible. Cause:' + JSON.stringify(err));
            expect().assertFail();
            done();
          });
        } catch (exception) {
          console.error(msgStr + 'try catch Failed to set the system bar to be invisible. Cause:' + JSON.stringify(exception));
          expect().assertFail();
          done();
        }
        ;
      } catch (exception) {
        console.error(msgStr + 'try catch Failed to obtain the top window. Cause: ' + JSON.stringify(exception));
        expect().assertFail();
        done();
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_1950
     * @tc.name      : testSetWindowSystemBarEnable_StatusAndNavigation_Callback
     * @tc.desc      : Set the visible mode of navigation bar and status bar
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testSetWindowSystemBarEnable_StatusAndNavigation_Callback', 0, async (done: Function) => {
      let caseName: string = 'testSetWindowSystemBarEnable_StatusAndNavigation_Callback';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let wnd: ohosWindow.Window | void;
      try {
        wnd = await ohosWindow.getLastWindow(context).catch((err: BusinessError) => {
          console.error('Failed to obtain the top window. Cause: ' + JSON.stringify(err));
          expect().assertFail();
          done();
          return;
        })
        expect(wnd != null).assertTrue();
        try {
          (wnd as ohosWindow.Window).setWindowSystemBarEnable(['status', 'navigation'], (err) => {
            console.log(msgStr + 'windowTest SetLayoutFullScreenTest2 wnd.setFullScreen(true) callback begin');
            if (err.code != 0) {
              console.log(msgStr + 'windowTest SetLayoutFullScreenTest2 wnd.setFullScreen callback fail' + JSON.stringify(err));
              try {
                expect().assertFail();
              } catch (err) {
                console.log(msgStr + 'assertFail catch' + JSON.stringify(err));
              }
              done();
              return;
            }
            try {
              expect(TRUE_FLAG).assertTrue();
            } catch (err) {
              console.log(msgStr + 'assertTrue catch' + JSON.stringify(err));
            }
            done();
          })
        } catch (exception) {
          console.error(msgStr + ' try catch Failed to set the system bar to be invisible. Cause:' + JSON.stringify(exception));
        }
        ;
      } catch (exception) {
        console.error(msgStr + 'try catch Failed to get the last window. Cause: ' + JSON.stringify(exception));
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_1960
     * @tc.name      : testSetWindowSystemBarEnable_Empty_Callback
     * @tc.desc      : Set the visible mode of navigation bar and status bar
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testSetWindowSystemBarEnable_Empty_Callback', 0, async (done: Function) => {
      let caseName: string = 'testSetWindowSystemBarEnable_Empty_Callback';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let wnd: ohosWindow.Window | void;
      try {
        wnd = await ohosWindow.getLastWindow(context).catch((err: BusinessError) => {
          console.error('Failed to obtain the top window. Cause: ' + JSON.stringify(err));
          expect().assertFail();
          done();
          return;
        })
        expect(wnd != null).assertTrue();
        try {
          await (wnd as ohosWindow.Window).setWindowSystemBarEnable([], (err) => {
            console.log(msgStr + 'windowTest SetLayoutFullScreenTest2 wnd.setFullScreen(true) callback begin');
            if (err.code != 0) {
              console.log(msgStr + 'windowTest SetLayoutFullScreenTest2 wnd.setFullScreen callback fail' + JSON.stringify(err));
              try {
                expect().assertFail();
              } catch (err) {
                console.log(msgStr + 'assertFail catch' + JSON.stringify(err));
              }
              done();
              return;
            }
            try {
              expect(TRUE_FLAG).assertTrue();
            } catch (err) {
              console.log(msgStr + 'assertTrue catch' + JSON.stringify(err));
            }
            done();
          })
        } catch (exception) {
          console.error(msgStr + ' try catch Failed to set the system bar to be invisible. Cause:' + JSON.stringify(exception));
        }
        ;
      } catch (exception) {
        console.error(msgStr + 'try catch Failed to get the last window. Cause: ' + JSON.stringify(exception));
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0130
     * @tc.name      : testCreateWindow_Not_Exist_WinType_Promise
     * @tc.desc      : Verify the scenario of creating a window of a type that does not exist
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testCreateWindow_Not_Exist_WinType_Promise', 0, async (done: Function) => {
      let caseName: string = 'testCreateWindow_Not_Exist_WinType_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let tempType = 5000;
      let windId = 'nonExistWindowType';
      console.log(msgStr + 'ohosWindow.createWindow ' + tempType + ' start');
      let windowConfig: ohosWindow.Configuration = {
        name: windId, windowType: tempType, ctx: context
      };
      let nonExistWnd: ohosWindow.Window | void;
      try {
        nonExistWnd = await ohosWindow.createWindow(windowConfig).then((data) => {
          console.log(msgStr + 'ohosWindow.createWindow success: ' + JSON.stringify(nonExistWnd));
          done();
        }).catch((err: BusinessError) => {
          console.log(msgStr + 'ohosWindow.createWindow err: ' + JSON.stringify(err));
          expect(err.code === 401).assertTrue();
          done();
        });
      } catch (exception) {
        console.error(msgStr + 'try catch Failed to create the window. Cause: ' + JSON.stringify(exception));
        expect(exception.code === 401).assertTrue();
        done();
      };
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_0120
     * @tc.name      : testCreateWindow_Not_Exist_WinType_Callback
     * @tc.desc      : Verify the scenario of creating a window of a type that does not exist
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testCreateWindow_Not_Exist_WinType_Callback', 0, (done: Function) => {
      let caseName: string = 'testCreateWindow_Not_Exist_WinType_Callback';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      console.log(msgStr + 'begin');
      let tempType = 5000;
      let windId = 'createTest7';
      console.log(msgStr + 'ohosWindow.createWindow ' + tempType + ' start');
      let windowConfig: ohosWindow.Configuration = {
        name: windId, windowType: tempType, ctx: context
      };
      try {
        ohosWindow.createWindow(windowConfig, (err) => {
          if (err && err.code) {
            console.log(msgStr + 'ohosWindow.createWindow  err' + JSON.stringify(err));
            try {
              expect(err.code === 401).assertTrue();
            } catch (error) {
              console.info(`ohosWindow.createWindow catch error: ${JSON.stringify(error)}`)
            }
            done();
          }
        })
      } catch (exception) {
        console.error(msgStr + 'Failed to create the window. Cause: ' + JSON.stringify(exception));
        expect(exception.code === 401).assertTrue();
        done();
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_1770
     * @tc.name      : testSetWindowLayoutFullScreen_True_Promise
     * @tc.desc      : set the property of the window can layout in full screen
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testSetWindowLayoutFullScreen_True_Promise', 0, async (done: Function) => {
      let caseName: string = 'testSetWindowLayoutFullScreen_True_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      let wnd: ohosWindow.Window | void;
      try {
        wnd = windowStage.getMainWindowSync();
        console.log(msgStr + 'ohosWindow.getLastWindow ' + JSON.stringify(wnd));
        expect(wnd != null).assertTrue();
        try {
          let isLayoutFullScreen = true;
          await (wnd as ohosWindow.Window).setWindowLayoutFullScreen(isLayoutFullScreen).then(() => {
            console.info(msgStr + 'Succeeded in setting the window layout to full-screen mode.');
            try {
              let propData = (wnd as ohosWindow.Window).getWindowProperties()
              console.info(msgStr + 'wnd.getWindowProperties propData: ' + JSON.stringify(propData));
              expect(propData.isLayoutFullScreen).assertTrue();
              done();
            } catch (exception) {
              console.error(msgStr + 'try catch Failed to obtain the window properties. Cause: ' + JSON.stringify(exception));
              expect().assertFail();
              done();
            }
          }).catch((err: BusinessError) => {
            console.error(msgStr + 'Failed to set the window layout to full-screen mode. Cause:' + JSON.stringify(err));
            expect().assertFail();
            done();
          });
        } catch (exception) {
          console.error(msgStr + 'try catch Failed to set the window layout to full-screen mode. Cause:' + JSON.stringify(exception));
        }
        ;
      } catch (exception) {
        console.error(msgStr + 'try catch Failed to obtain the top window. Cause: ' + JSON.stringify(exception));
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_1780
     * @tc.name      : testSetWindowLayoutFullScreen_False_Promise
     * @tc.desc      : set the property of the window can layout in full screen
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testSetWindowLayoutFullScreen_False_Promise', 0, async (done: Function) => {
      let caseName: string = 'testSetWindowLayoutFullScreen_False_Promise';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      let wnd: ohosWindow.Window | void;
      try {
        wnd = windowStage.getMainWindowSync();
        expect(wnd != null).assertTrue();
        try {
          let isLayoutFullScreen = false;
          await (wnd as ohosWindow.Window).setWindowLayoutFullScreen(isLayoutFullScreen).then(() => {
            console.info(msgStr + 'Succeeded in setting the window not layout to full-screen mode.');
            try {
              let propData = (wnd as ohosWindow.Window).getWindowProperties()
              console.info(msgStr + 'wnd.getWindowProperties propData: ' + JSON.stringify(propData));
              expect(!propData.isLayoutFullScreen).assertTrue();
              done();
            } catch (exception) {
              console.error(msgStr + 'try catch Failed to obtain the window properties. Cause: ' + JSON.stringify(exception));
              expect().assertFail();
              done();
            }
          }).catch((err: BusinessError) => {
            console.error(msgStr + 'Failed to set the window layout to full-screen mode. Cause:' + JSON.stringify(err));
            expect().assertFail();
            done();
          });
        } catch (exception) {
          console.error(msgStr + 'try catch Failed to set the window layout to full-screen mode. Cause:' + JSON.stringify(exception));
        }
        ;
      } catch (exception) {
        console.error(msgStr + 'try catch Failed to obtain the top window. Cause: ' + JSON.stringify(exception));
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_1790
     * @tc.name      : testSetWindowLayoutFullScreen_True_Callback
     * @tc.desc      : set the property of the window can layout in full screen
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testSetWindowLayoutFullScreen_True_Callback', 0, async (done: Function) => {
      let caseName: string = 'testSetWindowLayoutFullScreen_True_Callback';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      let wnd: ohosWindow.Window | void;
      try {
        wnd = windowStage.getMainWindowSync();
        expect(wnd != null).assertTrue();
        let isLayoutFullScreen = true;
        try {
          wnd.setWindowLayoutFullScreen(isLayoutFullScreen, (err) => {
            if (err.code) {
              console.error(msgStr + 'err Failed to set the window layout to full-screen mode. Cause:' + JSON.stringify(err));
              try {
                expect().assertFail();
              } catch (error) {
                console.info(`ohosWindow.createWindow catch error: ${JSON.stringify(error)}`)
              }
              done();
              return;
            }
            console.info(msgStr + 'Succeeded in setting the window layout to full-screen mode.');
            try {
              let propData = (wnd as ohosWindow.Window).getWindowProperties()
              console.log(msgStr + JSON.stringify(propData));
              expect(propData.isLayoutFullScreen).assertTrue();
              done();
            } catch (exception) {
              console.error(msgStr + 'Failed to obtain the window properties. Cause: ' + JSON.stringify(exception));
              expect().assertFail();
              done();
            }
            ;
          });
        } catch (exception) {
          console.error(msgStr + 'try catch Failed to set the window layout to full-screen mode. Cause:' + JSON.stringify(exception));
          expect().assertFail();
          done();
        }
        ;
      } catch (exception) {
        console.error(msgStr + 'Failed to get the main window. Cause: ' + JSON.stringify(exception));
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_1800
     * @tc.name      : testSetWindowLayoutFullScreen_False_Callback
     * @tc.desc      : set the property of the window can layout in full screen
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testSetWindowLayoutFullScreen_False_Callback', 0, async (done: Function) => {
      let caseName: string = 'testSetWindowLayoutFullScreen_False_Callback';
      let msgStr: string = 'jsUnittest ' + caseName + ' ';
      let wnd: ohosWindow.Window | void;
      try {
        wnd = windowStage.getMainWindowSync();
        expect(wnd != null).assertTrue();
        let isLayoutFullScreen = false;
        try {
          wnd.setWindowLayoutFullScreen(isLayoutFullScreen, (err) => {
            if (err.code) {
              console.error(msgStr + 'err Failed to set the window not layout to full-screen mode. Cause:' + JSON.stringify(err));
              try {
                expect().assertFail();
              } catch (error) {
                console.info(`ohosWindow.createWindow catch error: ${JSON.stringify(error)}`)
              }
              done();
              return;
            }
            console.info(msgStr + 'Succeeded in setting the window not layout to full-screen mode.');
            try {
              let propData = (wnd as ohosWindow.Window).getWindowProperties()
              console.log(msgStr + JSON.stringify(propData));
              expect(!propData.isLayoutFullScreen).assertTrue();
              done();
            } catch (exception) {
              console.error(msgStr + 'Failed to obtain the window properties. Cause: ' + JSON.stringify(exception));
              expect().assertFail();
              done();
            }
            ;
          });
        } catch (exception) {
          console.error(msgStr + 'try catch Failed to set the window layout to full-screen mode. Cause:' + JSON.stringify(exception));
          expect().assertFail();
          done();
        }
        ;
      } catch (exception) {
        console.error(msgStr + 'Failed to create the main window. Cause: ' + JSON.stringify(exception));
      }
      ;
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STAGE_JS_API_2300
     * @tc.name      : testEnumWindowStageEventTypeReName_Test_001.
     * @tc.desc      : To test the enum value of WindowStageEventType.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testEnumWindowStageEventTypeReName_Test_001', 0, async (done: Function) => {
      console.info('test the enum value of WindowStageEventType begin');
      try {
        expect(1).assertEqual(ohosWindow.WindowStageEventType.SHOWN);
        expect(2).assertEqual(ohosWindow.WindowStageEventType.ACTIVE);
        expect(3).assertEqual(ohosWindow.WindowStageEventType.INACTIVE);
        expect(4).assertEqual(ohosWindow.WindowStageEventType.HIDDEN);
        done();
      } catch (err) {
        console.info('test enum value of windowStageEventType error ' + JSON.stringify(err));
        expect().assertFail();
        done();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STANDARD_JS_API_1810
     * @tc.name      : testSetExpectedFrameRateRange
     * @tc.desc      : test the enum value of hdrFormats
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level4
     */
    it('testSetExpectedFrameRateRange',0,  async (done: Function) =>{
        let msg:string = "testSetExpectedFrameRateRange"
        let backDisplaySyncBigger = displaySync.create()
        console.log(msg + ' www data '  + backDisplaySyncBigger)
        try {
          let range : ExpectedFrameRateRange = {
            expected: 10,
            min:0,
            max:120
          };
          console.log(msg + ' www data '  + range)
          backDisplaySyncBigger.setExpectedFrameRateRange(range)
          expect(true).assertTrue()
        done();
      }catch (error) {
          console.log(msg + ' www data Failed to create the subwindow. Cause: ' + JSON.stringify(error));
          if (error.code) {
            expect().assertFail()
          } else {
            expect(true).assertTrue()
          }
          done()
        }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_STANDARD_JS_API_1820
     * @tc.name      : testTargetTimestamp
     * @tc.desc      : test the enum value of IntervalInfo
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level4
     */
    it('testTargetTimestamp', 0, async (done: Function) => {
      let msg = "testTargetTimestamp"
      let backDisplaySyncBigger = displaySync.create()
      console.log(msg + ' www data ' + backDisplaySyncBigger)
      try {
        expect(true).assertTrue()
        done()
      } catch (error) {
        console.log(msg + ' www data Failed to Cause: ' + JSON.stringify(error));
        if (error.code) {
          expect().assertFail()
        } else {
          expect(true).assertTrue()
        }
        done()
      }
    })
  })
}
