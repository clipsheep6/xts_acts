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
import { Camera_FlashMode, Camera_ExposureMode ,Camera_FocusMode,Camera_VideoStabilizationMode,
  Camera_PreconfigType, Camera_PreconfigRatio, Camera_MediaType, Camera_SceneMode } from './Constants';
import abilityAccessCtrl from '@ohos.abilityAccessCtrl';
import bundleManager from '@ohos.bundle.bundleManager';
import account from '@ohos.account.osAccount';
import MediaUtils from './MediaUtils';
import media from '@ohos.multimedia.media';
import { BusinessError } from '@ohos.base';

const TAG = "CAMERA_LOGTAG_JS ";
const CAMERA_OK = 0;
const CAMERA_INVALID_ARGUMENT = 7400101;
let receiver: image.ImageReceiver;
let mPhotoSurface: string;

let mediaUtil = MediaUtils.getInstance();
let videoSurfaceId: string;
let videoRecorder: media.AVRecorder;
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
  url : 'fd://',
  rotation : 0,
}

async function getVideoSurfaceId() {
  let mContext = AppStorage.get('context') as Context;
  console.log(TAG + 'start getVideoSurfaceID ');
  try {
    videoRecorder = await media.createAVRecorder();
  } catch (error) {
    let err = error as BusinessError;
    console.error(`createAVRecorder call failed error code: ${err.code}`);
  }
  if (videoRecorder === undefined) {
    console.error(`createAVRecorder call failed`);
  }
  console.log(TAG + 'createAVRecorder videoRecorder : ' + JSON.stringify(videoRecorder));
  videoConfig.url = `fd://${await mediaUtil.createAndGetUriVideoNew(Camera_MediaType.VIDEO, mContext)}`;
  console.log(TAG + 'getVideoSurfaceID videoConfig.url : ' + JSON.stringify(videoConfig.url));
  try {
    await videoRecorder.prepare(videoConfig);
    console.log(TAG + 'getVideoSurfaceID  videoRecorder.prepare');
  } catch (err) {
    console.error(TAG + 'prepare failed with err: ' + err);
  }
  videoSurfaceId = await videoRecorder.getInputSurface();
  console.log(TAG + 'getVideoSurfaceID videoSurfaceId : ' + JSON.stringify(videoSurfaceId));
}


function setSceneMode(index_sceneMode: number) {
  let ret = cameraObj.oHCameraManagerSetSceneMode(index_sceneMode);
  if (ret != 0) {
    console.log(TAG + "setSceneMode FAILED");
    expect().assertFail();
  }
  if (index_sceneMode == Camera_SceneMode.NORMAL_PHOTO) {
    console.log(TAG + "set sceneMode: NORMAL_PHOTO");
  } else if (index_sceneMode == Camera_SceneMode.NORMAL_VIDEO) {
    console.log(TAG + "set sceneMode: NORMAL_VIDEO");
  } else if (index_sceneMode == Camera_SceneMode.SECURE_PHOTO) {
    console.log(TAG + "set sceneMode: SECURE_PHOTO");
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
  console.log(TAG + 'mSurfaceId : ' + mPhotoSurface);
  let ret = cameraObj.initCamera(mPhotoSurface);
  console.log(TAG + 'initCamera : ' + ret);
  if (ret != 0) {
    console.log(TAG + "getCameraManager FAILED");
    expect().assertFail();
  }
}

function createCaptureSession() {
  console.log(TAG + "createCaptureSession start.");
  let ret = cameraObj.createSession();
  if (ret != 0) {
    console.log(TAG + "createCaptureSession FAILED");
    expect().assertFail();
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

function getSupportedSceneModes() {
  let supportedSceneModes = cameraObj.oHCameraManagerGetSupportedSceneModes(0);
  if (supportedSceneModes.errorCode != 0) {
    console.log(TAG + "getSupportedSceneModes FAILED");
    expect().assertFail();
  }
  if (supportedSceneModes.isNormalPhoto) {
    console.log(TAG + "NORMAL_PHOTO is supported.");
  }
  if (supportedSceneModes.isNormalVideo) {
    console.log(TAG + "NORMAL_VIDEO is supported.");
  }
  if (supportedSceneModes.isSecurePhoto) {
    console.log(TAG + "SECURE_PHOTO is supported.");
  }
  cameraObj.oHCameraManagerDeleteSceneModes(0);
  return supportedSceneModes;
}

function getSupportedCamerasInstance() {
  let cameraInfo = cameraObj.getSupportedCameras();
  if (isEmpty(cameraInfo)) {
    console.log(TAG + "getSupportedCamerasInstance FAILED");
    expect().assertFail();
  }
}

function getSupportedCameraOutputCapability() {
  let cameraOutputCapability = cameraObj.getSupportedOutputCapability();
  console.log(TAG + 'cameraOutputCapability[0] = ' + cameraOutputCapability.previewProfilesSize);
  console.log(TAG + 'cameraOutputCapability[1] = ' + cameraOutputCapability.photoProfilesSize);
  console.log(TAG + 'cameraOutputCapability[2] = ' + cameraOutputCapability.videoProfilesSize);
  console.log(TAG + 'cameraOutputCapability[3] = ' + cameraOutputCapability.metadataProfilesSize);
  return true;
}

function setSessionMode() {
  let ret = cameraObj.oHCaptureSessionSetSessionMode(0);
  if (ret != 0) {
    console.log(TAG + "setSessionMode FAILED");
    expect().assertFail();
  }
}

function createPreviewOutput() {
  let ret = cameraObj.createPreviewOutput();
  if (ret != 0) {
    console.log(TAG + "createPreviewOutput FAILED");
    expect().assertFail();
  }
}

function sessionFlow() {
  let begin = cameraObj.sessionBegin();
  if (begin != 0) {
    console.log(TAG + "beginConfig FAILED");
    expect().assertFail();
  }

  let canAddInput = cameraObj.oHCaptureSessionCanAddInput(0);
  if (canAddInput.errorCode != 0) {
    console.log(TAG + "canAddInput FAILED");
    expect().assertFail();
  }
  console.log(TAG + "canAddInput: " + canAddInput.isAddInput);
  
  if (canAddInput.isAddInput) {
    let addInput = cameraObj.sessionAddInput();
    if (addInput != 0) {
      console.log(TAG + "addInput FAILED");
      expect().assertFail();
    }
  } else {
    expect().assertFail();
  }

  let canAddPreviewOutput = cameraObj.oHCaptureSessionCanAddPreviewOutput(0);
  if (canAddPreviewOutput.errorCode != 0) {
    console.log(TAG + "canAddPreviewOutput FAILED");
    expect().assertFail();
  }
  console.log(TAG + "canAddPreviewOutput: " + canAddPreviewOutput.isAddPreviewOutput);

  if (canAddPreviewOutput.isAddPreviewOutput) {
    let addPreviewOutput = cameraObj.sessionAddPreviewOutput();
    if (addPreviewOutput != 0) {
      console.log(TAG + "addPreviewOutput FAILED");
      expect().assertFail();
    }
  } else {
    expect().assertFail();
  }
}

function createPhotoOutput() {
  let mPhotoOutput = cameraObj.createPhotoOutput(mPhotoSurface);
  if (mPhotoOutput != 0) {
    console.log(TAG + "mPhotoOutput FAILED");
    expect().assertFail();
  }
}

function createVideoOutput() {
  let ret = cameraObj.createVideoOutput(videoSurfaceId);
  if (ret != 0) {
    console.log(TAG + "createVideoOutput FAILED");
    expect().assertFail();
  }
}

function sessionBeginConfig() {
  let ret = cameraObj.sessionBegin();
  if (ret != 0) {
    console.log(TAG + "sessionBeginConfig FAILED:" + ret);
    expect().assertFail();
  }
}

function addInput() {
  let canAddInput = cameraObj.oHCaptureSessionCanAddInput(0);
  if (canAddInput.errorCode != 0) {
    console.log(TAG + "canAddInput FAILED" + canAddInput.errorCode);
    expect().assertFail();
  }
  console.log(TAG + "canAddInput: " + canAddInput.isAddInput);
  if (canAddInput.isAddInput) {
    let ret = cameraObj.sessionAddInput();
    if (ret != 0) {
      console.log(TAG + "addInput FAILED" + ret);
      expect().assertFail();
    }
  } else {
    expect().assertFail();
  }
}

function addPreviewOutput() {
  let canAddPreviewOutput = cameraObj.oHCaptureSessionCanAddPreviewOutput(0);
  if (canAddPreviewOutput.errorCode != 0) {
    console.log(TAG + "canAddPreviewOutput FAILED" + canAddPreviewOutput.errorCode);
    expect().assertFail();
  }
  console.log(TAG + "canAddPreviewOutput: " + canAddPreviewOutput.isAddPreviewOutput);
  if (canAddPreviewOutput.isAddPreviewOutput) {
    let ret = cameraObj.sessionAddPreviewOutput();
    if (ret != 0) {
      console.log(TAG + "addPreviewOutput FAILED" + ret);
      expect().assertFail();
    }
  } else {
    expect().assertFail();
  }
}

async function getPermissions() {
  console.log('getPermission start');
  type MyPermissions = "ohos.permission.CAMERA" | "ohos.permission.READ_MEDIA" | "ohos.permission.WRITE_MEDIA"|
      "ohos.permission.MICROPHONE";
  let list: MyPermissions[] = ['ohos.permission.CAMERA', 'ohos.permission.READ_MEDIA', 'ohos.permission.WRITE_MEDIA',
      'ohos.permission.MICROPHONE'];
  try {
    let userId: number = await account.getAccountManager().getOsAccountLocalId();
    let applicationFlags: number = bundleManager.ApplicationFlag.GET_APPLICATION_INFO_DEFAULT;
    let applicationInfo: bundleManager.ApplicationInfo =
        await bundleManager.getApplicationInfoSync('com.example.camerandk', applicationFlags, userId);
    let tokenId: number = applicationInfo.accessTokenId;
    for (let index = 0; index < list.length; index++) {
      await abilityAccessCtrl.createAtManager().grantUserGrantedPermission(tokenId, list[index], 1);
    }
  } catch (err) {
    console.log(`getPermission error ${JSON.stringify(err)}`);
  }
  console.log('getPermission end');
}

function isEmpty(data: cameraObj.cameraInfo | number) {
  if (data == null || data == undefined) {
    return true;
  }
  return false;
}

function getPreviewOutputActiveProfile() {
  getCameraManagerInstance();
  createCaptureSession();
  getSupportedCamerasInstance();
  getSupportedCameraOutputCapability();
  getSupportedSceneModes();
  setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
  setSessionMode();
  createPreviewOutput();
  createCameraInput();
  sessionBeginConfig();
  addInput();
  addPreviewOutput();
  let ret = cameraObj.oHPreviewOutputGetActiveProfile(0);
  if (ret != 0) {
    console.log(TAG + "getPreviewOutputActiveProfile FAILED");
    expect().assertFail();
  }
}

function getPhotoOutputActiveProfile() {
  getCameraManagerInstance();
  createCaptureSession();
  getSupportedCamerasInstance();
  getSupportedCameraOutputCapability();
  createPreviewOutput();
  createCameraInput();
  sessionFlow();
  createPhotoOutput();
  addPhotoOutput();
  let ret = cameraObj.oHPhotoOutputGetActiveProfile(0);
  if (ret != 0) {
    console.log(TAG + "getPhotoOutputActiveProfile FAILED");
    expect().assertFail();
  }
}

function getVideoOutputGetActiveProfile() {
  getCameraManagerInstance();
  createCaptureSession();
  getSupportedCamerasInstance();
  getSupportedCameraOutputCapability();
  getSupportedSceneModes();
  setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
  setSessionMode();
  createPreviewOutput();
  createCameraInput();
  sessionFlow();
  createPhotoOutput();
  addPhotoOutput();
  createVideoOutput();
  addVideoOutput();
  let ret = cameraObj.oHVideoOutputGetActiveProfile(0);
  if (ret != 0) {
    console.log(TAG + "oHVideoOutputGetActiveProfile FAILED");
    expect().assertFail();
  }
}

function captureSessionPreconfig() {
  getCameraManagerInstance();
  getSupportedCamerasInstance();
  createCaptureSession();
  getSupportedCameraOutputCapability();
  createCameraInput();
  let canPreconfig = cameraObj.oHCaptureSessionCanPreconfig(Camera_PreconfigType.PRECONFIG_720P, 0);
  console.log(TAG+"canPreconfig: " + canPreconfig.canPreconfig);
  if (!canPreconfig.canPreconfig) {
    expect(canPreconfig.canPreconfig).assertEqual(false);
  } else {
    let preconfig = cameraObj.oHCaptureSessionPreconfig(Camera_PreconfigType.PRECONFIG_720P, 0);
    console.log(TAG+"captureSessionPreconfig:"+preconfig)
    expect(preconfig).assertEqual(CAMERA_OK);
  }
  return canPreconfig.canPreconfig;
}

function createPhotoOutputUsedInPreconfig(canPreconfig: bool) {
  if (!canPreconfig) {
    createPhotoOutput();
  } else {
    photoOutput = cameraObj.oHCameraManagerCreatePhotoOutputUsedInPreconfig(mPhotoSurface, 0);
    if (photoOutput != 0) {
      console.log(TAG + "createPhotoOutputUsedInPreconfig FAILED");
      expect().assertFail();
    }
  }
}

function createPreviewOutputUsedInPreconfig(canPreconfig: bool) {
  if (!canPreconfig) {
    createPreviewOutput();
  } else {
    previewOutput = cameraObj.oHCameraManagerCreatePreviewOutputUsedInPreconfig(0);
    if (previewOutput != 0) {
      console.log(TAG + "createPreviewOutputUsedInPreconfig FAILED");
      expect().assertFail();
    }
  }
}

function createVideoOutputUsedInPreconfig(canPreconfig: bool) {
  if (!canPreconfig) {
    createVideoOutput();
  } else {
    videoOutput = cameraObj.oHCameraManagerCreateVideoOutputUsedInPreconfig(videoSurfaceId, 0);
    if (videoOutput != 0) {
      console.log(TAG + "createVideoOutputUsedInPreconfig FAILED");
      expect().assertFail();
    }
  }
}

function addPhotoOutput() {
  let canAddPhotoOutput = cameraObj.oHCaptureSessionCanAddPhotoOutput(0);
  if (canAddPhotoOutput.errorCode != 0) {
    console.log(TAG + "canAddPhotoOutput FAILED" + canAddPhotoOutput.errorCode);
    expect().assertFail();
  }
  console.log(TAG + "canAddPhotoOutput: " + canAddPhotoOutput.isAddPhotoOutput);
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

function addVideoOutput() {
  let canAddVideoOutput = cameraObj.oHCaptureSessionCanAddVideoOutput(0);
  if (canAddVideoOutput.errorCode != 0) {
    console.log(TAG + "canAddVideoOutput FAILED" + canAddVideoOutput.errorCode);
    expect().assertFail();
  }
  console.log(TAG + "canAddVideoOutput: " + canAddVideoOutput.isAddVideoOutput);
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

function releaseCamera() {
  let ret = cameraObj.releaseCamera();
  if (ret != 0) {
    console.log(TAG + "releaseCamera FAILED");
    expect().assertFail();
  }
}

function sleep(ms) {
  return new Promise(resolve => setTimeout(resolve, ms));
}

export default function SessionTest() {
  describe('SessionTest', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async () => {
      await sleep(3000);
      await getPermissions();
      await getPhotoReceiverSurface();
      await getVideoSurfaceId();
    })
    beforeEach(() => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(() => {
      releaseCamera();
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionRegisterCallback0100
     * @tc.name       : testOHCaptureSessionRegisterCallback0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionRegisterCallback0100', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      let ret = cameraObj.oHCaptureSessionRegisterCallback(0);
      console.log(TAG+"testOHCaptureSessionRegisterCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionRegisterCallback0200
     * @tc.name       : testOHCaptureSessionRegisterCallback0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionRegisterCallback0200', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      let ret = cameraObj.oHCaptureSessionRegisterCallback(1);
      console.log(TAG+"testOHCaptureSessionRegisterCallback0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionRegisterCallback0300
     * @tc.name       : testOHCaptureSessionRegisterCallback0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionRegisterCallback0300', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      let ret = cameraObj.oHCaptureSessionRegisterCallback(2);
      console.log(TAG+"testOHCaptureSessionRegisterCallback0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionUnregisterCallback0100
     * @tc.name       : testOHCaptureSessionUnregisterCallback0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionUnregisterCallback0100', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      cameraObj.oHCaptureSessionRegisterCallback(0);
      let ret = cameraObj.oHCaptureSessionUnregisterCallback(0);
      console.log(TAG+"testOHCaptureSessionUnregisterCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionUnregisterCallback0200
     * @tc.name       : testOHCaptureSessionUnregisterCallback0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionUnregisterCallback0200', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      let ret = cameraObj.oHCaptureSessionUnregisterCallback(1);
      console.log(TAG+"testOHCaptureSessionUnregisterCallback0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionUnregisterCallback0300
     * @tc.name       : testOHCaptureSessionUnregisterCallback0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionUnregisterCallback0300', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      let ret = cameraObj.oHCaptureSessionUnregisterCallback(3);
      console.log(TAG+"testOHCaptureSessionUnregisterCallback0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionSetSessionMode0100
     * @tc.name       : testOHCaptureSessionSetSessionMode0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionSetSessionMode0100', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      let ret = cameraObj.oHCaptureSessionSetSessionMode(0);
      console.log(TAG+"testOHCaptureSessionSetSessionMode0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionSetSessionMode0200
     * @tc.name       : testOHCaptureSessionSetSessionMode0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionSetSessionMode0200', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      let ret = cameraObj.oHCaptureSessionSetSessionMode(0);
      console.log(TAG+"testOHCaptureSessionSetSessionMode0200:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionSetSessionMode0300
     * @tc.name       : testOHCaptureSessionSetSessionMode0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionSetSessionMode0300', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      let supportedSceneModes = getSupportedSceneModes();
      console.log(TAG+"getSupportedSceneModesSize is called. sceneModesSize is "+supportedSceneModes.sceneModesSize);
      if (!supportedSceneModes.isSecurePhoto) {
        console.log(TAG+"SECURE_PHOTO is not supported");
        expect(supportedSceneModes.isSecurePhoto).assertEqual(false);
      } else {
        setSceneMode(Camera_SceneMode.SECURE_PHOTO);
        let ret = cameraObj.oHCaptureSessionSetSessionMode(0);
        console.log(TAG+"testOHCaptureSessionSetSessionMode0300:"+ret);
        expect(ret).assertEqual(CAMERA_OK);
      }
      console.log(TAG+"testOHCaptureSessionSetSessionMode0300 end");
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionSetSessionMode0400
     * @tc.name       : testOHCaptureSessionSetSessionMode0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionSetSessionMode0400', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      let ret = cameraObj.oHCaptureSessionSetSessionMode(1);
      console.log(TAG+"testOHCaptureSessionSetSessionMode0400:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionSetSessionMode0500
     * @tc.name       : testOHCaptureSessionSetSessionMode0500
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionSetSessionMode0500', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      let ret = cameraObj.oHCaptureSessionSetSessionMode(2);
      console.log(TAG+"testOHCaptureSessionSetSessionMode0500:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddInput0100
     * @tc.name       : testOHCaptureSessionCanAddInput0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddInput0100', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionBeginConfig();
      let canAddInput = cameraObj.oHCaptureSessionCanAddInput(0);
      console.log(TAG + "canAddInput: " + canAddInput.isAddInput);
      console.log(TAG+"testOHCaptureSessionCanAddInput0100:"+canAddInput.errorCode);
      expect(canAddInput.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddInput0200
     * @tc.name       : testOHCaptureSessionCanAddInput0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddInput0200', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionBeginConfig();
      let canAddInput = cameraObj.oHCaptureSessionCanAddInput(1);
      console.log(TAG + "canAddInput: " + canAddInput.isAddInput);
      console.log(TAG+"testOHCaptureSessionCanAddInput0200:"+canAddInput.errorCode);
      expect(canAddInput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddInput0300
     * @tc.name       : testOHCaptureSessionCanAddInput0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddInput0300', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionBeginConfig();
      let canAddInput = cameraObj.oHCaptureSessionCanAddInput(2);
      console.log(TAG + "canAddInput: " + canAddInput.isAddInput);
      console.log(TAG+"testOHCaptureSessionCanAddInput0300:"+canAddInput.errorCode);
      expect(canAddInput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddInput0400
     * @tc.name       : testOHCaptureSessionCanAddInput0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddInput0400', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionBeginConfig();
      let canAddInput = cameraObj.oHCaptureSessionCanAddInput(3);
      console.log(TAG + "canAddInput: " + canAddInput.isAddInput);
      console.log(TAG+"testOHCaptureSessionCanAddInput0400:"+canAddInput.errorCode);
      expect(canAddInput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPreviewOutput0100
     * @tc.name       : testOHCaptureSessionCanAddPreviewOutput0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPreviewOutput0100', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionBeginConfig();
      addInput();
      let canAddPreviewOutput = cameraObj.oHCaptureSessionCanAddPreviewOutput(0);
      console.log(TAG + "canAddPreviewOutput: " + canAddPreviewOutput.isAddPreviewOutput);
      console.log(TAG+"testOHCaptureSessionCanAddPreviewOutput0100:"+canAddPreviewOutput.errorCode);
      expect(canAddPreviewOutput.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPreviewOutput0200
     * @tc.name       : testOHCaptureSessionCanAddPreviewOutput0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPreviewOutput0200', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionBeginConfig();
      addInput();
      let canAddPreviewOutput = cameraObj.oHCaptureSessionCanAddPreviewOutput(1);
      console.log(TAG + "canAddPreviewOutput: " + canAddPreviewOutput.isAddPreviewOutput);
      console.log(TAG+"testOHCaptureSessionCanAddPreviewOutput0200:"+canAddPreviewOutput.errorCode);
      expect(canAddPreviewOutput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPreviewOutput0300
     * @tc.name       : testOHCaptureSessionCanAddPreviewOutput0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPreviewOutput0300', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionBeginConfig();
      addInput();
      let canAddPreviewOutput = cameraObj.oHCaptureSessionCanAddPreviewOutput(2);
      console.log(TAG + "canAddPreviewOutput: " + canAddPreviewOutput.isAddPreviewOutput);
      console.log(TAG+"testOHCaptureSessionCanAddPreviewOutput0300:"+canAddPreviewOutput.errorCode);
      expect(canAddPreviewOutput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPreviewOutput0400
     * @tc.name       : testOHCaptureSessionCanAddPreviewOutput0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPreviewOutput0400', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionBeginConfig();
      addInput();
      let canAddPreviewOutput = cameraObj.oHCaptureSessionCanAddPreviewOutput(3);
      console.log(TAG + "canAddPreviewOutput: " + canAddPreviewOutput.isAddPreviewOutput);
      console.log(TAG+"testOHCaptureSessionCanAddPreviewOutput0400:"+canAddPreviewOutput.errorCode);
      expect(canAddPreviewOutput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPreviewOutput0500
     * @tc.name       : testOHCaptureSessionCanAddPreviewOutput0500
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPreviewOutput0500', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionBeginConfig();
      addInput();
      let canAddPreviewOutput = cameraObj.oHCaptureSessionCanAddPreviewOutput(0);
      console.log(TAG + "canAddPreviewOutput: " + canAddPreviewOutput.isAddPreviewOutput);
      console.log(TAG+"testOHCaptureSessionCanAddPreviewOutput0500:"+canAddPreviewOutput.errorCode);
      expect(canAddPreviewOutput.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPreviewOutput0600
     * @tc.name       : testOHCaptureSessionCanAddPreviewOutput0600
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPreviewOutput0600', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionBeginConfig();
      addInput();
      let canAddPreviewOutput = cameraObj.oHCaptureSessionCanAddPreviewOutput(1);
      console.log(TAG + "canAddPreviewOutput: " + canAddPreviewOutput.isAddPreviewOutput);
      console.log(TAG+"testOHCaptureSessionCanAddPreviewOutput0600:"+canAddPreviewOutput.errorCode);
      expect(canAddPreviewOutput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPreviewOutput0700
     * @tc.name       : testOHCaptureSessionCanAddPreviewOutput0700
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPreviewOutput0700', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionBeginConfig();
      addInput();
      let canAddPreviewOutput = cameraObj.oHCaptureSessionCanAddPreviewOutput(2);
      console.log(TAG + "canAddPreviewOutput: " + canAddPreviewOutput.isAddPreviewOutput);
      console.log(TAG+"testOHCaptureSessionCanAddPreviewOutput0700:"+canAddPreviewOutput.errorCode);
      expect(canAddPreviewOutput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPreviewOutput0800
     * @tc.name       : testOHCaptureSessionCanAddPreviewOutput0800
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPreviewOutput0800', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionBeginConfig();
      addInput();
      let canAddPreviewOutput = cameraObj.oHCaptureSessionCanAddPreviewOutput(3);
      console.log(TAG + "canAddPreviewOutput: " + canAddPreviewOutput.isAddPreviewOutput);
      console.log(TAG+"testOHCaptureSessionCanAddPreviewOutput0800:"+canAddPreviewOutput.errorCode);
      expect(canAddPreviewOutput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPreviewOutput0900
     * @tc.name       : testOHCaptureSessionCanAddPreviewOutput0900
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPreviewOutput0900', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      let supportedSceneModes = getSupportedSceneModes();
      console.log(TAG+"getSupportedSceneModesSize is called. sceneModesSize is "+supportedSceneModes.sceneModesSize);
      if (!supportedSceneModes.isSecurePhoto) {
        console.log(TAG+"SECURE_PHOTO is not supported");
        expect(supportedSceneModes.isSecurePhoto).assertEqual(false);
      } else {
        setSceneMode(Camera_SceneMode.SECURE_PHOTO);
        createPreviewOutput();
        createCameraInput();
        sessionBeginConfig();
        addInput();
        let canAddPreviewOutput = cameraObj.oHCaptureSessionCanAddPreviewOutput(0);
        console.log(TAG + "canAddPreviewOutput: " + canAddPreviewOutput.isAddPreviewOutput);
        console.log(TAG+"testOHCaptureSessionCanAddPreviewOutput0900:"+canAddPreviewOutput.errorCode);
        expect(canAddPreviewOutput.errorCode).assertEqual(CAMERA_OK);
      }
      console.log(TAG+"testOHCaptureSessionCanAddPreviewOutput0900 end");
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPreviewOutput1000
     * @tc.name       : testOHCaptureSessionCanAddPreviewOutput1000
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPreviewOutput1000', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      let supportedSceneModes = getSupportedSceneModes();
      console.log(TAG+"getSupportedSceneModesSize is called. sceneModesSize is "+supportedSceneModes.sceneModesSize);
      if (!supportedSceneModes.isSecurePhoto) {
        console.log(TAG+"SECURE_PHOTO is not supported");
        expect(supportedSceneModes.isSecurePhoto).assertEqual(false);
      } else {
        setSceneMode(Camera_SceneMode.SECURE_PHOTO);
        createPreviewOutput();
        createCameraInput();
        sessionBeginConfig();
        addInput();
        let canAddPreviewOutput = cameraObj.oHCaptureSessionCanAddPreviewOutput(1);
        console.log(TAG + "canAddPreviewOutput: " + canAddPreviewOutput.isAddPreviewOutput);
        console.log(TAG+"testOHCaptureSessionCanAddPreviewOutput1000:"+canAddPreviewOutput.errorCode);
        expect(canAddPreviewOutput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
      console.log(TAG+"testOHCaptureSessionCanAddPreviewOutput1000 end");
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPreviewOutput1100
     * @tc.name       : testOHCaptureSessionCanAddPreviewOutput1100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPreviewOutput1100', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      let supportedSceneModes = getSupportedSceneModes();
      console.log(TAG+"getSupportedSceneModesSize is called. sceneModesSize is "+supportedSceneModes.sceneModesSize);
      if (!supportedSceneModes.isSecurePhoto) {
        console.log(TAG+"SECURE_PHOTO is not supported");
        expect(supportedSceneModes.isSecurePhoto).assertEqual(false);
      } else {
        setSceneMode(Camera_SceneMode.SECURE_PHOTO);
        createPreviewOutput();
        createCameraInput();
        sessionBeginConfig();
        addInput();
        let canAddPreviewOutput = cameraObj.oHCaptureSessionCanAddPreviewOutput(2);
        console.log(TAG + "canAddPreviewOutput: " + canAddPreviewOutput.isAddPreviewOutput);
        console.log(TAG+"testOHCaptureSessionCanAddPreviewOutput1100:"+canAddPreviewOutput.errorCode);
        expect(canAddPreviewOutput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
      console.log(TAG+"testOHCaptureSessionCanAddPreviewOutput1100 end");
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPreviewOutput1200
     * @tc.name       : testOHCaptureSessionCanAddPreviewOutput1200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPreviewOutput1200', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      let supportedSceneModes = getSupportedSceneModes();
      console.log(TAG+"getSupportedSceneModesSize is called. sceneModesSize is "+supportedSceneModes.sceneModesSize);
      if (!supportedSceneModes.isSecurePhoto) {
        console.log(TAG+"SECURE_PHOTO is not supported");
        expect(supportedSceneModes.isSecurePhoto).assertEqual(false);
      } else {
        setSceneMode(Camera_SceneMode.SECURE_PHOTO);
        createPreviewOutput();
        createCameraInput();
        sessionBeginConfig();
        addInput();
        let canAddPreviewOutput = cameraObj.oHCaptureSessionCanAddPreviewOutput(3);
        console.log(TAG + "canAddPreviewOutput: " + canAddPreviewOutput.isAddPreviewOutput);
        console.log(TAG+"testOHCaptureSessionCanAddPreviewOutput1200:"+canAddPreviewOutput.errorCode);
        expect(canAddPreviewOutput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
      console.log(TAG+"testOHCaptureSessionCanAddPreviewOutput1200 end");
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPhotoOutput0100
     * @tc.name       : testOHCaptureSessionCanAddPhotoOutput0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPhotoOutput0100', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutput();
      let canAddPhotoOutput = cameraObj.oHCaptureSessionCanAddPhotoOutput(0);
      console.log(TAG + "canAddPhotoOutput: " + canAddPhotoOutput.isAddPhotoOutput);
      console.log(TAG+"testOHCaptureSessionCanAddPhotoOutput0100:"+canAddPhotoOutput.errorCode);
      expect(canAddPhotoOutput.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPhotoOutput0200
     * @tc.name       : testOHCaptureSessionCanAddPhotoOutput0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPhotoOutput0200', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutput();
      let canAddPhotoOutput = cameraObj.oHCaptureSessionCanAddPhotoOutput(1);
      console.log(TAG + "canAddPhotoOutput: " + canAddPhotoOutput.isAddPhotoOutput);
      console.log(TAG+"testOHCaptureSessionCanAddPhotoOutput0200:"+canAddPhotoOutput.errorCode);
      expect(canAddPhotoOutput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPhotoOutput0300
     * @tc.name       : testOHCaptureSessionCanAddPhotoOutput0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPhotoOutput0300', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutput();
      let canAddPhotoOutput = cameraObj.oHCaptureSessionCanAddPhotoOutput(2);
      console.log(TAG + "canAddPhotoOutput: " + canAddPhotoOutput.isAddPhotoOutput);
      console.log(TAG+"testOHCaptureSessionCanAddPhotoOutput0300:"+canAddPhotoOutput.errorCode);
      expect(canAddPhotoOutput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPhotoOutput0400
     * @tc.name       : testOHCaptureSessionCanAddPhotoOutput0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPhotoOutput0400', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutput();
      let canAddPhotoOutput = cameraObj.oHCaptureSessionCanAddPhotoOutput(3);
      console.log(TAG + "canAddPhotoOutput: " + canAddPhotoOutput.isAddPhotoOutput);
      console.log(TAG+"testOHCaptureSessionCanAddPhotoOutput0400:"+canAddPhotoOutput.errorCode);
      expect(canAddPhotoOutput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPhotoOutput0500
     * @tc.name       : testOHCaptureSessionCanAddPhotoOutput0500
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPhotoOutput0500', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutput();
      let canAddPhotoOutput = cameraObj.oHCaptureSessionCanAddPhotoOutput(0);
      console.log(TAG + "canAddPhotoOutput: " + canAddPhotoOutput.isAddPhotoOutput);
      console.log(TAG+"testOHCaptureSessionCanAddPhotoOutput0500:"+canAddPhotoOutput.errorCode);
      expect(canAddPhotoOutput.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPhotoOutput0600
     * @tc.name       : testOHCaptureSessionCanAddPhotoOutput0600
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPhotoOutput0600', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutput();
      let canAddPhotoOutput = cameraObj.oHCaptureSessionCanAddPhotoOutput(1);
      console.log(TAG + "canAddPhotoOutput: " + canAddPhotoOutput.isAddPhotoOutput);
      console.log(TAG+"testOHCaptureSessionCanAddPhotoOutput0600:"+canAddPhotoOutput.errorCode);
      expect(canAddPhotoOutput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPhotoOutput0700
     * @tc.name       : testOHCaptureSessionCanAddPhotoOutput0700
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPhotoOutput0700', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutput();
      let canAddPhotoOutput = cameraObj.oHCaptureSessionCanAddPhotoOutput(2);
      console.log(TAG + "canAddPhotoOutput: " + canAddPhotoOutput.isAddPhotoOutput);
      console.log(TAG+"testOHCaptureSessionCanAddPhotoOutput0700:"+canAddPhotoOutput.errorCode);
      expect(canAddPhotoOutput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPhotoOutput0800
     * @tc.name       : testOHCaptureSessionCanAddPhotoOutput0800
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPhotoOutput0800', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutput();
      let canAddPhotoOutput = cameraObj.oHCaptureSessionCanAddPhotoOutput(3);
      console.log(TAG + "canAddPhotoOutput: " + canAddPhotoOutput.isAddPhotoOutput);
      console.log(TAG+"testOHCaptureSessionCanAddPhotoOutput0800:"+canAddPhotoOutput.errorCode);
      expect(canAddPhotoOutput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddPhotoOutput0900
     * @tc.name       : testOHCaptureSessionCanAddPhotoOutput0900
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddPhotoOutput0900', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      let supportedSceneModes = getSupportedSceneModes();
      console.log(TAG+"getSupportedSceneModesSize is called. sceneModesSize is "+supportedSceneModes.sceneModesSize);
      if (!supportedSceneModes.isSecurePhoto) {
        console.log(TAG+"SECURE_PHOTO is not supported");
        expect(supportedSceneModes.isSecurePhoto).assertEqual(false);
      } else {
        setSceneMode(Camera_SceneMode.SECURE_PHOTO);
        setSessionMode();
        createPreviewOutput();
        createCameraInput();
        sessionFlow();
        createPhotoOutput();
        let canAddPhotoOutput = cameraObj.oHCaptureSessionCanAddPhotoOutput(0);
        console.log(TAG + "canAddPhotoOutput: " + canAddPhotoOutput.isAddPhotoOutput);
        console.log(TAG+"testOHCaptureSessionCanAddPhotoOutput0900:"+canAddPhotoOutput.errorCode);
        expect(canAddPhotoOutput.errorCode).assertEqual(CAMERA_OK);
        expect(canAddPhotoOutput.isAddPhotoOutput).assertEqual(false);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddVideoOutput0100
     * @tc.name       : testOHCaptureSessionCanAddVideoOutput0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddVideoOutput0100', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createVideoOutput();
      let canAddVideoOutput = cameraObj.oHCaptureSessionCanAddVideoOutput(0);
      console.log(TAG + "canAddVideoOutput: " + canAddVideoOutput.isAddVideoOutput);
      expect(canAddVideoOutput.isAddVideoOutput).assertEqual(true);
      console.log(TAG+"testOHCaptureSessionCanAddVideoOutput0100:"+canAddVideoOutput.errorCode);
      expect(canAddVideoOutput.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddVideoOutput0200
     * @tc.name       : testOHCaptureSessionCanAddVideoOutput0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddVideoOutput0200', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createVideoOutput();
      let canAddVideoOutput = cameraObj.oHCaptureSessionCanAddVideoOutput(1);
      console.log(TAG + "canAddVideoOutput: " + canAddVideoOutput.isAddVideoOutput);
      console.log(TAG+"testOHCaptureSessionCanAddVideoOutput0200:"+canAddVideoOutput.errorCode);
      expect(canAddVideoOutput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddVideoOutput0300
     * @tc.name       : testOHCaptureSessionCanAddVideoOutput0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddVideoOutput0300', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createVideoOutput();
      let canAddVideoOutput = cameraObj.oHCaptureSessionCanAddVideoOutput(2);
      console.log(TAG + "canAddVideoOutput: " + canAddVideoOutput.isAddVideoOutput);
      console.log(TAG+"testOHCaptureSessionCanAddVideoOutput0300:"+canAddVideoOutput.errorCode);
      expect(canAddVideoOutput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddVideoOutput0400
     * @tc.name       : testOHCaptureSessionCanAddVideoOutput0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddVideoOutput0400', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createVideoOutput();
      let canAddVideoOutput = cameraObj.oHCaptureSessionCanAddVideoOutput(3);
      console.log(TAG + "canAddVideoOutput: " + canAddVideoOutput.isAddVideoOutput);
      console.log(TAG+"testOHCaptureSessionCanAddVideoOutput0400:"+canAddVideoOutput.errorCode);
      expect(canAddVideoOutput.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddVideoOutput0500
     * @tc.name       : testOHCaptureSessionCanAddVideoOutput0500
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddVideoOutput0500', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createVideoOutput();
      let canAddVideoOutput = cameraObj.oHCaptureSessionCanAddVideoOutput(0);
      console.log(TAG + "canAddVideoOutput: " + canAddVideoOutput.isAddVideoOutput);
      console.log(TAG+"testOHCaptureSessionCanAddVideoOutput0500:"+canAddVideoOutput.errorCode);
      expect(canAddVideoOutput.errorCode).assertEqual(CAMERA_OK);
      expect(canAddVideoOutput.isAddVideoOutput).assertEqual(false);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddVideoOutput0600
     * @tc.name       : testOHCaptureSessionCanAddVideoOutput0600
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanAddVideoOutput0600', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      let supportedSceneModes = getSupportedSceneModes();
      console.log(TAG+"getSupportedSceneModesSize is called. sceneModesSize is "+supportedSceneModes.sceneModesSize);
      if (!supportedSceneModes.isSecurePhoto) {
        console.log(TAG+"SECURE_PHOTO is not supported");
        expect(supportedSceneModes.isSecurePhoto).assertEqual(false);
      } else {
        setSceneMode(Camera_SceneMode.SECURE_PHOTO);
        setSessionMode();
        createPreviewOutput();
        createCameraInput();
        sessionFlow();
        createVideoOutput();
        let canAddVideoOutput = cameraObj.oHCaptureSessionCanAddVideoOutput(0);
        console.log(TAG + "canAddVideoOutput: " + canAddVideoOutput.isAddVideoOutput);
        console.log(TAG+"testOHCaptureSessionCanAddVideoOutput0600:"+canAddVideoOutput.errorCode);
        expect(canAddVideoOutput.errorCode).assertEqual(CAMERA_OK);
        expect(canAddVideoOutput.isAddVideoOutput).assertEqual(false);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionRegisterCallbackOn0100
     * @tc.name       : testOHCaptureSessionRegisterCallbackOn0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionRegisterCallbackOn0100', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionRegisterCallbackOn(1);
      console.log(TAG+"testOHCaptureSessionRegisterCallbackOn0100:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionRegisterCallbackOn0200
     * @tc.name       : testOHCaptureSessionRegisterCallbackOn0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionRegisterCallbackOn0200', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionRegisterCallbackOn(2);
      console.log(TAG+"testOHCaptureSessionRegisterCallbackOn0200:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionRegisterCallbackOn0300
     * @tc.name       : testOHCaptureSessionRegisterCallbackOn0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionRegisterCallbackOn0300', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionRegisterCallbackOn(3);
      console.log(TAG+"testOHCaptureSessionRegisterCallbackOn0300:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionUnregisterCallbackOff0100
     * @tc.name       : testOHCaptureSessionUnregisterCallbackOff0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionUnregisterCallbackOff0100', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionUnregisterCallbackOff(1);
      console.log(TAG+"testOHCaptureSessionUnregisterCallbackOff0100:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionUnregisterCallbackOff0200
     * @tc.name       : testOHCaptureSessionUnregisterCallbackOff0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionUnregisterCallbackOff0200', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      cameraObj.oHCaptureSessionRegisterCallbackOn(2);
      let ret = cameraObj.oHCaptureSessionUnregisterCallbackOff(2);
      console.log(TAG+"testOHCaptureSessionUnregisterCallbackOff0200:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionUnregisterCallbackOff0300
     * @tc.name       : testOHCaptureSessionUnregisterCallbackOff0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionUnregisterCallbackOff0300', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      cameraObj.oHCaptureSessionRegisterCallbackOn(3);
      let ret = cameraObj.oHCaptureSessionUnregisterCallbackOff(3);
      console.log(TAG+"testOHCaptureSessionUnregisterCallbackOff0300:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfig0100
     * @tc.name       : testOHCaptureSessionCanPreconfig0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfig0100', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfig(Camera_PreconfigType.PRECONFIG_720P, 0);
      if (!ret.canPreconfig) {
        expect(ret.canPreconfig).assertEqual(false);
      } else {
        expect(ret.canPreconfig).assertEqual(true);
      }
      console.log(TAG+"testOHCaptureSessionCanPreconfig0100 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfig0100:"+ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfig0200
     * @tc.name       : testOHCaptureSessionCanPreconfig0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfig0200', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfig(Camera_PreconfigType.PRECONFIG_1080P, 0);
      if (!ret.canPreconfig) {
        expect(ret.canPreconfig).assertEqual(false);
      } else {
        expect(ret.canPreconfig).assertEqual(true);
      }
      console.log(TAG+"testOHCaptureSessionCanPreconfig0200 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfig0200:"+ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfig0300
     * @tc.name       : testOHCaptureSessionCanPreconfig0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfig0300', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfig(Camera_PreconfigType.PRECONFIG_4K, 0);
      if (!ret.canPreconfig) {
        expect(ret.canPreconfig).assertEqual(false);
      } else {
        expect(ret.canPreconfig).assertEqual(true);
      }
      console.log(TAG+"testOHCaptureSessionCanPreconfig0300 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfig0300:"+ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfig0400
     * @tc.name       : testOHCaptureSessionCanPreconfig0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfig0400', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfig(Camera_PreconfigType.PRECONFIG_HIGH_QUALITY, 0);
      if (!ret.canPreconfig) {
        expect(ret.canPreconfig).assertEqual(false);
      } else {
        expect(ret.canPreconfig).assertEqual(true);
      }
      console.log(TAG+"testOHCaptureSessionCanPreconfig0400 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfig0400:"+ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfig0500
     * @tc.name       : testOHCaptureSessionCanPreconfig0500
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfig0500', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfig(Camera_PreconfigType.PRECONFIG_720P, 1);
      expect(ret.canPreconfig).assertEqual(false);
      console.log(TAG+"testOHCaptureSessionCanPreconfig0500 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfig0500:"+ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfig0600
     * @tc.name       : testOHCaptureSessionCanPreconfig0600
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfig0600', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfig(Camera_PreconfigType.EXCEPTION_ENUMERATION_VALUE, 0);
      expect(ret.canPreconfig).assertEqual(false);
      console.log(TAG+"testOHCaptureSessionCanPreconfig0600 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfig0600:"+ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfig0700
     * @tc.name       : testOHCaptureSessionCanPreconfig0700
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfig0700', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfig(Camera_PreconfigType.PRECONFIG_720P, 2);
      expect(ret.canPreconfig).assertEqual(false);
      console.log(TAG+"testOHCaptureSessionCanPreconfig0700 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfig0700:"+ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfigWithRatio0100
     * @tc.name       : testOHCaptureSessionCanPreconfigWithRatio0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfigWithRatio0100', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_720P,
          Camera_PreconfigRatio.PRECONFIG_RATIO_1, 0);
      if (!ret.canPreconfig) {
        expect(ret.canPreconfig).assertEqual(false);
      } else {
        expect(ret.canPreconfig).assertEqual(true);
      }
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio0100 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio0100:" + ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfigWithRatio0200
     * @tc.name       : testOHCaptureSessionCanPreconfigWithRatio0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfigWithRatio0200', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_1080P,
          Camera_PreconfigRatio.PRECONFIG_RATIO_1, 0);
      if (!ret.canPreconfig) {
        expect(ret.canPreconfig).assertEqual(false);
      } else {
        expect(ret.canPreconfig).assertEqual(true);
      }
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio0200 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio0200:" + ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfigWithRatio0300
     * @tc.name       : testOHCaptureSessionCanPreconfigWithRatio0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfigWithRatio0300', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_4K,
          Camera_PreconfigRatio.PRECONFIG_RATIO_1, 0);
      if (!ret.canPreconfig) {
        expect(ret.canPreconfig).assertEqual(false);
      } else {
        expect(ret.canPreconfig).assertEqual(true);
      }
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio0300 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio0300:" + ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfigWithRatio0400
     * @tc.name       : testOHCaptureSessionCanPreconfigWithRatio0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfigWithRatio0400', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_HIGH_QUALITY,
          Camera_PreconfigRatio.PRECONFIG_RATIO_1, 0);
      if (!ret.canPreconfig) {
        expect(ret.canPreconfig).assertEqual(false);
      } else {
        expect(ret.canPreconfig).assertEqual(true);
      }
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio0400 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio0400:" + ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfigWithRatio0500
     * @tc.name       : testOHCaptureSessionCanPreconfigWithRatio0500
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfigWithRatio0500', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_720P,
          Camera_PreconfigRatio.PRECONFIG_RATIO_4, 0);
      if (!ret.canPreconfig) {
        expect(ret.canPreconfig).assertEqual(false);
      } else {
        expect(ret.canPreconfig).assertEqual(true);
      }
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio0500 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio0500:" + ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfigWithRatio0600
     * @tc.name       : testOHCaptureSessionCanPreconfigWithRatio0600
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfigWithRatio0600', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_1080P,
          Camera_PreconfigRatio.PRECONFIG_RATIO_4, 0);
      if (!ret.canPreconfig) {
        expect(ret.canPreconfig).assertEqual(false);
      } else {
        expect(ret.canPreconfig).assertEqual(true);
      }
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio0600 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio0600:" + ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfigWithRatio0700
     * @tc.name       : testOHCaptureSessionCanPreconfigWithRatio0700
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfigWithRatio0700', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_4K,
          Camera_PreconfigRatio.PRECONFIG_RATIO_4, 0);
      if (!ret.canPreconfig) {
        expect(ret.canPreconfig).assertEqual(false);
      } else {
        expect(ret.canPreconfig).assertEqual(true);
      }
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio0700 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio0700:" + ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfigWithRatio0800
     * @tc.name       : testOHCaptureSessionCanPreconfigWithRatio0800
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfigWithRatio0800', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_HIGH_QUALITY,
          Camera_PreconfigRatio.PRECONFIG_RATIO_4, 0);
      if (!ret.canPreconfig) {
        expect(ret.canPreconfig).assertEqual(false);
      } else {
        expect(ret.canPreconfig).assertEqual(true);
      }
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio0800 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio0800:" + ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfigWithRatio0900
     * @tc.name       : testOHCaptureSessionCanPreconfigWithRatio0900
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfigWithRatio0900', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_720P,
          Camera_PreconfigRatio.PRECONFIG_RATIO_16, 0);
      if (!ret.canPreconfig) {
        expect(ret.canPreconfig).assertEqual(false);
      } else {
        expect(ret.canPreconfig).assertEqual(true);
      }
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio0900 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio0900:" + ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfigWithRatio1000
     * @tc.name       : testOHCaptureSessionCanPreconfigWithRatio1000
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfigWithRatio1000', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_1080P,
          Camera_PreconfigRatio.PRECONFIG_RATIO_16, 0);
      if (!ret.canPreconfig) {
        expect(ret.canPreconfig).assertEqual(false);
      } else {
        expect(ret.canPreconfig).assertEqual(true);
      }
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio1000 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio1000:" + ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfigWithRatio1100
     * @tc.name       : testOHCaptureSessionCanPreconfigWithRatio1100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfigWithRatio1100', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_4K,
          Camera_PreconfigRatio.PRECONFIG_RATIO_16, 0);
      if (!ret.canPreconfig) {
        expect(ret.canPreconfig).assertEqual(false);
      } else {
        expect(ret.canPreconfig).assertEqual(true);
      }
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio1100 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio1100:" + ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfigWithRatio1200
     * @tc.name       : testOHCaptureSessionCanPreconfigWithRatio1200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfigWithRatio1200', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_HIGH_QUALITY,
          Camera_PreconfigRatio.PRECONFIG_RATIO_16, 0);
      if (!ret.canPreconfig) {
        expect(ret.canPreconfig).assertEqual(false);
      } else {
        expect(ret.canPreconfig).assertEqual(true);
      }
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio1200 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio1200:" + ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfigWithRatio1300
     * @tc.name       : testOHCaptureSessionCanPreconfigWithRatio1300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfigWithRatio1300', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_720P,
          Camera_PreconfigRatio.PRECONFIG_RATIO_1, 1);
      expect(ret.canPreconfig).assertEqual(false);
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio1300 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio1300:" + ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfigWithRatio1400
     * @tc.name       : testOHCaptureSessionCanPreconfigWithRatio1400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfigWithRatio1400', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.EXCEPTION_ENUMERATION_VALUE,
          Camera_PreconfigRatio.PRECONFIG_RATIO_1, 0);
      expect(ret.canPreconfig).assertEqual(false);
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio1400 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio1400:" + ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfigWithRatio1500
     * @tc.name       : testOHCaptureSessionCanPreconfigWithRatio1500
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfigWithRatio1500', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_720P,
          Camera_PreconfigRatio.EXCEPTION_ENUMERATION_VALUE, 0);
      expect(ret.canPreconfig).assertEqual(false);
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio1500 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio1500:" + ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanPreconfigWithRatio1600
     * @tc.name       : testOHCaptureSessionCanPreconfigWithRatio1600
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionCanPreconfigWithRatio1600', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_720P,
          Camera_PreconfigRatio.PRECONFIG_RATIO_1, 2);
      expect(ret.canPreconfig).assertEqual(false);
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio1600 canPreconfig: " + ret.canPreconfig);
      console.log(TAG+"testOHCaptureSessionCanPreconfigWithRatio1600:" + ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfig0100
     * @tc.name       : testOHCaptureSessionPreconfig0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfig0100', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfig(Camera_PreconfigType.PRECONFIG_720P, 0);
      console.log(TAG+"testOHCaptureSessionPreconfig0100 canPreconfig: " + ret.canPreconfig);
      if (ret.canPreconfig) {
        let preconfig = cameraObj.oHCaptureSessionPreconfig(Camera_PreconfigType.PRECONFIG_720P, 0);
        console.log(TAG+"testOHCaptureSessionPreconfig0100:"+preconfig)
        expect(preconfig).assertEqual(CAMERA_OK);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfig0200
     * @tc.name       : testOHCaptureSessionPreconfig0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfig0200', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfig(Camera_PreconfigType.PRECONFIG_1080P, 0);
      console.log(TAG+"testOHCaptureSessionPreconfig0200 canPreconfig: " + ret.canPreconfig);
      if (ret.canPreconfig) {
        let preconfig = cameraObj.oHCaptureSessionPreconfig(Camera_PreconfigType.PRECONFIG_1080P, 0);
        console.log(TAG+"testOHCaptureSessionPreconfig0200:"+preconfig)
        expect(preconfig).assertEqual(CAMERA_OK);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfig0300
     * @tc.name       : testOHCaptureSessionPreconfig0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfig0300', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfig(Camera_PreconfigType.PRECONFIG_4K, 0);
      console.log(TAG+"testOHCaptureSessionPreconfig0300 canPreconfig: " + ret.canPreconfig);
      if (ret.canPreconfig) {
        let preconfig = cameraObj.oHCaptureSessionPreconfig(Camera_PreconfigType.PRECONFIG_4K, 0);
        console.log(TAG+"testOHCaptureSessionPreconfig0300:"+preconfig)
        expect(preconfig).assertEqual(CAMERA_OK);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfig0400
     * @tc.name       : testOHCaptureSessionPreconfig0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfig0400', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfig(Camera_PreconfigType.PRECONFIG_HIGH_QUALITY, 0);
      console.log(TAG+"testOHCaptureSessionPreconfig0400 canPreconfig: " + ret.canPreconfig);
      if (ret.canPreconfig) {
        let preconfig = cameraObj.oHCaptureSessionPreconfig(Camera_PreconfigType.PRECONFIG_HIGH_QUALITY, 0);
        console.log(TAG+"testOHCaptureSessionPreconfig0400:"+preconfig)
        expect(preconfig).assertEqual(CAMERA_OK);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfig0500
     * @tc.name       : testOHCaptureSessionPreconfig0500
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfig0500', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfig(Camera_PreconfigType.PRECONFIG_720P, 0);
      console.log(TAG+"testOHCaptureSessionPreconfig0500 canPreconfig: " + ret.canPreconfig);
      if (ret.canPreconfig) {
        let preconfig = cameraObj.oHCaptureSessionPreconfig(Camera_PreconfigType.PRECONFIG_720P, 1);
        console.log(TAG+"testOHCaptureSessionPreconfig0500:"+preconfig);
        expect(preconfig).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfig0600
     * @tc.name       : testOHCaptureSessionPreconfig0600
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfig0600', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfig(Camera_PreconfigType.PRECONFIG_720P, 0);
      console.log(TAG+"testOHCaptureSessionPreconfig0600 canPreconfig: " + ret.canPreconfig);
      if (ret.canPreconfig) {
        let preconfig = cameraObj.oHCaptureSessionPreconfig(Camera_PreconfigType.EXCEPTION_ENUMERATION_VALUE, 0);
        console.log(TAG+"testOHCaptureSessionPreconfig0600:"+preconfig);
        expect(preconfig).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfigWithRatio0100
     * @tc.name       : testOHCaptureSessionPreconfigWithRatio0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfigWithRatio0100', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_720P,
          Camera_PreconfigRatio.PRECONFIG_RATIO_1, 0);
      if (ret.canPreconfig) {
        let preconfigWithRatio = cameraObj.oHCaptureSessionPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_720P,
            Camera_PreconfigRatio.PRECONFIG_RATIO_1, 0);
        console.log(TAG+"testOHCaptureSessionPreconfigWithRatio0100:"+preconfigWithRatio);
        expect(preconfigWithRatio).assertEqual(CAMERA_OK);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfigWithRatio0200
     * @tc.name       : testOHCaptureSessionPreconfigWithRatio0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfigWithRatio0200', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_1080P,
          Camera_PreconfigRatio.PRECONFIG_RATIO_1, 0);
      if (ret.canPreconfig) {
        let preconfigWithRatio = cameraObj.oHCaptureSessionPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_1080P,
            Camera_PreconfigRatio.PRECONFIG_RATIO_1, 0);
        console.log(TAG+"testOHCaptureSessionPreconfigWithRatio0200:"+preconfigWithRatio);
        expect(preconfigWithRatio).assertEqual(CAMERA_OK);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfigWithRatio0300
     * @tc.name       : testOHCaptureSessionPreconfigWithRatio0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfigWithRatio0300', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_4K,
          Camera_PreconfigRatio.PRECONFIG_RATIO_1, 0);
      if (ret.canPreconfig) {
        let preconfigWithRatio = cameraObj.oHCaptureSessionPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_4K,
            Camera_PreconfigRatio.PRECONFIG_RATIO_1, 0);
        console.log(TAG+"testOHCaptureSessionPreconfigWithRatio0300:"+preconfigWithRatio);
        expect(preconfigWithRatio).assertEqual(CAMERA_OK);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfigWithRatio0400
     * @tc.name       : testOHCaptureSessionPreconfigWithRatio0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfigWithRatio0400', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_HIGH_QUALITY,
          Camera_PreconfigRatio.PRECONFIG_RATIO_1, 0);
      if (ret.canPreconfig) {
        let preconfigWithRatio = cameraObj.oHCaptureSessionPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_HIGH_QUALITY,
            Camera_PreconfigRatio.PRECONFIG_RATIO_1, 0);
        console.log(TAG+"testOHCaptureSessionPreconfigWithRatio0400:"+preconfigWithRatio);
        expect(preconfigWithRatio).assertEqual(CAMERA_OK);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfigWithRatio0500
     * @tc.name       : testOHCaptureSessionPreconfigWithRatio0500
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfigWithRatio0500', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_720P,
          Camera_PreconfigRatio.PRECONFIG_RATIO_4, 0);
      if (ret.canPreconfig) {
        let preconfigWithRatio = cameraObj.oHCaptureSessionPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_720P,
            Camera_PreconfigRatio.PRECONFIG_RATIO_4, 0);
        console.log(TAG+"testOHCaptureSessionPreconfigWithRatio0500:"+preconfigWithRatio);
        expect(preconfigWithRatio).assertEqual(CAMERA_OK);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfigWithRatio0600
     * @tc.name       : testOHCaptureSessionPreconfigWithRatio0600
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfigWithRatio0600', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_1080P,
          Camera_PreconfigRatio.PRECONFIG_RATIO_4, 0);
      if (ret.canPreconfig) {
        let preconfigWithRatio = cameraObj.oHCaptureSessionPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_1080P,
            Camera_PreconfigRatio.PRECONFIG_RATIO_4, 0);
        console.log(TAG+"testOHCaptureSessionPreconfigWithRatio0600:"+preconfigWithRatio);
        expect(preconfigWithRatio).assertEqual(CAMERA_OK);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfigWithRatio0700
     * @tc.name       : testOHCaptureSessionPreconfigWithRatio0700
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfigWithRatio0700', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_4K,
          Camera_PreconfigRatio.PRECONFIG_RATIO_4, 0);
      if (ret.canPreconfig) {
        let preconfigWithRatio = cameraObj.oHCaptureSessionPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_4K,
            Camera_PreconfigRatio.PRECONFIG_RATIO_4, 0);
        console.log(TAG+"testOHCaptureSessionPreconfigWithRatio0700:"+preconfigWithRatio);
        expect(preconfigWithRatio).assertEqual(CAMERA_OK);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfigWithRatio0800
     * @tc.name       : testOHCaptureSessionPreconfigWithRatio0800
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfigWithRatio0800', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_HIGH_QUALITY,
          Camera_PreconfigRatio.PRECONFIG_RATIO_4, 0);
      if (ret.canPreconfig) {
        let preconfigWithRatio = cameraObj.oHCaptureSessionPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_HIGH_QUALITY,
            Camera_PreconfigRatio.PRECONFIG_RATIO_4, 0);
        console.log(TAG+"testOHCaptureSessionPreconfigWithRatio0800:"+preconfigWithRatio);
        expect(preconfigWithRatio).assertEqual(CAMERA_OK);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfigWithRatio0900
     * @tc.name       : testOHCaptureSessionPreconfigWithRatio0900
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfigWithRatio0900', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_720P,
          Camera_PreconfigRatio.PRECONFIG_RATIO_16, 0);
      if (ret.canPreconfig) {
        let preconfigWithRatio = cameraObj.oHCaptureSessionPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_720P,
            Camera_PreconfigRatio.PRECONFIG_RATIO_16, 0);
        console.log(TAG+"testOHCaptureSessionPreconfigWithRatio0900:"+preconfigWithRatio);
        expect(preconfigWithRatio).assertEqual(CAMERA_OK);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfigWithRatio1000
     * @tc.name       : testOHCaptureSessionPreconfigWithRatio1000
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfigWithRatio1000', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_1080P,
          Camera_PreconfigRatio.PRECONFIG_RATIO_16, 0);
      if (ret.canPreconfig) {
        let preconfigWithRatio = cameraObj.oHCaptureSessionPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_1080P,
            Camera_PreconfigRatio.PRECONFIG_RATIO_16, 0);
        console.log(TAG+"testOHCaptureSessionPreconfigWithRatio1000:"+preconfigWithRatio);
        expect(preconfigWithRatio).assertEqual(CAMERA_OK);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfigWithRatio1100
     * @tc.name       : testOHCaptureSessionPreconfigWithRatio1100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfigWithRatio1100', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_4K,
          Camera_PreconfigRatio.PRECONFIG_RATIO_16, 0);
      if (ret.canPreconfig) {
        let preconfigWithRatio = cameraObj.oHCaptureSessionPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_4K,
            Camera_PreconfigRatio.PRECONFIG_RATIO_16, 0);
        console.log(TAG+"testOHCaptureSessionPreconfigWithRatio1100:"+preconfigWithRatio);
        expect(preconfigWithRatio).assertEqual(CAMERA_OK);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfigWithRatio1200
     * @tc.name       : testOHCaptureSessionPreconfigWithRatio1200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfigWithRatio1200', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_HIGH_QUALITY,
          Camera_PreconfigRatio.PRECONFIG_RATIO_16, 0);
      if (ret.canPreconfig) {
        let preconfigWithRatio = cameraObj.oHCaptureSessionPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_HIGH_QUALITY,
            Camera_PreconfigRatio.PRECONFIG_RATIO_16, 0);
        console.log(TAG+"testOHCaptureSessionPreconfigWithRatio1200:"+preconfigWithRatio);
        expect(preconfigWithRatio).assertEqual(CAMERA_OK);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfigWithRatio1300
     * @tc.name       : testOHCaptureSessionPreconfigWithRatio1300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfigWithRatio1300', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_720P,
          Camera_PreconfigRatio.PRECONFIG_RATIO_1, 0);
      if (ret.canPreconfig) {
        let preconfigWithRatio = cameraObj.oHCaptureSessionPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_720P,
            Camera_PreconfigRatio.PRECONFIG_RATIO_1, 1);
        console.log(TAG+"testOHCaptureSessionPreconfigWithRatio1300:"+preconfigWithRatio);
        expect(preconfigWithRatio).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfigWithRatio1400
     * @tc.name       : testOHCaptureSessionPreconfigWithRatio1400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfigWithRatio1400', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_720P,
          Camera_PreconfigRatio.PRECONFIG_RATIO_1, 0);
      if (ret.canPreconfig) {
        let preconfigWithRatio = cameraObj.oHCaptureSessionPreconfigWithRatio(Camera_PreconfigType.EXCEPTION_ENUMERATION_VALUE,
            Camera_PreconfigRatio.PRECONFIG_RATIO_1, 0);
        console.log(TAG+"testOHCaptureSessionPreconfigWithRatio1400:"+preconfigWithRatio);
        expect(preconfigWithRatio).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionPreconfigWithRatio1500
     * @tc.name       : testOHCaptureSessionPreconfigWithRatio1500
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionPreconfigWithRatio1500', 0, () => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      let ret = cameraObj.oHCaptureSessionCanPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_720P,
          Camera_PreconfigRatio.PRECONFIG_RATIO_1, 0);
      if (ret.canPreconfig) {
        let preconfigWithRatio = cameraObj.oHCaptureSessionPreconfigWithRatio(Camera_PreconfigType.PRECONFIG_720P,
            Camera_PreconfigRatio.EXCEPTION_ENUMERATION_VALUE, 0);
        console.log(TAG+"testOHCaptureSessionPreconfigWithRatio1500:"+preconfigWithRatio);
        expect(preconfigWithRatio).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCameraManagerCreatePreviewOutputUsedInPreconfig0100
     * @tc.name       : testOHCameraManagerCreatePreviewOutputUsedInPreconfig0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreatePreviewOutputUsedInPreconfig0100', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      if (canPreconfig) {
        let ret = cameraObj.oHCameraManagerCreatePreviewOutputUsedInPreconfig(0);
        console.log(TAG+"testOHCameraManagerCreatePreviewOutputUsedInPreconfig0100:"+ret);
        expect(ret).assertEqual(CAMERA_OK);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCameraManagerCreatePreviewOutputUsedInPreconfig0200
     * @tc.name       : testOHCameraManagerCreatePreviewOutputUsedInPreconfig0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreatePreviewOutputUsedInPreconfig0200', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      if (canPreconfig) {
        let ret = cameraObj.oHCameraManagerCreatePreviewOutputUsedInPreconfig(1);
        console.log(TAG+"testOHCameraManagerCreatePreviewOutputUsedInPreconfig0200:"+ret);
        expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCameraManagerCreatePreviewOutputUsedInPreconfig0300
     * @tc.name       : testOHCameraManagerCreatePreviewOutputUsedInPreconfig0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreatePreviewOutputUsedInPreconfig0300', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      if (canPreconfig) {
        let ret = cameraObj.oHCameraManagerCreatePreviewOutputUsedInPreconfig(2);
        console.log(TAG+"testOHCameraManagerCreatePreviewOutputUsedInPreconfig0300:"+ret);
        expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCameraManagerCreatePreviewOutputUsedInPreconfig0400
     * @tc.name       : testOHCameraManagerCreatePreviewOutputUsedInPreconfig0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreatePreviewOutputUsedInPreconfig0400', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      if (canPreconfig) {
        let ret = cameraObj.oHCameraManagerCreatePreviewOutputUsedInPreconfig(3);
        console.log(TAG+"testOHCameraManagerCreatePreviewOutputUsedInPreconfig0400:"+ret);
        expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCameraManagerCreatePreviewOutputUsedInPreconfig0500
     * @tc.name       : testOHCameraManagerCreatePreviewOutputUsedInPreconfig0500
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreatePreviewOutputUsedInPreconfig0500', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      if (canPreconfig) {
        let ret = cameraObj.oHCameraManagerCreatePreviewOutputUsedInPreconfig(4);
        console.log(TAG+"testOHCameraManagerCreatePreviewOutputUsedInPreconfig0500:"+ret);
        expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCameraManagerCreatePhotoOutputUsedInPreconfig0100
     * @tc.name       : testOHCameraManagerCreatePhotoOutputUsedInPreconfig0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreatePhotoOutputUsedInPreconfig0100', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      sessionFlow();
      if (canPreconfig) {
        let ret = cameraObj.oHCameraManagerCreatePhotoOutputUsedInPreconfig(mPhotoSurface, 0)
        console.log(TAG+"testOHCameraManagerCreatePhotoOutputUsedInPreconfig0100:"+ret);
        expect(ret).assertEqual(CAMERA_OK);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCameraManagerCreatePhotoOutputUsedInPreconfig0200
     * @tc.name       : testOHCameraManagerCreatePhotoOutputUsedInPreconfig0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreatePhotoOutputUsedInPreconfig0200', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      sessionFlow();
      if (canPreconfig) {
        let ret = cameraObj.oHCameraManagerCreatePhotoOutputUsedInPreconfig(mPhotoSurface, 1)
        console.log(TAG+"testOHCameraManagerCreatePhotoOutputUsedInPreconfig0200:"+ret);
        expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCameraManagerCreatePhotoOutputUsedInPreconfig0300
     * @tc.name       : testOHCameraManagerCreatePhotoOutputUsedInPreconfig0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreatePhotoOutputUsedInPreconfig0300', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      sessionFlow();
      if (canPreconfig) {
        let ret = cameraObj.oHCameraManagerCreatePhotoOutputUsedInPreconfig(mPhotoSurface, 2)
        console.log(TAG+"testOHCameraManagerCreatePhotoOutputUsedInPreconfig0300:"+ret);
        expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCameraManagerCreatePhotoOutputUsedInPreconfig0400
     * @tc.name       : testOHCameraManagerCreatePhotoOutputUsedInPreconfig0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreatePhotoOutputUsedInPreconfig0400', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      sessionFlow();
      if (canPreconfig) {
        let ret = cameraObj.oHCameraManagerCreatePhotoOutputUsedInPreconfig(mPhotoSurface, 3)
        console.log(TAG+"testOHCameraManagerCreatePhotoOutputUsedInPreconfig0400:"+ret);
        expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCameraManagerCreatePhotoOutputUsedInPreconfig0500
     * @tc.name       : testOHCameraManagerCreatePhotoOutputUsedInPreconfig0500
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreatePhotoOutputUsedInPreconfig0500', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      sessionFlow();
      if (canPreconfig) {
        let ret = cameraObj.oHCameraManagerCreatePhotoOutputUsedInPreconfig(mPhotoSurface, 4)
        console.log(TAG+"testOHCameraManagerCreatePhotoOutputUsedInPreconfig0500:"+ret);
        expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
    })
     /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCameraManagerCreateVideoOutputUsedInPreconfig0100
     * @tc.name       : testOHCameraManagerCreateVideoOutputUsedInPreconfig0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreateVideoOutputUsedInPreconfig0100', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      sessionFlow();
      createPhotoOutputUsedInPreconfig(canPreconfig);
      addPhotoOutput();
      if (canPreconfig) {
        let ret = cameraObj.oHCameraManagerCreateVideoOutputUsedInPreconfig(videoSurfaceId, 0);
        console.log(TAG+"testOHCameraManagerCreateVideoOutputUsedInPreconfig0100:"+ret);
        expect(ret).assertEqual(CAMERA_OK);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCameraManagerCreateVideoOutputUsedInPreconfig0200
     * @tc.name       : testOHCameraManagerCreateVideoOutputUsedInPreconfig0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreateVideoOutputUsedInPreconfig0200', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      sessionFlow();
      createPhotoOutputUsedInPreconfig(canPreconfig);
      addPhotoOutput();
      if (canPreconfig) {
        let ret = cameraObj.oHCameraManagerCreateVideoOutputUsedInPreconfig(videoSurfaceId, 1);
        console.log(TAG+"testOHCameraManagerCreateVideoOutputUsedInPreconfig0200:"+ret);
        expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCameraManagerCreateVideoOutputUsedInPreconfig0300
     * @tc.name       : testOHCameraManagerCreateVideoOutputUsedInPreconfig0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreateVideoOutputUsedInPreconfig0300', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      sessionFlow();
      createPhotoOutputUsedInPreconfig(canPreconfig);
      addPhotoOutput();
      if (canPreconfig) {
        let ret = cameraObj.oHCameraManagerCreateVideoOutputUsedInPreconfig(videoSurfaceId, 2);
        console.log(TAG+"testOHCameraManagerCreateVideoOutputUsedInPreconfig0300:"+ret);
        expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCameraManagerCreateVideoOutputUsedInPreconfig0400
     * @tc.name       : testOHCameraManagerCreateVideoOutputUsedInPreconfig0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreateVideoOutputUsedInPreconfig0400', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      sessionFlow();
      createPhotoOutputUsedInPreconfig(canPreconfig);
      addPhotoOutput();
      if (canPreconfig) {
        let ret = cameraObj.oHCameraManagerCreateVideoOutputUsedInPreconfig(videoSurfaceId, 3);
        console.log(TAG+"testOHCameraManagerCreateVideoOutputUsedInPreconfig0400:"+ret);
        expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCameraManagerCreateVideoOutputUsedInPreconfig0500
     * @tc.name       : testOHCameraManagerCreateVideoOutputUsedInPreconfig0500
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreateVideoOutputUsedInPreconfig0500', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      sessionFlow();
      createPhotoOutputUsedInPreconfig(canPreconfig);
      addPhotoOutput();
      if (canPreconfig) {
        let ret = cameraObj.oHCameraManagerCreateVideoOutputUsedInPreconfig(videoSurfaceId, 4);
        console.log(TAG+"testOHCameraManagerCreateVideoOutputUsedInPreconfig0500:"+ret);
        expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHPreviewOutputGetActiveProfile0100
     * @tc.name       : testOHPreviewOutputGetActiveProfile0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputGetActiveProfile0100', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionBeginConfig();
      addInput();
      addPreviewOutput();
      let ret = cameraObj.oHPreviewOutputGetActiveProfile(0);
      console.log(TAG+"testOHPreviewOutputGetActiveProfile0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
      cameraObj.oHPreviewOutputDeleteProfile(0);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHPreviewOutputGetActiveProfile0200
     * @tc.name       : testOHPreviewOutputGetActiveProfile0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputGetActiveProfile0200', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionBeginConfig();
      addInput();
      addPreviewOutput();
      let ret = cameraObj.oHPreviewOutputGetActiveProfile(1);
      console.log(TAG+"testOHPreviewOutputGetActiveProfile0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHPreviewOutputGetActiveProfile0300
     * @tc.name       : testOHPreviewOutputGetActiveProfile0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputGetActiveProfile0300', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionBeginConfig();
      addInput();
      addPreviewOutput();
      let ret = cameraObj.oHPreviewOutputGetActiveProfile(2);
      console.log(TAG+"testOHPreviewOutputGetActiveProfile0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHPreviewOutputGetActiveProfile0400
     * @tc.name       : testOHPreviewOutputGetActiveProfile0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputGetActiveProfile0400', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      sessionBeginConfig();
      addInput();
      addPreviewOutput();
      let ret = cameraObj.oHPreviewOutputGetActiveProfile(0);
      console.log(TAG+"testOHPreviewOutputGetActiveProfile0400:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
      cameraObj.oHPreviewOutputDeleteProfile(0);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHPreviewOutputGetActiveProfile0500
     * @tc.name       : testOHPreviewOutputGetActiveProfile0500
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputGetActiveProfile0500', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      sessionBeginConfig();
      addInput();
      addPreviewOutput();
      let ret = cameraObj.oHPreviewOutputGetActiveProfile(1);
      console.log(TAG+"testOHPreviewOutputGetActiveProfile0500:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHPreviewOutputGetActiveProfile0600
     * @tc.name       : testOHPreviewOutputGetActiveProfile0600
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputGetActiveProfile0600', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      sessionBeginConfig();
      addInput();
      addPreviewOutput();
      let ret = cameraObj.oHPreviewOutputGetActiveProfile(2);
      console.log(TAG+"testOHPreviewOutputGetActiveProfile0600:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHPreviewOutputDeleteProfile0100
     * @tc.name       : testOHPreviewOutputDeleteProfile0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputDeleteProfile0100', 0, () => {
      getPreviewOutputActiveProfile();
      let ret = cameraObj.oHPreviewOutputDeleteProfile(0);
      console.log(TAG+"testOHPreviewOutputDeleteProfile0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHPreviewOutputDeleteProfile0200
     * @tc.name       : testOHPreviewOutputDeleteProfile0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPreviewOutputDeleteProfile0200', 0, () => {
      getPreviewOutputActiveProfile();
      let ret = cameraObj.oHPreviewOutputDeleteProfile(1);
      console.log(TAG+"testOHPreviewOutputDeleteProfile0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
      cameraObj.oHPreviewOutputDeleteProfile(0);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHVideoOutputGetActiveProfile0100
     * @tc.name       : testOHVideoOutputGetActiveProfile0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputGetActiveProfile0100', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutput();
      addPhotoOutput();
      createVideoOutput();
      addVideoOutput();
      let ret = cameraObj.oHVideoOutputGetActiveProfile(0);
      console.log(TAG+"testOHVideoOutputGetActiveProfile0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
      cameraObj.oHVideoOutputDeleteProfile(0);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHVideoOutputGetActiveProfile0200
     * @tc.name       : testOHVideoOutputGetActiveProfile0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputGetActiveProfile0200', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutput();
      addPhotoOutput();
      createVideoOutput();
      addVideoOutput();
      let ret = cameraObj.oHVideoOutputGetActiveProfile(1);
      console.log(TAG+"testOHVideoOutputGetActiveProfile0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHVideoOutputGetActiveProfile0300
     * @tc.name       : testOHVideoOutputGetActiveProfile0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputGetActiveProfile0300', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutput();
      addPhotoOutput();
      createVideoOutput();
      addVideoOutput();
      let ret = cameraObj.oHVideoOutputGetActiveProfile(2);
      console.log(TAG+"testOHVideoOutputGetActiveProfile0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHVideoOutputGetActiveProfile0400
     * @tc.name       : testOHVideoOutputGetActiveProfile0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputGetActiveProfile0400', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      createCameraInput();
      sessionFlow();
      createPhotoOutputUsedInPreconfig(canPreconfig);
      addPhotoOutput();
      createVideoOutputUsedInPreconfig(canPreconfig);
      addVideoOutput();
      let ret = cameraObj.oHVideoOutputGetActiveProfile(0);
      console.log(TAG+"testOHVideoOutputGetActiveProfile0400:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
      cameraObj.oHVideoOutputDeleteProfile(0);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHVideoOutputGetActiveProfile0500
     * @tc.name       : testOHVideoOutputGetActiveProfile0500
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputGetActiveProfile0500', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      createCameraInput();
      sessionFlow();
      createPhotoOutputUsedInPreconfig(canPreconfig);
      addPhotoOutput();
      createVideoOutputUsedInPreconfig(canPreconfig);
      addVideoOutput();
      let ret = cameraObj.oHVideoOutputGetActiveProfile(1);
      console.log(TAG+"testOHVideoOutputGetActiveProfile0500:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHVideoOutputGetActiveProfile0600
     * @tc.name       : testOHVideoOutputGetActiveProfile0600
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputGetActiveProfile0600', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
      setSessionMode();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      createCameraInput();
      sessionFlow();
      createPhotoOutputUsedInPreconfig(canPreconfig);
      addPhotoOutput();
      createVideoOutputUsedInPreconfig(canPreconfig);
      addVideoOutput();
      let ret = cameraObj.oHVideoOutputGetActiveProfile(2);
      console.log(TAG+"testOHVideoOutputGetActiveProfile0600:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHVideoOutputDeleteProfile0100
     * @tc.name       : testOHVideoOutputDeleteProfile0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputDeleteProfile0100', 0, () => {
      getVideoOutputGetActiveProfile();
      let ret = cameraObj.oHVideoOutputDeleteProfile(0);
      console.log(TAG+"testOHVideoOutputDeleteProfile0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHVideoOutputDeleteProfile0200
     * @tc.name       : testOHVideoOutputDeleteProfile0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputDeleteProfile0200', 0, () => {
      getVideoOutputGetActiveProfile();
      let ret = cameraObj.oHVideoOutputDeleteProfile(1);
      console.log(TAG+"testOHVideoOutputDeleteProfile0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
      cameraObj.oHVideoOutputDeleteProfile(0);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHPhotoOutputGetActiveProfile0100
     * @tc.name       : testOHPhotoOutputGetActiveProfile0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputGetActiveProfile0100', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutput();
      addPhotoOutput();
      let ret = cameraObj.oHPhotoOutputGetActiveProfile(0);
      console.log(TAG+"testOHPhotoOutputGetActiveProfile0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
      cameraObj.oHPhotoOutputDeleteProfile(0);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHPhotoOutputGetActiveProfile0200
     * @tc.name       : testOHPhotoOutputGetActiveProfile0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputGetActiveProfile0200', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutput();
      addPhotoOutput();
      let ret = cameraObj.oHPhotoOutputGetActiveProfile(1);
      console.log(TAG+"testOHPhotoOutputGetActiveProfile0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHPhotoOutputGetActiveProfile0300
     * @tc.name       : testOHPhotoOutputGetActiveProfile0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputGetActiveProfile0300', 0, () => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutput();
      addPhotoOutput();
      let ret = cameraObj.oHPhotoOutputGetActiveProfile(2);
      console.log(TAG+"testOHPhotoOutputGetActiveProfile0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHPhotoOutputGetActiveProfile0400
     * @tc.name       : testOHPhotoOutputGetActiveProfile0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputGetActiveProfile0400', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      createCameraInput();
      sessionFlow();
      createPhotoOutputUsedInPreconfig(canPreconfig);
      addPhotoOutput();
      let ret = cameraObj.oHPhotoOutputGetActiveProfile(0);
      console.log(TAG+"testOHPhotoOutputGetActiveProfile0400:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
      cameraObj.oHPhotoOutputDeleteProfile(0);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHPhotoOutputGetActiveProfile0500
     * @tc.name       : testOHPhotoOutputGetActiveProfile0500
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputGetActiveProfile0500', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      createCameraInput();
      sessionFlow();
      createPhotoOutputUsedInPreconfig(canPreconfig);
      addPhotoOutput();
      let ret = cameraObj.oHPhotoOutputGetActiveProfile(1);
      console.log(TAG+"testOHPhotoOutputGetActiveProfile0500:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHPhotoOutputGetActiveProfile0600
     * @tc.name       : testOHPhotoOutputGetActiveProfile0600
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputGetActiveProfile0600', 0, () => {
      let canPreconfig = captureSessionPreconfig();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      createCameraInput();
      sessionFlow();
      createPhotoOutputUsedInPreconfig(canPreconfig);
      addPhotoOutput();
      let ret = cameraObj.oHPhotoOutputGetActiveProfile(2);
      console.log(TAG+"testOHPhotoOutputGetActiveProfile0600:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHPhotoOutputDeleteProfile0100
     * @tc.name       : testOHPhotoOutputDeleteProfile0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputDeleteProfile0100', 0, () => {
      getPhotoOutputActiveProfile();
      let ret = cameraObj.oHPhotoOutputDeleteProfile(0);
      console.log(TAG+"testOHPhotoOutputDeleteProfile0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHPhotoOutputDeleteProfile0200
     * @tc.name       : testOHPhotoOutputDeleteProfile0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputDeleteProfile0200', 0, () => {
      getPhotoOutputActiveProfile();
      let ret = cameraObj.oHPhotoOutputDeleteProfile(1);
      console.log(TAG+"testOHPhotoOutputDeleteProfile0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
      cameraObj.oHPhotoOutputDeleteProfile(0);
    })
  })
}