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

import { beforeEach, describe, expect, it } from '@ohos/hypium';
import Utils from '../common/Utils';
import nativeFunc from 'libnativefunc.so'

export default function testArkUI() {

  describe('testArkUI', () => {

    beforeEach(async (done: Function) => {
      await Utils.sleep(100);
      done();
    });

    /*
     * @tc.number     : SUB_ARKUI_CAPI_NativeXComponent_0100
     * @tc.name       : testArkUI001
     * @tc.desc       : testing OH_NativeXComponent_RegisterUIInputEventCallback
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testArkUI001', 0, async (done: Function) => {
      expect(nativeFunc.testArkUI001()).assertEqual(0)
      done()
    })

    /*
     * @tc.number     : SUB_ARKUI_CAPI_UIInputEvent_0200
     * @tc.name       : testArkUI002
     * @tc.desc       : testing OH_ArkUI_UIInputEvent_GetType
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testArkUI002', 0, async (done: Function) => {
      expect(nativeFunc.testArkUI002()).assertEqual(0)
      done()
    })

    /*
     * @tc.number     : SUB_ARKUI_CAPI_UIInputEvent_0300
     * @tc.name       : testArkUI003
     * @tc.desc       : testing OH_ArkUI_UIInputEvent_GetEventTime
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testArkUI003', 0, async (done: Function) => {
      expect(nativeFunc.testArkUI003()).assertEqual(0)
      done()
    })

    /*
     * @tc.number     : SUB_ARKUI_CAPI_UIInputEvent_0400
     * @tc.name       : testArkUI004
     * @tc.desc       : testing OH_ArkUI_PointerEvent_GetX
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testArkUI004', 0, async (done: Function) => {
      expect(nativeFunc.testArkUI004()).assertEqual(0)
      done()
    })

    /*
     * @tc.number     : SUB_ARKUI_CAPI_UIInputEvent_0500
     * @tc.name       : testArkUI005
     * @tc.desc       : testing OH_ArkUI_PointerEvent_GetY
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testArkUI005', 0, async (done: Function) => {
      expect(nativeFunc.testArkUI005()).assertEqual(0)
      done()
    })

    /*
     * @tc.number     : SUB_ARKUI_CAPI_UIInputEvent_0600
     * @tc.name       : testArkUI006
     * @tc.desc       : testing OH_ArkUI_PointerEvent_GetWindowX
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testArkUI006', 0, async (done: Function) => {
      expect(nativeFunc.testArkUI006()).assertEqual(0)
      done()
    })

    /*
     * @tc.number     : SUB_ARKUI_CAPI_UIInputEvent_0600
     * @tc.name       : testArkUI007
     * @tc.desc       : testing OH_ArkUI_PointerEvent_GetWindowX
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testArkUI007', 0, async (done: Function) => {
      expect(nativeFunc.testArkUI007()).assertEqual(0)
      done()
    })
    /*
     * @tc.number     : SUB_ARKUI_CAPI_UIInputEvent_0600
     * @tc.name       : testArkUI008
     * @tc.desc       : testing OH_ArkUI_PointerEvent_GetWindowX
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testArkUI008', 0, async (done: Function) => {
      expect(nativeFunc.testArkUI008()).assertEqual(0)
      done()
    })


  })
}
