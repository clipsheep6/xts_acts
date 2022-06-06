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

// @ts-nocheck
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "deccjsunit/index"
import window from '@ohos.window';

export default function windowToggleAllAppWindowsTest(context, windowStage) {
  console.log('windowTest context: ' + JSON.stringify(context))
  describe('windowToggleAllAppWindows_test', function () {
    console.log('describe window_api_test start!!!')
    const TRUE_WINDOW = true;
    const LEFT = 300;
    const TOP = 300;

    beforeAll(function () {
      //toggleShownStateForAllAppWindows
    })
    beforeEach(function () {
    })
    afterEach(async function (done) {
       done();
    })
    afterAll(function () {
    })


    /**
    * @tc.number     SUB_WINDOW_TOGGLESHOWNSTATEFORALLAPPWINDOWSJSAPI_001
    * @tc.name       Test toggleShownStateForAllAppWindowsTest1
    * @tc.desc       Verify all app hide and create subwindow, restore all app window is not normal
   */
    it('toggleShownStateForAllAppWindowsTest1', 0, async function (done) {
      windowStage.createSubWindow("win03").then(wnd => {
        console.log('createSubWindow success');
        wnd.setWindowMode(102).then(() => {
          console.log('setWindMode03 success ' + wnd);
          wnd.resetSize(300, 300).then(() => {
            console.log('resetSize03 success');
          } ,(err) => {
            console.log('resetSize03 err: ' + JSON.stringify(err));
          })
          wnd.moveTo(300, 300).then(() => {
            console.log('move03 to success');
          } ,(err) => {
            console.log('moveTo03 err: ' + JSON.stringify(err));
          })
          wnd.loadContent('pages/three').then(() => {
            console.log('load03 success');
          } ,(err) => {
            console.log('load03 err: ' + JSON.stringify(err));
          })
          wnd.show().then(() => {
            console.log('show03 success');
            window.toggleShownStateForAllAppWindows().then(() => {
              console.error("toggleShownStateForAllAppWindows hide");
              expect(TRUE_WINDOW).assertTrue();
              windowStage.createSubWindow("win04").then(wnd => {
                wnd.setWindowMode(102).then(() => {
                  console.log('setWindMode04 success' + wnd);
                  wnd.resetSize(100, 100).then(() => {
                    console.log('resetSize04 success');
                  } ,(err) => {
                    console.log('resetSize04 err: ' + JSON.stringify(err));
                  })
                  wnd.moveTo(100, 100).then(() => {
                    console.log('move04 to success');
                  } ,(err) => {
                    console.log('moveTo04 err: ' + JSON.stringify(err));
                  })
                  wnd.loadContent('pages/three').then(() => {
                    console.log('load04 success');
                  } ,(err) => {
                    console.log('load04 err: ' + JSON.stringify(err));
                  })
                  wnd.show().then(() => {
                    console.log('show04 success');
                  } ,(err) => {
                    console.log('show04 err: ' + JSON.stringify(err));
                  })
                } ,(err) => {
                  console.log('setWindowMode04 err: ' + JSON.stringify(err));
                })
              } ,(err) => {
                console.log('win04 err: ' + JSON.stringify(err));
                expect().assertFail();
                done();
              })
              setTimeout(function () {
                window.toggleShownStateForAllAppWindows().then(() => {
                  wnd.getProperties().then(pro => {
                    expect(LEFT).assertEqual(pro.windowRect.left );
                    expect(TOP).assertEqual(pro.windowRect.top);
                    done();
                  } ,(err) => {
                    console.log('getProperties err: ' + JSON.stringify(err));
                  })
                  window.find('win03').then(win => {
                    console.log('find03 success');
                    win.getProperties().then(pro => {
                      expect(0).assertEqual(pro.windowRect.left);
                      expect(0).assertEqual(pro.windowRect.top);
                      done();
                    } ,(err) => {
                      console.log('getProperties03 err: ' + JSON.stringify(err));
                      expect().assertFail();
                      done();
                    })

                  } ,(err) => {
                    console.log('fin03 err: ' + JSON.stringify(err));
                  })
                  window.find('win03').then(win => {
                    console.log('find03 success');
                    win.destroy().then(() => {
                      console.log('destroy03 success');
                    } ,(err) => {
                      console.log('find03 err: ' + JSON.stringify(err));
                    })
                  } ,(err) => {
                    console.log('fin03 err: ' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                  })
                  window.find('win04').then(win => {
                    console.log('find04 success');
                    win.destroy().then(() => {
                      console.log('destroy04 success');
                    } ,(err) => {
                      console.log('fin04 err: ' + JSON.stringify(err));
                    })
                  } ,(err) => {
                    console.log('finf err: ' + JSON.stringify(err));
                  })
                } ,(err) => {
                  console.log('toggleShownStateForAllAppWindows err: ' + JSON.stringify(err));
                  expect().assertFail();
                  done();
                })
              } ,4000)
            } ,(err) => {
              console.log('toggleShownStateForAllAppWindows err: ' + JSON.stringify(err));
              expect().assertFail();
              done();
            })
          } ,(err) => {
            console.log('show03 err: ' + JSON.stringify(err));
          })
        } ,(err) => {
          console.log('setWindowMode03 err: ' + JSON.stringify(err));
          expect().assertFail();
          done();
        })
        done();
      }, (err) => {
        console.log('createSubWindow03 err: ' + JSON.stringify(err));
        expect().assertFail();
        done();
      })
      done();
    })

    /**
     * @tc.number     SUB_WINDOW_TOGGLESHOWNSTATEFORALLAPPWINDOWSJSAPI_002
    * @tc.name       Test toggleShownStateForAllAppWindowsTest2
    * @tc.desc       Verify all app hide  restore all app window is normal
    */
    it('toggleShownStateForAllAppWindowsTest2', 0, async function (done) {
      windowStage.createSubWindow("win02").then(wnd => {
        console.log('createSubWindow win02 success');
        wnd.setWindowMode(102).then(() => {
          console.log('setWindMode win02 success' + wnd);
          wnd.resetSize(300, 300).then(() => {
            console.log('resetSize success');
            expect(TRUE_WINDOW).assertTrue();
            done();
          }, (err) => {
            console.log('resetSize err: ' + JSON.stringify(err));
            expect(TRUE_WINDOW).assertFail();
            done();
          })
          wnd.moveTo(300, 300).then(() => {
            console.log('move to success');
            expect(TRUE_WINDOW).assertTrue();
            done();
          }, (err) => {
            console.log('moveTo err: ' + JSON.stringify(err));
            expect(TRUE_WINDOW).assertFail();
            done();
          })
          wnd.loadContent('pages/three').then(() => {
            console.log('load success');
            expect(TRUE_WINDOW).assertTrue();
            done();
          }, (err) => {
            console.log('setloadContent err: ' + JSON.stringify(err));
            expect(TRUE_WINDOW).assertFail();
            done();
          })
          wnd.show().then(() => {
            console.log('show success');
            wnd.getProperties().then(pro => {
              expect(LEFT).assertEqual(pro.windowRect.left );
              expect(TOP).assertEqual(pro.windowRect.top);
              done();
            } ,(err) => {
              console.log('getProperties err: ' + JSON.stringify(err));
              expect(TRUE_WINDOW).assertFail();
              done();
            })
            window.toggleShownStateForAllAppWindows((err,data) => {
              expect(TRUE_WINDOW).assertTrue();
              console.error("toggleShownStateForAllAppWindows hide");
              setTimeout(function() {
                console.info('sleep 2s')
                window.toggleShownStateForAllAppWindows((err,data) => {
                  expect(TRUE_WINDOW).assertTrue();
                  console.info('toggleShownStateForAllAppWindows restore')
                  setTimeout(function() {
                    wnd.getProperties().then(pro => {
                      expect(LEFT).assertEqual(pro.windowRect.left );
                      expect(TOP).assertEqual(pro.windowRect.top);
                      done();
                    } ,(err) => {
                      console.log('getProperties err: ' + JSON.stringify(err));
                    })
                    window.find('win02').then(win => {
                      console.log('findwin02 success');
                      win.destroy().then(() => {
                        console.log('destroy02 success');
                      } ,(err) => {
                        console.log('findwin02 err: ' + JSON.stringify(err));
                      })

                    } ,(err) => {
                      console.log('finf err: ' + JSON.stringify(err));
                    })
                  } ,1000)
                })
              } ,4000);
            })
          }, (err) => {
            console.log('show err: ' + JSON.stringify(err));
          })
        }, (err) => {
          console.log('setWindowMode err: ' + JSON.stringify(err));
          expect(TRUE_WINDOW).assertFail();
          done();
        })
      }, (err) => {
        console.log('createSubWindow02 err: ' + JSON.stringify(err));
        expect(TRUE_WINDOW).assertFail();
        done();
      })
      done();
    })
    /**
     * @tc.number     SUB_WINDOW_TOGGLESHOWNSTATEFORALLAPPWINDOWSJSAPI_003
     * @tc.name       Test toggleShownStateForAllAppWindowsTest3
     * @tc.desc       Verify all app hide and system window not support
    */
    it('toggleShownStateForAllAppWindowsTest3', 0, async function (done) {
        window.create(context ,"wins" ,window.WindowType.TYPE_SYSTEM_ALERT).then(wnd => {
           wnd.resetSize(300, 300).then(() => {
              console.log('resetSize wins success');
              expect(TRUE_WINDOW).assertTrue();
              done();
            } ,(err) => {
               console.log('resetSize wins err: ' + JSON.stringify(err));
               expect(TRUE_WINDOW).assertFail();
               done();
            })
           wnd.moveTo(300, 300).then(() => {
               console.log('move wins to success');
               expect(TRUE_WINDOW).assertTrue();
               done();
           }, (err) => {
               console.log('moveTo wins err: ' + JSON.stringify(err));
               expect(TRUE_WINDOW).assertFail();
               done();
           })
           wnd.loadContent('pages/three').then(() => {
                console.log('load wins success');
                expect(TRUE_WINDOW).assertTrue();
                done();
           } ,(err) => {
                 console.log('setWindowMode wins err: ' + JSON.stringify(err));
                 expect(TRUE_WINDOW).assertFail();
                 done();
           })
           wnd.show().then(() => {
               console.log('show wins success');
               wnd.getProperties().then(pro => {
                  expect(LEFT).assertEqual(pro.windowRect.left);
                  expect(TOP).assertEqual(pro.windowRect.top);
                  done();
               } ,(err) => {
                   console.log('getProperties err: ' + JSON.stringify(err));
                   expect(TRUE_WINDOW).assertFail();
                   done();
               })
               window.toggleShownStateForAllAppWindows().then(() => {
                   expect(TRUE_WINDOW).assertTrue();
                   console.error("toggleShownStateForAllAppWindows hide");
                   setTimeout(function() {
                        wnd.getProperties().then(pro => {
                      expect(LEFT).assertEqual(pro.windowRect.left);
                      expect(TOP).assertEqual(pro.windowRect.top);
                       done();
                   } ,(err) => {
                      console.log('getProperties err: ' + JSON.stringify(err));
                      expect(TRUE_WINDOW).assertFail();
                      done();
                   })
                        windowStage.getMainWindow().then(winM => {
                        winM.getProperties().then(pro => {
                          expect(0).assertEqual(pro.windowRect.left);
                          expect(0).assertEqual(pro.windowRect.top);
                          done();
                     } ,(err) => {
                         console.log('getProperties err: ' + JSON.stringify(err));
                         expect(TRUE_WINDOW).assertFail();
                         done();
                     })

                  } ,(err) => {
                     console.log('winMain err: ' + JSON.stringify(err));
                     expect(TRUE_WINDOW).assertFail();
                     done();
                  })
                    } ,3000)
               } ,(err) => {
                       console.log('toggleShownStateForAllAppWindows err: ' + JSON.stringify(err));
                       expect().assertFail();
                       done();
               })
           } ,(err) => {
               console.log('show err: ' + JSON.stringify(err));
               expect(TRUE_WINDOW).assertFail();
               done();
           })
           window.find('wins').then(win => {
               console.log('find wins success');
               expect(TRUE_WINDOW).assertTrue();
               win.destroy().then(() => {
                  console.log('destroy wins success');
                  expect(TRUE_WINDOW).assertTrue();
               } ,(err) => {
                  console.log('find wins err: ' + JSON.stringify(err));
                  expect(TRUE_WINDOW).assertFail();
                  done();
               })
           } ,(err) => {
               console.log('find wins err: ' + JSON.stringify(err));
               expect(TRUE_WINDOW).assertFail();
               done();
           })
        } ,(err) => {
            console.log('createSubWindow err: ' + JSON.stringify(err));
            expect(TRUE_WINDOW).assertFail();
            done();
        })
        done();
    })

    /**
    * @tc.number     SUB_WINDOW_TOGGLESHOWNSTATEFORALLAPPWINDOWSJSAPI_004
    * @tc.name       Test toggleShownStateForAllAppWindowsTest4
    * @tc.desc       Verify all app hide and spit windowMode
   */
    it('toggleShownStateForAllAppWindowsTest4', 0, async function (done) {
        windowStage.createSubWindow("win05").then(wnd => {
             console.log('createSubWindow05 success');
             wnd.setWindowMode(101).then(() => {
                 console.log('setWindMode05 success' + wnd);
                 wnd.resetSize(300, 300).then(() => {
                    console.log('resetSize05 success');
                 } ,(err) => {
                     console.log('resetSize05 err: ' + JSON.stringify(err));
                 })
                 wnd.moveTo(300, 300).then(() => {
                     console.log('move to success');
                 } ,(err) => {
                     console.log('moveTo err: ' + JSON.stringify(err));
                 })
                 wnd.loadContent('pages/three').then(() => {
                    console.log('load success');
                  } ,(err) => {
                     console.log('setWindowMode err: ' + JSON.stringify(err));
                  })
                 wnd.show().then(() => {
                     console.log('show success');
                 } ,(err) => {
                    console.log('show err: ' + JSON.stringify(err));
                 })
             } ,(err) => {
                  console.log('setWindowMode err: ' + JSON.stringify(err));
             })
            setTimeout(function() {
                console.info('sleep 4s')
                wnd.getProperties().then(pro => {
                   expect(LEFT).assertEqual(pro.windowRect.left);
                   expect(TOP).assertEqual(pro.windowRect.top);
                   done();
                } ,(err) => {
                   console.log('getProperties err: ' + JSON.stringify(err));
                })
                window.toggleShownStateForAllAppWindows((err,data) => {
                    expect(TRUE_WINDOW).assertTrue();
                    console.error("toggleShownStateForAllAppWindows05 hide");
                    setTimeout(function() {
                        console.info('sleep 2s')
                        window.toggleShownStateForAllAppWindows((err,data) => {
                           console.info('toggleShownStateForAllAppWindows05 restore')
                           setTimeout(function() {
                               wnd.getProperties().then(pro => {
                                 expect(LEFT).assertEqual(pro.windowRect.left);
                                 expect(TOP).assertEqual(pro.windowRect.top);
                                 done();
                                } ,(err) => {
                                   console.log('getProperties err: ' + JSON.stringify(err));
                               })
                               windowStage.getWindowMode().then(wm => {
                                   console.log('wm success' + JSON.stringify(wm));
                                   //expect(wm).assertEqual(window.WindowMode.SECONDARY);
                                } ,(err) => {
                                    console.log('getProperties err: ' + JSON.stringify(err));
                                })
                               window.find('win05').then(win => {
                                   console.log('find success');
                                   win.destroy().then(() => {
                                      console.log('destroy success');
                                   } ,(err) => {
                                     console.log('destroy err: ' + JSON.stringify(err));
                                   })
                               } ,(err) => {
                                  console.log('finf err: ' + JSON.stringify(err));
                               })
                           } ,1000)
                        })
                    } ,2000);
                 })
            } ,4000)
        }, (err) => {
              console.log('createSubWindow err: ' + JSON.stringify(err));
              expect().assertFail();
              done();
        })
		done();
    })

  })
}
