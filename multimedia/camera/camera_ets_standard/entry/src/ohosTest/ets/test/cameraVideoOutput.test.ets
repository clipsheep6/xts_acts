import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';

import camera from '@ohos.multimedia.camera';
import fs from '@ohos.file.fs';
import media from '@ohos.multimedia.media';
import { Driver, MatchPattern, ON } from '@ohos.UiTest';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import Want from '@ohos.app.ability.Want';
import featureAbility from '@ohos.ability.featureAbility';
import { BusinessError } from '@ohos.base';
import { surfaceIds, videoSurfaceId } from '../testability/pages/Index';

let TAG = 'cameraPreviewOutput';
let cameraManager: camera.CameraManager;
let context = getContext(this);
let cameraDevice: Array<camera.CameraDevice>;

let tempCameraInput: camera.CameraInput;
let tempPreviewOutput: camera.PreviewOutput;
let tempPhotoOutput: camera.PhotoOutput;
let tempPhotoSession: camera.PhotoSession;
let tempVideoSession: camera.VideoSession
let tempVideoOutput: camera.VideoOutput;

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
  console.log(`${TAG}  ${TAG} cameraOutputCap.videoProfiles[0] ${cameraOutputCap.videoProfiles[0]} ${surfaceId}`)
  tempVideoOutput = cameraManager.createVideoOutput(cameraOutputCap.videoProfiles[0], surfaceId)
  console.log(`${TAG} ${TAG} tempVideoOutput ${tempVideoOutput}`)
}

// 创建Session对象参数为相机模式
let createVideoSession = (mode: number) => {
  tempVideoSession = cameraManager.createSession(mode);
  tempVideoSession.beginConfig();
}

// 添加相机流参数为cameraDevice的下标、相机模式
let addCommits = async (i: number, mode: number) => {
  await createInput(i)
  createOutput(i, mode);
  if (tempCameraInput) {
    tempVideoSession.addInput(tempCameraInput);
  }
  if (tempPreviewOutput) {
    tempVideoSession.addOutput(tempPreviewOutput);
  }
  if (tempPhotoOutput) {
    tempVideoSession.addOutput(tempPhotoOutput);
  }
  if (tempVideoOutput) {
    tempVideoSession.addOutput(tempVideoOutput)
  }
}

// 添加相机流参数为cameraDevice的下标
let addCommit = async (i: number) => {
  await createInput(i)
  // createOutput(i, mode);
  if (tempCameraInput) {
    tempVideoSession.addInput(tempCameraInput);
  }
  if (tempPreviewOutput) {
    tempVideoSession.addOutput(tempPreviewOutput);
  }
  if (tempPhotoOutput) {
    tempVideoSession.addOutput(tempPhotoOutput);
  }
  if (tempVideoOutput) {
    tempVideoSession.addOutput(tempVideoOutput)
  }
}

// 释放相机资源
let stopCameraSessions = async () => {
  tempVideoSession.beginConfig();
  if (!isEmpty(tempCameraInput)) {
    tempVideoSession.removeInput(tempCameraInput);
    await tempCameraInput.close();
  }
  if (!isEmpty(tempPreviewOutput)) {
    tempVideoSession.removeOutput(tempPreviewOutput);
    await tempPreviewOutput.release();
  }
  if (!isEmpty(tempPhotoOutput)) {
    tempVideoSession.removeOutput(tempPhotoOutput);
    await tempPhotoOutput.release();
  }
  if (!isEmpty(tempVideoOutput)) {
    tempVideoSession.removeOutput(tempVideoOutput);
    await tempVideoOutput.release();
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
}

let surfaceId: string;
let fileAsset: string;
let fdNumber: number;
let fdPath: string;
let fdObject: ESObject;
let recorder: media.AVRecorder

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

let avRecorderConfig: media.AVRecorderConfig = {
  audioSourceType: media.AudioSourceType.AUDIO_SOURCE_TYPE_MIC,
  videoSourceType: media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV,
  profile: avRecorderProfile,
  url: 'fd://', // 文件需先由调用者创建，赋予读写权限，将文件fd传给此参数，eg.fd://45
  rotation: 0, // 合理值0、90、180、270，非合理值prepare接口将报错
  location: { latitude: 30, longitude: 130 }
}

// 获取file.fd参数为文件名
let createMaps = async (pathName: string) => {
  try {
    let fileDir: ESObject = await AppStorage.get('pathDir');
    pathName = fileDir + '/' + pathName;
    let file: ESObject = fs.openSync(pathName, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
    fileAsset = file;
    fdNumber = file.fd;
    fdPath = "fd://" + fdNumber.toString();
    console.log(`${TAG} getSurfaceId start -1 ${JSON.stringify(fdPath)}`);
  } catch (err) {
    console.log(`createMaps err ${JSON.stringify(err)}`);
  }
}

// 获取surfaceId
let getSurfaceId = async () => {
  try {
    await createMaps(`${Date.now()}.mp4`);
    console.log(`${TAG} getSurfaceId start 0`);
    avRecorderConfig.url = fdPath;
    console.log(`${TAG} getSurfaceId start 1`);
    recorder = await media.createAVRecorder();
    console.log(`${TAG} getSurfaceId start 2`);
    let errs = await recorder.prepare(avRecorderConfig);
    console.log(`${TAG} getSurfaceId start 3 ${JSON.stringify(errs)} `);
    surfaceId = await recorder.getInputSurface();
    console.log(`${TAG} getSurfaceId start 4`);
  } catch (err) {
    console.log(`${TAG} getSurfaceId err ${JSON.stringify(err)}`);
  }
}

// 释放资源
let releaseRecorder = async () => {
  await recorder?.release();
  closeFd();
  await sleep(200)
}

// 释放资源
let closeFd = () => {
  console.log('case come in closeFd')
  if (!isEmpty(fdNumber)) {
    fs.closeSync(fdNumber);
    console.log('make fdNumber is null')
  } else {
    console.log('this fdNumber is null')
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

export default function cameraVideoOutputTest() {
  let dr = Driver.create();
  describe('cameraVideoOutputTest', () => {
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
      await getSurfaceId()
      console.log(`${TAG} 11111111111 ${videoSurfaceId} `)
      // console.log(`${TAG} surfaceId beforeAll ${surfaceId}  `)
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
    afterAll(async () => {
      await releaseRecorder()
      await sleep(100)
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })


    /**
     * @tc.number    : testCameraVideoOutputStart0100
     * @tc.name      : SUB_MULTIMEDIA_VIDEO_OUTPUT_START_0100
     * @tc.desc      : 1.tempVideoOutput.start() callback
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_VIDEO_OUTPUT_START_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        await getSurfaceId()
        createVideoSession(camera.SceneMode.NORMAL_VIDEO);
        for (let j = 0; j < cameras.length; j++) {
          let flag = false;
          await sleep()
          addCommits(j, camera.SceneMode.NORMAL_VIDEO);
          await sleep();
          await tempVideoSession.commitConfig();
          await tempVideoSession.start();
          tempVideoOutput.start((error) => {
            console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_START_0100 err ${JSON.stringify(error)}`);
            expect(isEmpty(error)).assertTrue();
            flag = true;
          })
          await sleep();
          await tempVideoOutput.stop();
          await tempVideoSession.stop();
          await stopCameraSessions();
          await sleep();
          expect(flag).assertTrue()
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_START_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraVideoOutputStart0200
     * @tc.name      : SUB_MULTIMEDIA_VIDEO_OUTPUT_START_0200
     * @tc.desc      : 1.tempVideoOutput.start() promise
     *                 2.tempVideoOutput.start() promise
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_VIDEO_OUTPUT_START_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createVideoSession(camera.SceneMode.NORMAL_VIDEO);
        for (let j = 0; j < cameras.length; j++) {
          await sleep()
          addCommits(j, camera.SceneMode.NORMAL_VIDEO);
          await sleep();
          await tempVideoSession.commitConfig();
          await tempVideoSession.start();
          await tempVideoOutput.start()
          await tempVideoOutput.start()
          await sleep();
          await tempVideoOutput.stop();
          await tempVideoSession.stop();
          await stopCameraSessions();
          await sleep();
          console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_START_0200 end`)
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_START_0200 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })

    /**
     * @tc.number    : testCameraVideoOutputStop0100
     * @tc.name      : SUB_MULTIMEDIA_VIDEO_OUTPUT_STOP_0100
     * @tc.desc      : 1.tempVideoOutput.stop() callback
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_VIDEO_OUTPUT_STOP_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createVideoSession(camera.SceneMode.NORMAL_VIDEO);
        for (let j = 0; j < cameras.length; j++) {
          let flag = false;
          await sleep()
          addCommits(j, camera.SceneMode.NORMAL_VIDEO);
          await sleep();
          await tempVideoSession.commitConfig();
          await tempVideoSession.start();
          await tempVideoOutput.start()
          await sleep();
          tempVideoOutput.stop((error) => {
            console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_STOP_0100 err ${JSON.stringify(error)}`);
            expect(isEmpty(error)).assertTrue();
            flag = true;
          });
          await tempVideoSession.stop();
          await stopCameraSessions();
          await sleep();
          expect(flag).assertTrue()
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_STOP_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraVideoOutputStop0200
     * @tc.name      : SUB_MULTIMEDIA_VIDEO_OUTPUT_STOP_0200
     * @tc.desc      : 1.tempVideoOutput.stop()
     *                 2.tempVideoOutput.stop()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_VIDEO_OUTPUT_STOP_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createVideoSession(camera.SceneMode.NORMAL_VIDEO);
        for (let j = 0; j < cameras.length; j++) {
          let flag = false;
          await sleep()
          addCommits(j, camera.SceneMode.NORMAL_VIDEO);
          await sleep();
          await tempVideoSession.commitConfig();
          await tempVideoSession.start();
          await tempVideoOutput.start()
          await sleep();
          await tempVideoOutput.stop();
          await tempVideoOutput.stop();
          await tempVideoSession.stop();
          await stopCameraSessions();
          await sleep();
          expect(flag).assertFalse()
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_STOP_0200 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraVideoOutputOnFrameEnd0100
     * @tc.name      : SUB_MULTIMEDIA_VIDEO_OUTPUT_ON_FRAME_End0100
     * @tc.desc      : 1.tempVideoOutput.on('frameEnd')
     *                 2.tempVideoOutput.stop()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_VIDEO_OUTPUT_ON_FRAME_End0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createVideoSession(camera.SceneMode.NORMAL_VIDEO);
        for (let j = 0; j < cameras.length; j++) {
          let flag = false;
          createOutput(j, 2);
          await sleep()
          tempVideoOutput.on('frameEnd', (error) => {
            console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_ON_FRAME_End0100 error ${error}`)
            expect(isEmpty(error)).assertTrue()
            flag = true;
          })
          await sleep();
          addCommit(j);
          await sleep();
          await tempVideoSession.commitConfig();
          await tempVideoSession.start();
          await tempVideoOutput.start()
          await sleep();
          await tempVideoOutput.stop();
          await tempVideoSession.stop();
          await stopCameraSessions();
          await sleep();
          expect(flag).assertTrue()
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_ON_FRAME_End0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraVideoOutputOffFrameEnd0100
     * @tc.name      : SUB_MULTIMEDIA_VIDEO_OUTPUT_OFF_FRAME_End0100
     * @tc.desc      : 1.tempVideoOutput.on('frameEnd')
     *                 2.tempVideoOutput.off('frameEnd')
     *                 3.tempVideoOutput.stop()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_VIDEO_OUTPUT_OFF_FRAME_End0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createVideoSession(camera.SceneMode.NORMAL_VIDEO);
        for (let j = 0; j < cameras.length; j++) {
          let flag = true;
          createOutput(j, 2);
          await sleep()
          tempVideoOutput.on('frameEnd', (error) => {
            console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_OFF_FRAME_End0100 error ${error}`)
            expect(isEmpty(error)).assertTrue()
            flag = false;
          })
          await sleep();
          tempVideoOutput.off('frameEnd')
          addCommit(j);
          await sleep();
          await tempVideoSession.commitConfig();
          await tempVideoSession.start();
          await tempVideoOutput.start()
          await sleep();
          await tempVideoOutput.stop();
          await tempVideoSession.stop();
          await stopCameraSessions();
          await sleep();
          expect(flag).assertTrue()
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_OFF_FRAME_End0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })


    /**
     * @tc.number    : testCameraVideoOutputGetSupportedFrameRates0100
     * @tc.name      : SUB_MULTIMEDIA_VIDEO_OUTPUT_GET_SUPPORTED_FRAME_RATES_0100
     * @tc.desc      : 1.tempVideoOutput.getSupportedFrameRates()
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_VIDEO_OUTPUT_GET_SUPPORTED_FRAME_RATES_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createVideoSession(camera.SceneMode.NORMAL_VIDEO);
        for (let j = 0; j < cameras.length; j++) {
          createOutput(j, camera.SceneMode.NORMAL_VIDEO)
          await sleep()
          addCommit(j);
          await sleep();
          await tempVideoSession.commitConfig();
          await tempVideoSession.start();
          await tempVideoOutput.start();
          await sleep();
          let supportedFrameRatesArray: Array<camera.FrameRateRange> = tempVideoOutput.getSupportedFrameRates();
          console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_GET_SUPPORTED_FRAME_RATES_0100 supportedFrameRatesArray ${JSON.stringify(supportedFrameRatesArray)}`)
          await tempVideoOutput.stop();
          await tempVideoSession.stop();
          await stopCameraSessions();
          await sleep();
          expect(isEmpty(supportedFrameRatesArray)).assertFalse();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_GET_SUPPORTED_FRAME_RATES_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue()
        done();
      }
    })

    /**
     * @tc.number    : testCameraVideoOutputSetFrameRate0100
     * @tc.name      : SUB_MULTIMEDIA_VIDEO_OUTPUT_SET_FRAME_RATE_0100
     * @tc.desc      : 1.tempVideoOutput.getSupportedFrameRates()
     *                 2.tempVideoOutput.getActiveFrameRate()
     *                 3.tempVideoOutput.setFrameRate() parameter supportedFrameRatesArray
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_VIDEO_OUTPUT_SET_FRAME_RATE_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_SET_FRAME_RATE_0100 start 0`)
        createVideoSession(camera.SceneMode.NORMAL_VIDEO);
        for (let j = 0; j < cameras.length; j++) {
          await sleep()
          addCommits(j, camera.SceneMode.NORMAL_VIDEO);
          await sleep();
          await tempVideoSession.commitConfig();
          await tempVideoSession.start();
          await tempVideoOutput.start()
          await sleep();
          let supportedFrameRatesArray: Array<camera.FrameRateRange> = tempVideoOutput.getSupportedFrameRates();
          console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_SET_FRAME_RATE_0100 supportedFrameRatesArray ${JSON.stringify(supportedFrameRatesArray)}`)
          if (supportedFrameRatesArray.length > 1) {
            for (let i = 0; i < supportedFrameRatesArray.length; i++) {
              let c = i + 1
              if (c >= supportedFrameRatesArray.length) {
                c = 0
              }
              let activeFrameRate: camera.FrameRateRange = tempVideoOutput.getActiveFrameRate();
              console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_SET_FRAME_RATE_0100 activeFrameRate ${JSON.stringify(activeFrameRate)}`);
              tempVideoOutput.setFrameRate(supportedFrameRatesArray[c].min, supportedFrameRatesArray[c].max);
              await sleep();
              activeFrameRate = tempVideoOutput.getActiveFrameRate();
              expect(activeFrameRate.min).assertEqual(supportedFrameRatesArray[c].min);
              expect(activeFrameRate.max).assertEqual(supportedFrameRatesArray[c].max);
            }
          } else {
            console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_SET_FRAME_RATE_0100 is not supported frameRates`)
          }
          await tempVideoOutput.stop();
          await tempVideoSession.stop();
          await stopCameraSessions();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_SET_FRAME_RATE_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue()
        done();
      }
    })


    /**
     * @tc.number    : testCameraVideoOutputSetFrameRate0200
     * @tc.name      : SUB_MULTIMEDIA_VIDEO_OUTPUT_SET_FRAME_RATE_0200
     * @tc.desc      : 1.tempVideoOutput.getSupportedFrameRates()
     *                 2.tempVideoOutput.getActiveFrameRate()
     *                 3.tempVideoOutput.setFrameRate() parameter -10 10
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_VIDEO_OUTPUT_SET_FRAME_RATE_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createVideoSession(camera.SceneMode.NORMAL_VIDEO);
        for (let j = 0; j < cameras.length; j++) {
          await sleep()
          addCommits(j, camera.SceneMode.NORMAL_VIDEO);
          await sleep();
          await tempVideoSession.commitConfig();
          await tempVideoSession.start();
          await tempVideoOutput.start()
          await sleep();
          let supportedFrameRatesArray: Array<camera.FrameRateRange> = tempVideoOutput.getSupportedFrameRates();
          console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_SET_FRAME_RATE_0200 supportedFrameRatesArray ${JSON.stringify(supportedFrameRatesArray)}`)
          tempVideoOutput.setFrameRate(-10, 10);
          await sleep();
          let activeFrameRate = tempVideoOutput.getActiveFrameRate();
          console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_SET_FRAME_RATE_0200 activeFrameRate ${JSON.stringify(activeFrameRate)}`);
          await tempVideoOutput.stop();
          await tempVideoSession.stop();
          await stopCameraSessions();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_SET_FRAME_RATE_0200 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT)
        done();
      }
    })


    /**
     * @tc.number    : testCameraVideoOutputSetFrameRate0300
     * @tc.name      : SUB_MULTIMEDIA_VIDEO_OUTPUT_SET_FRAME_RATE_0300
     * @tc.desc      : 1.tempVideoOutput.getSupportedFrameRates()
     *                 2.tempVideoOutput.getActiveFrameRate()
     *                 3.tempVideoOutput.setFrameRate() parameter null 10
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_VIDEO_OUTPUT_SET_FRAME_RATE_0300', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createVideoSession(camera.SceneMode.NORMAL_VIDEO);
        for (let j = 0; j < cameras.length; j++) {
          await sleep()
          addCommits(j, camera.SceneMode.NORMAL_VIDEO);
          await sleep();
          await tempVideoSession.commitConfig();
          await tempVideoSession.start();
          await tempVideoOutput.start()
          await sleep();
          let supportedFrameRatesArray: Array<camera.FrameRateRange> = tempVideoOutput.getSupportedFrameRates();
          console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_SET_FRAME_RATE_0300 supportedFrameRatesArray ${JSON.stringify(supportedFrameRatesArray)}`)
          tempVideoOutput.setFrameRate(null, 10);
          await sleep();
          let activeFrameRate = tempVideoOutput.getActiveFrameRate();
          console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_SET_FRAME_RATE_0300 activeFrameRate ${JSON.stringify(activeFrameRate)}`);
          await tempVideoOutput.stop();
          await tempVideoSession.stop();
          await stopCameraSessions();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_VIDEO_OUTPUT_SET_FRAME_RATE_0300 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT)
        done();
      }
    })


  })
}
