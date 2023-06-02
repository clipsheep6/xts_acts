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
import userFileManager from '@ohos.filemanagement.userFileManager';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';
import dataSharePredicates from '@ohos.data.dataSharePredicates';
import {
  AlbumKey,
  AlbumType,
  AlbumSubType,
  sleep,
  getPermission,
} from '../../../../../../common';

export default function albumPromiseTest(abilityContext) {
  describe('albumPromiseTest', function () {
    const TAG = 'SUB_USERFILEMGR ';
    const userfilemgr = userFileManager.getUserFileMgr(abilityContext);
    beforeAll(async function () {
      await getPermission();
      console.info('beforeAll case');
    });
    beforeEach(async function () {
      console.info('beforeEach case');
      expect(userfilemgr != undefined).assertTrue();
      await deleteAllUserAlbum();
    });
    afterEach(async function () {
      console.info('afterEach case');
      await sleep(200);
    });
    afterAll(function () {
        console.info('afterAll case');
    });

    function checkUserAlbum(album: userFileManager.Album, expectedName: string, expectedCover: string ) : void {
      console.info(`${TAG} checkUserAlbum expectedName: ${expectedName}`);
      expect(album.albumType).assertEqual(AlbumType.USER);
      expect(album.albumSubType).assertEqual(AlbumSubType.USER_GENERIC);
      expect(album.albumName).assertEqual(expectedName);
      if (expectedCover == '') {
        expect(album.coverUri).assertEqual('');
      } else {
        expect(album.coverUri).assertEqual(expectedCover);
      }
      expect(album.albumUri != '').assertEqual(true);
      expect(album.count).assertEqual(0);
    }
    function checkSystemAlbum(album: userFileManager.Album, expectedSubType: userFileManager.AlbumSubType) : void {
      console.info(`${TAG} checkSystemAlbum expectedSubType: ${expectedSubType}`);
      expect(album.albumType).assertEqual(AlbumType.SYSTEM);
      expect(album.albumSubType).assertEqual(expectedSubType);
      expect(album.albumName).assertEqual('');
      expect(album.coverUri).assertEqual('');
      expect(album.albumUri != '').assertEqual(true);
      expect(album.count).assertEqual(0);
    }

    async function getAlbumList(fetchResult: userFileManager.FetchResult<userFileManager.Album>) {
      let albumList : Array<userFileManager.Album> = new Array();
      try {
        let count = fetchResult.getCount();
        console.info(TAG + 'Fetch user album count: ' + count);
        for (let i = 0; i < count; i++) {
          albumList.push(await fetchResult.getNextObject());
        }
        return albumList;
      } catch (error) {
        console.info(`${TAG} Failed to get albums from fetchResult! error: ${error}`);
        expect(false).assertTrue();
        throw error;
      }
    }

    async function getAlbumsByType(albumType: userFileManager.AlbumType) {
      try {
        let fetchResult = await userfilemgr.getAlbums(albumType, AlbumSubType.ANY);
        return await getAlbumList(fetchResult);
      } catch(error) {
        console.info(`${TAG} Failed to get all user albums! error: ${error}`);
        expect(false).assertTrue();
        throw error;
      }
    }

    async function getAllUserAlbums() {
      return await getAlbumsByType(AlbumType.USER);
    }

    async function getAllSystemAlbums() {
      return await getAlbumsByType(AlbumType.SYSTEM);
    }

    function genRadomStr(len: number) {
      const chars = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789';
      let randomStr = '';
      for (var i = 0; i < len; i++) {
        randomStr += chars.charAt(Math.floor(Math.random() * chars.length));
      }
      return randomStr;
    }

    async function createUserAlbumAndCheck(albumName: string) {
      try {
        expect(userfilemgr != undefined).assertTrue();
        let album = await userfilemgr.createAlbum(albumName);
        checkUserAlbum(album, albumName, '');
        return album;
      } catch (error) {
        console.info(`${TAG} Failed to create album! error: ${error} albumName: ${albumName}`);
        expect(false).assertTrue();
        throw error;
      }
    }

    async function deleteAllUserAlbum() {
      try {
        await userfilemgr.deleteAlbums(await getAllUserAlbums());
      } catch(error) {
        console.info(`${TAG} Failed to delete all user albums! error: ${error}`);
        expect(false).assertTrue();
        throw error;
      }
    }

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_001
      * @tc.name      : userFileManagerPromiseCreateAlbum001
      * @tc.desc      : create albums test
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_001', 0, async function (done) {
      try {
        let albumName = 'SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_001';
        await createUserAlbumAndCheck(albumName);
        done();
      } catch (error) {
        console.info(`${TAG} SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_001 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_002
      * @tc.name      : userFileManagerPromiseCreateAlbum002
      * @tc.desc      : create albums with illegal characters
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_002', 0, async function (done) {
      try {
        let TITLE_REGEX_CHECK = '\.\\/:*?"\'`<>|{}\[\]';
        let baseName = 'SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_002';
        for (let i = 0; i < TITLE_REGEX_CHECK.length; i++) {
          let albumName = baseName + TITLE_REGEX_CHECK[i];
          try {
            await userfilemgr.createAlbum(albumName);
            expect(false).assertTrue();
          } catch (error) {
            expect(error.code == 13900020).assertTrue();
          }
        }
        done();
      } catch(error) {
        console.info(`${TAG} SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_002 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_003
      * @tc.name      : userFileManagerPromiseCreateAlbum003
      * @tc.desc      : create an existing album
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_003', 0, async function (done) {
      try {
        let albumName = 'SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_003';
        await createUserAlbumAndCheck(albumName);
        await userfilemgr.createAlbum(albumName);
        expect(false).assertTrue();
        done();
      } catch (error) {
        console.info(`${TAG} SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_003 failed, error: ${error}`);
        expect(true).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_004
      * @tc.name      : userFileManagerPromiseCreateAlbum004
      * @tc.desc      : create albums with long name
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_004', 0, async function (done) {
      try {
        let albumName = genRadomStr(256);
        await userfilemgr.createAlbum(albumName);
        expect(false).assertTrue();
        done();
      } catch (error) {
        expect(error.code == 13900020).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_005
      * @tc.name      : userFileManagerPromiseCreateAlbum005
      * @tc.desc      : create albums with invalid dot characters
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_005', 0, async function (done) {
      try {
        let albumNames = [
          '.CREATE_ALBUM_005',
          'CREATE_ALBUM_005.',
          'CREATE_.ALBUM_005',
          '..CREATE_ALBUM_005',
          'CREATE_.ALBUM._005'
        ];
        for (let i = 0; i < albumNames.length; i++) {
          try {
            await userfilemgr.createAlbum(albumNames[i]);
            expect(false).assertTrue();
          } catch (error) {
            expect(error.code == 13900020).assertTrue();
          }
        }
        done();
      } catch (error) {
        console.info(`${TAG} SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_005 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_DELETE_ALBUM_001
      * @tc.name      : userFileManagerPromiseDeleteAlbum001
      * @tc.desc      : delete albums test
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('SUB_USERFILEMGR_PROMISE_DELETE_ALBUM_001', 0, async function (done) {
      try {
        let albumNames = [
          'DELETE_ALBUM_001_001',
          'DELETE_ALBUM_001_002',
          'DELETE_ALBUM_001_003',
          'DELETE_ALBUM_001_004',
          'DELETE_ALBUM_001_005',
          
        ];
        let albumList : Array<userFileManager.Album> = new Array();
        for (let i = 0; i < albumNames.length; i++) {
          let album = await createUserAlbumAndCheck(albumNames[i]);
          albumList.push(album);
        }
        await userfilemgr.deleteAlbums(albumList);
        done();
      } catch (error) {
        console.info(`${TAG} SUB_USERFILEMGR_PROMISE_DELETE_ALBUM_001 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_DELETE_ALBUM_002
      * @tc.name      : userFileManagerPromiseDeleteAlbum002
      * @tc.desc      : delete system albums, which should be failed.
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('SUB_USERFILEMGR_PROMISE_DELETE_ALBUM_002', 0, async function (done) {
      try {
        let albumList = await getAllSystemAlbums();
        await userfilemgr.deleteAlbums(albumList);
        expect(false).assertTrue();
        done();
      } catch (error) {
        expect(error.code == 13900020).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_GET_ALBUM_001
      * @tc.name      : userFileManagerPromiseGetAlbum001
      * @tc.desc      : get an user album
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('SUB_USERFILEMGR_PROMISE_GET_ALBUM_001', 0, async function (done) {
      try {
        let albumNames = [
          'GET_ALBUM_001_001',
          'GET_ALBUM_001_002',
          'GET_ALBUM_001_003',
          'GET_ALBUM_001_004',
          'GET_ALBUM_001_005'
        ];

        // Firstly, create some albums
        for (let i = 0; i < albumNames.length; i++) {
          await createUserAlbumAndCheck(albumNames[i]);
        }

        // Secondly, get albums and check
        let fetchResult = await userfilemgr.getAlbums(AlbumType.USER, AlbumSubType.USER_GENERIC);
        let albumList = await getAlbumList(fetchResult);
        expect(albumList.length).assertEqual(albumNames.length);
        for (let i = 0; i < albumList.length; i++) {
          checkUserAlbum(albumList[i], albumNames[i], '');
        }
        done();
      } catch (error) {
        console.info(`${TAG} SUB_USERFILEMGR_PROMISE_GET_ALBUM_001 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_GET_ALBUM_002
      * @tc.name      : userFileManagerPromiseGetAlbum002
      * @tc.desc      : get user albums by albumName
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
    */
    it('SUB_USERFILEMGR_PROMISE_GET_ALBUM_002', 0, async function (done) {
      try {
        // Firstly, create an album
        let albumName = 'userGenericAlbum2';
        checkUserAlbum(await userfilemgr.createAlbum(albumName), albumName, '');

        // Secondly, query the newly created album by albumName, the fetch count should be 1
        let predicates = new dataSharePredicates.DataSharePredicates();
        let fetchOptions = {
          fetchColumns: [],
          predicates: predicates.equalTo(AlbumKey.ALBUM_NAME, albumName)
        };

        let fetchAlbumResult = await userfilemgr.getAlbums(AlbumType.USER, AlbumSubType.USER_GENERIC, fetchOptions);
        let count = fetchAlbumResult.getCount();
        console.info(`${TAG} SUB_USERFILEMGR_PROMISE_GET_ALBUM_002 Fetch album count: ${count}`);
        expect(count).assertEqual(1);

        // Finally, check the newly created album's attributes
        checkUserAlbum(await fetchAlbumResult.getFirstObject(), albumName, '');
        done();
      } catch (error) {
        console.info(`${TAG} SUB_USERFILEMGR_PROMISE_GET_ALBUM_002 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_GET_ALBUM_003
      * @tc.name      : userFileManagerPromiseGetAlbum003
      * @tc.desc      : get system albums by albumType
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('SUB_USERFILEMGR_PROMISE_GET_ALBUM_003', 0, async function (done) {
      try {
        let subTypes : Array<userFileManager.AlbumSubType> = [
          AlbumSubType.VIDEO,
          AlbumSubType.FAVORITE,
          AlbumSubType.HIDDEN,
          AlbumSubType.TRASH,
          AlbumSubType.SCREENSHOT,
          AlbumSubType.CAMERA
        ];
        for (let i = 0; i < subTypes.length; i++) {
          let fetchResult = await userfilemgr.getAlbums(AlbumType.SYSTEM, subTypes[i]);
          let album = await fetchResult.getFirstObject();
          checkSystemAlbum(album, subTypes[i]);
        }
        done();
      } catch (error) {
        console.info(`${TAG} SUB_USERFILEMGR_PROMISE_GET_ALBUM_003 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_001
      * @tc.name      : userFileManagerPromiseUpdateAlbum001
      * @tc.desc      : update albumName
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_001', 0, async function (done) {
      try {
        let oldName = 'UPDATE_ALBUM_001';
        let album = await createUserAlbumAndCheck(oldName);

        let newName = 'UPDATE_ALBUM_New_001';
        album.albumName = newName;
        await album.commitModify();

        checkUserAlbum(album, newName, '');
        done();
      } catch (error) {
        console.info(`${TAG} SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_001 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_002
      * @tc.name      : userFileManagerPromiseUpdateAlbum002
      * @tc.desc      : update coverUri
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_002', 0, async function (done) {
      try {
        let albumName = 'UPDATE_ALBUM_002';
        let album = await createUserAlbumAndCheck(albumName);

        // Update coverUri with non-empty string
        let newCover = 'file://media/asset/10';
        album.coverUri = newCover;
        await album.commitModify();
        checkUserAlbum(album, albumName, newCover);

        // Update coverUri with empty string
        album.coverUri = '';
        await album.commitModify();
        checkUserAlbum(album, albumName, '');
        done();
      } catch (error) {
        console.info(`${TAG} SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_002 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_003
      * @tc.name      : userFileManagerPromiseUpdateAlbum003
      * @tc.desc      : update both albumName and coverUri
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_003', 0, async function (done) {
      try {
        let oldName = 'UPDATE_ALBUM_003';
        let album = await createUserAlbumAndCheck(oldName);

        let newName = 'UPDATE_ALBUM_New_003';
        let newCover = 'file://media/asset/10';
        album.albumName = newName;
        album.coverUri = newCover;
        await album.commitModify();

        checkUserAlbum(album, newName, newCover);
        done();
      } catch (error) {
        console.info(`${TAG} SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_003 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_004
      * @tc.name      : userFileManagerPromiseUpdateAlbum004
      * @tc.desc      : update system album's attributes, which should be failed.
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_004', 0, async function (done) {
      try {
        let albumList = await getAllSystemAlbums();

        for (let i = 0; i < albumList.length; i++) {
          let newName = 'UPDATE_ALBUM_New_004';
          let newCover = 'file://media/asset/10';
          albumList[i].albumName = newName;
          albumList[i].coverUri = newCover;
          try {
            await albumList[i].commitModify();
            expect(false).assertTrue();
          } catch(error) {
            console.info(`${TAG} SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_004, error.code: ${typeof error.code}`);
            expect(error.code == 13900020).assertTrue();
          }
        }
        done();
      } catch (error) {
        console.info(`${TAG} SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_004 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_005
      * @tc.name      : userFileManagerPromiseUpdateAlbum005
      * @tc.desc      : commitModify with no change.
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_005', 0, async function (done) {
      try {
        let albumName = 'UPDATE_ALBUM_005';
        let album = await createUserAlbumAndCheck(albumName);
        await album.commitModify();

        checkUserAlbum(album, albumName, '');
        done();
      } catch (error) {
        console.info(`${TAG} SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_005 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_006
      * @tc.name      : userFileManagerPromiseUpdateAlbum006
      * @tc.desc      : commitModify with invalid long albumName
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_006', 0, async function (done) {
      try {
        let albumName = 'UPDATE_ALBUM_006';
        let album = await createUserAlbumAndCheck(albumName);

        let invalidName = genRadomStr(256);
        album.albumName = invalidName;
        try {
          await album.commitModify();
          expect(false).assertTrue();
        } catch(error) {
          expect(error.code == 13900020).assertTrue();
        }
        done();
      } catch (error) {
        console.info(`${TAG} SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_006 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_007
      * @tc.name      : userFileManagerPromiseUpdateAlbum007
      * @tc.desc      : commitModify with albumNames containing invalid characters
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_007', 0, async function (done) {
      try {
        let baseName = 'UPDATE_ALBUM_007';
        let album = await createUserAlbumAndCheck(baseName);

        let TITLE_REGEX_CHECK = '\.\\/:*?"\'`<>|{}\[\]';
        for (let i = 0; i < TITLE_REGEX_CHECK.length; i++) {
          let invalidName = baseName + TITLE_REGEX_CHECK[i];
          try {
            album.albumName = invalidName;
            await album.commitModify();
            expect(false).assertTrue();
          } catch (error) {
            expect(error.code == 13900020).assertTrue();
          }
        }
        done();
      } catch (error) {
        console.info(`${TAG} SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_007 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });
  });
}
