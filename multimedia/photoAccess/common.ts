/*
 * Copyright (C) 2023-2024 Huawei Device Co., Ltd.
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

import photoAccessHelper from '@ohos.file.photoAccessHelper';
import abilityAccessCtrl from '@ohos.abilityAccessCtrl';
import bundleManager from '@ohos.bundle.bundleManager';
import dataSharePredicates from '@ohos.data.dataSharePredicates';
import abilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';
import fs, { ListFileOptions } from '@ohos.file.fs';
import fileuri from "@ohos.file.fileuri";
import camera from '@ohos.multimedia.camera';
import { BusinessError } from '@ohos.base';

const delegator = abilityDelegatorRegistry.getAbilityDelegator();
const phAccessHelper = photoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);
const photoType = photoAccessHelper.PhotoType;
const photoKeys = photoAccessHelper.PhotoKeys;
const albumKeys = photoAccessHelper.AlbumKeys;
const albumType = photoAccessHelper.AlbumType;
const albumSubtype = photoAccessHelper.AlbumSubtype;
const DEFAULT_SLEEP_TIME = 10;

// 相机相关对象
let cameraManager: camera.CameraManager | undefined = undefined;
let cameraDevices: Array<camera.CameraDevice> = [];
let previewOutput: camera.PreviewOutput | undefined = undefined;
let cameraInput: camera.CameraInput | undefined = undefined;
let cameraOutputCapability: camera.CameraOutputCapability | undefined = undefined;
let photoOutput: camera.PhotoOutput | undefined = undefined;
let photoSession: camera.PhotoSession | undefined = undefined;
let isSaveCameraPhoto: boolean = true;

const context = globalThis.abilityContext;
const pathDir = context.filesDir;

let validImageExt = ['.jpg']
let validVideoExt = ['.mp4']
let validVideoMpegExt = ['.mpeg']
let validImageGifExt = ['.gif']
let validImagePngExt = ['.png']

export async function sleep(times = DEFAULT_SLEEP_TIME) : Promise<void> {
  await new Promise(res => setTimeout(res, times));
};

export function fetchAllOption() : photoAccessHelper.FetchOptions {
  const predicates = new dataSharePredicates.DataSharePredicates();
  const ops : photoAccessHelper.FetchOptions = {
    fetchColumns: [],
    predicates: predicates
  };
  return ops;
};

export function fetchOption(testNum: any, key: any, value: any) : photoAccessHelper.FetchOptions {
  const predicates = new dataSharePredicates.DataSharePredicates();
  predicates.equalTo(key, value);
  const ops : photoAccessHelper.FetchOptions = {
    fetchColumns: [],
    predicates: predicates
  };
  console.info(`${testNum} queryOps: ${key} = ${value}`);
  return ops;
};

export function albumFetchOption(testNum: any, key: any, value: any) : photoAccessHelper.FetchOptions {
  const predicates = new dataSharePredicates.DataSharePredicates();
  predicates.equalTo(key, value);
  const ops : photoAccessHelper.FetchOptions = {
    fetchColumns: [],
    predicates: predicates
  };
  console.info(`${testNum} queryOps: ${key} = ${value}`);
  return ops;
};

export function photoFetchOption(testNum: any, key: any, value: any) : photoAccessHelper.FetchOptions {
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
      photoKeys.POSITION,
      photoKeys.DATE_TRASHED,
      photoKeys.HIDDEN,
      photoKeys.CAMERA_SHOT_KEY,
      photoKeys.USER_COMMENT,
      photoKeys.DATE_ADDED_MS,
      photoKeys.DATE_MODIFIED_MS,
      photoKeys.DYNAMIC_RANGE_TYPE,
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
    let permissionState = new Map();
    const permissions = [
      'ohos.permission.MEDIA_LOCATION',
      'ohos.permission.READ_IMAGEVIDEO',
      'ohos.permission.WRITE_IMAGEVIDEO',
      'ohos.permission.CAMERA'
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

export function isNum(value: number) : boolean {
  return typeof value === 'number' && !isNaN(value);
};

export function getAssetId(uri: string) : string {
  const tag = 'Photo/';
  const index = uri.indexOf(tag);
  let str = uri.substring(index + tag.length);
  console.info(`getAssetId str: ${str}`);
  return str;
}

export function getAlbumId(uri: string) : string {
  const index = uri.lastIndexOf('/');
  let str = uri.substring(index + 1);
  console.info(`getAlbumId str: ${str}`);
  return str;
}

export function genRadomStr(len: number) : string {
  const chars = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789';
  let randomStr = '';
  for (let i = 0; i < len; i++) {
    randomStr += chars.charAt(Math.floor(Math.random() * chars.length));
  }
  return randomStr;
}

export async function createUserAlbum(testNum: any, albumName: any) : Promise<photoAccessHelper.Album> {
  console.info(`${testNum} createUserAlbum albumName: ${albumName}`);
  let album: photoAccessHelper.Album;
  try {
    const helper = photoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);
    album = await helper.createAlbum(albumName);
    console.info(`${testNum} createUserAlbum suc`);
  } catch (error) {
    console.error(`Failed to createUserAlbum! error: ${error}`);
    throw error;
  }

  return new Promise((resolve, reject) => {
    resolve(album);
  });
}

export async function getFileAsset(testNum: any, fetchOps: any) : Promise<photoAccessHelper.PhotoAsset> {
  let asset: photoAccessHelper.PhotoAsset;
  try {
    const helper = photoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);
    let fetchResult: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset>;
    fetchResult = await helper.getAssets(fetchOps);
    console.info(`${testNum} getFileAsset fetchResult: ${fetchResult.getCount()}`);
    asset = await fetchResult.getFirstObject();
    fetchResult.close();
  } catch (error) {
    console.error(`${testNum} getFileAsset error: ${error}`);
    throw error;
  }

  return new Promise((resolve, reject) => {
    resolve(asset);
  });
}

export function getFileAssetFetchResult() : photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset> {
  let fetchResult: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset>;
  return fetchResult;
}

export function getAlbumFetchResult() : photoAccessHelper.FetchResult<photoAccessHelper.Album> {
  let fetchResult: photoAccessHelper.FetchResult<photoAccessHelper.Album>;
  return fetchResult;
}

export function checkUserAlbum(expect: (arg0: boolean) => { (): any; new(): any; assertEqual: { (arg0: string | number | boolean): void; new(): any; }; }, testNum: any, album: { albumName: any; albumType: any; albumSubtype: any; coverUri: any; albumUri: string; count: any; }, expectedName: any, expectedCover: string) : void {
  console.info(`${testNum} checkUserAlbum album.albumName: ${album.albumName}, expectedName: ${expectedName}`);
  expect(album.albumType).assertEqual(albumType.USER);
  expect(album.albumSubtype).assertEqual(albumSubtype.USER_GENERIC);
  expect(album.albumName).assertEqual(expectedName);
  if (expectedCover === '') {
    expect(album.coverUri).assertEqual('');
  } else {
    expect(album.coverUri).assertEqual(expectedCover);
  }
  expect(album.albumUri !== '').assertEqual(true);
  expect(album.count).assertEqual(0);
}

export function checkSystemAlbum(expect: (arg0: boolean) => { (): any; new(): any; assertEqual: { (arg0: string | boolean): void; new(): any; }; }, testNum: any, album: { albumType: any; albumSubtype: any; albumName: any; albumUri: string; }, expectedSubType: any) : void {
  try {
    console.info(`${testNum} checkSystemAlbum expectedSubType: ${expectedSubType}`);
    expect(album.albumType).assertEqual(albumType.SYSTEM);
    expect(album.albumSubtype).assertEqual(expectedSubType);
    expect(album.albumName).assertEqual('');
    expect(album.albumUri !== '').assertEqual(true);
  } catch (error) {
    console.error(`Failed to delete all user albums! error: ${error}`);
    throw error;
  }
}

export async function startAbility(bundleName: string, abilityName: string) : Promise<void> {
  await delegator.executeShellCommand(`aa start -b ${bundleName} -a ${abilityName}`).then((result: any) => {
    console.info(`[picker] start abilityFinished: ${result}`);
  }).catch((err: any) => {
    console.error(`[picker] start abilityFailed: ${err}`);
  });
}

export async function stopAbility(bundleName: string) : Promise<void> {
  await delegator.executeShellCommand(`aa force-stop ${bundleName}`).then((result: any) => {
    console.info(`[picker] stop abilityFinished: ${result}`);
  }).catch((err: any) => {
    console.error(`[picker] stop abilityFailed: ${err}`);
  });
}

export async function getFileNameArray() {
  try{
    let listFileOption: ListFileOptions = {
      recursion: true,
      listNum: 0,
      filter: {
        suffix: [],
      }
    }
    listFileOption.filter.suffix = validImageExt.concat(validVideoExt);
    let nameArray = await fs.listFile(pathDir, listFileOption)
    return nameArray;
  } catch (err) {
    console.error('getFileNameArray failed: ' + err);
  }
}

export async function getAllFileNameArray() {
  try{
    let listFileOption: ListFileOptions = {
      recursion: true,
      listNum: 0,
      filter: {
        suffix: [],
      }
    }
    listFileOption.filter.suffix = validImageExt.concat(validVideoExt).concat(validVideoMpegExt).concat(validImageGifExt).concat(validImagePngExt);
    let nameArray = await fs.listFile(pathDir, listFileOption)
    return nameArray;
  } catch (err) {
    console.error('getFileNameArray failed: ' + err);
  }
}

export async function pushCreateAsset(names: Array<string>){
  console.info('pushCreateAsset start')
  let successNum = 0;
  try{
    console.info('pushCreateAsset name: ' + names)
    let photoType: photoAccessHelper.PhotoType;
    let resourceType: photoAccessHelper.ResourceType;
    let fileNames: string[] = await getFileNameArray();
    console.info('pushCreateAsset rawFiles number: ' + fileNames.length);
    for(let i = 0; i < fileNames.length; i++) {
      let fileName = fileNames[i];
      let filePath = pathDir + '/' + fileName;
      let fileUri = fileuri.getUriFromPath(filePath);
      let rawExtension: string = fileName.split('.')[1];
      for (let j = 0; j < names.length; j++) {
        let name = names[j];
        if (fileName.includes('error')) continue
        let extension: string = name.split('.')[1];
        if (rawExtension === extension) {
          let options: photoAccessHelper.CreateOptions = {
            title: name.split('.')[0]
          }
          if (validImageExt.includes(('.' + extension))) {
            photoType = photoAccessHelper.PhotoType.IMAGE;
            resourceType = photoAccessHelper.ResourceType.IMAGE_RESOURCE;
          } else {
            photoType = photoAccessHelper.PhotoType.VIDEO;
            resourceType = photoAccessHelper.ResourceType.VIDEO_RESOURCE;
          }
          let assetChangeRequest: photoAccessHelper.MediaAssetChangeRequest = photoAccessHelper.MediaAssetChangeRequest.createAssetRequest(globalThis.abilityContext, photoType, extension, options);
          assetChangeRequest.addResource(resourceType, fileUri);
          await phAccessHelper.applyChanges(assetChangeRequest);
          console.info(`pushCreateAsset ${name} create success`)
          successNum++;
        }
      }
    }
    console.info('Push_createAsset successfully fileNumber: ' + successNum);
  }catch(err){
    console.error('Push_createAsset push resource failed: ' + err)
    return;
  }
}

export async function pushCreateAssetSingle(names: Array<string>){
  console.info('pushCreateAssetSingle start')
  let successNum = 0;
  try{
    console.info('pushCreateAssetSingle name: ' + names)
    let photoType: photoAccessHelper.PhotoType;
    let resourceType: photoAccessHelper.ResourceType;
    let fileNames: string[] = await getAllFileNameArray();
    for (let i = 0; i < fileNames.length; i++) {
      let fileName = fileNames[i];
      let filePath = pathDir + '/' + fileName;
      let fileUri = fileuri.getUriFromPath(filePath);
      let rawExtension: string = fileName.split('.')[1];
      for (let j = 0; j < names.length; j++) {
        let name = names[j];
        if(fileName == '/01.jpg' || fileName == '/01.mp4') continue
        let extension: string = name.split('.')[1];
        if (rawExtension === extension) {
          let options: photoAccessHelper.CreateOptions = {
            title: name.split('.')[0]
          }
          if (validImageExt.concat(validImageGifExt).concat(validImagePngExt).includes(('.' + extension))) {
            photoType = photoAccessHelper.PhotoType.IMAGE;
            resourceType = photoAccessHelper.ResourceType.IMAGE_RESOURCE;
          } else {
            photoType = photoAccessHelper.PhotoType.VIDEO;
            resourceType = photoAccessHelper.ResourceType.VIDEO_RESOURCE;
          }
          let assetChangeRequest: photoAccessHelper.MediaAssetChangeRequest = photoAccessHelper.MediaAssetChangeRequest.createAssetRequest(globalThis.abilityContext, photoType, extension, options);
          assetChangeRequest.addResource(resourceType, fileUri);
          await phAccessHelper.applyChanges(assetChangeRequest);
          console.info(`pushCreateAssetSingle ${name} create success`)
          successNum++;
        }
      }
    }
    console.info('Push_createAsset successfully fileNumber: ' + successNum);
  }catch(err){
    console.error('Push_createAsset push resource failed: ' + err)
    return;
  }
}

export function createSandboxFileUri(extension: string) {
  let pathDir = globalThis.abilityContext.filesDir;
  let path = pathDir + '/test' + new Date().getTime() + '.' + extension;
  fs.openSync(path, fs.OpenMode.CREATE)
  return fileuri.getUriFromPath(path);
}

// 监控相机状态
export function registerCameraStatusChange(err: BusinessError, cameraStatusInfo: camera.CameraStatusInfo) {
  if (err !== undefined && err.code !== 0) {
    console.error(`registerCameraStatusChange :: cameraStatus with errorCode ==> ${err.code}`);
    return;
  }
  console.info(`registerCameraStatusChange :: camera ==> ${cameraStatusInfo.camera.cameraId}`);
  console.info(`registerCameraStatusChange :: status ==> ${cameraStatusInfo.status}`);
}
// 监控打开相机
export function onCameraStatusChange(cameraManager: camera.CameraManager): void {
  cameraManager.on('cameraStatus', this.registerCameraStatusChange);
}
// 监控关闭相机
export function offCameraStatusChange(cameraManager: camera.CameraManager): void {
  cameraManager?.off('cameraStatus', this.registerCameraStatusChange);
}
// 释放相机对象
export function releaseCamera(): void {
  if (previewOutput) {
    try {
      previewOutput.release();
      console.log(`releaseCamera :: release previewOutput success`);
    } catch (error) {
      console.log(`releaseCamera :: release previewOutput failed, error = ${error}`);
    } finally {
      previewOutput = undefined;
    }
  }
  if (photoOutput) {
    try {
      photoOutput.release();
      console.log(`releaseCamera :: release photoOutput success`);
    } catch (error) {
      console.log(`releaseCamera :: release photoOutput failed, error = ${error}`);
    } finally {
      photoOutput = undefined;
    }
  }
  if (photoSession) {
    try {
      photoSession.release();
      console.log(`releaseCamera :: release photoSession success`);
    } catch (error) {
      console.log(`releaseCamera :: release photoSession failed, error = ${error}`);
    } finally {
      photoSession = undefined;
    }
  }
  if (cameraInput) {
    try {
      cameraInput.close();
      console.log(`releaseCamera :: close cameraInput succes`);
    } catch (error) {
      console.log(`releaseCamera :: close cameraInput failed, error = ${error}`);
    } finally {
      cameraInput = undefined;
    }
  }
  offCameraStatusChange(cameraManager);
}

// 监控 previewOutPut 对象
function previewOutputCallBack() {
  previewOutput.on("frameStart", (): void => {
    console.log(`Camera :: Preview frame started`);
  });
  previewOutput.on("frameEnd", (): void => {
    console.log(`Camera :: Preview frame ended`);
  });
  previewOutput.on("error", (previewOutputError: BusinessError): void => {
    console.error(`Preview output error, code: ${previewOutputError.code}`);
  });
}

// 监控 photoOutput 对象, 并将Output出来的photoAsset进行保存或者丢弃
async function photoOutputCallBack(photoOutput: camera.PhotoOutput): Promise<void> {
  photoOutput.on('captureStartWithInfo', (err: BusinessError, captureStartInfo: camera.CaptureStartInfo) => {
    if (err !== undefined && err.code !== 0) {
      console.error(`Callback Error, errorCode: ${err.code}`);
      return;
    }
    console.info(`photo capture started, captureStartInfo : ${captureStartInfo}`);
  });
  photoOutput.on('frameShutter', (err: BusinessError, frameShutterInfo: camera.FrameShutterInfo) => {
    if (err !== undefined && err.code !== 0) {
      console.error(`Callback Error, errorCode: ${err.code}`);
      return;
    }
    console.info(`CaptureId for frame : ${frameShutterInfo.captureId}`);
    console.info(`Timestamp for frame : ${frameShutterInfo.timestamp}`);
  });
  photoOutput.on('captureEnd', (err: BusinessError, captureEndInfo: camera.CaptureEndInfo) => {
    if (err !== undefined && err.code !== 0) {
      console.error(`Callback Error, errorCode: ${err.code}`);
      return;
    }
    console.info(`photo capture end, captureId : ${captureEndInfo.captureId}`);
    console.info(`frameCount : ${captureEndInfo.frameCount}`);
  });
  photoOutput.on('photoAssetAvailable', async (err: BusinessError, photoAsset: photoAccessHelper.PhotoAsset) => {
    if (err) {
      console.info(`photoAssetAvailable error: ${JSON.stringify(err)}.`);
      return;
    }
    console.info('photoOutPutCallBack photoAssetAvailable');
    console.info('saveCameraPhoto | discardCameraPhoto start');
    try {
      let assetChangeRequest: photoAccessHelper.MediaAssetChangeRequest = new photoAccessHelper.MediaAssetChangeRequest(photoAsset);
      if (isSaveCameraPhoto) {
        assetChangeRequest.saveCameraPhoto();
      } else {
        assetChangeRequest.discardCameraPhoto();
      }
      await phAccessHelper.applyChanges(assetChangeRequest);
      console.info('apply saveCameraPhoto | discardCameraPhoto successfully');
    } catch (err) {
      console.error(`apply saveCameraPhoto | discardCameraPhoto failed with error: ${err.code}, ${err.message}`);
    }
  });
}

export async function initCamera(surfaceId: string) {
  try {
     // 先释放相机对象
    releaseCamera();
    // 获取相机管理实例
    cameraManager = camera.getCameraManager(context);
    if (cameraManager == undefined) {
      console.error(`Camera :: initCamera :: get CameraManager failed !`);
      return;
    }
    // 获取相机对象列表
    cameraDevices = cameraManager.getSupportedCameras();
    if (cameraDevices.length <= 0) {
      console.log(`Camera :: initCamera :: have no camera object to choose !`);
      return;
    }
    // 指定当前准备使用的相机对象：第一个
    let currentCameraDevice: camera.CameraDevice = cameraDevices[0];
    // 查看支持的拍照模式
    let sceneModesArray: Array<camera.SceneMode> = cameraManager.getSupportedSceneModes(currentCameraDevice);
    if (sceneModesArray == undefined || sceneModesArray.length <= 0) {
      console.log(`Camera :: initCamera :: camera have no sceneMode to select!`);
      return;
    }
    // 查看是否支持普通拍照模式，理论上，有摄像头的都支持
    let isSupportPhotoMode: boolean = sceneModesArray.indexOf(camera.SceneMode.NORMAL_PHOTO) >= 0;
    if (!isSupportPhotoMode) {
      console.log(`Camera :: initCamera :: camera not support NORMAL_PHOTO sceneMode !`);
      return;
    }
    // 获取相机输出能力对象
    cameraOutputCapability = cameraManager.getSupportedOutputCapability(currentCameraDevice, camera.SceneMode.NORMAL_PHOTO);
    if (cameraOutputCapability == undefined) {
      console.error(`Camera :: initCamera :: get cameraOutputCapability failed !`);
      return;
    }
    // 获取支持的预览配置信息
    let previewProfilesArray: Array<camera.Profile> = cameraOutputCapability.previewProfiles;
    if (previewProfilesArray == undefined || previewProfilesArray.length <= 0) {
      console.error(`Camera :: initCamera :: previewProfiles have no item to choose !`);
      return;
    }
    // 创建预览输出流,预览配置信息为第一个
    previewOutput = cameraManager.createPreviewOutput(previewProfilesArray[0], surfaceId);
    if (previewOutput == undefined) {
      console.error(`Camera :: initCamera :: create previewOutput failed !`);
      return;
    }
    // 监听预览对象的状态
    previewOutputCallBack();
    // 获取支持的拍照信息
    let photoProfilesArray: Array<camera.Profile> = cameraOutputCapability.photoProfiles;
    if (photoProfilesArray == undefined || photoProfilesArray.length <= 0) {
      console.error(`Camera :: initCamera :: photoProfiles have no item to choose !`);
      return;
    }
    // 创建photoOutput输出对象, 配置为默认第一个
    photoOutput = cameraManager.createPhotoOutput(photoProfilesArray[0]);
    if (photoOutput == undefined) {
      console.error(`Camera :: initCamera :: create photoOutput failed !`);
      return;
    }
    // 创建相机输入对象
    cameraInput = cameraManager.createCameraInput(currentCameraDevice);
    // 打开相机
    await cameraInput.open();
    // 监听相机对象状态
    onCameraStatusChange(cameraManager);
    // 会话流程
    await sessionFlow(camera.SceneMode.NORMAL_PHOTO);
  } catch (error) {
    console.error(`Camera :: initCamera failed, message = ${error}`)
    return;
  }
}

// 会话流程
async function sessionFlow(mode: camera.SceneMode) {
  try {
    // 创建会话对象
    photoSession = cameraManager.createSession(camera.SceneMode.NORMAL_PHOTO);
    // 开始会话
    photoSession.beginConfig();
    // 将各种对象添加进会话中
    photoSession.addInput(cameraInput);
    photoSession.addOutput(previewOutput);
    photoSession.addOutput(photoOutput);
    await photoOutputCallBack(photoOutput);
    await photoSession.commitConfig();
  } catch (error) {
    console.error(`Camera :: sessionFlow failed, message = ${error}`)
    return;
  }
}

// 拍照
export async function takePicture() {
  try {
    let photoCaptureSetting: camera.PhotoCaptureSetting = {
      quality: camera.QualityLevel.QUALITY_LEVEL_HIGH,
      rotation: camera.ImageRotation.ROTATION_0
    }
    // 使用当前拍照设置进行拍照
    photoOutput.capture(photoCaptureSetting, (err: BusinessError) => {
      if (err) {
        console.error(`Failed to capture the photo ${err.message}`);
        return;
      }
      console.info('Callback invoked to indicate the photo capture request success.');
    });
    photoSession.stop();
    releaseCamera();
  } catch (error: BusinessError) {
    console.error(`takePicture failed, message = ${error}`);
  }
}

export {
  photoType,
  photoKeys,
  albumKeys,
  albumType,
  albumSubtype,
  isSaveCameraPhoto
};