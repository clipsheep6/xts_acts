import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';

import camera from '@ohos.multimedia.camera';
import { Driver, MatchPattern, ON } from '@ohos.UiTest';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import Want from '@ohos.app.ability.Want';
import featureAbility from '@ohos.ability.featureAbility';
import { BusinessError } from '@ohos.base';
import { surfaceIds, videoSurfaceId } from '../testability/pages/Index';

let TAG = 'cameraMetaData';
let cameraManager: camera.CameraManager;
let context = getContext(this);
let cameraDevice: Array<camera.CameraDevice>;

let tempCameraInput: camera.CameraInput;
let tempPreviewOutput: camera.PreviewOutput;
let tempPhotoOutput: camera.PhotoOutput;
let tempPhotoSession: camera.PhotoSession;
let tempVideoOutput: camera.VideoOutput;
let tempMetadataOutput: camera.MetadataOutput;

// 创建input参数为cameraDevice的下标
let createInput = async (index: number) => {
  tempCameraInput = cameraManager.createCameraInput(cameraDevice[index]);
  if (!isEmpty(tempCameraInput)) {
    await tempCameraInput.open();
  }
}

// 创建Output参数为cameraDevice的下标、相机模式
let createOutput = (index: number, mode: number) => {
  let cameraOutputCap = cameraManager.getSupportedOutputCapability(cameraDevice[index], mode);
  tempPreviewOutput = cameraManager.createPreviewOutput(cameraOutputCap.previewProfiles[0], surfaceIds);
  tempPhotoOutput = cameraManager.createPhotoOutput(cameraOutputCap.photoProfiles[0]);
  tempMetadataOutput = cameraManager.createMetadataOutput(cameraOutputCap.supportedMetadataObjectTypes);
}

// 创建Session对象参数为相机模式
let createPhotoSession = (mode: number) => {
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
  if (!isEmpty(tempVideoOutput)) {
    tempPhotoSession.removeOutput(tempVideoOutput);
    await tempVideoOutput.release();
  }
  if (!isEmpty(tempMetadataOutput)) {
    tempPhotoSession.removeOutput(tempMetadataOutput);
    await tempMetadataOutput.release();
  }
}

// 释放相机资源
let releaseCamera = async () => {
  if (!isEmpty(tempCameraInput)) {
    await tempCameraInput.close();
  }
  if (!isEmpty(tempPreviewOutput)) {
    await tempPreviewOutput.release();
  }
  if (!isEmpty(tempPhotoOutput)) {
    await tempPhotoOutput.release();
  }
  if (!isEmpty(tempVideoOutput)) {
    await tempVideoOutput.release();
  }
  if (!isEmpty(tempMetadataOutput)) {
    await tempMetadataOutput.release();
  }
}

// 添加相机流
let addCommit = () => {
  // createInput(i);
  // createOutput(i, mode);
  if (tempCameraInput) {
    tempPhotoSession.addInput(tempCameraInput);
  }
  if (tempPreviewOutput) {
    tempPhotoSession.addOutput(tempPreviewOutput);
  }
  if (tempPhotoOutput) {
    tempPhotoSession.addOutput(tempPhotoOutput);
  }
  if (tempMetadataOutput) {
    tempPhotoSession.addOutput(tempMetadataOutput)
  }
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

// 拉起ability来获取权限
let ability = async () => {
  const delegator = abilityDelegatorRegistry.getAbilityDelegator()
  const bundleName = abilityDelegatorRegistry.getArguments().bundleName
  const want: Want = {
    bundleName: bundleName,
    abilityName: 'TestAbility'
  }
  await delegator.startAbility(want)
  await sleep(1000)
}


export default function cameraMetaDataTest() {
  let dr = Driver.create();
  describe('cameraMetaDataTest', () => {
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
    afterEach(async () => {
      await releaseCamera()
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })


    /**
     * @tc.number    : testCameraMetadataOutputStart0100
     * @tc.name      : SUB_MULTIMEDIA_METADATA_OUTPUT_START_0100
     * @tc.desc      : 1.tempMetadataOutput.start callback
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_METADATA_OUTPUT_START_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      try {
        for (let i = 0; i < arr.length; i++) {
          createPhotoSession(arr[i]);
          for (let j = 0; j < cameras.length; j++) {
            let flag = false
            await createInput(j);
            createOutput(j, arr[i]);
            await sleep();
            addCommit();
            await sleep();
            await tempPhotoSession.commitConfig();
            await tempPhotoSession.start();
            tempMetadataOutput.start((error) => {
              flag = true;
              console.log(`${TAG} SUB_MULTIMEDIA_METADATA_OUTPUT_START_0100 start error ${JSON.stringify(error)}`);
              expect(isEmpty(error)).assertTrue();
            })
            await sleep();
            expect(flag).assertTrue();
            await tempPhotoSession.stop();
            await stopCameraSession();
            await sleep();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_METADATA_OUTPUT_START_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraMetadataOutputStart0200
     * @tc.name      : SUB_MULTIMEDIA_METADATA_OUTPUT_START_0200
     * @tc.desc      : 1.tempMetadataOutput.start Promise
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_METADATA_OUTPUT_START_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      try {
        for (let i = 0; i < arr.length; i++) {
          createPhotoSession(arr[i]);
          for (let j = 0; j < cameras.length; j++) {
            let flag = false
            await createInput(j);
            createOutput(j, arr[i]);
            await sleep();
            addCommit();
            await sleep();
            await tempPhotoSession.commitConfig();
            await tempPhotoSession.start();
            await tempMetadataOutput.start().then(() => {
              flag = true;
            }).catch((error: BusinessError) => {
              flag = false;
              console.log(`${TAG} SUB_MULTIMEDIA_METADATA_OUTPUT_START_0200 start error ${JSON.stringify(error)}`);
              expect(isEmpty(error)).assertTrue();
            })
            await sleep();
            expect(flag).assertTrue();
            await tempPhotoSession.stop();
            await stopCameraSession();
            await sleep();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_METADATA_OUTPUT_START_0200 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })


    /**
     * @tc.number    : testCameraMetadataOutputStart0300
     * @tc.name      : SUB_MULTIMEDIA_METADATA_OUTPUT_START_0300
     * @tc.desc      : 1.tempMetadataOutput.start
     *                 2.tempMetadataOutput.start
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_METADATA_OUTPUT_START_0300', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      try {
        for (let i = 0; i < arr.length; i++) {
          createPhotoSession(arr[i]);
          for (let j = 0; j < cameras.length; j++) {
            let flag = false
            await createInput(j);
            createOutput(j, arr[i]);
            await sleep();
            addCommit();
            await sleep();
            await tempPhotoSession.commitConfig();
            await tempPhotoSession.start();
            await tempMetadataOutput.start().then(() => {
              flag = true;
            }).catch((error: BusinessError) => {
              flag = false;
              console.log(`${TAG} SUB_MULTIMEDIA_METADATA_OUTPUT_START_0200 start error ${JSON.stringify(error)}`);
              expect(isEmpty(error)).assertTrue();
            })
            await sleep()
            await tempMetadataOutput.start().then(() => {
              flag = true;
            }).catch((error: BusinessError) => {
              flag = false;
              console.log(`${TAG} SUB_MULTIMEDIA_METADATA_OUTPUT_START_0200 start error ${JSON.stringify(error)}`);
              expect(isEmpty(error)).assertTrue();
            })
            await sleep();
            await tempPhotoSession.stop();
            await stopCameraSession();
            await sleep();
            expect(flag).assertTrue()
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_METADATA_OUTPUT_START_0300 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })


    /**
     * @tc.number    : testCameraMetadataOutputStop0100
     * @tc.name      : SUB_MULTIMEDIA_METADATA_OUTPUT_STOP_0100
     * @tc.desc      : 1.tempMetadataOutput.stop callback
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_METADATA_OUTPUT_STOP_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      try {
        for (let i = 0; i < arr.length; i++) {
          createPhotoSession(arr[i]);
          for (let j = 0; j < cameras.length; j++) {
            let flag = false;
            await createInput(j);
            createOutput(j, arr[i]);
            await sleep();
            addCommit();
            await sleep();
            await tempPhotoSession.commitConfig();
            await tempPhotoSession.start();
            await tempMetadataOutput.start()
            await sleep()
            tempMetadataOutput.stop((error) => {
              flag = true;
              console.log(`${TAG} SUB_MULTIMEDIA_METADATA_OUTPUT_STOP_0100 start error ${JSON.stringify(error)}`);
              expect(isEmpty(error)).assertTrue();
            })
            await sleep();
            await tempPhotoSession.stop();
            await stopCameraSession();
            await sleep();
            expect(flag).assertTrue()
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_METADATA_OUTPUT_STOP_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraMetadataOutputStop0200
     * @tc.name      : SUB_MULTIMEDIA_METADATA_OUTPUT_STOP_0200
     * @tc.desc      : 1.tempMetadataOutput.stop Promise
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_METADATA_OUTPUT_STOP_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      try {
        for (let i = 0; i < arr.length; i++) {
          createPhotoSession(arr[i]);
          for (let j = 0; j < cameras.length; j++) {
            let flag = false;
            await createInput(j);
            createOutput(j, arr[i]);
            await sleep();
            addCommit();
            await sleep();
            await tempPhotoSession.commitConfig();
            await tempPhotoSession.start();
            await tempMetadataOutput.start()
            await sleep()
            await tempMetadataOutput.stop().then(() => {
              flag = true;
            }).catch((error: BusinessError) => {
              flag = false;
              console.log(`${TAG} SUB_MULTIMEDIA_METADATA_OUTPUT_STOP_0200 start error ${JSON.stringify(error)}`);
              expect(isEmpty(error)).assertTrue();
            })
            await sleep();
            await tempPhotoSession.stop();
            await stopCameraSession();
            await sleep();
            expect(flag).assertTrue()
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_METADATA_OUTPUT_STOP_0200 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })


    /**
     * @tc.number    : testCameraMetadataOutputStop0300
     * @tc.name      : SUB_MULTIMEDIA_METADATA_OUTPUT_STOP_0300
     * @tc.desc      : 1.tempMetadataOutput.stop
     *                 2.tempMetadataOutput.stop
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_METADATA_OUTPUT_STOP_0300', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      try {
        for (let i = 0; i < arr.length; i++) {
          createPhotoSession(arr[i]);
          for (let j = 0; j < cameras.length; j++) {
            let flag = false;
            await createInput(j);
            createOutput(j, arr[i]);
            await sleep();
            addCommit();
            await sleep();
            await tempPhotoSession.commitConfig();
            await tempPhotoSession.start();
            await tempMetadataOutput.start()
            await sleep()
            await tempMetadataOutput.stop().then(() => {
              flag = true;
            }).catch((error: BusinessError) => {
              flag = false;
              console.log(`${TAG} SUB_MULTIMEDIA_METADATA_OUTPUT_STOP_0300 start error ${JSON.stringify(error)}`);
              expect(isEmpty(error)).assertTrue();
            })
            await tempMetadataOutput.stop().then(() => {
              flag = true;
            }).catch((error: BusinessError) => {
              flag = false;
              console.log(`${TAG} SUB_MULTIMEDIA_METADATA_OUTPUT_STOP_0300 start error ${JSON.stringify(error)}`);
              expect(isEmpty(error)).assertTrue();
            })
            await sleep();
            await tempPhotoSession.stop();
            await stopCameraSession();
            await sleep();
            expect(flag).assertTrue()
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_METADATA_OUTPUT_STOP_0300 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

  })
}
