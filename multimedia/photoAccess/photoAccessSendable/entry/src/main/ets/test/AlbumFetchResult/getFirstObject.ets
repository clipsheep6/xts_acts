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
  fetchAllOption,
  fetchOption,
  albumKeys,
  sleep
} from '../../../../../../../common'

export default function albumGetFirstObjectTest () {
  describe('albumGetFirstObjectTest', function () {
    const helper = photoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);
    let sendablePhAccessHelper = sendablePhotoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);

    //promise
    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_ALBUM_GET_FIRST_OBJECT_0000
     * @tc.name      : album_getFirstObject_promise_000
     * @tc.desc      : getFirstObject
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('album_getFirstObject_promise_000', 0, async function (done) {
			const testNum = 'album_getFirstObject_promise_000';
			try {
        let fetchResult = await sendablePhAccessHelper.getAlbums(sendablePhotoAccessHelper.AlbumType.SYSTEM, sendablePhotoAccessHelper.AlbumSubtype.IMAGE);
        if (fetchResult === undefined) {
          expect(false).assertTrue();
          done();
        }
        let album: sendablePhotoAccessHelper.Album = await fetchResult.getFirstObject();
        let flag = (album === undefined ? true : false);
        expect(flag).assertFalse();
        done();
      } catch (error) {
				console.info(`${testNum} failed; error: ${error}`);
				expect(false).assertTrue();
        done();
      }
    });

  })
}
