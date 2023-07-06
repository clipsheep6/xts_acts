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
import fileio from '@ohos.fileio';

import { sleep } from '../../../../../../common';

export default function userfilemgrOn(abilityContext) {
  describe('userfilemgrOn', function () {
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
    const { NOTIFY_ADD, NOTIFY_UPDATE, NOTIFY_REMOVE, NOTIFY_ALBUM_ADD_ASSET, NOTIFY_ALBUM_REMOVE_ASSET } =
      userFileManager.NotifyType;
    const { DEFAULT_PHOTO_URI, DEFAULT_ALBUM_URI } = userFileManager.DefaultChangeUri;
    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_ON_CALLBACK_0000
     * @tc.name      : on_callback_000
     * @tc.desc      : listening create file, type NOTIFY_ADD
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('on_callback_000', 0, async function example(done) {
      try {
        let testFileName = 'testCreateFile' + Date.now() + '.jpg';
        let fileAsset = await mgr.createPhotoAsset(testFileName);
        let enterOn = false;
        await sleep(500);
        mgr.on(fileAsset.uri, false, async (changeData) => {
          enterOn = true;
          console.info(`on_callback_000 changeData: ${JSON.stringify(changeData)}`);
          expect(changeData.type).assertEqual(NOTIFY_ADD);
          expect(changeData.uris[0]).assertEqual(fileAsset.uri);
          done();
        });
        let fd = await fileAsset.open('rw');
        await fileAsset.close(fd);
        await sleep(1000);
        expect(enterOn).assertTrue();
        done();
      } catch (error) {
        console.log(`on_callback_000: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_ON_CALLBACK_0001
     * @tc.name      : on_callback_001
     * @tc.desc      : listening motify file title, type NOTIFY_UPDATE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('on_callback_001', 0, async function (done) {
      try {
        let testFileName = 'testCreateFile' + Date.now() + '.jpg';
        let fileAsset = await mgr.createPhotoAsset(testFileName);
        let fd = await fileAsset.open('rw');
        await fileAsset.close(fd);
        let enterOn = false;
        await sleep(500);
        mgr.on(fileAsset.uri, false, async (changeData) => {
          enterOn = true;
          console.info(`on_callback_001 changeData: ${JSON.stringify(changeData)}`);
          expect(changeData.type).assertEqual(NOTIFY_UPDATE);
          expect(changeData.uris[0]).assertEqual(fileAsset.uri);
          done();
        });
        fileAsset.title = 'newTitle';
        await fileAsset.commitModify();
        await sleep(1000);
        expect(enterOn).assertTrue();
        mgr.off(fileAsset.uri);
        done();
      } catch (error) {
        console.log(`on_callback_001: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_ON_CALLBACK_0002
     * @tc.name      : on_callback_002
     * @tc.desc      : listening favorite(true) file, type NOTIFY_UPDATE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('on_callback_002', 0, async function (done) {
      try {
        let testFileName = 'testCreateFile' + Date.now() + '.jpg';
        let fileAsset = await mgr.createPhotoAsset(testFileName);
        let fd = await fileAsset.open('rw');
        await fileAsset.close(fd);
        let listenCount = 0;
        let favoriteAlbumList = await mgr.getAlbums(
          userFileManager.AlbumType.SYSTEM,
          userFileManager.AlbumSubType.FAVORITE
        );
        let favoriteAlbum = await favoriteAlbumList.getFirstObject();
        await sleep(500);
        mgr.on(fileAsset.uri, false, async (changeData) => {
          listenCount++;
          console.info(`on_callback_002 changeData: ${JSON.stringify(changeData)}`);
          expect(changeData.type).assertEqual(NOTIFY_UPDATE);
          expect(changeData.uris[0]).assertEqual(fileAsset.uri);
          done();
        });
        mgr.on(favoriteAlbum.albumUri, false, async (changeData) => {
          listenCount++;
          console.info(`on_callback_002 trashAlbum changeData: ${JSON.stringify(changeData)}`);
          if (listenCount < 3) {
            expect(changeData.type).assertEqual(NOTIFY_ALBUM_ADD_ASSET);
            expect(changeData.subUris[0]).assertEqual(fileAsset.uri);
          }
        });
        await fileAsset.favorite(true);
        await sleep(1000);
        expect(listenCount).assertEqual(2);
        mgr.off(fileAsset.uri);
        mgr.off(favoriteAlbum.albumUri);
        done();
      } catch (error) {
        console.log(`on_callback_002: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_ON_CALLBACK_0003
     * @tc.name      : on_callback_003
     * @tc.desc      : listening favorite(false) file, type NOTIFY_UPDATE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('on_callback_003', 0, async function (done) {
      try {
        let testFileName = 'testCreateFile' + Date.now() + '.jpg';
        let fileAsset = await mgr.createPhotoAsset(testFileName);
        let fd = await fileAsset.open('rw');
        await fileAsset.close(fd);
        await fileAsset.favorite(true);
        let listenCount = 0;
        let favoriteAlbumList = await mgr.getAlbums(
          userFileManager.AlbumType.SYSTEM,
          userFileManager.AlbumSubType.FAVORITE
        );
        let favoriteAlbum = await favoriteAlbumList.getFirstObject();
        await sleep(500);
        mgr.on(fileAsset.uri, false, async (changeData) => {
          listenCount++;
          console.info(`on_callback_003 changeData: ${JSON.stringify(changeData)}`);
          expect(changeData.type).assertEqual(NOTIFY_UPDATE);
          expect(changeData.uris[0]).assertEqual(fileAsset.uri);
          done();
        });
        mgr.on(favoriteAlbum.albumUri, false, async (changeData) => {
          listenCount++;
          console.info(`on_callback_003 trashAlbum changeData: ${JSON.stringify(changeData)}`);
          if (listenCount < 3) {
            expect(changeData.type).assertEqual(NOTIFY_ALBUM_REMOVE_ASSET);
            expect(changeData.subUris[0]).assertEqual(fileAsset.uri);
          }
        });
        await fileAsset.favorite(false);
        await sleep(1000);
        expect(listenCount).assertEqual(2);
        mgr.off(fileAsset.uri);
        mgr.off(favoriteAlbum.albumUri);
        done();
      } catch (error) {
        console.log(`on_callback_003: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_ON_CALLBACK_0004
     * @tc.name      : on_callback_004
     * @tc.desc      : listening delete file, type NOTIFY_REMOVE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('on_callback_004', 0, async function (done) {
      try {
        let testFileName = 'testCreateFile' + Date.now() + '.jpg';
        let fileAsset = await mgr.createPhotoAsset(testFileName);
        let fd = await fileAsset.open('rw');
        await fileAsset.close(fd);
        let listenCount = 0;
        let trashAlbumList = await mgr.getAlbums(userFileManager.AlbumType.SYSTEM, userFileManager.AlbumSubType.TRASH);
        let trashAlbum = await trashAlbumList.getFirstObject();
        await sleep(500);
        mgr.on(fileAsset.uri, false, async (changeData) => {
          listenCount++;
          console.info(`on_callback_004 fileAsset changeData: ${JSON.stringify(changeData)}`);
          if (listenCount < 3) {
            expect(changeData.type).assertEqual(NOTIFY_REMOVE);
            expect(changeData.uris[0]).assertEqual(fileAsset.uri);
          }
        });
        mgr.on(trashAlbum.albumUri, false, async (changeData) => {
          listenCount++;
          console.info(`on_callback_004 trashAlbum changeData: ${JSON.stringify(changeData)}`);
          if (listenCount < 3) {
            expect(changeData.type).assertEqual(NOTIFY_ALBUM_ADD_ASSET);
            expect(changeData.subUris[0]).assertEqual(fileAsset.uri);
          }
        });
        await mgr.delete(fileAsset.uri);
        await sleep(2000);
        expect(listenCount).assertEqual(2);
        mgr.off(fileAsset.uri);
        mgr.off(trashAlbum.albumUri);
        done();
      } catch (error) {
        console.log(`on_callback_004: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_ON_CALLBACK_0005
     * @tc.name      : on_callback_005
     * @tc.desc      : listening recover file, type NOTIFY_ADD
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('on_callback_005', 0, async function (done) {
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
        mgr.on(trashFileAsset.uri, false, async (changeData) => {
          enterOn = true;
          console.info(`on_callback_005 changeData: ${JSON.stringify(changeData)}`);
          expect(changeData.type).assertEqual(NOTIFY_ADD);
          expect(changeData.uris[0]).assertEqual(trashFileAsset.uri);
          done();
        });
        await trashAlbum.recoverPhotoAssets([trashFileAsset]);
        await sleep(2000);
        expect(enterOn).assertTrue();
        mgr.off(trashFileAsset.uri);
        done();
      } catch (error) {
        console.log(`on_callback_005: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_ON_CALLBACK_0006
     * @tc.name      : on_callback_006
     * @tc.desc      : listening trash delete file, type NOTIFY_REMOVE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('on_callback_006', 0, async function (done) {
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
        mgr.on(trashAlbum.albumUri, false, async (changeData) => {
          enterOn = true;
          console.info(`on_callback_006 changeData: ${JSON.stringify(changeData)}`);
          expect(changeData.type).assertEqual(NOTIFY_ALBUM_REMOVE_ASSET);
          expect(changeData.subUris[0]).assertEqual(trashFileAsset.uri);
          done();
        });
        await trashAlbum.deletePhotoAssets([trashFileAsset]);
        await sleep(1000);
        expect(enterOn).assertTrue();
        mgr.off(trashAlbum.albumUri);
        done();
      } catch (error) {
        console.log(`on_callback_006: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_ON_CALLBACK_0007
     * @tc.name      : on_callback_007
     * @tc.desc      : listening create album, type NOTIFY_ADD
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('on_callback_007', 0, async function (done) {
      try {
        let listenCount = 0;
        let changeDataUri = '';
        mgr.on(DEFAULT_ALBUM_URI, true, async (changeData) => {
          listenCount++;
          if (listenCount == 1) {
            console.info(`on_callback_007 changeData: ${JSON.stringify(changeData)}`);
            changeDataUri = changeData.uris[0];
            expect(changeData.type).assertEqual(NOTIFY_ADD);
          }
        });
        let albumName = 'testAlbum' + Date.now();
        let album = await mgr.createAlbum(albumName);
        let creatAlbumUri = album.albumUri;
        await sleep(2000);
        expect(creatAlbumUri).assertEqual(changeDataUri);
        expect(listenCount).assertEqual(1);
        mgr.off(DEFAULT_ALBUM_URI);
        done();
      } catch (error) {
        console.log(`on_callback_007: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_ON_CALLBACK_0008
     * @tc.name      : on_callback_008
     * @tc.desc      : listening create album, type NOTIFY_UPDATE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('on_callback_008', 0, async function (done) {
      try {
        let albumUri = '';
        let enterOn = false;
        let albumName = 'testAlbum' + Date.now();
        let album = await mgr.createAlbum(albumName);
        albumUri = album.albumUri;
        await sleep(500);
        mgr.on(albumUri, false, async (changeData) => {
          enterOn = true;
          console.info(`on_callback_008 changeData: ${JSON.stringify(changeData)}`);
          expect(changeData.type).assertEqual(NOTIFY_UPDATE);
          expect(changeData.uris[0]).assertEqual(albumUri);
          done();
        });
        album.albumName = 'hello';
        await album.commitModify();
        await sleep(1000);
        expect(enterOn).assertTrue();
        mgr.off(albumUri);
        done();
      } catch (error) {
        console.log(`on_callback_008: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_ON_CALLBACK_0009
     * @tc.name      : on_callback_009
     * @tc.desc      : listening delete album, type NOTIFY_REMOVE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('on_callback_009', 0, async function (done) {
      try {
        let albumUri = '';
        let listenCount = 0;
        let albumName = 'testAlbum' + Date.now();
        let album = await mgr.createAlbum(albumName);
        albumUri = album.albumUri;
        await sleep(500);
        mgr.on(DEFAULT_ALBUM_URI, true, async (changeData) => {
          listenCount++;
          if (listenCount < 2) {
            console.info(`on_callback_009 changeData: ${JSON.stringify(changeData)}`);
            expect(changeData.type).assertEqual(NOTIFY_REMOVE);
            expect(changeData.uris[0]).assertEqual(albumUri);
            done();
          }
        });
        await mgr.deleteAlbums([album]);
        await sleep(1000);
        expect(listenCount).assertEqual(1);
        mgr.off(DEFAULT_ALBUM_URI);
        done();
      } catch (error) {
        console.log(`on_callback_009: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_ON_CALLBACK_0010
     * @tc.name      : on_callback_010
     * @tc.desc      : listening change album overUri, type NOTIFY_UPDATE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('on_callback_010', 0, async function example(done) {
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
        mgr.on(albumUri, false, async (changeData) => {
          enterOn = true;
          console.info(`on_callback_010 changeData: ${JSON.stringify(changeData)}`);
          expect(changeData.type).assertEqual(NOTIFY_UPDATE);
          expect(changeData.uris[0]).assertEqual(albumUri);
          done();
        });
        album.coverUri = fileAsset2.uri;
        await album.commitModify();
        await sleep(1000);
        expect(enterOn).assertTrue();
        mgr.off(albumUri);
        done();
      } catch (error) {
        console.log(`on_callback_010: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });
    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_ON_CALLBACK_0011
     * @tc.name      : on_callback_011
     * @tc.desc      : listening album removeAssets, type NOTIFY_ALBUM_ADD_ASSET
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('on_callback_011', 0, async function (done) {
      try {
        let albumName = 'testAlbum' + Date.now();
        let album = await mgr.createAlbum(albumName);
        let testFileName = 'testCreateFile' + Date.now() + '.jpg';
        let fileAsset = await mgr.createPhotoAsset(testFileName);
        let fd = await fileAsset.open('rw');
        await fileAsset.close(fd);
        let enterOn = false;
        await sleep(500);
        mgr.on(album.albumUri, false, async (changeData) => {
          enterOn = true;
          console.info(`on_callback_011 changeData: ${JSON.stringify(changeData)}`);
          expect(changeData.type).assertEqual(NOTIFY_ALBUM_ADD_ASSET);
          expect(changeData.uris[0]).assertEqual(album.albumUri);
          expect(changeData.subUris[0]).assertEqual(fileAsset.uri);
          done();
        });
        await album.addPhotoAssets([fileAsset]);
        await sleep(1000);
        expect(enterOn).assertTrue();
        mgr.off(album.albumUri);
        done();
      } catch (error) {
        console.log(`on_callback_011: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_ON_CALLBACK_0012
     * @tc.name      : on_callback_012
     * @tc.desc      : listening album removeAssets, type NOTIFY_ALBUM_REMOVE_ASSET
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('on_callback_012', 0, async function (done) {
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
        mgr.on(album.albumUri, false, async (changeData) => {
          enterOn = true;
          console.info(`on_callback_012 changeData: ${JSON.stringify(changeData)}`);
          expect(changeData.type).assertEqual(NOTIFY_ALBUM_REMOVE_ASSET);
          expect(changeData.uris[0]).assertEqual(album.albumUri);
          expect(changeData.subUris[0]).assertEqual(fileAsset.uri);
          done();
        });
        await album.removePhotoAssets([fileAsset]);
        await sleep(1000);
        expect(enterOn).assertTrue();
        mgr.off(album.albumUri);
        done();
      } catch (error) {
        console.log(`on_callback_012: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_ON_CALLBACK_0013
     * @tc.name      : on_callback_013
     * @tc.desc      : listening DEFAULT_ALBUM_URI
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('on_callback_013', 0, async function (done) {
      try {
        let albumUri = '';
        let trashAlbumUri = '';
        let listenCount = 0;
        let trashFileAssetUri = '';
        let fileAsset1 = await mgr.createPhotoAsset('testCreateFile1' + Date.now() + '.jpg');
        let fileAsset2 = await mgr.createPhotoAsset('testCreateFile2' + Date.now() + '.jpg');
        let fileAsset3 = await mgr.createPhotoAsset('testCreateFile3' + Date.now() + '.jpg');
        let testFileName4 = 'testCreateFile4' + Date.now() + '.jpg';
        let fileAsset4 = await mgr.createPhotoAsset(testFileName4);
        let fd = await fileAsset4.open('rw');
        await fileAsset4.close(fd);
        await mgr.delete(fileAsset4.uri);
        await sleep(500);
        mgr.on(DEFAULT_ALBUM_URI, true, async (changeData) => {
          listenCount++;
          if (listenCount < 8) {
            switch (listenCount) {
              case 1:
                console.info(`on_callback_013_1 changeData: ${JSON.stringify(changeData)}`);
                expect(changeData.type).assertEqual(NOTIFY_ADD);
                expect(changeData.uris[0]).assertEqual(albumUri);
                break;
              case 2:
                console.info(`on_callback_013_2 changeData: ${JSON.stringify(changeData)}`);
                expect(changeData.type).assertEqual(NOTIFY_UPDATE);
                expect(changeData.uris[0]).assertEqual(albumUri);
                break;
              case 3:
                console.info(`on_callback_013_3 changeData: ${JSON.stringify(changeData)}`);
                expect(changeData.type).assertEqual(NOTIFY_ALBUM_ADD_ASSET);
                expect(changeData.uris[0]).assertEqual(albumUri);
                break;
              case 4:
                console.info(`on_callback_013_4 changeData: ${JSON.stringify(changeData)}`);
                expect(changeData.type).assertEqual(NOTIFY_UPDATE);
                expect(changeData.uris[0]).assertEqual(albumUri);
                break;
              case 5:
                console.info(`on_callback_013_5 changeData: ${JSON.stringify(changeData)}`);
                expect(changeData.type).assertEqual(NOTIFY_ALBUM_REMOVE_ASSET);
                expect(changeData.uris[0]).assertEqual(albumUri);
                break;
              case 6:
                console.info(`on_callback_013_6 changeData: ${JSON.stringify(changeData)}`);
                expect(changeData.type).assertEqual(NOTIFY_REMOVE);
                expect(changeData.uris[0]).assertEqual(albumUri);
                break;
              case 7:
                console.info(`on_callback_013_7 changeData: ${JSON.stringify(changeData)}`);
                expect(changeData.uris[0]).assertEqual(trashAlbumUri);
                expect(changeData.type).assertEqual(NOTIFY_ALBUM_REMOVE_ASSET);
                expect(changeData.subUris[0]).assertEqual(trashFileAssetUri);
                break;
              default:
                break;
            }
          }
        });
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
        await sleep(500);
        let trashAlbumList = await mgr.getAlbums(userFileManager.AlbumType.SYSTEM, userFileManager.AlbumSubType.TRASH);
        let trashAlbum = await trashAlbumList.getFirstObject();
        trashAlbumUri = trashAlbum.albumUri;
        let predicates = new dataSharePredicates.DataSharePredicates();
        let fetchOption = {
          fetchColumns: [],
          predicates: predicates.equalTo('display_name', testFileName4),
        };
        let trashFetchResult = await trashAlbum.getPhotoAssets(fetchOption);
        let trashFileAsset = await trashFetchResult.getFirstObject();
        trashFileAssetUri = trashFileAsset.uri;
        console.log(`on_callback_013: trashFileAssetUri: ${trashFileAssetUri}`);
        await trashAlbum.deletePhotoAssets([trashFileAsset]);
        await sleep(1000);

        expect(listenCount).assertEqual(7);
        mgr.off(DEFAULT_ALBUM_URI);
        done();
      } catch (error) {
        console.log(`on_callback_013: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_ON_CALLBACK_0014
     * @tc.name      : on_callback_014
     * @tc.desc      : listening DEFAULT_PHOTO_URI
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('on_callback_014', 0, async function (done) {
      try {
        let listenCount = 0;
        let testFileName = 'testCreateFile' + Date.now() + '.jpg';
        let fileAsset = await mgr.createPhotoAsset(testFileName);
        let fileAssetUri = fileAsset.uri;
        mgr.on(DEFAULT_PHOTO_URI, true, async (changeData) => {
          listenCount++;
          if (listenCount < 7) {
            switch (listenCount) {
              case 1:
                console.info(`on_callback_014_1 changeData: ${JSON.stringify(changeData)}`);
                expect(changeData.type).assertEqual(NOTIFY_ADD);
                expect(changeData.uris[0]).assertEqual(fileAssetUri);
                break;
              case 2:
                console.info(`on_callback_014_2 changeData: ${JSON.stringify(changeData)}`);
                expect(changeData.type).assertEqual(NOTIFY_UPDATE);
                expect(changeData.uris[0]).assertEqual(fileAssetUri);
                break;
              case 3:
                console.info(`on_callback_014_3 changeData: ${JSON.stringify(changeData)}`);
                expect(changeData.type).assertEqual(NOTIFY_UPDATE);
                expect(changeData.uris[0]).assertEqual(fileAssetUri);
                break;
              case 4:
                console.info(`on_callback_014_4 changeData: ${JSON.stringify(changeData)}`);
                expect(changeData.type).assertEqual(NOTIFY_UPDATE);
                expect(changeData.uris[0]).assertEqual(fileAssetUri);
                break;
              case 5:
                console.info(`on_callback_014_5 changeData: ${JSON.stringify(changeData)}`);
                expect(changeData.type).assertEqual(NOTIFY_REMOVE);
                expect(changeData.uris[0]).assertEqual(fileAssetUri);
                break;
              case 6:
                console.info(`on_callback_014_6 changeData: ${JSON.stringify(changeData)}`);
                expect(changeData.type).assertEqual(NOTIFY_ADD);
                expect(changeData.uris[0]).assertEqual(fileAssetUri);
                break;
              default:
                break;
            }
          }
        });
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
        expect(listenCount).assertEqual(6);
        mgr.off(DEFAULT_PHOTO_URI);
        done();
      } catch (error) {
        console.log(`on_callback_014: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_ON_CALLBACK_0015
     * @tc.name      : on_callback_015
     * @tc.desc      : listening 32
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('on_callback_015', 0, async function (done) {
      try {
        mgr.off(DEFAULT_PHOTO_URI);
        const count = 10;
        let fileAssetsList = [];
        let listenCount = 0;
        for (let i = 0; i < count; i++) {
          let fileAsset = await mgr.createPhotoAsset('testTrashFalse' + Date.now() + '.jpg');
          let fd = await fileAsset.open('rw');
          await fileAsset.close(fd);
          fileAssetsList.push(fileAsset);
        }
        await sleep(1000);
        mgr.on(DEFAULT_PHOTO_URI, true, async (changeData) => {
          listenCount++;
          if (listenCount == 1) {
            console.info(`on_callback_015 changeData: ${JSON.stringify(changeData)}`);
            expect(changeData.type).assertEqual(NOTIFY_UPDATE);
            expect(changeData.uris.length).assertEqual(count);
            done();
          }
        });
        for (let i = 0; i < count; i++) {
          fileAssetsList[i].title = 'newTitle';
          fileAssetsList[i].commitModify();
        }
        await sleep(2000);
        expect(listenCount).assertEqual(1);
        mgr.off(DEFAULT_PHOTO_URI);
        done();
      } catch (error) {
        console.log(`on_callback_015: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_ON_CALLBACK_0016
     * @tc.name      : on_callback_016
     * @tc.desc      : listening 500ms
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('on_callback_016', 0, async function (done) {
      try {
        let testFileName = 'testCreateFile' + Date.now() + '.jpg';
        let fileAsset = await mgr.createPhotoAsset(testFileName);
        let fd = await fileAsset.open('rw');
        await fileAsset.close(fd);
        let listenCount = 0;
        await sleep(500);
        mgr.on(fileAsset.uri, false, async (changeData) => {
          listenCount++;
          console.info(`on_callback_016 changeData: ${JSON.stringify(changeData)}`);
          expect(changeData.type).assertEqual(NOTIFY_UPDATE);
          expect(changeData.uris[0]).assertEqual(fileAsset.uri);
          done();
        });
        for (let i = 0; i < 10; i++) {
          if (i % 2 == 0) {
            await fileAsset.favorite(true);
          } else {
            await fileAsset.favorite(false);
          }
          await sleep(500);
        }
        await sleep(2000);
        expect(listenCount).assertEqual(10);
        mgr.off(fileAsset.uri);
        done();
      } catch (error) {
        console.log(`on_callback_016: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_ON_CALLBACK_0017
     * @tc.name      : on_callback_017
     * @tc.desc      : listening update file, type NOTIFY_UPDATE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('on_callback_017', 0, async function example(done) {
      try {
        let testFileName = 'testCreateFile' + Date.now() + '.jpg';
        let fileAsset = await mgr.createPhotoAsset(testFileName);
        let fd = await fileAsset.open('rw');
        let buf = new ArrayBuffer(1);
        buf[0] = 1;
        await fileio.write(fd, buf);
        await fileAsset.close(fd);
        let enterOn = false;
        await sleep(1000);
        mgr.on(fileAsset.uri, false, async (changeData) => {
          enterOn = true;
          console.info(`on_callback_017 changeData: ${JSON.stringify(changeData)}`);
          expect(changeData.type).assertEqual(NOTIFY_UPDATE);
          expect(changeData.uris[0]).assertEqual(fileAsset.uri);
          done();
        });
        fd = await fileAsset.open('rw');
        buf = new ArrayBuffer(1);
        buf[0] = 0;
        await fileio.write(fd, buf);
        await fileAsset.close(fd);
        await sleep(1000);
        expect(enterOn).assertTrue();
        mgr.off(fileAsset.uri);
        done();
      } catch (error) {
        console.log(`on_callback_017: tryError: $${error}`);
        expect(false).assertTrue();
        done();
      }
    });
  });
}
