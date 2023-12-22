/*
 * Copyright (C) 2022-2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
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
import mediaLibrary from '@ohos.multimedia.mediaLibrary';
import abilityAccessCtrl from '@ohos.abilityAccessCtrl';
import uitest from '@ohos.UiTest';
const presetsCount = {
  ActsMediaLibraryAlbumTest: { albumsCount: 15, assetsCount: 27 },
  ActsMediaLibraryBaseTest: { albumsCount: 11, assetsCount: 14 },
  ActsMediaLibraryFavoriteTest: { albumsCount: 6, assetsCount: 32 },
  ActsMediaLibraryFileTest: { albumsCount: 6, assetsCount: 28 },
  ActsMediaLibraryFileAssetTest: { albumsCount: 27, assetsCount: 116 },
  ActsMediaLibraryFileKeyTest: { albumsCount: 2, assetsCount: 2 },
  ActsMediaLibraryFileResultTest: { albumsCount: 3, assetsCount: 112 },
  ActsMediaLibraryGetThumbnailTest: { albumsCount: 3, assetsCount: 3 },
  ActsMediaLibraryMediafetchoptionsTest: { albumsCount: 3, assetsCount: 8 },
  ActsMediaLibraryTrashJsTest: { albumsCount: 6, assetsCount: 24 },
};

const IMAGE_TYPE = mediaLibrary.MediaType.IMAGE;
const VIDEO_TYPE = mediaLibrary.MediaType.VIDEO;
const AUDIO_TYPE = mediaLibrary.MediaType.AUDIO;
const FILE_TYPE = mediaLibrary.MediaType.FILE;

const FILEKEY = mediaLibrary.FileKey;
const { RELATIVE_PATH, ALBUM_NAME, MEDIA_TYPE } = FILEKEY;

const sleep = async function sleep(times) {
  if (!times) {
    times = 10;
  }
  await new Promise((res) => setTimeout(res, times));
};

const allFetchOp = function(others) {
  if (!others) {
    others = {};
  }
  return {
    selections: '',
    selectionArgs: [],
    ...others,
  };
};

const fetchOps = function(testNum, path, type, others) {
  if (!others) {
    others = {};
  }
  let ops = {
    selections: FILEKEY.RELATIVE_PATH + '= ? AND ' + FILEKEY.MEDIA_TYPE + '=?',
    selectionArgs: [path, type.toString()],
    ...others,
  };
  console.info(`${testNum}: fetchOps${JSON.stringify(ops)}`);
  return ops;
};
const nameFetchOps = function(testNum, path, display_name, type) {
  let ops = {
    selections: FILEKEY.RELATIVE_PATH + '= ? AND ' + FILEKEY.DISPLAY_NAME + '= ? AND ' + FILEKEY.MEDIA_TYPE + '=?',
    selectionArgs: [path, display_name, type.toString()],
  };
  console.info(`${testNum}: fetchOps${JSON.stringify(ops)}`);
  return ops;
};

const idFetchOps = function(testNum, albumId) {
  let ops = {
    selections: FILEKEY.ALBUM_ID + '= ?',
    selectionArgs: [albumId + ''],
  };
  console.info(`${testNum}: fetchOps${JSON.stringify(ops)}`);
  return ops;
};

const fileIdFetchOps = function(testNum, id) {
  let ops = {
    selections: FILEKEY.ID + '= ?',
    selectionArgs: [id + ''],
  };
  console.info(`${testNum}: fetchOps${JSON.stringify(ops)}`);
  return ops;
};

const albumFetchOps = function(testNum, albumName, others) {
  let ops = {
    selections: ALBUM_NAME + '= ?',
    selectionArgs: [albumName],
    ...others,
  };
  console.info(`${testNum}: fetchOps${JSON.stringify(ops)}`);
  return ops;
};

// albums of two resource types
const albumTwoTypesFetchOps = function(testNum, paths, albumName, types, others) {
  if (!others) {
    others = { order: FILEKEY.DATE_ADDED + ' DESC' };
  }
  try {
    let ops = {
      selections:
        '(' +
        RELATIVE_PATH +
        '= ? or ' +
        RELATIVE_PATH +
        '= ? ) AND ' +
        ALBUM_NAME +
        '= ? AND (' +
        MEDIA_TYPE +
        '= ? or ' +
        MEDIA_TYPE +
        '= ?)',
      selectionArgs: [paths[0], paths[1], albumName, types[0].toString(), types[1].toString()],
      ...others,
    };
    console.info(`${testNum}: fetchOps${JSON.stringify(ops)}`);
    return ops;
  } catch (error) {
    console.info(`albumTwoTypesFetchOps :: error: ${error}`);
  }
};

// albums of three resource types
const albumThreeTypesFetchOps = function(testNum, paths, albumName, types, others) {
  if (!others) {
    others = { order: FILEKEY.DATE_ADDED + ' DESC' };
  }
  try {
    let ops = {
      selections:
        '(' +
        RELATIVE_PATH +
        '= ? or ' +
        RELATIVE_PATH +
        '= ? or ' +
        RELATIVE_PATH +
        '= ? ) AND ' +
        ALBUM_NAME +
        '= ? AND (' +
        MEDIA_TYPE +
        '= ? or ' +
        MEDIA_TYPE +
        '= ? or ' +
        MEDIA_TYPE +
        '= ?)',
      selectionArgs: [
        paths[0],
        paths[1],
        paths[2],
        albumName,
        types[0].toString(),
        types[1].toString(),
        types[2].toString(),
      ],
      ...others,
    };
    console.info(`${testNum}: fetchOps ${JSON.stringify(ops)}`);
    return ops;
  } catch (error) {
    console.info(`albumThreeTypesFetchOps :: error: ${error}`);
  }
};

const fileFetchOption = function(testNum, selections, selectionArgs) {
  let ops = {
    selections: selections,
    selectionArgs: selectionArgs,
  };
  console.info(`${testNum} fetchOps: ${JSON.stringify(ops)}`);
  return ops;
}

const checkPresetsAssets = async function(media, hapName) {
  console.info('checkPresetsAssets start');
  let albumList = await media.getAlbums(allFetchOp());
  let albumsCount = albumList.length;
  let fetchFileResult = await media.getFileAssets(allFetchOp());
  let assetsCount = await fetchFileResult.getCount();
  let presetsassetsCount = presetsCount[hapName].assetsCount;
  let presetsalbumsCount = presetsCount[hapName].albumsCount;
  if (assetsCount != presetsCount[hapName].assetsCount || albumsCount != presetsCount[hapName].albumsCount) {
    console.info(`${hapName} checkPresetsAssets failed; 
      assetsCount : presetsassetsCount = ${assetsCount} : ${presetsassetsCount}
      albumsCount : presetsalbumsCount = ${albumsCount} : ${presetsalbumsCount}`);
    fetchFileResult.close();
  } else {
    console.info(`${hapName} checkPresetsAssets passed`);
    fetchFileResult.close();
  }
};

const checkAssetsCount = async function(testNum, fetchFileResult, expectCount) {
  if (!fetchFileResult) {
    console.info(`${testNum}:: fetchFileResult error:`);
    return false;
  }
  let count = await fetchFileResult.getCount();
  if (count != expectCount) {
    console.info(`${testNum}:: count:expectCount - ${count} : ${expectCount}`);
  }
  return count === expectCount;
};

const checkAlbumsCount = function(testNum, albumList, expectCount) {
  if (!albumList || !Array.isArray(albumList)) {
    console.info(`${testNum}:: albumList error:`);
    return false;
  }
  let albumsCount = albumList.length;
  if (albumsCount != expectCount) {
    console.info(`${testNum}:: albumsCount: expectCount - ${albumsCount} : ${expectCount}`);
  }
  return albumsCount === expectCount;
};

const getPermission = async function(name, context) {
  if (!name) {
    name = 'ohos.acts.multimedia.mediaLibrary';
  }
  
  try {
    console.info('getPermission start: ' + name);
    let isGetPermission = false;
    let permissions = ['ohos.permission.MEDIA_LOCATION', 'ohos.permission.READ_MEDIA', 'ohos.permission.WRITE_MEDIA'];
    let atManager = abilityAccessCtrl.createAtManager();
    atManager.requestPermissionsFromUser(context, permissions, (err, result) => {
      if (err) {
        console.info('getPermission failed: ' + JSON.stringify(err));
      } else {
        console.info('getPermission suc: ' + JSON.stringify(result));
        isGetPermission = true;
      }
    });

    let driver = uitest.Driver.create();
    await sleep(500);
    for (let i = 0; i < 10; i++) {
      if (isGetPermission) {
        break;
      }
      await sleep(500);
      let button = await driver.findComponent(uitest.ON.text('允许'));
      if (button != undefined) {
        await button.click();
      }
    }
    console.info('getPermission end');
  } catch (error) {
    console.info('getPermission error: ' + error);
  }
};

const MODIFY_ERROR_CODE_01 = '-1000';

const isNum = function(value) {
  return typeof value === 'number' && !isNaN(value);
};
export {
  getPermission,
  IMAGE_TYPE,
  VIDEO_TYPE,
  AUDIO_TYPE,
  FILE_TYPE,
  FILEKEY,
  sleep,
  allFetchOp,
  fetchOps,
  nameFetchOps,
  idFetchOps,
  albumFetchOps,
  fileFetchOption,
  albumTwoTypesFetchOps,
  albumThreeTypesFetchOps,
  checkPresetsAssets,
  checkAssetsCount,
  checkAlbumsCount,
  MODIFY_ERROR_CODE_01,
  isNum,
  fileIdFetchOps,
};
