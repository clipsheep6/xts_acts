/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import formHost from '@ohos.app.form.formHost';
import Want from '@ohos.app.ability.Want';
import Base from '@ohos.base';

export default function abilityTest() {
  describe('ActsAbilityTest', (done: Function) => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async (done: Function) => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
    })
    beforeEach(async (done: Function) => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(async (done: Function) => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(async (done: Function) => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_4900
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: Non system applications AsyncCallback method Input empty formID array Return 202 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_4900', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_4900 START');
      formHost.setRouterProxy([], (want: Want) => {
        hilog.info(0x0000, 'testTag', 'formHost recv router event, want:' + JSON.stringify(want));
      }, (err: Base.BusinessError) => {
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
        expect(err.code).assertEqual(202);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_4900 End');
        done();
      })
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_5000
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: Non system applications Promise method Input empty formID array Return 202 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_5000', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_5000 START');
      formHost.setRouterProxy([], (want: Want) => {
        hilog.info(0x0000, 'testTag', 'formHost recv router event, want:' + JSON.stringify(want));
      }).then(() => {
        hilog.info(0x0000, 'testTag', 'formHost set router proxy succes');
      }).catch((err: Base.BusinessError) => {
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
        expect(err.code).assertEqual(202);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_5000 End');
        done();
      })
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_5100
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: Non system applications AsyncCallback method Input empty formID array Return 202 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_5100', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_5100 START');
      formHost.clearRouterProxy([], (err: Base.BusinessError) => {
        hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err.code);
        expect(err.code).assertEqual(202);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_5100 End');
        done();
      });
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_5200
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: Non system applications Promise method Input empty formID array Return 202 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_5200', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_5200 START');
      formHost.clearRouterProxy([])
        .then(() => {
          hilog.info(0x0000, 'testTag', 'formHost clear router proxy succes');
        })
        .catch((err: Base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err);
          expect(err.code).assertEqual(202);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_5200 End');
          done();
        });
    })
  })
}