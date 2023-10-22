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

import { describe, expect, it } from '@ohos/hypium'
import stdlib from 'libstdlibndk.so'

export default function stdlibNdkTest() {
  describe('MuslStdlibTest', () => {

    /**
     * @tc.number SUB_THIRD_PARTY_MUSL_STDLIB_ABS_NATIVE_0100
     * @tc.name testMuslStdlibAbs001
     * @tc.desc testMuslStdlibAbs
     */
    it('testMuslStdlibAbs001', 0, async (done: Function) => {
      let result = stdlib.abs(-1);
      console.info("stdlib.abs result = " + result);
      expect(result).assertEqual(1)
      done()
    });

    /**
     * @tc.number SUB_THIRD_PARTY_MUSL_STDLIB_ABS_NATIVE_0200
     * @tc.name testMuslStdlibAbs002
     * @tc.desc testMuslStdlibAbs
     */
    it('testMuslStdlibAbs002', 0, async (done: Function) => {
      let result = stdlib.abs(1);
      console.info("stdlib.abs result = " + result);
      expect(result).assertEqual(1)
      done()
    });

    /**
     * @tc.number SUB_THIRD_PARTY_MUSL_STDLIB_ABS_NATIVE_0300
     * @tc.name testMuslStdlibAbs003
     * @tc.desc testMuslStdlibAbs
     */
    it('testMuslStdlibAbs003', 0, async (done: Function) => {
      let result = stdlib.abs(0);
      console.info("stdlib.abs result = " + result);
      expect(result).assertEqual(0)
      done()
    });

  })
}