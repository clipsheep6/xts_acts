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
import Want from '@ohos.app.ability.Want';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import { Driver, MatchPattern,ON } from '@ohos.UiTest';

let TAG = "AVSCaptureRecordStateCodeTest ";

const FRAME_WIDTH : number = 480;
const FRAME_HEIGHT : number = 640;
const VIDEO_BITRATE : number = 10000000;
const AUDIO_SAMPLE_RATE : number = 48000;
const AUDIO_CHANNEL_COUNT : number = 2;
const AUDIO_BITRATE : number = 96000;
const DELAY_TIME_5000 : number = 5000;
const DELAY_TIME_1000 : number = 1000;
const DELAY_TIME_3000 : number = 3000;
const INIT_STATECODE : number = -1;
const TEXT_ALLOW : string = '允许';
const TEXT_REFUSE : string = '禁止';
const BUTTON_POINT_X1 : number = 189;
const BUTTON_POINT_Y1 : number = 48;
const BUTTON_POINT_X2 : number = 1055;
const BUTTON_POINT_Y2 : number = 259;

// 录屏已开始
const SCREENCAPTURE_STATE_STARTED : media.AVScreenCaptureStateCode = 0;
// 录屏被取消
const SCREENCAPTURE_STATE_CANCELED : media.AVScreenCaptureStateCode = 1;
// 录屏被用户手动停止
const SCREENCAPTURE_STATE_STOPPED_BY_USER : media.AVScreenCaptureStateCode = 2;
// 录屏无法使用麦克风收音
const SCREENCAPTURE_STATE_MIC_UNAVAILABLE : media.AVScreenCaptureStateCode = 5;
// 麦克风被用户关闭
const SCREENCAPTURE_STATE_MIC_MUTED_BY_USER : media.AVScreenCaptureStateCode = 6;
// 麦克风被用户打开
const SCREENCAPTURE_STATE_MIC_UNMUTED_BY_USER : media.AVScreenCaptureStateCode = 7;

let fileDir: string | undefined;
let fileFd : number;
let stateCode: media.AVScreenCaptureStateCode;
let avScreenCaptureRecorder: media.AVScreenCaptureRecorder;
let recorder : boolean = false;

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

async function clickButton(text: string) {
  console.info(`${TAG}, into clickAllowButton:`);
  let driver = Driver.create();
  await sleep(DELAY_TIME_1000);
  let button = await driver.findComponent(ON.text(text, MatchPattern.EQUALS));
  if (button != undefined) {
    await button?.click();
  }
  sleep(DELAY_TIME_1000);
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

async function startRecording() {
  console.info(`${TAG}, into startRecording:`);
  if (avScreenCaptureRecorder == null) {
    avScreenCaptureRecorder = await media.createAVScreenCaptureRecorder();
  }
  try {
    await avScreenCaptureRecorder.startRecording();
    console.info(`${TAG}, Succeeded in starting avScreenCaptureRecorder`);
  } catch (error) {
    console.error(`${TAG}, Failed to start avScreenCaptureRecorder, error: ${JSON.stringify(error)}`);
  }
}

async function setMicEnabled(enable : boolean) {
  console.info(`${TAG}, into setMicEnabled:`);
  if (avScreenCaptureRecorder == null) {
    avScreenCaptureRecorder = await media.createAVScreenCaptureRecorder();
  }
  try {
    await avScreenCaptureRecorder.setMicEnabled(enable);
    console.info(`${TAG}, Succeeded in setMicEnabled avScreenCaptureRecorder`);
  } catch (error) {
    console.error(`${TAG}, Failed to setMicEnabled avScreenCaptureRecorder, error: ${JSON.stringify(error)}`);
  }
}

export default function AVSCaptureRecordStateCodeTest() {
  describe('AVSCaptureRecordStateCodeTest', () => {
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
    beforeEach(async () => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
      console.info(`${TAG}, into beforeEach:`);
      avScreenCaptureRecorder = await media.createAVScreenCaptureRecorder();
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
      await avScreenCaptureRecorder.init(avCaptureConfig);
      stateCode = INIT_STATECODE;
      recorder = false;
      await avScreenCaptureRecorder.on('stateChange', (state: media.AVScreenCaptureStateCode) => {
        console.info(`${TAG}, avScreenCaptureRecorder stateChange to state: ${state}`);
        if (recorder) {
          if (stateCode === INIT_STATECODE) {
            stateCode = state;
          }
          return;
        }
        stateCode = state;
      })

    })
    afterEach( async() => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
      console.info(`${TAG}, into afterEach:`);
      if (avScreenCaptureRecorder !== null) {
        await avScreenCaptureRecorder.release();
        avScreenCaptureRecorder == null;
      }
      await sleep(DELAY_TIME_1000);
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })

    /**
     * @tc.number    : testRecordStateCode0100
     * @tc.name      : SUB_MULTIMEDIA_RECORD_STATE_CODE_0100
     * @tc.desc      : 录屏开始
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_STATE_CODE_0100', 0, async (done: Function) => {
      console.info(`${TAG}, SUB_MULTIMEDIA_RECORD_STATE_CODE_0100 start`);
      await startRecording();
      await sleep(DELAY_TIME_3000);
      await clickButton(TEXT_ALLOW);
      await sleep(DELAY_TIME_3000);
      expect(stateCode).assertEqual(SCREENCAPTURE_STATE_STARTED);
      stateCode = INIT_STATECODE;
      done();
      console.info(`${TAG}, SUB_MULTIMEDIA_RECORD_STATE_CODE_0100 end`);
    })

    /**
     * @tc.number    : testRecordStateCode0101
     * @tc.name      : SUB_MULTIMEDIA_RECORD_STATE_CODE_0101
     * @tc.desc      : 录屏已开始前,取消'stateChange'监听
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_STATE_CODE_0101', 0, async (done: Function) => {
      console.info(`${TAG}, SUB_MULTIMEDIA_RECORD_STATE_CODE_0101 start`);
      await avScreenCaptureRecorder.off('stateChange');
      await startRecording();
      await sleep(DELAY_TIME_3000);
      await clickButton(TEXT_ALLOW);
      await sleep(DELAY_TIME_3000);
      expect(stateCode).assertEqual(INIT_STATECODE);
      stateCode = INIT_STATECODE;
      done();
      console.info(`${TAG}, SUB_MULTIMEDIA_RECORD_STATE_CODE_0101 end`);
    })

    /**
     * @tc.number    : testRecordStateCode0102
     * @tc.name      : SUB_MULTIMEDIA_RECORD_STATE_CODE_0102
     * @tc.desc      : 录屏被取消
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_STATE_CODE_0102', 0, async (done: Function) => {
      console.info(`${TAG}, SUB_MULTIMEDIA_RECORD_STATE_CODE_0102 start`);
      await startRecording();
      await sleep(DELAY_TIME_3000);
      await clickButton(TEXT_REFUSE);
      await sleep(DELAY_TIME_3000);
      expect(stateCode).assertEqual(SCREENCAPTURE_STATE_CANCELED);
      stateCode = INIT_STATECODE;
      done();
      console.info(`${TAG}, SUB_MULTIMEDIA_RECORD_STATE_CODE_0102 end`);
    })

    /**
     * @tc.number    : testRecordStateCode0103
     * @tc.name      : SUB_MULTIMEDIA_RECORD_STATE_CODE_0103
     * @tc.desc      : 录屏被取消前,取消'stateChange'监听
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_STATE_CODE_0103', 0, async (done: Function) => {
      console.info(`${TAG}, SUB_MULTIMEDIA_RECORD_STATE_CODE_0103 start`);
      await avScreenCaptureRecorder.off('stateChange');
      await startRecording();
      await sleep(DELAY_TIME_3000);
      await clickButton(TEXT_REFUSE);
      await sleep(DELAY_TIME_3000);
      expect(stateCode).assertEqual(INIT_STATECODE);
      stateCode = INIT_STATECODE;
      done();
      console.info(`${TAG}, SUB_MULTIMEDIA_RECORD_STATE_CODE_0103 end`);
    })

    /**
     * @tc.number    : testRecordStateCode0104
     * @tc.name      : SUB_MULTIMEDIA_RECORD_STATE_CODE_0104
     * @tc.desc      : 录屏无法使用麦克风收音
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_STATE_CODE_0104', 0, async (done: Function) => {
      console.info(`${TAG}, SUB_MULTIMEDIA_RECORD_STATE_CODE_0104 start`);
      recorder = true;
      await startRecording();
      await sleep(DELAY_TIME_3000);
      await clickButton(TEXT_ALLOW);
      await sleep(DELAY_TIME_3000);
      expect(stateCode).assertEqual(SCREENCAPTURE_STATE_MIC_UNAVAILABLE);
      stateCode = INIT_STATECODE;
      done();
      console.info(`${TAG}, SUB_MULTIMEDIA_RECORD_STATE_CODE_0104 end`);
    })

    /**
     * @tc.number    : testRecordStateCode0105
     * @tc.name      : SUB_MULTIMEDIA_RECORD_STATE_CODE_0105
     * @tc.desc      : 录屏无法使用麦克风收音,取消'stateChange'监听
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_STATE_CODE_0105', 0, async (done: Function) => {
      console.info(`${TAG}, SUB_MULTIMEDIA_RECORD_STATE_CODE_0105 start`);
      recorder = true;
      await avScreenCaptureRecorder.off('stateChange');
      await startRecording();
      await sleep(DELAY_TIME_3000);
      await clickButton(TEXT_ALLOW);
      await sleep(DELAY_TIME_3000);
      expect(stateCode).assertEqual(INIT_STATECODE);
      stateCode = INIT_STATECODE;
      done();
      console.info(`${TAG}, SUB_MULTIMEDIA_RECORD_STATE_CODE_0105 end`);
    })

    /**
     * @tc.number    : testRecordStateCode0106
     * @tc.name      : SUB_MULTIMEDIA_RECORD_STATE_CODE_0106
     * @tc.desc      : 录屏被用户手动停止
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_STATE_CODE_0106', 0, async (done: Function) => {
      console.info(`${TAG}, SUB_MULTIMEDIA_RECORD_STATE_CODE_0106 start`);
      await startRecording();
      await sleep(DELAY_TIME_1000);
      await clickButton(TEXT_ALLOW);
      await sleep(DELAY_TIME_1000);
      let driver = Driver.create();
      await sleep(DELAY_TIME_1000);
      driver.click(BUTTON_POINT_X1, BUTTON_POINT_Y1);
      await sleep(DELAY_TIME_3000);
      driver.click(BUTTON_POINT_X2, BUTTON_POINT_Y2);
      await sleep(DELAY_TIME_5000);
      expect(stateCode).assertEqual(SCREENCAPTURE_STATE_STOPPED_BY_USER);
      stateCode = INIT_STATECODE;
      done();
      console.info(`${TAG}, SUB_MULTIMEDIA_RECORD_STATE_CODE_0106 end`);
    })

    /**
     * @tc.number    : testRecordStateCode0107
     * @tc.name      : SUB_MULTIMEDIA_RECORD_STATE_CODE_0107
     * @tc.desc      : 录屏被用户手动停止,取消'stateChange'监听
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_STATE_CODE_0107', 0, async (done: Function) => {
      console.info(`${TAG}, SUB_MULTIMEDIA_RECORD_STATE_CODE_0107 start`);
      await avScreenCaptureRecorder.off('stateChange');
      await startRecording();
      await sleep(DELAY_TIME_1000);
      await clickButton(TEXT_ALLOW);
      await sleep(DELAY_TIME_1000);
      let driver = Driver.create();
      await sleep(DELAY_TIME_1000);
      driver.click(BUTTON_POINT_X1, BUTTON_POINT_Y1);
      await sleep(DELAY_TIME_3000);
      driver.click(BUTTON_POINT_X2, BUTTON_POINT_Y2);
      await sleep(DELAY_TIME_5000);
      expect(stateCode).assertEqual(INIT_STATECODE);
      stateCode = INIT_STATECODE;
      done();
      console.info(`${TAG}, SUB_MULTIMEDIA_RECORD_STATE_CODE_0107 end`);
    })

    /**
     * @tc.number    : testRecordStateCode0108
     * @tc.name      : SUB_MULTIMEDIA_RECORD_STATE_CODE_0108
     * @tc.desc      : 麦克风被用户关闭
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_STATE_CODE_0108', 0, async (done: Function) => {
      console.info(`${TAG}, SUB_MULTIMEDIA_RECORD_STATE_CODE_0108 start`);
      await setMicEnabled(false);
      expect(stateCode).assertEqual(SCREENCAPTURE_STATE_MIC_MUTED_BY_USER);
      stateCode = INIT_STATECODE;
      done();
      console.info(`${TAG}, SUB_MULTIMEDIA_RECORD_STATE_CODE_0108 end`);
    })

    /**
     * @tc.number    : testRecordStateCode0109
     * @tc.name      : SUB_MULTIMEDIA_RECORD_STATE_CODE_0109
     * @tc.desc      : 麦克风被用户打开
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_STATE_CODE_0109', 0, async (done: Function) => {
      console.info(`${TAG}, SUB_MULTIMEDIA_RECORD_STATE_CODE_0109 start`);
      await setMicEnabled(true);
      expect(stateCode).assertEqual(SCREENCAPTURE_STATE_MIC_UNMUTED_BY_USER);
      stateCode = INIT_STATECODE;
      done();
      console.info(`${TAG}, SUB_MULTIMEDIA_RECORD_STATE_CODE_0109 end`);
    })

  })
}