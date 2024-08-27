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
import { Camera_PreconfigType, Camera_PreconfigRatio, Camera_SceneMode } from './Constants';
import abilityAccessCtrl from '@ohos.abilityAccessCtrl';
import bundleManager from '@ohos.bundle.bundleManager';
import account from '@ohos.account.osAccount';

const TAG = "CAMERA_LOGTAG_JS ";
const CAMERA_OK = 0;
const CAMERA_INVALID_ARGUMENT = 7400101;
let receiver: image.ImageReceiver;
let mPhotoSurface: string;

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
    console.log(TAG + "createPhotoOutput FAILED");
    expect().assertFail();
  }
}

function createPhotoOutputUsedInPreconfig(canPreconfig: boolean) {
  if (canPreconfig) {
    let ret = cameraObj.oHCameraManagerCreatePhotoOutputUsedInPreconfig(mPhotoSurface, 0);
    if (ret != 0) {
      console.log(TAG + "createPhotoOutputUsedInPreconfig FAILED");
      expect().assertFail();
    } 
  } else {
    createPhotoOutput();
  }
}

function createPhotoOutputWithoutSurface() {
  let ret = cameraObj.oHCameraManagerCreatePhotoOutputWithoutSurface(0);
  if (ret != 0) {
    console.log(TAG + "createPhotoOutputWithoutSurface FAILED");
    expect().assertFail();
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

function preconfig() {
  let ret = cameraObj.oHCaptureSessionCanPreconfig(Camera_PreconfigType.PRECONFIG_720P, 0);
  if (ret.errorCode != 0) {
    console.log(TAG + "canPreconfig FAILED");
    expect().assertFail();
  }
  console.log(TAG+"canPreconfig: " + ret.canPreconfig);
  if (ret.canPreconfig) {
    cameraObj.oHCaptureSessionPreconfig(Camera_PreconfigType.PRECONFIG_720P, 0);
  }
  return ret.canPreconfig;
}

function createPreviewOutputUsedInPreconfig(canPreconfig: boolean) {
  if (canPreconfig) {
    let ret = cameraObj.oHCameraManagerCreatePreviewOutputUsedInPreconfig(0);
    if (ret != 0) {
      console.log(TAG + "createPreviewOutputUsedInPreconfig FAILED");
      expect().assertFail();
    }
  } else {
    createPreviewOutput();
  }
}

function photoOutputRegisterPhotoAvailableCallback() {
  let ret = cameraObj.oHPhotoOutputRegisterPhotoAvailableCallback(0);
  if (ret != 0) {
    console.log(TAG + "photoOutputRegisterPhotoAvailableCallback FAILED");
    expect().assertFail();
  }
}

function photoOutputRegisterPhotoAssetAvailableCallback() {
  let ret = cameraObj.oHPhotoOutputRegisterPhotoAssetAvailableCallback(0);
  if (ret != 0) {
    console.log(TAG + "photoOutputRegisterPhotoAssetAvailableCallback FAILED");
    expect().assertFail();
  }
}

function isMovingPhotoSupported() {
  let ret = cameraObj.oHPhotoOutputIsMovingPhotoSupported(0);
  if (ret.errorCode != 0) {
    console.log(TAG + "isMovingPhotoSupported FAILED");
    expect().assertFail();
  }
  console.log(TAG+ "IsMovingPhotoSupported: " + ret.isMovingPhotoSupported);
  return ret.isMovingPhotoSupported;
}

function releaseCamera() {
  let ret = cameraObj.releaseCamera();
  if (ret != 0) {
    console.log(TAG + "releaseCamera FAILED");
    expect().assertFail();
  }
}

export default function PhotoTest() {
  describe('PhotoTest', () => {
    beforeAll(async () => {
      await getPermissions();
      await getPhotoReceiverSurface();
    })
    beforeEach(() => {
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      getSupportedSceneModes();
      setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
      setSessionMode();
    })
    afterEach(() => {
      releaseCamera();
    })
    afterAll(() => {
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHCameraManagerCreatePhotoOutputWithoutSurface0100
     * @tc.name       : testOHCameraManagerCreatePhotoOutputWithoutSurface0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreatePhotoOutputWithoutSurface0100', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      let ret = cameraObj.oHCameraManagerCreatePhotoOutputWithoutSurface(0);
      console.log(TAG+"testOHCameraManagerCreatePhotoOutputWithoutSurface0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHCameraManagerCreatePhotoOutputWithoutSurface0200
     * @tc.name       : testOHCameraManagerCreatePhotoOutputWithoutSurface0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreatePhotoOutputWithoutSurface0200', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      let ret = cameraObj.oHCameraManagerCreatePhotoOutputWithoutSurface(1);
      console.log(TAG+"testOHCameraManagerCreatePhotoOutputWithoutSurface0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHCameraManagerCreatePhotoOutputWithoutSurface0300
     * @tc.name       : testOHCameraManagerCreatePhotoOutputWithoutSurface0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreatePhotoOutputWithoutSurface0300', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      let ret = cameraObj.oHCameraManagerCreatePhotoOutputWithoutSurface(2);
      console.log(TAG+"testOHCameraManagerCreatePhotoOutputWithoutSurface0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHCameraManagerCreatePhotoOutputWithoutSurface0400
     * @tc.name       : testOHCameraManagerCreatePhotoOutputWithoutSurface0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreatePhotoOutputWithoutSurface0400', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      let ret = cameraObj.oHCameraManagerCreatePhotoOutputWithoutSurface(3);
      console.log(TAG+"testOHCameraManagerCreatePhotoOutputWithoutSurface0400:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputRegisterPhotoAvailableCallback0100
     * @tc.name       : testOHPhotoOutputRegisterPhotoAvailableCallback0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterPhotoAvailableCallback0100', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutputWithoutSurface();
      let ret = cameraObj.oHPhotoOutputRegisterPhotoAvailableCallback(0);
      console.log(TAG+"testOHPhotoOutputRegisterPhotoAvailableCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputRegisterPhotoAvailableCallback0200
     * @tc.name       : testOHPhotoOutputRegisterPhotoAvailableCallback0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterPhotoAvailableCallback0200', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutputWithoutSurface();
      let ret = cameraObj.oHPhotoOutputRegisterPhotoAvailableCallback(1);
      console.log(TAG+"testOHPhotoOutputRegisterPhotoAvailableCallback0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputRegisterPhotoAvailableCallback0300
     * @tc.name       : testOHPhotoOutputRegisterPhotoAvailableCallback0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterPhotoAvailableCallback0300', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutputWithoutSurface();
      let ret = cameraObj.oHPhotoOutputRegisterPhotoAvailableCallback(2);
      console.log(TAG+"testOHPhotoOutputRegisterPhotoAvailableCallback0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputUnregisterPhotoAvailableCallback0100
     * @tc.name       : testOHPhotoOutputUnregisterPhotoAvailableCallback0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterPhotoAvailableCallback0100', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutputWithoutSurface();
      photoOutputRegisterPhotoAvailableCallback();
      let ret = cameraObj.oHPhotoOutputUnregisterPhotoAvailableCallback(0);
      console.log(TAG+"testOHPhotoOutputUnregisterPhotoAvailableCallback0100: "+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputUnregisterPhotoAvailableCallback0200
     * @tc.name       : testOHPhotoOutputUnregisterPhotoAvailableCallback0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterPhotoAvailableCallback0200', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutputWithoutSurface();
      photoOutputRegisterPhotoAvailableCallback();
      let ret = cameraObj.oHPhotoOutputUnregisterPhotoAvailableCallback(1);
      console.log(TAG+"testOHPhotoOutputUnregisterPhotoAvailableCallback0200: "+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputUnregisterPhotoAvailableCallback0300
     * @tc.name       : testOHPhotoOutputUnregisterPhotoAvailableCallback0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterPhotoAvailableCallback0300', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutputWithoutSurface();
      photoOutputRegisterPhotoAvailableCallback();
      let ret = cameraObj.oHPhotoOutputUnregisterPhotoAvailableCallback(2);
      console.log(TAG+"testOHPhotoOutputUnregisterPhotoAvailableCallback0300: "+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputRegisterPhotoAssetAvailableCallback0100
     * @tc.name       : testOHPhotoOutputRegisterPhotoAssetAvailableCallback0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterPhotoAssetAvailableCallback0100', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutputWithoutSurface();
      let ret = cameraObj.oHPhotoOutputRegisterPhotoAssetAvailableCallback(0);
      console.log(TAG+"testOHPhotoOutputRegisterPhotoAssetAvailableCallback0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputRegisterPhotoAssetAvailableCallback0200
     * @tc.name       : testOHPhotoOutputRegisterPhotoAssetAvailableCallback0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterPhotoAssetAvailableCallback0200', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutputWithoutSurface();
      let ret = cameraObj.oHPhotoOutputRegisterPhotoAssetAvailableCallback(1);
      console.log(TAG+"testOHPhotoOutputRegisterPhotoAssetAvailableCallback0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputRegisterPhotoAssetAvailableCallback0300
     * @tc.name       : testOHPhotoOutputRegisterPhotoAssetAvailableCallback0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputRegisterPhotoAssetAvailableCallback0300', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutputWithoutSurface();
      let ret = cameraObj.oHPhotoOutputRegisterPhotoAssetAvailableCallback(2);
      console.log(TAG+"testOHPhotoOutputRegisterPhotoAssetAvailableCallback0300:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputUnregisterPhotoAssetAvailableCallback0100
     * @tc.name       : testOHPhotoOutputUnregisterPhotoAssetAvailableCallback0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterPhotoAssetAvailableCallback0100', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutputWithoutSurface();
      photoOutputRegisterPhotoAssetAvailableCallback();
      let ret = cameraObj.oHPhotoOutputUnregisterPhotoAssetAvailableCallback(0);
      console.log(TAG+"testOHPhotoOutputUnregisterPhotoAssetAvailableCallback0100: "+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputUnregisterPhotoAssetAvailableCallback0200
     * @tc.name       : testOHPhotoOutputUnregisterPhotoAssetAvailableCallback0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterPhotoAssetAvailableCallback0200', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutputWithoutSurface();
      photoOutputRegisterPhotoAssetAvailableCallback();
      let ret = cameraObj.oHPhotoOutputUnregisterPhotoAssetAvailableCallback(1);
      console.log(TAG+"testOHPhotoOutputUnregisterPhotoAssetAvailableCallback0200: "+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputUnregisterPhotoAssetAvailableCallback0300
     * @tc.name       : testOHPhotoOutputUnregisterPhotoAssetAvailableCallback0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputUnregisterPhotoAssetAvailableCallback0300', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutputWithoutSurface();
      photoOutputRegisterPhotoAssetAvailableCallback();
      let ret = cameraObj.oHPhotoOutputUnregisterPhotoAssetAvailableCallback(2);
      console.log(TAG+"testOHPhotoOutputUnregisterPhotoAssetAvailableCallback0300: "+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputIsMovingPhotoSupported0100
     * @tc.name       : testOHPhotoOutputIsMovingPhotoSupported0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputIsMovingPhotoSupported0100', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutput();
      addPhotoOutput();
      let ret = cameraObj.oHPhotoOutputIsMovingPhotoSupported(0);
      if (ret.isMovingPhotoSupported) {
        expect(ret.isMovingPhotoSupported).assertEqual(true);
      } else {
        expect(ret.isMovingPhotoSupported).assertEqual(false);
      }
      console.log(TAG+"isMovingPhotoSupported: "+ret.isMovingPhotoSupported);
      console.log(TAG+"testOHPhotoOutputIsMovingPhotoSupported0100:"+ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputIsMovingPhotoSupported0200
     * @tc.name       : testOHPhotoOutputIsMovingPhotoSupported0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputIsMovingPhotoSupported0200', 0, () => {
      let canPreconfig = preconfig();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      createCameraInput();
      sessionFlow();
      createPhotoOutputUsedInPreconfig(canPreconfig);
      addPhotoOutput();
      let ret = cameraObj.oHPhotoOutputIsMovingPhotoSupported(0);
      if (ret.isMovingPhotoSupported) {
        expect(ret.isMovingPhotoSupported).assertEqual(true);
      } else {
        expect(ret.isMovingPhotoSupported).assertEqual(false);
      }
      console.log(TAG+"isMovingPhotoSupported: "+ret.isMovingPhotoSupported);
      console.log(TAG+"testOHPhotoOutputIsMovingPhotoSupported0200:"+ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputIsMovingPhotoSupported0300
     * @tc.name       : testOHPhotoOutputIsMovingPhotoSupported0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputIsMovingPhotoSupported0300', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutput();
      addPhotoOutput();
      let ret = cameraObj.oHPhotoOutputIsMovingPhotoSupported(1);
      expect(ret.isMovingPhotoSupported).assertEqual(false);
      console.log(TAG+"isMovingPhotoSupported: "+ret.isMovingPhotoSupported);
      console.log(TAG+"testOHPhotoOutputIsMovingPhotoSupported0300:"+ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputIsMovingPhotoSupported0400
     * @tc.name       : testOHPhotoOutputIsMovingPhotoSupported0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputIsMovingPhotoSupported0400', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutput();
      addPhotoOutput();
      let ret = cameraObj.oHPhotoOutputIsMovingPhotoSupported(2);
      expect(ret.isMovingPhotoSupported).assertEqual(false);
      console.log(TAG+"isMovingPhotoSupported: "+ret.isMovingPhotoSupported);
      console.log(TAG+"testOHPhotoOutputIsMovingPhotoSupported0400:"+ret.errorCode);
      expect(ret.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputEnableMovingPhoto0100
     * @tc.name       : testOHPhotoOutputEnableMovingPhoto0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputEnableMovingPhoto0100', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutput();
      addPhotoOutput();
      if (isMovingPhotoSupported()) {
        let ret_true = cameraObj.oHPhotoOutputEnableMovingPhoto(1);
        console.log(TAG+ "testOHPhotoOutputEnableMovingPhoto0100 EnableMovingPhoto(true): " + ret_true);
        expect(ret_true).assertEqual(CAMERA_OK);
        let ret_false = cameraObj.oHPhotoOutputEnableMovingPhoto(0);
        console.log(TAG+ "testOHPhotoOutputEnableMovingPhoto0100 EnableMovingPhoto(false): " + ret_false);
        expect(ret_false).assertEqual(CAMERA_OK);
      } else {
        console.log(TAG+ "MovingPhoto is not supported.");
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputEnableMovingPhoto0200
     * @tc.name       : testOHPhotoOutputEnableMovingPhoto0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputEnableMovingPhoto0200', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutput();
      addPhotoOutput();
      if (isMovingPhotoSupported()) {
        let ret_false = cameraObj.oHPhotoOutputEnableMovingPhoto(0);
        console.log(TAG+ "testOHPhotoOutputEnableMovingPhoto0200 EnableMovingPhoto(false): " + ret_false);
        expect(ret_false).assertEqual(CAMERA_OK);
        let ret_true = cameraObj.oHPhotoOutputEnableMovingPhoto(1);
        console.log(TAG+ "testOHPhotoOutputEnableMovingPhoto0200 EnableMovingPhoto(true): " + ret_true);
        expect(ret_true).assertEqual(CAMERA_OK);
      } else {
        console.log(TAG+ "MovingPhoto is not supported.");
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputEnableMovingPhoto0300
     * @tc.name       : testOHPhotoOutputEnableMovingPhoto0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputEnableMovingPhoto0300', 0, () => {
      let canPreconfig = preconfig();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      createCameraInput();
      sessionFlow();
      createPhotoOutputUsedInPreconfig(canPreconfig);
      addPhotoOutput();
      if (isMovingPhotoSupported()) {
        let ret_true = cameraObj.oHPhotoOutputEnableMovingPhoto(1);
        console.log(TAG+ "testOHPhotoOutputEnableMovingPhoto0300 EnableMovingPhoto(true): " + ret_true);
        expect(ret_true).assertEqual(CAMERA_OK);
        let ret_false = cameraObj.oHPhotoOutputEnableMovingPhoto(0);
        console.log(TAG+ "testOHPhotoOutputEnableMovingPhoto0300 EnableMovingPhoto(false): " + ret_false);
        expect(ret_false).assertEqual(CAMERA_OK);
      } else {
        console.log(TAG+ "MovingPhoto is not supported.");
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputEnableMovingPhoto0400
     * @tc.name       : testOHPhotoOutputEnableMovingPhoto0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputEnableMovingPhoto0400', 0, () => {
      let canPreconfig = preconfig();
      createPreviewOutputUsedInPreconfig(canPreconfig);
      createCameraInput();
      sessionFlow();
      createPhotoOutputUsedInPreconfig(canPreconfig);
      addPhotoOutput();
      if (isMovingPhotoSupported()) {
        let ret_false = cameraObj.oHPhotoOutputEnableMovingPhoto(0);
        console.log(TAG+ "testOHPhotoOutputEnableMovingPhoto0400 EnableMovingPhoto(false): " + ret_false);
        expect(ret_false).assertEqual(CAMERA_OK);
        let ret_true = cameraObj.oHPhotoOutputEnableMovingPhoto(1);
        console.log(TAG+ "testOHPhotoOutputEnableMovingPhoto0400 EnableMovingPhoto(true): " + ret_true);
        expect(ret_true).assertEqual(CAMERA_OK);
      } else {
        console.log(TAG+ "MovingPhoto is not supported.");
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoOutputEnableMovingPhoto0500
     * @tc.name       : testOHPhotoOutputEnableMovingPhoto0500
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoOutputEnableMovingPhoto0500', 0, () => {
      createPreviewOutput();
      createCameraInput();
      sessionFlow();
      createPhotoOutput();
      addPhotoOutput();
      if (isMovingPhotoSupported()) {
        let ret_true = cameraObj.oHPhotoOutputEnableMovingPhoto(2);
        console.log(TAG+ "testOHPhotoOutputEnableMovingPhoto0500 EnableMovingPhoto(true): " + ret_true);
        expect(ret_true).assertEqual(CAMERA_INVALID_ARGUMENT);
      } else {
        console.log(TAG+ "MovingPhoto is not supported.");
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoNativeGetMain0100
     * @tc.name       : testOHPhotoNativeGetMain0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoNativeGetMain0200', 0, () => {
      let ret = cameraObj.oHPhotoNativeGetMainImage(1);
      console.log(TAG+"testOHPhotoNativeGetMain0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
    /**
     * @tc.number     : SUB_MULTIMEDIA_OHCAMERANDK_OHPhotoNativeRelease0100
     * @tc.name       : testOHPhotoNativeRelease0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHPhotoNativeRelease0200', 0, () => {
      let ret = cameraObj.oHPhotoNativeRelease(1);
      console.log(TAG+"testOHPhotoNativeRelease0200:"+ret);
      expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
    })
  })
}