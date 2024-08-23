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

import photoAccessHelper from '@ohos.file.photoAccessHelper'
import { describe, it, expect } from 'deccjsunit/index'

export default function getIndexConstructProgressTest () {
  describe('getIndexConstructProgressTest', function () {
    const phAccessHelper = photoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_GET_INDEX_CONSTRUCT_PROGRESS_0000
     * @tc.name      : get_index_construct_progress_000
     * @tc.desc      : getIndexConstructProgress
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('get_index_construct_progress_000', 0, async function (done) {
      const testNum = 'get_index_construct_progress_000';
      console.info('getIndexConstructProgress_000 start');
      class indexProgress {
        finishedImageCount: number = 0
        totalImageCount: number = 0
        finishedVideoCount: number = 0
        totalVideoCount: number = 0
      }
      try {
        let result = await phAccessHelper.getIndexConstructProgress();
        let jsonObj: indexProgress = JSON.parse(result);
        expect(jsonObj.finishedImageCount).assertLargerOrEqual(0);
        expect(jsonObj.finishedImageCount).assertLessOrEqual(jsonObj.totalImageCount);
        expect(jsonObj.finishedVideoCount).assertLargerOrEqual(0);
        expect(jsonObj.finishedVideoCount).assertLessOrEqual(jsonObj.totalVideoCount);
        done();
      } catch (error) {
          console.info(`${testNum} getIndexConstructProgress failed; error: ${error}`);
          expect(false).assertTrue();
          done();
      }
    });
  })
}
