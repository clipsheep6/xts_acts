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

import pointer from '@ohos.multimodalInput.pointer'
import window from '@ohos.window'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect, TestType, Size, Level, Core } from '@ohos/hypium'

export default function Pointer_test() {
  describe('Pointer_test', function () {

    const errCode = {
      COMMON_PARAMETER_CODE: 401
    }

    const errMsg = {
      PARAMETER_STYLE_VALUE_MSG: `Parameter error. Invalid cursor style value.`,
      PARAMETER_PATH_VALUE_MSG: `Parameter error. Invalid or inaccessible file path.`,
      PARAMETER_COUNT_MSG: `Parameter count error`,
      PARAMETER_TYPE_MSG: `Parameter error. The type of type must be string.`,
      PARAMETER_VISIBLE_TYPE_MSG: `Parameter error. The type of visible must be boolean.`,
      PARAMETER_SPEED_TYPE_MSG: `Parameter error. The type of speed must be number.`,
      PARAMETER_SIZE_TYPE_MSG: `Parameter error. The type of size must be number.`,
      PARAMETER_IMAGES_TYPE_MSG: `Parameter error. The type of images must be array.`,
      PARAMETER_IMAGES_ELEMENT_TYPE_MSG: `Parameter error. The type of images element must be PointerImage.`,
      PARAMETER_STYLE_TYPE_MSG: `Parameter error. The type of style must be number.`,
      PARAMETER_IMAGE_TYPE_MSG: `Parameter error. The type of image must be string.`,
      PARAMETER_WINDOWID_TYPE_MSG: `Parameter error. The type of windowId must be number.`,
      PARAMETER_CALLBACK_TYPE_MSG: `Parameter error. The type of callback must be function.`
    }

    const sizes = {
      DEFAULT_SIZE_VALUE: -1,
      MIN_SIZE_VALUE: 40,
      MAX_SIZE_VALUE: 60
    }

    afterAll(function () {
      const core = Core.getInstance();
      const config = core.getDefaultService('config');
      if (pointer.dumpCoverage && config.coverage) {
        console.info('Dump coverage')
        pointer.dumpCoverage()
      } else {
        console.info('No coverage')
      }
    })

    class AsyncHelper {
      constructor() {
        let ah = this;
        this.promise = new Promise((res) => { ah.resolve = res; });
      }

      callback() {
        let ah = this;
        return function(err, data) { ah.resolve([err, data]); };
      }

      async verify(verifier) {
        await this.promise.then(verifier, () => { expect().assertFail(); });
        let ah = this;
        this.promise = new Promise((res) => { ah.resolve = res; });
      }

      async verifyOk(value) {
        await this.verify((data) => {
          expect(data[0]).assertUndefined();
          expect(data[1]).assertDeepEquals(value);
        });
      }

      async verifyError(code, message) {
        await this.verify((data) => {
          expect(data[0].code).assertEqual(code);
          expect(data[0].message).assertEqual(message);
        });
      }
    }

    async function assertPromiseError(promise, code, message) {
      await promise.then(() => {expect().assertFail()}, (error) => {
        expect(error.code).assertEqual(code);
        expect(error.message).assertEqual(message);
      });
    }

    it('Pointer_PointerVisibleTest_001', 0, async function (done) {
      console.info(`Pointer_SetPointerVisibleTest_001 enter`);
      try {
        pointer.setPointerVisible(false, (err, data) => {
          if (err) {
            console.info(`Pointer_SetPointerVisibleTest_001 failed, err=${JSON.stringify(err)}`);
            expect(false).assertTrue();
          } else {
            console.info(`Pointer_SetPointerVisibleTest_001 success_1. data=${JSON.stringify(data)}`);
            expect(true).assertTrue();
          }
        });
      } catch (error) {
        console.info(`Pointer_SetPointerVisibleTest_001 error`);
        expect(false).assertTrue();
      }
      try {
        await pointer.isPointerVisible().then(data => {
          console.info(`Pointer_PointerVisibleTest_001 success_2, data=${JSON.stringify(data)}`);
          expect(data == false).assertTrue();
          done();
        }).catch((err) => {
          console.info(`Pointer_PointerVisibleTest_001 failed, err=${JSON.stringify(err)}`);
          expect(false).assertTrue();
        });
      } catch (error) {
        console.info(`Pointer_SetPointerVisibleTest_001 error`);
        expect(false).assertTrue();
      }
      console.info(`Pointer_PointerVisibleTest_001 exit`);
    })

    it('Pointer_PointerVisibleTest_002', 0, async function (done) {
      console.info(`Pointer_PointerVisibleTest_002 enter`);
      var result = canIUse("SystemCapability.MultimodalInput.Input.Pointer");
      console.info('Pointer_PointerVisibleTest_002 segregate result=' + result);
      if (result) {
        try {
          await pointer.setPointerVisible(true).then(data => {
            console.info(`Pointer_PointerVisibleTest_002 success_1, data=${JSON.stringify(data)}`);
            expect(true).assertTrue();
          }).catch((err) => {
            console.info(`Pointer_PointerVisibleTest_002 failed, err=${JSON.stringify(err)}`);
            expect(false).assertTrue();
          });
        } catch (error) {
          console.info(`Pointer_PointerVisibleTest_002 error`);
          expect(false).assertTrue();
        }
        try {
          pointer.isPointerVisible((err, data) => {
            if (err) {
              console.info(`Pointer_PointerVisibleTest_002 failed, err=${JSON.stringify(err)}`);
              expect(false).assertTrue();
            } else {
              console.info(`Pointer_PointerVisibleTest_002 success_2, data=${JSON.stringify(data)}`);
              expect(data == true).assertTrue();
              done();
            }
          });
        } catch (error) {
          console.info(`Pointer_PointerVisibleTest_002 error`);
          expect(false).assertTrue();
        }
      } else {
        expect(true).assertTrue();
        console.info('Pointer_PointerVisibleTest_002 SystemCapability.MultimodalInput.Input.Pointer segregate');
        done();
      }
      console.info(`Pointer_PointerVisibleTest_002 exit`);
    })

    it('Pointer_SetPointerStyle_001', 0, async function (done) {
      console.info(`SetPointerStyle_001 enter`);
      function getPropertiesPromise(windowClass) {
        return new Promise((resolve, reject) => {
          windowClass.getProperties(async (err, data) => {
            if (err && err.code != 0) {
              console.info(`SetPointerStyle_001 failed, err=${JSON.stringify(err)}`);
              expect(false).assertTrue();
            }
            try {
              var windowId = data.id;
              await pointer.setPointerStyle(windowId, 4).then(() => {
                expect(true).assertTrue();
                console.info(`SetPointerStyle_001 success`);
                resolve();
              }).catch((err) => {
                expect(false).assertTrue();
                console.info(`SetPointerStyle_001 failed_1, err=${JSON.stringify(err)}`);
              });
            } catch (error) {
              console.info(`SetPointerStyle_001 error`);
              expect(false).assertTrue();
              reject(error);
            }
          })
        })
      }
      var result = canIUse("SystemCapability.MultimodalInput.Input.Pointer");
      console.info('Pointer_SetPointerStyle_001 segregate result=' + result);
      if (result) {
        window.getTopWindow(async (err, data) => {
          console.info(`case:SetPointerStyle_001 enter`);
          var windowClass = data;
          if (err && err.code != 0) {
            console.info(`case:SetPointerStyle_001,getTopWindow failed, err=${JSON.stringify(err)}`);
            return;
          }
          console.info(`case:SetPointerStyle_001 ===========`);
          await getPropertiesPromise(data);
          console.info(`case:SetPointerStyle_001 exit`);
          done();
        })
      } else {
        expect(true).assertTrue();
        console.info('Pointer_SetPointerStyle_001 SystemCapability.MultimodalInput.Input.Pointer segregate');
        done();
      }
    })

    it('Pointer_SetPointerStyle_002', 0, async function (done) {
      console.info(`SetPointerStyle_002 enter`);
      function getPropertiesPromise(windowClass) {
        return new Promise((resolve, reject) => {
          windowClass.getProperties((err, data) => {
            if (err && err.code != 0) {
              console.info(`SetPointerStyle_002 failed, err=${JSON.stringify(err)}`);
              expect(false).assertTrue();
            }
            try {
              var windowId = data.id;
              pointer.setPointerStyle(windowId, 4, (err) => {
              try{
                if (err) {
                  console.info(`SetPointerStyle_002 failed_1, err=${JSON.stringify(err)}`);
                  expect(false).assertTrue();
                } else {
                  console.info(`SetPointerStyle_002 success`);
                  expect(true).assertTrue();
                }
              }catch(error){
                console.info(`SetPointerStyle_002 assert fail`);
              }
                resolve();
              });
            } catch (error) {
              console.info(`SetPointerStyle_002 error`);
              expect(false).assertTrue();
              reject(error);
            }
          })
        })
      }
      var result = canIUse("SystemCapability.MultimodalInput.Input.Pointer");
      console.info('Pointer_SetPointerStyle_002 segregate result=' + result);
      if (result) {
        window.getTopWindow(async (err, data) => {
          console.info(`case:SetPointerStyle_002 enter`);
          var windowClass = data;
          if (err && err.code != 0) {
            console.info(`case:SetPointerStyle_002,getTopWindow failed, err=${JSON.stringify(err)}`);
            return;
          }
          console.info(`case:SetPointerStyle_002 ===========`);
          await getPropertiesPromise(data);
          console.info(`case:SetPointerStyle_002 exit`);
          done();
        })
      } else {
        expect(true).assertTrue();
        console.info('Pointer_SetPointerStyle_002 SystemCapability.MultimodalInput.Input.Pointer segregate');
        done();
      }
    })

    it('Pointer_GetPointerStyle_001', 0, async function (done) {
      console.info(`GetPointerStyle_001 enter`);
      function getPropertiesPromise(windowClass) {
        return new Promise((resolve, reject) => {
          windowClass.getProperties(async (err, data) => {
            if (err && err.code != 0) {
              console.info(`GetPointerStyle_001 failed, err=${JSON.stringify(err)}`);
              expect(false).assertTrue();
            }
            try {
              var windowId = data.id;
              await pointer.getPointerStyle(windowId).then((data) => {
                console.info(`GetPointerStyle_001 success, data=${JSON.stringify(data)}`);
                expect(typeof (data)).assertEqual("number");
                resolve();
              }).catch((err) => {
                console.info(`GetPointerStyle_001 failed_1, err=${JSON.stringify(err)}`);
                expect(false).assertTrue();
              });
            } catch (error) {
              console.info(`GetPointerStyle_001 error`);
              expect(false).assertTrue();
              reject(error);
            }
          })
        })
      }
      var result = canIUse("SystemCapability.MultimodalInput.Input.Pointer");
      console.info('Pointer_GetPointerStyle_001 segregate result=' + result);
      if (result) {
        window.getTopWindow(async (err, data) => {
          console.info(`case:GetPointerStyle_001 enter`);
          var windowClass = data;
          if (err && err.code != 0) {
            console.info(`case:GetPointerStyle_001,getTopWindow failed, err=${JSON.stringify(err)}`);
            return;
          }
          console.info(`case:GetPointerStyle_001 ===========`);
          await getPropertiesPromise(data);
          console.info(`case:GetPointerStyle_001 exit`);
          done();
        })
      } else {
        expect(true).assertTrue();
        console.info('Pointer_GetPointerStyle_001 SystemCapability.MultimodalInput.Input.Pointer segregate');
        done();
      }
    })

    it('Pointer_GetPointerStyle_002', 0, async function (done) {
      console.info(`GetPointerStyle_002 enter`);
      function getPropertiesPromise(windowClass) {
        return new Promise((resolve, reject) => {
          windowClass.getProperties((err, data) => {
            if (err && err.code != 0) {
              console.info(`GetPointerStyle_002 failed, err=${JSON.stringify(err)}`);
              reject();
            }
            try {
              var windowId = data.id;
              pointer.getPointerStyle(windowId, (err, data) => {
                if (err) {
                  console.info(`GetPointerStyle_002 failed_1, err=${JSON.stringify(err)}`);
                  expect(false).assertTrue();
                  reject();
                } else {
                  console.info(`GetPointerStyle_002 success, data=` + typeof (data));
                  expect(data).assertInstanceOf('Number');
                  resolve();
                }
              })
            } catch (error) {
              console.info(`GetPointerStyle_002 error=${JSON.stringify(error)}`);
              expect(false).assertTrue();
              reject(error);
            }
          })
        })
      }
      var result = canIUse("SystemCapability.MultimodalInput.Input.Pointer");
      console.info('Pointer_GetPointerStyle_002 segregate result=' + result);
      if (result) {
        window.getTopWindow(async (err, data) => {
          console.info(`case:GetPointerStyle_002 enter`);
          var windowClass = data;
          if (err && err.code != 0) {
            console.info(`case:GetPointerStyle_002,getTopWindow failed, err=${JSON.stringify(err)}`);
            done();
            return;
          }
          console.info(`case:GetPointerStyle_002 ===========`);
          await getPropertiesPromise(data);
          console.info(`case:GetPointerStyle_002 exit`);
          done();
        })
      } else {
        expect(true).assertTrue();
        console.info('Pointer_GetPointerStyle_002 SystemCapability.MultimodalInput.Input.Pointer segregate');
        done();
      }
    })

    it('Pointer_PointerStyle_test', 0, function () {
      console.info('Pointer_PointerStyle_test = ' + pointer.PointerStyle.DEFAULT);
      expect(pointer.PointerStyle.DEFAULT == 0).assertTrue();

      console.info('Pointer_EAST_test = ' + pointer.PointerStyle.EAST);
      expect(pointer.PointerStyle.EAST == 1).assertTrue();

      console.info('Pointer_WEST_test = ' + pointer.PointerStyle.WEST);
      expect(pointer.PointerStyle.WEST == 2).assertTrue();

      console.info('Pointer_SOUTH_test = ' + pointer.PointerStyle.SOUTH);
      expect(pointer.PointerStyle.SOUTH == 3).assertTrue();

      console.info('Pointer_NORTH_test = ' + pointer.PointerStyle.NORTH);
      expect(pointer.PointerStyle.NORTH == 4).assertTrue();

      console.info('Pointer_WEST_EAST_test = ' + pointer.PointerStyle.WEST_EAST);
      expect(pointer.PointerStyle.WEST_EAST == 5).assertTrue();

      console.info('Pointer_NORTH_SOUTH_test = ' + pointer.PointerStyle.NORTH_SOUTH);
      expect(pointer.PointerStyle.NORTH_SOUTH == 6).assertTrue();

      console.info('Pointer_NORTH_EAST_test = ' + pointer.PointerStyle.NORTH_EAST);
      expect(pointer.PointerStyle.NORTH_EAST == 7).assertTrue();

      console.info('Pointer_NORTH_WEST_test = ' + pointer.PointerStyle.NORTH_WEST);
      expect(pointer.PointerStyle.NORTH_WEST == 8).assertTrue();

      console.info('Pointer_SOUTH_EAST_test = ' + pointer.PointerStyle.SOUTH_EAST);
      expect(pointer.PointerStyle.SOUTH_EAST == 9).assertTrue();

      console.info('Pointer_SOUTH_WEST_test = ' + pointer.PointerStyle.SOUTH_WEST);
      expect(pointer.PointerStyle.SOUTH_WEST == 10).assertTrue();

      console.info('Pointer_NORTH_EAST_SOUTH_WEST_test = ' + pointer.PointerStyle.NORTH_EAST_SOUTH_WEST);
      expect(pointer.PointerStyle.NORTH_EAST_SOUTH_WEST == 11).assertTrue();

      console.info('Pointer_NORTH_WEST_SOUTH_EAST_test = ' + pointer.PointerStyle.NORTH_WEST_SOUTH_EAST);
      expect(pointer.PointerStyle.NORTH_WEST_SOUTH_EAST == 12).assertTrue();

      console.info('Pointer_CROSS_test = ' + pointer.PointerStyle.CROSS);
      expect(pointer.PointerStyle.CROSS == 13).assertTrue();

      console.info('Pointer_CURSOR_COPY_test = ' + pointer.PointerStyle.CURSOR_COPY);
      expect(pointer.PointerStyle.CURSOR_COPY == 14).assertTrue();

      console.info('Pointer_CURSOR_FORBID_test = ' + pointer.PointerStyle.CURSOR_FORBID);
      expect(pointer.PointerStyle.CURSOR_FORBID == 15).assertTrue();

      console.info('Pointer_COLOR_SUCKER_test = ' + pointer.PointerStyle.COLOR_SUCKER);
      expect(pointer.PointerStyle.COLOR_SUCKER == 16).assertTrue();

      console.info('Pointer_HAND_GRABBING_test = ' + pointer.PointerStyle.HAND_GRABBING);
      expect(pointer.PointerStyle.HAND_GRABBING == 17).assertTrue();

      console.info('Pointer_HAND_OPEN_test = ' + pointer.PointerStyle.HAND_OPEN);
      expect(pointer.PointerStyle.HAND_OPEN == 18).assertTrue();

      console.info('Pointer_HAND_POINTING_test = ' + pointer.PointerStyle.HAND_POINTING);
      expect(pointer.PointerStyle.HAND_POINTING == 19).assertTrue();

      console.info('Pointer_HELP_test = ' + pointer.PointerStyle.HELP);
      expect(pointer.PointerStyle.HELP == 20).assertTrue();

      console.info('Pointer_MOVE_test = ' + pointer.PointerStyle.MOVE);
      expect(pointer.PointerStyle.MOVE == 21).assertTrue();

      console.info('Pointer_RESIZE_LEFT_RIGHT_test = ' + pointer.PointerStyle.RESIZE_LEFT_RIGHT);
      expect(pointer.PointerStyle.RESIZE_LEFT_RIGHT == 22).assertTrue();

      console.info('Pointer_RESIZE_UP_DOWN_test = ' + pointer.PointerStyle.RESIZE_UP_DOWN);
      expect(pointer.PointerStyle.RESIZE_UP_DOWN == 23).assertTrue();

      console.info('Pointer_SCREENSHOT_CHOOSE_test = ' + pointer.PointerStyle.SCREENSHOT_CHOOSE);
      expect(pointer.PointerStyle.SCREENSHOT_CHOOSE == 24).assertTrue();

      console.info('Pointer_SCREENSHOT_CURSOR_test = ' + pointer.PointerStyle.SCREENSHOT_CURSOR);
      expect(pointer.PointerStyle.SCREENSHOT_CURSOR == 25).assertTrue();

      console.info('Pointer_TEXT_CURSOR_test = ' + pointer.PointerStyle.TEXT_CURSOR);
      expect(pointer.PointerStyle.TEXT_CURSOR == 26).assertTrue();

      console.info('Pointer_ZOOM_IN_test = ' + pointer.PointerStyle.ZOOM_IN);
      expect(pointer.PointerStyle.ZOOM_IN == 27).assertTrue();

      console.info('Pointer_ZOOM_OUT_test = ' + pointer.PointerStyle.ZOOM_OUT);
      expect(pointer.PointerStyle.ZOOM_OUT == 28).assertTrue();

      console.info('Pointer_MIDDLE_BTN_EAST_test = ' + pointer.PointerStyle.MIDDLE_BTN_EAST);
      expect(pointer.PointerStyle.MIDDLE_BTN_EAST == 29).assertTrue();

      console.info('Pointer_MIDDLE_BTN_WEST_test = ' + pointer.PointerStyle.MIDDLE_BTN_WEST);
      expect(pointer.PointerStyle.MIDDLE_BTN_WEST == 30).assertTrue();

      console.info('Pointer_MIDDLE_BTN_SOUTH_test = ' + pointer.PointerStyle.MIDDLE_BTN_SOUTH);
      expect(pointer.PointerStyle.MIDDLE_BTN_SOUTH == 31).assertTrue();

      console.info('Pointer_MIDDLE_BTN_NORTH_test = ' + pointer.PointerStyle.MIDDLE_BTN_NORTH);
      expect(pointer.PointerStyle.MIDDLE_BTN_NORTH == 32).assertTrue();

      console.info('Pointer_MIDDLE_BTN_NORTH_SOUTH_test = ' + pointer.PointerStyle.MIDDLE_BTN_NORTH_SOUTH);
      expect(pointer.PointerStyle.MIDDLE_BTN_NORTH_SOUTH == 33).assertTrue();

      console.info('Pointer_MIDDLE_BTN_NORTH_EAST_test = ' + pointer.PointerStyle.MIDDLE_BTN_NORTH_EAST);
      expect(pointer.PointerStyle.MIDDLE_BTN_NORTH_EAST == 34).assertTrue();

      console.info('Pointer_MIDDLE_BTN_NORTH_WEST_test = ' + pointer.PointerStyle.MIDDLE_BTN_NORTH_WEST);
      expect(pointer.PointerStyle.MIDDLE_BTN_NORTH_WEST == 35).assertTrue();

      console.info('Pointer_MIDDLE_BTN_SOUTH_EAST_test = ' + pointer.PointerStyle.MIDDLE_BTN_SOUTH_EAST);
      expect(pointer.PointerStyle.MIDDLE_BTN_SOUTH_EAST == 36).assertTrue();

      console.info('Pointer_MIDDLE_BTN_SOUTH_WEST_test = ' + pointer.PointerStyle.MIDDLE_BTN_SOUTH_WEST);
      expect(pointer.PointerStyle.MIDDLE_BTN_SOUTH_WEST == 37).assertTrue();

      console.info('Pointer_MIDDLE_BTN_NORTH_SOUTH_WEST_EAST_test = ' + pointer.PointerStyle.MIDDLE_BTN_NORTH_SOUTH_WEST_EAST);
      expect(pointer.PointerStyle.MIDDLE_BTN_NORTH_SOUTH_WEST_EAST == 38).assertTrue();

      console.info('Pointer_HORIZONTAL_TEXT_CURSOR_test = ' + pointer.PointerStyle.HORIZONTAL_TEXT_CURSOR);
      expect(pointer.PointerStyle.HORIZONTAL_TEXT_CURSOR == 39).assertTrue();

      console.info('Pointer_CURSOR_CROSS_test = ' + pointer.PointerStyle.CURSOR_CROSS);
      expect(pointer.PointerStyle.CURSOR_CROSS == 40).assertTrue();

      console.info('Pointer_CURSOR_CIRCLE_test = ' + pointer.PointerStyle.CURSOR_CIRCLE);
      expect(pointer.PointerStyle.CURSOR_CIRCLE == 41).assertTrue();
    })

    it('Touchpad_RightClickType_test', 0, function () {
      console.info('Touchpad_TOUCHPAD_RIGHT_BUTTON_test = ' + pointer.RightClickType.TOUCHPAD_RIGHT_BUTTON);
      expect(pointer.RightClickType.TOUCHPAD_RIGHT_BUTTON == 1).assertTrue();

      console.info('Touchpad_TOUCHPAD_LEFT_BUTTON_test = ' + pointer.RightClickType.TOUCHPAD_LEFT_BUTTON);
      expect(pointer.RightClickType.TOUCHPAD_LEFT_BUTTON == 2).assertTrue();

      console.info('Touchpad_TOUCHPAD_TWO_FINGER_TAP_test = ' + pointer.RightClickType.TOUCHPAD_TWO_FINGER_TAP);
      expect(pointer.RightClickType.TOUCHPAD_TWO_FINGER_TAP == 3).assertTrue();
    })
    
    /**
     * @tc.number MultimodalInputPointer_Test_001
     * @tc.name MultimodalInputDevice_PointerVisibleTest_Exception_Test_001
     * @tc.desc Pointer interface PointerVisible exception test
     */
    it('Pointer_PointerVisibleTest_Exception_Test_001', 0, async function (done) {
      console.info(`Pointer_PointerVisibleTest_Exception_Test_001 enter`);
      try {
        await pointer.setPointerVisible();
      } catch (error) {
        console.info(`PointerVisibleTest_Exception_Test_001: ${JSON.stringify(error, [`code`, `message`])}`);
        expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
        expect(error.message).assertEqual(errMsg.PARAMETER_VISIBLE_TYPE_MSG);
      }
      try {
        pointer.isPointerVisible((error, data) => {
          if (error) {
            console.info(`PointerVisibleTest_Exception_Test_001 failed, err=${JSON.stringify(error)}`);
            expect(false).assertTrue();
          } else {
            console.info(`PointerVisibleTest_Exception_Test_001 success`);
            expect(data).assertInstanceOf('Boolean');
          }
          done();
        });
      } catch (error) {
        console.info(`PointerVisibleTest_Exception_Test_001: ${JSON.stringify(error, [`code`, `message`])}`);
      }
      console.info(`Pointer_PointerVisibleTest_Exception_Test_001 exit`);
    })

    /**
     * @tc.number MultimodalInputPointer_Test_002
     * @tc.name MultimodalInputDevice_PointerVisibleTest_Exception_Test_002
     * @tc.desc Pointer interface PointerVisible exception test
     */
    it('Pointer_PointerVisibleTest_Exception_Test_002', 0, async function (done) {
      console.info(`Pointer_PointerVisibleTest_Exception_Test_002 enter`);
      try {
        pointer.setPointerVisible(`state`, (error, data) => {
          if (error) {
            console.info(`PointerVisibleTest_Exception_Test_002 failed, err=${JSON.stringify(error)}`);
            expect(false).assertTrue();
          } else {
            console.info(`PointerVisibleTest_Exception_Test_002 success`);
            expect(true).assertTrue();
          }
        });
      } catch (error) {
        console.info(`PointerVisibleTest_Exception_Test_002: ${JSON.stringify(error, [`code`, `message`])}`);
        expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
        expect(error.message).assertEqual(errMsg.PARAMETER_VISIBLE_TYPE_MSG);
      }

      try {
        await pointer.isPointerVisible(null);
      } catch (error) {
        console.info(`PointerVisibleTest_Exception_Test_002: ${JSON.stringify(error, [`code`, `message`])}`);
        expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
        expect(error.message).assertEqual(errMsg.PARAMETER_CALLBACK_TYPE_MSG);
      }
      console.info(`Pointer_PointerVisibleTest_Exception_Test_002 exit`);
      done();
    })

    /**
     * @tc.number MultimodalInputPointer_Test_005
     * @tc.name MultimodalInputDevice_PointerStyleTest_Exception_Test_001
     * @tc.desc Pointer interface PointerStyle exception test
     */
    it('Pointer_PointerStyleTest_Exception_Test_001', 0, async function (done) {
      console.info(`Pointer_PointerStyleTest_Exception_Test_001 enter`);
      try {
        await pointer.setPointerStyle(10, 10, null);
      } catch (error) {
        console.info(`PointerStyleTest_Exception_Test_001: ${JSON.stringify(error, [`code`, `message`])}`);
        expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
        expect(error.message).assertEqual(errMsg.PARAMETER_CALLBACK_TYPE_MSG);
      }

      try {
        await pointer.getPointerStyle(10, null).then((data) => {
          console.info(`PointerStyleTest_Exception_Test_001 success`);
          expect(true).assertTrue();
        }, (error) => {
          console.info(`PointerStyleTest_Exception_Test_001 failed, err=${JSON.stringify(error)}`);
          expect(false).assertTrue();
        });
      } catch (error) {
        console.info(`PointerStyleTest_Exception_Test_001: ${JSON.stringify(error, [`code`, `message`])}`);
        expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
        expect(error.message).assertEqual(errMsg.PARAMETER_CALLBACK_TYPE_MSG);
      }
      console.info(`Pointer_PointerStyleTest_Exception_Test_001 exit`);
      done();
    })

    /**
     * @tc.number MultimodalInputPointer_Test_006
     * @tc.name MultimodalInputDevice_PointerStyleTest_Exception_Test_002
     * @tc.desc Pointer interface PointerStyle exception test
     */
    it('Pointer_PointerStyleTest_Exception_Test_002', 0, async function (done) {
      console.info(`Pointer_PointerStyleTest_Exception_Test_002 enter`);
      try {
        await pointer.setPointerStyle().then((data) => {
          console.info(`PointerStyleTest_Exception_Test_002 success`);
          expect(true).assertTrue();
        }, (error) => {
          console.info(`PointerStyleTest_Exception_Test_002 failed, err=${JSON.stringify(error)}`);
          expect(false).assertTrue();
        });
      } catch (error) {
        console.info(`PointerStyleTest_Exception_Test_002 success`);
        expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
        expect(error.message).assertEqual(errMsg.PARAMETER_WINDOWID_TYPE_MSG);
      }

      try {
        await pointer.getPointerStyle();
      } catch (error) {
        console.info(`PointerStyleTest_Exception_Test_002: ${JSON.stringify(error, [`code`, `message`])}`);
        expect(error.code).assertEqual(errCode.COMMON_PARAMETER_CODE);
        expect(error.message).assertEqual(errMsg.PARAMETER_WINDOWID_TYPE_MSG);
      }
      console.info(`Pointer_PointerStyleTest_Exception_Test_002 exit`);
      done();
    })

    it('Pointer_PointerSizeTest_PositiveCB', 0, async function (done) {
      let ah = new AsyncHelper();

      console.info("Set pointer size value 1");
      expect(pointer.setPointerSize(40, ah.callback())).assertUndefined();
      await ah.verifyOk(undefined);

      console.info("Get pointer size value 1");
      expect(pointer.getPointerSize(ah.callback())).assertUndefined();
      await ah.verifyOk(40);

      console.info("Set pointer size value 2");
      expect(pointer.setPointerSize(50, ah.callback())).assertUndefined();
      await ah.verifyOk(undefined);

      console.info("Get pointer size value 2");
      expect(pointer.getPointerSize(ah.callback())).assertUndefined();
      await ah.verifyOk(50);

      console.info("Set default pointer size");
      expect(pointer.setPointerSize(sizes.DEFAULT_SIZE_VALUE, ah.callback())).assertUndefined();
      await ah.verifyOk(undefined);

      console.info("Get default pointer size");
      expect(pointer.getPointerSize(ah.callback())).assertUndefined();
      await ah.verifyOk(sizes.DEFAULT_SIZE_VALUE);

      done();
    })

    it('Pointer_PointerSizeTest_PositivePromise', 0, async function (done) {
      console.info("Set pointer size value 1");
      expect(await pointer.setPointerSize(40)).assertUndefined();

      console.info("Get pointer size value 1");
      expect(await pointer.getPointerSize()).assertEqual(40);

      console.info("Set pointer size value 1");
      expect(await pointer.setPointerSize(50)).assertUndefined();

      console.info("Get pointer size value 1");
      expect(await pointer.getPointerSize()).assertEqual(50);

      console.info("Set default pointer size");
      expect(await pointer.setPointerSize(sizes.DEFAULT_SIZE_VALUE)).assertUndefined();
      console.info("Get default pointer size");
      expect(await pointer.getPointerSize()).assertEqual(sizes.DEFAULT_SIZE_VALUE);

      done();
    })

    it('Pointer_PointerSizeTest_Errors', 0, async function (done) {
      console.info("Calling setPointerSize() with ivalid argument type 1");
      expect(() => {pointer.setPointerSize()}).assertThrowError(errMsg.PARAMETER_SIZE_TYPE_MSG);
      console.info("Calling setPointerSize() with ivalid argument type 2");
      expect(() => {pointer.setPointerSize("")}).assertThrowError(errMsg.PARAMETER_SIZE_TYPE_MSG);
      console.info("Calling setPointerSize() with ivalid argument type 3");
      expect(() => {pointer.setPointerSize(0, "")}).assertThrowError(errMsg.PARAMETER_CALLBACK_TYPE_MSG);
      console.info("Calling getPointerSize() with ivalid argument type");
      expect(() => {pointer.getPointerSize(0)}).assertThrowError(errMsg.PARAMETER_CALLBACK_TYPE_MSG);

      done();
    })

    it('Pointer_PointerSizeTest_NegativeCB', 0, async function (done) {
      let ah = new AsyncHelper();

      console.info("Calling setPointerSize() with ivalid argument value 1");
      pointer.setPointerSize(0, ah.callback());
      await ah.verifyOk(undefined);

      console.info("Calling getPointerSize() 1");
      pointer.getPointerSize(ah.callback());
      await ah.verifyOk(sizes.MIN_SIZE_VALUE);

      console.info("Calling setPointerSize() with ivalid argument value 2");
      pointer.setPointerSize(10000, ah.callback());
      await ah.verifyOk(undefined);

      console.info("Calling getPointerSize() 2");
      pointer.getPointerSize(ah.callback());
      await ah.verifyOk(sizes.MAX_SIZE_VALUE);

      console.info("Restore default size");
      expect(pointer.setPointerSize(sizes.DEFAULT_SIZE_VALUE, ah.callback())).assertUndefined();
      await ah.verifyOk(undefined);
      expect(pointer.getPointerSize(ah.callback())).assertUndefined();
      await ah.verifyOk(sizes.DEFAULT_SIZE_VALUE);

      done();
    })

    it('Pointer_PointerSizeTest_NegativePromise', 0, async function (done) {
      console.info("Calling setPointerSize() with ivalid argument value 1");
      expect(await pointer.setPointerSize(0)).assertUndefined();

      console.info("Calling getPointerSize() 1");
      expect(await pointer.getPointerSize()).assertEqual(sizes.MIN_SIZE_VALUE);

      console.info("Calling setPointerSize() with ivalid argument value 2");
      expect(await pointer.setPointerSize(10000)).assertUndefined();

      console.info("Calling getPointerSize() 2");
      expect(await pointer.getPointerSize()).assertEqual(sizes.MAX_SIZE_VALUE);

      console.info("Restore default size");
      expect(await pointer.setPointerSize(sizes.DEFAULT_SIZE_VALUE)).assertUndefined();
      expect(await pointer.getPointerSize()).assertEqual(sizes.DEFAULT_SIZE_VALUE);

      done();
    })

    it('Pointer_PointerImagesTest_PositiveCB', 0, async function (done) {
      let ah = new AsyncHelper();

      console.info("Calling setPointerImages() with value 1");
      expect(pointer.setPointerImages([], ah.callback())).assertUndefined();
      await ah.verifyOk(undefined);

      console.info("Calling setPointerImages() with value 2");
      let val = {style: pointer.PointerStyle.DEFAULT, image: "/system/etc/multimodalinput/mouse_icon/Default.svg"};
      expect(pointer.setPointerImages([val], ah.callback())).assertUndefined();
      await ah.verifyOk(undefined);

      done();
    })

    it('Pointer_PointerImagesTest_NegativeCB', 0, async function (done) {
      let ah = new AsyncHelper();

      console.info("Calling setPointerImages() with value 1");
      let val1 = {style: -1, image: "/system/etc/multimodalinput/mouse_icon/Default.svg"};
      expect(pointer.setPointerImages([val1], ah.callback())).assertUndefined();
      await ah.verifyError(errCode.COMMON_PARAMETER_CODE, errMsg.PARAMETER_STYLE_VALUE_MSG);

      console.info("Calling setPointerImages() with value 2");
      let val2 = {style: pointer.PointerStyle.DEFAULT, image: ""};
      expect(pointer.setPointerImages([val2], ah.callback())).assertUndefined();
      await ah.verifyError(errCode.COMMON_PARAMETER_CODE, errMsg.PARAMETER_PATH_VALUE_MSG);

      done();
    })

    it('Pointer_PointerImagesTest_PositivePromise', 0, async function (done) {
      console.info("Calling setPointerImages() with value 1");
      expect(await pointer.setPointerImages([])).assertUndefined();

      console.info("Calling setPointerImages() with value 2");
      let val = {style: pointer.PointerStyle.DEFAULT, image: "/system/etc/multimodalinput/mouse_icon/Default.svg"};
      expect(await pointer.setPointerImages([val])).assertUndefined();

      done();
    })

    it('Pointer_PointerImagesTest_NegativePromise', 0, async function (done) {
      let ah = new AsyncHelper();

      console.info("Calling setPointerImages() with value 1");
      let val1 = {style: -1, image: "/system/etc/multimodalinput/mouse_icon/Default.svg"};
      await assertPromiseError(pointer.setPointerImages([val1]), errCode.COMMON_PARAMETER_CODE,
          errMsg.PARAMETER_STYLE_VALUE_MSG);

      console.info("Calling setPointerImages() with value 2");
      let val2 = {style: pointer.PointerStyle.DEFAULT, image: ""};
      await assertPromiseError(pointer.setPointerImages([val2]), errCode.COMMON_PARAMETER_CODE,
          errMsg.PARAMETER_PATH_VALUE_MSG);

      done();
    })

    it('Pointer_PointerImagesTest_Errors', 0, async function (done) {
      console.info("Calling setPointerImages() with ivalid argument type 1");
      expect(() => {pointer.setPointerImages()}).assertThrowError(errMsg.PARAMETER_IMAGES_TYPE_MSG);
      console.info("Calling setPointerImages() with ivalid argument type 2");
      expect(() => {pointer.setPointerImages(0)}).assertThrowError(errMsg.PARAMETER_IMAGES_TYPE_MSG);
      console.info("Calling setPointerImages() with ivalid argument type 3");
      expect(() => {pointer.setPointerImages({})}).assertThrowError(errMsg.PARAMETER_IMAGES_TYPE_MSG);
      console.info("Calling setPointerImages() with ivalid argument type 4");
      expect(() => {pointer.setPointerImages([], "")}).assertThrowError(errMsg.PARAMETER_CALLBACK_TYPE_MSG);
      console.info("Calling setPointerImages() with ivalid argument type 5");
      expect(() => {pointer.setPointerImages([{}], "")}).assertThrowError(errMsg.PARAMETER_IMAGES_ELEMENT_TYPE_MSG);
      console.info("Calling setPointerImages() with ivalid argument type 6");
      expect(() => {pointer.setPointerImages([{style: 0}], "")})
          .assertThrowError(errMsg.PARAMETER_IMAGES_ELEMENT_TYPE_MSG);
      console.info("Calling setPointerImages() with ivalid argument type 7");
      expect(() => {pointer.setPointerImages([{style: "", image: ""}], "")})
          .assertThrowError(errMsg.PARAMETER_STYLE_TYPE_MSG);
      console.info("Calling setPointerImages() with ivalid argument type 8");
      expect(() => {pointer.setPointerImages([{style: 0, image: 0}], "")})
          .assertThrowError(errMsg.PARAMETER_IMAGE_TYPE_MSG);

      done();
    })
  })
}