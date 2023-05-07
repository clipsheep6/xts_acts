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
import abilityAccessCtrl from '@ohos.abilityAccessCtrl'
import bundle from '@ohos.bundle'
import dataSharePredicates from '@ohos.data.dataSharePredicates'

const presetsCount = {
  ActsUserFileMgrAlbumJsTest: { albumsCount: 3, assetsCount: 3 },
  ActsUserFileMgrBaseJsTest: { albumsCount: 9, assetsCount: 18 },
  ActsUserFileMgrFileAssetJsTest: { albumsCount: 45, assetsCount: 87 }
}

const IMAGE_TYPE = userFileManager.FileType.IMAGE
const VIDEO_TYPE = userFileManager.FileType.VIDEO
const AUDIO_TYPE = userFileManager.FileType.AUDIO
const AudioKey = userFileManager.AudioKey
const ImageVideoKey = userFileManager.ImageVideoKey
const AlbumKey = userFileManager.AlbumKey
const AlbumType = userFileManager.AlbumType
const AlbumSubType = userFileManager.AlbumSubType
const sleep = async function sleep (times) {
  if (times === undefined) {
    times = 10
  }
  await new Promise(res => setTimeout(res, times))
}

// const allFetchOp = function () {
//     let predicates = new dataSharePredicates.DataSharePredicates();
//     return {
//         fetchColumns: ['file_id', 'uri', 'mime_type', 'media_type', 'display_name',
//             'title', 'relative_path', 'parent', 'size', 'date_added', 'date_modified',
//             'date_taken', 'artist', 'width', 'height', 'orientation', 'duration', 'bucket_id',
//             'bucket_display_name', 'is_trash', 'is_favorite', 'date_trashed', 'position'],
//         predicates: predicates
//     };
// }

// const audioFetchOps = function (testNum, path) {
//     let predicates = new dataSharePredicates.DataSharePredicates();
//     predicates.equalTo(AudioKey.RELATIVE_PATH, path);
//     let ops = {
//         fetchColumns: ['file_id', 'uri', 'mime_type', 'media_type', 'display_name',
//             'title', 'relative_path', 'parent', 'size', 'date_added', 'date_modified',
//             'date_taken', 'artist', 'width', 'height', 'orientation', 'duration', 'bucket_id',
//             'bucket_display_name', 'is_trash', 'is_favorite', 'date_trashed', 'position', 'audio_album'],
//         predicates: predicates
//     };
//     console.info(`${testNum} queryOps: ${AudioKey.RELATIVE_PATH} = ${path}`);
//     return ops
// }

// const imageVideoFetchOps = function (testNum, path) {
//     let predicates = new dataSharePredicates.DataSharePredicates();
//     predicates.equalTo(ImageVideoKey.RELATIVE_PATH, path);
//     let ops = {
//         fetchColumns: ['file_id', 'uri', 'mime_type', 'media_type', 'display_name',
//             'title', 'relative_path', 'parent', 'size', 'date_added', 'date_modified',
//             'date_taken', 'artist', 'width', 'height', 'orientation', 'duration', 'bucket_id',
//             'bucket_display_name', 'is_trash', 'is_favorite', 'date_trashed', 'position'],
//         predicates: predicates
//     };
//     console.info(`${testNum} queryOps: ${ImageVideoKey.RELATIVE_PATH} = ${path}`);
//     return ops
// }

// const audioNameFetchOps = function (testNum, path, displayName) {
//     let predicates = new dataSharePredicates.DataSharePredicates();
//     predicates.equalTo(AudioKey.RELATIVE_PATH, path)
//         .equalTo(AudioKey.DISPLAY_NAME, displayName);
//     let ops = {
//         fetchColumns: ['file_id', 'uri', 'mime_type', 'media_type', 'display_name',
//             'title', 'relative_path', 'parent', 'size', 'date_added', 'date_modified',
//             'date_taken', 'artist', 'width', 'height', 'orientation', 'duration', 'bucket_id',
//             'bucket_display_name', 'is_trash', 'is_favorite', 'date_trashed', 'position', 'audio_album'],
//         predicates: predicates
//     };
//     console.info(`${testNum} queryOps: ${AudioKey.RELATIVE_PATH} = ${path} AND display_name = ${displayName}`);
//     return ops
// }

// const imageVideoNameFetchOps = function (testNum, path, displayName) {
//     let predicates = new dataSharePredicates.DataSharePredicates();
//     predicates.equalTo(ImageVideoKey.RELATIVE_PATH, path)
//         .equalTo(ImageVideoKey.DISPLAY_NAME, displayName);
//     let ops = {
//         fetchColumns: ['file_id', 'uri', 'mime_type', 'media_type', 'display_name',
//             'title', 'relative_path', 'parent', 'size', 'date_added', 'date_modified',
//             'date_taken', 'artist', 'width', 'height', 'orientation', 'duration', 'bucket_id',
//             'bucket_display_name', 'is_trash', 'is_favorite', 'date_trashed', 'position'],
//         predicates: predicates
//     };
//     console.info(`${testNum} queryOps: ${ImageVideoKey.RELATIVE_PATH} = ${path} AND display_name = ${displayName}`);
//     return ops
// }

const fetchAllOps = function () {
  const predicates = new dataSharePredicates.DataSharePredicates()
  return {
    fetchColumns: [],
    predicates
  }
}

// ImageVideoKey.URI,
// ImageVideoKey.FILE_TYPE,
// ImageVideoKey.DISPLAY_NAME,
// ImageVideoKey.DATE_ADDED,
// ImageVideoKey.DATE_MODIFIED,
// ImageVideoKey.TITLE,
// ImageVideoKey.DURATION,
// ImageVideoKey.WIDTH,
// ImageVideoKey.HEIGHT,
// ImageVideoKey.DATE_TAKEN,
// ImageVideoKey.ORIENTATION,
// ImageVideoKey.FAVORITE,
// ImageVideoKey.POSITION,
// ImageVideoKey.DATE_TRASHED,
// ImageVideoKey.HIDDEN,

// AlbumKey.URI,
// AlbumKey.FILE_TYPE,
// AlbumKey.ALBUM_NAME,
// AlbumKey.DATE_ADDED,
// AlbumKey.DATE_MODIFIED,

const assetFetchOneArgs = function (testNum, key, value) {
  const predicates = new dataSharePredicates.DataSharePredicates()
  predicates.equalTo(key, value)
  const ops = {
    fetchColumns: [],
    predicates
  }
  console.info(`${testNum} queryOps: ${key} = ${value}`)
  return ops
}

const assetFetchOneArgsWithFetchColumn = function (testNum, key, value) {
  const predicates = new dataSharePredicates.DataSharePredicates()
  predicates.equalTo(key, value)
  const ops = {
    fetchColumns: [ImageVideoKey.FAVORITE, ImageVideoKey.HIDDEN],
    predicates
  }
  console.info(`${testNum} queryOps: ${key} = ${value}`)
  return ops
}

const assetFetchTwoArgs = function (testNum, key1, value1, key2, value2) {
  const predicates = new dataSharePredicates.DataSharePredicates()
  predicates.equalTo(key1, value1).equalTo(key2, value2)
  const ops = {
    fetchColumns: [],
    predicates
  }
  console.info(`${testNum} queryOps: ${key1} = ${value1} AND ${key2} = ${value2}`)
  return ops
}

const albumFetchOneArgs = function (testNum, key, value) {
  const predicates = new dataSharePredicates.DataSharePredicates()
  predicates.equalTo(key, value)
  const ops = {
    predicates
  }
  console.info(`${testNum} queryOps: ${key} = ${value}`)
  return ops
}

const albumFetchOps = function (testNum, path, albumName) {
    let predicates = new dataSharePredicates.DataSharePredicates();
    predicates.equalTo(AlbumKey.RELATIVE_PATH, path)
        .equalTo("bucket_display_name", albumName);
    let ops = {
        predicates: predicates
    };
    console.info(`${testNum} queryOps: ${AlbumKey.RELATIVE_PATH} = ${path} AND bucket_display_name = ${albumName}`);
    return ops
}

// const albumNameFetchOps = function (testNum, albumName) {
//     let predicates = new dataSharePredicates.DataSharePredicates();
//     predicates.equalTo(AlbumKey.ALBUM_NAME, albumName);
//     let ops = {
//         predicates: predicates
//     };
//     console.info(`${testNum} queryOps: ${AlbumKey.ALBUM_NAME} = ${albumName}`);
//     return ops
// }

const checkPresetsAssets = async function (userfilemgr, hapName) {
  console.info('checkPresetsAssets start')
  const fetchAlbumResult = await userfilemgr.getPhotoAlbums(fetchAllOps())
  const albumsCount = fetchAlbumResult.getCount()
  const fetchPhotoResult = await userfilemgr.getPhotoAssets(fetchAllOps())
  const fetchAudioResult = await userfilemgr.getAudioAssets(fetchAllOps())
  const assetsCount = fetchPhotoResult.getCount() + fetchAudioResult.getCount()
  console.info(`${hapName}:: assetsCount: ${assetsCount} albumsCount: ${albumsCount},
            presetsassetsCount: ${presetsCount[hapName].assetsCount} 
            presetsalbumsCount: ${presetsCount[hapName].albumsCount}`)
  console.info('checkPresetsAssets end')
}

const checkAssetsCount = async function (done, testNum, fetchAssetResult, expectCount) {
  if (!fetchAssetResult) {
    console.info(`${testNum}:: fetchAssetResult is undefined`)
    return false
  }
  const count = await fetchAssetResult.getCount()
  if (count !== expectCount) {
    console.info(`${testNum}:: count:expectCount - ${count} : ${expectCount}`)
    return false
  }
  return count === expectCount
}

const getPermission = async function (name = 'ohos.acts.multimedia.mediaLibrary') {
  console.info('getPermission start', name)
  const appInfo = await bundle.getApplicationInfo('ohos.acts.multimedia.mediaLibrary', 0, 100)
  const tokenID = appInfo.accessTokenId
  const atManager = abilityAccessCtrl.createAtManager()
  try {
    await atManager.grantUserGrantedPermission(tokenID, 'ohos.permission.MEDIA_LOCATION', 1)
  } catch (error) {
    console.info('getPermission MEDIA_LOCATION failed')
  }
  try {
    await atManager.grantUserGrantedPermission(tokenID, 'ohos.permission.READ_IMAGEVIDEO', 1)
  } catch (error) {
    console.info('getPermission READ_IMAGEVIDEO failed')
  }
  try {
    await atManager.grantUserGrantedPermission(tokenID, 'ohos.permission.READ_AUDIO', 1)
  } catch (error) {
    console.info('getPermission READ_AUDIO failed')
  }
  try {
    await atManager.grantUserGrantedPermission(tokenID, 'ohos.permission.READ_DOCUMENT', 1)
  } catch (error) {
    console.info('getPermission READ_DOCUMENT failed')
  }
  try {
    await atManager.grantUserGrantedPermission(tokenID, 'ohos.permission.WRITE_IMAGEVIDEO', 1)
  } catch (error) {
    console.info('getPermission WRITE_IMAGEVIDEO failed')
  }
  try {
    await atManager.grantUserGrantedPermission(tokenID, 'ohos.permission.WRITE_AUDIO', 1)
  } catch (error) {
    console.info('getPermission WRITE_AUDIO failed')
  }
  try {
    await atManager.grantUserGrantedPermission(tokenID, 'ohos.permission.WRITE_DOCUMENT', 1)
  } catch (error) {
    console.info('getPermission WRITE_DOCUMENT failed')
  }
  const isGranted1 = await atManager.verifyAccessToken(tokenID, 'ohos.permission.MEDIA_LOCATION')
  const isGrantedReadImageVideo = await atManager.verifyAccessToken(tokenID, 'ohos.permission.READ_IMAGEVIDEO')
  const isGrantedReadAudio = await atManager.verifyAccessToken(tokenID, 'ohos.permission.READ_AUDIO')
  const isGrantedReadDocument = await atManager.verifyAccessToken(tokenID, 'ohos.permission.READ_DOCUMENT')
  const isGrantedWriteImageVideo = await atManager.verifyAccessToken(tokenID, 'ohos.permission.WRITE_IMAGEVIDEO')
  const isGrantedWriteAudio = await atManager.verifyAccessToken(tokenID, 'ohos.permission.WRITE_AUDIO')
  const isGrantedWriteDocument = await atManager.verifyAccessToken(tokenID, 'ohos.permission.WRITE_DOCUMENT')
  if (isGranted1 != 0 ||
        !(isGrantedReadImageVideo == 0 && isGrantedReadAudio == 0 && isGrantedReadDocument == 0) ||
        !(isGrantedWriteImageVideo == 0 && isGrantedWriteAudio == 0 && isGrantedWriteDocument == 0)) {
    console.info('getPermission failed')
  }
  console.info('getPermission end')
}

const isNum = function (value) {
  return typeof value === 'number' && !isNaN(value)
}

async function deleteAllUserAlbum() {
  try {
    const userfilemgr = userFileManager.getUserFileMgr(globalThis.abilityContext);
    let fetchResult = await userfilemgr.getAlbums(AlbumType.USER, AlbumSubType.ANY);
    let albumList: Array<userFileManager.Album> = new Array();
    let count = fetchResult.getCount();
    for (let i = 0; i < count; i++) {
      albumList.push(await fetchResult.getNextObject());
    }
    await userfilemgr.deleteAlbums(albumList);
  } catch(error) {
    console.info(`Failed to delete all user albums! error: ${error}`);
    throw error;
  }
}

async function getFileAsset(testNum, fetchOps) {
  let asset: userFileManager.FileAsset
  try {
      const userfilemgr = userFileManager.getUserFileMgr(globalThis.abilityContext);
      const fetchResult = await userfilemgr.getPhotoAssets(fetchOps);
      console.info(`${testNum} getFileAsset fetchResult: ${fetchResult.getCount()}`);
      asset = await fetchResult.getFirstObject();
      fetchResult.close()
  } catch (error) {
      console.info(`${testNum} getFileAsset error: ${error}`);
      throw error;
  }
  return asset;
}

export {
  getPermission,
  IMAGE_TYPE,
  VIDEO_TYPE,
  AUDIO_TYPE,
  AudioKey,
  ImageVideoKey,
  AlbumKey,
  AlbumType,
  AlbumSubType,
  sleep,
  albumFetchOps,
  fetchAllOps,
  assetFetchOneArgs,
  assetFetchTwoArgs,
  albumFetchOneArgs,
  checkPresetsAssets,
  checkAssetsCount,
  isNum,
  deleteAllUserAlbum,
  getFileAsset,
  assetFetchOneArgsWithFetchColumn
}