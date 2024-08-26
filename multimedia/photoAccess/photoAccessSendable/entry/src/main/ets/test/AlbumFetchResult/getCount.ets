/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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
import sendablePhotoAccessHelper from '@ohos.file.sendablePhotoAccessHelper'
import {
  createUserAlbum,
  genRadomStr,
  fetchOption,
  fetchAllOption,
  albumKeys
} from '../../../../../../../common'

export default function albumGetCountTest () {
  describe('albumGetCountTest', function () {
    const helper = photoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);
    let sendablePhAccessHelper = sendablePhotoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_ALBUM_GET_COUNT_0000
     * @tc.name      : album_getCount_callback_000
     * @tc.desc      : getCount
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('album_getCount_callback_000', 0, async function (done) {
      const testNum = 'album_getCount_callback_000';
      try {
        const fetchOption = fetchAllOption();
        let fetchResult: sendablePhotoAccessHelper.FetchResult<sendablePhotoAccessHelper.PhotoAsset> = await sendablePhAccessHelper.getAssets(fetchOption);
        if (fetchResult === undefined) {
          expect(false).assertTrue();
          done();
        }
        let fetchCount = fetchResult.getCount();
        if (fetchCount === undefined || fetchCount < 0) {
          expect(false).assertTrue();
          done();
        }
        done();
      } catch (error) {
        console.info(`${testNum} failed; error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

  })
}
