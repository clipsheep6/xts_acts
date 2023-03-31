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
  AlbumType,
  AlbumSubType,
  ImageVideoKey,
  sleep,
  getUserFileMgrPermission,
} from "../../../../../../common";

export default function userFileManagerAlbumTest(abilityContext) {
  describe("userFileManagerAlbumTest", function () {
    const TAG = "SUB_USERFILEMGR ";
    const userfilemgr = userFileManager.getUserFileMgr(abilityContext);
    beforeAll(async function () {
      await getUserFileMgrPermission(null, abilityContext);
      console.info("beforeAll case");
    });
    beforeEach(async function () {
      try {
        console.info("beforeEach case");
        expect(userfilemgr != undefined).assertTrue();
        await clearAllUserAlbums();
        await clearAllPhotos();
        console.info("beforeEach case done");
      } catch (error) {
        console.info(TAG + "Failed to get albums from fetchResult! error: " + error);
        expect(false).assertTrue();
        throw error;
      }

    });
    afterEach(async function () {
      console.info("afterEach case");
      await sleep(200);
    });
    afterAll(function () {
        console.info("afterAll case");
    });

    async function createPhotoAsset(displayName: string) {
      let asset = await userfilemgr.createPhotoAsset(displayName);
      let fd = await asset.open("rw");
      await asset.close(fd);
      console.info("MYLOG: asset uri: " + asset.uri);
    }

    async function createPhotoAssets(names: Array<string>) {
      for (let i = 0; i < names.length; i++) {
        await createPhotoAsset(names[i]);
      }
    }

    async function clearAllPhotos() {
      try {
        let fetchOption : userFileManager.FetchOption = {
          predicates: new dataSharePredicates.DataSharePredicates(),
          fetchColumns: []
        }
        let assets = await getPhotoAssets(fetchOption);
        if (assets.length > 0) {
          await deletePhotoAssets(assets);
        }
        await clearTrashAlbum();
      } catch (error) {
        console.info(TAG + "Failed to clear photos! error: " + error);
        expect(false).assertTrue();
        throw error;
      }
    }

    function checkUserAlbum(album: userFileManager.Album, expectedName: string, expectedCover: string) : void {
      console.info(TAG + checkUserAlbum.name + " expectedName: " + expectedName);
      expect(album.albumType).assertEqual(AlbumType.USER);
      expect(album.albumSubType).assertEqual(AlbumSubType.USER_GENERIC);
      expect(album.albumName).assertEqual(expectedName);
      if (expectedCover == null) {
        expect(album.coverUri).assertEqual("");
      } else {
        expect(album.coverUri).assertEqual(expectedCover);
      }
      expect(album.albumUri != "").assertEqual(true);
      expect(album.count).assertEqual(0);
    }
    function checkSystemAlbum(album: userFileManager.Album, expectedSubType: userFileManager.AlbumSubType) : void {
      console.info(TAG + checkSystemAlbum.name + " expectedSubType: " + expectedSubType);
      expect(album.albumType).assertEqual(AlbumType.SYSTEM);
      expect(album.albumSubType).assertEqual(expectedSubType);
      expect(album.albumName).assertEqual("");
      expect(album.coverUri).assertEqual("");
      expect(album.albumUri != "").assertEqual(true);
      expect(album.count).assertEqual(0);
    }

    async function getAlbumList(fetchResult: userFileManager.fetchResult) {
      let albumList : Array<userFileManager.Album> = new Array();
      try {
        let count = fetchResult.getCount();
        console.info(TAG + "Fetch album count: " + count);
        for (let i = 0; i < count; i++) {
          albumList.push(await fetchResult.getNextObject());
        }
        return albumList;
      } catch (error) {
        console.info(TAG + "Failed to get albums from fetchResult! error: " + error);
        expect(false).assertTrue();
        throw error;
      }
    }

    async function getAlbumsByType(albumType: userFileManager.AlbumType) {
      try {
        let fetchResult = await userfilemgr.getAlbums(albumType, AlbumSubType.ANY);
        let albums = await getAlbumList(fetchResult);
        fetchResult.close();
        return albums;
      } catch(error) {
        console.info(TAG + "Failed to get all albums! error: " + error);
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

    async function getSystemAlbumBySubtype(albumSubType: userFileManager.AlbumSubType) :
      userFileManager.Album {
      try {
        let fetchResult = await userfilemgr.getAlbums(AlbumType.SYSTEM, albumSubType);
        let album = await fetchResult.getFirstObject();
        fetchResult.close();
        return album;
      } catch(error) {
        console.info(TAG + "Failed to get system albums! error: " + error + " albumSubType: " + albumSubType);
        expect(false).assertTrue();
        throw error;
      }
    }

    async function deletePhotoAssets(assets: Array<userFileManager.FileAsset>) {
      try {
        for (let i = 0; i < assets.length; i++) {
          await userfilemgr.delete(assets[i].uri);
        }
      } catch (error) {
        console.info(TAG + "Failed to delete photo assets" + error);
        throw error;
      }
    }

    async function getTrashAssets() {
      try {
        let trashAlbum = await getSystemAlbumBySubtype(userFileManager.AlbumSubType.TRASH);
        if (trashAlbum === null) {
          throw new Error('Failed to get trash album');
        }

        let fetchOption : userFileManager.FetchOption = {
          predicates: new dataSharePredicates.DataSharePredicates(),
          fetchColumns: [ userFileManager.ImageVideoKey.DATE_TRASHED ]
        }
        let fetchResult = await trashAlbum.getPhotoAssets(fetchOption);
        if (fetchResult === null) {
          throw new Error('Failed to get trash photo assets');
        }
        let assets = await fetchResult.getAllObject();
        fetchResult.close();
        return assets;
      } catch (error) {
        console.info(TAG + "Failed to getTrashAssets" + error);
        throw error;
      }
    }

    async function clearTrashAlbum() {
      try {
        let assets = await getTrashAssets();
        console.info(TAG + "trashAlbum assets: " + assets.length);
        if (assets.length !== 0) {
          let trashAlbum = await getSystemAlbumBySubtype(userFileManager.AlbumSubType.TRASH);
          await trashAlbum.deletePhotoAssets(assets);
          console.info(TAG + "clear trashAlbum");
        }
        await checkSystemAlbumCount(AlbumSubType.TRASH, 0);
      } catch (error) {
        console.info(TAG + "Failed to clear map! error: " + error);
        expect(false).assertTrue();
        throw error;
      }
    }

    async function getPhotoAssets(fetchOption: userFileManager.FetchOption) {
      try {
        let fetchResult = await userfilemgr.getPhotoAssets(fetchOption);
        console.info(TAG + 'fetchResult.count: ' + fetchResult.getCount());
        let assets = await fetchResult.getAllObject();
        fetchResult.close();
        return assets;
      } catch (error) {
        console.info(TAG + "Failed to get photo assets! error: " + error);
        expect(false).assertTrue();
        throw error;
      }
    }

    async function getAllPhotoAssets() {
      try {
        let fetchOption : userFileManager.FetchOption = {
          predicates: new dataSharePredicates.DataSharePredicates(),
          fetchColumns: []
        }
        let fetchResult = await userfilemgr.getPhotoAssets(fetchOption);
        console.info(TAG + ' getAllPhotoAssets fetchResult.count: ' + fetchResult.getCount());
        let assets = await fetchResult.getAllObject();
        fetchResult.close();
        return assets;
      } catch (error) {
        console.info(TAG + "Failed to get all photo assets! error: " + error);
        expect(false).assertTrue();
        throw error;
      }
    }

    function genRadomStr(len: number) {
      const chars = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789';
      let randomStr = "";
      for (var i = 0; i < len; i++) {
        randomStr += chars.charAt(Math.floor(Math.random() * chars.length));
      }
      return randomStr;
    }

    async function createUserAlbumAndCheck(albumName: string) {
      try {
        expect(userfilemgr != undefined).assertTrue();
        let album = await userfilemgr.createAlbum(albumName);
        console.info(TAG + ' album uri: ' + album.albumUri);
        checkUserAlbum(album, albumName);
        return album;
      } catch (error) {
        console.info(TAG + "Failed to create album! error: " + error + " albumName: " + albumName);
        expect(false).assertTrue();
        throw error;
      }
    }

    async function clearAllUserAlbums() {
      try {
        let albums = await getAllUserAlbums();
        if (albums.length > 0) {
          await userfilemgr.deleteAlbums(albums);
        }
      } catch(error) {
        console.info(TAG + "Failed to delete all user albums! error: " + error);
        expect(false).assertTrue();
        throw error;
      }
    }

    async function recoverAllPhotoAssets() {
      try {
        let assets = await getTrashAssets();
        if (assets.length > 0) {
          let trashAlbum = await getSystemAlbumBySubtype(userFileManager.AlbumSubType.TRASH);
          await trashAlbum.recoverPhotoAssets(assets);
        }
      } catch (error) {
        console.info(TAG + "Failed to recoverAllPhotoAssets! error: " + error);
        expect(false).assertTrue();
        throw error;
      }
    }

    async function albumGetAssets(album: userFileManager.Album, fetchOption: userFileManager.FetchOption) {
      let fetchResult = await album.getPhotoAssets(fetchOption);
      console.info(TAG + " albumGetAssets count: " + fetchResult.getCount());
      let assets = await fetchResult.getAllObject();
      fetchResult.close();
      return assets;
    }

    async function checkSystemAlbumCount(subType: userFileManager.AlbumSubType, expectedCount: number) {
      try {
        let album = await getSystemAlbumBySubtype(subType);

        let fetchOption : userFileManager.FetchOption = {
          predicates: new dataSharePredicates.DataSharePredicates(),
          fetchColumns: []
        }
        let assets = await albumGetAssets(album, fetchOption);
        expect(assets.length).assertEqual(expectedCount);
      } catch (error) {
        console.info(TAG + "Failed to check system album count, error: " + error);
        throw error;
      }
    }

    async function checkUserAlbumCount(album: userFileManager.Album, expectedCount: number) {
      try {
        let predicates = new dataSharePredicates.DataSharePredicates();
        predicates.equalTo(userFileManager.AlbumKey.URI, album.albumUri);
        let fetchOption : userFileManager.FetchOption = {
          predicates: predicates,
          fetchColumns: []
        }
        let fetchResult = await userfilemgr.getAlbums(fetchOption);
        let albumNew = await fetchResult.getFirstObject();
        fetchResult.close();
        console.info(TAG + " checkUserAlbumCount count: " + albumNew.count);
        expect(albumNew.count).assertEqual(expectedCount);
      } catch (error) {
        console.info(TAG + "Failed to check user album count, error: " + error);
        throw error;
      }
    }

    async function checkAllPhotoAssetsCount(expectedCount: number) {
      try {
        let assets = await getAllPhotoAssets();
        expect(assets.length).assertEqual(expectedCount);
      } catch (error) {
        console.info(TAG + "Failed to checkAllPhotoAssetsCount, error: " + error);
        throw error;
      }
    }

    function checkAssetEqual(assetA : userFileManager.FileAsset, assetB : userFileManager.FileAsset,
      includingFavorite : boolean, includingHidden : boolean, includingTrash : boolean) {
        expect(assetA.uri).assertEqual(assetB.uri);
        expect(assetA.fileType).assertEqual(assetB.fileType);
        expect(assetA.displayName).assertEqual(assetB.displayName);
        console.info(TAG + "key: DATE_ADDED " + ImageVideoKey.DATE_ADDED);
        expect(assetA.get(ImageVideoKey.DATE_ADDED)).assertEqual(assetB.get(ImageVideoKey.DATE_ADDED));
        console.info(TAG + "key: DATE_MODIFIED " + ImageVideoKey.DATE_MODIFIED);
        expect(assetA.get(ImageVideoKey.DATE_MODIFIED)).assertEqual(assetB.get(ImageVideoKey.DATE_MODIFIED));
        console.info(TAG + "key: DATE_TAKEN " + ImageVideoKey.DATE_TAKEN);
        expect(assetA.get(ImageVideoKey.DATE_TAKEN)).assertEqual(assetB.get(ImageVideoKey.DATE_TAKEN));
        if (includingFavorite) {
          let favorite = ImageVideoKey.FAVORITE;
          console.info(TAG + "key: favorite " + favorite);
          expect(assetA.get(favorite)).assertEqual(assetB.get(favorite));
        }
        if (includingHidden) {
          let hiddenState = ImageVideoKey.HIDDEN;
          console.info(TAG + "key: hiddenState " + hiddenState);
          expect(assetA.get(hiddenState)).assertEqual(assetB.get(hiddenState));
        }
        if (includingTrash) {
          let dateTrashed = ImageVideoKey.DATE_TRASHED;
          console.info(TAG + "key: dateTrashed " + dateTrashed);
          expect(assetA.get(dateTrashed)).assertEqual(assetB.get(dateTrashed));
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
    it("SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_001", 0, async function (done) {
      try {
        let albumName = "SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_001";
        await createUserAlbumAndCheck(albumName);
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_001 failed, error: " + error);
        expect(false).assertTrue();
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
    it("SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_002", 0, async function (done) {
      try {
        let TITLE_REGEX_CHECK = '\.\\/:*?"\'`<>|{}\[\]';
        let baseName = "SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_002";
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
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_002 failed, error: " + error);
        expect(false).assertTrue();
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
    it("SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_003", 0, async function (done) {
      try {
        let albumName = "SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_003";
        await createUserAlbumAndCheck(albumName);
        await userfilemgr.createAlbum(albumName);
        expect(false).assertTrue();
      } catch (error) {
        expect(error.code == 13900015).assertTrue();
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
    it("SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_004", 0, async function (done) {
      try {
        let albumName = genRadomStr(256);
        await userfilemgr.createAlbum(albumName);
        expect(false).assertTrue();
      } catch (error) {
        expect(error.code == 13900020).assertTrue();
        done();
      }
      done();
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_005
      * @tc.name      : userFileManagerPromiseCreateAlbum005
      * @tc.desc      : create albums with invalid dot characters
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it("SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_005", 0, async function (done) {
      try {
        let albumNames = [
          ".CREATE_ALBUM_005",
          "CREATE_ALBUM_005.",
          "CREATE_.ALBUM_005",
          "..CREATE_ALBUM_005",
          "CREATE_.ALBUM._005"
        ];
        for (let i = 0; i < albumNames.length; i++) {
          try {
            await userfilemgr.createAlbum(albumNames[i]);
            expect(false).assertTrue;
          } catch (error) {
            expect(error.code == 13900020).assertTrue();
          }
        }
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_005 failed, error: " + error);
        expect(false).assertTrue;
      }
    });

    // /**
    //   * @tc.number    : SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_006
    //   * @tc.name      : userFileManagerPromiseCreateAlbum006
    //   * @tc.desc      : case insensitive support test for creating albums
    //   * @tc.size      : MEDIUM
    //   * @tc.type      : Function
    //   * @tc.level     : Level 0
    // */
    // it("SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_006", 0, async function (done) {
    //   try {
    //     enum Country {
    //       ENGLISH = "english",
    //       SPANISH = "Spanish",
    //       FRENCH = "French",
    //       GERMAN = "German",
    //       RUSSIAN = "Russian",
    //       GREEK = "Greek",
    //     };
    //     enum CaseMapKey {
    //       UPPER_CASE = "UPPER_CASE",
    //       LOWER_CASE = "LOWER_CASE"
    //     };
    //     let caseMap = new Map<Country, Map<CaseMapKey, string>>([
    //       [Country.ENGLISH, new Map<CaseMapKey, string>([
    //         [CaseMapKey.UPPER_CASE, "ABCDEFGHIJKLMNOPQRSTUVWXYZ"],
    //         [CaseMapKey.LOWER_CASE, "abcdefghijklmnopqrstuvwxyz"]
    //       ])],
    //       [Country.SPANISH, new Map<CaseMapKey, string>([
    //         [CaseMapKey.UPPER_CASE, "ABCDEFGHIJKLMNOPQRSTUVWXYZÁÉÍÓÚÑ"],
    //         [CaseMapKey.LOWER_CASE, "abcdefghijklmnopqrstuvwxyzáéíóúñ"]
    //       ])],
    //       [Country.FRENCH, new Map<CaseMapKey, string>([
    //         [CaseMapKey.UPPER_CASE, "ABCDEFGHIJKLMNOPQRSTUVWXYZÉÈÊËÎÏÀÂÛÙÔÇÆ"],
    //         [CaseMapKey.LOWER_CASE, "abcdefghijklmnopqrstuvwxyzéèêëîïàâûùôçæ"]
    //       ])],
    //       [Country.GERMAN, new Map<CaseMapKey, string>([
    //         [CaseMapKey.UPPER_CASE, "ABCDEFGHIJKLMNOPQRSTUVWXYZÄÖÜẞ"],
    //         [CaseMapKey.LOWER_CASE, "abcdefghijklmnopqrstuvwxyzäöüß"]
    //       ])],
    //       [Country.RUSSIAN, new Map<CaseMapKey, string>([
    //         [CaseMapKey.UPPER_CASE, "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ"],
    //         [CaseMapKey.LOWER_CASE, "абвгдеёжзийклмнопрстуфхцчшщъыьэюя"]
    //       ])],
    //       [Country.GREEK, new Map<CaseMapKey, string>([
    //         [CaseMapKey.UPPER_CASE, "ΑΒΓΔΕΖΗΘΙΚΛΜΝΞΟΠΡΣΤΥΦΧΨΩ"],
    //         [CaseMapKey.LOWER_CASE, "αβγδεζηθικλμνξοπρστυφχψω"]
    //       ])]
    //     ]);

    //     for (const [country, letters] of caseMap) {
    //       try {
    //         console.log(TAG + "Testing letters of country: " + country);
    //         await userfilemgr.createAlbum(letters.get(CaseMapKey.UPPER_CASE));
    //         await userfilemgr.createAlbum(letters.get(CaseMapKey.LOWER_CASE));
    //         expect(false).assertTrue;
    //       } catch (error) {
    //         expect(error.code == 14000011).assertTrue();
    //       }
    //     }
    //     done();
    //   } catch (error) {
    //     console.info(TAG + "SUB_USERFILEMGR_PROMISE_CREATE_ALBUM_006 failed, error: " + error);
    //     expect(false).assertTrue;
    //   }
    // });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_DELETE_ALBUM_001
      * @tc.name      : userFileManagerPromiseDeleteAlbum001
      * @tc.desc      : delete albums test
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it("SUB_USERFILEMGR_PROMISE_DELETE_ALBUM_001", 0, async function (done) {
      try {
        let albumNames = [
          "DELETE_ALBUM_001_001",
          "DELETE_ALBUM_001_002",
          "DELETE_ALBUM_001_003",
          "DELETE_ALBUM_001_004",
          "DELETE_ALBUM_001_005",
          
        ];
        let albumList : Array<userFileManager.Album> = new Array();
        for (let i = 0; i < albumNames.length; i++) {
          let album = await createUserAlbumAndCheck(albumNames[i]);
          albumList.push(album);
        }
        await userfilemgr.deleteAlbums(albumList);
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_DELETE_ALBUM_001 failed, error: " + error);
        expect(false).assertTrue;
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
    it("SUB_USERFILEMGR_PROMISE_DELETE_ALBUM_002", 0, async function (done) {
      try {
        let albumList = await getAllSystemAlbums();
        await userfilemgr.deleteAlbums(albumList);
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_DELETE_ALBUM_002 failed!");
        expect(false).assertTrue;
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
    it("SUB_USERFILEMGR_PROMISE_GET_ALBUM_001", 0, async function (done) {
      try {
        let albumNames = [
          "GET_ALBUM_001_001",
          "GET_ALBUM_001_002",
          "GET_ALBUM_001_003",
          "GET_ALBUM_001_004",
          "GET_ALBUM_001_005"
        ];

        // Firstly, create some albums
        for (let i = 0; i < albumNames.length; i++) {
          await createUserAlbumAndCheck(albumNames[i]);
        }

        // Secondly, get albums and check
        let fetchResult = await userfilemgr.getAlbums(AlbumType.USER, AlbumSubType.USER_GENERIC);
        let albumList = await getAlbumList(fetchResult);
        fetchResult.close();
        expect(albumList.length).assertEqual(albumNames.length);
        for (let i = 0; i < albumList.length; i++) {
          checkUserAlbum(albumList[i], albumNames[i]);
        }
        done();
      } catch (error) {
        console.info(TAG + "UserFileManagerTest : SUB_USERFILEMGR_PROMISE_GET_ALBUM_001 failed, error: " + error);
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
    it("SUB_USERFILEMGR_PROMISE_GET_ALBUM_002", 0, async function (done) {
      try {
        // Firstly, create an album
        let albumName = "userGenericAlbum2";
        checkUserAlbum(await userfilemgr.createAlbum(albumName), albumName);

        // Secondly, query the newly created album by albumName, the fetch count should be 1
        let predicates = new dataSharePredicates.DataSharePredicates();
        let fetchOptions = {
          fetchfetchColumns: [],
          predicates: predicates.equalTo(userFileManager.AlbumKey.ALBUM_NAME, albumName)
        };

        let fetchAlbumResult = await userfilemgr.getAlbums(AlbumType.USER, AlbumSubType.USER_GENERIC, fetchOptions);
        let count = fetchAlbumResult.getCount();
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_GET_ALBUM_002 Fetch album count: " + count);
        expect(count).assertEqual(1);

        // Finally, check the newly created album's attributes
        checkUserAlbum(await fetchAlbumResult.getFirstObject(), albumName);
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_GET_ALBUM_002 failed, error: " + error);
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
    it("SUB_USERFILEMGR_PROMISE_GET_ALBUM_003", 0, async function (done) {
      try {
        let subTypes : Array<AlbumSubType> = [
          AlbumSubType.VIDEO,
          AlbumSubType.FAVORITE,
          AlbumSubType.HIDDEN,
          AlbumSubType.TRASH
        ];
        for (let i = 0; i < subTypes.length; i++) {
          checkSystemAlbum(await getSystemAlbumBySubtype(subTypes[i]), subTypes[i]);
        }
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_GET_ALBUM_003 failed, error: " + error);
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
    it("SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_001", 0, async function (done) {
      try {
        let oldName = "UPDATE_ALBUM_001";
        let album = await createUserAlbumAndCheck(oldName);

        let newName = "UPDATE_ALBUM_New_001";
        album.albumName = newName;
        await album.commitModify();

        checkUserAlbum(album, newName);
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_001 failed, error: " + error);
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
    it("SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_002", 0, async function (done) {
      try {
        let albumName = "UPDATE_ALBUM_002";
        let album = await createUserAlbumAndCheck(albumName);

        // Update coverUri with non-empty string
        let newCover = "file://media/asset/10";
        album.coverUri = newCover;
        await album.commitModify();
        checkUserAlbum(album, albumName, newCover);

        // Update coverUri with empty string
        album.coverUri = "";
        await album.commitModify();
        checkUserAlbum(album, albumName, "");
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_002 failed, error: " + error);
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
    it("SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_003", 0, async function (done) {
      try {
        let oldName = "UPDATE_ALBUM_003";
        let album = await createUserAlbumAndCheck(oldName);

        let newName = "UPDATE_ALBUM_New_003";
        let newCover = "file://media/asset/10";
        album.albumName = newName;
        album.coverUri = newCover;
        await album.commitModify();

        checkUserAlbum(album, newName, newCover);
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_003 failed, error: " + error);
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
    it("SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_004", 0, async function (done) {
      try {
        let albumList = await getAllSystemAlbums();

        for (let i = 0; i < albumList.length; i++) {
          let newName = "UPDATE_ALBUM_New_004";
          let newCover = "file://media/asset/10";
          albumList[i].albumName = newName;
          albumList[i].coverUri = newCover;
          try {
            await albumList[i].commitModify();
            expect(false).assertTrue();
          } catch(error) {
            expect(error.code == 13900020).assertTrue();
          }
        }
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_004 failed, error: " + error);
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
    it("SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_005", 0, async function (done) {
      try {
        let albumName = "UPDATE_ALBUM_005";
        let album = await createUserAlbumAndCheck(albumName);
        await album.commitModify();

        checkUserAlbum(album, albumName);
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_005 failed, error: " + error);
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
    it("SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_006", 0, async function (done) {
      try {
        let albumName = "UPDATE_ALBUM_006";
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
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_006 failed, error: " + error);
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
    it("SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_007", 0, async function (done) {
      try {
        let baseName = "UPDATE_ALBUM_007";
        let album = await createUserAlbumAndCheck(baseName);

        let predicates = new dataSharePredicates.DataSharePredicates();
        predicates.equalTo(userFileManager.AlbumKey.URI, album.albumUri);
        let fetchOption : userFileManager.FetchOption = {
          predicates: predicates,
          fetchColumns: []
        }
        let fetchResult = await userfilemgr.getAlbums(fetchOption);
        expect(fetchResult.getCount()).assertEqual(1);
        let albumNew = await fetchResult.getFirstObject();
        fetchResult.close();
        expect(albumNew.albumName).assertEqual(album.albumName);
        expect(albumNew.albumUri).assertEqual(album.albumUri);

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
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_UPDATE_ALBUM_007 failed, error: " + error);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_USER_ALBUM_GET_PHOTO_ASSETS_0100
      * @tc.name      : userFileManagerPromiseUserAlbumGetPhotoAssets0100
      * @tc.desc      : Add and remove assets from user albums, and check album.count
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it("SUB_USERFILEMGR_PROMISE_USER_ALBUM_GET_PHOTO_ASSETS_0100", 0, async function (done) {
      try {
        let baseName = "USER_ALBUM_GET_PHOTO_ASSETS_0100";
        let album = await createUserAlbumAndCheck(baseName);

        let fileNames = [
          "USER_ALBUM_GET_PHOTO_ASSETS_0100_001.jpg",
          "USER_ALBUM_GET_PHOTO_ASSETS_0100_002.jpg",
          "USER_ALBUM_GET_PHOTO_ASSETS_0100_003.jpg"
        ];
        await createPhotoAssets(fileNames);

        // Get some photo assets, and add them to a user album
        let predicates = new dataSharePredicates.DataSharePredicates();
        let fetchOption : userFileManager.FetchOption = {
          predicates: predicates,
          fetchColumns: []
        }
        let assets = await getPhotoAssets(fetchOption);
        expect(assets.length).assertEqual(fileNames.length);
        await album.addPhotoAssets(assets);

        // Check number of assets in the album, by both album.count and album.assets.length
        await checkUserAlbumCount(album, fileNames.length);
        assets = await albumGetAssets(album, fetchOption);
        expect(assets.length).assertEqual(fileNames.length);

        await album.removePhotoAssets(assets);

        await checkUserAlbumCount(album, 0);
        assets = await albumGetAssets(album, fetchOption);
        expect(assets.length).assertEqual(0);
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_USER_ALBUM_GET_PHOTO_ASSETS_0100 failed, error: " + error);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_USER_ALBUM_GET_PHOTO_ASSETS_0200
      * @tc.name      : userFileManagerPromiseUserAlbumGetPhotoAssets0200
      * @tc.desc      : Test userFileManager.getPhotoAssets by ImageVideoKey.URI
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it("SUB_USERFILEMGR_PROMISE_USER_ALBUM_GET_PHOTO_ASSETS_0200", 0, async function (done) {
      try {
        let fileNames = [
          "USER_ALBUM_GET_PHOTO_ASSETS_0200_001.jpg",
          "USER_ALBUM_GET_PHOTO_ASSETS_0200_002.jpg",
          "USER_ALBUM_GET_PHOTO_ASSETS_0200_003.jpg"
        ];
        await createPhotoAssets(fileNames);
        
        let fetchColumns = [
          ImageVideoKey.FAVORITE,
          ImageVideoKey.HIDDEN,
          ImageVideoKey.DATE_TRASHED,
          ImageVideoKey.DATE_ADDED,
          ImageVideoKey.DATE_MODIFIED,
          ImageVideoKey.DATE_TAKEN
        ];
        let fetchOption : userFileManager.FetchOption = {
          predicates: new dataSharePredicates.DataSharePredicates(),
          fetchColumns: fetchColumns
        };
        let assets = await getPhotoAssets(fetchOption);
        expect(assets.length).assertEqual(fileNames.length);
        let assetOld = assets[0];
        let predicatesNew = new dataSharePredicates.DataSharePredicates();
        predicatesNew.equalTo(userFileManager.ImageVideoKey.URI, assetOld.uri);
        let fetchOptionNew : userFileManager.FetchOption = {
          predicates: predicatesNew,
          fetchColumns: fetchColumns
        };
        let assetsNew = await getPhotoAssets(fetchOptionNew);
        expect(assetsNew.length).assertEqual(1);
        let assetNew = assetsNew[0];
        checkAssetEqual(assetOld, assetNew, true, true, true);
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_USER_ALBUM_GET_PHOTO_ASSETS_0200 failed, error: " + error);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_DELETE_ASSETS_0000
      * @tc.name      : userFileManagerPromiseDeleteAssets0000
      * @tc.desc      : Delete files into trash album
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it("SUB_USERFILEMGR_PROMISE_DELETE_ASSETS_0000", 0, async function (done) {
      try {
        let baseName = "DELETE_ASSETS_0000";
        let album = await createUserAlbumAndCheck(baseName);

        let fileNames = [
          "DELETE_ASSETS_0000_001.jpg",
          "DELETE_ASSETS_0000_002.jpg",
          "DELETE_ASSETS_0000_003.jpg"
        ];
        await createPhotoAssets(fileNames);

        // Get some photo assets, and add them into a user album
        let fetchOption : userFileManager.FetchOption = {
          predicates: new dataSharePredicates.DataSharePredicates(),
          fetchColumns: []
        }
        let assets = await getPhotoAssets(fetchOption);
        console.info(TAG + "assets.length: " + assets.length);
        expect(assets.length).assertEqual(fileNames.length);
        await album.addPhotoAssets(assets);

        // Delete the first asset into trash album
        await deletePhotoAssets([ assets[0] ]);

        // Check number of assets in the user album
        await checkUserAlbumCount(album, fileNames.length - 1);
        // Check number of assets in the trash album
        await checkSystemAlbumCount(AlbumSubType.TRASH, 1);
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_DELETE_ASSETS_0000 failed, error: " + error);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_DELETE_ASSETS_0100
      * @tc.name      : userFileManagerPromiseDeleteAssets0100
      * @tc.desc      : Recover an asset, the asset metadata should not be modified.
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it("SUB_USERFILEMGR_PROMISE_DELETE_ASSETS_0100", 0, async function (done) {
      try {
        let baseName = "DELETE_ASSETS_0100";
        let album = await createUserAlbumAndCheck(baseName);

        let fileNames = [
          "DELETE_ASSETS_0100_001.jpg",
          "DELETE_ASSETS_0100_002.jpg",
          "DELETE_ASSETS_0100_003.jpg"
        ];
        await createPhotoAssets(fileNames);

        // Get some photo assets, and add them into a user album
        let fetchOption : userFileManager.FetchOption = {
          predicates: new dataSharePredicates.DataSharePredicates(),
          fetchColumns: [
            ImageVideoKey.FAVORITE,
            ImageVideoKey.HIDDEN,
            ImageVideoKey.DATE_TRASHED,
            ImageVideoKey.DATE_ADDED,
            ImageVideoKey.DATE_MODIFIED,
            ImageVideoKey.DATE_TAKEN
          ]
        }
        let assets = await getPhotoAssets(fetchOption);
        expect(assets.length).assertEqual(fileNames.length);
        await album.addPhotoAssets(assets);
        await checkUserAlbumCount(album, fileNames.length);

        // Set the first asset to hidden state
        let testAsset = assets[0];
        await testAsset.setHidden(true);
        await checkUserAlbumCount(album, fileNames.length - 1);

        // Delete the asset into trash album, and then recover it
        await deletePhotoAssets([ testAsset ]);
        await checkUserAlbumCount(album, fileNames.length - 1);
        let trashAlbum = await getSystemAlbumBySubtype(AlbumSubType.TRASH);
        assets = await getTrashAssets();
        expect(assets.length).assertEqual(1);
        await trashAlbum.recoverPhotoAssets([ assets[0] ]);
        await checkUserAlbumCount(album, fileNames.length - 1);
        // Get the asset after recovery
        let assetsAfterRecovery = await getPhotoAssets(fetchOption);
        expect(assetsAfterRecovery.length).assertEqual(fileNames.length - 1);
        await testAsset.setHidden(false);
        assetsAfterRecovery = await getPhotoAssets(fetchOption);
        expect(assetsAfterRecovery.length).assertEqual(fileNames.length);
        let testAssetAfterRecovery = assetsAfterRecovery[0];

        // Check the assets before recovery and after recovery, 
        checkAssetEqual(testAsset, testAssetAfterRecovery, true, true, true);
        await checkUserAlbumCount(album, fileNames.length);
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_DELETE_ASSETS_0100 failed, error: " + error);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_TRASH_GET_PHOTO_ASSETS_0000
      * @tc.name      : userFileManagerPromiseTrashGetPhotoAssets0000
      * @tc.desc      : Get trash album assets, check the asset metadata
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it("SUB_USERFILEMGR_PROMISE_TRASH_GET_PHOTO_ASSETS_0000", 0, async function (done) {
      try {
        let fileNames = [
          "TRASH_GET_PHOTO_ASSETS_0000_001.jpg",
          "TRASH_GET_PHOTO_ASSETS_0000_002.jpg",
          "TRASH_GET_PHOTO_ASSETS_0000_003.jpg"
        ];
        await createPhotoAssets(fileNames);

        // Get some photo assets
        let fetchOption : userFileManager.FetchOption = {
          predicates: new dataSharePredicates.DataSharePredicates(),
          fetchColumns: [
            ImageVideoKey.FAVORITE,
            ImageVideoKey.HIDDEN,
            ImageVideoKey.DATE_TRASHED,
            ImageVideoKey.DATE_ADDED,
            ImageVideoKey.DATE_MODIFIED,
            ImageVideoKey.DATE_TAKEN
          ]
        }
        let assets = await getPhotoAssets(fetchOption);
        expect(assets.length).assertEqual(fileNames.length);
        let testAsset = assets[0];

        // Delete the asset into trash album, then get the asset in trash album
        await deletePhotoAssets([ testAsset ]);
        let trashAlbum = await getSystemAlbumBySubtype(AlbumSubType.TRASH);
        let fetchResult = await trashAlbum.getPhotoAssets(fetchOption);
        expect(fetchResult.getCount()).assertEqual(1);
        assets = await fetchResult.getAllObject();
        fetchResult.close();
        let testAssetAfterDelete = assets[0];

        // Check the assets before delete and after delete
        checkAssetEqual(testAsset, testAssetAfterDelete, true, true, false);
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_TRASH_GET_PHOTO_ASSETS_0000 failed, error: " + error);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_TRASH_RECOVER_PHOTO_ASSETS_0000
      * @tc.name      : userFileManagerPromiseSystemAlbumTrashRecoverPhotoAssets0000
      * @tc.desc      : Recover photo assets from trash album
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it("SUB_USERFILEMGR_PROMISE_TRASH_RECOVER_PHOTO_ASSETS_0000", 0, async function (done) {
      try {
        let fileNames = [
          "TRASH_RECOVER_PHOTO_ASSETS_0000_001.jpg",
          "TRASH_RECOVER_PHOTO_ASSETS_0000_002.jpg",
          "TRASH_RECOVER_PHOTO_ASSETS_0000_003.jpg"
        ];
        await createPhotoAssets(fileNames);

        // Get some photo assets, and delete them into trash album
        let fetchOption : userFileManager.FetchOption = {
          predicates: new dataSharePredicates.DataSharePredicates(),
          fetchColumns: []
        }
        let assets = await getPhotoAssets(fetchOption);
        expect(assets.length).assertEqual(fileNames.length);
        await deletePhotoAssets(assets);

        // Get trash album, and then recover the first asset
        let trashAlbum = await getSystemAlbumBySubtype(AlbumSubType.TRASH);
        assets = await getTrashAssets();
        await trashAlbum.recoverPhotoAssets([ assets[0] ]);

        // Check number of assets in the trash album
        await checkSystemAlbumCount(AlbumSubType.TRASH, fileNames.length - 1);

        // Check number of non-trashed assets
        assets = await getPhotoAssets(fetchOption);
        expect(assets.length).assertEqual(1);
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_TRASH_RECOVER_PHOTO_ASSETS_0000 failed, error: " +
          error);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_TRASH_RECOVER_PHOTO_ASSETS_0100
      * @tc.name      : userFileManagerPromiseSystemAlbumTrashRecoverPhotoAssets0100
      * @tc.desc      : Recover photo assets from trash album to user albums
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it("SUB_USERFILEMGR_PROMISE_TRASH_RECOVER_PHOTO_ASSETS_0100", 0, async function (done) {
      try {
        let albumNames = [
          "RECOVER_PHOTO_ASSETS_0100_001",
          "RECOVER_PHOTO_ASSETS_0100_002",
          "RECOVER_PHOTO_ASSETS_0100_003",
          "RECOVER_PHOTO_ASSETS_0100_004",
          "RECOVER_PHOTO_ASSETS_0100_005"
        ];
        let albums = new Array();
        for (let i = 0; i < albumNames.length; i++) {
          albums.push(await createUserAlbumAndCheck(albumNames[i]));
        }

        let fileNames = [
          "TRASH_RECOVER_PHOTO_ASSETS_0100_001.jpg",
          "TRASH_RECOVER_PHOTO_ASSETS_0100_002.jpg",
          "TRASH_RECOVER_PHOTO_ASSETS_0100_003.jpg"
        ];
        await createPhotoAssets(fileNames);
        /**
         * Get some photo assets(assets[3]), and then add them into user albums:
         * 1. Put assets[0] into albums[0], albums[1] and albums[2]
         * 2. Put assets[1] into albums[0] and albums[1]
         * 3. Put assets[2] into albums[0]
         * 4. Delete assets[0] into trash album, and then check the count of user albums
         * 5. Recover assets[0], and then check the count of user albums
         */
        let fetchOption : userFileManager.FetchOption = {
          predicates: new dataSharePredicates.DataSharePredicates(),
          fetchColumns: []
        }
        let assets = await getPhotoAssets(fetchOption);
        expect(assets.length).assertEqual(fileNames.length);
        await albums[0].addPhotoAssets(assets);
        await albums[1].addPhotoAssets([ assets[0], assets[1] ]);
        await albums[2].addPhotoAssets([ assets[0] ]);

        console.info(TAG + " After add photo assets to album, checking count");
        await checkUserAlbumCount(albums[0], assets.length);
        await checkUserAlbumCount(albums[1], 2);
        await checkUserAlbumCount(albums[2], 1);
        
        // Delete assets into trash album, and check album.count
        await deletePhotoAssets([ assets[0] ]);
        console.info(TAG + " After deletePhotoAssets, checking count");
        await checkSystemAlbumCount(AlbumSubType.TRASH, 1);
        await checkUserAlbumCount(albums[0], assets.length - 1);
        await checkUserAlbumCount(albums[1], 1);
        await checkUserAlbumCount(albums[2], 0);

        // Get trash album, and then recover the first asset
        let trashAlbum = await getSystemAlbumBySubtype(AlbumSubType.TRASH);
        assets = await getTrashAssets();
        await trashAlbum.recoverPhotoAssets([ assets[0] ]);

        // Check number of assets in the trash album
        console.info(TAG + " After recoverPhotoAssets, checking count");
        await checkSystemAlbumCount(AlbumSubType.TRASH, 0);
        // Check number of total non-trashed assets
        assets = await getPhotoAssets(fetchOption);
        expect(assets.length).assertEqual(3);
        // Check count of user albums
        await checkUserAlbumCount(albums[0], assets.length);
        await checkUserAlbumCount(albums[1], 2);
        await checkUserAlbumCount(albums[2], 1);
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_TRASH_RECOVER_PHOTO_ASSETS_0100 failed, error: " +
          error);
        expect(false).assertTrue();
        done();
      }
    });


    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_TRASH_RECOVER_PHOTO_ASSETS_0200
      * @tc.name      : userFileManagerPromiseSystemAlbumTrashRecoverPhotoAssets0200
      * @tc.desc      : Recover photo assets from trash album to user albums
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it("SUB_USERFILEMGR_PROMISE_TRASH_RECOVER_PHOTO_ASSETS_0200", 0, async function (done) {
      try {
        let fileNames = [
          "TRASH_RECOVER_PHOTO_ASSETS_0200_001.jpg",
          "TRASH_RECOVER_PHOTO_ASSETS_0200_002.jpg",
          "TRASH_RECOVER_PHOTO_ASSETS_0200_003.jpg"
        ];
        await createPhotoAssets(fileNames);

        // Get trash album, and then recover the first asset
        let fetchOption : userFileManager.FetchOption = {
          predicates: new dataSharePredicates.DataSharePredicates(),
          fetchColumns: []
        }
        let assets = await getPhotoAssets(fetchOption);
        await deletePhotoAssets(assets);
        console.info(TAG + " MYLOG: before get photo assets");
        let trashAlbum = await getSystemAlbumBySubtype(AlbumSubType.TRASH);
        let fetchResult = await trashAlbum.getPhotoAssets(fetchOption);
        console.info(TAG + " MYLOG: before get all object");
        assets = await fetchResult.getAllObject();
        fetchResult.close();
        console.info(TAG + " MYLOG: before recover assets");
        await trashAlbum.recoverPhotoAssets([ assets[0] ]);
        console.info(TAG + " MYLOG: after recover assets");
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_TRASH_RECOVER_PHOTO_ASSETS_0200 failed, error: " +
          error);
        expect(false).assertTrue();
        done();
      }
    });

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_TRASH_DELETE_PHOTO_ASSETS_0000
      * @tc.name      : userFileManagerPromiseTrashDeletePhotoAssets0000
      * @tc.desc      : commitModify with albumNames containing invalid characters
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it("SUB_USERFILEMGR_PROMISE_TRASH_DELETE_PHOTO_ASSETS_0000", 0, async function (done) {
      try {
        let trashAlbum = await getSystemAlbumBySubtype(userFileManager.AlbumSubType.TRASH);
        let fileNames = [
          "TRASH_DELETE_PHOTO_ASSETS_0000_001.jpg",
          "TRASH_DELETE_PHOTO_ASSETS_0000_002.jpg",
          "TRASH_DELETE_PHOTO_ASSETS_0000_003.jpg"
        ];
        await createPhotoAssets(fileNames);
        // Get some photo assets, and delete them into trash album
        let predicates = new dataSharePredicates.DataSharePredicates();
        let fetchOption : userFileManager.FetchOption = {
          predicates: predicates,
          fetchColumns: []
        }
        let assets = await getPhotoAssets(fetchOption);
        expect(assets.length).assertEqual(fileNames.length);
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_ALBUM_ASSETS_OPERATION_001  assets.length:" + assets.length);
        await deletePhotoAssets(assets);

        assets = await getPhotoAssets(fetchOption);
        expect(assets.length).assertEqual(0);

        // Get photo assets from trash album
        let trashAssets = await getTrashAssets();
        expect(trashAssets.length).assertEqual(fileNames.length);
        console.info(TAG + "trashAssets.length:" + trashAssets.length);

        // Recover all photo assets in trash album
        await trashAlbum.recoverPhotoAssets(trashAssets);

        // Trash album should be empty now.
        await checkSystemAlbumCount(AlbumSubType.TRASH, 0);
        assets = await getPhotoAssets(fetchOption);
        expect(assets.length).assertEqual(fileNames.length);

        // Delete photo assets into trash album again
        await deletePhotoAssets(assets);
        await checkSystemAlbumCount(AlbumSubType.TRASH, fileNames.length);
        assets = await getPhotoAssets(fetchOption);
        expect(assets.length).assertEqual(0);

        // Delete all photo assets in trash album
        await trashAlbum.deletePhotoAssets(trashAssets);

        // Trash album should be empty now.
        await checkSystemAlbumCount(AlbumSubType.TRASH, 0);
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_TRASH_DELETE_PHOTO_ASSETS_0000 failed, error: " + error);
        expect(false).assertTrue();
        done();
      }
    });


    async function addRemoveAssetsPerf(count: number) {
      try {
        console.info(TAG + "MYLOG: before clearAllPhotos");
        await clearAllPhotos();
        console.info(TAG + "MYLOG: before clearAllUserAlbums");
        await clearAllUserAlbums();

        // Create an album for testing
        console.info(TAG + "MYLOG: before createUserAlbumAndCheck");
        let album = await createUserAlbumAndCheck("PERF_ADD_PHOTO_ASSETS_ALBUM_001");
        let baseName = "PERF_ADD_PHOTO_ASSETS_ASSETS_";
        for (let i = 0; i < count; i++) {
          console.info(TAG + "MYLOG: before createPhotoAsset");
          await createPhotoAsset(baseName + i.toString() + ".jpg");
        }
        console.info(TAG + "MYLOG: before getAllPhotoAssets");
        let assets = await getAllPhotoAssets();
        expect(assets.length).assertEqual(count);

        console.info(TAG + "MYLOG: before addPhotoAssets");
        let startTime = Date.now();
        await album.addPhotoAssets(assets);
        let endTime = Date.now();
        await checkUserAlbumCount(album, assets.length);
        console.info(TAG + " Perf addPhotoAssets " + count + " assets: " + (endTime - startTime) + "ms");

        startTime = Date.now();
        console.info(TAG + "MYLOG: before removePhotoAssets");
        await album.removePhotoAssets(assets);
        endTime = Date.now();
        await checkUserAlbumCount(album, 0);
        console.info(TAG + " Perf removePhotoAssets " + count + " assets: " + (endTime - startTime) + "ms");
      } catch (error) {
        console.info(TAG + "Failed to test addPhotoAsset, error: " + error);
        expect(false).assertTrue();
        throw error;
      }
    }

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_PERF_ADD_REMOVE_ASSETS_0000
      * @tc.name      : userFileManagerPromisePerfAddRemoveAssets0000
      * @tc.desc      : commitModify with albumNames containing invalid characters
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it("SUB_USERFILEMGR_PROMISE_PERF_ADD_REMOVE_ASSETS_0000", 0, async function (done) {
      try {
        console.info(TAG + "MYLOG: start");
        await addRemoveAssetsPerf(1);
        await addRemoveAssetsPerf(1000);
        console.info(TAG + "MYLOG: end");
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_PERF_ADD_REMOVE_ASSETS_0000 failed, error: " + error);
        expect(false).assertTrue();
        done();
      }
    });


    async function deleteRecoverAssets(count: number) {
      try {
        await clearAllPhotos();
        await clearAllUserAlbums();

        let baseName = "PERF_DELETE_RECOVER_ASSETS_";
        for (let i = 0; i < count; i++) {
          await createPhotoAsset(baseName + i.toString() + ".jpg");
        }
        let assets = await getAllPhotoAssets();
        expect(assets.length).assertEqual(count);

        let startTime = Date.now();
        await deletePhotoAssets(assets);
        let endTime = Date.now();
        await checkAllPhotoAssetsCount(0);
        console.info(TAG + " Perf deletePhotoAssets " + count + " assets: " + (endTime - startTime) + "ms");

        let trashAssets = await getTrashAssets();
        let trashAlbum = await getSystemAlbumBySubtype(AlbumSubType.TRASH);
        startTime = Date.now();
        await trashAlbum.recoverPhotoAssets(trashAssets);
        endTime = Date.now();
        await checkAllPhotoAssetsCount(count);
        console.info(TAG + " Perf recoverPhotoAssets " + count + " assets: " + (endTime - startTime) + "ms");
      } catch (error) {
        console.info(TAG + "Failed to test delete recover assets, error: " + error);
        expect(false).assertTrue();
        throw error;
      }
    }

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_PERF_DELETE_RECOVER_ASSETS_0000
      * @tc.name      : userFileManagerPromisePerfADeleteRecoverAssets0000
      * @tc.desc      : commitModify with albumNames containing invalid characters
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it("SUB_USERFILEMGR_PROMISE_PERF_DELETE_RECOVER_ASSETS_0000", 0, async function (done) {
      try {
        await deleteRecoverAssets(1);
        await deleteRecoverAssets(1000);
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_PERF_DELETE_RECOVER_ASSETS_0000 failed, error: " + error);
        expect(false).assertTrue();
        done();
      }
    });

    async function trashAlbumDeleteAssetsPerf(count: number) {
      try {
        await clearAllPhotos();
        await clearAllUserAlbums();

        let baseName = "PERF_TRASH_ALBUM_DELETE_PHOTO_ASSETS_";
        for (let i = 0; i < count; i++) {
          await createPhotoAsset(baseName + i.toString() + ".jpg");
        }
        let assets = await getAllPhotoAssets();
        expect(assets.length).assertEqual(count);

        let startTime = Date.now();
        await deletePhotoAssets(assets);
        let endTime = Date.now();
        await checkAllPhotoAssetsCount(0);
        console.info(TAG + " Perf deletePhotoAssets " + count + " assets: " + (endTime - startTime) + "ms");

        let trashAssets = await getTrashAssets();
        let trashAlbum = await getSystemAlbumBySubtype(AlbumSubType.TRASH);
        startTime = Date.now();
        await trashAlbum.deletePhotoAssets(trashAssets);
        endTime = Date.now();
        await checkAllPhotoAssetsCount(0);
        console.info(TAG + " Perf trashAlbum.deletePhotoAssets " + count + " assets: " + (endTime - startTime) + "ms");
      } catch (error) {
        console.info(TAG + "Failed to test trashAlbum.deletePhotoAssets, error: " + error);
        expect(false).assertTrue();
        throw error;
      }
    }

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_PERF_TRASH_DELETE_ASSETS_0000
      * @tc.name      : userFileManagerPromisePerfTrashDeleteAssets0000
      * @tc.desc      : commitModify with albumNames containing invalid characters
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it("SUB_USERFILEMGR_PROMISE_PERF_TRASH_DELETE_ASSETS_0000", 0, async function (done) {
      try {
        await trashAlbumDeleteAssetsPerf(1);
        await trashAlbumDeleteAssetsPerf(1000);
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_PERF_TRASH_DELETE_ASSETS_0000 failed, error: " + error);
        expect(false).assertTrue();
        done();
      }
    });

    async function createPhotoAssetsPerf(count: number) {
      try {
        await clearAllPhotos();
        await clearAllUserAlbums();

        let assetName = "PERF_CREATE_PHOTO_ASSETS_001.jpg";
        let startTime = Date.now();
        for (let i = 0; i < count; i++) {
          await createPhotoAsset(assetName);
        }
        let endTime = Date.now();
        await checkAllPhotoAssetsCount(count);
        console.info(TAG + " Perf createPhotoAssets " + count + " assets: " + (endTime - startTime) + "ms");
      } catch (error) {
        console.info(TAG + "Failed to test create photo assets, error: " + error);
        expect(false).assertTrue();
        throw error;
      }
    }

    /**
      * @tc.number    : SUB_USERFILEMGR_PROMISE_PERF_CREATE_ASSETS_0000
      * @tc.name      : userFileManagerPromisePerfCreateDeleteAssets0000
      * @tc.desc      : commitModify with albumNames containing invalid characters
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it("SUB_USERFILEMGR_PROMISE_PERF_CREATE_ASSETS_0000", 0, async function (done) {
      try {
        await createPhotoAssetsPerf(1);
        await createPhotoAssetsPerf(1000);
        done();
      } catch (error) {
        console.info(TAG + "SUB_USERFILEMGR_PROMISE_PERF_CREATE_ASSETS_0000 failed, error: " + error);
        expect(false).assertTrue();
        done();
      }
    });

  });
}
