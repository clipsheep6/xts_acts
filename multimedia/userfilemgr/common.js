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

import userfile_manager from '@ohos.filemanagement.userfile_manager';
import abilityAccessCtrl from '@ohos.abilityAccessCtrl';
import bundle from '@ohos.bundle';

const presetsCount = {
    ActsUserFileMgrAlbum: { albumsCount: 3, assetsCount: 9 },
    ActsUserFileMgrBase: { albumsCount: 4, assetsCount: 4 },
    ActsUserFileMgrBase: { albumsCount: 56, assetsCount: 112 },
}

const IMAGE_TYPE = userfile_manager.MediaType.IMAGE;
const VIDEO_TYPE = userfile_manager.MediaType.VIDEO;
const AUDIO_TYPE = userfile_manager.MediaType.AUDIO;
const FILE_TYPE = userfile_manager.MediaType.FILE;

const FILEKEY = userfile_manager.FileKey;
const sleep = async function sleep(times) {
    if (times == undefined) {
        times = 10
    }
    await new Promise(res => setTimeout(res, times));
}

const allFetchOp = function () {
    return {
        selections: '',
        selectionArgs: [],
    };
}

const fetchOps = function (testNum, path) {
    let ops = {
        selections: 'relative_path' + '= ?',
        selectionArgs: [path],
    };
    console.info(`${testNum}: fetchOps${JSON.stringify(ops)}`)
    return ops
}
const nameFetchOps = function (testNum, path, displayName) {
    let ops = {
        selections: 'relative_path' + '= ? AND ' + FILEKEY.DISPLAY_NAME + '= ?',
        selectionArgs: [path, displayName],
    };
    console.info(`${testNum}: fetchOps${JSON.stringify(ops)}`)
    return ops
}

const albumFetchOps = function (testNum, path, albumName) {
    let ops = {
        selections: 'relative_path' + '= ? AND ' + 'bucket_display_name' + '= ?',
        selectionArgs: [path, albumName],
    };
    console.info(`${testNum}: fetchOps${JSON.stringify(ops)}`)
    return ops
}

const checkPresetsAssets = async function (userfilemgr, hapName) {
    console.info('checkPresetsAssets start')
    let albumList = await userfilemgr.getAlbums([IMAGE_TYPE, VIDEO_TYPE, AUDIO_TYPE, FILE_TYPE], allFetchOp());
    let albumsCount = albumList.length;
    let fetchFileResult = await userfilemgr.getFileAssets([IMAGE_TYPE, VIDEO_TYPE, AUDIO_TYPE, FILE_TYPE],
        allFetchOp());
    let assetsCount = await fetchFileResult.getCount();
    console.info(`${hapName}:: assetsCount: ${assetsCount} albumsCount: ${albumsCount},
            presetsassetsCount: ${presetsCount[hapName].assetsCount} 
            presetsalbumsCount: ${presetsCount[hapName].albumsCount}`);
    console.info('checkPresetsAssets end')
}

const checkAssetsCount = async function (done, testNum, fetchFileResult, expectCount) {
    if (!fetchFileResult) {
        console.info(`${testNum}:: fetchFileResult error:`);
        expect(false).assertTrue();
        done();
        return false
    }
    let count = await fetchFileResult.getCount();
    if (count != expectCount) {
        console.info(`${testNum}:: count:expectCount - ${count} : ${expectCount}`);
        expect(count).assertEqual(expectCount);
        done();
    }
    return count == expectCount;
}

const checkAlbumsCount = function (done, testNum, albumList, expectCount) {
    if (!Array.isArray(albumList)) {
        console.info(`${testNum}:: albumList error:`);
        expect(false).assertTrue();
        done();
        return false
    }
    let albumsCount = albumList.length;
    if (albumsCount != expectCount) {
        console.info(`${testNum}:: albumsCount: expectCount - ${albumsCount} : ${expectCount}`);
        expect(albumsCount).assertEqual(expectCount);
        done();
    }
    return albumsCount == expectCount;
}

const getPermission = async function (name = 'ohos.acts.multimedia.userfilemgr') {
    console.info('getPermission start', name)
    let appInfo = await bundle.getApplicationInfo('ohos.acts.multimedia.userfilemgr', 0, 100);
    let tokenID = appInfo.accessTokenId;
    let atManager = abilityAccessCtrl.createAtManager();
    let result1 = await atManager.grantUserGrantedPermission(tokenID, "ohos.permission.MEDIA_LOCATION", 1);
    // let result2 = await atManager.grantUserGrantedPermission(tokenID, "ohos.permission.READ_MEDIA", 1);
    // let result3 = await atManager.grantUserGrantedPermission(tokenID, "ohos.permission.WRITE_MEDIA", 1);
    let resultReadImageVideo = await atManager.grantUserGrantedPermission(tokenID, "ohos.permission.READ_IMAGEVIDEO", 1);
    let resultReadAudio = await atManager.grantUserGrantedPermission(tokenID, "ohos.permission.READ_AUDIO", 1);
    let resultReadDocument = await atManager.grantUserGrantedPermission(tokenID, "ohos.permission.READ_DOCUMENT", 1);
    let resultWriteImageVideo = await atManager.grantUserGrantedPermission(tokenID, "ohos.permission.WRITE_IMAGEVIDEO", 1);
    let resultWriteAudio = await atManager.grantUserGrantedPermission(tokenID, "ohos.permission.WRITE_AUDIO", 1);
    let resultWriteDocument = await atManager.grantUserGrantedPermission(tokenID, "ohos.permission.WRITE_DOCUMENT", 1);
    let isGranted1 = await atManager.verifyAccessToken(tokenID, "ohos.permission.MEDIA_LOCATION");
    // let isGranted2 = await atManager.verifyAccessToken(tokenID, "ohos.permission.READ_MEDIA");
    // let isGranted3 = await atManager.verifyAccessToken(tokenID, "ohos.permission.WRITE_MEDIA");
    let isGrantedReadImageVideo = await atManager.verifyAccessToken(tokenID, "ohos.permission.READ_IMAGEVIDEO");
    let isGrantedReadAudio = await atManager.verifyAccessToken(tokenID, "ohos.permission.READ_AUDIO");
    let isGrantedReadDocument = await atManager.verifyAccessToken(tokenID, "ohos.permission.READ_DOCUMENT");
    let isGrantedWriteImageVideo = await atManager.verifyAccessToken(tokenID, "ohos.permission.WRITE_IMAGEVIDEO");
    let isGrantedWriteAudio = await atManager.verifyAccessToken(tokenID, "ohos.permission.WRITE_AUDIO");
    let isGrantedWriteDocument = await atManager.verifyAccessToken(tokenID, "ohos.permission.WRITE_DOCUMENT");
    //if (!(result1 == 0 && result2 == 0 && result3 == 0) || !(isGranted1 == 0 && isGranted2 == 0 && isGranted3 == 0) ||
      if (result1 != 0 || isGranted1 !=0 || !(resultReadImageVideo == 0 && resultReadAudio == 0 && resultReadDocument == 0) ||
        !(resultWriteImageVideo == 0 && resultWriteAudio == 0 && resultWriteDocument == 0) ||
        !(isGrantedReadImageVideo == 0 && isGrantedReadAudio == 0 && isGrantedReadDocument == 0) ||
        !(isGrantedWriteImageVideo == 0 && isGrantedWriteAudio == 0 && isGrantedWriteDocument == 0)) {
        console.info('getPermission failed')
    }
    console.info('getPermission end')
}

const MODIFY_ERROR_CODE_01 = '-1000';

const isNum = function (value) {
    return typeof value === 'number' && !isNaN(value);
}
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
    albumFetchOps,
    checkPresetsAssets,
    checkAssetsCount,
    checkAlbumsCount,
    MODIFY_ERROR_CODE_01,
    isNum,
};