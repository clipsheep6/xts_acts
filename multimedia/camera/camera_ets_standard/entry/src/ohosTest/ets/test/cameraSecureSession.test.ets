import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';

import camera from '@ohos.multimedia.camera';
import Want from '@ohos.app.ability.Want';
import { Driver, MatchPattern, ON } from '@ohos.UiTest';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import featureAbility from '@ohos.ability.featureAbility';
import { surfaceIds, videoSurfaceId } from '../testability/pages/Index';

let TAG = 'cameraSecureSession';
let cameraManager: camera.CameraManager;
let context = getContext(this);
let cameraDevice: Array<camera.CameraDevice>;

let tempCameraInput: camera.CameraInput;
let tempPreviewOutput: camera.PreviewOutput;
let tempPhotoOutput: camera.PhotoOutput;
let tempPhotoSession: camera.PhotoSession;
let tempSecureSession: camera.SecureSession;

// 创建安全相机对象
let createSecureSession = () => {
  tempSecureSession = cameraManager.createSession(camera.SceneMode.SECURE_PHOTO);
  tempSecureSession.beginConfig();
}

// 创建input参数为cameraDevice的下标
let createInput = async (index: number) => {
  tempCameraInput = cameraManager.createCameraInput(cameraDevice[index]);
  if (!isEmpty(tempCameraInput)) {
    let id = await tempCameraInput.open(true);
    console.log(`createInputes id ${id}`);
  }
}

// 创建Output参数为cameraDevice的下标、相机模式
let createOutput = (index: number, mode: number) => {
  let cameraOutputCap = cameraManager.getSupportedOutputCapability(cameraDevice[index], mode);
  tempPreviewOutput = cameraManager.createPreviewOutput(cameraOutputCap.previewProfiles[0], surfaceIds);
  // tempPhotoOutput = cameraManager.createPhotoOutput(cameraOutputCap.photoProfiles[0]);
}

// 添加相机流参数为cameraDevice的下标、相机模式
let addCommit = async (i: number, mode: number) => {
  await createInput(i);
  createOutput(i, mode);
  if (tempCameraInput) {
    tempSecureSession.addInput(tempCameraInput);
  }
  if (tempPreviewOutput) {
    tempSecureSession.addOutput(tempPreviewOutput);
    tempSecureSession.addSecureOutput(tempPreviewOutput);
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
}

// 释放相机资源
let stopCameraSessions = async () => {
  tempSecureSession.release();
  if (!isEmpty(tempCameraInput)) {
    await tempCameraInput.close();
  }
  if (!isEmpty(tempPreviewOutput)) {
    await tempPreviewOutput.release();
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

export default function cameraSecureSessionsTest() {
  let dr = Driver.create();
  describe('cameraSecureSessionsTest', () => {
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
     * @tc.number    : testCameraSecureSessionOnError0100
     * @tc.name      : SUB_MULTIMEDIA_SECURE_SESSION_ADD_SECURE_OUTPUT_0100
     * @tc.desc      : 1.tempSecureSession.addSecureOutput() parameter null
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SECURE_SESSION_ADD_SECURE_OUTPUT_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let cameraMode = cameraManager.getSupportedSceneModes(cameras[i]);
          for (let j = 0; j < cameraMode.length; j++) {
            if (cameraMode[j] === camera.SceneMode.SECURE_PHOTO) {
              createSecureSession();
              await sleep();
              // addCommit(i, cameraMode[j]);
              await sleep();
              tempSecureSession.addSecureOutput(null)
              await tempSecureSession.commitConfig();
              await sleep();
              await stopCameraSessions();
              await sleep();
            }
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SECURE_SESSION_ADD_SECURE_OUTPUT_0100 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })


    /**
     * @tc.number    : testCameraSecureSessionOnFocusStateChange0100
     * @tc.name      : SUB_MULTIMEDIA_SECURE_SESSION_ON_FOCUS_STATE_CHANGE_0100
     * @tc.desc      : 1.tempSecureSession.on('focusStateChange')
     *                 2.tempSecureSession.isFocusModeSupported(2)
     *                 3.tempSecureSession.setFocusMode(2)
     *                 4.tempSecureSession.setFocusPoint({x: 0.5, y: 0.5})
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SECURE_SESSION_ON_FOCUS_STATE_CHANGE_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let cameraMode = cameraManager.getSupportedSceneModes(cameras[i]);
          for (let j = 0; j < cameraMode.length; j++) {
            if (cameraMode[j] === camera.SceneMode.SECURE_PHOTO) {
              let flag = false;
              createSecureSession();
              await sleep();
              tempSecureSession.on('focusStateChange', (error, focusState) => {
                console.log(`${TAG} SUB_MULTIMEDIA_SECURE_SESSION_ON_ERROR_0100 error ${JSON.stringify(error)} ${focusState}`);
                expect(isEmpty(error)).assertTrue();
                flag = true;
              })
              await sleep()
              addCommit(i, cameraMode[j]);
              await sleep();
              await tempSecureSession.commitConfig();
              await tempSecureSession.start()
              let temp = tempSecureSession.isFocusModeSupported(2)
              if (temp) {
                tempSecureSession.setFocusMode(2)
                await sleep(200);
                tempSecureSession.setFocusPoint({
                  x: 0.5, y: 0.5
                })
                await sleep(200);
                tempSecureSession.setFocusPoint({
                  x: 0, y: 0
                })
                await sleep(200);
                tempSecureSession.setFocusMode(0);
                await sleep();
                expect(flag).assertTrue();
              } else {
                console.log(`${TAG} SUB_MULTIMEDIA_SECURE_SESSION_ON_FOCUS_STATE_CHANGE_0100 is not supported auto focus`);
                expect(flag).assertFalse();
              }
              await sleep();
              await tempSecureSession.stop();
              await stopCameraSessions();
              await sleep();
            }
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SECURE_SESSION_ON_ERROR_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraSecureSessionOffFocusStateChange0100
     * @tc.name      : SUB_MULTIMEDIA_SECURE_SESSION_OFF_FOCUS_STATE_CHANGE_0100
     * @tc.desc      : 1.tempSecureSession.on('focusStateChange')
     *                 2.tempSecureSession.off('focusStateChange')
     *                 3.tempSecureSession.isFocusModeSupported(2)
     *                 4.tempSecureSession.setFocusMode(2)
     *                 5.tempSecureSession.setFocusPoint({x: 0.5, y: 0.5})
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SECURE_SESSION_OFF_FOCUS_STATE_CHANGE_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let cameraMode = cameraManager.getSupportedSceneModes(cameras[i]);
          for (let j = 0; j < cameraMode.length; j++) {
            if (cameraMode[j] === camera.SceneMode.SECURE_PHOTO) {
              let flag = true;
              createSecureSession();
              await sleep();
              tempSecureSession.on('focusStateChange', (error, focusState) => {
                console.log(`${TAG} SUB_MULTIMEDIA_SECURE_SESSION_OFF_FOCUS_STATE_CHANGE_0100 error ${JSON.stringify(error)} ${focusState}`);
                expect(isEmpty(error)).assertTrue();
                expect()
                flag = false;
              })
              await sleep()
              tempSecureSession.off('error')
              addCommit(i, cameraMode[j]);
              await sleep();
              await tempSecureSession.commitConfig();
              await tempSecureSession.start()
              let temp = tempSecureSession.isFocusModeSupported(2)
              if (temp) {
                tempSecureSession.setFocusMode(2)
                await sleep(200)
                tempSecureSession.setFocusPoint({
                  x: 0.5, y: 0.5
                })
                await sleep(200)
                tempSecureSession.setFocusPoint({
                  x: 0, y: 0
                })
                await sleep(200)
                tempSecureSession.setFocusMode(0)
              } else {
                console.log(`${TAG} SUB_MULTIMEDIA_SECURE_SESSION_OFF_FOCUS_STATE_CHANGE_0100 is not supported auto focus`);
              }
              await sleep();
              await tempSecureSession.stop();
              await stopCameraSessions();
              await sleep();
              expect(flag).assertTrue()
            }
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SECURE_SESSION_OFF_FOCUS_STATE_CHANGE_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

  })
}
