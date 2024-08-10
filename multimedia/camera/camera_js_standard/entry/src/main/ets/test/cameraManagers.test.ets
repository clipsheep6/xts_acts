/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

import camera from '@ohos.multimedia.camera';
import image from '@ohos.multimedia.image';
import Want from '@ohos.app.ability.Want';
import { Driver, MatchPattern, ON } from '@ohos.UiTest';
import fs from '@ohos.file.fs';
import media from '@ohos.multimedia.media';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import { BusinessError } from '@ohos.base';
import featureAbility from '@ohos.ability.featureAbility';

let TAG = 'cameraManagers';
let cameraManager: camera.CameraManager;
let context = getContext();
let cameraDevice: Array<camera.CameraDevice>;

let surfaceId: string;
let fileAsset: string;
let fdNumber: number;
let fdPath: string;
let fdObject: ESObject;

let avRecorderProfile: media.AVRecorderProfile = {
  audioBitrate: 48000,
  audioChannels: 2,
  audioCodec: media.CodecMimeType.AUDIO_AAC,
  audioSampleRate: 48000,
  fileFormat: media.ContainerFormatType.CFT_MPEG_4,
  videoBitrate: 2000000,
  videoCodec: media.CodecMimeType.VIDEO_AVC,
  videoFrameWidth: 640,
  videoFrameHeight: 480,
  videoFrameRate: 30
}

let permission = ['ohos.permission.CAMERA',
  'ohos.permission.MICROPHONE',
  'ohos.permission.MEDIA_LOCATION',
  'ohos.permission.READ_MEDIA',
  'ohos.permission.WRITE_MEDIA',
  'ohos.permission.ABILITY_BACKGROUND_COMMUNICATION',
  'ohos.permission.READ_IMAGEVIDEO',
  'ohos.permission.WRITE_IMAGEVIDEO'];

let power: ESObject;

let avRecorderConfig: media.AVRecorderConfig = {
  audioSourceType: media.AudioSourceType.AUDIO_SOURCE_TYPE_MIC,
  videoSourceType: media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV,
  profile: avRecorderProfile,
  url: 'fd://', // 文件需先由调用者创建，赋予读写权限，将文件fd传给此参数，eg.fd://45
  rotation: 0, // 合理值0、90、180、270，非合理值prepare接口将报错
  location: { latitude: 30, longitude: 130 }
}

function sleep(ms: ESObject = 66): Promise<string> {
  return new Promise((resolve) => {
    setTimeout(() => {
      resolve('');
    }, ms)
  })
}

let createMaps = async (pathName: string) => {
  try {
    let fileDir: ESObject = await featureAbility.getContext().getFilesDir()
    pathName = fileDir + '/' + pathName;
    let file: ESObject = fs.openSync(pathName, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
    fileAsset = file;
    fdNumber = file.fd;
    fdPath = "fd://" + fdNumber.toString();

  } catch (err) {
    console.log(`createMaps err ${JSON.stringify(err)}`);
  }
}

let getSurfaceId = async () => {
  try {
    createMaps('video.mp4');
    avRecorderConfig.url = fdPath;
    let recorder = await media.createAVRecorder();
    let errs = await recorder.prepare(avRecorderConfig);
    surfaceId = await recorder.getInputSurface();
  } catch (err) {
    console.log(`getSurfaceId err ${JSON.stringify(err)}`);
  }
}


let checkOrientation = (data: number) => {
  if (data >= 0 && data <= 360) {
    return true;
  }
  return false;
}


export default function cameraManagerTest() {
  let createCameraManager = () => {
    try {
      cameraManager = camera.getCameraManager(context);
    } catch (err) {
      console.log(`${TAG} createCameraManager err ${JSON.stringify(err)}`);
    }
  }

  let isEmpty = (temp: ESObject) => {
    if (temp == null || temp == undefined) {
      return true;
    }
    return false;
  }

  let createCamers = () => {
    try {
      cameraDevice = cameraManager.getSupportedCameras();
    } catch (err) {
      console.log(`${TAG} createCamers err ${JSON.stringify(err)}`);
    }
  }

  let ability = async () => {
    const delegator = abilityDelegatorRegistry.getAbilityDelegator();
    const bundleName = abilityDelegatorRegistry.getArguments().bundleName;
    const want: Want = {
      bundleName: bundleName,
      abilityName: 'EntryAbility'
    }
    await delegator.startAbility(want);
    await sleep(1000);
  }

  async function getPermission() {
    featureAbility.getContext().requestPermissionsFromUser(permission, 0, (data) => {
      console.info("request success" + JSON.stringify(data));
    })
  }


  describe('cameraManagersTest', () => {
    let dr = Driver.create();
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async () => {
      createCameraManager();
      createCamers();
      await getPermission();
      await sleep(500);
      for (let i = 0; i < permission.length; i++) {
        power = await dr?.waitForComponent(ON.text('允许', MatchPattern.EQUALS), 500);
        await power?.click();
        power = null;
        await sleep(500);
      }
      await getSurfaceId();

      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
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
     * @tc.number    : testCameraGetSupportedCameras0100
     * @tc.name      : SUB_MULTIMEDIA_GET_SUPPORTED_CAMERAS_0100
     * @tc.desc      : 1.getSupportedCameras
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_SUPPORTED_CAMERAS_0100', 0, (done: Function) => {
      console.log(`${TAG} SUB_MULTIMEDIA_GET_SUPPORTED_CAMERAS_0100 start `);
      try {
        let cameras = cameraManager.getSupportedCameras();
        console.log(`${TAG} SUB_MULTIMEDIA_GET_SUPPORTED_CAMERAS_0100 getSupportedCameras ${cameras}`);
        if (!isEmpty(cameras)) {
          for (let i = 0; i < cameras.length; i++) {
            let cameraID = cameras[i].cameraId;
            expect(isEmpty(cameraID)).assertFalse();
            let cameraPosition = cameras[i].cameraPosition;
            expect(isEmpty(cameraPosition)).assertFalse();
            let cameraType = cameras[i].cameraType;
            expect(isEmpty(cameraType)).assertFalse();
            let connectionType = cameras[i].connectionType;
            expect(isEmpty(connectionType)).assertFalse();
            let cameraOrientation = cameras[i].cameraOrientation;
            expect(checkOrientation(cameraOrientation)).assertTrue();
          }
        }
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_SUPPORTED_CAMERAS_0100 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : testCameraGetSupportedSceneModes0100
     * @tc.name      : SUB_MULTIMEDIA_GET_SUPPORTED_SCENE_MODES_0100
     * @tc.desc      : 1.getSupportedSceneModes parameter cameras
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_SUPPORTED_SCENE_MODES_0100', 0, (done: Function) => {
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let modes = cameraManager.getSupportedSceneModes(cameras[i]);
          expect(isEmpty(modes)).assertFalse();
          for (let j = 0; j < modes.length; j++) {
            expect(isEmpty(modes[j])).assertFalse();
          }
        }
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_SUPPORTED_SCENE_MODES_0100 err ${JSON.stringify(err)} `);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : testCameraGetSupportedSceneModes0200
     * @tc.name      : SUB_MULTIMEDIA_GET_SUPPORTED_SCENE_MODES_0200
     * @tc.desc      : 1.getSupportedSceneModes parameter null
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_SUPPORTED_SCENE_MODES_0200', 0, (done: Function) => {
      try {
        let modes = cameraManager.getSupportedSceneModes(null);
        expect(isEmpty(modes)).assertTrue();
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_SUPPORTED_SCENE_MODES_0200 err ${JSON.stringify(err)} `);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })

    /**
     * @tc.number    : testCameraGetSupportedOutputCapability0100
     * @tc.name      : SUB_MULTIMEDIA_GET_SUPPORTED_OUTPUT_CAPABILITY_0100
     * @tc.desc      : 1.getSupportedSceneModes parameter cameras
     *                 2.getSupportedOutputCapability parameter cameras,modes
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_SUPPORTED_OUTPUT_CAPABILITY_0100', 0, (done: Function) => {
      let cameras = cameraDevice
      try {
        for (let i = 1; i < cameras.length; i++) {
          let modes = cameraManager.getSupportedSceneModes(cameras[i]);
          if (!isEmpty(modes)) {
            for (let j = 0; j < modes.length; j++) {
              let cameraOutputCapability = cameraManager.getSupportedOutputCapability(cameras[i], modes[j]);
              expect(isEmpty(cameraOutputCapability)).assertFalse();
              let previewProfiles = cameraOutputCapability.previewProfiles;
              expect(isEmpty(previewProfiles)).assertFalse();
              let photoProfiles = cameraOutputCapability.photoProfiles;
              expect(isEmpty(photoProfiles)).assertFalse();
              let videoProfiles = cameraOutputCapability.videoProfiles;
              expect(isEmpty(videoProfiles)).assertFalse();
              let supportedMetadataObjectTypes = cameraOutputCapability.supportedMetadataObjectTypes;
              expect(isEmpty(supportedMetadataObjectTypes)).assertFalse();
            }
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_SUPPORTED_OUTPUT_CAPABILITY_0100 err ${JSON.stringify(err)} `);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraGetSupportedOutputCapability0200
     * @tc.name      : SUB_MULTIMEDIA_GET_SUPPORTED_OUTPUT_CAPABILITY_0200
     * @tc.desc      : 1.getSupportedOutputCapability parameter null,null
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_SUPPORTED_OUTPUT_CAPABILITY_0200', 0, (done: Function) => {
      try {
        let cameraOutputCapability = cameraManager.getSupportedOutputCapability(null, null);
        expect(isEmpty(cameraOutputCapability)).assertTrue();
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_SUPPORTED_OUTPUT_CAPABILITY_0200 err ${JSON.stringify(err)} `);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })

    /**
     * @tc.number    : testCameraGetSupportedOutputCapability0300
     * @tc.name      : SUB_MULTIMEDIA_GET_SUPPORTED_OUTPUT_CAPABILITY_0300
     * @tc.desc      : 1.getSupportedOutputCapability parameter cameras,-1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_SUPPORTED_OUTPUT_CAPABILITY_0300', 0, (done: Function) => {
      try {
        let cameras = cameraDevice;
        for (let i = 0; i < cameras.length; i++) {
          let cameraOutputCapabilitys = cameraManager.getSupportedOutputCapability(cameras[i], -1);
          expect(isEmpty(cameraOutputCapabilitys)).assertTrue();
        }
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_SUPPORTED_OUTPUT_CAPABILITY_0300 err ${JSON.stringify(err)} `);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done()
      }
    })

    /**
     * @tc.number    : testCameraGetSupportedOutputCapability0400
     * @tc.name      : SUB_MULTIMEDIA_GET_SUPPORTED_OUTPUT_CAPABILITY_0400
     * @tc.desc      : 1.getSupportedOutputCapability parameter cameras,3
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_SUPPORTED_OUTPUT_CAPABILITY_0400', 0, (done: Function) => {
      try {
        let cameras = cameraDevice;
        for (let i = 0; i < cameras.length; i++) {
          let cameraOutputCapabilitys = cameraManager.getSupportedOutputCapability(cameras[i], 3);
          expect(isEmpty(cameraOutputCapabilitys)).assertFalse();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_SUPPORTED_OUTPUT_CAPABILITY_0400 err ${JSON.stringify(err)} `);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })

    /**
     * @tc.number    : testCameraGetSupportedOutputCapability0500
     * @tc.name      : SUB_MULTIMEDIA_GET_SUPPORTED_OUTPUT_CAPABILITY_0500
     * @tc.desc      : 1.getSupportedOutputCapability parameter null,1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_SUPPORTED_OUTPUT_CAPABILITY_0500', 0, (done: Function) => {
      try {
        let cameras = cameraDevice;
        let cameraOutputCapabilitys = cameraManager.getSupportedOutputCapability(null, 1);
        expect(isEmpty(cameraOutputCapabilitys)).assertTrue();
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_SUPPORTED_OUTPUT_CAPABILITY_0500 err ${JSON.stringify(err)} `);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })

    /**
     * @tc.number    : testCameraIsCameraMuted0100
     * @tc.name      : SUB_MULTIMEDIA_IS_CAMERA_MUTED_0100
     * @tc.desc      : 1.isCameraMuted
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IS_CAMERA_MUTED_0100', 0, (done: Function) => {
      try {
        let isMuted = cameraManager.isCameraMuted();
        console.log(`SUB_MULTIMEDIA_IS_CAMERA_MUTED_0100 isMuted ${isMuted}`);
        expect(isEmpty(isMuted)).assertFalse();
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_IS_CAMERA_MUTED_0100 err ${JSON.stringify(err)} `);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraCreateCameraInput0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0100
     * @tc.desc      : 1.createCameraInput parameter cameras
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0100', 0, (done: Function) => {
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let cameraInput = cameraManager.createCameraInput(cameras[i]);
          console.log(`${TAG} SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0100 cameraInput ${cameraInput}`);
          expect(isEmpty(cameraInput)).assertFalse();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0100 err ${err}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : testCameraCreateCameraInput0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0200
     * @tc.desc      : 1.createCameraInput parameter null
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0200', 0, (done: Function) => {
      try {
        let cameraInput = cameraManager.createCameraInput(null);
        expect(isEmpty(cameraInput)).assertFalse();
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0200 err ${err}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })

    /**
     * @tc.number    : testCameraCreateCameraInput0300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0300
     * @tc.desc      : 1.createCameraInput parameter cameras[i].cameraPosition, cameras[i].cameraType
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0300', 0, (done: Function) => {
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let cameraInput = cameraManager.createCameraInput(cameras[i].cameraPosition, cameras[i].cameraType);
          expect(isEmpty(cameraInput)).assertFalse();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0300 err ${err}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : testCameraCreateCameraInput0400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0400
     * @tc.desc      : 1.createCameraInput parameter null,null
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0400', 0, (done: Function) => {
      try {
        let cameraInput = cameraManager.createCameraInput(null, null);
        expect(isEmpty(cameraInput)).assertFalse();
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0400 err ${err}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })

    /**
     * @tc.number    : testCameraCreateCameraInput0500
     * @tc.name      : SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0500
     * @tc.desc      : 1.createCameraInput parameter 5,5
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0500', 0, (done: Function) => {
      try {
        let cameraInput = cameraManager.createCameraInput(5, 5);
        expect(isEmpty(cameraInput)).assertTrue();
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0500 err ${err}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


    /**
     * @tc.number    : testCameraCreateCameraInput0600
     * @tc.name      : SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0600
     * @tc.desc      : 1.createCameraInput parameter cameras[i].cameraPosition,null
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0600', 0, (done: Function) => {
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let cameraInput = cameraManager.createCameraInput(cameras[i].cameraPosition, null);
          expect(isEmpty(cameraInput)).assertTrue();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0600 err ${err}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })


    /**
     * @tc.number    : testCameraCreateCameraInput0700
     * @tc.name      : SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0700
     * @tc.desc      : 1.createCameraInput parameter cameras[i].cameraPosition,5
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0700', 0, (done: Function) => {
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let cameraInput = cameraManager.createCameraInput(cameras[i].cameraPosition, 5);
          expect(isEmpty(cameraInput)).assertTrue();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0700 err ${err}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


    /**
     * @tc.number    : testCameraCreateCameraInput0800
     * @tc.name      : SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0800
     * @tc.desc      : 1.createCameraInput parameter null,cameras[i].cameraType
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0800', 0, (done: Function) => {
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let cameraInput = cameraManager.createCameraInput(null, cameras[i].cameraType);
          expect(isEmpty(cameraInput)).assertTrue();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0800 err ${err}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })


    /**
     * @tc.number    : testCameraCreateCameraInput0900
     * @tc.name      : SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0900
     * @tc.desc      : 1.createCameraInput parameter 5,cameras[i].cameraType
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0900', 0, (done: Function) => {
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let cameraInput = cameraManager.createCameraInput(5, cameras[i].cameraType);
          expect(isEmpty(cameraInput)).assertTrue();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_CAMERA_INPUT_0900 err ${err}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


    /**
     * @tc.number    : testCameraCreatePreviewOutput0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PREVIEW_OUTPUT_0100
     * @tc.desc      : 1.image.createImageReceiver
     *                 2. receiver.getReceivingSurfaceId
     *                 3.getSupportedSceneModes parameter cameras
     *                 4.getSupportedOutputCapability parameter cameras, modes
     *                 5.createPreviewOutput parameter cameraOutputCapabilitys.previewProfiles[k], ImageReceiver.surfaceId
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PREVIEW_OUTPUT_0100', 0, (done: Function) => {
      let cameras = cameraDevice;
      try {
        let receiver: image.ImageReceiver = image.createImageReceiver({
          width: 8, height: 8192
        }, image.ImageFormat.JPEG, 8);
        receiver.getReceivingSurfaceId((err, surfaceId) => {
          for (let i = 0; i < cameras.length; i++) {
            let modes = cameraManager.getSupportedSceneModes(cameras[i]);
            for (let j = 0; j < modes.length; j++) {
              let cameraOutputCapabilitys = cameraManager.getSupportedOutputCapability(cameras[i], modes[j]);
              for (let k = 0; k < cameraOutputCapabilitys.previewProfiles.length; k++) {
                let previewOutput =
                  cameraManager.createPreviewOutput(cameraOutputCapabilitys.previewProfiles[k], surfaceId);
                console.log(`${TAG} SUB_MULTIMEDIA_CREATE_PREVIEW_OUTPUT_0100 previewOutput ${previewOutput}`);
                expect(isEmpty(previewOutput)).assertFalse();
              }
            }
          }
        })
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_PREVIEW_OUTPUT_0100 err ${err}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraCreatePreviewOutput0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PREVIEW_OUTPUT_0200
     * @tc.desc      : 1.getSupportedSceneModes parameter cameras
     *                 2.getSupportedOutputCapability parameter cameras, modes
     *                 3.createPreviewOutput parameter cameraOutputCapabilitys.previewProfiles[k], XComponent.surfaceId
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PREVIEW_OUTPUT_0200', 0, (done: Function) => {
      let cameras = cameraDevice;
      try {
        if (!isEmpty(globalThis.surfaceId)) {
          for (let i = 0; i < cameras.length; i++) {
            let modes = cameraManager.getSupportedSceneModes(cameras[i]);
            for (let j = 0; j < modes.length; j++) {
              let cameraOutputCapability = cameraManager.getSupportedOutputCapability(cameras[i], modes[j]);
              for (let k = 0; k < cameraOutputCapability.previewProfiles.length; k++) {
                let previewOutput =
                  cameraManager.createPreviewOutput(cameraOutputCapability.previewProfiles[k], globalThis.surfaceId);
                console.log(`${TAG} SUB_MULTIMEDIA_CREATE_PREVIEW_OUTPUT_0200 previewOutput ${previewOutput}`);
                expect(isEmpty(previewOutput)).assertFalse();
              }
            }
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_PREVIEW_OUTPUT_0200 err ${err}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraCreatePreviewOutput0300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PREVIEW_OUTPUT_0300
     * @tc.desc      : 1.createPreviewOutput parameter null,null
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PREVIEW_OUTPUT_0300', 0, (done: Function) => {
      try {
        let previewOutput = cameraManager.createPreviewOutput(null, null);
        expect(isEmpty(previewOutput)).assertFalse();
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_PREVIEW_OUTPUT_0300 err ${err}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })


    /**
     * @tc.number    : testCameraCreatePreviewOutput0400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PREVIEW_OUTPUT_0400
     * @tc.desc      : 1.getSupportedSceneModes parameter cameras
     *                 2.getSupportedOutputCapability parameter cameras, modes
     *                 3.createPreviewOutput parameter cameraOutputCapabilitys.previewProfiles[k], null
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PREVIEW_OUTPUT_0400', 0, (done: Function) => {
      let cameras = cameraDevice;
      try {
        if (!isEmpty(globalThis.surfaceId)) {
          for (let i = 0; i < cameras.length; i++) {
            let modes = cameraManager.getSupportedSceneModes(cameras[i]);
            for (let j = 0; j < modes.length; j++) {
              let cameraOutputCapability = cameraManager.getSupportedOutputCapability(cameras[i], modes[j]);
              for (let k = 0; k < cameraOutputCapability.previewProfiles.length; k++) {
                let previewOutput =
                  cameraManager.createPreviewOutput(cameraOutputCapability.previewProfiles[k], null);
                console.log(`${TAG} SUB_MULTIMEDIA_CREATE_PREVIEW_OUTPUT_0400 previewOutput ${previewOutput}`);
                expect(isEmpty(previewOutput)).assertFalse();
              }
            }
          }
        }
        done()
      } catch (err) {
        console.log(`${TAG} testCameraCreatePreviewOutput0400 err ${err}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })


    /**
     * @tc.number    : testCameraCreatePreviewOutput0500
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PREVIEW_OUTPUT_0500
     * @tc.desc      : 1.createPreviewOutput parameter null, XComponent.surfaceId
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it(`SUB_MULTIMEDIA_CREATE_PREVIEW_OUTPUT_0500`, 0, (done: Function) => {
      try {
        if (!isEmpty(globalThis.surfaceId)) {
          let previewOutput = cameraManager.createPreviewOutput(null, globalThis.surfaceId);
          expect(isEmpty(previewOutput)).assertTrue();
          done();
        }
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_PREVIEW_OUTPUT_0500 err ${err}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })


    /**
     * @tc.number    : testCameraCreatePhotoOutput0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PHOTO_OUTPUT_0100
     * @tc.desc      : 1.getSupportedSceneModes parameter cameras
     *                 2.getSupportedOutputCapability parameter cameras, modes
     *                 3.createPhotoOutput parameter cameraOutputCapability.photoProfiles[k]
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PHOTO_OUTPUT_0100', 0, (done: Function) => {
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let modes = cameraManager.getSupportedSceneModes(cameras[i]);
          for (let j = 0; j < modes.length; j++) {
            let cameraOutputCapability = cameraManager.getSupportedOutputCapability(cameras[i], modes[j]);
            for (let k = 0; k < cameraOutputCapability.photoProfiles.length; k++) {
              let photoOutput = cameraManager.createPhotoOutput(cameraOutputCapability.photoProfiles[k]);
              console.log(`${TAG} SUB_MULTIMEDIA_CREATE_PHOTO_OUTPUT_0100 photoOutput ${photoOutput}`);
              expect(isEmpty(photoOutput)).assertFalse();
            }
          }
        }
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_PHOTO_OUTPUT_0100 err ${err}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : testCameraCreatePhotoOutput0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PHOTO_OUTPUT_0200
     * @tc.desc      : 1.createPhotoOutput parameter null
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('testCameraCreatePhotoOutput0200', 0, (done: Function) => {
      try {
        let photoOutput = cameraManager.createPhotoOutput(null);
        expect(isEmpty(photoOutput)).assertFalse();
        done();
      } catch (err) {
        console.log(`${TAG} testCameraCreatePhotoOutput0200 err ${err}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })

    /**
     * @tc.number    : testCameraCreateVideoOutput0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_VIDEO_OUTPUT_0100
     * @tc.desc      : 1.getSupportedSceneModes parameter cameras
     *                 2.getSupportedOutputCapability parameter cameras, modes
     *                 3.createVideoOutput parameter cameraOutputCapability.videoProfiles[k],surfaceId
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_VIDEO_OUTPUT_0100', 0, (done: Function) => {
      let cameras = cameraDevice;
      try {
        if (!isEmpty(surfaceId)) {
          for (let i = 0; i < cameras.length; i++) {
            let modes = cameraManager.getSupportedSceneModes(cameras[i]);
            for (let j = 0; j < modes.length; j++) {
              let cameraOutputCapability = cameraManager.getSupportedOutputCapability(cameras[i], modes[j]);
              for (let k = 0; k < cameraOutputCapability.videoProfiles.length; k++) {
                let videoOutput = cameraManager.createVideoOutput(cameraOutputCapability.videoProfiles[k], surfaceId);
                console.log(`${TAG} SUB_MULTIMEDIA_CREATE_VIDEO_OUTPUT_0100 videoOutput ${videoOutput}`);
                expect(isEmpty(videoOutput)).assertFalse();
              }
            }

          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} testCameraCreatePhotoOutput0100 err ${err}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraCreateVideoOutput0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_VIDEO_OUTPUT_0200
     * @tc.desc      : 1.createVideoOutput parameter null,null
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_VIDEO_OUTPUT_0200', 0, (done: Function) => {
      try {
        let videoOutput = cameraManager.createVideoOutput(null, null);
        expect(isEmpty(videoOutput)).assertFalse();
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_VIDEO_OUTPUT_0200 err ${err}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })


    /**
     * @tc.number    : testCameraCreateVideoOutput0300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_VIDEO_OUTPUT_0300
     * @tc.desc      : 1.getSupportedSceneModes parameter cameras
     *                 2.getSupportedOutputCapability parameter cameras, modes
     *                 3.createVideoOutput parameter cameraOutputCapability.videoProfiles[k],''
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_VIDEO_OUTPUT_0300', 0, (done: Function) => {
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let modes = cameraManager.getSupportedSceneModes(cameras[i]);
          for (let j = 0; j < modes.length; j++) {
            let cameraOutputCapability = cameraManager.getSupportedOutputCapability(cameras[i], modes[j]);
            for (let k = 0; k < cameraOutputCapability.videoProfiles.length; k++) {
              let videoOutput = cameraManager.createVideoOutput(cameraOutputCapability.videoProfiles[k], '');
              console.log(`${TAG} SUB_MULTIMEDIA_CREATE_VIDEO_OUTPUT_0300 videoOutput ${videoOutput}`);
              expect(isEmpty(videoOutput)).assertTrue();
            }
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} testCameraCreateVideoOutput0300 err ${err}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraCreateVideoOutput0400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_VIDEO_OUTPUT_0400
     * @tc.desc      : 1.getSupportedSceneModes parameter cameras
     *                 2.getSupportedOutputCapability parameter cameras, modes
     *                 3.createVideoOutput parameter cameraOutputCapability.videoProfiles[k],null
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_VIDEO_OUTPUT_0400', 0, (done: Function) => {
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let modes = cameraManager.getSupportedSceneModes(cameras[i]);
          for (let j = 0; j < modes.length; j++) {
            let cameraOutputCapability = cameraManager.getSupportedOutputCapability(cameras[i], modes[j]);
            for (let k = 0; k < cameraOutputCapability.videoProfiles.length; k++) {
              let videoOutput = cameraManager.createVideoOutput(cameraOutputCapability.videoProfiles[k], null);
              console.log(`${TAG} SUB_MULTIMEDIA_CREATE_VIDEO_OUTPUT_0400 videoOutput ${videoOutput}`);
              expect(isEmpty(videoOutput)).assertTrue();
            }
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_VIDEO_OUTPUT_0400 err ${err}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })


    /**
     * @tc.number    : testCameraCreateVideoOutput0500
     * @tc.name      : SUB_MULTIMEDIA_CREATE_VIDEO_OUTPUT_0500
     * @tc.desc      : 1.createVideoOutput parameter null,surfaceId
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_VIDEO_OUTPUT_0500', 0, (done: Function) => {
      try {
        let videoOutput = cameraManager.createVideoOutput(null, surfaceId);
        expect(isEmpty(videoOutput)).assertTrue();
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_VIDEO_OUTPUT_0500 err ${err}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })


    /**
     * @tc.number    : testCameraCreateMetadataOutput0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_METADATA_OUTPUT_0100
     * @tc.desc      : 1.getSupportedSceneModes parameter cameras
     *                 2.getSupportedOutputCapability parameter cameras, modes
     *                 3.createMetadataOutput parameter cameraOutputCapability.supportedMetadataObjectTypes
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_METADATA_OUTPUT_0100', 0, (done: Function) => {
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let modes = cameraManager.getSupportedSceneModes(cameras[i]);
          for (let j = 0; j < modes.length; j++) {
            let cameraOutputCapability = cameraManager.getSupportedOutputCapability(cameras[i], modes[j]);
            let metadataOutput =
              cameraManager.createMetadataOutput(cameraOutputCapability.supportedMetadataObjectTypes);
            expect(isEmpty(metadataOutput)).assertFalse();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_METADATA_OUTPUT_0100 err ${err}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraCreateMetadataOutput0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_METADATA_OUTPUT_0200
     * @tc.desc      : 1.createMetadataOutput parameter null
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_METADATA_OUTPUT_0200', 0, (done: Function) => {
      try {
        let metadataOutput = cameraManager.createMetadataOutput(null);
        expect(isEmpty(metadataOutput)).assertFalse();
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_METADATA_OUTPUT_0200 err ${err}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })

    /**
     * @tc.number    : testCameraCreateSession0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_SESSION_0100
     * @tc.desc      : 1.createSession parameter 1,2,12
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_SESSION_0100', 0, (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO, camera.SceneMode.SECURE_PHOTO];
      try {
        for (let i = 0; i < arr.length; i++) {
          let photoSession = cameraManager.createSession(arr[i]);
          expect(isEmpty(photoSession)).assertFalse();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_SESSION_0100 err ${err}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraCreateSession0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_SESSION_0200
     * @tc.desc      : 1.createSession parameter 0
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_SESSION_0200', 0, (done: Function) => {
      try {
        let photoSession = cameraManager.createSession(0);
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_SESSION_0200 photoSession ${photoSession}`);
        expect(isEmpty(photoSession)).assertTrue();
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_SESSION_0200 err ${err}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraCreateSession0300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_SESSION_0300
     * @tc.desc      : 1.createSession parameter null
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_SESSION_0300', 0, (done: Function) => {
      try {
        let photoSessions = cameraManager.createSession(null);
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_SESSION_0300 photoSessions ${photoSessions}`);
        expect(isEmpty(photoSessions)).assertTrue();
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CREATE_SESSION_0300 err ${err}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })


    /**
     * @tc.number    : testCameraOn0100
     * @tc.name      : SUB_MULTIMEDIA_ON_0100
     * @tc.desc      : 1.on('cameraStatus')
     *                 2.cameraInput.open()
     *                 3.cameraInput.close()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_ON_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let flag = false;
      try {
        let callback = (err: BusinessError, info: camera.CameraStatusInfo) => {
          flag = true;
          console.log(`${TAG} SUB_MULTIMEDIA_ON_0100 on err  ${JSON.stringify(err)} `);
          console.log(`${TAG} SUB_MULTIMEDIA_ON_0100 ${info.status} `);
          console.log(`${TAG} SUB_MULTIMEDIA_ON_0100 ${info.camera.cameraId} `);
        }
        cameraManager.on('cameraStatus', callback);
        for (let i = 0; i < cameras.length; i++) {
          let cameraInput = cameraManager.createCameraInput(cameras[i]);
          await sleep();
          await cameraInput.open();
          await sleep();
          await cameraInput.close();
          await sleep(200);
          expect(flag).assertTrue();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_ON_0100 err ${err}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraOn0200
     * @tc.name      : SUB_MULTIMEDIA_ON_0200
     * @tc.desc      : 1.on('torchStatusChange')
     *                 2.cameraManager.setTorchMode(1)
     *                 3.cameraManager.setTorchMode(0)
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_ON_0200', 0, async (done: Function) => {
      let flag = false;
      try {
        cameraManager.on('torchStatusChange', (err, info) => {
          flag = true;
          console.log(`SUB_MULTIMEDIA_ON_0200 testCameraOn0200 on err ${JSON.stringify(err)}`);
          console.log(`SUB_MULTIMEDIA_ON_0200 testCameraOn0200 info ${JSON.stringify(info)}`);
          expect(isEmpty(info.isTorchAvailable)).assertFalse();
          expect(isEmpty(info.isTorchActive)).assertFalse();
          expect(isEmpty(info.torchLevel)).assertFalse();
        })
        cameraManager.setTorchMode(1);
        await sleep();
        cameraManager.setTorchMode(0);
        await sleep(200);
        expect(flag).assertTrue();
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_ON_0200 err ${err.code}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })

    /**
     * @tc.number    : testCameraOff0100
     * @tc.name      : SUB_MULTIMEDIA_OFF_0100
     * @tc.desc      : 1.on('cameraStatus')
     *                 2.off('cameraStatus')
     *                 3.open
     *                 4.close
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_OFF_0100', 0, async (done: Function) => {
      let flag = true;
      let cameras = cameraDevice;
      try {
        let callback = (err: BusinessError, info: camera.CameraStatusInfo) => {
          flag = false;
          console.log(`${TAG} SUB_MULTIMEDIA_OFF_0100 ${info.status} `);
          console.log(`${TAG} SUB_MULTIMEDIA_OFF_0100 ${info.camera.cameraId} `);
        }
        cameraManager.on('cameraStatus', callback);
        cameraManager.off('cameraStatus');
        for (let i = 0; i < cameras.length; i++) {
          let cameraInput = cameraManager.createCameraInput(cameras[i]);
          await sleep();
          await cameraInput.open();
          await sleep();
          await cameraInput.close();
          await sleep(200);
          expect(flag).assertTrue();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_OFF_0100 err ${err}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraOff0200
     * @tc.name      : SUB_MULTIMEDIA_OFF_0200
     * @tc.desc      : 1.on('torchStatusChange')
     *                 2.off('torchStatusChange')
     *                 3.setTorchMode(1)
     *                 4.setTorchMode(0)
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_OFF_0200', 0, async (done: Function) => {
      let flag = true;
      try {
        cameraManager.on('torchStatusChange', (err, info) => {
          flag = false;
          console.log(`SUB_MULTIMEDIA_OFF_0200 testCameraOn0200 info ${JSON.stringify(info)}`);
          expect(isEmpty(info.isTorchAvailable)).assertFalse();
          expect(isEmpty(info.isTorchActive)).assertFalse();
          expect(isEmpty(info.torchLevel)).assertFalse();
        })
        cameraManager.off('torchStatusChange');
        cameraManager.setTorchMode(1);
        await sleep();
        cameraManager.setTorchMode(0);
        await sleep(200);
        expect(flag).assertTrue();
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_OFF_0200 err ${err.code}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


    /**
     * @tc.number    : testCameraIsTorchSupported0100
     * @tc.name      : SUB_MULTIMEDIA_IS_TORCH_SUPPORTED_0100
     * @tc.desc      : 1.isTorchSupported
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IS_TORCH_SUPPORTED_0100', 0, (done: Function) => {
      try {
        let isSupported = cameraManager.isTorchSupported();
        console.log(`SUB_MULTIMEDIA_IS_TORCH_SUPPORTED_0100 isSupported ${isSupported}`);
        expect(isEmpty(isSupported)).assertFalse();
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_IS_TORCH_SUPPORTED_0100 err ${err}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : testCameraIsTorchModeSupported0100
     * @tc.name      : SUB_MULTIMEDIA_IS_TORCH_MODE_SUPPORTED_0100
     * @tc.desc      : 1.isTorchSupported
     *                 2.isTorchModeSupported parameter tempTorchMode
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IS_TORCH_MODE_SUPPORTED_0100', 0, (done: Function) => {
      let tempTorchMode = [camera.TorchMode.OFF, camera.TorchMode.ON, camera.TorchMode.AUTO];
      console.log(`${TAG} SUB_MULTIMEDIA_IS_TORCH_MODE_SUPPORTED_0100 start`);
      try {
        let isSupported = cameraManager.isTorchSupported();
        if (isSupported) {
          for (let i = 0; i < tempTorchMode.length; i++) {
            let isSupported = cameraManager.isTorchModeSupported(tempTorchMode[i]);
            console.log(`${TAG} SUB_MULTIMEDIA_IS_TORCH_MODE_SUPPORTED_0100 isSupported ${isSupported}`);
            expect(isEmpty(isSupported)).assertFalse();
          }
        } else {
          console.log(`${TAG} SUB_MULTIMEDIA_IS_TORCH_MODE_SUPPORTED_0100 ${isSupported} not supported torch `);
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_IS_TORCH_MODE_SUPPORTED_0100 err ${err}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraGetTorchMode0100
     * @tc.name      : SUB_MULTIMEDIA_GET_TORCH_MODE_0100
     * @tc.desc      : 1.isTorchSupported
     *                 2.getTorchMode
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_TORCH_MODE_0100', 0, (done: Function) => {
      try {
        let isSupported = cameraManager.isTorchSupported();
        if (isSupported) {
          let torchMode = cameraManager.getTorchMode();
          console.log(`${TAG} SUB_MULTIMEDIA_GET_TORCH_MODE_0100 torchMode ${torchMode}`);
          expect(isEmpty(torchMode)).assertFalse();
        } else {
          console.log(`${TAG} SUB_MULTIMEDIA_GET_TORCH_MODE_0100 ${isSupported} not supported torch `);
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_TORCH_MODE_0100 err ${err}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraSetTorchMode0100
     * @tc.name      : SUB_MULTIMEDIA_SET_TORCH_MODE_0100
     * @tc.desc      : 1.isTorchSupported
     *                 2.setTorchMode parameter tempArr
     *                 3.getTorchMode
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SET_TORCH_MODE_0100', 0, async (done: Function) => {
      let tempArr =
        [camera.TorchMode.OFF, camera.TorchMode.OFF, camera.TorchMode.ON, camera.TorchMode.ON, camera.TorchMode.AUTO];
      try {
        let isSupported = cameraManager.isTorchSupported();
        let temp: ESObject = 0;
        if (isSupported) {
          for (let i = 0; i < tempArr.length; i++) {
            console.log(`SUB_MULTIMEDIA_SET_TORCH_MODE_0100 start`);
            let flag = cameraManager.isTorchModeSupported(tempArr[i]);
            if (flag) {
              cameraManager.setTorchMode(tempArr[i]);
              temp = tempArr[i];
            }
            await sleep();
            let torchMode = cameraManager.getTorchMode();
            console.log(`SUB_MULTIMEDIA_SET_TORCH_MODE_0100 tempArr[i] ${tempArr[i]} torchMode ${torchMode}`);
            expect(temp).assertEqual(torchMode);
          }
        } else {
          console.log(`${TAG} SUB_MULTIMEDIA_SET_TORCH_MODE_0100 ${isSupported} not supported torch `);
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_TORCH_MODE_0100 err ${err}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraSetTorchMode0200
     * @tc.name      : SUB_MULTIMEDIA_SET_TORCH_MODE_0200
     * @tc.desc      : 1.isTorchSupported
     *                 2.setTorchMode parameter tempArr
     *                 3.getTorchMode
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SET_TORCH_MODE_0200', 0, async (done: Function) => {
      let tempArr =
        [camera.TorchMode.OFF, camera.TorchMode.OFF, camera.TorchMode.ON, camera.TorchMode.ON, camera.TorchMode.AUTO];
      try {
        let isSupported = cameraManager.isTorchSupported();
        let temp: ESObject = 0;
        if (isSupported) {
          for (let i = 0; i < tempArr.length; i++) {
            console.log(`SUB_MULTIMEDIA_SET_TORCH_MODE_0200 start`);
            let flag = cameraManager.isTorchModeSupported(tempArr[i]);
            if (!flag) {
              cameraManager.setTorchMode(tempArr[i]);
              temp = tempArr[i];
            }
            await sleep();
            let torchMode = cameraManager.getTorchMode();
            console.log(`SUB_MULTIMEDIA_SET_TORCH_MODE_0200 tempArr[i] ${tempArr[i]} torchMode ${torchMode}`);
          }
        } else {
          console.log(`${TAG} SUB_MULTIMEDIA_SET_TORCH_MODE_0200 ${isSupported} not supported torch `);
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_TORCH_MODE_0200 err ${err}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.OPERATION_NOT_ALLOWED);
        done();
      }
    })


  })
}