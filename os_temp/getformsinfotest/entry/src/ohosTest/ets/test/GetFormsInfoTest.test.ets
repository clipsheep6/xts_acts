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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'

import formInfo from '@ohos.app.form.formInfo';

import formHost from '@ohos.app.form.formHost';
import Base from '@ohos.base';


export default function getFormsInfoTest() {
  describe('GetFormsInfoTest', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(() => {
      console.log("testcase start")

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
     * @tc.number: SUB_Ability_AbilityForm_GetFormsInfo_GetFormsInfo_3300
     * @tc.name: SUB_Ability_AbilityForm_GetFormsInfo_GetFormsInfo_3300
     * @tc.desc: #1: getFormsInfo(callback)
     * @tc.type: Function
     * @tc.level 3
     */
    it('SUB_Ability_AbilityForm_GetFormsInfo_GetFormsInfo_3300', 0, async (done: Function) => {
      formHost.getFormsInfo('com.example.myapplication', 'entry', (error: Base.BusinessError, data: formInfo.FormInfo[]) => {
        if (error) {
          console.error(`formHost getFormsInfo, error: ${JSON.stringify(error)}`);
          expect().assertFail()
        } else {
          console.log(`formHost getFormsInfo, data: ${JSON.stringify(data)}`);
          if (data) {
            done();
          } else expect().assertFail()
        }
      });
    });

    /**
     * @tc.number: SUB_Ability_AbilityForm_GetFormsInfo_GetFormsInfo_3400
     * @tc.name: SUB_Ability_AbilityForm_GetFormsInfo_GetFormsInfo_3400
     * @tc.desc: #1: getFormsInfo(callback)
     * @tc.type: Function
     * @tc.level 3
     */
    it("SUB_Ability_AbilityForm_GetFormsInfo_GetFormsInfo_3400", 0, async (done: Function) => {
      formHost.getFormsInfo('com.example.myapplication', (error: Base.BusinessError, data: formInfo.FormInfo[]) => {
        if (error) {
          console.error(`formHost getFormsInfo, error: ${JSON.stringify(error)}`);
          expect().assertFail()
        } else {
          console.log(`formHost getFormsInfo, data: ${JSON.stringify(data)}`);
          if (data) {
            done();
          } else expect().assertFail()
        }
      });


    })


    /**
     * @tc.number: SUB_Ability_AbilityForm_GetFormsInfo_GetFormsInfo_3200
     * @tc.name: SUB_Ability_AbilityForm_GetFormsInfo_GetFormsInfo_3200
     * @tc.desc: #1: getAllFormsInfo(callback)
     * @tc.type: Function
     * @tc.level 3
     */
    it("SUB_Ability_AbilityForm_GetFormsInfo_GetFormsInfo_3200", 0, async (done: Function) => {
      formHost.getAllFormsInfo((error: Base.BusinessError, data: formInfo.FormInfo[]) => {
        if (error) {
          console.error(`formHost getAllFormsInfo, error: ${JSON.stringify(error)}`);
          expect().assertFail()
        } else {
          console.log(`formHost getAllFormsInfo, data: ${JSON.stringify(data)}`);
          if (data) {
            console.log("success")
            done();
          } else expect().assertFail()
        }
      });
    });


    /**
     * @tc.number: SUB_Ability_AbilityForm_GetFormsInfo_GetFormsInfo_3500
     * @tc.name: SUB_Ability_AbilityForm_GetFormsInfo_GetFormsInfo_3500
     * @tc.desc: #1: getFormsInfo(callback)
     * @tc.type: Function
     * @tc.level 3
     */
    it("SUB_Ability_AbilityForm_GetFormsInfo_GetFormsInfo_3500", 0, async (done: Function) => {
      formHost.getFormsInfo('com.example.myapplication', (error: Base.BusinessError, data: formInfo.FormInfo[]) => {
        if (error) {
          console.error(`formHost getFormsInfo, error: ${JSON.stringify(error)}`);
          expect().assertFail();
        } else {
          console.log(`formHost getFormsInfo, data: ${JSON.stringify(data)}`);
          if (data) {
            let strData: string = data.toString()
            if (strData.indexOf("displayName")) {
              console.log("Has displayName attr")
              done();
            } else {
              console.error("No form info with displayName found");
              expect().assertFail();
            }
          } else {
            expect().assertFail();
          }
        }
      });

    });


  })

}


