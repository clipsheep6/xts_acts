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
import userFileManager from "@ohos.filemanagement.userFileManager";
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "deccjsunit/index";
import dataSharePredicates from '@ohos.data.dataSharePredicates';
import {
  USER_ALBUM_TYPE,
  SYSTEM_ALBUM_TYPE,
  USER_GENERIC_ALBUM_SUB_TYPE,
  VIDEO_ALBUM_SUB_TYPE,
  FAVORITE_ALBUM_SUB_TYPE,
  TRASH_ALBUM_SUB_TYPE,
  ANY_ALBUM_SUB_TYPE,
  sleep,
  getUserFileMgrPermission,
} from "../../../../../../common";

export default function userFileManagerAlbumTest(abilityContext) {
  describe("userFileManagerAlbumTest", function () {
    const userfilemgr = userFileManager.getUserFileMgr(abilityContext);
    beforeAll(async function () {
      await getUserFileMgrPermission(null, abilityContext);
      console.info("beforeAll case");
    });
    beforeEach(function () {
      console.info("beforeEach case");
    });
    afterEach(async function () {
      console.info("afterEach case");
      await sleep(200);
    });
    afterAll(function () {
        console.info("afterAll case");
    });

    function checkUserAlbum(album: userFileManager.Album, expectedName: string) : void {
      expect(album.albumType == USER_ALBUM_TYPE).assertTrue();
      expect(album.albumSubType == USER_GENERIC_ALBUM_SUB_TYPE).assertTrue();
      expect(album.albumName == expectedName).assertTrue();
      expect(album.coverUri == "").assertTrue();
      expect(album.albumUri != "").assertTrue();
      expect(album.count == 0).assertTrue();
    }
    function checkSystemAlbum(album: userFileManager.Album, expectedType: userFileManager.AlbumSubType) : void {
      expect(album.albumType == SYSTEM_ALBUM_TYPE).assertTrue();
      expect(album.albumSubType == expectedType).assertTrue();
      expect(album.albumName == "").assertTrue();
      expect(album.coverUri == "").assertTrue();
      expect(album.albumUri != "").assertTrue();
      expect(album.count == 0).assertTrue();
    }
    function generateRamStr(len, charSet) {
      const chars = charSet || 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789';
      let randomStr = "";
      for (var i = 0; i < len; i++) {
        randomStr += chars.charAt(Math.floor(Math.random() * chars.length));
      }
      return randomStr;
    }

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_CREATEALBUM_001
      * @tc.name      : createAlbum
      * @tc.desc      : create an album
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
      */
    it("SUB_USERFILEMGR_PROMISE_CREATEALBUM_001", 0, async function (done) {
      try {
        expect(userfilemgr != undefined).assertTrue();
        let albumName = "NewAlbum1";
        let album = await userfilemgr.createAlbum(albumName);
        checkUserAlbum(album, albumName);
        done();
      } catch (error) {
        console.info(`UserFileManagerTest : SUB_USERFILEMGR_PROMISE_CREATEALBUM_001 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_CREATEALBUM_002
      * @tc.name      : createAlbum
      * @tc.desc      : create an album with illegal characters
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
   
    it("SUB_USERFILEMGR_PROMISE_CREATEALBUM_002", 0, async function (done) {
      try {
        expect(userfilemgr != undefined).assertTrue();
        let TITLE_REGEX_CHECK = '\.\\/:*?"\'`<>|{}\[\]';
        let baseName = "SUB_USERFILEMGR_PROMISE_CREATEALBUM_002";
        for (let i in TITLE_REGEX_CHECK) {
          let albumName = baseName + TITLE_REGEX_CHECK[i];
          try {
            let album = await userfilemgr.createAlbum(albumName);
            expect(false).assertTrue;
          } catch (error) {
            expect(error.code == 13900020).assertTrue;
            expect(true).assertTrue;
          }
        }
        expect(true).assertTrue;
        done();
      } catch (error) {
        console.info(`UserFileManagerTest : SUB_USERFILEMGR_PROMISE_CREATEALBUM_002 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });
    */
    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_CREATEALBUM_003
      * @tc.name      : createAlbum
      * @tc.desc      : create an existing album
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
      */
    it("SUB_USERFILEMGR_PROMISE_CREATEALBUM_003", 0, async function (done) {
      try {
        expect(userfilemgr != undefined).assertTrue();
        let albumName = "NewAlbumRepetition";
        let album = await userfilemgr.createAlbum(albumName);
        checkUserAlbum(album, albumName);
        try {
          album = await userfilemgr.createAlbum(albumName);
          expect(false).assertTrue;
        } catch (error) {
          expect(true).assertTrue;
        }
        expect(true).assertTrue;
        done();
      } catch (error) {
        console.info(`UserFileManagerTest : SUB_USERFILEMGR_PROMISE_CREATEALBUM_003 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_CREATEALBUM_004
      * @tc.name      : createAlbum
      * @tc.desc      : use very long characters to create albums
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2

    it("SUB_USERFILEMGR_PROMISE_CREATEALBUM_004", 0, async function (done) {
      try {
        expect(userfilemgr != undefined).assertTrue();
        let albumName = generateRamStr(257, undefined);
        try {
          album = await userfilemgr.createAlbum(albumName);
          expect(false).assertTrue;
        } catch (error) {
          expect(true).assertTrue;
        }
        expect(true).assertTrue;
        done();
      } catch (error) {
        console.info(`UserFileManagerTest : SUB_USERFILEMGR_PROMISE_CREATEALBUM_004 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });
    */
    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_GETALBUM_001
      * @tc.name      : getAlbums
      * @tc.desc      : get an user album
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
      */
    it("SUB_USERFILEMGR_PROMISE_GETALBUM_001", 0, async function (done) {
      try {
        expect(userfilemgr != undefined).assertTrue();
        let albumName = "userGenericAlbum1";
        let album = await userfilemgr.createAlbum(albumName);
        checkUserAlbum(album, albumName);

        let albumList = await userfilemgr.getAlbums(USER_ALBUM_TYPE, USER_GENERIC_ALBUM_SUB_TYPE);
        if (albumList.length > 0) {
          for (album in albumList) {
            checkUserAlbum(album, album.albumName);
          }
        }
        done();
      } catch (error) {
        console.info(`UserFileManagerTest : SUB_USERFILEMGR_PROMISE_GETALBUM_001 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_GETALBUM_002
      * @tc.name      : getAlbums
      * @tc.desc      : get an designated user album
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
      */
    it("SUB_USERFILEMGR_PROMISE_GETALBUM_002", 0, async function (done) {
      try {
        expect(userfilemgr != undefined).assertTrue();
        let albumName = "userGenericAlbum2";
        let album = await userfilemgr.createAlbum(albumName);
        checkUserAlbum(album, albumName);
        let predicates = new dataSharePredicates.DataSharePredicates();
        let fetchOptions = {
          fetchColumns: [],
          predicates: predicates.equalTo(userFileManager.AlbumKey.ALBUM_NAME, "userGenericAlbum2")
        };

        let albumList = await userfilemgr.getAlbums(USER_ALBUM_TYPE, USER_GENERIC_ALBUM_SUB_TYPE, fetchOptions);
        if (albumList.length > 0) {
          checkUserAlbum(albumList[0], albumName);
        }
        done();
      } catch (error) {
        console.info(`UserFileManagerTest : SUB_USERFILEMGR_PROMISE_GETALBUM_002 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_GETALBUM_003
      * @tc.name      : getAlbums
      * @tc.desc      : get an system album
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
      */
    it("SUB_USERFILEMGR_PROMISE_GETALBUM_003", 0, async function (done) {
      try {
        expect(userfilemgr != undefined).assertTrue();
        let albumList = await userfilemgr.getAlbums(SYSTEM_ALBUM_TYPE, VIDEO_ALBUM_SUB_TYPE);
        if (albumList.length > 0) {
          checkSystemAlbum(albumList[0], VIDEO_ALBUM_SUB_TYPE);
        }
        done();
      } catch (error) {
        console.info(`UserFileManagerTest : SUB_USERFILEMGR_PROMISE_GETALBUM_003 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });
    
    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_GETALBUM_004
      * @tc.name      : getAlbums
      * @tc.desc      : get an system album
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
      */
    it("SUB_USERFILEMGR_PROMISE_GETALBUM_004", 0, async function (done) {
      try {
        expect(userfilemgr != undefined).assertTrue();
        let albumList = await userfilemgr.getAlbums(SYSTEM_ALBUM_TYPE, FAVORITE_ALBUM_SUB_TYPE);
        if (albumList.length > 0) {
          checkSystemAlbum(albumList[0], FAVORITE_ALBUM_SUB_TYPE);
        }
        done();
      } catch (error) {
        console.info(`UserFileManagerTest : SUB_USERFILEMGR_PROMISE_GETALBUM_004 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_GETALBUM_005
      * @tc.name      : getAlbums
      * @tc.desc      : get an system album
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
      */
    it("SUB_USERFILEMGR_PROMISE_GETALBUM_005", 0, async function (done) {
      try {
        expect(userfilemgr != undefined).assertTrue();
        let albumList = await userfilemgr.getAlbums(SYSTEM_ALBUM_TYPE, TRASH_ALBUM_SUB_TYPE);
        if (albumList.length > 0) {
          checkSystemAlbum(albumList[0], TRASH_ALBUM_SUB_TYPE);
        }
        done();
      } catch (error) {
        console.info(`UserFileManagerTest : SUB_USERFILEMGR_PROMISE_GETALBUM_005 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_GETALBUM_006
      * @tc.name      : getAlbums
      * @tc.desc      : get an system album
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
      */
    it("SUB_USERFILEMGR_PROMISE_GETALBUM_006", 0, async function (done) {
      try {
        expect(userfilemgr != undefined).assertTrue();
        let albumList = await userfilemgr.getAlbums(SYSTEM_ALBUM_TYPE, ANY_ALBUM_SUB_TYPE);
        if (albumList.length > 0) {
          checkSystemAlbum(albumList[0], ANY_ALBUM_SUB_TYPE);
        }
        done();
      } catch (error) {
        console.info(`UserFileManagerTest : SUB_USERFILEMGR_PROMISE_GETALBUM_006 failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

  });
}
