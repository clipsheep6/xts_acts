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
import { describe, beforeEach, afterEach, it, expect } from '@ohos/hypium'

let emitKey = "emitUserAgent";

export default function navigationTest() {
  describe('ActsNavigationTest', () => {

    /*
     *tc.number ArkUX_Stage_Navigation_0100
     *tc.name   Add interfaces to control the disable and active states on the toolbar
     *tc.desc   Gets the toolbarConfiguration value undefined
     */
    it('ArkUX_Stage_Navigation_0100', 0, async (done: Function) => {
      console.info('ArkUX_Stage_Navigation_0100 START');
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('ArkUX_Stage_Navigation_0100');
          console.info('ArkUX_Stage_Navigation_0100 START  :' + JSON.stringify(strJson));
          console.info("ArkUX_Stage_Navigation_0100 component obj.$attrs.toolbarConfiguration is: " +
          JSON.stringify(JSON.parse(strJson).$attrs.toolbarConfiguration));
          console.info('ArkUX_Stage_Navigation_0100 END ');
        } catch (err) {
          expect().assertFail();
          console.info('ArkUX_Stage_Navigation_0100 ERR  ' + JSON.stringify(err));
        }
        done();
      }, 5000)
    });
  })
}
