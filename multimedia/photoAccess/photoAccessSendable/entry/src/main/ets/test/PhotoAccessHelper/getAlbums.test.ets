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

import dataSharePredicates from '@ohos.data.dataSharePredicates';
import photoAccessHelper from '@ohos.file.photoAccessHelper'
import sendablePhotoAccessHelper from '@ohos.file.sendablePhotoAccessHelper'
import { describe, it, expect, beforeAll } from '@ohos/hypium'
import {
  sleep,
  getPermission
} from '../../../../../../../common'

export default function getAlbumsTest () {
  describe('getAlbumsTest', () => {

    beforeAll(async function () {
      console.info('beforeAll case');
      await getPermission();
      await sleep()
    });

    const helper = photoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);
    let sendablePhAccessHelper = sendablePhotoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);

    const checkSendableUserAlbum = (expect, testNum, album, expectedName, expectedCover) : void =>{
      console.info(`${testNum} checkSendableUserAlbum album.albumName: ${album.albumName}, expectedName: ${expectedName}`);
      expect(album.albumType).assertEqual(sendablePhotoAccessHelper.AlbumType.USER);
      expect(album.albumSubtype).assertEqual(sendablePhotoAccessHelper.AlbumSubtype.USER_GENERIC);
      expect(album.albumName).assertEqual(expectedName);
      if (expectedCover === '') {
        expect(album.coverUri).assertEqual('');
      } else {
        expect(album.coverUri).assertEqual(expectedCover);
      }
      expect(album.albumUri !== '').assertEqual(true);
      expect(album.count).assertEqual(0);
    }

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_GET_ALBUMS_0000
     * @tc.name      : getAlbums_promise_000
     * @tc.desc      : get an user album
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('getAlbums_promise_000', 0, async (done: Function) => {
      const testNum = 'getAlbums_promise_000';
      try {
        let albumNames = [
          'getAlbums_promise_000_01',
          'getAlbums_promise_000_02',
          'getAlbums_promise_000_03',
          'getAlbums_promise_000_04',
          'getAlbums_promise_000_05'
        ];
        let beforeResult = await sendablePhAccessHelper.getAlbums(sendablePhotoAccessHelper.AlbumType.USER, sendablePhotoAccessHelper.AlbumSubtype.USER_GENERIC);
        const count = beforeResult.getCount();
        beforeResult.close();
        // Firstly, create some albums
        for (let i = 0; i < albumNames.length; i++) {
          await helper.createAlbum(albumNames[i]);
        }
        // Secondly, get albums and check
        let fetchResult = await sendablePhAccessHelper.getAlbums(sendablePhotoAccessHelper.AlbumType.USER, sendablePhotoAccessHelper.AlbumSubtype.USER_GENERIC);
        const totalCount = fetchResult.getCount();
        expect(totalCount).assertEqual(count + albumNames.length);
        let albumList = await fetchResult.getAllObjects();
        fetchResult.close();
        for (let i = count; i < totalCount; i++) {
          checkSendableUserAlbum(expect, testNum, albumList[i], albumNames[i - count], '');
        }
        done();
      } catch (error) {
        console.info(`${testNum} failed, error: ${JSON.stringify(error)}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_GET_ALBUMS_0001
     * @tc.name      : getAlbums_promise_001
     * @tc.desc      : get an user album
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('getAlbums_promise_001', 0, async (done: Function) => {
      const testNum = 'getAlbums_promise_001';
      try {
        let albumNames = [
          'getAlbums_promise_001_01',
          'getAlbums_promise_001_02',
          'getAlbums_promise_001_03',
          'getAlbums_promise_001_04',
          'getAlbums_promise_001_05'
        ];
        for (let i = 0; i < albumNames.length; i++) {
          await helper.createAlbum(albumNames[i]);
        }
        let predicates: dataSharePredicates.DataSharePredicates = new dataSharePredicates.DataSharePredicates();
        predicates.equalTo('album_name', 'getAlbums_promise_001_02');
        let fetchOptions: photoAccessHelper.FetchOptions = {
          fetchColumns: [],
          predicates: predicates
        };
        sendablePhAccessHelper.getAlbums(sendablePhotoAccessHelper.AlbumType.USER, sendablePhotoAccessHelper.AlbumSubtype.USER_GENERIC, fetchOptions).then( async (fetchResult) => {
          if (fetchResult === undefined) {
            console.error(`${testNum} :: getAlbumsPromise fetchResult is undefined`);
            expect(false).assertTrue();
            done();
          }
          expect(fetchResult.getCount()).assertEqual(1);
          done();
        });
      } catch (error) {
        console.info(`${testNum} failed, error: ${JSON.stringify(error)}`);
        expect(false).assertTrue();
        done();
      }
    });

  })
}
