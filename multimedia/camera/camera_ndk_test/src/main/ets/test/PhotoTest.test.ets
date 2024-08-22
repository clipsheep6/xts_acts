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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import cameraObj from 'libentry.so'
import image from '@ohos.multimedia.image';
import { Camera_PreconfigType, Camera_PreconfigRatio } from './Constants';
import abilityAccessCtrl from '@ohos.abilityAccessCtrl';
import bundleManager from '@ohos.bundle.bundleManager';
import account from '@ohos.account.osAccount';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import { Camera_FlashMode, Camera_ExposureMode ,Camera_FocusMode,Camera_VideoStabilizationMode,
  Camera_PreconfigType, Camera_PreconfigRatio, Camera_MediaType } from './Constants';
import MediaUtils from './MediaUtils';
import media from '@ohos.multimedia.media';
import { BusinessError } from '@ohos.base';

const TAG = "CAMERA_LOGTAG_JS ";
const CAMERA_OK = 0;
const CAMERA_INVALID_ARGUMENT = 7400101; // 参数错误
const CAMERA_SESSION_NOT_CONFIG = 7400103;
let receiver: image.ImageReceiver;
let mPhotoSurface: string;
interface PhotoSettings {
  quality: number, // 照片质量
  rotation: number, // 照片方向
  mirror: boolean, // 是否镜像
  latitude: number, // 纬度坐标
  longitude: number, // 经度坐标
  altitude: number // 高度坐标
};

let mediaUtil = MediaUtils.getInstance();
let videoSurfaceId: string;  // 这个变量应在使用前被赋值，从media.AVRecorder获取,用于创建录像输出实例
let videoRecorder: media.AVRecorder;
// 配置参数以实际硬件设备支持的范围为准
let videoConfig: media.AVRecorderConfig = {
  audioSourceType : media.AudioSourceType.AUDIO_SOURCE_TYPE_MIC,
  videoSourceType : media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES,
  profile : {
    audioBitrate : 48000,
    audioChannels : 2,
    audioCodec : media.CodecMimeType.AUDIO_AAC,
    audioSampleRate : 48000,
    fileFormat : media.ContainerFormatType.CFT_MPEG_4,
    videoBitrate : 512000,
    videoCodec : media.CodecMimeType.VIDEO_AVC,
    videoFrameWidth : 640,
    videoFrameHeight : 480,
    videoFrameRate : 30
    },
  url : 'fd://', // 文件需先由调用者创建，赋予读写权限，将文件fd传给此参数，eg.fd://45
  rotation : 0, // 合理值0、90、180、270，非合理值prepare接口将报错
}

async function getVideoSurfaceId() {
  let mContext = AppStorage.get('context') as Context;
  console.info(TAG + 'start getVideoSurfaceID ');
  try {
    videoRecorder = await media.createAVRecorder();
  } catch (error) {
    let err = error as BusinessError;
    console.error(`createAVRecorder call failed error code: ${err.code}`);
  }
  if (videoRecorder === undefined) {
    console.error(`createAVRecorder call failed`);
  }
  console.info(TAG + 'createAVRecorder videoRecorder : ' + JSON.stringify(videoRecorder));
  videoConfig.url = `fd://${await mediaUtil.createAndGetUriVideoNew(Camera_MediaType.VIDEO, mContext)}`;
  console.info(TAG + 'getVideoSurfaceID videoConfig.url : ' + JSON.stringify(videoConfig.url));
  try {
    await videoRecorder.prepare(videoConfig);
    console.info(TAG + 'getVideoSurfaceID  videoRecorder.prepare');
  } catch (err) {
    console.error(TAG + 'prepare failed with err: ' + err);
  }
  videoSurfaceId = await videoRecorder.getInputSurface();
  console.info(TAG + 'getVideoSurfaceID videoSurfaceId : ' + JSON.stringify(videoSurfaceId));
}

function setSceneMode(index_sceneMode: number) {
  let ret = cameraObj.oHCameraManagerSetSceneMode(index_sceneMode);
  if (ret != 0) {
    console.info(TAG + "setSceneMode FAILED");
    expect().assertFail();
  }
  if (index_sceneMode == 0) {
    console.info(TAG + "set sceneMode: NORMAL_PHOTO");
  } else if (index_sceneMode == 1) {
    console.info(TAG + "set sceneMode: NORMAL_VIDEO");
  } else if (index_sceneMode == 2) {
    console.info(TAG + "set sceneMode: SECURE_PHOTO");
  }
}

async function getPhotoReceiverSurface() {
  console.log(TAG + 'createImageReceiver start.');
  receiver = image.createImageReceiver({ width: 640, height: 480 }, 4, 8);
  if (receiver !== undefined) {
    console.log(TAG + 'createImageReceiver successfully');
    mPhotoSurface = await receiver.getReceivingSurfaceId();
    console.log(TAG + 'Photo received id: ' + JSON.stringify(mPhotoSurface));
  } else {
    console.log(TAG + 'createImageReceiver failed');
  }
}

function getCameraManagerInstance() {
  console.info(TAG + 'mSurfaceId : ' + mPhotoSurface);
  let ret = cameraObj.initCamera(mPhotoSurface, 0);
  console.info(TAG + 'initCamera : ' + ret);
  if (ret != 0) {
    console.info(TAG + "getCameraManager FAILED");
    expect().assertFail();
  }
}

function releaseAll() {
  let ret = cameraObj.callDeconstructFunction();
  console.info(TAG + 'releaseAll: ' + ret);
  if (ret != 0) {
    console.info(TAG + "releaseAll FAILED");
    expect().assertFail();
  }
}

function getSupportedFrameRates() {
  let ret = cameraObj.oHPreviewOutputGetSupportedFrameRates(0);
  if (ret.errorCode != 0) {
    console.info(TAG + "getSupportedFrameRates FAILED");
    expect().assertFail();
  }
  return ret.frameRatesSize;
}

function getActiveFrameRate() {
  let ret = cameraObj.oHPreviewOutputGetActiveFrameRate(0);
  if (ret.errorCode != 0) {
    console.info(TAG + "getActiveFrameRate FAILED");
    expect().assertFail();
  }
  return ret;
}

function getSupportedCamerasInstance() {
  let cameraInfo = cameraObj.getSupportedCameras();
  if (isEmpty(cameraInfo)) {
    console.info(TAG + "getSupportedCamerasInstance FAILED");
    expect().assertFail();
  }
}

function createVideoOutput() {
  let ret = cameraObj.createVideoOutput(videoSurfaceId);
  if (ret != 0) {
    console.info(TAG + "createVideoOutput FAILED");
    expect().assertFail();
  }
}

function getVideoOutputSupportedFrameRates() {
  let ret = cameraObj.oHVideoOutputGetSupportedFrameRates(0);
  if (ret.errorCode != 0) {
    console.info(TAG + "getSupportedFrameRates FAILED");
    expect().assertFail();
  }
  return ret.videoFrameRatesSize;
}

function getVideoOutputActiveFrameRate() {
  let ret = cameraObj.oHVideoOutputGetActiveFrameRate(0);
  if (ret.errorCode != 0) {
    console.info(TAG + "getActiveFrameRate FAILED");
    expect().assertFail();
  }
  return ret;
}

function getActiveColorSpace() {
  let cameraInfo = cameraObj.oHCaptureSessionGetActiveColorSpace(0);
  if (cameraInfo.errorCode != 0) {
    console.info(TAG + "getActiveColorSpace FAILED");
    expect().assertFail();
  }
  return cameraInfo.activeColorSpace;
}

function getSupportedColorSpaces() {
  let mPhotoOutput = cameraObj.oHCaptureSessionGetSupportedColorSpaces(0);
  if (mPhotoOutput.errorCode != 0) {
    console.info(TAG + "getSupportedColorSpaces FAILED");
    expect().assertFail();
  }
  return mPhotoOutput.colorSpacesSize;
}

function createCaptureSession() {
  console.log(TAG + "createCaptureSession start.");
  let ret = cameraObj.createSession();
  if (ret != 0) {
    console.log(TAG + "createCaptureSession FAILED");
    expect().assertFail();
  }
  let registerCallback = cameraObj.oHCaptureSessionRegisterCallback(0);
  if (registerCallback != 0) {
    console.log(TAG + "SessionRegisterCallback FAILED");
    expect().assertFail();
  }
}

function sessionBeginConfig() {
  let ret = cameraObj.sessionBegin();
  if (ret != 0) {
    console.info(TAG + "sessionBeginConfig FAILED:" + ret);
    expect().assertFail();
  }
}

function addVideoOutput() {
  let canAddVideoOutput = cameraObj.oHCaptureSessionCanAddVideoOutput(0);
  if (canAddVideoOutput.errorCode != 0) {
    console.log(TAG + "canAddVideoOutput FAILED" + canAddVideoOutput.errorCode);
    expect().assertFail();
  }
  console.info(TAG + "canAddVideoOutput: " + canAddVideoOutput.isAddVideoOutput);
  if (!canAddVideoOutput.isAddVideoOutput) {
    console.log(TAG + "addVideoOutput FAILED");
  } else {
    let addVideoOutput = cameraObj.sessionAddVideoOutput();
    if (addVideoOutput != 0) {
      console.log(TAG + "addVideoOutput FAILED" + addVideoOutput);
      expect().assertFail();
    }
  }
}

function createCameraInput() {
  console.log(TAG + "createCameraInput start.");
  let ret = cameraObj.createCameraInput();
  if (ret != 0) {
    console.log(TAG + "createCameraInput FAILED");
    expect().assertFail();
  }
  cameraObj.cameraInputOpen();
}

function cameraInputOpen() {
  console.log(TAG + "cameraInputOpen start.");
  let ret = cameraObj.cameraInputOpen();
  if (ret != 0) {
    console.log(TAG + "cameraInputOpen FAILED");
    expect().assertFail();
  }
}

function getSupportedSceneModes() {
  let supportedSceneModes = cameraObj.oHCameraManagerGetSupportedSceneModes(0);
  if (supportedSceneModes.errorCode != 0) {
    console.info(TAG + "getSupportedSceneModes FAILED");
    expect().assertFail();
  }
  return supportedSceneModes.sceneModesSize;
}

function getSupportedCameraOutputCapability() {
  let cameraOutputCapability = cameraObj.getSupportedOutputCapability();
  console.info(TAG + 'cameraOutputCapability[0] = ' + cameraOutputCapability.previewProfilesSize);
  console.info(TAG + 'cameraOutputCapability[1] = ' + cameraOutputCapability.photoProfilesSize);
  console.info(TAG + 'cameraOutputCapability[2] = ' + cameraOutputCapability.videoProfilesSize);
  console.info(TAG + 'cameraOutputCapability[3] = ' + cameraOutputCapability.metadataProfilesSize);
  return true;
}

function setSessionMode() {
  let ret = cameraObj.oHCaptureSessionSetSessionMode(0);
  if (ret != 0) {
    console.info(TAG + "setSessionMode FAILED");
    expect().assertFail();
  }
}

function startSession() {
  let begin = cameraObj.sessionBegin();
  if (begin != 0) {
    console.info(TAG + "beginConfig FAILED");
    expect().assertFail();
  }

  let canAddInput = cameraObj.oHCaptureSessionCanAddInput(0);
  if (canAddInput.errorCode != 0) {
    console.info(TAG + "CanAddInput FAILED");
    expect().assertFail();
  }
  console.info(TAG + "canAddInput: " + canAddInput.isAddInput);
  
  if (canAddInput.isAddInput) {
    let addInput = cameraObj.sessionAddInput();
    if (addInput != 0) {
      console.info(TAG + "addInput FAILED");
      expect().assertFail();
    }
  } else {
    expect().assertFail();
  }

  let canAddPreviewOutput = cameraObj.oHCaptureSessionCanAddPreviewOutput(0);
  if (canAddPreviewOutput.errorCode != 0) {
    console.info(TAG + "CanAddPreviewOutput FAILED");
    expect().assertFail();
  }
  console.info(TAG + "canAddPreviewOutput: " + canAddPreviewOutput.isAddPreviewOutput);

  if (canAddPreviewOutput.isAddPreviewOutput) {
    let addPreviewOutput = cameraObj.sessionAddPreviewOutput();
    if (addPreviewOutput != 0) {
      console.info(TAG + "AddPreviewOutput FAILED");
      expect().assertFail();
    }
  } else {
    expect().assertFail();
  }

  // let commitConfig = cameraObj.sessionCommitConfig();
  // if (commitConfig != 0) {
  //   console.info(TAG + "commitConfig FAILED");
  //   expect().assertFail();
  // }

  // let start = cameraObj.sessionStart();
  // if (start != 0) {
  //   console.info(TAG + "start FAILED");
  //   expect().assertFail();
  // }
}

function sessionStart() {
  let commitConfig = cameraObj.sessionCommitConfig();
  if (commitConfig != 0) {
    console.info(TAG + "commitConfig FAILED");
    expect().assertFail();
  }

  let start = cameraObj.sessionStart();
  if (start != 0) {
    console.info(TAG + "start FAILED");
    expect().assertFail();
  }
}

function sessionCommitConfig() {
  let commitConfig = cameraObj.sessionCommitConfig();
  if (commitConfig != 0) {
    console.info(TAG + "commitConfig FAILED");
    expect().assertFail();
  }
}

function addPhotoOutput() {
  let canAddPhotoOutput = cameraObj.oHCaptureSessionCanAddPhotoOutput(0);
  if (canAddPhotoOutput.errorCode != 0) {
    console.log(TAG + "canAddPhotoOutput FAILED" + canAddPhotoOutput.errorCode);
    expect().assertFail();
  }
  console.info(TAG + "canAddPhotoOutput: " + canAddPhotoOutput.isAddPhotoOutput);
  if (!canAddPhotoOutput.isAddPhotoOutput) {
    console.log(TAG + "addPhotoOutput FAILED");
  } else {
    let addPhotoOutput = cameraObj.sessionAddPhotoOutput();
    if (addPhotoOutput != 0) {
      console.log(TAG + "addPhotoOutput FAILED" + addPhotoOutput);
      expect().assertFail();
    }
  }
}

function sessionStop() {
  let ret = cameraObj.sessionStop();
  if (ret != 0) {
    console.info(TAG + "sessionStop FAILED");
    expect().assertFail();
  }
}
function videoOutputFrameRate() {
  getCameraManagerInstance();
  createCaptureSession();
  getSupportedCamerasInstance();
  getSupportedCameraOutputCapability();
  setSceneMode(1);
  setSessionMode();
  createPreviewOutput();
  createCameraInput();
  startSession();
  createPhotoOutput();
  addPhotoOutput();
  createVideoOutput();
  addVideoOutput();
  sessionCommitConfig();
}

function captureSessionstart() {
  getCameraManagerInstance();
  getSupportedCamerasInstance();
  createCaptureSession();
  getSupportedCameraOutputCapability();
  createPreviewOutput();
  createCameraInput();
  startSession();
}

function createPreviewOutput() {
  let ret = cameraObj.createPreviewOutput();
  if (ret != 0) {
    console.info(TAG + "createPreviewOutput FAILED");
    expect().assertFail();
  }
}

function createPhotoOutput() {
  let mPhotoOutput = cameraObj.createPhotoOutput(mPhotoSurface);
  if (mPhotoOutput != 0) {
    console.info(TAG + "mPhotoOutput FAILED");
    expect().assertFail();
  }
}

function addPreviewOutput() {
  let ret = cameraObj.sessionAddPreviewOutput();
  if (ret != 0) {
    console.log(TAG + "addPreviewOutput FAILED" + ret);
    expect().assertFail();
  }
}

async function getPermissions() {
  console.info('getPermission start');
  type MyPermissions = "ohos.permission.CAMERA" | "ohos.permission.READ_MEDIA" | "ohos.permission.WRITE_MEDIA"| "ohos.permission.MICROPHONE";
  let list: MyPermissions[] = ['ohos.permission.CAMERA', 'ohos.permission.READ_MEDIA', 'ohos.permission.WRITE_MEDIA', 'ohos.permission.MICROPHONE'];
  try {
    let userId: number = await account.getAccountManager().getOsAccountLocalId();
    let applicationFlags: number = bundleManager.ApplicationFlag.GET_APPLICATION_INFO_DEFAULT;
    let applicationInfo: bundleManager.ApplicationInfo = await bundleManager.getApplicationInfoSync('com.example.camerandk', applicationFlags, userId);
    let tokenId: number = applicationInfo.accessTokenId;
    for (let index = 0; index < list.length; index++) {
      await abilityAccessCtrl.createAtManager().grantUserGrantedPermission(tokenId, list[index], 1);
    }
  } catch (err) {
    console.info(`getPermission error ${JSON.stringify(err)}`);
  }
  console.info('getPermission end');
};

function isEmpty(data: cameraObj.cameraInfo | number) {
  if (data == null || data == undefined) {
    return true;
  }
  return false;
}

function cameraManagerCreatePhotoOutputUsedInPreconfig() {
  captureSessionPreconfig()
  let ret = cameraObj.oHCameraManagerCreatePhotoOutputUsedInPreconfig(mPhotoSurface, 0);
  if (ret != 0) {
    console.info(TAG + "oHCameraManagerCreatePhotoOutputUsedInPreconfig FAILED");
    expect().assertFail();
  }
}

function captureSessionPreconfig() {
  getCameraManagerInstance();
  getSupportedCamerasInstance();
  createCaptureSession();
  getSupportedCameraOutputCapability();
  createCameraInput();
  let ret = cameraObj.oHCaptureSessionCanPreconfig(Camera_PreconfigType.PRECONFIG_720P, 0);
  if (!ret.canPreconfig) {
    expect(ret.canPreconfig).assertEqual(false);
  } else {
    let ret = cameraObj.oHCaptureSessionPreconfig(Camera_PreconfigType.PRECONFIG_720P, 0);
    console.log(TAG+"testOHCaptureSessionPreconfig0100:"+ret)
    expect(ret).assertEqual(CAMERA_OK);
  }
}
export default function PhotoTest() {
  describe('PhotoTest', () => {
    console.info(TAG + '----------PhotoTest--------------');
    beforeAll(async () => {
      await getPermissions();
      await getPhotoReceiverSurface();
      await getVideoSurfaceId() 
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(0);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      startSession();
    })
    afterEach(() => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(() => {
    })

    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputRegisterCaptureStartWithInfoCallback0100
     * @tc.name       : testOHPhotoOutputRegisterCaptureStartWithInfoCallback0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterCaptureStartWithInfoCallback0100', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputRegisterCaptureStartWithInfoCallback(0);
      console.log(TAG+"testOHPhotoOutputRegisterCaptureStartWithInfoCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputRegisterCaptureStartWithInfoCallback0200
     * @tc.name       : testOHPhotoOutputRegisterCaptureStartWithInfoCallback0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterCaptureStartWithInfoCallback0200', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputRegisterCaptureStartWithInfoCallback(1);
      console.log(TAG+"testOHPhotoOutputRegisterCaptureStartWithInfoCallback0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputRegisterCaptureStartWithInfoCallback0300
     * @tc.name       : testOHPhotoOutputRegisterCaptureStartWithInfoCallback0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterCaptureStartWithInfoCallback0300', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputRegisterCaptureStartWithInfoCallback(2);
      console.log(TAG+"testOHPhotoOutputRegisterCaptureStartWithInfoCallback0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputUnregisterCaptureStartWithInfoCallback0100
     * @tc.name       : testOHPhotoOutputUnregisterCaptureStartWithInfoCallback0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterCaptureStartWithInfoCallback0100', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputUnregisterCaptureStartWithInfoCallback(0);
      console.log(TAG+"testOHPhotoOutputUnregisterCaptureStartWithInfoCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputUnregisterCaptureStartWithInfoCallback0200
     * @tc.name       : testOHPhotoOutputUnregisterCaptureStartWithInfoCallback0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterCaptureStartWithInfoCallback0200', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputUnregisterCaptureStartWithInfoCallback(1);
      console.log(TAG+"testOHPhotoOutputUnregisterCaptureStartWithInfoCallback0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputUnregisterCaptureStartWithInfoCallback0300
     * @tc.name       : testOHPhotoOutputUnregisterCaptureStartWithInfoCallback0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterCaptureStartWithInfoCallback0300', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputUnregisterCaptureStartWithInfoCallback(2);
      console.log(TAG+"testOHPhotoOutputUnregisterCaptureStartWithInfoCallback0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputRegisterCaptureEndCallback0100
     * @tc.name       : testOHPhotoOutputRegisterCaptureEndCallback0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterCaptureEndCallback0100', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputRegisterCaptureEndCallback(0);
      console.log(TAG+"testOHPhotoOutputRegisterCaptureEndCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputRegisterCaptureEndCallback0200
     * @tc.name       : testOHPhotoOutputRegisterCaptureEndCallback0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterCaptureEndCallback0200', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputRegisterCaptureEndCallback(1);
      console.log(TAG+"testOHPhotoOutputRegisterCaptureEndCallback0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputRegisterCaptureEndCallback0300
     * @tc.name       : testOHPhotoOutputRegisterCaptureEndCallback0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterCaptureEndCallback0300', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputRegisterCaptureEndCallback(2);
      console.log(TAG+"testOHPhotoOutputRegisterCaptureEndCallback0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputUnregisterCaptureEndCallback0100
     * @tc.name       : testOHPhotoOutputUnregisterCaptureEndCallback0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterCaptureEndCallback0100', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputUnregisterCaptureEndCallback(0);
      console.log(TAG+"testOHPhotoOutputUnregisterCaptureEndCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputUnregisterCaptureEndCallback0200
     * @tc.name       : testOHPhotoOutputUnregisterCaptureEndCallback0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterCaptureEndCallback0200', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputUnregisterCaptureEndCallback(1);
      console.log(TAG+"testOHPhotoOutputUnregisterCaptureEndCallback0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputUnregisterCaptureEndCallback0300
     * @tc.name       : testOHPhotoOutputUnregisterCaptureEndCallback0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterCaptureEndCallback0300', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputUnregisterCaptureEndCallback(2);
      console.log(TAG+"testOHPhotoOutputUnregisterCaptureEndCallback0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputRegisterFrameShutterEndCallback0100
     * @tc.name       : testOHPhotoOutputRegisterFrameShutterEndCallback0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterFrameShutterEndCallback0100', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputRegisterFrameShutterEndCallback(0);
      console.log(TAG+"testOHPhotoOutputRegisterFrameShutterEndCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputRegisterFrameShutterEndCallback0200
     * @tc.name       : testOHPhotoOutputRegisterFrameShutterEndCallback0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterFrameShutterEndCallback0200', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputRegisterFrameShutterEndCallback(1);
      console.log(TAG+"testOHPhotoOutputRegisterFrameShutterEndCallback0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputRegisterFrameShutterEndCallback0300
     * @tc.name       : testOHPhotoOutputRegisterFrameShutterEndCallback0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterFrameShutterEndCallback0300', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputRegisterFrameShutterEndCallback(2);
      console.log(TAG+"testOHPhotoOutputRegisterFrameShutterEndCallback0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputUnregisterFrameShutterEndCallback0100
     * @tc.name       : testOHPhotoOutputUnregisterFrameShutterEndCallback0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterFrameShutterEndCallback0100', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputUnregisterFrameShutterEndCallback(0);
      console.log(TAG+"testOHPhotoOutputUnregisterFrameShutterEndCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputUnregisterFrameShutterEndCallback0100
     * @tc.name       : testOHPhotoOutputUnregisterFrameShutterEndCallback0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterFrameShutterEndCallback0100', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputUnregisterFrameShutterEndCallback(1);
      console.log(TAG+"testOHPhotoOutputUnregisterFrameShutterEndCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputUnregisterFrameShutterEndCallback0300
     * @tc.name       : testOHPhotoOutputUnregisterFrameShutterEndCallback0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterFrameShutterEndCallback0300', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputUnregisterFrameShutterEndCallback(2);
      console.log(TAG+"testOHPhotoOutputUnregisterFrameShutterEndCallback0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputRegisterCaptureReadyCallback0100
     * @tc.name       : testOHPhotoOutputRegisterCaptureReadyCallback0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterCaptureReadyCallback0100', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputRegisterCaptureReadyCallback(0);
      console.log(TAG+"testOHPhotoOutputRegisterCaptureReadyCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputRegisterCaptureReadyCallback0200
     * @tc.name       : testOHPhotoOutputRegisterCaptureReadyCallback0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterCaptureReadyCallback0200', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputRegisterCaptureReadyCallback(1);
      console.log(TAG+"testOHPhotoOutputRegisterCaptureReadyCallback0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputRegisterCaptureReadyCallback0300
     * @tc.name       : testOHPhotoOutputRegisterCaptureReadyCallback0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterCaptureReadyCallback0300', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputRegisterCaptureReadyCallback(2);
      console.log(TAG+"testOHPhotoOutputRegisterCaptureReadyCallback0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputUnregisterCaptureReadyCallback0100
     * @tc.name       : testOHPhotoOutputUnregisterCaptureReadyCallback0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterCaptureReadyCallback0100', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputUnregisterCaptureReadyCallback(0);
      console.log(TAG+"testOHPhotoOutputUnregisterCaptureReadyCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputUnregisterCaptureReadyCallback0200
     * @tc.name       : testOHPhotoOutputUnregisterCaptureReadyCallback0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterCaptureReadyCallback0200', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputUnregisterCaptureReadyCallback(1);
      console.log(TAG+"testOHPhotoOutputUnregisterCaptureReadyCallback0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputUnregisterCaptureReadyCallback0300
     * @tc.name       : testOHPhotoOutputUnregisterCaptureReadyCallback0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterCaptureReadyCallback0300', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputUnregisterCaptureReadyCallback(2);
      console.log(TAG+"testOHPhotoOutputUnregisterCaptureReadyCallback0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputRegisterEstimatedCaptureDurationCallback0100
     * @tc.name       : testOHPhotoOutputRegisterEstimatedCaptureDurationCallback0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterEstimatedCaptureDurationCallback0100', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputRegisterEstimatedCaptureDurationCallback(0);
      console.log(TAG+"testOHPhotoOutputRegisterEstimatedCaptureDurationCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputRegisterEstimatedCaptureDurationCallback0100
     * @tc.name       : testOHPhotoOutputRegisterEstimatedCaptureDurationCallback0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterEstimatedCaptureDurationCallback0100', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputRegisterEstimatedCaptureDurationCallback(1);
      console.log(TAG+"testOHPhotoOutputRegisterEstimatedCaptureDurationCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputRegisterEstimatedCaptureDurationCallback0300
     * @tc.name       : testOHPhotoOutputRegisterEstimatedCaptureDurationCallback0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterEstimatedCaptureDurationCallback0300', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputRegisterEstimatedCaptureDurationCallback(2);
      console.log(TAG+"testOHPhotoOutputRegisterEstimatedCaptureDurationCallback0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputUnregisterEstimatedCaptureDurationCallback0100
     * @tc.name       : testOHPhotoOutputUnregisterEstimatedCaptureDurationCallback0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterEstimatedCaptureDurationCallback0100', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputUnregisterEstimatedCaptureDurationCallback(0);
      console.log(TAG+"testOHPhotoOutputUnregisterEstimatedCaptureDurationCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputUnregisterEstimatedCaptureDurationCallback0200
     * @tc.name       : testOHPhotoOutputUnregisterEstimatedCaptureDurationCallback0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterEstimatedCaptureDurationCallback0200', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputUnregisterEstimatedCaptureDurationCallback(1);
      console.log(TAG+"testOHPhotoOutputUnregisterEstimatedCaptureDurationCallback0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputUnregisterEstimatedCaptureDurationCallback0300
     * @tc.name       : testOHPhotoOutputUnregisterEstimatedCaptureDurationCallback0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterEstimatedCaptureDurationCallback0300', 0, () => {
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputUnregisterEstimatedCaptureDurationCallback(2);
      console.log(TAG+"testOHPhotoOutputUnregisterEstimatedCaptureDurationCallback0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHVideoOutputGetSupportedFrameRates0100
     * @tc.name       : testOHVideoOutputGetSupportedFrameRates0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputGetSupportedFrameRates0100', 0, () => {
      videoOutputFrameRate();
      let ret = cameraObj.oHVideoOutputGetSupportedFrameRates(0).errorCode;
      console.log(TAG+"testOHVideoOutputGetSupportedFrameRates0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHVideoOutputGetSupportedFrameRates0200
     * @tc.name       : testOHVideoOutputGetSupportedFrameRates0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputGetSupportedFrameRates0200', 0, () => {
      videoOutputFrameRate();
      let ret = cameraObj.oHVideoOutputGetSupportedFrameRates(1).errorCode;
      console.log(TAG+"testOHVideoOutputGetSupportedFrameRates0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHVideoOutputGetSupportedFrameRates0300
     * @tc.name       : testOHVideoOutputGetSupportedFrameRates0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputGetSupportedFrameRates0300', 0, () => {
      videoOutputFrameRate();
      let ret = cameraObj.oHVideoOutputGetSupportedFrameRates(2).errorCode;
      console.log(TAG+"testOHVideoOutputGetSupportedFrameRates0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHVideoOutputGetActiveFrameRate0100
     * @tc.name       : testOHVideoOutputGetActiveFrameRate0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputGetActiveFrameRate0100', 0, () => {
      videoOutputFrameRate();
      if (getVideoOutputSupportedFrameRates() != 0) {
        let ret = cameraObj.oHVideoOutputGetActiveFrameRate(0).errorCode;
        console.log(TAG+"testOHVideoOutputGetActiveFrameRate0100:"+ret);
        expect(ret).assertEqual(CAMERA_OK);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHVideoOutputGetActiveFrameRate0200
     * @tc.name       : testOHVideoOutputGetActiveFrameRate0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputGetActiveFrameRate0200', 0, () => {
      videoOutputFrameRate();
      getVideoOutputSupportedFrameRates();
      let ret = cameraObj.oHVideoOutputGetActiveFrameRate(1).errorCode;
      console.log(TAG+"testOHVideoOutputGetActiveFrameRate0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHVideoOutputGetActiveFrameRate0300
     * @tc.name       : testOHVideoOutputGetActiveFrameRate0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputGetActiveFrameRate0300', 0, () => {
      videoOutputFrameRate();
      getVideoOutputSupportedFrameRates();
      let ret = cameraObj.oHVideoOutputGetActiveFrameRate(2).errorCode;
      console.log(TAG+"testOHVideoOutputGetActiveFrameRate0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHVideoOutputSetFrameRate0100
     * @tc.name       : testOHVideoOutputSetFrameRate0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputSetFrameRate0100', 0, () => {
      videoOutputFrameRate();
      if (getVideoOutputSupportedFrameRates() != 0) {
        if (getVideoOutputActiveFrameRate().min != 0 && getVideoOutputActiveFrameRate().max != 0) {
          let ret = cameraObj.oHVideoOutputSetFrameRate(0);
          console.log(TAG+"testOHVideoOutputSetFrameRate0100:"+ret);
          expect(ret).assertEqual(CAMERA_OK);
        }
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHVideoOutputSetFrameRate0200
     * @tc.name       : testOHVideoOutputSetFrameRate0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputSetFrameRate0200', 0, () => {
      videoOutputFrameRate();
      getVideoOutputSupportedFrameRates();
      getVideoOutputActiveFrameRate();
      let ret = cameraObj.oHVideoOutputSetFrameRate(1)
      console.log(TAG+"testOHVideoOutputSetFrameRate0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHVideoOutputSetFrameRate0300
     * @tc.name       : testOHVideoOutputSetFrameRate0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputSetFrameRate0300', 0, () => {
      videoOutputFrameRate();
      if (getVideoOutputSupportedFrameRates() == 0) {
        if (getVideoOutputActiveFrameRate().min != 0 && getVideoOutputActiveFrameRate().max != 0) {
          let ret = cameraObj.oHVideoOutputSetFrameRate(0)
          console.log(TAG+"testOHVideoOutputSetFrameRate0300:"+ret);
          expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
        }
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHVideoOutputSetFrameRate0400
     * @tc.name       : testOHVideoOutputSetFrameRate0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputSetFrameRate0400', 0, () => {
      videoOutputFrameRate();
      if (getVideoOutputSupportedFrameRates() != 0) {
        if (getVideoOutputActiveFrameRate().min != 0 && getVideoOutputActiveFrameRate().max != 0) {
          let ret = cameraObj.oHVideoOutputSetFrameRate(2)
          console.log(TAG+"testOHVideoOutputSetFrameRate0400:"+ret);
          expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
        }
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPreviewOutputGetSupportedFrameRates0100
     * @tc.name       : testOHPreviewOutputGetSupportedFrameRates0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputGetSupportedFrameRates0100', 0, () => {
      getSupportedCameraOutputCapability();
      createPreviewOutput();
      let ret = cameraObj.oHPreviewOutputGetSupportedFrameRates(0).errorCode;
      console.log(TAG+"testOHPreviewOutputGetSupportedFrameRates0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPreviewOutputGetSupportedFrameRates0200
     * @tc.name       : testOHPreviewOutputGetSupportedFrameRates0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputGetSupportedFrameRates0200', 0, () => {
      getSupportedCameraOutputCapability();
      createPreviewOutput();
      let ret = cameraObj.oHPreviewOutputGetSupportedFrameRates(1).errorCode;
      console.log(TAG+"testOHPreviewOutputGetSupportedFrameRates0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPreviewOutputGetSupportedFrameRates0300
     * @tc.name       : testOHPreviewOutputGetSupportedFrameRates0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputGetSupportedFrameRates0300', 0, () => {
      getSupportedCameraOutputCapability();
      createPreviewOutput();
      let ret = cameraObj.oHPreviewOutputGetSupportedFrameRates(2).errorCode;
      console.log(TAG+"testOHPreviewOutputGetSupportedFrameRates0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPreviewOutputGetSupportedFrameRates0400
     * @tc.name       : testOHPreviewOutputGetSupportedFrameRates0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputGetSupportedFrameRates0400', 0, () => {
      getSupportedCameraOutputCapability();
      createPreviewOutput();
      let ret = cameraObj.oHPreviewOutputGetSupportedFrameRates(3).errorCode;
      console.log(TAG+"testOHPreviewOutputGetSupportedFrameRates0400:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPreviewOutputDeleteFrameRates0100
     * @tc.name       : testOHPreviewOutputDeleteFrameRates0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputDeleteFrameRates0100', 0, () => {
      getSupportedCameraOutputCapability();
      createPreviewOutput();
      if (getSupportedFrameRates() != 0) {
        let ret = cameraObj.oHPreviewOutputDeleteFrameRates(0);
        console.log(TAG+"testOHPreviewOutputDeleteFrameRates0100:"+ret);
        expect(ret).assertEqual(CAMERA_OK);
      } else {
        console.log(TAG+"getSupportedFrameRates not supported!");
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPreviewOutputDeleteFrameRates0200
     * @tc.name       : testOHPreviewOutputDeleteFrameRates0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputDeleteFrameRates0200', 0, () => {
      getSupportedCameraOutputCapability();
      createPreviewOutput();
      getSupportedFrameRates();
      let ret = cameraObj.oHPreviewOutputDeleteFrameRates(1);
      console.log(TAG+"testOHPreviewOutputDeleteFrameRates0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPreviewOutputDeleteFrameRates0300
     * @tc.name       : testOHPreviewOutputDeleteFrameRates0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputDeleteFrameRates0300', 0, () => {
      getSupportedCameraOutputCapability();
      createPreviewOutput();
      getSupportedFrameRates();
      let ret = cameraObj.oHPreviewOutputDeleteFrameRates(2);
      console.log(TAG+"testOHPreviewOutputDeleteFrameRates0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPreviewOutputGetActiveFrameRate0100
     * @tc.name       : testOHPreviewOutputGetActiveFrameRate0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputGetActiveFrameRate0100', 0, () => {
      getSupportedCameraOutputCapability();
      createPreviewOutput();
      if (getSupportedFrameRates() != 0) {
        let ret = cameraObj.oHPreviewOutputGetActiveFrameRate(0).errorCode;
        console.log(TAG+"testOHPreviewOutputGetActiveFrameRate0100:"+ret);
        expect(ret).assertEqual(CAMERA_OK);
      } else {
        console.log(TAG+"getSupportedFrameRates not supported!");
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPreviewOutputGetActiveFrameRate0200
     * @tc.name       : testOHPreviewOutputGetActiveFrameRate0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputGetActiveFrameRate0200', 0, () => {
      getSupportedCameraOutputCapability();
      createPreviewOutput();
      getSupportedFrameRates();
      let ret = cameraObj.oHPreviewOutputGetActiveFrameRate(1).errorCode;
      console.log(TAG+"testOHPreviewOutputGetActiveFrameRate0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPreviewOutputGetActiveFrameRate0300
     * @tc.name       : testOHPreviewOutputGetActiveFrameRate0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputGetActiveFrameRate0300', 0, () => {
      getSupportedCameraOutputCapability();
      createPreviewOutput();
      getSupportedFrameRates();
      let ret = cameraObj.oHPreviewOutputGetActiveFrameRate(2).errorCode;
      console.log(TAG+"testOHPreviewOutputGetActiveFrameRate0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPreviewOutputSetFrameRate0100
     * @tc.name       : testOHPreviewOutputSetFrameRate0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputSetFrameRate0100', 0, () => {
      getSupportedCameraOutputCapability();
      createPreviewOutput();
      if (getSupportedFrameRates() != 0) {
        getActiveFrameRate();
        let ret = cameraObj.oHPreviewOutputSetFrameRate(0);
        console.log(TAG+"testOHPreviewOutputSetFrameRate0100:"+ret);
        console.log(TAG+"testOHPreviewOutputSetFrameRate0100.min"+getActiveFrameRate().min);
        console.log(TAG+"testOHPreviewOutputSetFrameRate0100.max"+getActiveFrameRate().max);
        expect(ret).assertEqual(CAMERA_OK);
      } else {
        console.log(TAG+"getSupportedFrameRates not supported!");
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPreviewOutputSetFrameRate0200
     * @tc.name       : testOHPreviewOutputSetFrameRate0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputSetFrameRate0200', 0, () => {
      getSupportedCameraOutputCapability();
      createPreviewOutput();
      getSupportedFrameRates();
      getActiveFrameRate();
      let ret = cameraObj.oHPreviewOutputSetFrameRate(1);
      console.log(TAG+"testOHPreviewOutputSetFrameRate0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPreviewOutputSetFrameRate0300
     * @tc.name       : testOHPreviewOutputSetFrameRate0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputSetFrameRate0300', 0, () => {
      getSupportedCameraOutputCapability();
      createPreviewOutput();
      if (getSupportedFrameRates() == 0) {
        getActiveFrameRate();
        let ret = cameraObj.oHPreviewOutputSetFrameRate(0);
        console.log(TAG+"testOHPreviewOutputSetFrameRate0300:"+ret);
        expect(ret).assertEqual(CAMERA_SESSION_NOT_CONFIG);
      } else {
        console.log(TAG+"getSupportedFrameRates supported!");
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPreviewOutputSetFrameRate0400
     * @tc.name       : testOHPreviewOutputSetFrameRate0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputSetFrameRate0400', 0, () => {
      getSupportedCameraOutputCapability();
      createPreviewOutput();
      if (getSupportedFrameRates() != 0) {
        getActiveFrameRate();
        let ret = cameraObj.oHPreviewOutputSetFrameRate(2);
        console.log(TAG+"testOHPreviewOutputSetFrameRate0400:"+ret);
        expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
      } else {
        console.log(TAG+"getSupportedFrameRates supported!");
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionGetExposureValue0100
     * @tc.name       : testOHCaptureSessionGetExposureValue0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionGetExposureValue0100', 0, () => {
      captureSessionstart();
      sessionStart();
      let ret = cameraObj.oHCaptureSessionGetExposureValue(0)
      console.log(TAG+"testOHCaptureSessionGetExposureValue0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionGetExposureValue0200
     * @tc.name       : testOHCaptureSessionGetExposureValue0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionGetExposureValue0200', 0, () => {
      captureSessionstart();
      let ret = cameraObj.oHCaptureSessionGetExposureValue(1)
      console.log(TAG+"testOHCaptureSessionGetExposureValue0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionGetExposureValue0300
     * @tc.name       : testOHCaptureSessionGetExposureValue0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionGetExposureValue0300', 0, () => {
      captureSessionstart();
      let ret = cameraObj.oHCaptureSessionGetExposureValue(2)
      console.log(TAG+"testOHCaptureSessionGetExposureValue0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionGetFocalLength0100
     * @tc.name       : testOHCaptureSessionGetFocalLength0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionGetFocalLength0100', 0, () => {
      captureSessionstart();
      sessionStart();
      let ret = cameraObj.oHCaptureSessionGetFocalLength(0)
      console.log(TAG+"testOHCaptureSessionGetFocalLength0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionGetFocalLength0200
     * @tc.name       : testOHCaptureSessionGetFocalLength0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionGetFocalLength0200', 0, () => {
      captureSessionstart();
      let ret = cameraObj.oHCaptureSessionGetFocalLength(1)
      console.log(TAG+"testOHCaptureSessionGetFocalLength0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionGetFocalLength0300
     * @tc.name       : testOHCaptureSessionGetFocalLength0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionGetFocalLength0300', 0, () => {
      captureSessionstart();
      let ret = cameraObj.oHCaptureSessionGetFocalLength(2)
      console.log(TAG+"testOHCaptureSessionGetFocalLength0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionSetSmoothZoom0100
     * @tc.name       : testOHCaptureSessionSetSmoothZoom0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionSetSmoothZoom0100', 0, () => {
      captureSessionstart();
      sessionStart();
      let ret = cameraObj.oHCaptureSessionSetSmoothZoom(0)
      console.log(TAG+"testOHCaptureSessionSetSmoothZoom0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionSetSmoothZoom0200
     * @tc.name       : testOHCaptureSessionSetSmoothZoom0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionSetSmoothZoom0200', 0, () => {
      captureSessionstart();
      let ret = cameraObj.oHCaptureSessionSetSmoothZoom(1)
      console.log(TAG+"testOHCaptureSessionSetSmoothZoom0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionGetSupportedColorSpaces0100
     * @tc.name       : testOHCaptureSessionGetSupportedColorSpaces0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionGetSupportedColorSpaces0100', 0, () => {
      captureSessionstart();
      let ret = cameraObj.oHCaptureSessionGetSupportedColorSpaces(0).errorCode;
      console.log(TAG+"testOHCaptureSessionGetSupportedColorSpaces0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionGetSupportedColorSpaces0200
     * @tc.name       : testOHCaptureSessionGetSupportedColorSpaces0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionGetSupportedColorSpaces0200', 0, () => {
      captureSessionstart();
      let ret = cameraObj.oHCaptureSessionGetSupportedColorSpaces(1).errorCode;
      console.log(TAG+"testOHCaptureSessionGetSupportedColorSpaces0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionGetSupportedColorSpaces0300
     * @tc.name       : testOHCaptureSessionGetSupportedColorSpaces0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionGetSupportedColorSpaces0300', 0, () => {
      captureSessionstart();
      let ret = cameraObj.oHCaptureSessionGetSupportedColorSpaces(2).errorCode;
      console.log(TAG+"testOHCaptureSessionGetSupportedColorSpaces0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionGetSupportedColorSpaces0400
     * @tc.name       : testOHCaptureSessionGetSupportedColorSpaces0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionGetSupportedColorSpaces0400', 0, () => {
      captureSessionstart();
      let ret = cameraObj.oHCaptureSessionGetSupportedColorSpaces(3).errorCode;
      console.log(TAG+"testOHCaptureSessionGetSupportedColorSpaces0400:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionDeleteColorSpaces0100
     * @tc.name       : testOHCaptureSessionDeleteColorSpaces0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionDeleteColorSpaces0100', 0, () => {
      captureSessionstart();
      if (getSupportedColorSpaces() != 0) {
        let ret = cameraObj.oHCaptureSessionDeleteColorSpaces(0)
        console.log(TAG+"testOHCaptureSessionDeleteColorSpaces0100:"+ret);
        expect(ret).assertEqual(CAMERA_OK);
      } else {
        console.log(TAG+"GetSupportedColorSpaces not supported!");
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionDeleteColorSpaces0200
     * @tc.name       : testOHCaptureSessionDeleteColorSpaces0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionDeleteColorSpaces0200', 0, () => {
      captureSessionstart();
      getSupportedColorSpaces();
      let ret = cameraObj.oHCaptureSessionDeleteColorSpaces(1)
      console.log(TAG+"testOHCaptureSessionDeleteColorSpaces0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionDeleteColorSpaces0300
     * @tc.name       : testOHCaptureSessionDeleteColorSpaces0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionDeleteColorSpaces0300', 0, () => {
      captureSessionstart();
      getSupportedColorSpaces();
      let ret = cameraObj.oHCaptureSessionDeleteColorSpaces(2)
      console.log(TAG+"testOHCaptureSessionDeleteColorSpaces0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**ret
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionGetActiveColorSpace0100
     * @tc.name       : testOHCaptureSessionGetActiveColorSpace0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionGetActiveColorSpace0100', 0, () => {
      captureSessionstart();
      if (getSupportedColorSpaces() != 0) {
        let ret = cameraObj.oHCaptureSessionGetActiveColorSpace(0).errorCode;
        console.log(TAG+"testOHCaptureSessionGetActiveColorSpace0100:"+ret);
        expect(ret).assertEqual(CAMERA_OK);
      } else {
        console.log(TAG+"GetSupportedColorSpaces not supported!");
      }
    })
    /**ret
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionGetActiveColorSpace0200
     * @tc.name       : testOHCaptureSessionGetActiveColorSpace0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionGetActiveColorSpace0200', 0, () => {
      captureSessionstart();
      getSupportedColorSpaces();
      let ret = cameraObj.oHCaptureSessionGetActiveColorSpace(1).errorCode;
      console.log(TAG+"testOHCaptureSessionGetActiveColorSpace0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**ret
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionGetActiveColorSpace0300
     * @tc.name       : testOHCaptureSessionGetActiveColorSpace0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionGetActiveColorSpace0300', 0, () => {
      captureSessionstart();
      getSupportedColorSpaces();
      let ret = cameraObj.oHCaptureSessionGetActiveColorSpace(2).errorCode;
      console.log(TAG+"testOHCaptureSessionGetActiveColorSpace0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionSetActiveColorSpace0100
     * @tc.name       : testOHCaptureSessionSetActiveColorSpace0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionSetActiveColorSpace0100', 0, () => {
      captureSessionstart();
      if (getSupportedColorSpaces() != 0) {
        if (getActiveColorSpace() != 0) {
          let ret = cameraObj.oHCaptureSessionSetActiveColorSpace(0);
          console.log(TAG+"testOHCaptureSessionSetActiveColorSpace0100:"+ret);
          expect(ret).assertEqual(CAMERA_OK);
        }
      } else {
        console.log(TAG+"GetSupportedColorSpaces not supported!");
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionSetActiveColorSpace0200
     * @tc.name       : testOHCaptureSessionSetActiveColorSpace0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionSetActiveColorSpace0200', 0, () => {
      captureSessionstart();
      getActiveColorSpace();
      let ret = cameraObj.oHCaptureSessionSetActiveColorSpace(1)
      console.log(TAG+"testOHCaptureSessionSetActiveColorSpace0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionSetActiveColorSpace0300
     * @tc.name       : testOHCaptureSessionSetActiveColorSpace0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionSetActiveColorSpace0300', 0, () => {
      captureSessionstart();
      getActiveColorSpace();
      let ret = cameraObj.oHCaptureSessionSetActiveColorSpace(2)
      console.log(TAG+"testOHCaptureSessionSetActiveColorSpace0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionSetActiveColorSpace0400
     * @tc.name       : testOHCaptureSessionSetActiveColorSpace0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionSetActiveColorSpace0400', 0, () => {
      captureSessionstart();
      if (getSupportedColorSpaces() == 0) {
        getActiveColorSpace();
        let ret = cameraObj.oHCaptureSessionSetActiveColorSpace(0);
        console.log(TAG+"testOHCaptureSessionSetActiveColorSpace0400:"+ret);
        expect(ret).assertEqual(CAMERA_OK);
      } else {
        console.log(TAG+"GetSupportedColorSpaces supported!");
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCaptureSessionSetActiveColorSpace0500
     * @tc.name       : testOHCaptureSessionSetActiveColorSpace0500
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionSetActiveColorSpace0500', 0, () => {
      captureSessionstart();
      if (getSupportedColorSpaces() != 0) {
        getActiveColorSpace();
        let ret = cameraObj.oHCaptureSessionSetActiveColorSpace(3);
        console.log(TAG+"testOHCaptureSessionSetActiveColorSpace0500:"+ret);
        expect(ret).assertEqual(CAMERA_OK);
      } else {
        console.log(TAG+"GetSupportedColorSpaces supported!");
      }
    })
  })
}