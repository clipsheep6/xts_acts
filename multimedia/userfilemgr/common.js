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

import userFileManager from '@ohos.filemanagement.userFileManager';
import abilityAccessCtrl from '@ohos.abilityAccessCtrl';
import bundle from '@ohos.bundle';
import dataSharePredicates from '@ohos.data.dataSharePredicates';
import uitest from '@ohos.UiTest';
import fileio from '@ohos.fileio';

const presetsCount = {
  ActsUserFileMgrPendingAJsTest: { albumsCount: 3, assetsCount: 3 },
};

const IMAGE_TYPE = userFileManager.FileType.IMAGE;
const VIDEO_TYPE = userFileManager.FileType.VIDEO;
const AUDIO_TYPE = userFileManager.FileType.AUDIO;

const AUDIOKEY = userFileManager.AudioKey;
const IMAGEVIDEOKEY = userFileManager.ImageVideoKey;
const ALBUMKEY = userFileManager.AlbumKey;
const THROW_ERROR_CODE = 13900020;
const sleep = async function sleep(times) {
  if (times == undefined) {
    times = 10;
  }
  await new Promise((res) => setTimeout(res, times));
};

const allFetchOp = function () {
  let predicates = new dataSharePredicates.DataSharePredicates();
  return {
    fetchColumns: [],
    predicates: predicates,
  };
};

const audioFetchOps = function (testNum, path) {
  let predicates = new dataSharePredicates.DataSharePredicates();
  predicates.equalTo('relative_path', path);
  let ops = {
    fetchColumns: [],
    predicates: predicates,
  };
  console.info(`${testNum} queryOps: relative_path = ${path}`);
  return ops;
};

const imageVideoFetchOps = function (testNum, path) {
  let predicates = new dataSharePredicates.DataSharePredicates();
  predicates.equalTo('relative_path', path);
  let ops = {
    fetchColumns: [],
    predicates: predicates,
  };
  console.info(`${testNum} queryOps: relative_path = ${path}`);
  return ops;
};

const audioNameFetchOps = function (testNum, path, displayName) {
  let predicates = new dataSharePredicates.DataSharePredicates();
  predicates.equalTo('relative_path', path).equalTo(AUDIOKEY.DISPLAY_NAME, displayName);
  let ops = {
    fetchColumns: [],
    predicates: predicates,
  };
  console.info(`${testNum} queryOps: relative_path = ${path} AND display_name = ${displayName}`);
  return ops;
};

const imageVideoNameFetchOps = function (testNum, path, displayName) {
  let predicates = new dataSharePredicates.DataSharePredicates();
  predicates.equalTo('relative_path', path).equalTo(IMAGEVIDEOKEY.DISPLAY_NAME, displayName);
  let ops = {
    fetchColumns: [],
    predicates: predicates,
  };
  console.info(`${testNum} queryOps: relative_path = ${path} AND display_name = ${displayName}`);
  return ops;
};

const albumFetchOps = function (testNum, path, albumName) {
  let predicates = new dataSharePredicates.DataSharePredicates();
  predicates.equalTo('relative_path', path).equalTo(ALBUMKEY.ALBUM_NAME, albumName);
  let ops = {
    predicates: predicates,
  };
  console.info(`${testNum} queryOps: relative_path = ${path} AND bucket_display_name = ${albumName}`);
  return ops;
};

const checkPresetsAssets = async function (userfilemgr, hapName) {
  console.info('checkPresetsAssets start');
  let fetchAlbumResult = await userfilemgr.getPhotoAlbums(allFetchOp());
  let albumsCount = fetchAlbumResult.getCount();
  let fetchPhotoResult = await userfilemgr.getPhotoAssets(allFetchOp());
  let fetchAudioResult = await userfilemgr.getAudioAssets(allFetchOp());
  let assetsCount = fetchPhotoResult.getCount() + fetchAudioResult.getCount();
  console.info(`${hapName}:: assetsCount: ${assetsCount} albumsCount: ${albumsCount},
            presetsassetsCount: ${presetsCount[hapName].assetsCount} 
            presetsalbumsCount: ${presetsCount[hapName].albumsCount}`);
  console.info('checkPresetsAssets end');
};

const checkAssetsCount = async function (done, testNum, fetchAssetResult, expectCount) {
  if (!fetchAssetResult) {
    console.info(`${testNum}:: fetchAssetResult is undefined`);
    expect(false).assertTrue();
    done();
    return false;
  }
  let count = await fetchAssetResult.getCount();
  if (count != expectCount) {
    console.info(`${testNum}:: count:expectCount - ${count} : ${expectCount}`);
    expect(count).assertEqual(expectCount);
    done();
  }
  return count == expectCount;
};

const isNum = function (value) {
  return typeof value === 'number' && !isNaN(value);
};
const getPermission = async function (name, context) {
  if (!name) {
    name = 'ohos.acts.multimedia.userfilemgr';
  }
  console.info('getPermission start', name);
  let permissions = [
    'ohos.permission.MEDIA_LOCATION',
    'ohos.permission.WRITE_IMAGEVIDEO',
    'ohos.permission.READ_IMAGEVIDEO',
    'ohos.permission.WRITE_AUDIO',
    'ohos.permission.READ_AUDIO',
  ];
  let atManager = abilityAccessCtrl.createAtManager();
  let getP = false;
  try {
    atManager.requestPermissionsFromUser(context, permissions, (err, data) => {
      console.info(`getPermission requestPermissionsFromUser ${JSON.stringify(data)}`);
      getP = true;
    });
  } catch (err) {
    console.info(`getPermission catch err -> ${JSON.stringify(err)}`);
  }
  let driver = uitest.Driver.create();
  await sleep(2000);
  for (let i = 0; i < 10; i++) {
    await sleep(2000);
    let button = await driver.findComponent(uitest.ON.text('允许'));
    if (button) {
      await button.click();
    }
    if (getP) {
      break;
    }
  }

  let appInfo = await bundle.getApplicationInfo(name, 0, 100);
  let tokenID = appInfo.accessTokenId;

  let isGranted1 = await atManager.verifyAccessToken(tokenID, 'ohos.permission.MEDIA_LOCATION');
  let isGranted2 = await atManager.verifyAccessToken(tokenID, 'ohos.permission.WRITE_IMAGEVIDEO');
  let isGranted3 = await atManager.verifyAccessToken(tokenID, 'ohos.permission.READ_IMAGEVIDEO');
  let isGranted4 = await atManager.verifyAccessToken(tokenID, 'ohos.permission.WRITE_AUDIO');
  let isGranted5 = await atManager.verifyAccessToken(tokenID, 'ohos.permission.READ_AUDIO');
  if (!(isGranted1 == 0 && isGranted2 == 0 && isGranted3 == 0 && isGranted4 == 0 && isGranted5 == 0)) {
    console.info('getPermission failed');
  }
  console.info('getPermission end');
};

const nameAndPathFetchOps = function (testNum, path, DISPLAY_NAME, displayName) {
  let predicates = new dataSharePredicates.DataSharePredicates();
  predicates.equalTo('relative_path', path).equalTo(DISPLAY_NAME, displayName);
  let ops = {
    fetchColumns: [],
    predicates: predicates,
  };
  console.info(`${testNum} queryOps: relative_path = ${path} AND display_name = ${displayName}`);
  return ops;
};

const assetByPathFetchOps = function (testNum, path) {
  let predicates = new dataSharePredicates.DataSharePredicates();
  predicates.equalTo('relative_path', path);
  let ops = {
    fetchColumns: [],
    predicates: predicates,
  };
  console.info(`${testNum} queryOps: relative_path = ${path}`);
  return ops;
};

const displayNameFetchOps = function (testNum, DISPLAY_NAME, displayName) {
  let predicates = new dataSharePredicates.DataSharePredicates();
  predicates.equalTo(DISPLAY_NAME, displayName);
  let ops = {
    fetchColumns: [],
    predicates: predicates,
  };
  console.info(`${testNum} queryOps: DISPLAY_NAME = ${DISPLAY_NAME} AND display_name = ${displayName}`);
  return ops;
};
async function copyFile(fd1, fd2) {
  let stat = await fileio.fstat(fd1);
  let buf = new ArrayBuffer(stat.size);
  await fileio.read(fd1, buf);
  await fileio.write(fd2, buf);
}
const getSecond = () => {
  return Number(
    new Date()
      .getTime()
      .toString()
      .slice(0, new Date().getTime().toString().length - 3)
  );
};
export {
  IMAGE_TYPE,
  VIDEO_TYPE,
  AUDIO_TYPE,
  THROW_ERROR_CODE,
  AUDIOKEY,
  IMAGEVIDEOKEY,
  ALBUMKEY,
  sleep,
  allFetchOp,
  audioFetchOps,
  imageVideoFetchOps,
  audioNameFetchOps,
  imageVideoNameFetchOps,
  albumFetchOps,
  checkPresetsAssets,
  checkAssetsCount,
  isNum,
  displayNameFetchOps,
  getPermission,
  nameAndPathFetchOps,
  copyFile,
  assetByPathFetchOps,
  getSecond,
};
