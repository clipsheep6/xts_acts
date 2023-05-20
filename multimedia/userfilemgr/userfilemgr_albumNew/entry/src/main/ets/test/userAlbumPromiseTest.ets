/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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

// @ts-nocheck
import userFileManager from '@ohos.filemanagement.userFileManager'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import {
  AlbumKey,
  AlbumType,
  AlbumSubType,
  assetFetchOneArgs,
  fetchAllOps,
  sleep,
  deleteAllUserAlbum,
  getFileAsset
} from '../../../../../../common'

export default function userAlbumPromiseTest (abilityContext) {
  describe('userAlbumPromiseTest', function () {
    const userfilemgr = userFileManager.getUserFileMgr(abilityContext)
    beforeAll(async function () {
      await deleteAllUserAlbum()
      console.info('beforeAll case')
    })
    beforeEach(async function () {
      console.info('beforeEach case')
      expect(userfilemgr !== undefined).assertTrue()
    })
    afterEach(async function () {
      console.info('afterEach case')
      await sleep(200)
    })
    afterAll(function () {
      console.info('afterAll case')
    })

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_USER_ALBUM_ADD_ASSETS_0000
      * @tc.name      : userAlbum_addAssets_promise_000
      * @tc.desc      : album addAssets
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('userAlbum_addAssets_promise_000', 0, async function (done) {
      const testNum = 'userAlbum_addAssets_promise_000'
      const fetchOps = assetFetchOneArgs(testNum, userFileManager.ImageVideoKey.DISPLAY_NAME, '01.jpg')
      const albumName = 'albumAddAssetsTest'

      try {
        const album = await userfilemgr.createAlbum(albumName)
        console.info(`${testNum} createAlbum: ${album.albumName}`)
        expect(album !== undefined).assertTrue()

        const asset = await getFileAsset(testNum, fetchOps)
        console.info(`${testNum} asset: ${asset}`)
        expect(asset !== undefined).assertTrue()
        await album.addPhotoAssets([asset])
        done()
      } catch (error) {
        console.info(`${testNum} failed, error: ${error}`)
        expect(false).assertTrue()
        done()
      }
    })

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_USER_ALBUM_REMOVE_ASSETS_0000
      * @tc.name      : userAlbum_removeAssets_promise_000
      * @tc.desc      : album deleteAssets
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
    */
    it('userAlbum_removeAssets_promise_000', 2, async function (done) {
      const testNum = 'userAlbum_removeAssets_promise_000'
      const fetchOps = assetFetchOneArgs(testNum, userFileManager.ImageVideoKey.DISPLAY_NAME, '01.jpg')
      const albumName = 'albumRemoveAssetsTest'

      try {
        const album = await userfilemgr.createAlbum(albumName)
        console.info(`${testNum} createAlbum: ${album}`)
        expect(album != undefined).assertTrue()

        const asset = await getFileAsset(testNum, fetchOps)
        console.info(`${testNum} asset: ${asset}`)
        expect(asset != undefined).assertTrue()

        await album.addPhotoAssets([asset])
        let albumFetchResult = await album.getPhotoAssets(fetchAllOps())
        expect(albumFetchResult.getCount()).assertEqual(1)
        await album.removePhotoAssets([asset])
        albumFetchResult = await album.getPhotoAssets(fetchAllOps())
        expect(albumFetchResult.getCount()).assertEqual(0)
        albumFetchResult.close()
        done()
      } catch (error) {
        console.info(`${testNum} failed, error: ${error}`)
        expect(false).assertTrue()
        done()
      }
    })

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_USER_ALBUM_GET_PHOTO_ASSETS_0000
      * @tc.name      : userAlbum_getPhotoAssets_promise_000
      * @tc.desc      : album.getPhotoAssets
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
    */
    it('userAlbum_getPhotoAssets_promise_000', 2, async function (done) {
      const testNum = 'userAlbum_getPhotoAssets_promise_000'
      const fetchOps = assetFetchOneArgs(testNum, userFileManager.ImageVideoKey.DISPLAY_NAME, '01.jpg')
      const albumName = 'albumGetPhotoAssetsTest'

      try {
        const album = await userfilemgr.createAlbum(albumName)
        console.info(`${testNum} createAlbum: ${album.albumName}`)
        expect(album != undefined).assertTrue()

        const asset = await getFileAsset(testNum, fetchOps)
        console.info(`${testNum} asset: ${asset}`)
        expect(asset != undefined).assertTrue()

        await album.addPhotoAssets([asset])
        const albumFetchResult = await album.getPhotoAssets(fetchAllOps())
        expect(albumFetchResult.getCount()).assertEqual(1)
        albumFetchResult.close()
        done()
      } catch (error) {
        console.info(`${testNum} failed, error: ${error}`)
        expect(false).assertTrue()
        done()
      }
    })

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_USER_ALBUM_COVER_URI_0000
      * @tc.name      : userAlbum_coverUri_promise_000
      * @tc.desc      : album.coverUri
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
    */
    it('userAlbum_coverUri_promise_000', 2, async function (done) {
      const testNum = 'userAlbum_coverUri_promise_000'
      const fetchOps = assetFetchOneArgs(testNum, userFileManager.ImageVideoKey.DISPLAY_NAME, '01.jpg')
      const albumName = 'albumCoverUriPromiseTest'

      try {
        const album = await userfilemgr.createAlbum(albumName)
        console.info(`${testNum} createAlbum: ${album.albumName}`)
        expect(album != undefined).assertTrue()

        const asset = await getFileAsset(testNum, fetchOps)
        console.info(`${testNum} asset: ${asset}`)
        expect(asset != undefined).assertTrue()
        album.coverUri = asset.uri
        await album.commitModify()

        const albumFetchOps = assetFetchOneArgs(testNum, AlbumKey.ALBUM_NAME, albumName)
        const fetchAlbumResult = await userfilemgr.getAlbums(AlbumType.USER, AlbumSubType.USER_GENERIC, albumFetchOps)
        expect(fetchAlbumResult != undefined).assertTrue()
        const newAlbum = await fetchAlbumResult.getFirstObject()
        expect(newAlbum.coverUri).assertEqual(asset.uri)
        done()
      } catch (error) {
        console.info(`${testNum} failed, error: ${error}`)
        expect(false).assertTrue()
        done()
      }
    })

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_USER_ALBUM_COUNT_0000
      * @tc.name      : userAlbum_count_promise_000
      * @tc.desc      : album.count
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
    */
    it('userAlbum_count_promise_000', 2, async function (done) {
      const testNum = 'userAlbum_count_promise_000'
      const fetchOps = assetFetchOneArgs(testNum, userFileManager.ImageVideoKey.DISPLAY_NAME, '01.jpg')
      const albumName = 'albumCountTest'

      try {
        const album = await userfilemgr.createAlbum(albumName)
        console.info(`${testNum} createAlbum: ${album.albumName}`)
        expect(album != undefined).assertTrue()

        const asset = await getFileAsset(testNum, fetchOps)
        console.info(`${testNum} asset: ${asset}`)
        expect(asset != undefined).assertTrue()
        await album.addPhotoAssets([asset])
        const albumFetchResult = await album.getPhotoAssets(fetchAllOps())
        expect(albumFetchResult.getCount()).assertEqual(1)
        albumFetchResult.close()
        done()
      } catch (error) {
        console.info(`${testNum} failed, error: ${error}`)
        expect(false).assertTrue()
        done()
      }
    })
  })
}
