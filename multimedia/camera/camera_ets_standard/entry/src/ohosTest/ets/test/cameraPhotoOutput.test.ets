import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';

import camera from '@ohos.multimedia.camera';
import { Driver, MatchPattern, ON } from '@ohos.UiTest';
import featureAbility from '@ohos.ability.featureAbility';
import { BusinessError } from '@kit.BasicServicesKit';
import photoAccessHelper from '@ohos.file.photoAccessHelper';
import { surfaceIds, videoSurfaceId } from '../testability/pages/Index'
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import Want from '@ohos.app.ability.Want';

let TAG = 'cameraFlash';
let cameraManager: camera.CameraManager;
let context = getContext(this);
let cameraDevice: Array<camera.CameraDevice>;

let tempCameraInput: camera.CameraInput;
let tempPreviewOutput: camera.PreviewOutput;
let tempPhotoOutput: camera.PhotoOutput;
let tempPhotoSession: camera.PhotoSession;

// 创建input参数为cameraDevice的下标
let createInput = async (index: number) => {
  tempCameraInput = cameraManager.createCameraInput(cameraDevice[index]);
  if (!isEmpty(tempCameraInput)) {
    await tempCameraInput.open();
  }
}

// 创建Output参数为cameraDevice的下标、相机模式
let createOutput = async (index: number, mode: number) => {
  let cameraOutputCap = cameraManager.getSupportedOutputCapability(cameraDevice[index], mode);
  tempPreviewOutput = cameraManager.createPreviewOutput(cameraOutputCap.previewProfiles[0], surfaceIds);
  tempPhotoOutput = cameraManager.createPhotoOutput(cameraOutputCap.photoProfiles[0]);
}

// 创建Session对象参数为相机模式
let createPhotoSession = async (mode: number) => {
  tempPhotoSession = cameraManager.createSession(mode);
  tempPhotoSession.beginConfig();
}

// 释放相机资源
let stopCameraSession = async () => {
  tempPhotoSession.beginConfig();
  if (!isEmpty(tempCameraInput)) {
    tempPhotoSession.removeInput(tempCameraInput);
    await tempCameraInput.close();
  }
  if (!isEmpty(tempPreviewOutput)) {
    tempPhotoSession.removeOutput(tempPreviewOutput);
    await tempPreviewOutput.release();
  }
  if (!isEmpty(tempPhotoOutput)) {
    tempPhotoSession.removeOutput(tempPhotoOutput);
    await tempPhotoOutput.release();
  }
}

// 添加相机流参数为cameraDevice的下标、相机模式
let addCommit = (i: number, mode: number) => {
  createInput(i);
  createOutput(i, mode);
  if (tempCameraInput) {
    tempPhotoSession.addInput(tempCameraInput);
  }
  if (tempPreviewOutput) {
    tempPhotoSession.addOutput(tempPreviewOutput);
  }
  if (tempPhotoOutput) {
    tempPhotoSession.addOutput(tempPhotoOutput);
  }
}

let permission = ['ohos.permission.GRANT_SENSITIVE_PERMISSIONS',
  'ohos.permission.REVOKE_SENSITIVE_PERMISSIONS',
  'ohos.permission.CAMERA',
  'ohos.permission.MICROPHONE',
  'ohos.permission.MEDIA_LOCATION',
  'ohos.permission.READ_MEDIA',
  'ohos.permission.WRITE_MEDIA',
  'ohos.permission.START_ABILIIES_FROM_BACKGROUND',
  'ohos.permission.START_INVISIBLE_ABILITY',
  'ohos.permission.ABILITY_BACKGROUND_COMMUNICATION'
];

let power: ESObject;

// 延时器参数是时间
function sleep(ms: ESObject = 66): Promise<string> {
  return new Promise((resolve) => {
    setTimeout(() => {
      resolve('');
    }, ms)
  })
}

// 创建cameraManager对象
let createCameraManager = () => {
  try {
    cameraManager = camera.getCameraManager(context);
  } catch (err) {
    console.log(`${TAG} createCameraManager err ${JSON.stringify(err)}`);
  }
}

// 判断传入的参数是否为空
let isEmpty = (temp: ESObject) => {
  if (temp == null || temp == undefined || temp.length <= 0) {
    return true;
  }
  return false;
}

// 创建cameraDevice对象
let createCameras = () => {
  try {
    cameraDevice = cameraManager.getSupportedCameras();
  } catch (err) {
    console.log(`${TAG} createCameras err ${JSON.stringify(err)}`);
  }
}

// async function getPermission() {
//   featureAbility.getContext().requestPermissionsFromUser(permission, 0, (data) => {
//     console.info("request success" + JSON.stringify(data));
//   })
// }

interface GeneratedObjectLiteralInterface {
  latitude: number;
  longitude: number;
  altitude: number;
}

// 拍照函数的回调
let photoAssetAvailableCallback =
  async (err: BusinessError, photoAsset: photoAccessHelper.PhotoAsset): Promise<void> => {
    // Check for an error first
    if (err) {
      console.log(`photoAssetAvailable error: ${JSON.stringify(err)}`);
    }
    console.log('photoOutputCallback photoAssetAvailable:', JSON.stringify(photoAsset));
    try {
      let assetChangeRequest: photoAccessHelper.MediaAssetChangeRequest =
        new photoAccessHelper.MediaAssetChangeRequest(photoAsset);
      assetChangeRequest.saveCameraPhoto();
      let phAccessHelper = photoAccessHelper.getPhotoAccessHelper(context);
      await phAccessHelper.applyChanges(assetChangeRequest);
      console.log('apply saveCameraPhoto successfully');
    } catch (err) {
      console.log(`apply saveCameraPhoto failed with error: ${err.code}, ${err.message}`);
    }
  }

// 触发拍照
let takePicture = async (): Promise<void> => {
  let photoSettings: camera.PhotoCaptureSetting = {
    rotation: camera.ImageRotation.ROTATION_0,
    quality: camera.QualityLevel.QUALITY_LEVEL_MEDIUM,
    location: ({
      // 位置信息，经纬度，海拔
      latitude: 12.9698,
      longitude: 77.75,
      altitude: 1000
    } as GeneratedObjectLiteralInterface),
    mirror: false
  }
  tempPhotoOutput?.on('photoAssetAvailable', photoAssetAvailableCallback);
  tempPhotoOutput?.capture(photoSettings, (err) => {
    console.log(JSON.stringify(err));
  });
  AppStorage.set('isRefresh', true);
}

// 触发拍照
let takePicture1 = async (): Promise<void> => {
  let photoSettings: camera.PhotoCaptureSetting = {
    rotation: camera.ImageRotation.ROTATION_0,
    quality: camera.QualityLevel.QUALITY_LEVEL_MEDIUM,
    location: ({
      // 位置信息，经纬度，海拔
      latitude: 12.9698,
      longitude: 77.75,
      altitude: 1000
    } as GeneratedObjectLiteralInterface),
    mirror: false
  }
  tempPhotoOutput?.capture(photoSettings, (err) => {
    console.log(JSON.stringify(err));
  });
  AppStorage.set('isRefresh', true);
}

// 拉起ability来获取权限
let ability = async () => {
  const delegator = abilityDelegatorRegistry.getAbilityDelegator();
  const bundleName = abilityDelegatorRegistry.getArguments().bundleName;
  const want: Want = {
    bundleName: bundleName,
    abilityName: 'TestAbility'
  }
  await delegator.startAbility(want);
  await sleep(1000);
}

export default function cameraPhotoOutput() {
  let dr = Driver.create();
  describe('cameraPhotoOutput', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async () => {
      createCameraManager();
      createCameras();
      await ability();
      await sleep(500);
      for (let i = 0; i < permission.length; i++) {
        power = await dr?.waitForComponent(ON.text('允许', MatchPattern.EQUALS), 500);
        await power?.click();
        power = null;
        await sleep(500);
      }
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
     * @tc.number    : testCameraPhotoOutputCapture0100
     * @tc.name      : SUB_MULTIMEDIA_CAPTURE_0100
     * @tc.desc      : 1.PhotoOutput.capture()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CAPTURE_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.capture((err) => {
            flag = false;
            console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_0100 SUCCESS + ${flag}`);
            expect(isEmpty(err)).assertTrue();
          });
          await sleep();
          expect(flag).assertFalse();
          await stopCameraSession();
          await sleep();
          console.log('11111111 22')
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputCapture0200
     * @tc.name      : SUB_MULTIMEDIA_CAPTURE_0200
     * @tc.desc      : 1.PhotoOutput.capture()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CAPTURE_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        console.log('11111111 33')
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          tempPhotoOutput.capture((err) => {
            console.log('11111111 44')
            flag = false;
            console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_0200 SUCCESS + ${flag}`);
            expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SESSION_NOT_RUNNING);
          });
          await sleep();
          expect(flag).assertFalse();
          if (!isEmpty(tempCameraInput)) {
            tempPhotoSession.removeInput(tempCameraInput);
            await tempCameraInput.close();
          }
          if (!isEmpty(tempPreviewOutput)) {
            tempPhotoSession.removeOutput(tempPreviewOutput);
            await tempPreviewOutput.release();
          }
          if (!isEmpty(tempPhotoOutput)) {
            tempPhotoSession.removeOutput(tempPhotoOutput);
            await tempPhotoOutput.release();
          }
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_0200 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputCapture0300
     * @tc.name      : SUB_MULTIMEDIA_CAPTURE_0300
     * @tc.desc      : 1.PhotoOutput.capture()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CAPTURE_0300', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          await tempPhotoOutput.capture()
            .then(() => {
              flag = false;
              console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_0300 SUCCESS + ${flag}`);
            })
            .catch((error: BusinessError) => {
              console.log(`Failed to capture the photo, error code: ${error.code}.`);
              expect(isEmpty(error)).assertTrue();
            })
          await sleep();
          expect(flag).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_0300 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputCapture0400
     * @tc.name      : SUB_MULTIMEDIA_CAPTURE_0400
     * @tc.desc      : 1.PhotoOutput.capture()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CAPTURE_0400', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoOutput.capture()
            .then(() => {
              flag = false;
              console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_0400 SUCCESS + ${flag}`);
            })
            .catch((error: BusinessError) => {
              console.log(`Failed to capture the photo, error code: ${error.code}.`);
              expect(Number(error.code)).assertEqual(camera.CameraErrorCode.SESSION_NOT_RUNNING);
              expect(isEmpty(error)).assertFalse();
            })
          await sleep()
          expect(flag).assertTrue();
          if (!isEmpty(tempCameraInput)) {
            tempPhotoSession.removeInput(tempCameraInput);
            await tempCameraInput.close();
          }
          if (!isEmpty(tempPreviewOutput)) {
            tempPhotoSession.removeOutput(tempPreviewOutput);
            await tempPreviewOutput.release();
          }
          if (!isEmpty(tempPhotoOutput)) {
            tempPhotoSession.removeOutput(tempPhotoOutput);
            await tempPhotoOutput.release();
          }
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_0400 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputCapture0500
     * @tc.name      : SUB_MULTIMEDIA_CAPTURE_0500
     * @tc.desc      : 1.PhotoOutput.capture()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CAPTURE_0500', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let settings: camera.PhotoCaptureSetting = {
        quality: camera.QualityLevel.QUALITY_LEVEL_HIGH,
        rotation: camera.ImageRotation.ROTATION_0,
        location: ({
          latitude: 12.9698,
          longitude: 77.75,
          altitude: 1000
        } as GeneratedObjectLiteralInterface),
        mirror: false
      }
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.capture(settings, (err) => {
            flag = false;
            console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_0500 SUCCESS + ${flag}`);
            expect(isEmpty(err)).assertTrue();
          });
          await sleep();
          expect(flag).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_0500 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputCapture0600
     * @tc.name      : SUB_MULTIMEDIA_CAPTURE_0600
     * @tc.desc      : 1.PhotoOutput.capture()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CAPTURE_0600', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let settings: camera.PhotoCaptureSetting = {
        quality: camera.QualityLevel.QUALITY_LEVEL_HIGH,
        rotation: camera.ImageRotation.ROTATION_90,
        location: ({
          latitude: 12.9698,
          longitude: 77.75,
          altitude: 1000
        } as GeneratedObjectLiteralInterface),
        mirror: false
      }
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.capture(settings, (err) => {
            flag = false;
            console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_0600 SUCCESS + ${flag}`);
            expect(isEmpty(err)).assertTrue();
          });
          await sleep();
          expect(flag).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_0600 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputCapture0700
     * @tc.name      : SUB_MULTIMEDIA_CAPTURE_0700
     * @tc.desc      : 1.PhotoOutput.capture()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CAPTURE_0700', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let settings: camera.PhotoCaptureSetting = {
        quality: camera.QualityLevel.QUALITY_LEVEL_HIGH,
        rotation: camera.ImageRotation.ROTATION_180,
        location: ({
          latitude: 12.9698,
          longitude: 77.75,
          altitude: 1000
        } as GeneratedObjectLiteralInterface),
        mirror: false
      }
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.capture(settings, (err) => {
            flag = false;
            console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_0700 SUCCESS + ${flag}`);
            expect(isEmpty(err)).assertTrue();
          });
          await sleep();
          expect(flag).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_0700 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputCapture0800
     * @tc.name      : SUB_MULTIMEDIA_CAPTURE_0800
     * @tc.desc      : 1.PhotoOutput.capture()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CAPTURE_0800', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let settings: camera.PhotoCaptureSetting = {
        quality: camera.QualityLevel.QUALITY_LEVEL_HIGH,
        rotation: camera.ImageRotation.ROTATION_270,
        location: ({
          latitude: 12.9698,
          longitude: 77.75,
          altitude: 1000
        } as GeneratedObjectLiteralInterface),
        mirror: false
      }
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.capture(settings, (err) => {
            flag = false;
            console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_0800 SUCCESS + ${flag}`);
            expect(isEmpty(err)).assertTrue();
          });
          await sleep();
          expect(flag).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_0800 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputCapture0900
     * @tc.name      : SUB_MULTIMEDIA_CAPTURE_0900
     * @tc.desc      : 1.PhotoOutput.capture()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CAPTURE_0900', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let settings: camera.PhotoCaptureSetting = {
        quality: camera.QualityLevel.QUALITY_LEVEL_MEDIUM,
        rotation: camera.ImageRotation.ROTATION_180,
        location: ({
          latitude: 12.9698,
          longitude: 77.75,
          altitude: 1000
        } as GeneratedObjectLiteralInterface),
        mirror: false
      }
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.capture(settings, (err) => {
            flag = false;
            console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_0900 SUCCESS + ${flag}`);
            expect(isEmpty(err)).assertTrue();
          });
          await sleep();
          expect(flag).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_0900 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputCapture1000
     * @tc.name      : SUB_MULTIMEDIA_CAPTURE_1000
     * @tc.desc      : 1.PhotoOutput.capture()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CAPTURE_1000', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let settings: camera.PhotoCaptureSetting = {
        quality: camera.QualityLevel.QUALITY_LEVEL_LOW,
        rotation: camera.ImageRotation.ROTATION_180,
        location: ({
          latitude: 12.9698,
          longitude: 77.75,
          altitude: 1000
        } as GeneratedObjectLiteralInterface),
        mirror: false
      }
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.capture(settings, (err) => {
            flag = false;
            console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_1000 SUCCESS + ${flag}`);
            expect(isEmpty(err)).assertTrue();
          });
          await sleep();
          expect(flag).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_1000 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputCapture1100
     * @tc.name      : SUB_MULTIMEDIA_CAPTURE_1100
     * @tc.desc      : 1.PhotoOutput.capture()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CAPTURE_1100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let settings: camera.PhotoCaptureSetting = {
        quality: camera.QualityLevel.QUALITY_LEVEL_LOW,
        rotation: camera.ImageRotation.ROTATION_270,
        location: ({
          latitude: 12.9698,
          longitude: 77.75,
          altitude: 1000
        } as GeneratedObjectLiteralInterface),
        mirror: true
      }
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.capture(settings, (err) => {
            flag = false;
            console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_1100 SUCCESS + ${flag}`);
            expect(isEmpty(err)).assertTrue();
          });
          await sleep();
          expect(flag).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_1100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputCapture1200
     * @tc.name      : SUB_MULTIMEDIA_CAPTURE_1200
     * @tc.desc      : 1.PhotoOutput.capture()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CAPTURE_1200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let settings: camera.PhotoCaptureSetting = {
        quality: camera.QualityLevel.QUALITY_LEVEL_HIGH,
        rotation: camera.ImageRotation.ROTATION_0,
        location: ({
          latitude: 12.9698,
          longitude: 77.75,
          altitude: 1000
        } as GeneratedObjectLiteralInterface),
        mirror: false
      }
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          await tempPhotoOutput.capture(settings)
            .then(() => {
              flag = false;
              console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_1200 SUCCESS + ${flag}`);
            })
            .catch((error: BusinessError) => {
              console.log(`Failed to capture the photo, error code: ${error.code}.`);
              expect(isEmpty(error)).assertTrue();
            })
          await sleep();
          expect(flag).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_1200 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputCapture1300
     * @tc.name      : SUB_MULTIMEDIA_CAPTURE_1300
     * @tc.desc      : 1.PhotoOutput.capture()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CAPTURE_1300', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let settings: camera.PhotoCaptureSetting = {
        quality: camera.QualityLevel.QUALITY_LEVEL_HIGH,
        rotation: camera.ImageRotation.ROTATION_90,
        location: ({
          latitude: 12.9698,
          longitude: 77.75,
          altitude: 1000
        } as GeneratedObjectLiteralInterface),
        mirror: false
      }
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.capture(settings)
            .then(() => {
              flag = false;
              console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_1300 SUCCESS + ${flag}`);
            })
            .catch((error: BusinessError) => {
              console.log(`Failed to capture the photo, error code: ${error.code}.`);
              expect(isEmpty(error)).assertTrue();
            })
          await sleep();
          expect(flag).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_1300 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputCapture1400
     * @tc.name      : SUB_MULTIMEDIA_CAPTURE_1400
     * @tc.desc      : 1.PhotoOutput.capture()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CAPTURE_1400', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let settings: camera.PhotoCaptureSetting = {
        quality: camera.QualityLevel.QUALITY_LEVEL_HIGH,
        rotation: camera.ImageRotation.ROTATION_180,
        location: ({
          latitude: 12.9698,
          longitude: 77.75,
          altitude: 1000
        } as GeneratedObjectLiteralInterface),
        mirror: false
      }
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.capture(settings)
            .then(() => {
              flag = false;
              console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_1400 SUCCESS + ${flag}`);
            })
            .catch((error: BusinessError) => {
              console.log(`Failed to capture the photo, error code: ${error.code}.`);
              expect(isEmpty(error)).assertTrue();
            })
          await sleep();
          expect(flag).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_1400 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputCapture1500
     * @tc.name      : SUB_MULTIMEDIA_CAPTURE_1500
     * @tc.desc      : 1.PhotoOutput.capture()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CAPTURE_1500', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let settings: camera.PhotoCaptureSetting = {
        quality: camera.QualityLevel.QUALITY_LEVEL_HIGH,
        rotation: camera.ImageRotation.ROTATION_270,
        location: ({
          latitude: 12.9698,
          longitude: 77.75,
          altitude: 1000
        } as GeneratedObjectLiteralInterface),
        mirror: false
      }
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.capture(settings)
            .then(() => {
              flag = false;
              console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_1500 SUCCESS + ${flag}`);
            })
            .catch((error: BusinessError) => {
              console.log(`Failed to capture the photo, error code: ${error.code}.`);
              expect(isEmpty(error)).assertTrue();
            })
          await sleep();
          expect(flag).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_1500 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputCapture1600
     * @tc.name      : SUB_MULTIMEDIA_CAPTURE_1600
     * @tc.desc      : 1.PhotoOutput.capture()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CAPTURE_1600', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let settings: camera.PhotoCaptureSetting = {
        quality: camera.QualityLevel.QUALITY_LEVEL_MEDIUM,
        rotation: camera.ImageRotation.ROTATION_180,
        location: ({
          latitude: 12.9698,
          longitude: 77.75,
          altitude: 1000
        } as GeneratedObjectLiteralInterface),
        mirror: false
      }
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.capture(settings)
            .then(() => {
              flag = false;
              console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_1600 SUCCESS + ${flag}`);
            })
            .catch((error: BusinessError) => {
              console.log(`Failed to capture the photo, error code: ${error.code}.`);
              expect(isEmpty(error)).assertTrue();
            })
          await sleep();
          expect(flag).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_1600 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputCapture1700
     * @tc.name      : SUB_MULTIMEDIA_CAPTURE_1700
     * @tc.desc      : 1.PhotoOutput.capture()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CAPTURE_1700', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let settings: camera.PhotoCaptureSetting = {
        quality: camera.QualityLevel.QUALITY_LEVEL_LOW,
        rotation: camera.ImageRotation.ROTATION_180,
        location: ({
          latitude: 12.9698,
          longitude: 77.75,
          altitude: 1000
        } as GeneratedObjectLiteralInterface),
        mirror: false
      }
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.capture(settings)
            .then(() => {
              flag = false;
              console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_1700 SUCCESS + ${flag}`);
            })
            .catch((error: BusinessError) => {
              console.log(`Failed to capture the photo, error code: ${error.code}.`);
              expect(isEmpty(error)).assertTrue();
            })
          await sleep();
          expect(flag).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_1700 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputCapture1800
     * @tc.name      : SUB_MULTIMEDIA_CAPTURE_1800
     * @tc.desc      : 1.PhotoOutput.capture()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CAPTURE_1800', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let settings: camera.PhotoCaptureSetting = {
        quality: camera.QualityLevel.QUALITY_LEVEL_LOW,
        rotation: camera.ImageRotation.ROTATION_270,
        location: ({
          latitude: 12.9698,
          longitude: 77.75,
          altitude: 1000
        } as GeneratedObjectLiteralInterface),
        mirror: true
      }
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.capture(settings)
            .then(() => {
              flag = false;
              console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_1800 SUCCESS + ${flag}`);
            })
            .catch((error: BusinessError) => {
              console.log(`Failed to capture the photo, error code: ${error.code}.`);
              expect(isEmpty(error)).assertTrue();
            })
          await sleep();
          expect(flag).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CAPTURE_1800 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputIsMovingPhotoSupported0100
     * @tc.name      : SUB_MULTIMEDIA_IS_MIRROR_SUPPORTED_0100
     * @tc.desc      : 1.PhotoOutput.isMovingPhotoSupported()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IS_MOVING_PHOTO_SUPPORTED_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          let isSupported: boolean = tempPhotoOutput.isMovingPhotoSupported();
          if (isSupported) {
            console.log(`${TAG} SUB_MULTIMEDIA_IS_MOVING_PHOTO_SUPPORTED_0100 SUCCESS + ${isSupported}`);
            expect(isSupported).assertTrue();
          } else {
            console.log(`Tht current device does not support dynamic photo shooting.`);
          }
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_IS_MOVING_PHOTO_SUPPORTED_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputIsMirrorSupported0100
     * @tc.name      : SUB_MULTIMEDIA_IS_MIRROR_SUPPORTED_0100
     * @tc.desc      : 1.PhotoOutput.isMirrorSupported();
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IS_MIRROR_SUPPORTED_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          let isSupported: boolean = tempPhotoOutput.isMirrorSupported();
          if (isSupported) {
            console.log(`${TAG} SUB_MULTIMEDIA_IS_MIRROR_SUPPORTED_0100 SUCCESS + ${isSupported}`);
            expect(isSupported).assertTrue();
          } else {
            console.log(`Tht current device does not support mirroring.`);
          }
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_IS_MIRROR_SUPPORTED_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputEnableMovingPhoto0100
     * @tc.name      : SUB_MULTIMEDIA_ENABLE_MOVING_PHOTO_0100
     * @tc.desc      : 1.PhotoOutput.isMovingPhotoSupported()
     *                 2.photoOutput.enableMovingPhoto()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_ENABLE_MOVING_PHOTO_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          let isSupported: boolean = tempPhotoOutput.isMovingPhotoSupported();
          if (isSupported) {
            tempPhotoOutput.enableMovingPhoto(true);
            await sleep(200);
            console.log(`${TAG} SUB_MULTIMEDIA_ENABLE_MOVING_PHOTO_0100 SUCCESS + ${isSupported}`);
            expect(isSupported).assertTrue();
          } else {
            console.log(`Tht current device does not support dynamic photo shooting.`);
          }
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_ENABLE_MOVING_PHOTO_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputEnableMovingPhoto0200
     * @tc.name      : SUB_MULTIMEDIA_ENABLE_MOVING_PHOTO_0200
     * @tc.desc      : 1.PhotoOutput.isMovingPhotoSupported()
     *                 2.photoOutput.enableMovingPhoto()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_ENABLE_MOVING_PHOTO_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          let isSupported: boolean = tempPhotoOutput.isMovingPhotoSupported();
          if (isSupported) {
            tempPhotoOutput.enableMovingPhoto(false);
            await sleep(200);
            console.log(`${TAG} SUB_MULTIMEDIA_ENABLE_MOVING_PHOTO_0200 SUCCESS + ${isSupported}`);
            expect(isSupported).assertTrue();
          } else {
            console.log(`Tht current device does not support dynamic photo shooting.`);
          }
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_ENABLE_MOVING_PHOTO_0200 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputEnableMovingPhoto0300
     * @tc.name      : SUB_MULTIMEDIA_ENABLE_MOVING_PHOTO_0300
     * @tc.desc      : 1.PhotoOutput.isMovingPhotoSupported()
     *                 2.photoOutput.enableMovingPhoto()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    // it('SUB_MULTIMEDIA_ENABLE_MOVING_PHOTO_0300', 0, async (done: Function) => {
    //   let cameras = cameraDevice;
    //   try {
    //     createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
    //     await sleep();
    //     for (let i = 0; i < cameras.length; i++) {
    //       addCommit(i, camera.SceneMode.NORMAL_PHOTO);
    //       await sleep();
    //       await tempPhotoSession.commitConfig();
    //       await sleep();
    //       await tempPhotoSession.start();
    //       await sleep();
    //       let isSupported: boolean = tempPhotoOutput.isMovingPhotoSupported();
    //       if (isSupported) {
    //         tempPhotoOutput.enableMovingPhoto(null);
    //         await sleep(200);
    //         console.log(`${TAG} SUB_MULTIMEDIA_ENABLE_MOVING_PHOTO_0300 SUCCESS + ${isSupported}`);
    //         expect(isSupported).assertTrue();
    //       } else {
    //         console.log(`Tht current device does not support dynamic photo shooting.`);
    //       }
    //       await stopCameraSession();
    //       await sleep();
    //     }
    //     done();
    //   } catch (err) {
    //     console.log(`${TAG} SUB_MULTIMEDIA_ENABLE_MOVING_PHOTO_0300 err ${JSON.stringify(err)}`);
    //     expect(isEmpty(err)).assertTrue();
    //     expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
    //     done();
    //   }
    // })

    /**
     * @tc.number    : testCameraPhotoOutputEnableMovingPhoto0400
     * @tc.name      : SUB_MULTIMEDIA_ENABLE_MOVING_PHOTO_0400
     * @tc.desc      : 1.PhotoOutput.isMovingPhotoSupported()
     *                 2.photoOutput.enableMovingPhoto()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    // it('SUB_MULTIMEDIA_ENABLE_MOVING_PHOTO_0400', 0, async (done: Function) => {
    //   let cameras = cameraDevice;
    //   try {
    //     createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
    //     await sleep();
    //     for (let i = 0; i < cameras.length; i++) {
    //       addCommit(i, camera.SceneMode.NORMAL_PHOTO);
    //       await sleep();
    //       await tempPhotoSession.commitConfig();
    //       await sleep();
    //       await tempPhotoSession.start();
    //       await sleep();
    //       let isSupported: boolean = tempPhotoOutput.isMovingPhotoSupported();
    //       if (isSupported) {
    //         tempPhotoOutput.enableMovingPhoto(undefined);
    //         await sleep(200);
    //         console.log(`${TAG} SUB_MULTIMEDIA_ENABLE_MOVING_PHOTO_0400 SUCCESS + ${isSupported}`);
    //         expect(isSupported).assertTrue();
    //       } else {
    //         console.log(`Tht current device does not support dynamic photo shooting.`);
    //       }
    //       await stopCameraSession();
    //       await sleep();
    //     }
    //     done();
    //   } catch (err) {
    //     console.log(`${TAG} SUB_MULTIMEDIA_ENABLE_MOVING_PHOTO_0400 err ${JSON.stringify(err)}`);
    //     expect(isEmpty(err)).assertTrue();
    //     expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
    //     done();
    //   }
    // })

    /**
     * @tc.number    : testCameraPhotoOutputOnPhotoAvailable0100
     * @tc.name      : SUB_MULTIMEDIA_ON_PHOTO_AVAILABLE_0100
     * @tc.desc      : 1.PhotoOutput.on('photoAvailable')
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    // it('SUB_MULTIMEDIA_ON_PHOTO_AVAILABLE_0100', 0, async (done: Function) => {
    //   let cameras = cameraDevice;
    //   try {
    //     createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
    //     await sleep();
    //     for (let i = 0; i < cameras.length; i++) {
    //       let flag = true;
    //       addCommit(i, camera.SceneMode.NORMAL_PHOTO);
    //       await sleep();
    //       await tempPhotoSession.commitConfig();
    //       await sleep();
    //       await tempPhotoSession.start();
    //       await sleep();
    //       tempPhotoOutput.on('photoAvailable', (err: BusinessError, photo: camera.Photo) => {
    //         flag = false;
    //         console.log(`${TAG} SUB_MULTIMEDIA_ON_PHOTO_AVAILABLE_0100 SUCCESS + ${JSON.stringify(photo.main)}`);
    //         expect(isEmpty(err)).assertTrue();
    //         expect(isEmpty(photo.main)).assertFalse();
    //       });
    //       await sleep();
    //       await takePicture1();
    //       await sleep(2000);
    //       console.log(`${TAG} SUB_MULTIMEDIA_ON_PHOTO_AVAILABLE_0100 start4 + ${(flag)}`);
    //       expect(flag).assertFalse();
    //       await stopCameraSession();
    //       await sleep();
    //     }
    //     done();
    //   } catch (err) {
    //     console.log(`${TAG} SUB_MULTIMEDIA_ON_PHOTO_AVAILABLE_0100 err ${JSON.stringify(err)}`);
    //     expect(isEmpty(err)).assertTrue();
    //     done();
    //   }
    // })

    /**
     * @tc.number    : testCameraPhotoOutputOffPhotoAvailable0100
     * @tc.name      : SUB_MULTIMEDIA_OFF_PHOTO_AVAILABLE_0100
     * @tc.desc      : 1.PhotoOutput.on('photoAvailable')
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    // it('SUB_MULTIMEDIA_OFF_PHOTO_AVAILABLE_0100', 0, async (done: Function) => {
    //   let cameras = cameraDevice;
    //   try {
    //     createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
    //     await sleep();
    //     for (let i = 0; i < cameras.length; i++) {
    //       let flag = true;
    //       addCommit(i, camera.SceneMode.NORMAL_PHOTO);
    //       await sleep();
    //       await tempPhotoSession.commitConfig();
    //       await sleep();
    //       await tempPhotoSession.start();
    //       await sleep();
    //       tempPhotoOutput.on('photoAvailable', (err: BusinessError, photo: camera.Photo) => {
    //         flag = false;
    //         console.log(`${TAG} SUB_MULTIMEDIA_OFF_PHOTO_AVAILABLE_0100 SUCCESS + ${JSON.stringify(photo.main)}`);
    //         expect(isEmpty(err)).assertTrue();
    //         expect(isEmpty(photo.main)).assertFalse();
    //       });
    //       await sleep();
    //       tempPhotoOutput.off('photoAvailable');
    //       await sleep();
    //       await takePicture();
    //       await sleep(2000);
    //       expect(flag).assertTrue();
    //       await stopCameraSession();
    //       await sleep();
    //     }
    //     done();
    //   } catch (err) {
    //     console.log(`${TAG} SUB_MULTIMEDIA_OFF_PHOTO_AVAILABLE_0100 err ${JSON.stringify(err)}`);
    //     expect(isEmpty(err)).assertTrue();
    //     done();
    //   }
    // })

    /**
     * @tc.number    : testCameraPhotoOutputOnCaptureStartWithInfo0100
     * @tc.name      : SUB_MULTIMEDIA_ON_CAPTURE_START_WITH_INFO_0100
     * @tc.desc      : 1.PhotoOutput.on('captureStartWithInfo')
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_ON_CAPTURE_START_WITH_INFO_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.on('captureStartWithInfo',
            (err: BusinessError, captureStartInfo: camera.CaptureStartInfo) => {
              flag = false;
              console.log(`${TAG} SUB_MULTIMEDIA_ON_CAPTURE_START_WITH_INFO_0100 SUCCESS + ${JSON.stringify(captureStartInfo.captureId)} + ${JSON.stringify(captureStartInfo.time)}`);
              expect(isEmpty(err)).assertTrue();
              expect(isEmpty(captureStartInfo.captureId)).assertFalse();
              expect(isEmpty(captureStartInfo.time)).assertFalse();
            });
          await sleep();
          await takePicture();
          await sleep(2000);
          expect(flag).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_ON_CAPTURE_START_WITH_INFO_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputOffCaptureStartWithInfo0100
     * @tc.name      : SUB_MULTIMEDIA_OFF_CAPTURE_START_WITH_INFO_0100
     * @tc.desc      : 1.PhotoOutput.on('captureStartWithInfo')
     *                 2.PhotoOutput.off('captureStartWithInfo')
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_OFF_CAPTURE_START_WITH_INFO_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.on('captureStartWithInfo',
            (err: BusinessError, captureStartInfo: camera.CaptureStartInfo) => {
              flag = false;
              console.log(`${TAG} SUB_MULTIMEDIA_OFF_CAPTURE_START_WITH_INFO_0100 SUCCESS + ${JSON.stringify(captureStartInfo.captureId)} + ${JSON.stringify(captureStartInfo.time)}`);
              expect(isEmpty(err)).assertTrue();
              expect(isEmpty(captureStartInfo.captureId)).assertFalse();
              expect(isEmpty(captureStartInfo.time)).assertFalse();
            });
          await sleep();
          tempPhotoOutput.off('captureStartWithInfo');
          await sleep();
          await takePicture();
          await sleep(2000);
          expect(flag).assertTrue();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_OFF_CAPTURE_START_WITH_INFO_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputOnPhotoAssetAvailable0100
     * @tc.name      : SUB_MULTIMEDIA_ON_PHOTO_ASSET_AVAILABLE_0100
     * @tc.desc      : 1.PhotoOutput.on('photoAssetAvailable')
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_ON_PHOTO_ASSET_AVAILABLE_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.on('photoAssetAvailable', (err: BusinessError, photoAsset: photoAccessHelper.PhotoAsset) => {
            flag = false;
            console.log(`${TAG} SUB_MULTIMEDIA_ON_PHOTO_ASSET_AVAILABLE_0100 SUCCESS + ${JSON.stringify(photoAsset.uri)} + ${JSON.stringify(photoAsset.photoType)} + ${JSON.stringify(photoAsset.displayName)}`);
            expect(isEmpty(err)).assertTrue();
            expect(isEmpty(photoAsset.uri)).assertFalse();
            expect(isEmpty(photoAsset.photoType)).assertFalse();
            expect(isEmpty(photoAsset.displayName)).assertFalse();
          });
          await sleep();
          await takePicture();
          await sleep(2000);
          expect(flag).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_ON_PHOTO_ASSET_AVAILABLE_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputOffPhotoAssetAvailable0100
     * @tc.name      : SUB_MULTIMEDIA_OFF_PHOTO_ASSET_AVAILABLE_0100
     * @tc.desc      : 1.PhotoOutput.on('photoAssetAvailable')
     *                 2.PhotoOutput.off('photoAssetAvailable')
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_OFF_PHOTO_ASSET_AVAILABLE_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.on('photoAssetAvailable', (err: BusinessError, photoAsset: photoAccessHelper.PhotoAsset) => {
            flag = false;
            console.log(`${TAG} SUB_MULTIMEDIA_OFF_PHOTO_ASSET_AVAILABLE_0100 SUCCESS + ${JSON.stringify(photoAsset.uri)} + ${JSON.stringify(photoAsset.photoType)} + ${JSON.stringify(photoAsset.displayName)}`);
            expect(isEmpty(err)).assertTrue();
            expect(isEmpty(photoAsset.uri)).assertFalse();
            expect(isEmpty(photoAsset.photoType)).assertFalse();
            expect(isEmpty(photoAsset.displayName)).assertFalse();
          });
          await sleep();
          tempPhotoOutput.off('photoAssetAvailable');
          await sleep();
          await takePicture();
          await sleep(2000);
          expect(flag).assertTrue();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_OFF_PHOTO_ASSET_AVAILABLE_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputOnFrameShutter0100
     * @tc.name      : SUB_MULTIMEDIA_ON_FRAME_SHUTTER_0100
     * @tc.desc      : 1.PhotoOutput.on('frameShutter')
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_ON_FRAME_SHUTTER_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.on('frameShutter', (err: BusinessError, frameShutterInfo: camera.FrameShutterInfo) => {
            flag = false;
            console.log(`${TAG} SUB_MULTIMEDIA_ON_FRAME_SHUTTER_0100 SUCCESS + ${JSON.stringify(frameShutterInfo.captureId)} + ${JSON.stringify(frameShutterInfo.timestamp)}`);
            expect(isEmpty(err)).assertTrue();
            expect(isEmpty(frameShutterInfo.captureId)).assertFalse();
            expect(isEmpty(frameShutterInfo.timestamp)).assertFalse();
          });
          await sleep();
          await takePicture();
          await sleep(2000);
          expect(flag).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_ON_FRAME_SHUTTER_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputOffFrameShutter0100
     * @tc.name      : SUB_MULTIMEDIA_OFF_FRAME_SHUTTER_0100
     * @tc.desc      : 1.PhotoOutput.on('frameShutter')
     *                 2.PhotoOutput.off('frameShutter')
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_OFF_FRAME_SHUTTER_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.on('frameShutter', (err: BusinessError, frameShutterInfo: camera.FrameShutterInfo) => {
            flag = false;
            console.log(`${TAG} SUB_MULTIMEDIA_OFF_FRAME_SHUTTER_0100 SUCCESS + ${JSON.stringify(frameShutterInfo.captureId)} + ${JSON.stringify(frameShutterInfo.timestamp)}`);
            expect(isEmpty(err)).assertTrue();
            expect(isEmpty(frameShutterInfo.captureId)).assertFalse();
            expect(isEmpty(frameShutterInfo.timestamp)).assertFalse();
          });
          await sleep();
          tempPhotoOutput.off('frameShutter');
          await sleep();
          await takePicture();
          await sleep(2000);
          expect(flag).assertTrue();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_OFF_FRAME_SHUTTER_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputOnEstimatedCaptureDuration0100
     * @tc.name      : SUB_MULTIMEDIA_ON_ESTIMATED_CAPTURE_DURATION_0100
     * @tc.desc      : 1.PhotoOutput.on('estimatedCaptureDuration')
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    // it('SUB_MULTIMEDIA_ON_ESTIMATED_CAPTURE_DURATION_0100', 0, async (done: Function) => {
    //   let cameras = cameraDevice;
    //   try {
    //     createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
    //     await sleep();
    //     for (let i = 0; i < cameras.length; i++) {
    //       let flag = true;
    //       addCommit(i, camera.SceneMode.NORMAL_PHOTO);
    //       await sleep();
    //       await tempPhotoSession.commitConfig();
    //       await sleep();
    //       await tempPhotoSession.start();
    //       await sleep();
    //       tempPhotoOutput.on('estimatedCaptureDuration', (err: BusinessError, duration: number) => {
    //         flag = false;
    //         console.log(`${TAG} SUB_MULTIMEDIA_ON_ESTIMATED_CAPTURE_DURATION_0100 SUCCESS + ${JSON.stringify(duration)}`);
    //         expect(isEmpty(err)).assertTrue();
    //         expect(isEmpty(duration)).assertFalse();
    //       });
    //       await sleep();
    //       await takePicture();
    //       await sleep(2000);
    //       expect(flag).assertFalse();
    //       await stopCameraSession();
    //       await sleep();
    //     }
    //     done();
    //   } catch (err) {
    //     console.log(`${TAG} SUB_MULTIMEDIA_ON_ESTIMATED_CAPTURE_DURATION_0100 err ${JSON.stringify(err)}`);
    //     expect(isEmpty(err)).assertTrue();
    //     done();
    //   }
    // })

    /**
     * @tc.number    : testCameraPhotoOutputOffEstimatedCaptureDuration0100
     * @tc.name      : SUB_MULTIMEDIA_OFF_ESTIMATED_CAPTURE_DURATION_0100
     * @tc.desc      : 1.PhotoOutput.on('estimatedCaptureDuration')
     *                 2.PhotoOutput.off('estimatedCaptureDuration')
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    // it('SUB_MULTIMEDIA_OFF_ESTIMATED_CAPTURE_DURATION_0100', 0, async (done: Function) => {
    //   let cameras = cameraDevice;
    //   try {
    //     createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
    //     await sleep();
    //     for (let i = 0; i < cameras.length; i++) {
    //       let flag = true;
    //       addCommit(i, camera.SceneMode.NORMAL_PHOTO);
    //       await sleep();
    //       await tempPhotoSession.commitConfig();
    //       await sleep();
    //       await tempPhotoSession.start();
    //       await sleep();
    //       tempPhotoOutput.on('estimatedCaptureDuration', (err: BusinessError, duration: number) => {
    //         flag = false;
    //         console.log(`${TAG} SUB_MULTIMEDIA_ON_ESTIMATED_CAPTURE_DURATION_0100 SUCCESS + ${JSON.stringify(duration)}`);
    //         expect(isEmpty(err)).assertTrue();
    //         expect(isEmpty(duration)).assertFalse();
    //       });
    //       await sleep();
    //       tempPhotoOutput.off('estimatedCaptureDuration');
    //       await sleep();
    //       await takePicture();
    //       await sleep(2000);
    //       expect(flag).assertTrue();
    //       await stopCameraSession();
    //       await sleep();
    //     }
    //     done();
    //   } catch (err) {
    //     console.log(`${TAG} SUB_MULTIMEDIA_ON_ESTIMATED_CAPTURE_DURATION_0100 err ${JSON.stringify(err)}`);
    //     expect(isEmpty(err)).assertTrue();
    //     done();
    //   }
    // })

    /**
     * @tc.number    : testCameraPhotoOutputOnCaptureEnd0100
     * @tc.name      : SUB_MULTIMEDIA_ON_CAPTURE_END_0100
     * @tc.desc      : 1.PhotoOutput.on('captureEnd')
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_ON_CAPTURE_END_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.on('captureEnd', (err: BusinessError, captureEndInfo: camera.CaptureEndInfo) => {
            flag = false;
            console.log(`${TAG} SUB_MULTIMEDIA_ON_CAPTURE_END_0100 SUCCESS + ${JSON.stringify(captureEndInfo.captureId)} + ${JSON.stringify(captureEndInfo.frameCount)}`);
            expect(isEmpty(err)).assertTrue();
            expect(isEmpty(captureEndInfo.captureId)).assertFalse();
            expect(isEmpty(captureEndInfo.frameCount)).assertFalse();
          });
          await sleep();
          await takePicture();
          await sleep(2000);
          await tempPhotoSession.stop();
          await sleep();
          expect(flag).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputOffCaptureEnd0100
     * @tc.name      : SUB_MULTIMEDIA_OFF_CAPTURE_END_0100
     * @tc.desc      : 1.PhotoOutput.on('captureEnd')
     *                 2.PhotoOutput.off('captureEnd')
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_OFF_CAPTURE_END_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let i = 0; i < cameras.length; i++) {
          let flag = true;
          addCommit(i, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep();
          tempPhotoOutput.on('captureEnd', (err: BusinessError, captureEndInfo: camera.CaptureEndInfo) => {
            flag = false;
            console.log(`${TAG} SUB_MULTIMEDIA_OFF_CAPTURE_END_0100 SUCCESS + ${JSON.stringify(captureEndInfo.captureId)} + ${JSON.stringify(captureEndInfo.frameCount)}`);
            expect(isEmpty(err)).assertTrue();
            expect(isEmpty(captureEndInfo.captureId)).assertFalse();
            expect(isEmpty(captureEndInfo.frameCount)).assertFalse();
          });
          await sleep();
          tempPhotoOutput.off('captureEnd');
          await takePicture();
          await sleep(2000);
          expect(flag).assertTrue();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_OFF_CAPTURE_END_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraPhotoOutputOnframeShutterEnd0100
     * @tc.name      : SUB_MULTIMEDIA_ON_FRAME_SHUTTER_END_0100
     * @tc.desc      : 1.PhotoOutput.on('frameShutterEnd')
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    // it('SUB_MULTIMEDIA_ON_FRAME_SHUTTER_END_0100', 0, async (done: Function) => {
    //   let cameras = cameraDevice;
    //   try {
    //     createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
    //     await sleep();
    //     for (let i = 0; i < cameras.length; i++) {
    //       let flag = true;
    //       addCommit(i, camera.SceneMode.NORMAL_PHOTO);
    //       await sleep();
    //       await tempPhotoSession.commitConfig();
    //       await sleep();
    //       await tempPhotoSession.start();
    //       await sleep();
    //       console.log(`${TAG} SUB_MULTIMEDIA_ON_FRAME_SHUTTER_END_0100 start1 + ${(flag)}`);
    //       tempPhotoOutput.on('frameShutterEnd',
    //         (err: BusinessError, frameShutterEndInfo: camera.FrameShutterEndInfo) => {
    //           flag = false;
    //           console.log(`${TAG} SUB_MULTIMEDIA_ON_FRAME_SHUTTER_END_0100 start2 + ${(flag)}`);
    //           console.log(`${TAG} SUB_MULTIMEDIA_ON_FRAME_SHUTTER_END_0100 SUCCESS + ${JSON.stringify(frameShutterEndInfo.captureId)}`);
    //           expect(isEmpty(err)).assertTrue();
    //           expect(isEmpty(frameShutterEndInfo.captureId)).assertFalse();
    //         });
    //       await sleep();
    //       await takePicture();
    //       await sleep(2000);
    //       console.log(`${TAG} SUB_MULTIMEDIA_ON_FRAME_SHUTTER_END_0100 start3 + ${(flag)}`);
    //       await tempPhotoSession.stop();
    //       await sleep();
    //       expect(flag).assertFalse();
    //       await stopCameraSession();
    //       await sleep();
    //     }
    //     done();
    //   } catch (err) {
    //     console.log(`${TAG} SUB_MULTIMEDIA_ON_FRAME_SHUTTER_END_0100 err ${JSON.stringify(err)}`);
    //     expect(isEmpty(err)).assertTrue();
    //     done();
    //   }
    // })

    /**
     * @tc.number    : testCameraPhotoOutputOnframeShutterEnd0100
     * @tc.name      : SUB_MULTIMEDIA_OFF_FRAME_SHUTTER_END_0100
     * @tc.desc      : 1.PhotoOutput.on('frameShutterEnd')
     *                 2.PhotoOutput.off('frameShutterEnd')
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    // it('SUB_MULTIMEDIA_OFF_FRAME_SHUTTER_END_0100', 0, async (done: Function) => {
    //   let cameras = cameraDevice;
    //   try {
    //     createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
    //     await sleep();
    //     for (let i = 0; i < cameras.length; i++) {
    //       let flag = true;
    //       addCommit(i, camera.SceneMode.NORMAL_PHOTO);
    //       await sleep();
    //       await tempPhotoSession.commitConfig();
    //       await sleep();
    //       await tempPhotoSession.start();
    //       await sleep();
    //       console.log(`${TAG} SUB_MULTIMEDIA_ON_FRAME_SHUTTER_END_0100 start1 + ${(flag)}`);
    //       tempPhotoOutput.on('frameShutterEnd',
    //         (err: BusinessError, frameShutterEndInfo: camera.FrameShutterEndInfo) => {
    //           flag = false;
    //           console.log(`${TAG} SUB_MULTIMEDIA_OFF_FRAME_SHUTTER_END_0100 start2 + ${(flag)}`);
    //           console.log(`${TAG} SUB_MULTIMEDIA_OFF_FRAME_SHUTTER_END_0100 SUCCESS + ${JSON.stringify(frameShutterEndInfo.captureId)}`);
    //           expect(isEmpty(err)).assertTrue();
    //           expect(isEmpty(frameShutterEndInfo.captureId)).assertFalse();
    //         });
    //       await sleep();
    //       await takePicture();
    //       await sleep(2000);
    //       console.log(`${TAG} SUB_MULTIMEDIA_OFF_FRAME_SHUTTER_END_0100 start3 + ${(flag)}`);
    //       expect(flag).assertFalse();
    //       await stopCameraSession();
    //       await sleep();
    //     }
    //     done();
    //   } catch (err) {
    //     console.log(`${TAG} SUB_MULTIMEDIA_OFF_FRAME_SHUTTER_END_0100 err ${JSON.stringify(err)}`);
    //     expect(isEmpty(err)).assertTrue();
    //     done();
    //   }
    // })

    /**
     * @tc.number    : testCameraPhotoOutputOnCaptureReady0100
     * @tc.name      : SUB_MULTIMEDIA_ON_CAPTURE_READY_0100
     * @tc.desc      : 1.PhotoOutput.on('captureReady')
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    // it('SUB_MULTIMEDIA_ON_CAPTURE_READY_0100', 0, async (done: Function) => {
    //   let cameras = cameraDevice;
    //   try {
    //     createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
    //     await sleep();
    //     for (let i = 0; i < cameras.length; i++) {
    //       let flag = true;
    //       addCommit(i, camera.SceneMode.NORMAL_PHOTO);
    //       await sleep();
    //       await tempPhotoSession.commitConfig();
    //       await sleep();
    //       await tempPhotoSession.start();
    //       await sleep();
    //       console.log(`${TAG} SUB_MULTIMEDIA_ON_CAPTURE_READY_0100 start1 + ${(flag)}`);
    //       tempPhotoOutput.on('captureReady', (err: BusinessError) => {
    //         flag = false;
    //         console.log(`${TAG} SUB_MULTIMEDIA_ON_CAPTURE_READY_0100 start2 + ${(flag)}`);
    //         console.log(`${TAG} SUB_MULTIMEDIA_ON_CAPTURE_READY_0100 SUCCESS + ${(flag)}`);
    //         expect(isEmpty(err)).assertTrue();
    //       });
    //       await sleep();
    //       await takePicture();
    //       await sleep(2000);
    //       console.log(`${TAG} SUB_MULTIMEDIA_ON_CAPTURE_READY_0100 start3 + ${(flag)}`);
    //       expect(flag).assertFalse();
    //       await stopCameraSession();
    //       await sleep();
    //     }
    //     done();
    //   } catch (err) {
    //     console.log(`${TAG} SUB_MULTIMEDIA_ON_CAPTURE_READY_0100 err ${JSON.stringify(err)}`);
    //     expect(isEmpty(err)).assertTrue();
    //     done();
    //   }
    // })

    /**
     * @tc.number    : testCameraPhotoOutputOffCaptureReady0100
     * @tc.name      : SUB_MULTIMEDIA_OFF_CAPTURE_READY_0100
     * @tc.desc      : 1.PhotoOutput.on('captureReady')
     *                 2.PhotoOutput.off('captureReady')
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    // it('SUB_MULTIMEDIA_OFF_CAPTURE_READY_0100', 0, async (done: Function) => {
    //   let cameras = cameraDevice;
    //   try {
    //     createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
    //     await sleep();
    //     for (let i = 0; i < cameras.length; i++) {
    //       let flag = true;
    //       addCommit(i, camera.SceneMode.NORMAL_PHOTO);
    //       await sleep();
    //       await tempPhotoSession.commitConfig();
    //       await sleep();
    //       await tempPhotoSession.start();
    //       await sleep();
    //       tempPhotoOutput.on('captureReady', (err: BusinessError) => {
    //         flag = false;
    //         console.log(`${TAG} SUB_MULTIMEDIA_OFF_CAPTURE_READY_0100 SUCCESS + ${(flag)}`);
    //         expect(isEmpty(err)).assertTrue();
    //       });
    //       await sleep();
    //       tempPhotoOutput.off('captureReady');
    //       await sleep();
    //       await takePicture();
    //       await sleep(2000);
    //       expect(flag).assertTrue();
    //       await stopCameraSession();
    //       await sleep();
    //     }
    //     done();
    //   } catch (err) {
    //     console.log(`${TAG} SUB_MULTIMEDIA_OFF_CAPTURE_READY_0100 err ${JSON.stringify(err)}`);
    //     expect(isEmpty(err)).assertTrue();
    //     done();
    //   }
    // })


  })
}