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
import media from '@ohos.multimedia.media';
import fs from '@ohos.file.fs';
import { BusinessError } from '@ohos.base';
import Want from '@ohos.app.ability.Want';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import { Driver, MatchPattern,ON } from '@ohos.UiTest';

let avScreenCaptureRecorder: media.AVScreenCaptureRecorder;
let fileFd : number;
const FRAME_WIDTH : number = 480;
const FRAME_HEIGHT : number = 640;
const VIDEO_BITRATE : number = 10000000;
const AUDIO_SAMPLE_RATE : number = 48000;
const AUDIO_CHANNEL_COUNT : number = 2;
const AUDIO_BITRATE : number = 96000;
const DELAY_TIME_5000 : number = 5000;
const DELAY_TIME_1000 : number = 1000;
const ERROR_INVALID_VALUE : number = 401;
const ERROR_ORDER_VALUE : number = 5400102;
const ERROR_INIT_VALUE : number = -1;

const SET_MIC_ENABLE_EVENT = 'setMicEnable';
const CREATE_EVENT : string= 'create';
const INIT_EVENT : string = 'init';
const START_RECORDER_EVENT : string = 'start';
const STOP_RECORDER_EVENT : string = 'stop';
const RELEASE_RECORDER_EVENT : string = 'release';
const FAIL_EVENT : string = 'fail';
let STATE_TAG : string = '';
const TEXT_REFUSE : string = '不允许';
let TAG = "AVSCaptureRecordMethodTest ";

let fileDir: string | undefined;
let errorCode : number;

async function sleep(time: number) {
  console.info(`${TAG}, into sleep:`);
  return new Promise<string>((resolve, reject) => {
    setTimeout(() => {
      resolve('ok')
    }, time)
  }).then(() => {
    console.info(`sleep ${time} over...`);
  })
}

let intoAbility = async ()=> {
  console.info(`${TAG}, into intoAbility:`);
  let delegator = abilityDelegatorRegistry.getAbilityDelegator();
  let bundleName = abilityDelegatorRegistry.getArguments().bundleName;
  let want: Want = {
    bundleName : bundleName,
    abilityName: 'TestAbility',
  }
  await delegator.startAbility(want);
  await sleep(DELAY_TIME_1000);
}

async function clickAllowButton() {
  console.info(`${TAG}, into clickAllowButton:`);
  let driver = Driver.create();
  await sleep(DELAY_TIME_1000);
  let button = await driver.findComponent(ON.text(TEXT_REFUSE, MatchPattern.EQUALS));
  if (button !== undefined) {
    await button?.click();
  }
  await sleep(DELAY_TIME_5000);
}

async function createAVScreenCaptureRecorder() {
  console.info(`${TAG}, into createAVScreenCaptureRecorder:`);
  try {
    avScreenCaptureRecorder = await media.createAVScreenCaptureRecorder();
    console.info(`${TAG}, Succeeded in createAVScreenCaptureRecorder`);
    STATE_TAG = CREATE_EVENT;
  } catch (error) {
    console.error(`${TAG}, create avScreenCaptureRecorder error: ${JSON.stringify(error)}`);
    STATE_TAG = FAIL_EVENT;
  }
}

async function init() {
  console.info(`${TAG}, into init:`);
  if (errorCode !== ERROR_INIT_VALUE) {
    return;
  }
  try {
    let avCaptureConfig: media.AVScreenCaptureRecordConfig = {
      fd: fileFd,
      frameWidth: FRAME_WIDTH,
      frameHeight: FRAME_HEIGHT,
      videoBitrate: VIDEO_BITRATE,
      audioSampleRate: AUDIO_SAMPLE_RATE,
      audioChannelCount: AUDIO_CHANNEL_COUNT,
      audioBitrate: AUDIO_BITRATE,
      preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
    }
    await avScreenCaptureRecorder.init(avCaptureConfig).then(()=> {
      console.info(`${TAG}, Succeeded in initing avScreenCaptureRecorder`);
      STATE_TAG = INIT_EVENT;
    }).catch((err: BusinessError)=> {
      console.error(`${TAG}, Failed to init avScreenCaptureRecorder, error: ${JSON.stringify(err)}`);
      STATE_TAG = FAIL_EVENT;
      errorCode = err.code;
    })
  } catch (error) {
    console.error(`${TAG}, init error: ${JSON.stringify(error)}`);
    STATE_TAG = FAIL_EVENT;
  }
}

async function startRecording() {
  console.info(`${TAG}, into startRecording:`);
  if (errorCode !== ERROR_INIT_VALUE) {
    return;
  }
  try {
    await avScreenCaptureRecorder.startRecording().then(async ()=> {
      console.info(`${TAG}, Succeeded in starting avScreenCaptureRecorder`);
      STATE_TAG = START_RECORDER_EVENT;
      await clickAllowButton();
      await sleep(DELAY_TIME_1000);
    }).catch((err: BusinessError)=> {
      STATE_TAG = FAIL_EVENT;
      errorCode = err.code;
      console.error(`${TAG}, Failed to start avScreenCaptureRecorder, error: ${JSON.stringify(err)}`);
    })
  } catch (error) {
    STATE_TAG = FAIL_EVENT;
    console.error(`${TAG}, startRecording error: ${JSON.stringify(error)}`);
  }
}

async function stopRecording() {
  console.info(`${TAG}, into stopRecording:`);
  if (errorCode !== ERROR_INIT_VALUE) {
    return;
  }
  try {
    await avScreenCaptureRecorder.stopRecording().then(()=> {
      console.info(`${TAG}, Succeeded in stopping avScreenCaptureRecorder`);
      STATE_TAG = STOP_RECORDER_EVENT;
    }).catch((err: BusinessError)=> {
      STATE_TAG = FAIL_EVENT;
      errorCode = err.code;
      console.error(`${TAG}, Failed to stop avScreenCaptureRecorder, error: ${JSON.stringify(err)}`);
    })
  } catch (error) {
    STATE_TAG = FAIL_EVENT;
    console.error(`${TAG}, stopRecording error: ${JSON.stringify(error)}`);
  }
}

async function setMicEnabled() {
  console.info(`${TAG}, into setMicEnabled:`);
  if (errorCode !== ERROR_INIT_VALUE) {
    return;
  }
  try {
    await avScreenCaptureRecorder.setMicEnabled(true);
    console.info(`${TAG}, Succeeded in setMicEnabled avScreenCaptureRecorder`);
    STATE_TAG = SET_MIC_ENABLE_EVENT;
  } catch (error) {
    console.error(`${TAG}, Failed to setMicEnabled avScreenCaptureRecorder, error: ${JSON.stringify(error)}`);
    STATE_TAG = FAIL_EVENT;
  }
}

async function release() {
  console.info(`${TAG}, into release:`);
  if (errorCode !== ERROR_INIT_VALUE) {
    return;
  }
  try {
    await avScreenCaptureRecorder.release();
    avScreenCaptureRecorder == null;
    console.info(`${TAG}, Succeeded in releasing avScreenCaptureRecorder`);
    STATE_TAG = RELEASE_RECORDER_EVENT;
  } catch (error) {
    console.error(`${TAG}, Failed to release avScreenCaptureRecorder, error: ${JSON.stringify(error)}`);
    STATE_TAG = FAIL_EVENT;
  }
}

export default function AVSCaptureRecordMethodTestTest() {
  describe('AVSCaptureRecordMethodTestTest', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async () => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
      console.info(`${TAG}, into beforeAll:`);
      await intoAbility();
      fileDir = AppStorage.get('pathDir');
      let file = fs.openSync(fileDir, fs.OpenMode.CREATE | fs.OpenMode.READ_WRITE);
      fileFd = file.fd;
      await sleep(DELAY_TIME_1000);
    })
    beforeEach( async() => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
      console.info(`${TAG}, into beforeEach:`);
      errorCode = ERROR_INIT_VALUE;
      STATE_TAG = '';
      await sleep(DELAY_TIME_1000);
    })
    afterEach( async() => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
      console.info(`${TAG}, into afterEach:`);
      if (avScreenCaptureRecorder != null) {
        await avScreenCaptureRecorder.release();
        avScreenCaptureRecorder == null;
        console.info(`${TAG}, into afterEach avScreenCaptureRecorder release:`);
      }
      await sleep(DELAY_TIME_1000);
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
      console.info('afterAll case');
    })

    /**
     * @tc.number    : testRecordMethod0100
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0100
     * @tc.desc      : create->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0100', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0100 start');
      await createAVScreenCaptureRecorder();
      await init();
      expect(STATE_TAG).assertEqual(INIT_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0100 end');
    })

    /**
     * @tc.number    : testRecordMethod0101
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0101
     * @tc.desc      : create->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0101', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0101 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0101 end');
    })

    /**
     * @tc.number    : testRecordMethod0102
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0102
     * @tc.desc      : create->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0102', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0102 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0102 end');
    })

    /**
     * @tc.number    : testRecordMethod0103
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0103
     * @tc.desc      : create->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0103', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0103 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0103 end');
    })

    /**
     * @tc.number    : testRecordMethod0104
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0104
     * @tc.desc      : create->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0104', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0104 start');
      await createAVScreenCaptureRecorder();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0104 end');
    })

    /**
     * @tc.number    : testRecordMethod0105
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0105
     * @tc.desc      : create->init->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0105', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0105 start');
      await createAVScreenCaptureRecorder();
      await init();
      await init();
      expect(STATE_TAG).assertEqual(INIT_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0105 end');
    })

    /**
     * @tc.number    : testRecordMethod0106
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0106
     * @tc.desc      : create->init->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0106', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0106 start');
      await createAVScreenCaptureRecorder();
      await init();
      await startRecording();
      expect(STATE_TAG).assertEqual(START_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0106 end');
    })

    /**
     * @tc.number    : testRecordMethod0107
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0107
     * @tc.desc      : create->init->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0107', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0107 start');
      await createAVScreenCaptureRecorder();
      await init();
      await stopRecording();
      expect(STATE_TAG).assertEqual(STOP_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0107 end');
    })

    /**
     * @tc.number    : testRecordMethod0108
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0108
     * @tc.desc      : create->init->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0108', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0108 start');
      await createAVScreenCaptureRecorder();
      await init();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0108 end');
    })

    /**
     * @tc.number    : testRecordMethod0109
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0109
     * @tc.desc      : create->init->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0109', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0109 start');
      await createAVScreenCaptureRecorder();
      await init();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0109 end');
    })

    /**
     * @tc.number    : testRecordMethod0110
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0110
     * @tc.desc      : create->startRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0110', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0110 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0110 end');
    })

    /**
     * @tc.number    : testRecordMethod0111
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0111
     * @tc.desc      : create->startRecording->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0111', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0111 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0111 end');
    })

    /**
     * @tc.number    : testRecordMethod0112
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0112
     * @tc.desc      : create->startRecording->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0112', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0112 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0112 end');
    })

    /**
     * @tc.number    : testRecordMethod0113
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0113
     * @tc.desc      : create->startRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0113', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0113 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0113 end');
    })

    /**
     * @tc.number    : testRecordMethod0114
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0114
     * @tc.desc      : create->startRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0114', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0114 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0114 end');
    })

    /**
     * @tc.number    : testRecordMethod0115
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0115
     * @tc.desc      : create->stopRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0115', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0115 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0115 end');
    })

    /**
     * @tc.number    : testRecordMethod0116
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0116
     * @tc.desc      : create->stopRecording->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0116', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0116 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0116 end');
    })

    /**
     * @tc.number    : testRecordMethod0117
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0117
     * @tc.desc      : create->stopRecording->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0117', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0117 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0117 end');
    })

    /**
     * @tc.number    : testRecordMethod0118
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0118
     * @tc.desc      : create->stopRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0118', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0118 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0118 end');
    })

    /**
     * @tc.number    : testRecordMethod0119
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0119
     * @tc.desc      : create->stopRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0119', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0119 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0119 end');
    })

    /**
     * @tc.number    : testRecordMethod0120
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0120
     * @tc.desc      : create->setMicEnabled->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0120', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0120 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await init();
      expect(STATE_TAG).assertEqual(INIT_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0120 end');
    })

    /**
     * @tc.number    : testRecordMethod0121
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0121
     * @tc.desc      : create->setMicEnabled->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0121', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0121 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0121 end');
    })

    /**
     * @tc.number    : testRecordMethod0122
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0122
     * @tc.desc      : create->setMicEnabled->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0122', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0122 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0122 end');
    })

    /**
     * @tc.number    : testRecordMethod0123
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0123
     * @tc.desc      : create->setMicEnabled->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0123', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0123 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0123 end');
    })

    /**
     * @tc.number    : testRecordMethod0124
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0124
     * @tc.desc      : create->setMicEnabled->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0124', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0124 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0124 end');
    })

    /**
     * @tc.number    : testRecordMethod0125
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0125
     * @tc.desc      : create->release->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0125', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0125 start');
      await createAVScreenCaptureRecorder();
      await release();
      await init();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0125 end');
    })

    /**
     * @tc.number    : testRecordMethod0126
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0126
     * @tc.desc      : create->release->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0126', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0126 start');
      await createAVScreenCaptureRecorder();
      await release();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0126 end');
    })

    /**
     * @tc.number    : testRecordMethod0127
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0127
     * @tc.desc      : create->release->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0127', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0127 start');
      await createAVScreenCaptureRecorder();
      await release();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0127 end');
    })

    /**
     * @tc.number    : testRecordMethod0128
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0128
     * @tc.desc      : create->release->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0128', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0128 start');
      await createAVScreenCaptureRecorder();
      await release();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0128 end');
    })

    /**
     * @tc.number    : testRecordMethod0129
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0129
     * @tc.desc      : create->release->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0129', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0129 start');
      await createAVScreenCaptureRecorder();
      await release();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0129 end');
    })

    /**
     * @tc.number    : testRecordMethod0130
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0130
     * @tc.desc      : create->init->init->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0130', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0130 start');
      await createAVScreenCaptureRecorder();
      await init();
      await init();
      await startRecording();
      expect(STATE_TAG).assertEqual(START_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0130 end');
    })

    /**
     * @tc.number    : testRecordMethod0131
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0131
     * @tc.desc      : create->init->init->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0131', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0131 start');
      await createAVScreenCaptureRecorder();
      await init();
      await init();
      await stopRecording();
      expect(STATE_TAG).assertEqual(STOP_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0131 end');
    })

    /**
     * @tc.number    : testRecordMethod0132
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0132
     * @tc.desc      : create->init->init->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0132', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0132 start');
      await createAVScreenCaptureRecorder();
      await init();
      await init();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0132 end');
    })

    /**
     * @tc.number    : testRecordMethod0133
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0133
     * @tc.desc      : create->init->init->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('testAVSCaptureRecordMethod0133', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0133 start');
      await createAVScreenCaptureRecorder();
      await init();
      await init();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0133 end');
    })

    /**
     * @tc.number    : testRecordMethod0134
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0134
     * @tc.desc      : create->init->startRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0134', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0134 start');
      await createAVScreenCaptureRecorder();
      await init();
      await startRecording();
      await init();
      expect(STATE_TAG).assertEqual(INIT_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0134 end');
    })

    /**
     * @tc.number    : testRecordMethod0135
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0135
     * @tc.desc      : create->init->startRecording->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0135', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0135 start');
      await createAVScreenCaptureRecorder();
      await init();
      await startRecording();
      await startRecording();
      expect(STATE_TAG).assertEqual(START_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0135 end');
    })

    /**
     * @tc.number    : testRecordMethod0136
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0136
     * @tc.desc      : create->init->startRecording->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0136', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0136 start');
      await createAVScreenCaptureRecorder();
      await init();
      await startRecording();
      await stopRecording();
      expect(STATE_TAG).assertEqual(STOP_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0136 end');
    })

    /**
     * @tc.number    : testRecordMethod0137
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0137
     * @tc.desc      : create->init->startRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0137', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0137 start');
      await createAVScreenCaptureRecorder();
      await init();
      await startRecording();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0137 end');
    })

    /**
     * @tc.number    : testRecordMethod0138
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0138
     * @tc.desc      : create->init->startRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0138', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0138 start');
      await createAVScreenCaptureRecorder();
      await init();
      await startRecording();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0138 end');
    })

    /**
     * @tc.number    : testRecordMethod0139
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0139
     * @tc.desc      : create->init->stopRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0139', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0139 start');
      await createAVScreenCaptureRecorder();
      await init();
      await stopRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0139 end');
    })

    /**
     * @tc.number    : testRecordMethod0140
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0140
     * @tc.desc      : create->init->stopRecording->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0140', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0140 start');
      await createAVScreenCaptureRecorder();
      await init();
      await stopRecording();
      await startRecording();
      expect(STATE_TAG).assertEqual(START_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0140 end');
    })

    /**
     * @tc.number    : testRecordMethod0141
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0141
     * @tc.desc      : create->init->stopRecording->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0141', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0141 start');
      await createAVScreenCaptureRecorder();
      await init();
      await stopRecording();
      await stopRecording();
      expect(STATE_TAG).assertEqual(STOP_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0141 end');
    })

    /**
     * @tc.number    : testRecordMethod0142
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0142
     * @tc.desc      : create->init->stopRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0142', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0142 start');
      await createAVScreenCaptureRecorder();
      await init();
      await stopRecording();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0142 end');
    })

    /**
     * @tc.number    : testRecordMethod0143
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0143
     * @tc.desc      : create->init->stopRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0143', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0143 start');
      await createAVScreenCaptureRecorder();
      await init();
      await stopRecording();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0143 end');
    })

    /**
     * @tc.number    : testRecordMethod0144
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0144
     * @tc.desc      : create->init->setMicEnabled->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0144', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0144 start');
      await createAVScreenCaptureRecorder();
      await init();
      await setMicEnabled();
      await init();
      expect(STATE_TAG).assertEqual(INIT_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0144 end');
    })

    /**
     * @tc.number    : testRecordMethod0145
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0145
     * @tc.desc      : create->init->setMicEnabled->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0145', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0145 start');
      await createAVScreenCaptureRecorder();
      await init();
      await setMicEnabled();
      await startRecording();
      expect(STATE_TAG).assertEqual(START_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0145 end');
    })

    /**
     * @tc.number    : testRecordMethod0146
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0146
     * @tc.desc      : create->init->setMicEnabled->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0146', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0146 start');
      await createAVScreenCaptureRecorder();
      await init();
      await setMicEnabled();
      await stopRecording();
      expect(STATE_TAG).assertEqual(STOP_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0146 end');
    })

    /**
     * @tc.number    : testRecordMethod0147
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0147
     * @tc.desc      : create->init->setMicEnabled->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0147', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0147 start');
      await createAVScreenCaptureRecorder();
      await init();
      await setMicEnabled();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0147 end');
    })

    /**
     * @tc.number    : testRecordMethod0148
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0148
     * @tc.desc      : create->init->setMicEnabled->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0148', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0148 start');
      await createAVScreenCaptureRecorder();
      await init();
      await setMicEnabled();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0148 end');
    })

    /**
     * @tc.number    : testRecordMethod0149
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0149
     * @tc.desc      : create->init->release->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0149', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0149 start');
      await createAVScreenCaptureRecorder();
      await init();
      await release();
      await init();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0149 end');
    })

    /**
     * @tc.number    : testRecordMethod0150
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0150
     * @tc.desc      : create->init->release->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0150', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0150 start');
      await createAVScreenCaptureRecorder();
      await init();
      await release();
      await startRecording();
      expect(STATE_TAG).assertEqual(START_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0150 end');
    })

    /**
     * @tc.number    : testRecordMethod0151
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0151
     * @tc.desc      : create->init->release->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0151', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0151 start');
      await createAVScreenCaptureRecorder();
      await init();
      await release();
      await stopRecording();
      expect(STATE_TAG).assertEqual(STOP_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0151 end');
    })

    /**
     * @tc.number    : testRecordMethod0152
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0152
     * @tc.desc      : create->init->release->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0152', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0152 start');
      await createAVScreenCaptureRecorder();
      await init();
      await release();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0152 end');
    })

    /**
     * @tc.number    : testRecordMethod0153
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0153
     * @tc.desc      : create->init->release->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0153', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0153 start');
      await createAVScreenCaptureRecorder();
      await init();
      await release();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0153 end');
    })

    /**
     * @tc.number    : testRecordMethod0154
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0154
     * @tc.desc      : create->startRecording->init->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0154', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0154 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await init();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0154 end');
    })

    /**
     * @tc.number    : testRecordMethod0155
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0155
     * @tc.desc      : create->startRecording->init->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0155', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0155 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await init();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0155 end');
    })

    /**
     * @tc.number    : testRecordMethod0156
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0156
     * @tc.desc      : create->startRecording->init->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0156', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0156 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await init();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0156 end');
    })

    /**
     * @tc.number    : testRecordMethod0157
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0157
     * @tc.desc      : create->startRecording->init->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0157', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0157 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await init();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0157 end');
    })

    /**
     * @tc.number    : testRecordMethod0158
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0158
     * @tc.desc      : create->startRecording->init->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0158', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0158 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await init();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0158 end');
    })

    /**
     * @tc.number    : testRecordMethod0159
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0159
     * @tc.desc      : create->startRecording->startRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0159', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0159 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await startRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0159 end');
    })

    /**
     * @tc.number    : testRecordMethod0160
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0160
     * @tc.desc      : create->startRecording->startRecording->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0160', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0160 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await startRecording();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0160 end');
    })

    /**
     * @tc.number    : testRecordMethod0161
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0161
     * @tc.desc      : create->startRecording->startRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0161', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0161 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await startRecording();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0161 end');
    })

    /**
     * @tc.number    : testRecordMethod0162
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0162
     * @tc.desc      : create->startRecording->startRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0162', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0162 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await startRecording();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0162 end');
    })

    /**
     * @tc.number    : testRecordMethod0163
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0163
     * @tc.desc      : create->startRecording->stopRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0163', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0163 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await stopRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0163 end');
    })

    /**
     * @tc.number    : testRecordMethod0164
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0164
     * @tc.desc      : create->startRecording->stopRecording->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0164', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0164 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await stopRecording();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0164 end');
    })

    /**
     * @tc.number    : testRecordMethod0165
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0165
     * @tc.desc      : create->startRecording->stopRecording->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0165', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0165 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await stopRecording();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0165 end');
    })

    /**
     * @tc.number    : testRecordMethod0166
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0166
     * @tc.desc      : create->startRecording->stopRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0166', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0166 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await stopRecording();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0166 end');
    })

    /**
     * @tc.number    : testRecordMethod0167
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0167
     * @tc.desc      : create->startRecording->stopRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0167', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0167 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await stopRecording();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0167 end');
    })

    /**
     * @tc.number    : testRecordMethod0168
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0168
     * @tc.desc      : create->startRecording->setMicEnabled->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0168', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0168 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await setMicEnabled();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0168 end');
    })

    /**
     * @tc.number    : testRecordMethod0169
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0169
     * @tc.desc      : create->startRecording->setMicEnabled->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0169', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0169 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await setMicEnabled();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0169 end');
    })

    /**
     * @tc.number    : testRecordMethod0170
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0170
     * @tc.desc      : create->startRecording->setMicEnabled->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0170', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0170 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await setMicEnabled();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0170 end');
    })

    /**
     * @tc.number    : testRecordMethod0171
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0171
     * @tc.desc      : create->startRecording->setMicEnabled->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0171', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0171 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await setMicEnabled();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0171 end');
    })

    /**
     * @tc.number    : testRecordMethod0172
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0172
     * @tc.desc      : create->startRecording->setMicEnabled->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0172', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0172 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await setMicEnabled();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0172 end');
    })

    /**
     * @tc.number    : testRecordMethod0173
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0173
     * @tc.desc      : create->startRecording->release->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0173', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0173 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await release();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0173 end');
    })

    /**
     * @tc.number    : testRecordMethod0174
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0174
     * @tc.desc      : create->startRecording->release->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0174', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0174 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await release();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0174 end');
    })

    /**
     * @tc.number    : testRecordMethod0175
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0175
     * @tc.desc      : create->startRecording->release->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0175', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0175 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await release();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0175 end');
    })

    /**
     * @tc.number    : testRecordMethod0176
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0176
     * @tc.desc      : create->startRecording->release->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0176', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0176 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await release();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0176 end');
    })

    /**
     * @tc.number    : testRecordMethod0177
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0177
     * @tc.desc      : create->startRecording->release->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0177', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0177 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await release();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0177 end');
    })

    /**
     * @tc.number    : testRecordMethod0178
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0178
     * @tc.desc      : create->stopRecording->init->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0178', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0178 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await init();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0178 end');
    })

    /**
     * @tc.number    : testRecordMethod0179
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0179
     * @tc.desc      : create->stopRecording->init->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0179', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0179 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await init();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0179 end');
    })

    /**
     * @tc.number    : testRecordMethod0180
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0180
     * @tc.desc      : create->stopRecording->init->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0180', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0180 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await init();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0180 end');
    })

    /**
     * @tc.number    : testRecordMethod0181
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0181
     * @tc.desc      : create->stopRecording->init->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0181', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0181 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await init();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0181 end');
    })

    /**
     * @tc.number    : testRecordMethod0182
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0182
     * @tc.desc      : create->stopRecording->init->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0182', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0182 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await init();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0182 end');
    })

    /**
     * @tc.number    : testRecordMethod0183
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0183
     * @tc.desc      : create->stopRecording->startRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0183', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0183 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await startRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0183 end');
    })

    /**
     * @tc.number    : testRecordMethod0184
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0184
     * @tc.desc      : create->stopRecording->startRecording->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0184', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0184 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await startRecording();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0184 end');
    })

    /**
     * @tc.number    : testRecordMethod0185
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0185
     * @tc.desc      : create->stopRecording->startRecording->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0185', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0185 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await startRecording();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0185 end');
    })

    /**
     * @tc.number    : testRecordMethod0186
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0186
     * @tc.desc      : create->stopRecording->startRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0186', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0186 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await startRecording();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0186 end');
    })

    /**
     * @tc.number    : testRecordMethod0187
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0187
     * @tc.desc      : create->stopRecording->startRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0187', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0187 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await startRecording();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0187 end');
    })

    /**
     * @tc.number    : testRecordMethod0188
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0188
     * @tc.desc      : create->stopRecording->stopRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0188', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0188 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await stopRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0188 end');
    })

    /**
     * @tc.number    : testRecordMethod0189
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0189
     * @tc.desc      : create->stopRecording->stopRecording->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0189', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0189 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await stopRecording();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0189 end');
    })

    /**
     * @tc.number    : testRecordMethod0190
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0190
     * @tc.desc      : create->stopRecording->stopRecording->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0190', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0190 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await stopRecording();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0190 end');
    })

    /**
     * @tc.number    : testRecordMethod0191
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0191
     * @tc.desc      : create->stopRecording->stopRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0191', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0191 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await stopRecording();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0191 end');
    })

    /**
     * @tc.number    : testRecordMethod0192
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0192
     * @tc.desc      : create->stopRecording->setMicEnabled->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0192', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0192 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await setMicEnabled();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0192 end');
    })

    /**
     * @tc.number    : testRecordMethod0193
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0193
     * @tc.desc      : create->stopRecording->setMicEnabled->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0193', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0193 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await setMicEnabled();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0193 end');
    })

    /**
     * @tc.number    : testRecordMethod0194
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0194
     * @tc.desc      : create->stopRecording->setMicEnabled->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0194', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0194 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await setMicEnabled();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0194 end');
    })

    /**
     * @tc.number    : testRecordMethod0195
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0195
     * @tc.desc      : create->stopRecording->setMicEnabled->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0195', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0195 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await setMicEnabled();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0195 end');
    })

    /**
     * @tc.number    : testRecordMethod0196
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0196
     * @tc.desc      : create->stopRecording->setMicEnabled->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0196', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0196 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await setMicEnabled();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0196 end');
    })

    /**
     * @tc.number    : testRecordMethod0197
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0197
     * @tc.desc      : create->stopRecording->release->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0197', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0197 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await release();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0197 end');
    })

    /**
     * @tc.number    : testRecordMethod0198
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0198
     * @tc.desc      : create->stopRecording->release->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0198', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0198 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await release();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0198 end');
    })

    /**
     * @tc.number    : testRecordMethod0199
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0199
     * @tc.desc      : create->stopRecording->release->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0199', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0199 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await release();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0199 end');
    })

    /**
     * @tc.number    : testRecordMethod0200
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0200
     * @tc.desc      : create->stopRecording->release->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0200', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0200 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await release();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0200 end');
    })

    /**
     * @tc.number    : testRecordMethod0201
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0201
     * @tc.desc      : create->stopRecording->release->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0201', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0201 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await release();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0201 end');
    })

    /**
     * @tc.number    : testRecordMethod0202
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0202
     * @tc.desc      : create->setMicEnabled->init->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0202', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0202 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await init();
      await init();
      expect(STATE_TAG).assertEqual(INIT_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0202 end');
    })

    /**
     * @tc.number    : testRecordMethod0203
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0203
     * @tc.desc      : create->setMicEnabled->init->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0203', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0203 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await init();
      await startRecording();
      expect(STATE_TAG).assertEqual(START_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0203 end');
    })

    /**
     * @tc.number    : testRecordMethod0204
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0204
     * @tc.desc      : create->setMicEnabled->init->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0204', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0204 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await init();
      await stopRecording();
      expect(STATE_TAG).assertEqual(STOP_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0204 end');
    })

    /**
     * @tc.number    : testRecordMethod0205
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0205
     * @tc.desc      : create->setMicEnabled->init->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0205', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0205 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await init();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0205 end');
    })

    /**
     * @tc.number    : testRecordMethod0206
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0206
     * @tc.desc      : create->setMicEnabled->init->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0206', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0206 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await init();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0206 end');
    })

    /**
     * @tc.number    : testRecordMethod0207
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0207
     * @tc.desc      : create->setMicEnabled->startRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0207', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0207 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await startRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0207 end');
    })

    /**
     * @tc.number    : testRecordMethod0208
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0208
     * @tc.desc      : create->setMicEnabled->startRecording->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0208', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0208 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await startRecording();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0208 end');
    })

    /**
     * @tc.number    : testRecordMethod0209
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0209
     * @tc.desc      : create->setMicEnabled->startRecording->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0209', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0209 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await startRecording();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0209 end');
    })

    /**
     * @tc.number    : testRecordMethod0210
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0210
     * @tc.desc      : create->setMicEnabled->startRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0210', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0210 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await startRecording();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0210 end');
    })

    /**
     * @tc.number    : testRecordMethod0211
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0211
     * @tc.desc      : create->setMicEnabled->startRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0211', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0211 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await startRecording();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0211 end');
    })

    /**
     * @tc.number    : testRecordMethod0212
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0212
     * @tc.desc      : create->setMicEnabled->stopRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0212', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0212 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await stopRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0212 end');
    })

    /**
     * @tc.number    : testRecordMethod0213
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0213
     * @tc.desc      : create->setMicEnabled->stopRecording->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0213', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0213 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await stopRecording();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0213 end');
    })

    /**
     * @tc.number    : testRecordMethod0214
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0214
     * @tc.desc      : create->setMicEnabled->stopRecording->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0214', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0214 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await stopRecording();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0214 end');
    })

    /**
     * @tc.number    : testRecordMethod0215
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0215
     * @tc.desc      : create->setMicEnabled->stopRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0215', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0215 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await stopRecording();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0215 end');
    })

    /**
     * @tc.number    : testRecordMethod0216
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0216
     * @tc.desc      : create->setMicEnabled->stopRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0216', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0216 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await stopRecording();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0216 end');
    })

    /**
     * @tc.number    : testRecordMethod0217
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0217
     * @tc.desc      : create->setMicEnabled->setMicEnabled->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0217', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0217 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await setMicEnabled();
      await init();
      expect(STATE_TAG).assertEqual(INIT_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0217 end');
    })

    /**
     * @tc.number    : testRecordMethod0218
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0218
     * @tc.desc      : create->setMicEnabled->setMicEnabled->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0218', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0218 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await setMicEnabled();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0218 end');
    })

    /**
     * @tc.number    : testRecordMethod0219
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0219
     * @tc.desc      : create->setMicEnabled->setMicEnabled->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0219', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0219 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await setMicEnabled();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0219 end');
    })

    /**
     * @tc.number    : testRecordMethod0220
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0220
     * @tc.desc      : create->setMicEnabled->setMicEnabled->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0220', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0220 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await setMicEnabled();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0220 end');
    })

    /**
     * @tc.number    : testRecordMethod0221
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0221
     * @tc.desc      : create->setMicEnabled->release->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0221', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0221 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await release();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0221 end');
    })

    /**
     * @tc.number    : testRecordMethod0222
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0222
     * @tc.desc      : create->setMicEnabled->release->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0222', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0222 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await release();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0222 end');
    })

    /**
     * @tc.number    : testRecordMethod0223
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0223
     * @tc.desc      : create->setMicEnabled->release->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0223', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0223 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await release();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0223 end');
    })

    /**
     * @tc.number    : testRecordMethod0224
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0224
     * @tc.desc      : create->setMicEnabled->release->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0224', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0224 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await release();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0224 end');
    })

    /**
     * @tc.number    : testRecordMethod0225
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0225
     * @tc.desc      : create->setMicEnabled->release->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0225', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0225 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await release();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0225 end');
    })

    /**
     * @tc.number    : testRecordMethod0226
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0226
     * @tc.desc      : create->release->init->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0226', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0226 start');
      await createAVScreenCaptureRecorder();
      await release();
      await init();
      await init();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0226 end');
    })

    /**
     * @tc.number    : testRecordMethod0227
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0227
     * @tc.desc      : create->release->init->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0227', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0227 start');
      await createAVScreenCaptureRecorder();
      await release();
      await init();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0227 end');
    })

    /**
     * @tc.number    : testRecordMethod0228
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0228
     * @tc.desc      : create->release->init->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0228', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0228 start');
      await createAVScreenCaptureRecorder();
      await release();
      await init();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0228 end');
    })

    /**
     * @tc.number    : testRecordMethod0229
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0229
     * @tc.desc      : create->release->init->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0229', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0229 start');
      await createAVScreenCaptureRecorder();
      await release();
      await init();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0229 end');
    })

    /**
     * @tc.number    : testRecordMethod0230
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0230
     * @tc.desc      : create->release->init->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0230', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0230 start');
      await createAVScreenCaptureRecorder();
      await release();
      await init();
      await release();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0230 end');
    })

    /**
     * @tc.number    : testRecordMethod0231
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0231
     * @tc.desc      : create->release->startRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0231', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0231 start');
      await createAVScreenCaptureRecorder();
      await release();
      await startRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0231 end');
    })

    /**
     * @tc.number    : testRecordMethod0232
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0232
     * @tc.desc      : create->release->startRecording->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0232', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0232 start');
      await createAVScreenCaptureRecorder();
      await release();
      await startRecording();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0232 end');
    })

    /**
     * @tc.number    : testRecordMethod0233
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0233
     * @tc.desc      : create->release->startRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0233', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0233 start');
      await createAVScreenCaptureRecorder();
      await release();
      await startRecording();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0233 end');
    })

    /**
     * @tc.number    : testRecordMethod0234
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0234
     * @tc.desc      : create->release->startRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0234', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0234 start');
      await createAVScreenCaptureRecorder();
      await release();
      await startRecording();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0234 end');
    })

    /**
     * @tc.number    : testRecordMethod0235
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0235
     * @tc.desc      : create->release->stopRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0235', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0235 start');
      await createAVScreenCaptureRecorder();
      await release();
      await stopRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0235 end');
    })

    /**
     * @tc.number    : testRecordMethod0236
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0236
     * @tc.desc      : create->release->stopRecording->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0236', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0236 start');
      await createAVScreenCaptureRecorder();
      await release();
      await stopRecording();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0236 end');
    })

    /**
     * @tc.number    : testRecordMethod0237
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0237
     * @tc.desc      : create->release->stopRecording->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0237', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0237 start');
      await createAVScreenCaptureRecorder();
      await release();
      await stopRecording();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0237 end');
    })

    /**
     * @tc.number    : testRecordMethod0238
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0238
     * @tc.desc      : create->release->stopRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0238', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0238 start');
      await createAVScreenCaptureRecorder();
      await release();
      await stopRecording();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0238 end');
    })

    /**
     * @tc.number    : testRecordMethod0239
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0239
     * @tc.desc      : create->release->stopRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0239', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0239 start');
      await createAVScreenCaptureRecorder();
      await release();
      await stopRecording();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0239 end');
    })

    /**
     * @tc.number    : testRecordMethod0240
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0240
     * @tc.desc      : create->release->setMicEnabled->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0240', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0240 start');
      await createAVScreenCaptureRecorder();
      await release();
      await setMicEnabled();
      await init();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0240 end');
    })

    /**
     * @tc.number    : testRecordMethod0241
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0241
     * @tc.desc      : create->release->setMicEnabled->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0241', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0241 start');
      await createAVScreenCaptureRecorder();
      await release();
      await setMicEnabled();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0241 end');
    })

    /**
     * @tc.number    : testRecordMethod0242
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0242
     * @tc.desc      : create->release->setMicEnabled->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0242', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0242 start');
      await createAVScreenCaptureRecorder();
      await release();
      await setMicEnabled();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0242 end');
    })

    /**
     * @tc.number    : testRecordMethod0243
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0243
     * @tc.desc      : create->release->setMicEnabled->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0243', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0243 start');
      await createAVScreenCaptureRecorder();
      await release();
      await setMicEnabled();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0243 end');
    })

    /**
     * @tc.number    : testRecordMethod0244
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0244
     * @tc.desc      : create->release->setMicEnabled->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0244', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0244 start');
      await createAVScreenCaptureRecorder();
      await release();
      await setMicEnabled();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0244 end');
    })

    /**
     * @tc.number    : testRecordMethod0245
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0245
     * @tc.desc      : create->release->release->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0245', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0245 start');
      await createAVScreenCaptureRecorder();
      await release();
      await release();
      await init();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0245 end');
    })

    /**
     * @tc.number    : testRecordMethod0246
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0246
     * @tc.desc      : create->release->release->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0246', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0246 start');
      await createAVScreenCaptureRecorder();
      await release();
      await release();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0246 end');
    })

    /**
     * @tc.number    : testRecordMethod0247
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0247
     * @tc.desc      : create->release->release->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0247', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0247 start');
      await createAVScreenCaptureRecorder();
      await release();
      await release();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0247 end');
    })

    /**
     * @tc.number    : testRecordMethod0248
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0248
     * @tc.desc      : create->release->release->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0248', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0248 start');
      await createAVScreenCaptureRecorder();
      await release();
      await release();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0248 end');
    })

    /**
     * @tc.number    : testRecordMethod0249
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0249
     * @tc.desc      : create->init->init->startRecording->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0249', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0249 start');
      await createAVScreenCaptureRecorder();
      await init();
      await init();
      await startRecording();
      await startRecording();
      expect(STATE_TAG).assertEqual(START_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0249 end');
    })

    /**
     * @tc.number    : testRecordMethod0250
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0250
     * @tc.desc      : create->init->init->startRecording->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0250', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0250 start');
      await createAVScreenCaptureRecorder();
      await init();
      await init();
      await startRecording();
      await stopRecording();
      expect(STATE_TAG).assertEqual(STOP_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0250 end');
    })

    /**
     * @tc.number    : testRecordMethod0251
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0251
     * @tc.desc      : create->init->init->startRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0251', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0251 start');
      await createAVScreenCaptureRecorder();
      await init();
      await init();
      await startRecording();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0251 end');
    })

    /**
     * @tc.number    : testRecordMethod0252
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0252
     * @tc.desc      : create->init->init->startRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0252', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0252 start');
      await createAVScreenCaptureRecorder();
      await init();
      await init();
      await startRecording();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0252 end');
    })

    /**
     * @tc.number    : testRecordMethod0253
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0253
     * @tc.desc      : create->init->init->stopRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0253', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0253 start');
      await createAVScreenCaptureRecorder();
      await init();
      await init();
      await stopRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0253 end');
    })

    /**
     * @tc.number    : testRecordMethod0254
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0254
     * @tc.desc      : create->init->init->stopRecording->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0254', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0254 start');
      await createAVScreenCaptureRecorder();
      await init();
      await init();
      await stopRecording();
      await startRecording();
      expect(STATE_TAG).assertEqual(START_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0254 end');
    })

    /**
     * @tc.number    : testRecordMethod0255
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0255
     * @tc.desc      : create->init->init->stopRecording->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0255', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0255 start');
      await createAVScreenCaptureRecorder();
      await init();
      await init();
      await stopRecording();
      await stopRecording();
      expect(STATE_TAG).assertEqual(STOP_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0255 end');
    })

    /**
     * @tc.number    : testRecordMethod0256
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0256
     * @tc.desc      : create->init->init->stopRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0256', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0256 start');
      await createAVScreenCaptureRecorder();
      await init();
      await init();
      await stopRecording();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0256 end');
    })

    /**
     * @tc.number    : testRecordMethod0257
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0257
     * @tc.desc      : create->init->init->stopRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0257', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0257 start');
      await createAVScreenCaptureRecorder();
      await init();
      await init();
      await stopRecording();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0257 end');
    })

    /**
     * @tc.number    : testRecordMethod0258
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0258
     * @tc.desc      : create->init->init->startRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0258', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0258 start');
      await createAVScreenCaptureRecorder();
      await init();
      await init();
      await startRecording();
      await init();
      expect(STATE_TAG).assertEqual(INIT_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0258 end');
    })

    /**
     * @tc.number    : testRecordMethod0259
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0259
     * @tc.desc      : create->init->init->startRecording->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0259', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0259 start');
      await createAVScreenCaptureRecorder();
      await init();
      await init();
      await startRecording();
      await startRecording();
      expect(STATE_TAG).assertEqual(START_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0259 end');
    })

    /**
     * @tc.number    : testRecordMethod0260
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0260
     * @tc.desc      : create->init->startRecording->stopRecording->setMicEnabled->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0260', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0260 start');
      await createAVScreenCaptureRecorder();
      await init();
      await startRecording();
      await stopRecording();
      await setMicEnabled();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0260 end');
    })

    /**
     * @tc.number    : testRecordMethod0261
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0261
     * @tc.desc      : create->init->startRecording->stopRecording->release->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0261', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0261 start');
      await createAVScreenCaptureRecorder();
      await init();
      await startRecording();
      await stopRecording();
      await release();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0261 end');
    })

    /**
     * @tc.number    : testRecordMethod0262
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0262
     * @tc.desc      : create->init->startRecording->setMicEnabled->stopRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0262', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0262 start');
      await createAVScreenCaptureRecorder();
      await init();
      await startRecording();
      await setMicEnabled();
      await stopRecording();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0262 end');
    })

    /**
     * @tc.number    : testRecordMethod0263
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0263
     * @tc.desc      : create->init->startRecording->setMicEnabled->release->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0263', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0263 start');
      await createAVScreenCaptureRecorder();
      await init();
      await startRecording();
      await setMicEnabled();
      await release();
      await stopRecording();
      expect(STATE_TAG).assertEqual(STOP_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0263 end');
    })

    /**
     * @tc.number    : testRecordMethod0264
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0264
     * @tc.desc      : create->init->startRecording->release->stopRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0264', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0264 start');
      await createAVScreenCaptureRecorder();
      await init();
      await startRecording();
      await release();
      await stopRecording();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0264 end');
    })

    /**
     * @tc.number    : testRecordMethod0265
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0265
     * @tc.desc      : create->init->startRecording->release->setMicEnabled->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0265', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0265 start');
      await createAVScreenCaptureRecorder();
      await init();
      await startRecording();
      await release();
      await setMicEnabled();
      await stopRecording();
      expect(STATE_TAG).assertEqual(STOP_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0265 end');
    })

    /**
     * @tc.number    : testRecordMethod0266
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0266
     * @tc.desc      : create->init->stopRecording->startRecording->setMicEnabled->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0266', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0266 start');
      await createAVScreenCaptureRecorder();
      await init();
      await stopRecording();
      await startRecording();
      await setMicEnabled();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0266 end');
    })

    /**
     * @tc.number    : testRecordMethod0267
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0267
     * @tc.desc      : create->init->stopRecording->startRecording->release->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0267', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0267 start');
      await createAVScreenCaptureRecorder();
      await init();
      await stopRecording();
      await startRecording();
      await release();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0267 end');
    })

    /**
     * @tc.number    : testRecordMethod0268
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0268
     * @tc.desc      : create->init->stopRecording->setMicEnabled->startRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0268', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0268 start');
      await createAVScreenCaptureRecorder();
      await init();
      await stopRecording();
      await setMicEnabled();
      await startRecording();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0268 end');
    })

    /**
     * @tc.number    : testRecordMethod0269
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0269
     * @tc.desc      : create->init->stopRecording->setMicEnabled->release->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0269', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0269 start');
      await createAVScreenCaptureRecorder();
      await init();
      await stopRecording();
      await setMicEnabled();
      await release();
      await startRecording();
      expect(STATE_TAG).assertEqual(START_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0269 end');
    })

    /**
     * @tc.number    : testRecordMethod0270
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0270
     * @tc.desc      : create->init->stopRecording->release->setMicEnabled->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0270', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0270 start');
      await createAVScreenCaptureRecorder();
      await init();
      await stopRecording();
      await release();
      await setMicEnabled();
      await startRecording();
      expect(STATE_TAG).assertEqual(START_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0270 end');
    })

    /**
     * @tc.number    : testRecordMethod0271
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0271
     * @tc.desc      : create->init->stopRecording->release->startRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0271', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0271 start');
      await createAVScreenCaptureRecorder();
      await init();
      await stopRecording();
      await release();
      await startRecording();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0271 end');
    })

    /**
     * @tc.number    : testRecordMethod0272
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0272
     * @tc.desc      : create->init->setMicEnabled->startRecording->stopRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0272', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0272 start');
      await createAVScreenCaptureRecorder();
      await init();
      await setMicEnabled();
      await startRecording();
      await stopRecording();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0272 end');
    })

    /**
     * @tc.number    : testRecordMethod0273
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0273
     * @tc.desc      : create->init->setMicEnabled->startRecording->release->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0273', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0273 start');
      await createAVScreenCaptureRecorder();
      await init();
      await setMicEnabled();
      await startRecording();
      await release();
      await stopRecording();
      expect(STATE_TAG).assertEqual(STOP_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0273 end');
    })

    /**
     * @tc.number    : testRecordMethod0274
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0274
     * @tc.desc      : create->init->setMicEnabled->release->startRecording->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0274', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0274 start');
      await createAVScreenCaptureRecorder();
      await init();
      await setMicEnabled();
      await release();
      await startRecording();
      await stopRecording();
      expect(STATE_TAG).assertEqual(STOP_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0274 end');
    })

    /**
     * @tc.number    : testRecordMethod0275
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0275
     * @tc.desc      : create->init->setMicEnabled->release->stopRecording->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0275', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0275 start');
      await createAVScreenCaptureRecorder();
      await init();
      await setMicEnabled();
      await release();
      await stopRecording();
      await startRecording();
      expect(STATE_TAG).assertEqual(START_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0275 end');
    })

    /**
     * @tc.number    : testRecordMethod0276
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0276
     * @tc.desc      : create->init->setMicEnabled->stopRecording->release->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0276', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0276 start');
      await createAVScreenCaptureRecorder();
      await init();
      await setMicEnabled();
      await stopRecording();
      await release();
      await startRecording();
      expect(STATE_TAG).assertEqual(START_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0276 end');
    })

    /**
     * @tc.number    : testRecordMethod0277
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0277
     * @tc.desc      : create->init->setMicEnabled->stopRecording->startRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0277', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0277 start');
      await createAVScreenCaptureRecorder();
      await init();
      await setMicEnabled();
      await stopRecording();
      await startRecording();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0277 end');
    })

    /**
     * @tc.number    : testRecordMethod0278
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0278
     * @tc.desc      : create->init->release->startRecording->stopRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0278', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0278 start');
      await createAVScreenCaptureRecorder();
      await init();
      await release();
      await startRecording();
      await stopRecording();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0278 end');
    })

    /**
     * @tc.number    : testRecordMethod0279
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0279
     * @tc.desc      : create->init->release->startRecording->setMicEnabled->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0279', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0279 start');
      await createAVScreenCaptureRecorder();
      await init();
      await release();
      await startRecording();
      await setMicEnabled();
      await stopRecording();
      expect(STATE_TAG).assertEqual(STOP_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0279 end');
    })

    /**
     * @tc.number    : testRecordMethod0280
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0280
     * @tc.desc      : create->init->release->setMicEnabled->startRecording->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0280', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0280 start');
      await createAVScreenCaptureRecorder();
      await init();
      await release();
      await setMicEnabled();
      await startRecording();
      await stopRecording();
      expect(STATE_TAG).assertEqual(STOP_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0280 end');
    })

    /**
     * @tc.number    : testRecordMethod0281
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0281
     * @tc.desc      : create->init->release->setMicEnabled->stopRecording->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0281', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0281 start');
      await createAVScreenCaptureRecorder();
      await init();
      await release();
      await setMicEnabled();
      await stopRecording();
      await startRecording();
      expect(STATE_TAG).assertEqual(START_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0281 end');
    })

    /**
     * @tc.number    : testRecordMethod0282
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0282
     * @tc.desc      : create->init->release->startRecording->setMicEnabled->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0282', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0282 start');
      await createAVScreenCaptureRecorder();
      await init();
      await release();
      await startRecording();
      await setMicEnabled();
      await stopRecording();
      expect(STATE_TAG).assertEqual(STOP_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0282 end');
    })

    /**
     * @tc.number    : testRecordMethod0283
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0283
     * @tc.desc      : create->init->release->startRecording->stopRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0283', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0283 start');
      await createAVScreenCaptureRecorder();
      await init();
      await release();
      await startRecording();
      await stopRecording();
      await setMicEnabled();
      expect(STATE_TAG).assertEqual(SET_MIC_ENABLE_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0283 end');
    })

    /**
     * @tc.number    : testRecordMethod0284
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0284
     * @tc.desc      : create->startRecording->init->stopRecording->setMicEnabled->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0284', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0284 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await init();
      await stopRecording();
      await setMicEnabled();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0284 end');
    })

    /**
     * @tc.number    : testRecordMethod0285
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0285
     * @tc.desc      : create->startRecording->init->stopRecording->release->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0285', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0285 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await init();
      await stopRecording();
      await release();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0285 end');
    })

    /**
     * @tc.number    : testRecordMethod0286
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0286
     * @tc.desc      : create->startRecording->init->setMicEnabled->stopRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0286', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0286 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await init();
      await setMicEnabled();
      await stopRecording();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0286 end');
    })

    /**
     * @tc.number    : testRecordMethod0287
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0287
     * @tc.desc      : create->startRecording->init->setMicEnabled->release->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0287', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0287 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await init();
      await setMicEnabled();
      await release();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0287 end');
    })

    /**
     * @tc.number    : testRecordMethod0288
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0288
     * @tc.desc      : create->startRecording->init->release->setMicEnabled->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0288', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0288 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await init();
      await release();
      await setMicEnabled();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0288 end');
    })

    /**
     * @tc.number    : testRecordMethod0289
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0289
     * @tc.desc      : create->startRecording->init->release->stopRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0289', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0289 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await init();
      await release();
      await stopRecording();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0289 end');
    })

    /**
     * @tc.number    : testRecordMethod0290
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0290
     * @tc.desc      : create->startRecording->stopRecording->init->setMicEnabled->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0290', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0290 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await stopRecording();
      await init();
      await setMicEnabled();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0290 end');
    })

    /**
     * @tc.number    : testRecordMethod0291
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0291
     * @tc.desc      : create->startRecording->stopRecording->init->release->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0291', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0291 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await stopRecording();
      await init();
      await release();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0291 end');
    })

    /**
     * @tc.number    : testRecordMethod0292
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0292
     * @tc.desc      : create->startRecording->stopRecording->setMicEnabled->release->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0292', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0292 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await stopRecording();
      await setMicEnabled();
      await release();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0292 end');
    })

    /**
     * @tc.number    : testRecordMethod0293
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0293
     * @tc.desc      : create->startRecording->stopRecording->setMicEnabled->init->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0293', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0293 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await stopRecording();
      await setMicEnabled();
      await init();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0293 end');
    })

    /**
     * @tc.number    : testRecordMethod0294
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0294
     * @tc.desc      : create->startRecording->stopRecording->release->setMicEnabled->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0294', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0294 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await stopRecording();
      await release();
      await setMicEnabled();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0294 end');
    })

    /**
     * @tc.number    : testRecordMethod0295
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0295
     * @tc.desc      : create->startRecording->stopRecording->release->init->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0295', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0295 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await stopRecording();
      await release();
      await init();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0295 end');
    })

    /**
     * @tc.number    : testRecordMethod0296
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0296
     * @tc.desc      : create->startRecording->setMicEnabled->stopRecording->init->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0296', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0296 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await setMicEnabled();
      await stopRecording();
      await init();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0296 end');
    })

    /**
     * @tc.number    : testRecordMethod0297
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0297
     * @tc.desc      : create->startRecording->setMicEnabled->stopRecording->release->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0297', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0297 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await setMicEnabled();
      await stopRecording();
      await release();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0297 end');
    })

    /**
     * @tc.number    : testRecordMethod0298
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0298
     * @tc.desc      : create->startRecording->setMicEnabled->release->init->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0298', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0298 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await setMicEnabled();
      await release();
      await init();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0298 end');
    })

    /**
     * @tc.number    : testRecordMethod0299
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0299
     * @tc.desc      : create->startRecording->setMicEnabled->release->stopRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0299', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0299 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await setMicEnabled();
      await release();
      await stopRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0299 end');
    })

    /**
     * @tc.number    : testRecordMethod0300
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0300
     * @tc.desc      : create->startRecording->setMicEnabled->init->release->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0300', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0300 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await setMicEnabled();
      await init();
      await release();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0300 end');
    })

    /**
     * @tc.number    : testRecordMethod0301
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0301
     * @tc.desc      : create->startRecording->setMicEnabled->init->stopRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0301', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0301 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await setMicEnabled();
      await init();
      await stopRecording();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0301 end');
    })

    /**
     * @tc.number    : testRecordMethod0302
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0302
     * @tc.desc      : create->startRecording->release->init->stopRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0302', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0302 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await release();
      await init();
      await stopRecording();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0302 end');
    })

    /**
     * @tc.number    : testRecordMethod0303
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0303
     * @tc.desc      : create->startRecording->release->init->setMicEnabled->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0303', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0303 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await release();
      await init();
      await setMicEnabled();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0303 end');
    })

    /**
     * @tc.number    : testRecordMethod0304
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0304
     * @tc.desc      : create->startRecording->release->stopRecording->init->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0304', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0304 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await release();
      await stopRecording();
      await init();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0304 end');
    })

    /**
     * @tc.number    : testRecordMethod0305
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0305
     * @tc.desc      : create->startRecording->release->stopRecording->setMicEnabled->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0305', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0305 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await release();
      await stopRecording();
      await setMicEnabled();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0305 end');
    })

    /**
     * @tc.number    : testRecordMethod0306
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0306
     * @tc.desc      : create->startRecording->release->setMicEnabled->stopRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0306', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0306 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await release();
      await setMicEnabled();
      await stopRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0306 end');
    })

    /**
     * @tc.number    : testRecordMethod0307
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0307
     * @tc.desc      : create->startRecording->release->setMicEnabled->init->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0307', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0307 start');
      await createAVScreenCaptureRecorder();
      await startRecording();
      await release();
      await setMicEnabled();
      await init();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0307 end');
    })

    /**
     * @tc.number    : testRecordMethod0308
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0308
     * @tc.desc      : create->stopRecording->init->startRecording->setMicEnabled->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0308', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0308 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await init();
      await startRecording();
      await setMicEnabled();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0308 end');
    })

    /**
     * @tc.number    : testRecordMethod0309
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0309
     * @tc.desc      : create->stopRecording->init->startRecording->release->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0309', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0309 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await init();
      await startRecording();
      await release();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0309 end');
    })

    /**
     * @tc.number    : testRecordMethod0310
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0310
     * @tc.desc      : create->stopRecording->init->setMicEnabled->startRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0310', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0310 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await init();
      await setMicEnabled();
      await startRecording();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0310 end');
    })

    /**
     * @tc.number    : testRecordMethod0311
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0311
     * @tc.desc      : create->stopRecording->init->setMicEnabled->release->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0311', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0311 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await init();
      await setMicEnabled();
      await release();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0311 end');
    })

    /**
     * @tc.number    : testRecordMethod0312
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0312
     * @tc.desc      : create->stopRecording->init->release->setMicEnabled->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0312', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0312 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await init();
      await release();
      await setMicEnabled();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0312 end');
    })

    /**
     * @tc.number    : testRecordMethod0313
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0313
     * @tc.desc      : create->stopRecording->init->release->startRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0313', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0313 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await init();
      await release();
      await startRecording();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0313 end');
    })

    /**
     * @tc.number    : testRecordMethod0314
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0314
     * @tc.desc      : create->stopRecording->init->release->startRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0314', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0314 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await init();
      await release();
      await startRecording();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0314 end');
    })

    /**
     * @tc.number    : testRecordMethod0315
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0315
     * @tc.desc      : create->stopRecording->setMicEnabled->release->startRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0315', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0315 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await setMicEnabled();
      await release();
      await startRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0315 end');
    })

    /**
     * @tc.number    : testRecordMethod0316
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0316
     * @tc.desc      : create->stopRecording->setMicEnabled->release->init->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0316', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0316 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await setMicEnabled();
      await release();
      await init();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0316 end');
    })

    /**
     * @tc.number    : testRecordMethod0317
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0317
     * @tc.desc      : create->stopRecording->setMicEnabled->init->startRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0317', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0317 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await setMicEnabled();
      await init();
      await startRecording();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0317 end');
    })

    /**
     * @tc.number    : testRecordMethod0318
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0318
     * @tc.desc      : create->stopRecording->setMicEnabled->init->release->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0318', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0318 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await setMicEnabled();
      await init();
      await release();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0318 end');
    })

    /**
     * @tc.number    : testRecordMethod0319
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0319
     * @tc.desc      : create->stopRecording->setMicEnabled->startRecording->init->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0319', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0319 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await setMicEnabled();
      await startRecording();
      await init();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0319 end');
    })

    /**
     * @tc.number    : testRecordMethod0320
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0320
     * @tc.desc      : create->stopRecording->setMicEnabled->startRecording->release->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0320', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0320 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await setMicEnabled();
      await startRecording();
      await release();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0320 end');
    })

    /**
     * @tc.number    : testRecordMethod0321
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0321
     * @tc.desc      : create->stopRecording->startRecording->setMicEnabled->release->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0321', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0321 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await startRecording();
      await setMicEnabled();
      await release();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0321 end');
    })

    /**
     * @tc.number    : testRecordMethod0322
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0322
     * @tc.desc      : create->stopRecording->startRecording->setMicEnabled->init->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0322', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0322 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await startRecording();
      await setMicEnabled();
      await init();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0322 end');
    })

    /**
     * @tc.number    : testRecordMethod0323
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0323
     * @tc.desc      : create->stopRecording->startRecording->release->setMicEnabled->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0323', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0323 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await startRecording();
      await release();
      await setMicEnabled();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0323 end');
    })

    /**
     * @tc.number    : testRecordMethod0324
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0324
     * @tc.desc      : create->stopRecording->startRecording->release->init->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0324', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0324 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await startRecording();
      await release();
      await init();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0324 end');
    })

    /**
     * @tc.number    : testRecordMethod0325
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0325
     * @tc.desc      : create->stopRecording->startRecording->init->release->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0325', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0325 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await startRecording();
      await init();
      await release();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0325 end');
    })

    /**
     * @tc.number    : testRecordMethod0326
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0326
     * @tc.desc      : create->stopRecording->startRecording->init->setMicEnabled->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0326', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0326 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await startRecording();
      await init();
      await setMicEnabled();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0326 end');
    })

    /**
     * @tc.number    : testRecordMethod0327
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0327
     * @tc.desc      : create->stopRecording->release->startRecording->init->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0327', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0327 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await release();
      await startRecording();
      await init();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0327 end');
    })

    /**
     * @tc.number    : testRecordMethod0328
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0328
     * @tc.desc      : create->stopRecording->release->startRecording->setMicEnabled->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0328', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0328 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await release();
      await startRecording();
      await setMicEnabled();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0328 end');
    })

    /**
     * @tc.number    : testRecordMethod0329
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0329
     * @tc.desc      : create->stopRecording->release->init->startRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0329', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0329 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await release();
      await init();
      await startRecording();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0329 end');
    })

    /**
     * @tc.number    : testRecordMethod0330
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0330
     * @tc.desc      : create->stopRecording->release->init->setMicEnabled->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0330', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0330 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await release();
      await init();
      await setMicEnabled();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0330 end');
    })

    /**
     * @tc.number    : testRecordMethod0331
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0331
     * @tc.desc      : create->stopRecording->release->setMicEnabled->init->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0331', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0331 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await release();
      await setMicEnabled();
      await init();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0331 end');
    })

    /**
     * @tc.number    : testRecordMethod0332
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0332
     * @tc.desc      : create->stopRecording->release->setMicEnabled->startRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0332', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0332 start');
      await createAVScreenCaptureRecorder();
      await stopRecording();
      await release();
      await setMicEnabled();
      await startRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0332 end');
    })

    /**
     * @tc.number    : testRecordMethod0333
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0333
     * @tc.desc      : create->setMicEnabled->stopRecording->init->startRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0333', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0333 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await stopRecording();
      await init();
      await startRecording();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0333 end');
    })

    /**
     * @tc.number    : testRecordMethod0334
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0334
     * @tc.desc      : create->setMicEnabled->stopRecording->init->release->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0334', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0334 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await stopRecording();
      await init();
      await release();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0334 end');
    })

    /**
     * @tc.number    : testRecordMethod0335
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0335
     * @tc.desc      : create->setMicEnabled->stopRecording->startRecording->init->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0335', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0335 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await stopRecording();
      await startRecording();
      await init();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0335 end');
    })

    /**
     * @tc.number    : testRecordMethod0336
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0336
     * @tc.desc      : create->setMicEnabled->stopRecording->startRecording->release->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0336', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0336 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await stopRecording();
      await startRecording();
      await release();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0336 end');
    })

    /**
     * @tc.number    : testRecordMethod0337
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0337
     * @tc.desc      : create->setMicEnabled->stopRecording->release->startRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0337', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0337 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await stopRecording();
      await release();
      await startRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0337 end');
    })

    /**
     * @tc.number    : testRecordMethod0338
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0338
     * @tc.desc      : create->setMicEnabled->stopRecording->release->init->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0338', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0338 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await stopRecording();
      await release();
      await init();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0338 end');
    })

    /**
     * @tc.number    : testRecordMethod0339
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0339
     * @tc.desc      : create->setMicEnabled->startRecording->stopRecording->init->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0339', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0339 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await startRecording();
      await stopRecording();
      await init();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0339 end');
    })

    /**
     * @tc.number    : testRecordMethod0340
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0340
     * @tc.desc      : create->setMicEnabled->startRecording->stopRecording->release->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0340', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0340 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await startRecording();
      await stopRecording();
      await release();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0340 end');
    })

    /**
     * @tc.number    : testRecordMethod0341
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0341
     * @tc.desc      : create->setMicEnabled->startRecording->init->stopRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0341', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0341 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await startRecording();
      await init();
      await stopRecording();
      await release();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0341 end');
    })

    /**
     * @tc.number    : testRecordMethod0342
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0342
     * @tc.desc      : create->setMicEnabled->startRecording->init->release->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0342', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0342 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await startRecording();
      await init();
      await release();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0342 end');
    })

    /**
     * @tc.number    : testRecordMethod0343
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0343
     * @tc.desc      : create->setMicEnabled->startRecording->release->init->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0343', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0343 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await startRecording();
      await release();
      await init();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0343 end');
    })

    /**
     * @tc.number    : testRecordMethod0344
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0344
     * @tc.desc      : create->setMicEnabled->startRecording->release->stopRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0344', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0344 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await startRecording();
      await release();
      await stopRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0344 end');
    })

    /**
     * @tc.number    : testRecordMethod0345
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0345
     * @tc.desc      : create->setMicEnabled->release->stopRecording->init->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0345', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0345 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await release();
      await stopRecording();
      await init();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0345 end');
    })

    /**
     * @tc.number    : testRecordMethod0346
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0346
     * @tc.desc      : create->setMicEnabled->release->stopRecording->startRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0346', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0346 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await release();
      await stopRecording();
      await startRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0346 end');
    })

    /**
     * @tc.number    : testRecordMethod0347
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0347
     * @tc.desc      : create->setMicEnabled->release->init->stopRecording->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0347', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0347 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await release();
      await init();
      await stopRecording();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0347 end');
    })

    /**
     * @tc.number    : testRecordMethod0348
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0348
     * @tc.desc      : create->setMicEnabled->release->init->startRecording->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0348', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0348 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await release();
      await init();
      await startRecording();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0348 end');
    })

    /**
     * @tc.number    : testRecordMethod0349
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0349
     * @tc.desc      : create->setMicEnabled->release->startRecording->init->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0349', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0349 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await release();
      await startRecording();
      await init();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0349 end')
    })

    /**
     * @tc.number    : testRecordMethod0350
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0350
     * @tc.desc      : create->setMicEnabled->release->startRecording->stopRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0350', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0350 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await release();
      await startRecording();
      await stopRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0350 end');
    })

    /**
     * @tc.number    : testRecordMethod0351
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0351
     * @tc.desc      : create->setMicEnabled->init->release->startRecording->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0351', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0351 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await init();
      await release();
      await startRecording();
      await stopRecording();
      expect(STATE_TAG).assertEqual(STOP_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0351 end');
    })

    /**
     * @tc.number    : testRecordMethod0352
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0352
     * @tc.desc      : create->setMicEnabled->init->release->stopRecording->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0352', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0352 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await init();
      await release();
      await stopRecording();
      await startRecording();
      expect(STATE_TAG).assertEqual(START_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0352 end');
    })

    /**
     * @tc.number    : testRecordMethod0353
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0353
     * @tc.desc      : create->setMicEnabled->init->startRecording->release->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0353', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0353 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await init();
      await startRecording();
      await release();
      await stopRecording();
      expect(STATE_TAG).assertEqual(STOP_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0353 end');
    })

    /**
     * @tc.number    : testRecordMethod0354
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0354
     * @tc.desc      : create->setMicEnabled->init->startRecording->stopRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0354', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0354 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await init();
      await startRecording();
      await stopRecording();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0354 end');
    })

    /**
     * @tc.number    : testRecordMethod0355
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0355
     * @tc.desc      : create->setMicEnabled->init->stopRecording->startRecording->release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0355', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0355 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await init();
      await stopRecording();
      await startRecording();
      await release();
      expect(STATE_TAG).assertEqual(RELEASE_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0355 end');
    })

    /**
     * @tc.number    : testRecordMethod0356
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0356
     * @tc.desc      : create->setMicEnabled->init->stopRecording->release->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0356', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0356 start');
      await createAVScreenCaptureRecorder();
      await setMicEnabled();
      await init();
      await stopRecording();
      await release();
      await startRecording();
      expect(STATE_TAG).assertEqual(START_RECORDER_EVENT);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0356 end');
    })

    /**
     * @tc.number    : testRecordMethod0357
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0357
     * @tc.desc      : create->release->setMicEnabled->stopRecording->init->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0357', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0357 start');
      await createAVScreenCaptureRecorder();
      await release();
      await setMicEnabled();
      await stopRecording();
      await init();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0357 end');
    })

    /**
     * @tc.number    : testRecordMethod0358
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0358
     * @tc.desc      : create->release->setMicEnabled->stopRecording->startRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0358', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0358 start');
      await createAVScreenCaptureRecorder();
      await release();
      await setMicEnabled();
      await stopRecording();
      await startRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0358 end');
    })

    /**
     * @tc.number    : testRecordMethod0359
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0359
     * @tc.desc      : create->release->setMicEnabled->init->stopRecording->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0359', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0359 start');
      await createAVScreenCaptureRecorder();
      await release();
      await setMicEnabled();
      await init();
      await stopRecording();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0359 end');
    })

    /**
     * @tc.number    : testRecordMethod0360
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0360
     * @tc.desc      : create->release->setMicEnabled->init->startRecording->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0360', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0360 start');
      await createAVScreenCaptureRecorder();
      await release();
      await setMicEnabled();
      await init();
      await startRecording();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0360 end');
    })

    /**
     * @tc.number    : testRecordMethod0361
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0361
     * @tc.desc      : create->release->setMicEnabled->startRecording->init->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0361', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0361 start');
      await createAVScreenCaptureRecorder();
      await release();
      await setMicEnabled();
      await startRecording();
      await init();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0361 end');
    })

    /**
     * @tc.number    : testRecordMethod0362
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0362
     * @tc.desc      : create->release->setMicEnabled->startRecording->stopRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0362', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0362 start');
      await createAVScreenCaptureRecorder();
      await release();
      await setMicEnabled();
      await startRecording();
      await stopRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0362 end');
    })

    /**
     * @tc.number    : testRecordMethod0363
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0363
     * @tc.desc      : create->release->startRecording->setMicEnabled->stopRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0363', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0363 start');
      await createAVScreenCaptureRecorder();
      await release();
      await startRecording();
      await setMicEnabled();
      await stopRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0363 end');
    })

    /**
     * @tc.number    : testRecordMethod0364
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0364
     * @tc.desc      : create->release->startRecording->setMicEnabled->init->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0364', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0364 start');
      await createAVScreenCaptureRecorder();
      await release();
      await startRecording();
      await setMicEnabled();
      await init();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0364 end');
    })

    /**
     * @tc.number    : testRecordMethod0365
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0365
     * @tc.desc      : create->release->startRecording->stopRecording->setMicEnabled->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0365', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0365 start');
      await createAVScreenCaptureRecorder();
      await release();
      await startRecording();
      await stopRecording();
      await setMicEnabled();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0365 end');
    })

    /**
     * @tc.number    : testRecordMethod0366
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0366
     * @tc.desc      : create->release->startRecording->stopRecording->init->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0366', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0366 start');
      await createAVScreenCaptureRecorder();
      await release();
      await startRecording();
      await stopRecording();
      await init();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0366 end');
    })

    /**
     * @tc.number    : testRecordMethod0367
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0367
     * @tc.desc      : create->release->startRecording->init->stopRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0367', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0367 start');
      await createAVScreenCaptureRecorder();
      await release();
      await startRecording();
      await init();
      await stopRecording();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0367 end');
    })

    /**
     * @tc.number    : testRecordMethod0368
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0368
     * @tc.desc      : create->release->startRecording->init->setMicEnabled->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0368', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0368 start');
      await createAVScreenCaptureRecorder();
      await release();
      await startRecording();
      await init();
      await setMicEnabled();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0368 end');
    })

    /**
     * @tc.number    : testRecordMethod0369
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0369
     * @tc.desc      : create->release->stopRecording->startRecording->init->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0369', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0369 start');
      await createAVScreenCaptureRecorder();
      await release();
      await stopRecording();
      await startRecording();
      await init();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0369 end');
    })

    /**
     * @tc.number    : testRecordMethod0370
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0370
     * @tc.desc      : create->release->stopRecording->startRecording->setMicEnabled->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0370', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0370 start');
      await createAVScreenCaptureRecorder();
      await release();
      await stopRecording();
      await startRecording();
      await setMicEnabled();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0370 end');
    })

    /**
     * @tc.number    : testRecordMethod0371
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0371
     * @tc.desc      : create->release->stopRecording->init->startRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0371', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0371 start');
      await createAVScreenCaptureRecorder();
      await release();
      await stopRecording();
      await init();
      await startRecording();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0371 end');
    })

    /**
     * @tc.number    : testRecordMethod0372
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0372
     * @tc.desc      : create->release->stopRecording->init->setMicEnabled->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0372', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0372 start');
      await createAVScreenCaptureRecorder();
      await release();
      await stopRecording();
      await init();
      await setMicEnabled();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0372 end');
    })

    /**
     * @tc.number    : testRecordMethod0373
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0373
     * @tc.desc      : create->release->stopRecording->setMicEnabled->init->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0373', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0373 start');
      await createAVScreenCaptureRecorder();
      await release();
      await stopRecording();
      await setMicEnabled();
      await init();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0373 end');
    })

    /**
     * @tc.number    : testRecordMethod0374
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0374
     * @tc.desc      : create->release->stopRecording->setMicEnabled->startRecording->init
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0374', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0374 start');
      await createAVScreenCaptureRecorder();
      await release();
      await stopRecording();
      await setMicEnabled();
      await startRecording();
      await init();
      expect(errorCode).assertEqual(ERROR_INVALID_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0374 end');
    })

    /**
     * @tc.number    : testRecordMethod0375
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0375
     * @tc.desc      : create->release->init->stopRecording->setMicEnabled->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0375', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0375 start');
      await createAVScreenCaptureRecorder();
      await release();
      await init();
      await stopRecording();
      await setMicEnabled();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0375 end');
    })

    /**
     * @tc.number    : testRecordMethod0376
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0376
     * @tc.desc      : create->release->init->stopRecording->startRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0376', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0376 start');
      await createAVScreenCaptureRecorder();
      await release();
      await init();
      await stopRecording();
      await startRecording();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0376 end');
    })

    /**
     * @tc.number    : testRecordMethod0377
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0377
     * @tc.desc      : create->release->init->setMicEnabled->stopRecording->startRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0377', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0377 start');
      await createAVScreenCaptureRecorder();
      await release();
      await init();
      await setMicEnabled();
      await stopRecording();
      await startRecording();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0377 end');
    })

    /**
     * @tc.number    : testRecordMethod0378
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0378
     * @tc.desc      : create->release->init->setMicEnabled->startRecording->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0378', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0378 start');
      await createAVScreenCaptureRecorder();
      await release();
      await init();
      await setMicEnabled();
      await startRecording();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0378 end');
    })

    /**
     * @tc.number    : testRecordMethod0379
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0379
     * @tc.desc      : create->release->init->startRecording->setMicEnabled->stopRecording
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0379', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0379 start');
      await createAVScreenCaptureRecorder();
      await release();
      await init();
      await startRecording();
      await setMicEnabled();
      await stopRecording();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0379 end');
    })

    /**
     * @tc.number    : testRecordMethod0380
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0380
     * @tc.desc      : create->release->init->startRecording->stopRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0380', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0380 start');
      await createAVScreenCaptureRecorder();
      await release();
      await init();
      await startRecording();
      await stopRecording();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0380 end');
    })

    /**
     * @tc.number    : testRecordMethod0381
     * @tc.name      : SUB_MULTIMEDIA_RECORD_METHOD_0381
     * @tc.desc      : create->release->init->startRecording->stopRecording->setMicEnabled
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_METHOD_0381', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0381 start')
      await createAVScreenCaptureRecorder();
      await release();
      await init();
      await startRecording();
      await stopRecording();
      await setMicEnabled();
      expect(errorCode).assertEqual(ERROR_ORDER_VALUE);
      done();
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_METHOD_0381 end')
    })
  })
}