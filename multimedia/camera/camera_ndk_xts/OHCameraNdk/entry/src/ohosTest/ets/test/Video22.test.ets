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
import cameras from 'libentry.so'
import MediaUtils from './MediaUtils';
import media from '@ohos.multimedia.media';
import abilityAccessCtrl from '@ohos.abilityAccessCtrl';
import bundleManager from '@ohos.bundle.bundleManager';
import account from '@ohos.account.osAccount';
import { BusinessError } from '@ohos.base';
import image from '@ohos.multimedia.image';
import { Camera_MediaType } from './Constants'

const TAG = "CAMERA_LOGTAG_JS";
const CAMERA_OK = 0;
const CAMERA_ERROR_7400101 = 7400101; //参数错误
let mediaUtil = MediaUtils.getInstance();
let videoSurfaceId: string;  // 这个变量应在使用前被赋值，从media.AVRecorder获取,用于创建录像输出实例
let videoRecorder: media.AVRecorder;
let receiver: image.ImageReceiver;
let mPhotoSurface: string;
// 配置参数以实际硬件设备支持的范围为准
let videoConfig: media.AVRecorderConfig = {
  audioSourceType : media.AudioSourceType.AUDIO_SOURCE_TYPE_MIC,
  videoSourceType : media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV,
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
    }
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
  videoConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES;
  console.info(TAG + 'getVideoSurfaceID videoConfig.videoSourceType : ' + videoConfig.videoSourceType);
  try {
    await videoRecorder.prepare(videoConfig);
    console.info(TAG + 'getVideoSurfaceID  videoRecorder.prepare');
  } catch (err) {
    console.error(TAG + 'prepare failed with err: ' + err);
  }
  videoSurfaceId = await videoRecorder.getInputSurface();
  console.info(TAG + 'getVideoSurfaceID videoSurfaceId : ' + JSON.stringify(videoSurfaceId));
}

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
  let ret = cameras.initCamera(mPhotoSurface, 0);
  console.info(TAG + 'initCamera : ' + ret);
  if (ret != 0) {
    console.info(TAG + "getCameraManager FAILED");
    expect().assertFail();
  }
}

function getSupportedCameraOutputCapability() {
  let ret = cameras.oHGetSupportedCameraOutputCapability(0);
  if (ret != 0) {
    console.info(TAG + "getSupportedCameraOutputCapability FAILED");
    expect().assertFail();
  }
}

function getSupportedCamerasInstance() {
  let cameraInfo = cameras.oHCameraManagerGetSupportedCameras(0);
  if (isEmpty(cameraInfo)) {
    console.info(TAG + "getSupportedCamerasInstance FAILED");
    expect().assertFail();
  }
}

function createPreviewOutput() {
  let ret = cameras.oHCameraManagerCreatePreviewOutput(0);
  if (ret != 0) {
    console.info(TAG + "createPreviewOutput FAILED");
    expect().assertFail();
  }
}

function createCaptureSession() {
  console.log(TAG + "创建捕获会话实例");
  let ret = cameras.oHCameraManagerCreateCaptureSession(0);

  if (ret != 0) {
    console.log(TAG + "createCaptureSession FAILED");
    expect().assertFail();
  }
  let registerCallback = cameras.oHCaptureSessionRegisterCallback(0);
  if (registerCallback != 0) {
    console.log(TAG + "SessionRegisterCallback FAILED");
    expect().assertFail();
  }
}

function sessionBeginConfig() {
  let ret = cameras.oHCaptureSessionBeginConfig(0);
  if (ret != 0) {
    console.info(TAG + "sessionBeginConfig FAILED:" + ret);
    expect().assertFail();
  }
}

function createCameraInput() {
  console.log(TAG + "创建相机输入实例。");
  let ret = cameras.oHCameraManagerCreateCameraInput(0);
  cameras.oHCameraInputOpen(0);
  if (ret != 0) {
    console.log(TAG + "createCameraInput FAILED");
    expect().assertFail();
  }
}

function startSession() {
  let begin = cameras.oHCaptureSessionBeginConfig(0);
  if (begin != 0) {
    console.info(TAG + "beginConfig FAILED");
    expect().assertFail();
  }

  // let canAddInput = cameras.oHCaptureSessionCanAddInput(0);
  // if (canAddInput != 0) {
  //   console.info(TAG + "CanAddInput FAILED");
  //   expect().assertFail();
  // }

  let addInput = cameras.oHCaptureSessionAddInput(0);
  if (addInput != 0) {
    console.info(TAG + "addInput FAILED");
    expect().assertFail();
  }

  // let canAddPreviewOutput = cameras.oHCaptureSessionCanAddPreviewOutput(0);
  // if (canAddPreviewOutput != 0) {
  //   console.info(TAG + "CanAddPreviewOutput FAILED");
  //   expect().assertFail();
  // }

  let addPreviewOutput = cameras.oHCaptureSessionAddPreviewOutput(0);
  if (addPreviewOutput != 0) {
    console.info(TAG + "AddPreviewOutput FAILED");
    expect().assertFail();
  }

  let commitConfig = cameras.oHCaptureSessionCommitConfig(0);
  if (commitConfig != 0) {
    console.info(TAG + "commitConfig FAILED");
    expect().assertFail();
  }

  let start = cameras.oHCaptureSessionStart(0);
  if (start != 0) {
    console.info(TAG + "start FAILED");
    expect().assertFail();
  }
}

function sessionStop() {
  let ret = cameras.oHCaptureSessionStop(0);
  if (ret != 0) {
    console.info(TAG + "sessionStop FAILED");
    expect().assertFail();
  }
}


function createVideoOutput() {
  let ret = cameras.oHCameraManagerCreateVideoOutput(videoSurfaceId, 0);
  if (ret != 0) {
    console.info(TAG + "createVideoOutput FAILED");
    expect().assertFail();
  }
}

function captureSessionCommitConfig() {
  sessionBeginConfig();


  console.log(TAG + "添加相机输入");
  let ret = cameras.oHCaptureSessionAddInput(0);
  if (ret != 0) {
    console.log(TAG + "sessionAddInput FAILED" + ret);
    expect().assertFail();
  }

  let addPreviewOutput = cameras.oHCaptureSessionAddPreviewOutput(0);
  if (addPreviewOutput != 0) {
    console.info(TAG + "captureSessionAddPreviewOutput FAILED"+addPreviewOutput);
    //expect().assertFail();
  }

  let addPhotoOutput = cameras.oHCaptureSessionAddPhotoOutput(0);
  if (addPhotoOutput != 0) {
    console.info(TAG + "captureSessionAddPhotoOutput FAILED:" + ret);
    //expect().assertFail();
  }

}

function isEmpty(data: cameras.cameraInfo | number) {
  if (data == null || data == undefined) {
    return true;
  }
  return false;
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

export default function VideoTest22() {
  describe('VideoTest22', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async () => {
      await getPermissions();
      await getPhotoReceiverSurface();
      await getVideoSurfaceId();
      getCameraManagerInstance();
      createCaptureSession();
      getSupportedCamerasInstance();
      getSupportedCameraOutputCapability();
      createPreviewOutput();
      createCameraInput();
      startSession();
      sessionStop();
      sessionBeginConfig();
      createVideoOutput();
    })
    beforeEach(() => {
      // sessionStop();
      // sessionBeginConfig();
      // createVideoOutput();
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })
    // /**
    //  * @tc.number     : SUB_MULTIMEIDA_OHCAMERANDK_OHCaptureSessionCanAddVideoOutput0100
    //  * @tc.name       : testOHCaptureSessionCanAddVideoOutput0100
    //  * @tc.size       : MediumTest
    //  * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
    //  * @tc.type       : Function
    //  * @tc.level      : Level 3
    //  */
    // it('testOHCaptureSessionCanAddVideoOutput0100', 0, () => {
    //   let ret = cameras.oHCaptureSessionCanAddVideoOutput(0);
    //   console.log(TAG+"testOHCaptureSessionCanAddVideoOutput0100:"+ret);
    //   expect(ret).assertEqual(CAMERA_OK);
    // })


    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHVideoOutputGetActiveProfile0100
     * @tc.name       : testOHVideoOutputGetActiveProfile0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputGetActiveProfile0100', 0, () => {
      let ret = cameras.oHVideoOutputGetActiveProfile(0);
      console.log(TAG+"testOHVideoOutputGetActiveProfile0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHVideoOutputGetActiveProfile0200
     * @tc.name       : testOHVideoOutputGetActiveProfile0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputGetActiveProfile0200', 0, () => {
      let ret = cameras.oHVideoOutputGetActiveProfile(1);
      console.log(TAG+"testOHVideoOutputGetActiveProfile0200:"+ret);
      expect(ret).assertEqual(CAMERA_ERROR_7400101);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHVideoOutputGetActiveProfile0300
     * @tc.name       : testOHVideoOutputGetActiveProfile0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputGetActiveProfile0300', 0, () => {
      let ret = cameras.oHVideoOutputGetActiveProfile(2);
      console.log(TAG+"testOHVideoOutputGetActiveProfile0300:"+ret);
      expect(ret).assertEqual(CAMERA_ERROR_7400101);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHVideoOutputDeleteProfile0100
     * @tc.name       : testOHVideoOutputDeleteProfile0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputDeleteProfile0100', 0, () => {
      let ret = cameras.oHVideoOutputDeleteProfile(0);
      console.log(TAG+"testOHVideoOutputDeleteProfile0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })
    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHVideoOutputDeleteProfile0200
     * @tc.name       : testOHVideoOutputDeleteProfile0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHVideoOutputDeleteProfile0200', 0, () => {
      let ret = cameras.oHVideoOutputDeleteProfile(1);
      console.log(TAG+"testOHVideoOutputDeleteProfile0200:"+ret);
      expect(ret).assertEqual(CAMERA_ERROR_7400101);
    })

    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCameraManagerCreateVideoOutputUsedInPreconfig0100
     * @tc.name       : testOHCameraManagerCreateVideoOutputUsedInPreconfig0100
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreateVideoOutputUsedInPreconfig0100', 0, () => {
      let ret = cameras.oHCameraManagerCreateVideoOutputUsedInPreconfig(videoSurfaceId,0);
      console.log(TAG+"testOHCameraManagerCreateVideoOutputUsedInPreconfig0100:"+ret);
      expect(ret).assertEqual(CAMERA_OK);
    })

    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCameraManagerCreateVideoOutputUsedInPreconfig0200
     * @tc.name       : testOHCameraManagerCreateVideoOutputUsedInPreconfig0200
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreateVideoOutputUsedInPreconfig0200', 0, () => {
      let ret = cameras.oHCameraManagerCreateVideoOutputUsedInPreconfig(videoSurfaceId,1);
      console.log(TAG+"testOHCameraManagerCreateVideoOutputUsedInPreconfig0200:"+ret);
      expect(ret).assertEqual(CAMERA_ERROR_7400101);
    })

    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCameraManagerCreateVideoOutputUsedInPreconfig0300
     * @tc.name       : testOHCameraManagerCreateVideoOutputUsedInPreconfig0300
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreateVideoOutputUsedInPreconfig0300', 0, () => {
      let ret = cameras.oHCameraManagerCreateVideoOutputUsedInPreconfig(videoSurfaceId,2);
      console.log(TAG+"testOHCameraManagerCreateVideoOutputUsedInPreconfig0300:"+ret);
      expect(ret).assertEqual(CAMERA_ERROR_7400101);
    })

    /**
     * @tc.number     : SUB_MULTIMEIDA_OHCAMWEANDK_OHCameraManagerCreateVideoOutputUsedInPreconfig0400
     * @tc.name       : testOHCameraManagerCreateVideoOutputUsedInPreconfig0400
     * @tc.size       : MediumTest
     * @tc.desc       : The total duration of obtaining media files, accurate to milliseconds.
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testOHCameraManagerCreateVideoOutputUsedInPreconfig0400', 0, () => {
      let ret = cameras.oHCameraManagerCreateVideoOutputUsedInPreconfig(videoSurfaceId,3);
      console.log(TAG+"testOHCameraManagerCreateVideoOutputUsedInPreconfig0400:"+ret);
      expect(ret).assertEqual(CAMERA_ERROR_7400101);
    })

  })
}