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
import sendablePhotoAccessHelper from '@ohos.file.sendablePhotoAccessHelper'
import { describe, it, expect, beforeAll } from '@ohos/hypium'
import {
  sleep,
  getPermission,
  fetchAllOption
} from '../../../../../../../common'

export default function closeTest () {
  describe('closeTest', function () {

    let sendablePhAccessHelper = sendablePhotoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);

    beforeAll(async function () {
      console.info('beforeAll case');
      await getPermission();
      await sleep()
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_ALBUM_CLOSE_0000
     * @tc.name      : album_close_000
     * @tc.desc      : close fetchResult
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('close_fetch_result_000', 0, async function (done) {
      const testNum = 'close_fetch_result_000';
      try {
        const fetchOption = fetchAllOption();
        let fetchResult: sendablePhotoAccessHelper.FetchResult<sendablePhotoAccessHelper.PhotoAsset> = await sendablePhAccessHelper.getAssets(fetchOption);
        if (fetchResult === undefined) {
          expect(false).assertTrue();
          done();
        }
        fetchResult.close();
        console.info(`${testNum} close success .`);
        done();
      } catch (error) {
        console.info(`${testNum} failed; error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_ALBUM_CLOSE_0001
     * @tc.name      : close_fetch_result_001
     * @tc.desc      : close fetchResult, then operate fetchResult
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('close_fetch_result_001', 0, async function (done) {
      const testNum = 'close_fetch_result_001';
      let flag = false;
      try {
        const fetchOption = fetchAllOption();
        let fetchResult: sendablePhotoAccessHelper.FetchResult<sendablePhotoAccessHelper.PhotoAsset> = await sendablePhAccessHelper.getAssets(fetchOption);
        if (fetchResult === undefined) {
          expect(false).assertTrue();
          done();
        }
        fetchResult.close();
        console.info(`${testNum} close success .`);
        let count = fetchResult.getCount();
        expect(false).assertTrue();
        done();
      } catch (error) {
        console.info(`${testNum} failed; error: ${error}`);
        done();
      }
    });

  })
}
