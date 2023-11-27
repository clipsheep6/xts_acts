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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import formHost from '@ohos.app.form.formHost';
import Want from '@ohos.app.ability.Want';
import Base from '@ohos.base';

export default function formRouterApiSystemTest() {
  describe('ActsFormHostTestTest', function () {

    /**
     * @tc.number: Acts_Form_OnRouterExtension_1300
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: Non system applications AsyncCallback method Input empty formID array Return 202 error code.
     */
    it('Acts_Form_OnRouterExtension_1300', 0, async function (done) {
      console.info('Acts_Form_OnRouterExtension_1300 Start');
      try {
        await formHost.setRouterProxy([], (want: Want) => {
          console.info(`formHost recv router event, want: ${JSON.stringify(want)}`);
        }, (err: Base.BusinessError) => {
          console.error(`set router proxy error, code: ${err.code}`);
        })
        done();
      } catch (err) {
        expect(err.code).assertEqual(202);
      }
      console.info('Acts_Form_OnRouterExtension_1300 End');
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_1400
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: Non system applications Promise method Input empty formID array Return 202 error code.
     */
    it('Acts_Form_OnRouterExtension_1400', 0, async function (done) {
      console.info('Acts_Form_OnRouterExtension_1400 Start');
      await formHost.setRouterProxy([], (want: Want) => {
        console.info(`formHost recv router event, want: ${JSON.stringify(want)}`);
      }).then(() => {
        console.info('formHost set router proxy succes');
      }).catch((err: Base.BusinessError) => {
        expect(err.code).assertEqual(202);
        done();
      })
      console.info('Acts_Form_OnRouterExtension_1400 End');
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_1500
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: Non system applications AsyncCallback method Input empty formID array Return 202 error code.
     */
    it('Acts_Form_OnRouterExtension_1500', 0, async function (done) {
      console.info('Acts_Form_OnRouterExtension_1500 Start');
      try {
        await formHost.clearRouterProxy([], (err: Base.BusinessError) => {
          console.error(`set router proxy error, code: ${err.code}`);
        });
        done();
      } catch (err) {
        expect(err.code).assertEqual(202);
      }
      console.info('Acts_Form_OnRouterExtension_1500 End');
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_1600
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: Non system applications Promise method Input empty formID array Return 202 error code.
     */
    it('Acts_Form_OnRouterExtension_1600', 0, async function (done) {
      console.info('Acts_Form_OnRouterExtension_1600 Start');
      let offFormIds = new Array<string>();
      await formHost.clearRouterProxy(offFormIds)
        .then(() => {
          console.info('formHost clear router proxy succes');
        })
        .catch((err: Base.BusinessError) => {
          expect(err.code).assertEqual(202);
          done();
        });
      console.info('Acts_Form_OnRouterExtension_1600 End');
    })
  })
}