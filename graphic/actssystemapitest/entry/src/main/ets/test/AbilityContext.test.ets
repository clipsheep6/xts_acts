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

import { describe, beforeAll, it, expect } from '@ohos/hypium'
import ohosWindow from '@ohos.window';

export default function abilityContextTest(context, windowStage, abilityStorage) {
  console.log('windowTest context: ' + JSON.stringify(context))
  console.log('windowTest abilityStorage: ' + JSON.stringify(abilityStorage))
  describe('abilityContextTest', function () {
    var systemWindowValueArr = [];
    var systemWindowTypeArr = [];
    var systemWindowTypeDicArr = [];
    var systemWindowTypeDic = {
      'TYPE_SYSTEM_ALERT': 1,
      'TYPE_INPUT_METHOD': 2,
      'TYPE_STATUS_BAR': 3,
      'TYPE_PANEL': 4,
      'TYPE_KEYGUARD': 5,
      'TYPE_VOLUME_OVERLAY': 6,
      'TYPE_NAVIGATION_BAR': 7,
      'TYPE_FLOAT': 8,
      'TYPE_FLOAT_CAMERA': 9
    }
  beforeAll(function () {
      console.log('jsunittest beforeall ohosWindow.WindowType=' + JSON.stringify(ohosWindow.WindowType));
      systemWindowTypeDicArr = Object.keys(systemWindowTypeDic);
      console.log('jsunittest beforeall systemWindowTypeDicArr=' + JSON.stringify(systemWindowTypeDicArr) + '   ,length=' + systemWindowTypeDicArr.length);
      systemWindowValueArr = Object.keys(systemWindowTypeDic);
      systemWindowTypeArr = Object.keys(systemWindowTypeDic);
    })
   
    var code = null
    it('WindowExtensionContext_Test_startAbilityContext_0100', 0, function (done) {
      
      var want = {
        abilityName: "TestAbility",
        bundleName: "com.acts.systemapitest"
      };
      var options = {
        windowMode: 102
      };
      try {
        context.startAbility(want, options, (error) => {
          if (error.code) {
            // 处理业务逻辑错误
            console.info('startAbility failed, error.code: ' + JSON.stringify(error.code) +
              ' error.message: ' + JSON.stringify(error.message));
            
            return;
          }
          // 执行正常业务
          console.info('startAbility succeed');
          code = 'startAbility succeed'
          expect(code).assertEqual('startAbility succeed');

          
        });
      } catch (paramError) {
        // 处理入参错误异常
        console.info('try failed'+'error.code: ' + JSON.stringify(paramError.code) +
          ' error.message: ' + JSON.stringify(paramError.message));
      }
      done()
    })
 
    it('WindowExtensionContext_Test_startAbilityContext_0200', 0, function (done) {
      var want = {
        abilityName: "TestAbility",
        bundleName: "com.acts.systemapitest"
      };
      var options = {
        windowMode: 102
      };

      try {
        context.startAbility(want,(error) => {
          if (error.code) {
            // 处理业务逻辑错误
            console.info('startAbility failed, error.code: ' + JSON.stringify(error.code) +
              ' error.message: ' + JSON.stringify(error.message));
            let code = 'startAbility failed'
                  expect(code).assertEqual('startAbility failed');

            return;
          }
          // 执行正常业务
          console.info('startAbility succeed');
        });
      } catch (paramError) {
        // 处理入参错误异常
        console.info('error.code: ' + JSON.stringify(paramError.code) +
          ' error.message: ' + JSON.stringify(paramError.message));
      }
        done();

    })

    

    it('WindowExtensionContext_Test_startAbilityContext_0400', 0, function (done) {
      var want = {
        abilityName: "TestAbility",
        bundleName: "com.acts.systemapitest"
      };
      var options = {
        windowMode: 10102
      };

      try {
        context.startAbility(want,options,(error) => {
          if (error.code) {
            // 处理业务逻辑错误
            console.info('startAbility failed, error.code: ' + JSON.stringify(error.code) +
              ' error.message: ' + JSON.stringify(error.message));
            return;
          }
          // 执行正常业务
          console.info('startAbility succeed');
          let code = 'startAbility failed'
                expect(code).assertEqual('startAbility failed');

        });
      } catch (paramError) {
        // 处理入参错误异常
        console.info('error.code: ' + JSON.stringify(paramError.code) +
          ' error.message: ' + JSON.stringify(paramError.message));
      }
        done();

    })

    it('WindowExtensionContext_Test_startAbilityContext_0500', 0, function (done) {
      var want = {
         abilityName: "TestAbility",
        bundleName: "com.acts.systemapitest"
        };
        var options = {
          windowMode: 102,
        };

        try {
          context.startAbility(want, options)
            .then((data) => {
              // 执行正常业务
              console.info('startAbility succeed');
              let code = 'startAbility succeed'
                      expect(code).assertEqual('startAbility succeed');

            })
            .catch((error) => {
              // 处理业务逻辑错误
              console.info('startAbility failed, error.code: ' + JSON.stringify(error.code) +
                ' error.message: ' + JSON.stringify(error.message));
              expect(error.code).assertEqual(16000050);
            });
        } catch (paramError) {
          // 处理入参错误异常
          expect().assertFail();
          console.info('error.code: ' + JSON.stringify(paramError.code) +
            ' error.message: ' + JSON.stringify(paramError.message));
        }
        done();

    })

    it('WindowExtensionContext_Test_startAbilityContext_0600', 0, function (done) {
      var want = {
         abilityName: "TestAbility",
         bundleName: "com.acts.systemapitest"
        };
        var options = {
          windowMode: 102,
        };

        try {
          context.startAbility(want)
            .then((data) => {
              // 执行正常业务
              console.info('startAbility succeed');
                      expect(code).assertEqual("startAbility succeed");

            })
            .catch((error) => {
              let code = "startAbility succeed"
              // 处理业务逻辑错误
              console.info('startAbility failed, error.code: ' + JSON.stringify(error.code) +
                ' error.message: ' + JSON.stringify(error.message));
            });
        } catch (paramError) {
          // 处理入参错误异常
          expect().assertFail();
          console.info('error.code: ' + JSON.stringify(paramError.code) +
            ' error.message: ' + JSON.stringify(paramError.message));
        }
        done();


    })

     it('WindowExtensionContext_Test_startAbilityContext_0700', 0, function (done) {
      var want = {
        abilityName: 1234,
        bundleName: "com.acts.systemapitest"
        };
        var options = {
          windowMode: 102,
        };

        try {
          context.startAbility(want, options)
            .then((data) => {
              // 执行正常业务
              console.info('startAbility succeed');
            })
            .catch((error) => {
              // 处理业务逻辑错误
              let code = "startAbility failed"
              console.info('startAbility failed, error.code: ' + JSON.stringify(error.code) +
                ' error.message: ' + JSON.stringify(error.message));
                expect(code).assertEqual("startAbility failed");

            });
        } catch (paramError) {
          // 处理入参错误异常
          expect().assertFail();
          console.info('error.code: ' + JSON.stringify(paramError.code) +
            ' error.message: ' + JSON.stringify(paramError.message));
        }
        done();

    })

  it('WindowExtensionContext_Test_startAbilityContext_0800', 0, function (done) {
        var want = {
           abilityName: "failedability",
           bundleName: "failedability"
          };
          var options = {
            windowMode: 102,
          };

          try {
            context.startAbility(want,options)
              .then((data) => {
                // 执行正常业务
                console.info('startAbility succeed');
              })
              .catch((error) => {
                // 处理业务逻辑错误
                console.info('startAbility failed, error.code: ' + JSON.stringify(error.code) +
                  ' error.message: ' + JSON.stringify(error.message));
                  let code = "startAbility failed"
                            expect(code).assertEqual("startAbility failed");

              });
          } catch (paramError) {
            // 处理入参错误异常
            expect().assertFail();
            console.info('error.code: ' + JSON.stringify(paramError.code) +
              ' error.message: ' + JSON.stringify(paramError.message));
          }
          done();

      })
     
    it('WindowExtensionContext_Test_startAbilityContext_0300', 0, function (done) {
      var want = {
        abilityName: "failedability",
        bundleName: "failedability"
      };
      var options = {
        windowMode: 102
      };
      try {
        context.startAbility(want,options,(error) => {
          if (error.code) {
            // 处理业务逻辑错误
            console.info('startAbility failed, error.code: ' + JSON.stringify(error.code) +
              ' error.message: ' + JSON.stringify(error.message));
            let code = "startability failed"
            expect(code).assertEqual("startability failed");

            return;
          }
          // 执行正常业务
          console.info('startAbility succeed');
          code = 'startAbility succeed'
        });
      } catch (paramError) {
        // 处理入参错误异常
        console.info('error.code: ' + JSON.stringify(paramError.code) +
          ' error.message: ' + JSON.stringify(paramError.message));
      }

      done();


    })

    })
}