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

import pointer from '@ohos.multimodalInput.pointer'
import {afterAll, afterEach, beforeAll, beforeEach, Core, describe, expect, it, Level, Size, TestType} from '@ohos/hypium'

export default function Pointer_test() {
  describe('Pointer_test', function() {
    const errCode = {
      SYSTEM_API_ERROR: 202
    }

    const errMsg = {
      SYSTEM_API_ERROR_MSG:
          "Permission verification failed, application which is not a system application uses system API."
    }

    afterAll(function() {
      const core = Core.getInstance();
      const config = core.getDefaultService('config');
      if (pointer.dumpCoverage && config.coverage) {
        console.info('Dump coverage');
        pointer.dumpCoverage();
      } else {
        console.info('No coverage');
      }
    })

    class AsyncHelper {
      constructor() {
        let ah = this;
        this.promise = new Promise((res) => { ah.resolve = res; });
      }

      callback() {
        let ah = this;
        return function(err, data) { ah.resolve([err, data]); };
      }

      async verify(verifier) {
        await this.promise.then(verifier, () => { expect().assertFail(); });
        let ah = this;
        this.promise = new Promise((res) => { ah.resolve = res; });
      }

      async verifyOk(value) {
        await this.verify((data) => {
          expect(data[0]).assertUndefined();
          expect(data[1]).assertDeepEquals(value);
        });
      }

      async verifyError(code, message) {
        await this.verify((data) => {
          expect(data[0].code).assertEqual(code);
          expect(data[0].message).assertEqual(message);
        });
      }
    }

    async function assertPromiseError(promise, code, message) {
      await promise.then(() => {expect().assertFail()}, (error) => {
        expect(error.code).assertEqual(code);
        expect(error.message).assertEqual(message);
      });
    }

    it('Pointer_PointerSizeTest', 0, async function(done) {
      let ah = new AsyncHelper();

      console.info("Get pointer size value with CB");
      expect(pointer.getPointerSize(ah.callback())).assertUndefined();
      await ah.verifyError(errCode.SYSTEM_API_ERROR, errMsg.SYSTEM_API_ERROR_MSG);

      console.info("Set pointer size value with CB");
      expect(pointer.setPointerSize(40, ah.callback())).assertUndefined();
      await ah.verifyError(errCode.SYSTEM_API_ERROR, errMsg.SYSTEM_API_ERROR_MSG);

      console.info("Set pointer size value with Promise");
      await assertPromiseError(pointer.setPointerSize(40), errCode.SYSTEM_API_ERROR, errMsg.SYSTEM_API_ERROR_MSG);

      console.info("Get pointer size value with Promise");
      await assertPromiseError(pointer.getPointerSize(), errCode.SYSTEM_API_ERROR, errMsg.SYSTEM_API_ERROR_MSG);

      done();
    })

    it('Pointer_PointerImagesTest', 0, async function(done) {
      let ah = new AsyncHelper();

      console.info("Calling setPointerImages() with value CB");
      expect(pointer.setPointerImages([], ah.callback())).assertUndefined();
      await ah.verifyError(errCode.SYSTEM_API_ERROR, errMsg.SYSTEM_API_ERROR_MSG);

      console.info("Calling setPointerImages() with value Promise");
      await assertPromiseError(pointer.setPointerImages([]), errCode.SYSTEM_API_ERROR, errMsg.SYSTEM_API_ERROR_MSG);

      done();
    })
  })
}