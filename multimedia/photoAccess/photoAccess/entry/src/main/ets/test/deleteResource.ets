/*
 * Copyright (C) 2023-2024 Huawei Device Co., Ltd.
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
import photoAccessHelper from '@ohos.file.photoAccessHelper';
import dataSharePredicates from '@ohos.data.dataSharePredicates';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';
import { sleep,} from '../../../../../../common';

export default function deleteResourcesTest() {
  describe('deleteResourcesTest', function () {
    const phAccessHelper = photoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);
    const predicates: dataSharePredicates.DataSharePredicates = new dataSharePredicates.DataSharePredicates();
    const fetchOptions: photoAccessHelper.FetchOptions = {
      fetchColumns: [],
      predicates: predicates
    };

    beforeAll(function () {
      console.info('beforeAll case');
    });
    beforeEach(function () {
      console.info('beforeEach case');
    });
    afterEach(function () {
      console.info('afterEach case');
    });
    afterAll(function () {
      console.info('afterAll case');
    });

    const deleteResourceAsset = async function (done, testNum) {
      console.info(testNum + ' deleteResourceAsset');
      try {
        let fetchResult: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset> = await phAccessHelper.getAssets(fetchOptions);
        let photoAssetList: Array<photoAccessHelper.PhotoAsset> = await fetchResult.getAllObjects();
        await photoAccessHelper.MediaAssetChangeRequest.deleteAssets(globalThis.abilityContext, photoAssetList);
        await sleep(1000);
        console.info(testNum + ' deleteAssets successfully');
        done();
      } catch (err) {
        console.error(`deleteResourceAsset failed with error: ${err.code}, ${err.message}`);
        expect(false).assertTrue();
        done();
      }
    }

    const deleteResourceTrashAsset = async function (done, testNum) {
      console.info(testNum + ' deleteResourceTrashAsset');
      try {
        let albumFetchResult: photoAccessHelper.FetchResult<photoAccessHelper.Album> = await phAccessHelper.getAlbums(photoAccessHelper.AlbumType.SYSTEM, photoAccessHelper.AlbumSubtype.TRASH);
        let album: photoAccessHelper.Album = await albumFetchResult.getFirstObject();
        let fetchResult: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset> = await album.getAssets(fetchOptions);
        let assets: Array<photoAccessHelper.PhotoAsset> = await fetchResult.getAllObjects();
        let albumChangeRequest: photoAccessHelper.MediaAlbumChangeRequest = new photoAccessHelper.MediaAlbumChangeRequest(album);
        albumChangeRequest.deleteAssets(assets);
        await sleep(2000);
        await phAccessHelper.applyChanges(albumChangeRequest);
        console.info('succeed to deleteAssets permanently');
        done();
      } catch (err) {
        console.error(`deleteResourceTrashAsset failed with error: ${err.code}, ${err.message}`);
        expect(false).assertTrue();
        done();
      }
    }

    const deleteAlbum = async function (done, testNum) {
      console.info(testNum + ' deleteAlbum');
      try {
        let fetchResult: photoAccessHelper.FetchResult<photoAccessHelper.Album> = await phAccessHelper.getAlbums(photoAccessHelper.AlbumType.USER, photoAccessHelper.AlbumSubtype.USER_GENERIC, fetchOptions);
        let albums: Array<photoAccessHelper.Album> = await fetchResult.getAllObjects();
        await photoAccessHelper.MediaAlbumChangeRequest.deleteAlbums(globalThis.abilityContext, albums);
        await sleep(2000);
        console.info('deleteAlbums successfully');
        done();
      } catch (err) {
        console.error(`deleteAlbum failed with error: ${err.code}, ${err.message}`);
        expect(false).assertTrue();
        done();
      }
    }

    /**
     * @tc.number    : SUB_MEDIA_PHOTOACCESS_DELETE_ASSETS_0100
     * @tc.name      : sub_media_photoAccess_delete_assets_001
     * @tc.desc      : Delete mediaAssets
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_PHOTOACCESS_DELETE_ASSETS_0100', 0, async function (done) {
      const testNum = 'SUB_MEDIA_PHOTOACCESS_DELETE_ASSETS_0100';
      await deleteResourceAsset(done, testNum);
    });

    /**
     * @tc.number    : SUB_MEDIA_PHOTOACCESS_DELETE_TRASHASSETS_0100
     * @tc.name      : sub_media_photoAccess_delete_trashassets_001
     * @tc.desc      : Delete Trash mediaAssets
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_PHOTOACCESS_DELETE_TRASHASSETS_0100', 0, async function (done) {
      const testNum = 'SUB_MEDIA_PHOTOACCESS_DELETE_TRASHASSETS_0100';
      await deleteResourceTrashAsset(done, testNum);
    });

    /**
     * @tc.number    : SUB_MEDIA_PHOTOACCESS_DELETE_ALBUMS_0100
     * @tc.name      : sub_media_photoAccess_delete_albums_001
     * @tc.desc      : Delete Albums
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_PHOTOACCESS_DELETE_ALBUMS_0100', 0, async function (done) {
      const testNum = 'SUB_MEDIA_PHOTOACCESS_DELETE_ALBUMS_0100';
      await deleteAlbum(done, testNum);
    });
  });
}