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
  fetchOption,
  getFileAsset,
  photoKeys,
  getPermission,
  albumFetchOption
} from '../../../../../../../common'

export default function getAlbumAssetsTest () {
  describe('getAlbumAssetsTest', function () {

    const helper = photoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);
    let sendablePhAccessHelper = sendablePhotoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);

    beforeAll(async function () {
      console.info('beforeAll case');
      await getPermission();
      await sleep();
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_ADD_ASSETS_0100
     * @tc.name      : addAssets_promise_001
     * @tc.desc      : add image asset to user album
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('addAssets_promise_001', 0, async function (done) {
      const testNum = 'addAssets_promise_001';
      try {
        let albumName: string = genRadomStr(20);
        const album = await helper.createAlbum(albumName);
        const fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, 'addPro01.jpg');
        const asset = await getFileAsset(testNum, fetchOps);
        await album.addAssets([asset]);
        let ops = albumFetchOption(testNum, 'album_name', albumName);
        let fetchResult = await sendablePhAccessHelper.getAlbums(sendablePhotoAccessHelper.AlbumType.USER, sendablePhotoAccessHelper.AlbumSubtype.USER_GENERIC, ops);
        if (fetchResult === undefined) {
          expect(false).assertTrue();
          done();
        }
        let sendableAlbum: sendablePhotoAccessHelper.Album = await fetchResult.getFirstObject();
        expect(sendableAlbum.getCount()).assertEqual(1);
        fetchResult.close();
        done();
      } catch (error) {
        console.info(`${testNum} failed; error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });
  })
}
