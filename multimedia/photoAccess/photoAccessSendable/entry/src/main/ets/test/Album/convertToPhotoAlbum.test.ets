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
  genRadomStr,
  getPermission,
  albumFetchOption
} from '../../../../../../../common'

export default function convertToPhotoAlbumTest () {
  describe('convertToPhotoAlbumTest', function () {

    const helper = photoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);
    let sendablePhAccessHelper = sendablePhotoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);

    beforeAll(async function () {
      console.info('beforeAll case');
      await getPermission();
      await sleep();
    });

    /**
     * @tc.number    : Sub_Photo_Access_Sendable_Covert_Album_001
     * @tc.name      : covert_photo_album_promise_000
     * @tc.desc      : covert photoAlbum
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('covert_photo_album_promise_000', 0, async (done: Function) => {
      const testNum = 'covert_photo_album_promise_000';
      try {
        let albumName: string = genRadomStr(20);
        let album = await helper.createAlbum(albumName);
        let ops = albumFetchOption(testNum, 'album_name', albumName);
        let fetchResult: sendablePhotoAccessHelper.FetchResult<sendablePhotoAccessHelper.Album> = sendablePhAccessHelper.getAlbums(sendablePhotoAccessHelper.AlbumType.USER, sendablePhotoAccessHelper.AlbumSubtype.USER_GENERIC, ops);
        let sendableAlbum: sendablePhotoAccessHelper.Album = await fetchResult.getFirstObject();
        console.log(`${testNum} ::sendableAlbum get success, obj is ${sendableAlbum}`);
        let commonAlbum: photoAccessHelper.Album = sendableAlbum.convertToPhotoAlbum();
        if (commonAlbum === undefined) {
          expect(false).assertTrue()
          done();
        }
        expect(commonAlbum.getCount() >= 0).assertTrue();
        done();
      } catch(error) {
        console.error(`${testNum} :: convertToSendableAlbum failed, err is ${error}`);
        expect(false).assertTrue()
        done();
      }
    });



  })
}
