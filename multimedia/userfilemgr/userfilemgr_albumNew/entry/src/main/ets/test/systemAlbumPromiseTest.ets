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
import fileIo from '@ohos.fileio';
import {
  AlbumSubType,
  ImageVideoKey,
  assetFetchOneArgs,
  assetFetchOneArgsWithFetchColumn,
  fetchAllOps,
  sleep,
  getPermission,
  getFileAsset,
} from '../../../../../../common'

export default function systemAlbumPromiseTest (abilityContext) {
  describe('systemAlbumPromiseTest', function () {
    const userfilemgr = userFileManager.getUserFileMgr(abilityContext)
    beforeAll(async function () {
      await getPermission()
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

    async function getSysTemAlbum(testNum, albumSubType) : userFileManager.Album {
      let fetchResult: userFileManager.FetchResult<userFileManager.Album>;
      try {
        const albumType = userFileManager.AlbumType.SYSTEM;
        console.info(`${testNum} getSysTemAlbum albumType: ${albumType} albumSubType: ${albumSubType}`);
        fetchResult = await userfilemgr.getAlbums(albumType, albumSubType);
        console.info(`${testNum} getSysTemAlbum fetchResult: ${fetchResult.getCount()}`);
      } catch (error) {
        console.info(`${testNum} getSysTemAlbum error: ${error}`);
        fetchResult.close()
        throw error;
      }
      let album: userFileManager.Album;
      try {
        album = await fetchResult.getFirstObject();
        console.info(`${testNum} getSysTemAlbum albumName: ${album.albumName}`);
        fetchResult.close();
      } catch (error) {
        console.info(`${testNum} getSysTemAlbum getFirstObject error: ${error}`);
        fetchResult.close()
        throw error;
      }
      return album
    }

    async function createPhotoAsset(testNum, subType, displayName) : userFileManager.FileAsset {
      const createOps = {
        subType: subType,
      }
      console.info(`${testNum} createPhotoAsset createOps: ${JSON.stringify(createOps)}`)
      let createAsset: userFileManager.FileAsset;
      try {
        createAsset = await userfilemgr.createPhotoAsset(displayName, createOps);
        console.info(`${testNum} createPhotoAsset createAsset.displayName: ${createAsset.displayName}`);
      } catch (error) {
        console.info(`${testNum} createPhotoAsset error: ${JSON.stringify(error)}`);
        throw error;
      }
      return createAsset;
    }

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_SYSTEM_ALBUM_FAVORITE_FILE_ASSET_FAVORITE_0000
      * @tc.name      : fileAsset_setFavorite_promise_000
      * @tc.desc      : favorite(true) promise
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
    */
    it('fileAsset_setFavorite_promise_000', 2, async function (done) {
      const testNum = 'fileAsset_setFavorite_promise_000'
      try {
        const fetchOps = assetFetchOneArgsWithFetchColumn(testNum, ImageVideoKey.DISPLAY_NAME, 'favPromise01.jpg')
        let asset = await getFileAsset(testNum, fetchOps)
        await asset.favorite(true)
        asset = await getFileAsset(testNum, fetchOps)
        expect(asset.get(ImageVideoKey.FAVORITE)).assertEqual(1)
        await asset.favorite(false)
        done();
      } catch (error) {
        console.info(`${testNum} error: ${error}`)
        expect(false).assertTrue()
        done()
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_SYSTEM_ALBUM_FAVORITE_FILE_ASSET_FAVORITE_0100
      * @tc.name      : fileAsset_setFavorite_promise_001
      * @tc.desc      : favorite(false) promise
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
    */
    it('fileAsset_setFavorite_promise_001', 2, async function (done) {
      const testNum = 'fileAsset_setFavorite_promise_001'
      try {
        const fetchOps = assetFetchOneArgsWithFetchColumn(testNum, ImageVideoKey.DISPLAY_NAME, 'favPromise02.jpg')
        let asset = await getFileAsset(testNum, fetchOps)
        await asset.favorite(true)
        asset = await getFileAsset(testNum, fetchOps)
        expect(asset.get(ImageVideoKey.FAVORITE)).assertEqual(1)
        await asset.favorite(false)
        asset = await getFileAsset(testNum, fetchOps)
        expect(asset.get(ImageVideoKey.FAVORITE)).assertEqual(0)
        done()
      } catch (error) {
        console.info(`${testNum} error: ${error}`)
        expect(false).assertTrue()
        done()
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_SYSTEM_ALBUM_VIDEO_GET_PHOTO_ASSETS_0000
      * @tc.name      : videoAlbum_getPhotoAssets_promise_000
      * @tc.desc      : videoAlbum.getPhotoAssets promise
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
    */
    it('videoAlbum_getPhotoAssets_promise_000', 2, async function (done) {
      const testNum = 'videoAlbum_getPhotoAssets_promise_000'
      try {
        const album = await getSysTemAlbum(testNum, AlbumSubType.VIDEO);
        expect(album !== undefined).assertTrue()
        const fetchOps = assetFetchOneArgs(testNum, ImageVideoKey.DISPLAY_NAME, 'videoAlbum01.mp4')
        const fetchResult = await album.getPhotoAssets(fetchOps);
        console.info(`${testNum} videoAlbum.getPhotoAssets getCount(): ${fetchResult.getCount()}`);
        expect(fetchResult.getCount()).assertEqual(1)
        const asset = await fetchResult.getFirstObject();
        console.info(`${testNum} videoAlbum.getPhotoAssets asset: ${asset.displayName}`);
        expect(asset.displayName).assertEqual('videoAlbum01.mp4')
        fetchResult.close()
        done();
      } catch (error) {
        console.info(`${testNum} error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_SYSTEM_ALBUM_SCREENSHOT_CREATE_PHOTO_ASSETS_0000
      * @tc.name      : screenShot_createPhotoAssets_promise_000
      * @tc.desc      : getVideoAlbum promise
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
    */
    it('screenShot_createPhotoAssets_promise_000', 2, async function (done) {
      const testNum = 'screenShot_createPhotoAssets_promise_000'
      try {
        const fetchOps = assetFetchOneArgs(testNum, ImageVideoKey.DISPLAY_NAME, '01.jpg')
        const asset = await getFileAsset(testNum, fetchOps)
        const fd = await asset.open('r');
        console.info(`${testNum} fd: ${fd}`);
        let buffer = new ArrayBuffer(4096);
        await fileIo.read(fd, buffer);
        console.info(`${testNum} readBuff: ${buffer}`);
        await asset.close(fd);

        const assetName = 'screenShot_promise_01.jpg'
        const subType = userFileManager.PhotoSubType.SCREENSHOT
        const createAsset = await createPhotoAsset(testNum, subType, assetName);
        let createAssetFd = await createAsset.open('w');
        console.info(`${testNum} createAssetFd: ${createAssetFd}`);
        const writeBuff = await fileIo.write(createAssetFd, buffer);
        console.info(`${testNum} writeBuff: ${writeBuff}`);
        await createAsset.close(fd);

        await sleep(100)
        const curFetchOps = assetFetchOneArgs(testNum, ImageVideoKey.DISPLAY_NAME, assetName)
        const newAsset = await getFileAsset(testNum, curFetchOps)
        expect(newAsset.displayName).assertEqual(assetName)
        done()
      } catch (error) {
        console.info(`${testNum} error: ${JSON.stringify(error)}`);
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_SYSTEM_ALBUM_SCREENSHOT_GET_PHOTO_ASSETS_0000
      * @tc.name      : screenShotAlbum_getPhotoAssets_promise_000
      * @tc.desc      : screenShotAlbum.getPhotoAssets promise
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
    */
    it('screenShotAlbum_getPhotoAssets_promise_000', 2, async function (done) {
      const testNum = 'screenShotAlbum_getPhotoAssets_promise_000'
      try {
        const fetchOps = assetFetchOneArgs(testNum, ImageVideoKey.DISPLAY_NAME, '01.jpg')
        const asset = await getFileAsset(testNum, fetchOps)
        const fd = await asset.open('r');
        console.info(`${testNum} fd: ${fd}`);
        let buffer = new ArrayBuffer(4096);
        await fileIo.read(fd, buffer);
        console.info(`${testNum} readBuff: ${buffer}`);
        await asset.close(fd);
        await sleep(100)

        const assetName = 'screenShot_promise_02.jpg'
        const subType = userFileManager.PhotoSubType.SCREENSHOT
        const createAsset = await createPhotoAsset(testNum, subType, assetName);
        let createAssetFd = await createAsset.open('w');
        console.info(`${testNum} createAssetFd: ${createAssetFd}`);
        const writeBuff = await fileIo.write(createAssetFd, buffer);
        console.info(`${testNum} writeBuff: ${writeBuff}`);
        await createAsset.close(fd);
        await sleep(100)

        const curFetchOps = assetFetchOneArgs(testNum, ImageVideoKey.DISPLAY_NAME, assetName)
        const album = await getSysTemAlbum(testNum, AlbumSubType.SCREENSHOT)
        const fetchResult = await album.getPhotoAssets(curFetchOps)
        console.info(`${testNum} fetchResult: ${fetchResult.getCount()}`);
        expect(fetchResult.getCount()).assertEqual(1)
        const newAsset = await fetchResult.getFirstObject()
        console.info(`${testNum} newAsset: ${newAsset.displayName}`);
        expect(newAsset.displayName).assertEqual(assetName)
        fetchResult.close()
        done()
      } catch (error) {
        console.info(`${testNum} error: ${error}`);
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_SYSTEM_ALBUM_CAMERA_CREATE_PHOTO_ASSETS_0000
      * @tc.name      : cameraAlbum_createPhotoAssets_promise_000
      * @tc.desc      : cameraAlbum.createPhotoAssets promise
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
    */
    it('cameraAlbum_createPhotoAssets_promise_000', 2, async function (done) {
      const testNum = 'cameraAlbum_createPhotoAssets_promise_000'
      try {
        const fetchOps = assetFetchOneArgs(testNum, ImageVideoKey.DISPLAY_NAME, '01.jpg')
        const asset = await getFileAsset(testNum, fetchOps)
        const fd = await asset.open('r');
        console.info(`${testNum} fd: ${fd}`);
        let buffer = new ArrayBuffer(4096);
        await fileIo.read(fd, buffer);
        console.info(`${testNum} readBuff: ${buffer}`);
        await asset.close(fd);

        const assetName = 'camera_01.jpg'
        const subType = userFileManager.PhotoSubType.CAMERA
        const createAsset = await createPhotoAsset(testNum, subType, assetName);
        let createAssetFd = await createAsset.open('w');
        console.info(`${testNum} createAssetFd: ${createAssetFd}`);
        const writeBuff = await fileIo.write(createAssetFd, buffer);
        console.info(`${testNum} writeBuff: ${writeBuff}`);
        await createAsset.close(fd);

        await sleep(100)
        const curFetchOps = assetFetchOneArgs(testNum, ImageVideoKey.DISPLAY_NAME, assetName)
        const newAsset = await getFileAsset(testNum, curFetchOps)
        expect(newAsset.displayName).assertEqual(assetName)
        done()
      } catch (error) {
        console.info(`${testNum} error: ${JSON.stringify(error)}`);
      }
    })

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_SYSTEM_ALBUM_CAMERA_GET_PHOTO_ASSETS_0000
      * @tc.name      : cameraAlbum_getPhotoAssets_promise_000
      * @tc.desc      : cameraAlbum.getPhotoAssets promise
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
    */
    it('cameraAlbum_getPhotoAssets_promise_000', 2, async function (done) {
      const testNum = 'cameraAlbum_getPhotoAssets_promise_000'
      try {
        const fetchOps = assetFetchOneArgs(testNum, ImageVideoKey.DISPLAY_NAME, '01.jpg')
        const asset = await getFileAsset(testNum, fetchOps)
        const fd = await asset.open('r');
        console.info(`${testNum} fd: ${fd}`);
        let buffer = new ArrayBuffer(4096);
        await fileIo.read(fd, buffer);
        console.info(`${testNum} readBuff: ${buffer}`);
        await asset.close(fd);
        await sleep(100)

        const assetName = 'camera_02.jpg'
        const subType = userFileManager.PhotoSubType.CAMERA
        const createAsset = await createPhotoAsset(testNum, subType, assetName);
        let createAssetFd = await createAsset.open('w');
        console.info(`${testNum} createAssetFd: ${createAssetFd}`);
        const writeBuff = await fileIo.write(createAssetFd, buffer);
        console.info(`${testNum} writeBuff: ${writeBuff}`);
        await createAsset.close(fd);
        await sleep(100)

        const curFetchOps = assetFetchOneArgs(testNum, ImageVideoKey.DISPLAY_NAME, assetName)
        const album = await getSysTemAlbum(testNum, AlbumSubType.CAMERA)
        const fetchResult = await album.getPhotoAssets(curFetchOps)
        console.info(`${testNum} fetchResult: ${fetchResult.getCount()}`);
        expect(fetchResult.getCount()).assertEqual(1)
        const newAsset = await fetchResult.getFirstObject()
        console.info(`${testNum} newAsset: ${newAsset.displayName}`);
        expect(newAsset.displayName).assertEqual(assetName)
        fetchResult.close()
        done()
      } catch (error) {
        console.info(`${testNum} error: ${error}`);
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_SYSTEM_ALBUM_HIDDEN_SET_HIDDEN_0000
      * @tc.name      : fileAsset_setHidden_promise_000
      * @tc.desc      : setHidden(true) promise
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
    */
    it('fileAsset_setHidden_promise_000', 2, async function (done) {
      const testNum = 'fileAsset_setHidden_promise_000'
      try {
        const fetchOps = assetFetchOneArgsWithFetchColumn(testNum, ImageVideoKey.DISPLAY_NAME, 'hiddenPromise01.jpg')
        let asset = await getFileAsset(testNum, fetchOps)
        await asset.setHidden(true)
        expect(asset.get(ImageVideoKey.HIDDEN)).assertEqual(1)
        await asset.setHidden(false)
        done();
      } catch (error) {
        console.info(`${testNum} error: ${error}`)
        expect(false).assertTrue()
        done()
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_SYSTEM_ALBUM_HIDDEN_SET_HIDDEN_0100
      * @tc.name      : fileAsset_setHidden_promise_001
      * @tc.desc      : setHidden(false) promise
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
    */
    it('fileAsset_setHidden_promise_001', 2, async function (done) {
      const testNum = 'fileAsset_setHidden_promise_001'
      try {
        const fetchOps = assetFetchOneArgsWithFetchColumn(testNum, ImageVideoKey.DISPLAY_NAME, 'hiddenPromise02.jpg')
        let asset = await getFileAsset(testNum, fetchOps)
        await asset.setHidden(true)
        expect(asset.get(ImageVideoKey.HIDDEN)).assertEqual(1)
        await asset.setHidden(false)
        expect(asset.get(ImageVideoKey.HIDDEN)).assertEqual(0)
        done()
      } catch (error) {
        console.info(`${testNum} error: ${error}`)
        expect(false).assertTrue()
        done()
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_SYSTEM_ALBUM_HIDDEN_GET_PHOTO_ASSETS_0000
      * @tc.name      : hiddenAlbum_getPhotoAssets_promise_000
      * @tc.desc      : hiddenAlbum.getPhotoAssets promise
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
    */
    it('hiddenAlbum_getPhotoAssets_promise_000', 2, async function (done) {
      const testNum = 'hiddenAlbum_getPhotoAssets_promise_000'
      try {
        const fetchOps = assetFetchOneArgsWithFetchColumn(testNum, ImageVideoKey.DISPLAY_NAME, 'hiddenPromise03.jpg')
        let asset = await getFileAsset(testNum, fetchOps)
        await asset.setHidden(true)

        const curFetchOps = assetFetchOneArgs(testNum, ImageVideoKey.DISPLAY_NAME, 'hiddenPromise03.jpg')
        const album = await getSysTemAlbum(testNum, AlbumSubType.HIDDEN)
        const fetchResult = await album.getPhotoAssets(curFetchOps)
        console.info(`${testNum} fetchResult: ${fetchResult.getCount()}`);
        expect(fetchResult.getCount()).assertEqual(1)
        const newAsset = await fetchResult.getFirstObject()
        console.info(`${testNum} newAsset: ${newAsset.displayName}`);
        expect(newAsset.displayName).assertEqual('hiddenPromise03.jpg')
        fetchResult.close()
        done()
      } catch (error) {
        console.info(`${testNum} error: ${error}`);
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_SYSTEM_ALBUM_HIDDEN_GET_PHOTO_ASSETS_0100
      * @tc.name      : hiddenAlbum_getPhotoAssets_promise_001
      * @tc.desc      : hiddenAlbum.getPhotoAssets promise
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
    */
    it('hiddenAlbum_getPhotoAssets_promise_001', 2, async function (done) {
      const testNum = 'hiddenAlbum_getPhotoAssets_promise_001'
      try {
        const fetchOps = assetFetchOneArgsWithFetchColumn(testNum, ImageVideoKey.DISPLAY_NAME, 'hiddenPromise04.jpg')
        let asset = await getFileAsset(testNum, fetchOps)
        await asset.setHidden(true)

        const albumName = 'hiddenAlbumPromise'
        const album = await userfilemgr.createAlbum(albumName)
        console.info(`${testNum} createAlbum: ${album}`)
        expect(album !== undefined).assertTrue()
        await album.addPhotoAssets([asset])
        let fetchResult = await album.getPhotoAssets(fetchOps)
        console.info(`${testNum} fetchResult: ${fetchResult.getCount()}`)
        await asset.setHidden(true)
        fetchResult = await album.getPhotoAssets(fetchOps)
        console.info(`${testNum} fetchResult: ${fetchResult.getCount()}`)
        expect(fetchResult.getCount()).assertEqual(0)
        fetchResult.close()
        done()
      } catch (error) {
        console.info(`${testNum} error: ${error}`);
      }
    });
  })
}
