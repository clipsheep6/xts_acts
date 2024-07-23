/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import installer from '@ohos.bundle.installer';
import { BusinessError } from '@ohos.base';
import launcherBundleManager from '@ohos.bundle.launcherBundleManager';


const PARAMETER_ERROR = 401;

export default function iconStartShortCutInfoIssuse() {
  describe('IconStartShortCutInfoIssuse', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(() => {
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

    /*
     * @tc.number: Sub_Bms_Framework_Icon_Start_0100
     * @tc.name: startShortcut01
     * @tc.desc: StartShortcut interface ShortcutInfo parameter exception
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('startShortcut01', 0, (done: Function) => {
      installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
        data.install(['/data/storage/el2/base/files/'], (err: BusinessError) => {
          console.log("install success");
          if (err) {
            console.error(`code== ${err.code}`);
            expect().assertFalse()
            done()
          }
        });
      })
      let code1: number = 0
      let code2: number = 0
      let code3: number = 0
      let code4: number = 0
      try {
        try {
          launcherBundleManager.startShortcut(null)
            .then(() => {
              console.log("startShortcut success");
            })
        } catch (error) {
          code1 = (error as BusinessError).code;
          let message = (error as BusinessError).message;
          console.error(`error is errCode1:${code1}  message:${message}`);
        }
        try {
          launcherBundleManager.startShortcut(undefined)
            .then(() => {
              console.log("startShortcut success");
            })
        } catch (error) {
          code2 = (error as BusinessError).code;
          let message = (error as BusinessError).message;
          console.error(`error is errCode2:${code2}  message:${message}`);
        }
        try {
          launcherBundleManager.startShortcut(undefined, {})
            .then(() => {
              console.log("startShortcut success");
            })
        } catch (error) {
          code3 = (error as BusinessError).code;
          let message = (error as BusinessError).message;
          console.error(`error is errCode3:${code3}  message:${message}`);
        }
        try {
          launcherBundleManager.startShortcut(null, {})
            .then(() => {
              console.log("startShortcut success");
            })
        } catch (error) {
          code4 = (error as BusinessError).code;
          let message = (error as BusinessError).message;
          console.error(`error is errCode4:${code4}  message:${message}`);
        }
        if ((code1 === PARAMETER_ERROR) && (code2 === PARAMETER_ERROR) && (code3 === PARAMETER_ERROR) && (code4 === PARAMETER_ERROR)) {
          expect(true).assertTrue()
          console.log("startShortcut assertTrue");
          done();
        }
      } catch (errData) {
        let code = (errData as BusinessError).code;
        let message = (errData as BusinessError).message;
        console.error(`errData is errCode:${code}  message:${message}`);
      }
    })

    /*
     * @tc.number: Sub_Bms_Framework_Icon_Start_0200
     * @tc.name: startShortcut02
     * @tc.desc: StartShortcut interface ShortcutInfo parameter exception
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 2
     */
    it('startShortcut02', 0, (done: Function) => {
      let flag1: boolean = false
      let flag2: boolean = false

      try {
        let data: Array<launcherBundleManager.ShortcutInfo> = launcherBundleManager.getShortcutInfoSync("com.hits.shortcut");
        console.log("data1 is " + JSON.stringify(data));
        if (data) {
          try {
            launcherBundleManager.startShortcut(data[0], null)
              .then(() => {
                flag1 = true;
                console.log("startShortcut success  flag1 " + flag1);
              }).catch((err: BusinessError) => {
              console.error(`startShortcut errData is errCode:${err.code}  message:${err.message}`);
            });
          } catch (error) {
            let code = (error as BusinessError).code;
            let message = (error as BusinessError).message;
            console.error(`startShortcut1  error is errCode:${code}  message:${message}`);
          }
        }
        let data2: Array<launcherBundleManager.ShortcutInfo> = launcherBundleManager.getShortcutInfoSync("com.hits.shortcut");
        console.log("data2 is " + JSON.stringify(data2));
        if (data2) {
          try {
            launcherBundleManager.startShortcut(data2[0], {})
              .then(() => {
                flag2 = true;
                console.log("startShortcut success  flag2 " + flag2);
              }).catch((err: BusinessError) => {
              console.error(`errData is errCode:${err.code}  message:${err.message}`);
            });

          } catch (error) {
            let code = (error as BusinessError).code;
            let message = (error as BusinessError).message;
            console.error(`startShortcut2 error is errCode:${code}  message:${message}`);
          }
        }
      } catch (errData) {
        let code = (errData as BusinessError).code;
        let message = (errData as BusinessError).message;
        console.error(`errData is errCode:${code}  message:${message}`);
      }
    })
  })
}