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
import { Camera_PreconfigType, Camera_SceneMode } from './Constants';

const TAG = "CAMERA_LOGTAG_JS ";
const CAMERA_OK = 0;
const CAMERA_INVALID_ARGUMENT = 7400101;
const CAMERA_OPERATION_NOT_ALLOWED = 7400102;
let receiver: image.ImageReceiver;
let mPhotoSurface: string;

function getCameraManagerInstance() {
  console.log(TAG + 'mSurfaceId : ' + mPhotoSurface);
  let ret = cameraObj.initCamera(mPhotoSurface);
  console.log(TAG + 'initCamera : ' + ret);
  if (ret != 0) {
    console.log(TAG + "getCameraManager FAILED");
    expect().assertFail();
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

function getSupportedCamerasInstance() {
  let cameraInfo = cameraObj.getSupportedCameras();
  if (isEmpty(cameraInfo)) {
    console.log(TAG + "getSupportedCamerasInstance FAILED");
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
}

function isEmpty(data: cameraObj.cameraInfo | number) {
  if (data == null || data == undefined) {
    return true;
  }
  return false;
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

function createCaptureSession() {
  console.log(TAG + "createCaptureSession start.");
  let ret = cameraObj.createSession();
  if (ret != 0) {
    console.log(TAG + "createCaptureSession FAILED");
    expect().assertFail();
  }
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

function getSupportedCameraOutputCapability() {
  let cameraOutputCapability = cameraObj.getSupportedOutputCapability();
  console.log(TAG + 'cameraOutputCapability[0] = ' + cameraOutputCapability.previewProfilesSize);
  console.log(TAG + 'cameraOutputCapability[1] = ' + cameraOutputCapability.photoProfilesSize);
  console.log(TAG + 'cameraOutputCapability[2] = ' + cameraOutputCapability.videoProfilesSize);
  console.log(TAG + 'cameraOutputCapability[3] = ' + cameraOutputCapability.metadataProfilesSize);
  return true;
}

function setSceneMode(index_sceneMode: number) {
  let ret = cameraObj.oHCameraManagerSetSceneMode(index_sceneMode);
  if (ret != 0) {
    console.log(TAG + "setSceneMode FAILED");
    expect().assertFail();
  }
  if (index_sceneMode == 0) {
    console.log(TAG + "set sceneMode: NORMAL_PHOTO");
  } else if (index_sceneMode == 1) {
    console.log(TAG + "set sceneMode: NORMAL_VIDEO");
  } else if (index_sceneMode == 2) {
    console.log(TAG + "set sceneMode: SECURE_PHOTO");
  }
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

function openSecureCamera() {
  let ret = cameraObj.oHCameraInputOpenSecureCamera(0);
  console.log(TAG+"openSecureCamera:"+ret.errorCode);
  if (ret.errorCode != 0) {
    console.log(TAG + "openSecureCamera FAILED" + ret.errorCode);
    expect().assertFail();
  }
  if (ret.secureSeqId == BigInt(0)) {
    console.log(TAG + "openSecureCamera: get secureSeqId failed.");
  }
}

function createPreviewOutputUsedInPreconfig() {
  let canPreconfig = cameraObj.oHCaptureSessionCanPreconfig(Camera_PreconfigType.PRECONFIG_720P, 0);
  if (canPreconfig.errorCode != 0) {
    expect().assertFail();
  }
  console.log(TAG+"CanPreconfig: "+canPreconfig.canPreconfig);
  if (canPreconfig.canPreconfig) {
    cameraObj.oHCaptureSessionPreconfig(Camera_PreconfigType.PRECONFIG_720P, 0);
    cameraObj.oHCameraManagerCreatePreviewOutputUsedInPreconfig(0);
  } else {
    createPreviewOutput();
  }
}

function releaseCamera() {
  let ret = cameraObj.releaseCamera();
  if (ret != 0) {
    console.log(TAG + "releaseCamera FAILED");
    expect().assertFail();
  }
}

export default function SecureCameraTest() {
  describe('SecureCameraTest', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async () => {
      await getPermissions();
      await getPhotoReceiverSurface();
    })
    beforeEach(() => {
      getCameraManagerInstance();
      getSupportedCamerasInstance();
      createCaptureSession();
      getSupportedCameraOutputCapability();
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
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCameraInputOpenSecureCamera0100
     * @tc.name       : testOHCameraInputOpenSecureCamera0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraInputOpenSecureCamera0100', 0, () => {
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
        let ret = cameraObj.oHCameraInputOpenSecureCamera(0);
        console.log(TAG+"testOHCameraInputOpenSecureCamera0100 errorCode:"+ret.errorCode);
        console.log(TAG+"testOHCameraInputOpenSecureCamera0100 secureSeqId:"+ret.secureSeqId);
        expect(ret.errorCode).assertEqual(CAMERA_OK);
        expect(ret.secureSeqId != BigInt(0)).assertEqual(true);
      }
      console.log(TAG+"testOHCameraInputOpenSecureCamera0100 end");
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCameraInputOpenSecureCamera0200
     * @tc.name       : testOHCameraInputOpenSecureCamera0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraInputOpenSecureCamera0200', 0, () => {
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
        let ret = cameraObj.oHCameraInputOpenSecureCamera(1);
        console.log(TAG+"testOHCameraInputOpenSecureCamera0200:"+ret.errorCode);
        expect(ret.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
      console.log(TAG+"testOHCameraInputOpenSecureCamera0200 end");
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCameraInputOpenSecureCamera0300
     * @tc.name       : testOHCameraInputOpenSecureCamera0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraInputOpenSecureCamera0300', 0, () => {
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
        let ret = cameraObj.oHCameraInputOpenSecureCamera(2);
        console.log(TAG+"testOHCameraInputOpenSecureCamera0300:"+ret.errorCode);
        expect(ret.errorCode).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
      console.log(TAG+"testOHCameraInputOpenSecureCamera0300 end");
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCameraInputOpenSecureCamera0400
     * @tc.name       : testOHCameraInputOpenSecureCamera0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraInputOpenSecureCamera0400', 0, () => {
      let supportedSceneModes = getSupportedSceneModes();
      console.log(TAG+"getSupportedSceneModesSize is called. sceneModesSize is "+supportedSceneModes.sceneModesSize);
      if (supportedSceneModes.isNormalPhoto) {
        setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
        setSessionMode();
        createPreviewOutput();
        createCameraInput();
        let ret = cameraObj.oHCameraInputOpenSecureCamera(0);
        console.log(TAG+"testOHCameraInputOpenSecureCamera0400:"+ret.errorCode);
        expect(ret.errorCode).assertEqual(CAMERA_OK);
        expect(ret.secureSeqId).assertEqual(BigInt(0));
      } else {
        console.log(TAG+"testOHCameraInputOpenSecureCamera0400: NORMAL_PHOTO is not supported.");
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCameraInputOpenSecureCamera0500
     * @tc.name       : testOHCameraInputOpenSecureCamera0500
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraInputOpenSecureCamera0500', 0, () => {
      let supportedSceneModes = getSupportedSceneModes();
      console.log(TAG+"getSupportedSceneModesSize is called. sceneModesSize is "+supportedSceneModes.sceneModesSize);
      if (supportedSceneModes.isNormalVideo) {
        setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
        setSessionMode();
        createPreviewOutput();
        createCameraInput();
        let ret = cameraObj.oHCameraInputOpenSecureCamera(0);
        console.log(TAG+"testOHCameraInputOpenSecureCamera0500:"+ret.errorCode);
        expect(ret.errorCode).assertEqual(CAMERA_OK);
        expect(ret.secureSeqId).assertEqual(BigInt(0));
      } else {
        console.log(TAG+"testOHCameraInputOpenSecureCamera0500: NORMAL_PHOTO is not supported.");
      }
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionAddSecureOutput0100
     * @tc.name       : testOHCaptureSessionAddSecureOutput0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionAddSecureOutput0100', 0, () => {
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
        openSecureCamera();
        sessionBeginConfig();
        addInput();
        addPreviewOutput();
        let ret = cameraObj.oHCaptureSessionAddSecureOutput(0);
        console.log(TAG+"testOHCaptureSessionAddSecureOutput0100:"+ret);
        expect(ret).assertEqual(CAMERA_OK);
      }
      console.log(TAG+"testOHCaptureSessionAddSecureOutput0100 end");
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionAddSecureOutput0200
     * @tc.name       : testOHCaptureSessionAddSecureOutput0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionAddSecureOutput0200', 0, () => {
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
        openSecureCamera();
        sessionBeginConfig();
        addInput();
        addPreviewOutput();
        let ret = cameraObj.oHCaptureSessionAddSecureOutput(1);
        console.log(TAG+"testOHCaptureSessionAddSecureOutput0200:"+ret);
        expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
      console.log(TAG+"testOHCaptureSessionAddSecureOutput0200 end");
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionAddSecureOutput0300
     * @tc.name       : testOHCaptureSessionAddSecureOutput0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionAddSecureOutput0300', 0, () => {
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
        openSecureCamera();
        sessionBeginConfig();
        addInput();
        addPreviewOutput();
        let ret = cameraObj.oHCaptureSessionAddSecureOutput(2);
        console.log(TAG+"testOHCaptureSessionAddSecureOutput0300:"+ret);
        expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
      console.log(TAG+"testOHCaptureSessionAddSecureOutput0300 end");
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionAddSecureOutput0400
     * @tc.name       : testOHCaptureSessionAddSecureOutput0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionAddSecureOutput0400', 0, () => {
      let supportedSceneModes = getSupportedSceneModes();
      console.log(TAG+"getSupportedSceneModesSize is called. sceneModesSize is "+supportedSceneModes.sceneModesSize);
      if (!supportedSceneModes.isSecurePhoto) {
        console.log(TAG+"SECURE_PHOTO is not supported");
        expect(supportedSceneModes.isSecurePhoto).assertEqual(false);
      } else {
        setSceneMode(Camera_SceneMode.SECURE_PHOTO);
        setSessionMode();
        createPreviewOutputUsedInPreconfig();
        createCameraInput();
        openSecureCamera();
        sessionBeginConfig();
        addInput();
        addPreviewOutput();
        let ret = cameraObj.oHCaptureSessionAddSecureOutput(0);
        console.log(TAG+"testOHCaptureSessionAddSecureOutput0400:"+ret);
        expect(ret).assertEqual(CAMERA_OK);
      }
      console.log(TAG+"testOHCaptureSessionAddSecureOutput0400 end");
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionAddSecureOutput0500
     * @tc.name       : testOHCaptureSessionAddSecureOutput0500
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionAddSecureOutput0500', 0, () => {
      let supportedSceneModes = getSupportedSceneModes();
      console.log(TAG+"getSupportedSceneModesSize is called. sceneModesSize is "+supportedSceneModes.sceneModesSize);
      if (!supportedSceneModes.isSecurePhoto) {
        console.log(TAG+"SECURE_PHOTO is not supported");
        expect(supportedSceneModes.isSecurePhoto).assertEqual(false);
      } else {
        setSceneMode(Camera_SceneMode.SECURE_PHOTO);
        setSessionMode();
        createPreviewOutputUsedInPreconfig();
        createCameraInput();
        openSecureCamera();
        sessionBeginConfig();
        addInput();
        addPreviewOutput();
        let ret = cameraObj.oHCaptureSessionAddSecureOutput(1);
        console.log(TAG+"testOHCaptureSessionAddSecureOutput0500:"+ret);
        expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
      console.log(TAG+"testOHCaptureSessionAddSecureOutput0500 end");
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionAddSecureOutput0600
     * @tc.name       : testOHCaptureSessionAddSecureOutput0600
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionAddSecureOutput0600', 0, () => {
      let supportedSceneModes = getSupportedSceneModes();
      console.log(TAG+"getSupportedSceneModesSize is called. sceneModesSize is "+supportedSceneModes.sceneModesSize);
      if (!supportedSceneModes.isSecurePhoto) {
        console.log(TAG+"SECURE_PHOTO is not supported");
        expect(supportedSceneModes.isSecurePhoto).assertEqual(false);
      } else {
        setSceneMode(Camera_SceneMode.SECURE_PHOTO);
        setSessionMode();
        createPreviewOutputUsedInPreconfig();
        createCameraInput();
        openSecureCamera();
        sessionBeginConfig();
        addInput();
        addPreviewOutput();
        let ret = cameraObj.oHCaptureSessionAddSecureOutput(2);
        console.log(TAG+"testOHCaptureSessionAddSecureOutput0600:"+ret);
        expect(ret).assertEqual(CAMERA_INVALID_ARGUMENT);
      }
      console.log(TAG+"testOHCaptureSessionAddSecureOutput0600 end");
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionAddSecureOutput0700
     * @tc.name       : testOHCaptureSessionAddSecureOutput0700
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionAddSecureOutput0700', 0, () => {
      let supportedSceneModes = getSupportedSceneModes();
      console.log(TAG+"getSupportedSceneModesSize is called. sceneModesSize is "+supportedSceneModes.sceneModesSize);
      if (supportedSceneModes.isNormalPhoto) {
        setSceneMode(Camera_SceneMode.NORMAL_PHOTO);
        setSessionMode();
        createPreviewOutputUsedInPreconfig();
        createCameraInput();
        openSecureCamera();
        sessionBeginConfig();
        addInput();
        addPreviewOutput();
        let ret = cameraObj.oHCaptureSessionAddSecureOutput(0);
        console.log(TAG+"testOHCaptureSessionAddSecureOutput0700:"+ret);
        expect(ret).assertEqual(CAMERA_OPERATION_NOT_ALLOWED);
      }
      console.log(TAG+"testOHCaptureSessionAddSecureOutput0700 end");
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionAddSecureOutput0800
     * @tc.name       : testOHCaptureSessionAddSecureOutput0800
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCaptureSessionAddSecureOutput0800', 0, () => {
      let supportedSceneModes = getSupportedSceneModes();
      console.log(TAG+"getSupportedSceneModesSize is called. sceneModesSize is "+supportedSceneModes.sceneModesSize);
      if (supportedSceneModes.isNormalVideo) {
        setSceneMode(Camera_SceneMode.NORMAL_VIDEO);
        setSessionMode();
        createPreviewOutputUsedInPreconfig();
        createCameraInput();
        openSecureCamera();
        sessionBeginConfig();
        addInput();
        addPreviewOutput();
        let ret = cameraObj.oHCaptureSessionAddSecureOutput(0);
        console.log(TAG+"testOHCaptureSessionAddSecureOutput0800:"+ret);
        expect(ret).assertEqual(CAMERA_OPERATION_NOT_ALLOWED);
      }
      console.log(TAG+"testOHCaptureSessionAddSecureOutput0800 end");
    })
  })
}
