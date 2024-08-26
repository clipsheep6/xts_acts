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
import sendablePhotoAccessHelper from '@ohos.file.sendablePhotoAccessHelper'
import image from '@ohos.multimedia.image';
import { describe, it, expect } from 'deccjsunit/index'

import {
  photoKeys,
  fetchOption,
  getFileAsset,
} from '../../../../../../../common'

export default function getThumbnailTest () {
  describe('getThumbnailTest', function () {

    let sendablePhAccessHelper = sendablePhotoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);

    async function getThumbnailPromise2 (done, testNum, fetchOps, size: image.Size, expectSize) {
      try {
        let fetchResult: sendablePhotoAccessHelper.FetchResult<sendablePhotoAccessHelper.PhotoAsset> = await sendablePhAccessHelper.getAssets(fetchOps);
        let asset: sendablePhotoAccessHelper.PhotoAsset = await fetchResult.getFirstObject();
        let pixelMap: image.PixelMap;
        pixelMap = await asset.getThumbnail(size);
        console.info(`${testNum} pixelMap: ${pixelMap}`);
        const info = await pixelMap.getImageInfo();
        expect(info.size.width).assertEqual(expectSize.width);
        expect(info.size.height).assertEqual(expectSize.height);
        done();
      } catch (error) {
        console.info(`${testNum} failed; error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    }

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_GET_THUMBNAIL_0100
     * @tc.name      : getThumbnail_promise_001
     * @tc.desc      : getThumbnail(image) by { width: 128, height: 128 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('getThumbnail_promise_001', 0, async function (done) {
      const testNum = 'getThumbnail_promise_001';
      const fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, '01.jpg');
      const size = { width: 128, height: 128 };
      const expectSize = { width: 128, height: 128 };
      await getThumbnailPromise2(done, testNum, fetchOps, size, expectSize);
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_GET_THUMBNAIL_0200
     * @tc.name      : getThumbnail_promise_002
     * @tc.desc      : getThumbnail(image) by { width: 1, height: 1024 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('getThumbnail_promise_002', 2, async function (done) {
      const testNum = 'getThumbnail_promise_002';
      const fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, '01.jpg');
      const size = { width: 1, height: 1024 };
      const expectSize = { width: 1, height: 1024 };
      await getThumbnailPromise2(done, testNum, fetchOps, size, expectSize);
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_GET_THUMBNAIL_0300
     * @tc.name      : getThumbnail_promise_003
     * @tc.desc      : getThumbnail(image) by { width: 1024, height: 1 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('getThumbnail_promise_003', 2, async function (done) {
      const testNum = 'getThumbnail_promise_003';
      const fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, '01.jpg');
      const size = { width: 1024, height: 1 };
      const expectSize = { width: 1024, height: 1 };
      await getThumbnailPromise2(done, testNum, fetchOps, size, expectSize);
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_GET_THUMBNAIL_0400
     * @tc.name      : getThumbnail_promise_004
     * @tc.desc      : getThumbnail(image) by { width: 1024, height: 1024 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('getThumbnail_promise_004', 2, async function (done) {
      const testNum = 'getThumbnail_promise_004';
      const fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, '01.jpg');
      const size = { width: 1024, height: 1024 };
      const expectSize = { width: 1024, height: 1024 };
      await getThumbnailPromise2(done, testNum, fetchOps, size, expectSize);
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_GET_THUMBNAIL_0500
     * @tc.name      : getThumbnail_promise_005
     * @tc.desc      : getThumbnail(image) by { width: 1, height: 1 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('getThumbnail_promise_005', 2, async function (done) {
      const testNum = 'getThumbnail_promise_005';
      const fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, '01.jpg');
      const size = { width: 1, height: 1 };
      const expectSize = { width: 1, height: 1 };
      await getThumbnailPromise2(done, testNum, fetchOps, size, expectSize);
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_GET_THUMBNAIL_0600
     * @tc.name      : getThumbnail_promise_006
     * @tc.desc      : getThumbnail(image) by { height: 128 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('getThumbnail_promise_006', 2, async function (done) {
      const testNum = 'getThumbnail_promise_006';
      const fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, '01.jpg');
      const size = { width: undefined, height: 128 };
      const expectSize = { width: 256, height: 128 };
      await getThumbnailPromise2(done, testNum, fetchOps, size, expectSize);
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_GET_THUMBNAIL_0700
     * @tc.name      : getThumbnail_promise_007
     * @tc.desc      : getThumbnail(image) by { width: 128 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('getThumbnail_promise_007', 2, async function (done) {
      const testNum = 'getThumbnail_promise_007';
      const fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, '01.jpg');
      const size = { width: 128, height: undefined };
      const expectSize = { width: 128, height: 256 };
      await getThumbnailPromise2(done, testNum, fetchOps, size, expectSize);
    });
    
    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_GET_THUMBNAIL_0800
     * @tc.name      : getThumbnail_promise_008
     * @tc.desc      : getThumbnail(image) by undefined
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('getThumbnail_promise_008', 2, async function (done) {
      const testNum = 'getThumbnail_promise_008';
      const fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, '01.jpg');
      const size = undefined;
      const expectSize = { width: 256, height: 256 };
      await getThumbnailPromise2(done, testNum, fetchOps, size, expectSize);
    });

  })
}
