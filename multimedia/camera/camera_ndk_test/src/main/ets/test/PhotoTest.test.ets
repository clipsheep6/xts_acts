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
import abilityAccessCtrl from '@ohos.abilityAccessCtrl';
import bundleManager from '@ohos.bundle.bundleManager';
import account from '@ohos.account.osAccount';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import { Camera_FlashMode, Camera_ExposureMode ,Camera_FocusMode,Camera_VideoStabilizationMode,
  Camera_PreconfigType, Camera_PreconfigRatio, Camera_MediaType } from './Constants';
import MediaUtils from './MediaUtils';
import media from '@ohos.multimedia.media';
import { BusinessError } from '@ohos.base';

const TAG = "CAMERA_LOGTAG_JS";
const CAMERA_OK = 0;
const CAMERA_ERROR_7400101 = 7400101; //参数错误
const CAMERA_INVALID_ARGUMENT = 7400101; // 参数错误

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

async function getPhotoReceiverSurface() {
  console.log(TAG + '通过宽、高、图片格式、容量创建ImageReceiver实例。');
  receiver = image.createImageReceiver({ width: 640, height: 480 }, 4, 8);
  if (receiver !== undefined) {
    console.log(TAG + '创建ImageReceiver实例 successfully');
    mPhotoSurface = await receiver.getReceivingSurfaceId();
    console.log(TAG + 'Photo received id: ' + JSON.stringify(mPhotoSurface));
  } else {
    console.log(TAG + '创建ImageReceiver实例 failed');
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

function getSupportedCamerasInstance() {
  let cameraInfo = cameraObj.getSupportedCameras();
  if (isEmpty(cameraInfo)) {
    console.info(TAG + "getSupportedCamerasInstance FAILED");
    expect().assertFail();
  }
}

function createCaptureSession() {
  console.log(TAG + "创建捕获会话实例");
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

function createCameraInput() {
  console.log(TAG + "创建相机输入实例。");
  let ret = cameraObj.createCameraInput();
  cameraObj.cameraInputOpen();
  if (ret != 0) {
    console.log(TAG + "createCameraInput FAILED");
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

  let addInput = cameraObj.sessionAddInput();
  if (addInput != 0) {
    console.info(TAG + "addInput FAILED");
    expect().assertFail();
  }

  let canAddPreviewOutput = cameraObj.oHCaptureSessionCanAddPreviewOutput(0);
  if (canAddPreviewOutput.errorCode != 0) {
    console.info(TAG + "CanAddPreviewOutput FAILED");
    expect().assertFail();
  }

  let addPreviewOutput = cameraObj.sessionAddPreviewOutput();
  if (addPreviewOutput != 0) {
    console.info(TAG + "AddPreviewOutput FAILED");
    expect().assertFail();
  }

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


function sessionStop() {
  let ret = cameraObj.sessionStop();
  if (ret != 0) {
    console.info(TAG + "sessionStop FAILED");
    expect().assertFail();
  }
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

function getSupportedCameraOutputCapability() {
  let cameraOutputCapability = cameraObj.getSupportedOutputCapability();
  console.info(TAG + 'cameraOutputCapability[0] = ' + cameraOutputCapability.previewProfilesSize);
  console.info(TAG + 'cameraOutputCapability[1] = ' + cameraOutputCapability.photoProfilesSize);
  console.info(TAG + 'cameraOutputCapability[2] = ' + cameraOutputCapability.videoProfilesSize);
  console.info(TAG + 'cameraOutputCapability[3] = ' + cameraOutputCapability.metadataProfilesSize);
  return true;
}

function getSupportedCameraOutputCapabilityInstance() {
  getSupportedCameraOutputCapability();

  let output = cameraObj.createPreviewOutput();
  if (output != 0) {
    console.info(TAG + "createPreviewOutputInstance FAILED");
    expect().assertFail();
  }

  let mPhotoOutput = cameraObj.createPhotoOutput(mPhotoSurface);
  if (mPhotoOutput != 0) {
    console.info(TAG + "mPhotoOutput FAILED");
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
  startSession();
  createPhotoOutput();
  let ret = cameraObj.oHPhotoOutputGetActiveProfile(0);
  if (ret != 0) {
    console.info(TAG + "getPhotoOutputActiveProfile FAILED");
    expect().assertFail();
  }
}

function startCameraSession() {
  createCaptureSession();
  sessionBeginConfig();

  createCameraInput();
  getSupportedCameraOutputCapabilityInstance()

  console.log(TAG + "添加相机输入");
  let ret = cameraObj.sessionAddInput();
  if (ret != 0) {
    console.log(TAG + "sessionAddInput FAILED" + ret);
    expect().assertFail();
  }

  let addPreviewOutput = cameraObj.sessionAddPreviewOutput();
  if (addPreviewOutput != 0) {
    console.info(TAG + "captureSessionAddPreviewOutput FAILED");
    expect().assertFail();
  }

  let addPhotoOutput = cameraObj.sessionAddPhotoOutput();
  if (addPhotoOutput != 0) {
    console.info(TAG + "captureSessionAddPhotoOutput FAILED:" + ret);
    expect().assertFail();
  }

  let commitConfig = cameraObj.sessionCommitConfig(0);
  if (commitConfig != 0) {
    console.info(TAG + "captureSessionCommitConfig FAILED");
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
    let applicationInfo: bundleManager.ApplicationInfo = await bundleManager.getApplicationInfoSync('com.example.ohcamerandk', applicationFlags, userId);
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

function sessionStop() {
  let ret = cameraObj.sessionStop();
  if (ret != 0) {
    console.info(TAG + "sessionStop FAILED");
    expect().assertFail();
  }
}

export default function PhotoTest() {
  describe('PhotoTest', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async () => {
      await getPermissions();
      await getPhotoReceiverSurface();
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      startCameraSession();
    })
    beforeEach(() => {

      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(() => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
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
      let ret = cameraObj.oHPhotoOutputRegisterCaptureStartWithInfoCallback(0);
      console.log(TAG+"testOHPhotoOutputRegisterCaptureStartWithInfoCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
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
      let ret = cameraObj.oHPhotoOutputUnregisterCaptureStartWithInfoCallback(0);
      console.log(TAG+"testOHPhotoOutputUnregisterCaptureStartWithInfoCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
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
      let ret = cameraObj.oHPhotoOutputRegisterCaptureEndCallback(0);
      console.log(TAG+"testOHPhotoOutputRegisterCaptureEndCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
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
      let ret = cameraObj.oHPhotoOutputUnregisterCaptureEndCallback(0);
      console.log(TAG+"testOHPhotoOutputUnregisterCaptureEndCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
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
      let ret = cameraObj.oHPhotoOutputRegisterFrameShutterEndCallback(0);
      console.log(TAG+"testOHPhotoOutputRegisterFrameShutterEndCallback0100:"+ret);
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
      let ret = cameraObj.oHPhotoOutputUnregisterFrameShutterEndCallback(0);
      console.log(TAG+"testOHPhotoOutputUnregisterFrameShutterEndCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
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
      let ret = cameraObj.oHPhotoOutputRegisterCaptureReadyCallback(0);
      console.log(TAG+"testOHPhotoOutputRegisterCaptureReadyCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
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
      let ret = cameraObj.oHPhotoOutputUnregisterCaptureReadyCallback(0);
      console.log(TAG+"testOHPhotoOutputUnregisterCaptureReadyCallback0100:"+ret);
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
      let ret = cameraObj.oHPhotoOutputRegisterEstimatedCaptureDurationCallback(0);
      console.log(TAG+"testOHPhotoOutputRegisterEstimatedCaptureDurationCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
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
      let ret = cameraObj.oHPhotoOutputUnregisterEstimatedCaptureDurationCallback(0);
      console.log(TAG+"testOHPhotoOutputUnregisterEstimatedCaptureDurationCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })

        /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputGetActiveProfile0100
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
      startSession();
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputGetActiveProfile(0);
      console.log(TAG+"testOHPhotoOutputGetActiveProfile0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputGetActiveProfile0200
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
      startSession();
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputGetActiveProfile(1);
      console.log(TAG+"testOHPhotoOutputGetActiveProfile0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputGetActiveProfile0300
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
      startSession();
      createPhotoOutput();
      let ret = cameraObj.oHPhotoOutputGetActiveProfile(2);
      console.log(TAG+"testOHPhotoOutputGetActiveProfile0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputDeleteProfile0100
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
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHPhotoOutputDeleteProfile0200
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
    })
 })
}