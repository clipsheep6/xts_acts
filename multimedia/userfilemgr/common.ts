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

const JPG_HEIGHT = 1706;
const JPG_WIDTH = 1279;
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

const fetchAllOps = function () {
  const predicates = new dataSharePredicates.DataSharePredicates()
  return {
    fetchColumns: [],
    predicates
  }
}

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
    fetchColumns: [
      ImageVideoKey.URI,
      ImageVideoKey.FILE_TYPE,
      ImageVideoKey.DISPLAY_NAME,
      ImageVideoKey.DATE_ADDED,
      ImageVideoKey.DATE_MODIFIED,
      ImageVideoKey.TITLE,
      ImageVideoKey.DURATION,
      ImageVideoKey.WIDTH,
      ImageVideoKey.HEIGHT,
      ImageVideoKey.DATE_TAKEN,
      ImageVideoKey.ORIENTATION,
      ImageVideoKey.FAVORITE,
      ImageVideoKey.POSITION,
      ImageVideoKey.HIDDEN,
    ],
    predicates
  }
  console.info(`${testNum} queryOps: ${key} = ${value}`)
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

async function getFileAsset(testNum, fetchOps, isAudio = false) {
  let asset: userFileManager.FileAsset
  try {
      const userfilemgr = userFileManager.getUserFileMgr(globalThis.abilityContext);
      let fetchResult: userFileManager.FetchResult<userFileManager.FileAsset>
      if (isAudio) {
        fetchResult = await userfilemgr.getAudioAssets(fetchOps)
      } else {
        fetchResult = await userfilemgr.getPhotoAssets(fetchOps)
      }
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
  fetchAllOps,
  assetFetchOneArgs,
  albumFetchOneArgs,
  checkPresetsAssets,
  checkAssetsCount,
  isNum,
  deleteAllUserAlbum,
  getFileAsset,
  assetFetchOneArgsWithFetchColumn,
  JPG_HEIGHT,
  JPG_WIDTH,
}
