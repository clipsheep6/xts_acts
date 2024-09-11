/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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
import common from '@ohos.app.ability.common';
import fs, { ListFileOptions } from '@ohos.file.fs';
import { photoAccessHelper } from '@kit.MediaLibraryKit';
import abilityAccessCtrl, { Permissions } from '@ohos.abilityAccessCtrl';
import bundleManager from '@ohos.bundle.bundleManager';
import dataSharePredicates from '@ohos.data.dataSharePredicates';

const photoType = photoAccessHelper.PhotoType;
const photoKeys = photoAccessHelper.PhotoKeys;
const albumKeys = photoAccessHelper.AlbumKeys;
const albumType = photoAccessHelper.AlbumType;
const albumSubtype = photoAccessHelper.AlbumSubtype;

export function sleep(ms: number): Promise<string> {
  return new Promise((resolve) => {
    setTimeout(() => {
      resolve('');
    }, ms);
  });
}

export function fetchAllOption() : photoAccessHelper.FetchOptions {
  const predicates = new dataSharePredicates.DataSharePredicates();
  const ops : photoAccessHelper.FetchOptions = {
    fetchColumns: [],
    predicates: predicates
  };
  return ops;
};

export function fetchOption(testNum: string, key: string, value: string | number) : photoAccessHelper.FetchOptions {
  const predicates = new dataSharePredicates.DataSharePredicates();
  predicates.equalTo(key, value);
  const ops : photoAccessHelper.FetchOptions = {
    fetchColumns: [],
    predicates: predicates
  };
  console.info(`${testNum} queryOps: ${key} = ${value}`);
  return ops;
};

export function albumFetchOption(testNum: string, key: string, value: string | number) : photoAccessHelper.FetchOptions {
  const predicates = new dataSharePredicates.DataSharePredicates();
  predicates.equalTo(key, value);
  const ops : photoAccessHelper.FetchOptions = {
    fetchColumns: [],
    predicates: predicates
  };
  console.info(`${testNum} queryOps: ${key} = ${value}`);
  return ops;
};

export function photoFetchOption(testNum: string, key: string, value: string | number) : photoAccessHelper.FetchOptions {
  const predicates = new dataSharePredicates.DataSharePredicates();
  predicates.equalTo(key, value);
  const ops : photoAccessHelper.FetchOptions = {
    fetchColumns: [
      photoKeys.URI,
      photoKeys.PHOTO_TYPE,
      photoKeys.DISPLAY_NAME,
      photoKeys.DATE_ADDED,
      photoKeys.DATE_MODIFIED,
      photoKeys.DURATION,
      photoKeys.WIDTH,
      photoKeys.HEIGHT,
      photoKeys.DATE_TAKEN,
      photoKeys.ORIENTATION,
      photoKeys.FAVORITE,
      photoKeys.SIZE,
      photoKeys.TITLE,
      photoKeys.DATE_ADDED_MS,
      photoKeys.DATE_MODIFIED_MS,
      photoKeys.DYNAMIC_RANGE_TYPE,
      photoKeys.COVER_POSITION,
      photoKeys.BURST_KEY,
      'all_exif',
    ],
    predicates: predicates
  };
  console.info(`${testNum} queryOps: ${key} = ${value}`);
  return ops;
};

export async function getPermission(name = 'ohos.acts.multimedia.photoaccess') : Promise<void> {
  try {
    console.info('getPermission start', name);
    let permissionState: Map<string, number> = new Map();
    const permissions: Array<Permissions> = [
      'ohos.permission.READ_IMAGEVIDEO',
      'ohos.permission.WRITE_IMAGEVIDEO',
    ];
    const atManager = abilityAccessCtrl.createAtManager();
    const appFlags = bundleManager.ApplicationFlag.GET_APPLICATION_INFO_DEFAULT;
    const userId = 100;
    const appInfo = await bundleManager.getApplicationInfo(name, appFlags, userId);
    const tokenID = appInfo.accessTokenId;
    for (const permission of permissions) {
      console.info('getPermission permission: ' + permission);
      try {
        await atManager.grantUserGrantedPermission(tokenID, permission, 1);
      } catch (error) {
        console.error(`getPermission ${permission} failed`);
      }
      permissionState.set(permission, await atManager.verifyAccessToken(tokenID, permission));
    }
    permissionState.forEach((value, key, map) => {
      if (value !== 0) {
        console.info(`getPermission failed; permission: ${key}, state: ${value}`);
      }
    });
    console.info('getPermission end');
  } catch (error) {
    console.error(`getPermission failed, error: ${error}`);
  }
};


export function addResourceToSandbox(context: common.UIAbilityContext) {
  try {
    let resourcePath = context.resourceDir;
    let fileDir = context.filesDir;
    let listFileOption: ListFileOptions = {
      filter: {}
    };
    let fileNames = fs.listFileSync(resourcePath, listFileOption);
    for (let i = 0; i < fileNames.length; i++) {
      let filePath = resourcePath + "/" + fileNames[i];
      fs.copyFileSync(filePath, fileDir);
      let newPath = fileDir + "/" + fileNames[i];
      let res = fs.accessSync(newPath);
      if (res) {
        console.log(`addResourceToSandBox :: ${fileNames[i]} copy to sandbox success !`);
      } else {
        console.log(`addResourceToSandBox :: ${fileNames[i]} copy to sandbox failed !`);
      }
    }
  } catch (error) {
    console.log(`addResourceToSandBox :: run failed, message is ${error}`);
  }
}

export async function createResource(context: common.UIAbilityContext, fileNameList: Array<string>) {
  try {
    let phAccessHelper = photoAccessHelper.getPhotoAccessHelper(context);
    let imageUri = 'file://ohos.acts.multimedia.photoaccess/data/storage/el2/base/haps/entry_test/files/01.jpg';
    let videoUri = 'file://ohos.acts.multimedia.photoaccess/data/storage/el2/base/haps/entry_test/files/01.mp4';
    for (let i = 0; i < fileNameList.length; i++) {
      let fileName = fileNameList[i];
      let displayName = fileName.substring(0, fileName.lastIndexOf(".") - 1);
      console.log(`createResource :: displayName is ${displayName}`);
      if (fileName.endsWith(".jpg")) {
        let photoType: photoAccessHelper.PhotoType = photoAccessHelper.PhotoType.IMAGE;
        let extension: string = 'jpg';
        let options: photoAccessHelper.CreateOptions = {
          title: displayName
        }
        let assetChangeRequest: photoAccessHelper.MediaAssetChangeRequest = photoAccessHelper.MediaAssetChangeRequest.createAssetRequest(context, photoType, extension, options);
        assetChangeRequest.addResource(photoAccessHelper.ResourceType.IMAGE_RESOURCE, imageUri);
        await phAccessHelper.applyChanges(assetChangeRequest);
      }
      if (fileName.endsWith(".mp4")) {
        let photoType: photoAccessHelper.PhotoType = photoAccessHelper.PhotoType.VIDEO;
        let extension: string = 'mp4';
        let options: photoAccessHelper.CreateOptions = {
          title: displayName
        }
        let assetChangeRequest: photoAccessHelper.MediaAssetChangeRequest = photoAccessHelper.MediaAssetChangeRequest.createAssetRequest(context, photoType, extension, options);
        assetChangeRequest.addResource(photoAccessHelper.ResourceType.VIDEO_RESOURCE, videoUri);
        await phAccessHelper.applyChanges(assetChangeRequest);
      }
      console.log(`createResource :: create asset ${fileName} success !`);
    }
  } catch (error) {
    console.log(`createResource :: run failed, message is ${error}`);
  }
}

export function genRadomStr(len: number) : string {
  const chars = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789';
  let randomStr = '';
  for (let i = 0; i < len; i++) {
    randomStr += chars.charAt(Math.floor(Math.random() * chars.length));
  }
  return randomStr;
}

export async function getFileAsset(context: common.UIAbilityContext, testNum: string, fetchOps: photoAccessHelper.FetchOptions) : Promise<photoAccessHelper.PhotoAsset | undefined> {
  let asset: photoAccessHelper.PhotoAsset | undefined = undefined;
  try {
    const helper = photoAccessHelper.getPhotoAccessHelper(context);
    let fetchResult: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset>;
    fetchResult = await helper.getAssets(fetchOps);
    console.info(`${testNum} getFileAsset fetchResult: ${fetchResult.getCount()}`);
    asset = await fetchResult.getFirstObject();
    fetchResult.close();
  } catch (error) {
    console.error(`${testNum} getFileAsset error: ${error}`);
  }
  return asset;
}

export function isNum(value: photoAccessHelper.MemberType) : boolean {
  return typeof value === 'number' && !isNaN(value);
};

export function getAssetId(uri: string) : string {
  const tag = 'Photo/';
  const index = uri.indexOf(tag);
  let str = uri.substring(index + tag.length);
  console.info(`getAssetId str: ${str}`);
  return str;
}

export {
  photoType,
  photoKeys,
  albumKeys,
  albumType,
  albumSubtype,
};