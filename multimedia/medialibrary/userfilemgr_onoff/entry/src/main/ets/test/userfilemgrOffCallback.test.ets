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

// @ts-nocheck
import userFileManager from '@ohos.filemanagement.userFileManager';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';
import dataSharePredicates from '@ohos.data.dataSharePredicates';

import { sleep } from '../../../../../../common';

export default function userfilemgrOffCallback(abilityContext) {
  describe('userfilemgrOffCallback', function () {
    const mgr = userFileManager.getUserFileMgr(abilityContext);
    beforeAll(async function () {
      console.info('beforeAll case');
    });
    beforeEach(function () {
      console.info('beforeEach case');
    });
    afterEach(async function () {
      console.info('afterEach case');
      await sleep(500);
    });
    afterAll(function () {
      console.info('afterAll case');
    });
    const { DEFAULT_PHOTO_URI, DEFAULT_ALBUM_URI } = userFileManager.DefaultChangeUri;
    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_OFF_CALLBACK_0000
     * @tc.name      : off_callback_000
     * @tc.desc      : off listening create file, type NOTIFY_ADD
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('off_callback_000', 0, async function example(done) {
      try {
        let testFileName = 'testCreateFile' + Date.now() + '.jpg';
        let fileAsset = await mgr.createPhotoAsset(testFileName);
        let enterOn = false;
        await sleep(500);
        const callback = async (changeData) => {
          enterOn = true;
          console.info(`off_callback_000 changeData: ${JSON.stringify(changeData)}`);
          expect(false).assertTrue();
          done();
        };
        mgr.on(fileAsset.uri, false, callback);
        mgr.off(fileAsset.uri, callback);
        await sleep(100);
        let fd = await fileAsset.open('rw');
        await fileAsset.close(fd);
        await sleep(1000);
        expect(!enterOn).assertTrue();
        done();
      } catch (error) {
        console.log(`off_callback_000: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_OFF_CALLBACK_0001
     * @tc.name      : off_callback_001
     * @tc.desc      : off listening motify file title, type NOTIFY_UPDATE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('off_callback_001', 0, async function (done) {
      try {
        let testFileName = 'testCreateFile' + Date.now() + '.jpg';
        let fileAsset = await mgr.createPhotoAsset(testFileName);
        let fd = await fileAsset.open('rw');
        await fileAsset.close(fd);
        let enterOn = false;
        await sleep(500);
        const callback = async (changeData) => {
          enterOn = true;
          console.info(`off_callback_001 changeData: ${JSON.stringify(changeData)}`);
          expect(false).assertTrue();
          done();
        };
        mgr.on(fileAsset.uri, false, callback);
        await sleep(100);
        mgr.off(fileAsset.uri, callback);
        await sleep(100);
        fileAsset.title = 'newTitle';
        await fileAsset.commitModify();
        await sleep(1000);
        expect(!enterOn).assertTrue();
        done();
      } catch (error) {
        console.log(`off_callback_001: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_OFF_CALLBACK_0002
     * @tc.name      : off_callback_002
     * @tc.desc      : off listening favorite(true) file, type NOTIFY_UPDATE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('off_callback_002', 0, async function (done) {
      try {
        let testFileName = 'testCreateFile' + Date.now() + '.jpg';
        let fileAsset = await mgr.createPhotoAsset(testFileName);
        let fd = await fileAsset.open('rw');
        await fileAsset.close(fd);
        let favoriteAlbumList = await mgr.getAlbums(
          userFileManager.AlbumType.SYSTEM,
          userFileManager.AlbumSubType.FAVORITE
        );
        let favoriteAlbum = await favoriteAlbumList.getFirstObject();
        let enterOn = false;
        await sleep(500);
        const callback = async (changeData) => {
          enterOn = true;
          console.info(`off_callback_002 changeData: ${JSON.stringify(changeData)}`);
          expect(false).assertTrue();
          done();
        };
        const callback2 = async (changeData) => {
          enterOn = true;
          console.info(`off_callback_002 changeData: ${JSON.stringify(changeData)}`);
          expect(false).assertTrue();
          done();
        };
        mgr.on(fileAsset.uri, false, callback);
        mgr.on(favoriteAlbum.albumUri, false, callback2);
        await sleep(100);
        mgr.off(fileAsset.uri, callback);
        mgr.off(favoriteAlbum.albumUri, callback2);
        await sleep(100);
        await fileAsset.favorite(true);
        await sleep(1000);
        expect(!enterOn).assertTrue();
        done();
      } catch (error) {
        console.log(`off_callback_002: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_OFF_CALLBACK_0003
     * @tc.name      : off_callback_003
     * @tc.desc      : off listening favorite(false) file, type NOTIFY_UPDATE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('off_callback_003', 0, async function (done) {
      try {
        let testFileName = 'testCreateFile' + Date.now() + '.jpg';
        let fileAsset = await mgr.createPhotoAsset(testFileName);
        let fd = await fileAsset.open('rw');
        await fileAsset.close(fd);
        await fileAsset.favorite(true);
        let favoriteAlbumList = await mgr.getAlbums(
          userFileManager.AlbumType.SYSTEM,
          userFileManager.AlbumSubType.FAVORITE
        );
        let favoriteAlbum = await favoriteAlbumList.getFirstObject();
        let enterOn = false;
        await sleep(500);
        const callback = async (changeData) => {
          enterOn = true;
          console.info(`off_callback_003 changeData: ${JSON.stringify(changeData)}`);
          expect(false).assertTrue();
          done();
        };
        const callback2 = async (changeData) => {
          enterOn = true;
          console.info(`off_callback_003 changeData: ${JSON.stringify(changeData)}`);
          expect(false).assertTrue();
          done();
        };
        mgr.on(fileAsset.uri, false, callback);
        mgr.on(favoriteAlbum.albumUri, false, callback2);
        await sleep(100);
        mgr.off(fileAsset.uri, callback);
        mgr.off(favoriteAlbum.albumUri, callback2);
        await sleep(100);
        await fileAsset.favorite(false);
        await sleep(1000);
        expect(!enterOn).assertTrue();
        done();
      } catch (error) {
        console.log(`off_callback_003: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_OFF_CALLBACK_0004
     * @tc.name      : off_callback_004
     * @tc.desc      : off listening delete file, type NOTIFY_REMOVE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('off_callback_004', 0, async function (done) {
      try {
        let testFileName = 'testCreateFile' + Date.now() + '.jpg';
        let fileAsset = await mgr.createPhotoAsset(testFileName);
        let fd = await fileAsset.open('rw');
        await fileAsset.close(fd);
        let enterOn = false;
        await sleep(500);
        const callback = async (changeData) => {
          expect(false).assertTrue();
          enterOn = true;
          console.info(`off_callback_004 fileAsset changeData: ${JSON.stringify(changeData)}`);
          expect(false).assertTrue();
          done();
        };
        mgr.on(fileAsset.uri, false, callback);
        await sleep(100);
        mgr.off(fileAsset.uri, callback);
        await sleep(100);
        await mgr.delete(fileAsset.uri);
        await sleep(2000);
        expect(!enterOn).assertTrue();

        done();
      } catch (error) {
        console.log(`off_callback_004: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_OFF_CALLBACK_0005
     * @tc.name      : off_callback_005
     * @tc.desc      : off listening recover file, type NOTIFY_ADD
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('off_callback_005', 0, async function (done) {
      try {
        let testFileName = 'testCreateFile' + Date.now() + '.jpg';
        let fileAsset = await mgr.createPhotoAsset(testFileName);
        let fd = await fileAsset.open('rw');
        await fileAsset.close(fd);
        await mgr.delete(fileAsset.uri);
        let trashAlbumList = await mgr.getAlbums(userFileManager.AlbumType.SYSTEM, userFileManager.AlbumSubType.TRASH);
        let trashAlbum = await trashAlbumList.getFirstObject();
        let predicates = new dataSharePredicates.DataSharePredicates();
        let fetchOption = {
          fetchColumns: [],
          predicates: predicates.equalTo('display_name', testFileName),
        };
        let trashFetchResult = await trashAlbum.getPhotoAssets(fetchOption);
        const trashFileAsset = await trashFetchResult.getFirstObject();
        let enterOn = false;
        await sleep(500);
        const callback = async (changeData) => {
          enterOn = true;
          console.info(`off_callback_005 changeData: ${JSON.stringify(changeData)}`);
          expect(false).assertTrue();
          done();
        };
        mgr.on(trashFileAsset.uri, false, callback);
        await sleep(100);
        mgr.off(trashFileAsset.uri, callback);
        await sleep(100);
        await trashAlbum.recoverPhotoAssets([trashFileAsset]);
        await sleep(2000);
        expect(!enterOn).assertTrue();
        done();
      } catch (error) {
        console.log(`off_callback_005: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_OFF_CALLBACK_0006
     * @tc.name      : off_callback_006
     * @tc.desc      : off listening trash delete file, type NOTIFY_REMOVE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('off_callback_006', 0, async function (done) {
      try {
        let testFileName = 'testCreateFile' + Date.now() + '.jpg';
        let fileAsset = await mgr.createPhotoAsset(testFileName);
        let fd = await fileAsset.open('rw');
        await fileAsset.close(fd);
        await mgr.delete(fileAsset.uri);
        let trashAlbumList = await mgr.getAlbums(userFileManager.AlbumType.SYSTEM, userFileManager.AlbumSubType.TRASH);
        let trashAlbum = await trashAlbumList.getFirstObject();
        let predicates = new dataSharePredicates.DataSharePredicates();
        let fetchOption = {
          fetchColumns: [],
          predicates: predicates.equalTo('display_name', testFileName),
        };
        let trashFetchResult = await trashAlbum.getPhotoAssets(fetchOption);
        const trashFileAsset = await trashFetchResult.getFirstObject();
        let enterOn = false;
        await sleep(500);
        const callback = async (changeData) => {
          enterOn = true;
          console.info(`off_callback_006 changeData: ${JSON.stringify(changeData)}`);
          expect(false).assertTrue();
          done();
        };
        mgr.on(trashAlbum.albumUri, false, callback);
        await sleep(100);
        mgr.off(trashAlbum.albumUri, callback);
        await sleep(100);
        await trashAlbum.deletePhotoAssets([trashFileAsset]);
        await sleep(1000);
        expect(!enterOn).assertTrue();
        done();
      } catch (error) {
        console.log(`off_callback_006: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_OFF_CALLBACK_0007
     * @tc.name      : off_callback_007
     * @tc.desc      : off listening create album, type NOTIFY_ADD
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('off_callback_007', 0, async function (done) {
      try {
        let enterOn = false;
        const callback = async (changeData) => {
          enterOn = true;
          console.info(`off_callback_007 changeData: ${JSON.stringify(changeData)}`);
          expect(false).assertTrue();
          done();
        };
        mgr.on(DEFAULT_ALBUM_URI, true, callback);
        await sleep(100);
        mgr.off(DEFAULT_ALBUM_URI, callback);
        await sleep(100);
        let albumName = 'testAlbum' + Date.now();
        await mgr.createAlbum(albumName);
        await sleep(1000);
        expect(!enterOn).assertTrue();
        done();
      } catch (error) {
        console.log(`off_callback_007: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_OFF_CALLBACK_0008
     * @tc.name      : off_callback_008
     * @tc.desc      : off listening create album, type NOTIFY_UPDATE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('off_callback_008', 0, async function (done) {
      try {
        let albumUri = '';
        let enterOn = false;
        let albumName = 'testAlbum' + Date.now();
        let album = await mgr.createAlbum(albumName);
        albumUri = album.albumUri;
        await sleep(500);
        const callback = async (changeData) => {
          enterOn = true;
          console.info(`off_callback_008 changeData: ${JSON.stringify(changeData)}`);
          expect(false).assertTrue();
          done();
        };
        mgr.on(albumUri, false, callback);
        await sleep(100);
        mgr.off(albumUri, callback);
        await sleep(100);
        album.albumName = 'hello';
        await album.commitModify();
        await sleep(1000);
        expect(!enterOn).assertTrue();
        done();
      } catch (error) {
        console.log(`off_callback_008: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_OFF_CALLBACK_0009
     * @tc.name      : off_callback_009
     * @tc.desc      : off listening delete album, type NOTIFY_REMOVE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('off_callback_009', 0, async function (done) {
      try {
        let enterOn = false;
        let albumName = 'testAlbum' + Date.now();
        let album = await mgr.createAlbum(albumName);
        await sleep(500);
        const callback = async (changeData) => {
          enterOn = true;
          console.info(`off_callback_009 changeData: ${JSON.stringify(changeData)}`);
          expect(false).assertTrue();
          done();
        };
        mgr.on(DEFAULT_ALBUM_URI, true, callback);
        await sleep(100);
        mgr.off(DEFAULT_ALBUM_URI, callback);
        await sleep(100);
        await mgr.deleteAlbums([album]);
        await sleep(1000);
        expect(!enterOn).assertTrue();
        done();
      } catch (error) {
        console.log(`off_callback_009: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_OFF_CALLBACK_0010
     * @tc.name      : off_callback_010
     * @tc.desc      : off listening change album overUri, type NOTIFY_UPDATE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('off_callback_010', 0, async function example(done) {
      try {
        let albumUri = '';
        let enterOn = false;
        let albumName = 'testAlbum' + Date.now();
        let album = await mgr.createAlbum(albumName);
        let fileAsset1 = await mgr.createPhotoAsset('testCreateFile1' + Date.now() + '.jpg');
        let fd1 = await fileAsset1.open('rw');
        await fileAsset1.close(fd1);
        let fileAsset2 = await mgr.createPhotoAsset('testCreateFile2' + Date.now() + '.jpg');
        let fd2 = await fileAsset2.open('rw');
        await fileAsset2.close(fd2);
        let fileAsset3 = await mgr.createPhotoAsset('testCreateFile3' + Date.now() + '.jpg');
        let fd3 = await fileAsset3.open('rw');
        await fileAsset3.close(fd3);
        albumUri = album.albumUri;
        await album.addPhotoAssets([fileAsset1, fileAsset2, fileAsset3]);
        await sleep(500);
        const callback = async (changeData) => {
          enterOn = true;
          console.info(`onTest_001_11 changeData: ${JSON.stringify(changeData)}`);
          expect(false).assertTrue();
          done();
        };
        mgr.on(albumUri, false, callback);
        await sleep(100);
        mgr.off(albumUri, callback);
        await sleep(100);
        album.coverUri = fileAsset2.uri;
        await album.commitModify();
        await sleep(1000);
        expect(!enterOn).assertTrue();
        done();
      } catch (error) {
        console.log(`off_callback_010: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });
    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_OFF_CALLBACK_0011
     * @tc.name      : off_callback_011
     * @tc.desc      : off listening album removeAssets, type NOTIFY_ALBUM_ADD_ASSET
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('off_callback_011', 0, async function (done) {
      try {
        let albumName = 'testAlbum' + Date.now();
        let album = await mgr.createAlbum(albumName);
        let testFileName = 'testCreateFile' + Date.now() + '.jpg';
        let fileAsset = await mgr.createPhotoAsset(testFileName);
        let fd = await fileAsset.open('rw');
        await fileAsset.close(fd);
        let enterOn = false;
        await sleep(500);
        const callback = async (changeData) => {
          enterOn = true;
          console.info(`off_callback_011 changeData: ${JSON.stringify(changeData)}`);
          expect(false).assertTrue();
          done();
        };
        mgr.on(album.albumUri, false, callback);
        await sleep(100);
        mgr.off(album.albumUri, callback);
        await sleep(100);
        await album.addPhotoAssets([fileAsset]);
        await sleep(1000);
        expect(!enterOn).assertTrue();
        done();
      } catch (error) {
        console.log(`off_callback_011: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_OFF_CALLBACK_0012
     * @tc.name      : off_callback_012
     * @tc.desc      : off listening album removeAssets, type NOTIFY_ALBUM_REMOVE_ASSET
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('off_callback_012', 0, async function (done) {
      try {
        let albumName = 'testAlbum' + Date.now();
        let album = await mgr.createAlbum(albumName);
        let testFileName = 'testCreateFile' + Date.now() + '.jpg';
        let fileAsset = await mgr.createPhotoAsset(testFileName);
        let fd = await fileAsset.open('rw');
        await fileAsset.close(fd);
        let enterOn = false;
        await album.addPhotoAssets([fileAsset]);
        await sleep(500);
        const callback = async (changeData) => {
          enterOn = true;
          console.info(`off_callback_012 changeData: ${JSON.stringify(changeData)}`);
          expect(false).assertTrue();
          done();
        };
        mgr.on(album.albumUri, false, callback);
        await sleep(100);
        mgr.off(album.albumUri, callback);
        await sleep(100);
        await album.removePhotoAssets([fileAsset]);
        await sleep(1000);
        expect(!enterOn).assertTrue();
        done();
      } catch (error) {
        console.log(`off_callback_012: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_OFF_CALLBACK_0013
     * @tc.name      : off_callback_013
     * @tc.desc      : off listening DEFAULT_ALBUM_URI
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('off_callback_013', 0, async function (done) {
      try {
        let albumUri = '';
        let listenCount = 0;
        let fileAsset1 = await mgr.createPhotoAsset('testCreateFile1' + Date.now() + '.jpg');
        let fileAsset2 = await mgr.createPhotoAsset('testCreateFile2' + Date.now() + '.jpg');
        let fileAsset3 = await mgr.createPhotoAsset('testCreateFile3' + Date.now() + '.jpg');
        let testFileName4 = 'testCreateFile4' + Date.now() + '.jpg';
        let fileAsset4 = await mgr.createPhotoAsset(testFileName4);
        let fd = await fileAsset4.open('rw');
        await fileAsset4.close(fd);
        await mgr.delete(fileAsset4.uri);
        await sleep(500);
        const callback = async (changeData) => {
          listenCount++;
          if (listenCount < 7) {
            switch (listenCount) {
              case 1:
                console.info(`off_callback_013_1 changeData: ${JSON.stringify(changeData)}`);
                break;
              case 2:
                console.info(`off_callback_013_2 changeData: ${JSON.stringify(changeData)}`);
                break;
              case 3:
                console.info(`off_callback_013_3 changeData: ${JSON.stringify(changeData)}`);
                break;
              case 4:
                console.info(`off_callback_013_4 changeData: ${JSON.stringify(changeData)}`);
                break;
              case 5:
                console.info(`off_callback_013_5 changeData: ${JSON.stringify(changeData)}`);
                break;
              case 6:
                console.info(`off_callback_013_6 changeData: ${JSON.stringify(changeData)}`);
                break;
              case 7:
                console.info(`off_callback_013_7 changeData: ${JSON.stringify(changeData)}`);
                break;
              default:
                break;
            }
            expect(false).assertTrue();
            done();
          }
        };
        mgr.on(DEFAULT_ALBUM_URI, true, callback);
        await sleep(100);
        mgr.off(DEFAULT_ALBUM_URI, callback);
        await sleep(100);
        // 1
        let albumName = 'testAlbum' + Date.now();
        let album = await mgr.createAlbum(albumName);
        albumUri = album.albumUri;
        // 2
        await sleep(500);
        album.albumName = 'hello';
        await album.commitModify();
        // 3
        await sleep(500);
        await album.addPhotoAssets([fileAsset1, fileAsset2, fileAsset3]);
        // 4
        await sleep(500);
        album.coverUri = fileAsset2.uri;
        await album.commitModify();
        // 5
        await sleep(500);
        await album.removePhotoAssets([fileAsset1]);
        // 6
        await sleep(500);
        await mgr.deleteAlbums([album]);
        // 7
        let trashAlbumList = await mgr.getAlbums(userFileManager.AlbumType.SYSTEM, userFileManager.AlbumSubType.TRASH);
        let trashAlbum = await trashAlbumList.getFirstObject();
        let predicates = new dataSharePredicates.DataSharePredicates();
        let fetchOption = {
          fetchColumns: [],
          predicates: predicates.equalTo('display_name', testFileName4),
        };
        let trashFetchResult = await trashAlbum.getPhotoAssets(fetchOption);
        let trashFileAsset = await trashFetchResult.getFirstObject();
        await trashAlbum.deletePhotoAssets([trashFileAsset]);
        await sleep(1000);
        expect(listenCount).assertEqual(0);
        done();
      } catch (error) {
        console.log(`off_callback_013: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_OFF_CALLBACK_0014
     * @tc.name      : off_callback_014
     * @tc.desc      : off listening DEFAULT_PHOTO_URI
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('off_callback_014', 0, async function (done) {
      try {
        let listenCount = 0;
        let testFileName = 'testCreateFile' + Date.now() + '.jpg';
        let fileAsset = await mgr.createPhotoAsset(testFileName);
        const callback = async (changeData) => {
          listenCount++;
          if (listenCount < 7) {
            switch (listenCount) {
              case 1:
                console.info(`off_callback_014_1 changeData: ${JSON.stringify(changeData)}`);
                break;
              case 2:
                console.info(`off_callback_014_2 changeData: ${JSON.stringify(changeData)}`);
                break;
              case 3:
                console.info(`off_callback_014_3 changeData: ${JSON.stringify(changeData)}`);
                break;
              case 4:
                console.info(`off_callback_014_4 changeData: ${JSON.stringify(changeData)}`);
                break;
              case 5:
                console.info(`off_callback_014_5 changeData: ${JSON.stringify(changeData)}`);
                break;
              case 6:
                console.info(`off_callback_014_6 changeData: ${JSON.stringify(changeData)}`);
                break;
              default:
                break;
            }
            expect(false).assertTrue();
            done();
          }
        };
        mgr.on(DEFAULT_PHOTO_URI, true, callback);
        await sleep(100);
        mgr.off(DEFAULT_PHOTO_URI, callback);
        await sleep(100);
        // 1
        let fd = await fileAsset.open('rw');
        await fileAsset.close(fd);
        // 2
        await sleep(500);
        fileAsset.title = 'newTitle';
        await fileAsset.commitModify();
        // 3
        await sleep(500);
        await fileAsset.favorite(true);
        // 4
        await sleep(500);
        await fileAsset.favorite(false);
        // 5
        await sleep(500);
        await mgr.delete(fileAsset.uri);
        // 6
        await sleep(500);
        let trashAlbumList = await mgr.getAlbums(userFileManager.AlbumType.SYSTEM, userFileManager.AlbumSubType.TRASH);
        let trashAlbum = await trashAlbumList.getFirstObject();
        let predicates = new dataSharePredicates.DataSharePredicates();
        let fetchOption = {
          fetchColumns: [],
          predicates: predicates.equalTo('display_name', testFileName),
        };
        let trashFetchResult = await trashAlbum.getPhotoAssets(fetchOption);
        let trashFileAsset = await trashFetchResult.getFirstObject();
        await trashAlbum.recoverPhotoAssets([trashFileAsset]);
        await sleep(1000);
        expect(listenCount).assertEqual(0);
        done();
      } catch (error) {
        console.log(`off_callback_014: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_OFF_CALLBACK_0015
     * @tc.name      : off_callback_015
     * @tc.desc      : off remove specified callback
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('off_callback_015', 0, async function (done) {
      try {
        let testFileName = 'testCreateFile' + Date.now() + '.jpg';
        let fileAsset = await mgr.createPhotoAsset(testFileName);
        let fd = await fileAsset.open('rw');
        await fileAsset.close(fd);
        let enterOn = false;
        let listenCount = 0;
        await sleep(500);
        const callback = async (changeData) => {
          enterOn = true;
          console.info(`off_callback_015 changeData 1: ${JSON.stringify(changeData)}`);
          expect(false).assertTrue();
          done();
        };
        mgr.on(fileAsset.uri, false, callback);
        mgr.on(fileAsset.uri, false, async (changeData) => {
          listenCount++;
          console.info(`off_callback_015 changeData 2: ${JSON.stringify(changeData)}`);
          expect(changeData.type).assertEqual(NOTIFY_UPDATE);
          expect(changeData.uris[0]).assertEqual(fileAsset.uri);
        });
        await sleep(100);
        mgr.off(fileAsset.uri, callback);
        await sleep(100);
        fileAsset.title = 'newTitle';
        await fileAsset.commitModify();
        await sleep(1000);
        expect(!enterOn).assertTrue();
        expect(listenCount).assertEqual(1);
        done();
      } catch (error) {
        console.log(`off_callback_015: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });
  });
}
