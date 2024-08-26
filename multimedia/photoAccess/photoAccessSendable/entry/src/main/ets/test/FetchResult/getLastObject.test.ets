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
import { describe, it, expect, beforeAll } from '@ohos/hypium'
import sendablePhotoAccessHelper from '@ohos.file.sendablePhotoAccessHelper'
import {
  sleep,
  getPermission,
  fetchAllOption
} from '../../../../../../../common'

export default function getLastObjectTest () {
  describe('getLastObjectTest', function () {

    beforeAll(async function () {
      console.info('beforeAll case');
      await getPermission();
      await sleep()
    });


    let sendablePhAccessHelper = sendablePhotoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);


    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_ALBUM_GET_LAST_OBJECT_0100
     * @tc.name      : get_last_object_promise_001
     * @tc.desc      : getLastObject
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('get_last_object_promise_001', 0, async function (done) {
			const testNum = 'get_last_object_promise_001';
      try {
        const fetchOption = fetchAllOption();
        let fetchResult: sendablePhotoAccessHelper.FetchResult<sendablePhotoAccessHelper.PhotoAsset> = await  sendablePhAccessHelper.getAssets(fetchOption);
        if (fetchResult === undefined) {
          expect(false).assertTrue();
          done();
        }
        let photoAsset: sendablePhotoAccessHelper.PhotoAsset = await fetchResult.getLastObject();
        expect(fetchResult.isAfterLast()).assertTrue();
        done();
      } catch (error) {
        console.info(`${testNum} failed; error: ${error}`);
				expect(false).assertTrue();
        done();
      }
    });
  })
}
