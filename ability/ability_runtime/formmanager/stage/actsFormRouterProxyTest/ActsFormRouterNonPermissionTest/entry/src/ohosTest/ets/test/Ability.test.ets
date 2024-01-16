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
    beforeAll((done: Function) => {
      // Presets an action, which is performed only once before all test cases of the test suite START.
      // This API supports only one parameter: preset action function.
    })
    beforeEach((done: Function) => {
      // Presets an action, which is performed before each unit test case STARTs.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach((done: Function) => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll((done: Function) => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_5300
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: AsyncCallback method set empty formID array Return 201 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_5300', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_5300 START');
      formHost.setRouterProxy([], (want: Want) => {
        hilog.info(0x0000, 'testTag', 'formHost recv router event, want:' + JSON.stringify(want));
      }, (err: Base.BusinessError) => {
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
        expect(err.code).assertEqual(201);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_5300 End');
        done();
      })
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_5400
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: Permissions denied Promise method Input empty formID array Return 201 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_5400', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_5400 START');
      formHost.setRouterProxy([], (want: Want) => {
        hilog.info(0x0000, 'testTag', 'formHost recv router event, want:' + JSON.stringify(want));
      }).then(() => {
        hilog.info(0x0000, 'testTag', 'formHost set router proxy succes');
      }).catch((err: Base.BusinessError) => {
        hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
        expect(err.code).assertEqual(201);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_5400 End');
        done();
      })
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_5500
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: Permissions denied AsyncCallback method Input empty formID array Return 201 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_5500', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_5500 START');
      formHost.clearRouterProxy([], (err: Base.BusinessError) => {
        hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err.code);
        expect(err.code).assertEqual(201);
        hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_5500 End');
        done();
      });
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_5600
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: Permissions denied Promise method Input empty formID array Return 201 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_5600', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_5600 START');
      formHost.clearRouterProxy([])
        .then(() => {
          hilog.info(0x0000, 'testTag', 'formHost clear router proxy succes');
        })
        .catch((err: Base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err);
          expect(err.code).assertEqual(201);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_5600 End');
          done();
        });
    })
  })
}