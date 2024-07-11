/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';

import Base from '@ohos.base';
import Want from '@ohos.app.ability.Want';
import formProvider from '@ohos.app.form.formProvider';


const ERROR_CODE = 202 ;
export default function requestPublishFormTest() {
  describe('RequestPublishFormTest', () => {
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
     * @tc.number  SUB_Ability_AbilityForm_AddForm_RequestPublishFormArkTs_3100
     * @tc.name    Request PublishForm
     * @tc.desc    Function test
     * @tc.type:   Function
     * @tc.level   3
     */

    it('SUB_Ability_AbilityForm_AddForm_RequestPublishFormArkTs_3100', 0, async(done:Function) => {
      // Defines a test case. This API supports three parameters: test case name, filter parameter, and test case function.
      hilog.info(0x0000, 'SUB_Ability_AbilityForm_AddForm_RequestPublishFormArkTs_3100', '%{public}s', 'it begin');
      let want: Want = {
        abilityName: 'FormAbility',
        parameters: {
          'ohos.extra.param.key.form_dimension': 2,
          'ohos.extra.param.key.form_name': 'widget',
          'ohos.extra.param.key.module_name': 'entry'
        }
      };


      try {
        formProvider.requestPublishForm(want, (error: Base.BusinessError, data: string) => {
          if (error) {
            console.error(`callback error, code: ${error.code}, message: ${error.message})`);
            expect(error.code).assertEqual(ERROR_CODE);
            done();
          } else {
            console.info(`formProvider requestPublishForm, form ID is: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
          }
        });
      } catch (error) {
        console.error(`catch error, code: ${(error as Base.BusinessError).code}, message: ${(error as Base.BusinessError).message})`);
        expect().assertFail();
        done();
      }
      //promise
      try {
        formProvider.requestPublishForm(want).then((data: string) => {
          console.info(`formProvider requestPublishForm success, form ID is : ${JSON.stringify(data)}`);
          expect().assertFail();
          done();
        }).catch((error: Base.BusinessError) => {
          console.error(`promise error, code: ${error.code}, message: ${error.message})`);
          expect(error.code).assertEqual(ERROR_CODE);
          done();
        });
      } catch (error) {
        console.error(`catch error, code: ${(error as Base.BusinessError).code}, message: ${(error as Base.BusinessError).message})`);
        expect().assertFail();
        done();
      }
    });
  });
}