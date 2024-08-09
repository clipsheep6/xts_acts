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

// Incorrect parameter
const INCORRECT_LONG_NUMERICAL_VALE : number = 123456564565645646;
const INCORRECT_NUMBER_0 : number = 0;
const INCORRECT_NEGATIVE_NUMBER_1 : number = -1;
const INCORRECT_NON_EXISTENT_VALUE : number = 666;
const VIDEO_BITRATE_BOUNDARY_VALUE_0 : number = 10000001;
const VIDEO_BITRATE_BOUNDARY_VALUE_1 : number = 9999999;
const AUDIO_SAMPLE_RATE_VALUE_0 : number = 48001;
const AUDIO_SAMPLE_RATE_VALUE_1 : number = 16001;
const AUDIO_CHANNEL_COUNT_VALUE_0 : number = -2;
const AUDIO_CHANNEL_COUNT_VALUE_1 : number = 3;
const AUDIO_BITRATE_VALUE_0 : number = 96001;
const AUDIO_BITRATE_VALUE_1 : number = 95999;
const INCORRECT_PRESET_VALUE_0 : number = 2;

// Normal parameter
const FRAME_WIDTH : number = 480;
const FRAME_HEIGHT : number = 640;
const VIDEO_BITRATE : number = 10000000;
const AUDIO_SAMPLE_RATE_48 : number = 48000;
const AUDIO_SAMPLE_RATE_16 : number = 16000;
const AUDIO_CHANNEL_COUNT_1 : number = 1;
const AUDIO_CHANNEL_COUNT_2 : number = 2;
const AUDIO_BITRATE : number = 96000;
const DELAY_TIME_5000 : number = 5000;
const DELAY_TIME_1000 : number = 1000;
const PARAMETER_ERROR_CODE : number= 401;
let TAG = 'AVSCaptureRecordConfigTest ';

// 分别校验 AVScreenCaptureRecordConfig 中参数frameWidth,frameHeight,audioSampleRate
let NO_TAG: number = -1;
let WIDTH_TAG: number = 0;
let HEIGHT_TAG: number = 1;
let RATE_TAG: number = 2;
let WIDTH_HEIGHT_TAG: number = 3;
let WIDTH_RATE_TAG: number = 4;
let HEIGHT_RATE_TAG: number = 5;
let WIDTH_HEIGHT_RATE_TAG: number = 6;

let avScreenCaptureRecorder: media.AVScreenCaptureRecorder;
let avCaptureConfig: media.AVScreenCaptureRecordConfig;
let avMetadataExtractor: media.AVMetadataExtractor;
let fileDir: string | undefined;
let fileFd : number;
let frameWidth = 0;
let frameHeight = 0;
let audioSampleRate = 0;

interface Genre {
  sampleRate: string;
  videoHeight: string;
  videoWidth: string;
}

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

async function clickAllowButton() {
  console.info(`${TAG}, into clickAllowButton:`);
  let driver = Driver.create();
  await sleep(DELAY_TIME_1000);
  let button = await driver.findComponent(ON.text('允许', MatchPattern.EQUALS));
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
    abilityName : 'EntryAbility',
  }
  await delegator.startAbility(want);
  await sleep(DELAY_TIME_1000);
}

async function initConfig(config: media.AVScreenCaptureRecordConfig) {
  console.info(`${TAG}, into initConfig:`);
  if (avScreenCaptureRecorder != null) {
    await init(config);
    await startRecording();
  }
}

async function stopRecording() {
  console.info(`${TAG}, into stopRecording`);
  try {
    await avScreenCaptureRecorder.stopRecording().then(() => {
      console.info(`${TAG}, Succeeded in stopping avScreenCaptureRecorder`);
    }).catch((err: BusinessError) => {
      console.error(`${TAG}, Failed to stop avScreenCaptureRecorder, error: ${JSON.stringify(err)}`);
    })
  } catch (error) {
    console.error(`${TAG}, stopRecording error: ${JSON.stringify(error)}`);
  }
}

async function startRecording() {
  console.info(`${TAG}, into startRecording`);
  try {
    await avScreenCaptureRecorder.startRecording().then(async () => {
      console.info(`${TAG}, Succeeded in starting avScreenCaptureRecorder`);
      await clickAllowButton();
      await sleep(DELAY_TIME_5000);
      await stopRecording();
    }).catch((err: BusinessError) => {
      console.error(`${TAG}, Failed to start avScreenCaptureRecorder, error: ${err}`);
    })
  } catch (error) {
    console.error(`${TAG}, startRecording error: ${JSON.stringify(error)}`);
  }
}

async function init(config: media.AVScreenCaptureRecordConfig) {
  console.info(`${TAG}, into init`);
  try {
    await avScreenCaptureRecorder.init(config).then(() => {
      console.info(`${TAG}, Succeeded in initing avScreenCaptureRecorder`);
    }).catch((err: BusinessError) => {
      console.error(`${TAG}, Failed to init avScreenCaptureRecorder, error: ${err}`);
    })
  } catch (error) {
    console.error(`${TAG}, init error: ${JSON.stringify(error)}`);
  }
}

async function avCaptureConfigInitError(methodTag: string, config: media.AVScreenCaptureRecordConfig, done: Function){
  console.info(`${TAG}, ${methodTag}, into avCaptureConfigInitError:`);
  if (avScreenCaptureRecorder == null) {
    avScreenCaptureRecorder = await media.createAVScreenCaptureRecorder();
  }
  try {
    avScreenCaptureRecorder.init(config).then(() => {
      console.error(`${TAG}, ${methodTag}, Succeeded in initing avScreenCaptureRecorder`);
      expect().assertFail();
      done();
    }).catch((err: BusinessError) => {
      console.info(`${TAG}, ${methodTag}, Failed to init avScreenCaptureRecorder error: ${JSON.stringify(err)}`);
      expect(err.code).assertEqual(PARAMETER_ERROR_CODE);
      done();
    })
  } catch (error) {
    console.info(`${TAG}, ${methodTag}, init avScreenCaptureRecorder error: ${JSON.stringify(error)}`);
    expect(error.code).assertEqual(PARAMETER_ERROR_CODE);
    done();
  }
}

async function recordSuccessful(methodTag: string, config: media.AVScreenCaptureRecordConfig, tag: number, done: Function) {
  console.info(`${TAG}, ${methodTag}, into recordSuccessful:`);
  if (avScreenCaptureRecorder == null) {
    avScreenCaptureRecorder = await media.createAVScreenCaptureRecorder();
  }
  if (avMetadataExtractor == null) {
    avMetadataExtractor  = await media.createAVMetadataExtractor();
  }
  try {
    await initConfig(config);
    let width = frameWidth.toString().trim();
    let height = frameHeight.toString().trim();
    let rate = audioSampleRate.toString().trim();
    let temp: boolean = false;
    avMetadataExtractor.fdSrc = { fd: fileFd };
    await avMetadataExtractor.fetchMetadata().then((metadata: media.AVMetadata) => {
      console.info(`${TAG}, Succeeded in fetching Metadata, genre: ${JSON.stringify(metadata)}`);
      let result: string = JSON.stringify(metadata);
      let genre: Genre = JSON.parse(result);
      switch (tag){
        case WIDTH_TAG:
          expect(genre.videoWidth).assertEqual(width);
          break;
        case HEIGHT_TAG:
          expect(genre.videoHeight).assertEqual(height);
          break;
        case RATE_TAG:
          expect(genre.sampleRate).assertEqual(rate);
          break;
        case WIDTH_HEIGHT_TAG:
          if (genre.videoWidth === width && genre.videoHeight === height) {
            temp = true;
          }
          expect(temp).assertTrue();
          break;
        case WIDTH_RATE_TAG:
          if (genre.videoWidth === width && genre.sampleRate === rate) {
            temp = true;
          }
          expect(temp).assertTrue();
          break;
        case HEIGHT_RATE_TAG:
          if (genre.videoHeight === height && genre.sampleRate === rate) {
            temp = true;
          }
          expect(temp).assertTrue();
          break;
        case WIDTH_HEIGHT_RATE_TAG:
          if (genre.videoWidth === width && genre.videoHeight === height && genre.sampleRate === rate) {
            temp = true;
          }
          expect(temp).assertTrue();
          break;
        default :
          expect(true).assertTrue();
          break;
      }
      console.info(`${TAG}, ${methodTag}, Succeeded in over`)
      done();
    }).catch((error: BusinessError) => {
      console.error(`${TAG}, ${methodTag}, Failed to fetch Metadata, error: ${JSON.stringify(error)}`);
      expect().assertFail();
      done();
    });
  } catch (error) {
    console.error(`${TAG}, ${methodTag}, 'fetchMetadata error:  ${JSON.stringify(error)}`);
    expect().assertFail();
    done();
  }
}


export default function AVSCaptureRecordConfigTestTest() {
  describe('AVSCaptureRecordConfigTestTest', () => {
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
      try {
        avScreenCaptureRecorder = await media.createAVScreenCaptureRecorder();
        avMetadataExtractor = await media.createAVMetadataExtractor();
      } catch (error) {
        console.error(TAG, `create avMetadataExtractor avScreenCaptureRecorder error: ${JSON.stringify(error)}`);
      }
      await sleep(DELAY_TIME_1000);
    })
    afterEach(async () => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
      console.info(`${TAG}, into afterEach:`);
      if (avScreenCaptureRecorder != null) {
        avScreenCaptureRecorder.release();
      }
      if (avMetadataExtractor != null) {
        avMetadataExtractor.release();
      }
      await sleep(DELAY_TIME_1000);
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })

    /**
     * @tc.number    : testRecordConfig0100
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0100
     * @tc.desc      : fd is file.id
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0100', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0100 start');
      avCaptureConfig = { fd: fileFd };
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0100', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0100 end');
    })

    /**
     * @tc.number    : testRecordConfig0101
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0101
     * @tc.desc      : fd is file.id,frameWidth is 480
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0101', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0101 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0101', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0101 end')
    })

    /**
     * @tc.number    : testRecordConfig0102
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0102
     * @tc.desc      : fd is file.id,frameHeight is 640
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0102', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0102 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0102', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0102 end');
    })

    /**
     * @tc.number    : testRecordConfig0103
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0103
     * @tc.desc      : fd is file.id,videoBitrate is 10000000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0103', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0103 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0103', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0103 end');
    })

    /**
     * @tc.number    : testRecordConfig0104
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0104
     * @tc.desc      : fd is file.id,audioSampleRate is 48000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0104', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0104 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0104', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0104 end');
    })

    /**
     * @tc.number    : testRecordConfig0105
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0105
     * @tc.desc      : fd is file.id,audioSampleRate is 16000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0105', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0105 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0105', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0105 end');
    })

    /**
     * @tc.number    : testRecordConfig0106
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0106
     * @tc.desc      : fd is file.id,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0106', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0106 start');
      avCaptureConfig = {
        fd: fileFd,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0106', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0106 end');
    })

    /**
     * @tc.number    : testRecordConfig0107
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0107
     * @tc.desc      : fd is file.id,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0107', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0107 start');
      avCaptureConfig = {
        fd: fileFd,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0107', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0107 end');
    })

    /**
     * @tc.number    : testRecordConfig0108
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0108
     * @tc.desc      : fd is file.id,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0108', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0108 start');
      avCaptureConfig = {
        fd: fileFd,
        audioBitrate: AUDIO_BITRATE,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0108', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0108 end');
    })

    /**
     * @tc.number    : testRecordConfig0109
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0109
     * @tc.desc      : fd is file.id,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0109', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0109 start');
      avCaptureConfig = {
        fd: fileFd,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0109', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0109 end');
    })

    /**
     * @tc.number    : testRecordConfig0110
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0110
     * @tc.desc      : fd is file.id,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0110', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0110 start');
      avCaptureConfig = {
        fd: fileFd,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0110', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0110 end');
    })

    /**
     * @tc.number    : testRecordConfig0111
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0111
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0111', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0111 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0111', avCaptureConfig, WIDTH_HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0111 end');
    })

    /**
     * @tc.number    : testRecordConfig0112
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0112
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0112', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0112 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0112', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0112 end');
    })

    /**
     * @tc.number    : testRecordConfig0113
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0113
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 48000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0113', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0113 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0113', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0113 end');
    })

    /**
     * @tc.number    : testRecordConfig0114
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0114
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 16000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0114', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0114 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0114', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0114 end');
    })

    /**
     * @tc.number    : testRecordConfig0115
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0115
     * @tc.desc      : fd is file.id,frameWidth is 480,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0115', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0115 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0115', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0115 end');
    })

    /**
     * @tc.number    : testRecordConfig0116
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0116
     * @tc.desc      : fd is file.id,frameWidth is 480,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0116', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0116 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0116', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0116 end');
    })

    /**
     * @tc.number    : testRecordConfig0117
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0117
     * @tc.desc      : fd is file.id,frameWidth is 480,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0117', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0117 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0117', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0117 end');
    })

    /**
     * @tc.number    : testRecordConfig0118
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0118
     * @tc.desc      : fd is file.id,frameWidth is 480,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0118', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0118 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0118', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0118 end');
    })

    /**
     * @tc.number    : testRecordConfig0119
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0119
     * @tc.desc      : fd is file.id,frameWidth is 480,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0119', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0119 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0119', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0119 end');
    })

    /**
     * @tc.number    : testRecordConfig0120
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0120
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0120', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0120 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0120', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0120 end');
    })

    /**
     * @tc.number    : testRecordConfig0121
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0121
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 48000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0121', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0121 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0121', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0121 end');
    })

    /**
     * @tc.number    : testRecordConfig0122
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0122
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 16000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0122', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0122 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0122', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0122 end');
    })

    /**
     * @tc.number    : testRecordConfig0123
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0123
     * @tc.desc      : fd is file.id,frameHeight is 640,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0123', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0123 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0123', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0123 end');
    })

    /**
     * @tc.number    : testRecordConfig0124
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0124
     * @tc.desc      : fd is file.id,frameHeight is 640,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0124', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0124 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0124', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0124 end');
    })

    /**
     * @tc.number    : testRecordConfig0125
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0125
     * @tc.desc      : fd is file.id,frameHeight is 640,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0125', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0125 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioBitrate: AUDIO_BITRATE,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0125', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0125 end');
    })

    /**
     * @tc.number    : testRecordConfig0126
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0126
     * @tc.desc      : fd is file.id,frameHeight is 640,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0126', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0126 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0126', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0126 end');
    })

    /**
     * @tc.number    : testRecordConfig0127
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0127
     * @tc.desc      : fd is file.id,frameHeight is 640,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0127', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0127 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0127', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0127 end');
    })

    /**
     * @tc.number    : testRecordConfig0128
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0128
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate is 48000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0128', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0128 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0128', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0128 end');
    })

    /**
     * @tc.number    : testRecordConfig0129
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0129
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate is 16000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0129', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0129 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0129', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0129 end');
    })

    /**
     * @tc.number    : testRecordConfig0130
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0130
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0130', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0130 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0130', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0130 end');
    })

    /**
     * @tc.number    : testRecordConfig0131
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0131
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0131', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0131 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0131', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0131 end');
    })

    /**
     * @tc.number    : testRecordConfig0132
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0132
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0132', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0132 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioBitrate: AUDIO_BITRATE,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0132', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0132 end');
    })

    /**
     * @tc.number    : testRecordConfig0133
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0133
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0133', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0133 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0133', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0133 end');
    })

    /**
     * @tc.number    : testRecordConfig0134
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0134
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0134', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0134 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0134', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0134 end');
    })

    /**
     * @tc.number    : testRecordConfig0135
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0135
     * @tc.desc      : fd is file.id,audioSampleRate is 48000,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0135', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0135 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0135', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0135 end');
    })

    /**
     * @tc.number    : testRecordConfig0136
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0136
     * @tc.desc      : fd is file.id,audioSampleRate is 16000,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0136', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0136 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0136', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0136 end');
    })

    /**
     * @tc.number    : testRecordConfig0137
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0137
     * @tc.desc      : fd is file.id,audioSampleRate is 48000,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0137', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0137 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0137', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0137 end');
    })

    /**
     * @tc.number    : testRecordConfig0138
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0138
     * @tc.desc      : fd is file.id,audioSampleRate is 16000,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0138', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0138 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0138', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0138 end');
    })

    /**
     * @tc.number    : testRecordConfig0139
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0139
     * @tc.desc      : fd is file.id,audioSampleRate is 48000,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0139', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0139 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioBitrate: AUDIO_BITRATE,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0139', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0139 end');
    })

    /**
     * @tc.number    : testRecordConfig0140
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0140
     * @tc.desc      : fd is file.id,audioSampleRate is 16000,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0140', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0140 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioBitrate: AUDIO_BITRATE,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0140',avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0140 end');
    })

    /**
     * @tc.number    : testRecordConfig0141
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0141
     * @tc.desc      : fd is file.id,audioSampleRate is 48000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0141', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0141 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0141', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0141 end');
    })

    /**
     * @tc.number    : testRecordConfig0142
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0142
     * @tc.desc      : fd is file.id,audioSampleRate is 16000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0142', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0142 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0142', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0142 end');
    })

    /**
     * @tc.number    : testRecordConfig0143
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0143
     * @tc.desc      : fd is file.id,audioSampleRate is 48000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0143', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0143 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0143', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0143 end');
    })

    /**
     * @tc.number    : testRecordConfig0144
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0144
     * @tc.desc      : fd is file.id,audioSampleRate is 16000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0144', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0144 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0144', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0144 end');
    })

    /**
     * @tc.number    : testRecordConfig0145
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0145
     * @tc.desc      : fd is file.id,audioChannelCount is 1,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0145', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0145 start');
      avCaptureConfig = {
        fd: fileFd,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0145', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0145 end');
    })

    /**
     * @tc.number    : testRecordConfig0147
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0147
     * @tc.desc      : fd is file.id,audioChannelCount is 2,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0146', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0146 start');
      avCaptureConfig = {
        fd: fileFd,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0146', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0146 end');
    })

    /**
     * @tc.number    : testRecordConfig0148
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0148
     * @tc.desc      : fd is file.id,audioChannelCount is 1,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0147', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0147 start');
      avCaptureConfig = {
        fd: fileFd,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0147', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0147 end');
    })

    /**
     * @tc.number    : testRecordConfig0149
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0149
     * @tc.desc      : fd is file.id,audioChannelCount is 2,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0148', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0148 start');
      avCaptureConfig = {
        fd: fileFd,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0148', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0148 end');
    })

    /**
     * @tc.number    : testRecordConfig0149
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0149
     * @tc.desc      : fd is file.id,audioChannelCount is 1,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0149', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0149 start');
      avCaptureConfig = {
        fd: fileFd,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0149', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0149 end');
    })

    /**
     * @tc.number    : testRecordConfig0150
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0150
     * @tc.desc      : fd is file.id,audioChannelCount is 2,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0150', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0150 start');
      avCaptureConfig = {
        fd: fileFd,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0150', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0150 end');
    })

    /**
     * @tc.number    : testRecordConfig0151
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0151
     * @tc.desc      : fd is file.id,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0151', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0151 start');
      avCaptureConfig = {
        fd: fileFd,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0151', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0151 end');
    })

    /**
     * @tc.number    : testRecordConfig0152
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0152
     * @tc.desc      : fd is file.id,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0152', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0152 start');
      avCaptureConfig = {
        fd: fileFd,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0152', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0152 end');
    })

    /**
     * @tc.number    : testRecordConfig0153
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0153
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0153', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0153 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0153', avCaptureConfig, WIDTH_HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0153 end');
    })

    /**
     * @tc.number    : testRecordConfig0154
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0154
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,audioSampleRate is 48000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0154', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0154 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0154', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0154 end');
    })

    /**
     * @tc.number    : testRecordConfig0155
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0155
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,audioSampleRate is 16000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0155', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0155 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0155', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0155 end');
    })

    /**
     * @tc.number    : testRecordConfig0156
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0156
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0156', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0156 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0156', avCaptureConfig, WIDTH_HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0156 end');
    })

    /**
     * @tc.number    : testRecordConfig0157
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0157
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0157', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0157 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0157', avCaptureConfig, WIDTH_HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0157 end');
    })

    /**
     * @tc.number    : testRecordConfig0158
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0158
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0158', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0158 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0158', avCaptureConfig, WIDTH_HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0158 end');
    })

    /**
     * @tc.number    : testRecordConfig0159
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0159
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0159', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0159 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0159', avCaptureConfig, WIDTH_HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0159 end');
    })

    /**
     * @tc.number    : testRecordConfig0160
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0160
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0160', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0160 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0160', avCaptureConfig, WIDTH_HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0160 end');
    })

    /**
     * @tc.number    : testRecordConfig0161
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0161
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 48000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0161', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0161 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0161', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0161 end');
    })

    /**
     * @tc.number    : testRecordConfig0162
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0162
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 16000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0162', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0162 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0162', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0162 end');
    })

    /**
     * @tc.number    : testRecordConfig0163
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0163
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0163', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0163 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0163', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0163 end');
    })

    /**
     * @tc.number    : testRecordConfig0164
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0164
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0164', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0164 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0164', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0164 end');
    })

    /**
     * @tc.number    : testRecordConfig0165
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0165
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0165', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0165 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0165', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0165 end');
    })

    /**
     * @tc.number    : testRecordConfig0166
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0166
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0166', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0166 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0166', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0166 end');
    })

    /**
     * @tc.number    : testRecordConfig0167
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0167
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0167', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0167 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0167', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0167 end');
    })

    /**
     * @tc.number    : testRecordConfig0168
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0168
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 48000,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0168', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0168 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0168', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0168 end');
    })

    /**
     * @tc.number    : testRecordConfig0169
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0169
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 16000,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0169', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0169 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0169', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0169 end');
    })

    /**
     * @tc.number    : testRecordConfig0170
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0170
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 48000,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0170', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0170 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0170', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0170 end');
    })

    /**
     * @tc.number    : testRecordConfig0171
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0171
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 16000,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0171', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0171 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0171', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0171 end');
    })

    /**
     * @tc.number    : testRecordConfig0172
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0172
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 48000,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0172', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0172 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0172', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0172 end');
    })

    /**
     * @tc.number    : testRecordConfig0173
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0173
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 16000,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0173', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0173 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0173', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0173 end');
    })

    /**
     * @tc.number    : testRecordConfig0174
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0174
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 48000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0174', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0174 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0174', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0174 end');
    })

    /**
     * @tc.number    : testRecordConfig0175
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0175
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 16000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0175', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0175 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0175', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0175 end');
    })

    /**
     * @tc.number    : testRecordConfig0176
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0176
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 48000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0176', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0176 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0176', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0176 end');
    })

    /**
     * @tc.number    : testRecordConfig0177
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0177
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 16000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0177', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0177 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0177', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0177 end');
    })

    /**
     * @tc.number    : testRecordConfig0178
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0178
     * @tc.desc      : fd is file.id,frameWidth is 480,audioChannelCount is 1,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0178', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0178 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0178', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0178 end');
    })

    /**
     * @tc.number    : testRecordConfig0179
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0179
     * @tc.desc      : fd is file.id,frameWidth is 480,audioChannelCount is 2,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0179', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0179 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0179', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0179 end');
    })

    /**
     * @tc.number    : testRecordConfig0180
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0180
     * @tc.desc      : fd is file.id,frameWidth is 480,audioChannelCount is 1,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0180', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0180 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0180', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0180 end');
    })

    /**
     * @tc.number    : testRecordConfig0181
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0181
     * @tc.desc      : fd is file.id,frameWidth is 480,audioChannelCount is 2,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0181', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0181 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0181', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0181 end');
    })

    /**
     * @tc.number    : testRecordConfig0182
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0182
     * @tc.desc      : fd is file.id,frameWidth is 480,audioChannelCount is 1,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0182', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0182 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0182', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0182 end');
    })

    /**
     * @tc.number    : testRecordConfig0183
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0183
     * @tc.desc      : fd is file.id,frameWidth is 480,audioChannelCount is 2,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0183', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0183 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0183', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0183 end');
    })

    /**
     * @tc.number    : testRecordConfig0184
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0184
     * @tc.desc      : fd is file.id,frameWidth is 480,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0184', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0184 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0184', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0184 end');
    })

    /**
     * @tc.number    : testRecordConfig0185
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0185
     * @tc.desc      : fd is file.id,frameWidth is 480,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0185', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0185 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0185', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0185 end');
    })

    /**
     * @tc.number    : testRecordConfig0186
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0186
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0186', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0186 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0186', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0186 end');
    })

    /**
     * @tc.number    : testRecordConfig0187
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0187
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0187', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0187 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0187', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0187 end');
    })

    /**
     * @tc.number    : testRecordConfig0188
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0188
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0188', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0188 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0188', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0188 end');
    })

    /**
     * @tc.number    : testRecordConfig0189
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0189
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0189', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0189 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0189', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0189 end');
    })

    /**
     * @tc.number    : testRecordConfig0190
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0190
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0190', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0190 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioBitrate: AUDIO_BITRATE,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0190', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0190 end');
    })

    /**
     * @tc.number    : testRecordConfig0191
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0191
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0191', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0191 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0191', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0191 end');
    })

    /**
     * @tc.number    : testRecordConfig0192
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0192
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0192', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0192 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0192', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0192 end');
    })

    /**
     * @tc.number    : testRecordConfig0193
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0193
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 48000,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0193', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0193 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0193', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0193 end');
    })

    /**
     * @tc.number    : testRecordConfig0194
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0194
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 16000,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0194', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0194 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0194', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0194 end');
    })

    /**
     * @tc.number    : testRecordConfig0195
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0195
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 48000,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0195', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0195 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0195', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0195 end');
    })

    /**
     * @tc.number    : testRecordConfig0196
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0196
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 16000,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0196', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0196 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0196', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0196 end');
    })

    /**
     * @tc.number    : testRecordConfig0197
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0197
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 48000,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0197', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0197 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioBitrate: AUDIO_BITRATE,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0197', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0197 end');
    })

    /**
     * @tc.number    : testRecordConfig0198
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0198
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 16000,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0198', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0198 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioBitrate: AUDIO_BITRATE,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0198', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0198 end');
    })

    /**
     * @tc.number    : testRecordConfig0199
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0199
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 48000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0199', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0199 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0199', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0199 end');
    })

    /**
     * @tc.number    : testRecordConfig0200
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0200
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 16000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0200', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0200 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0200', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0200 end');
    })

    /**
     * @tc.number    : testRecordConfig0201
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0201
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 48000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0201', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0201 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0201', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0201 end');
    })

    /**
     * @tc.number    : testRecordConfig0202
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0202
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 16000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0202', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0202 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0202', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0202 end');
    })

    /**
     * @tc.number    : testRecordConfig0203
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0203
     * @tc.desc      : fd is file.id,frameHeight is 640,audioChannelCount is 1,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0203', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0203 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0203', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0203 end');
    })

    /**
     * @tc.number    : testRecordConfig0204
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0204
     * @tc.desc      : fd is file.id,frameHeight is 640,audioChannelCount is 2,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0204', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0204 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0204', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0204 end');
    })

    /**
     * @tc.number    : testRecordConfig0205
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0205
     * @tc.desc      : fd is file.id,frameHeight is 640,audioChannelCount is 1,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0205', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0205 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0205', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0205 end');
    })

    /**
     * @tc.number    : testRecordConfig0206
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0206
     * @tc.desc      : fd is file.id,frameHeight is 640,audioChannelCount is 2,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0206', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0206 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0206', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0206 end');
    })

    /**
     * @tc.number    : testRecordConfig0207
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0207
     * @tc.desc      : fd is file.id,frameHeight is 640,audioChannelCount is 1,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0207', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0207 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0207', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0207 end');
    })

    /**
     * @tc.number    : testRecordConfig0208
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0208
     * @tc.desc      : fd is file.id,frameHeight is 640,audioChannelCount is 2,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0208', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0208 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0208', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0208 end');
    })

    /**
     * @tc.number    : testRecordConfig0209
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0209
     * @tc.desc      : fd is file.id,frameHeight is 640,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0209', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0209 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0209', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0209 end');
    })

    /**
     * @tc.number    : testRecordConfig0210
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0210
     * @tc.desc      : fd is file.id,frameHeight is 640,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0210', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0210 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0210', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0210 end');
    })

    /**
     * @tc.number    : testRecordConfig0211
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0211
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioBitrate is 48000,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0211', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0211 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0211', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0211 end');
    })

    /**
     * @tc.number    : testRecordConfig0212
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0212
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioBitrate is 16000,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0212', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0212 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0212', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0212 end');
    })

    /**
     * @tc.number    : testRecordConfig0213
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0213
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioBitrate is 48000,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0213', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0213 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0213', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0213 end');
    })

    /**
     * @tc.number    : testRecordConfig0214
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0214
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioBitrate is 16000,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0214', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0214 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0214', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0214 end');
    })

    /**
     * @tc.number    : testRecordConfig0215
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0215
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioBitrate is 48000,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0215', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0215 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioBitrate: AUDIO_BITRATE,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0215', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0215 end');
    })

    /**
     * @tc.number    : testRecordConfig0216
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0216
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate is 16000,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0216', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0216 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioBitrate: AUDIO_BITRATE,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0216', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0216 end');
    })

    /**
     * @tc.number    : testRecordConfig0217
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0217
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate is 48000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0217', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0217 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0217', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0217 end');
    })

    /**
     * @tc.number    : testRecordConfig0218
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0218
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate is 16000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0218', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0218 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0218', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0218 end');
    })

    /**
     * @tc.number    : testRecordConfig0219
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0219
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate is 48000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0219', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0219 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0219', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0219 end');
    })

    /**
     * @tc.number    : testRecordConfig0220
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0220
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate is 16000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0220', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0220 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0220', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0220 end');
    })

    /**
     * @tc.number    : testRecordConfig0221
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0221
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioChannelCount is 1,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0221', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0221 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0221', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0221 end');
    })

    /**
     * @tc.number    : testRecordConfig0222
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0222
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioChannelCount is 2,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0222', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0222 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0222', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0222 end');
    })

    /**
     * @tc.number    : testRecordConfig0223
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0223
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioChannelCount is 1,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0223', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0223 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0223', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0223 end');
    })

    /**
     * @tc.number    : testRecordConfig0224
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0224
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioChannelCount is 2,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0224', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0224 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0224', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0224 end');
    })

    /**
     * @tc.number    : testRecordConfig0225
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0225
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioChannelCount is 1,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0225', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0225 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0225', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0225 end');
    })

    /**
     * @tc.number    : testRecordConfig0226
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0226
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioChannelCount is 2,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0226', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0226 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0226', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0226 end');
    })

    /**
     * @tc.number    : testRecordConfig0227
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0227
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0227', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0227 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0227', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0227 end');
    })

    /**
     * @tc.number    : testRecordConfig0228
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0228
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0228', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0228 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0228', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0228 end');
    })

    /**
     * @tc.number    : testRecordConfig0229
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0229
     * @tc.desc      : fd is file.id,audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0229', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0229 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0229', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0229 end');
    })

    /**
     * @tc.number    : testRecordConfig0230
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0230
     * @tc.desc      : fd is file.id,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0230', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0230 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0230', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0230 end');
    })

    /**
     * @tc.number    : testRecordConfig0231
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0231
     * @tc.desc      : fd is file.id,audioSampleRate is 48000,audioChannelCount is 2,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0231', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0231 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0231', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0231 end');
    })

    /**
     * @tc.number    : testRecordConfig0232
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0232
     * @tc.desc      : fd is file.id,audioSampleRate is 16000,audioChannelCount is 2,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0232', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0232 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0232', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0232 end');
    })

    /**
     * @tc.number    : testRecordConfig0233
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0233
     * @tc.desc      : fd is file.id,audioSampleRate is 48000,audioChannelCount is 1,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0233', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0233 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0233', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0233 end');
    })

    /**
     * @tc.number    : testRecordConfig0234
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0234
     * @tc.desc      : fd is file.id,audioSampleRate is 48000,audioChannelCount is 1,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0234', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0234 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0234', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0234 end');
    })

    /**
     * @tc.number    : testRecordConfig0235
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0235
     * @tc.desc      : fd is file.id,audioSampleRate is 48000,audioChannelCount is 2,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0235', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0235 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0235', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0235 end');
    })

    /**
     * @tc.number    : testRecordConfig0236
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0236
     * @tc.desc      : fd is file.id,audioSampleRate is 48000,audioChannelCount is 2,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0236', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0236 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0236', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0236 end');
    })

    /**
     * @tc.number    : testRecordConfig0237
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0237
     * @tc.desc      : fd is file.id,audioSampleRate is 16000,audioChannelCount is 1,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0237', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0237 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0237', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0237 end');
    })

    /**
     * @tc.number    : testRecordConfig0238
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0238
     * @tc.desc      : fd is file.id,audioSampleRate is 16000,audioChannelCount is 1,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0238', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0238 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0238', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0238 end');
    })

    /**
     * @tc.number    : testRecordConfig0239
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0239
     * @tc.desc      : fd is file.id,audioSampleRate is 16000,audioChannelCount is 2,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0239', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0239 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0239', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0239 end');
    })

    /**
     * @tc.number    : testRecordConfig0240
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0240
     * @tc.desc      : fd is file.id,audioSampleRate is 16000,audioChannelCount is 2,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0240', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0240 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0240', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0240 end');
    })

    /**
     * @tc.number    : testRecordConfig0241
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0241
     * @tc.desc      : fd is file.id,audioSampleRate is 48000,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0241', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0241 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0241', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0241 end');
    })

    /**
     * @tc.number    : testRecordConfig0242
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0242
     * @tc.desc      : fd is file.id,audioSampleRate is 16000,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0242', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0242 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0242', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0242 end');
    })

    /**
     * @tc.number    : testRecordConfig0243
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0243
     * @tc.desc      : fd is file.id,audioSampleRate is 48000,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0243', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0243 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0243', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0243 end');
    })

    /**
     * @tc.number    : testRecordConfig0244
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0244
     * @tc.desc      : fd is file.id,audioSampleRate is 16000,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0244', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0244 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0244', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0244 end');
    })

    /**
     * @tc.number    : testRecordConfig0245
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0245
     * @tc.desc      : fd is file.id,audioChannelCount is 1,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0245', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0245 start');
      avCaptureConfig = {
        fd: fileFd,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0245', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0245 end');
    })

    /**
     * @tc.number    : testRecordConfig0246
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0246
     * @tc.desc      : fd is file.id,audioChannelCount is 2,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0246', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0246 start');
      avCaptureConfig = {
        fd: fileFd,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0246', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0246 end');
    })

    /**
     * @tc.number    : testRecordConfig0247
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0247
     * @tc.desc      : fd is file.id,audioChannelCount is 1,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0247', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0247 start');
      avCaptureConfig = {
        fd: fileFd,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0247', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0247 end');
    })

    /**
     * @tc.number    : testRecordConfig0248
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0248
     * @tc.desc      : fd is file.id,audioChannelCount is 2,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0248', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0248 start');
      avCaptureConfig = {
        fd: fileFd,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0248', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0248 end');
    })

    /**
     * @tc.number    : testRecordConfig0249
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0249
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0249', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0249 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0249', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0249 end');
    })

    /**
     * @tc.number    : testRecordConfig0250
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0250
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0250', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0250 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0250', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0250 end');
    })

    /**
     * @tc.number    : testRecordConfig0251
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0251
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0251', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0251 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0251', avCaptureConfig, WIDTH_HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0251 end');
    })

    /**
     * @tc.number    : testRecordConfig0252
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0252
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0252', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0252 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0252', avCaptureConfig, WIDTH_HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0252 end');
    })

    /**
     * @tc.number    : testRecordConfig0253
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0253
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0253', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0253 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0253', avCaptureConfig, WIDTH_HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0253 end');
    })

    /**
     * @tc.number    : testRecordConfig0254
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0254
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0254', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0254 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0254', avCaptureConfig, WIDTH_HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0254 end');
    })

    /**
     * @tc.number    : testRecordConfig0255
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0255
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0255', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0255 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0255', avCaptureConfig, WIDTH_HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0255 end');
    })

    /**
     * @tc.number    : testRecordConfig0256
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0256
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0256', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0256 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0256', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0256 end');
    })

    /**
     * @tc.number    : testRecordConfig0257
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0257
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0257', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0257 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0257', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0257 end');
    })


    /**
     * @tc.number    : testRecordConfig0258
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0258
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0258', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0258 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0258', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0258 end');
    })

    /**
     * @tc.number    : testRecordConfig0259
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0259
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0259', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0259 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0259', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0259 end');
    })


    /**
     * @tc.number    : testRecordConfig0260
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0260
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 48000,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0260', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0260 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0260', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0260 end');
    })

    /**
     * @tc.number    : testRecordConfig0261
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0261
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 16000,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0261', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0261 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0261', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0261 end');
    })

    /**
     * @tc.number    : testRecordConfig0262
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0262
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 48000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0262', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0262 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0262', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0262 end');
    })

    /**
     * @tc.number    : testRecordConfig0263
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0263
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 48000,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0263', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0263 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0263', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0263 end');
    })

    /**
     * @tc.number    : testRecordConfig0264
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0264
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 16000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0264', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0264 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0264', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0264 end');
    })

    /**
     * @tc.number    : testRecordConfig0265
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0265
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 16000,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0265', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0265 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0265', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0265 end');
    })


    /**
     * @tc.number    : testRecordConfig0266
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0266
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0266', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0266 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0266', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0266 end');
    })

    /**
     * @tc.number    : testRecordConfig0267
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0267
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0267', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0267 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0267', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0267 end');
    })

    /**
     * @tc.number    : testRecordConfig0268
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0268
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 48000,audioChannelCount is 2,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0268', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0268 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0268', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0268 end');
    })

    /**
     * @tc.number    : testRecordConfig0269
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0269
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 16000,audioChannelCount is 2,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0269', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0269 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0269', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0269 end');
    })

    /**
     * @tc.number    : testRecordConfig0270
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0270
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 48000,audioChannelCount is 1,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0270', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0270 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0270', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0270 end');
    })

    /**
     * @tc.number    : testRecordConfig0271
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0271
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 48000,audioChannelCount is 1,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0271', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0271 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0271', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0271 end');
    })

    /**
     * @tc.number    : testRecordConfig0272
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0272
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 48000,audioChannelCount is 2,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0272', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0272 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0272', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0272 end');
    })


    /**
     * @tc.number    : testRecordConfig0273
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0273
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 48000,audioChannelCount is 2,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0273', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0273 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0273', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0273 end');
    })

    /**
     * @tc.number    : testRecordConfig0274
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0274
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 16000,audioChannelCount is 1,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0274', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0274 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0274', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0274 end');
    })

    /**
     * @tc.number    : testRecordConfig0275
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0275
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 16000,audioChannelCount is 1,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0275', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0275 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0275', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0275 end');
    })

    /**
     * @tc.number    : testRecordConfig0276
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0276
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 16000,audioChannelCount is 2,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0276', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0276 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0276', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0276 end');
    })

    /**
     * @tc.number    : testRecordConfig0277
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0277
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 16000,audioChannelCount is 2,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0277', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0277 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0277', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0277 end');
    })


    /**
     * @tc.number    : testRecordConfig0278
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0278
     * @tc.desc      : fd is file.id,frameWidth is 480,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0278', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0278 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0278', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0278 end');
    })

    /**
     * @tc.number    : testRecordConfig0279
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0279
     * @tc.desc      : fd is file.id,frameWidth is 480,audioChannelCount is 2,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0279', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0279 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0279', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0279 end');
    })

    /**
     * @tc.number    : testRecordConfig0280
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0280
     * @tc.desc      : fd is file.id,frameWidth is 480,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0280', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0280 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0280', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0280 end');
    })

    /**
     * @tc.number    : testRecordConfig0281
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0281
     * @tc.desc      : fd is file.id,frameWidth is 480,audioChannelCount is 2,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0281', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0281 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0281', avCaptureConfig, WIDTH_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0281 end');
    })

    /**
     * @tc.number    : testRecordConfig0282
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0282
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0282', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0282 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0282', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0282 end');
    })

    /**
     * @tc.number    : testRecordConfig0283
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0283
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0283', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0283 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0283', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0283 end');
    })

    /**
     * @tc.number    : testRecordConfig0284
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0284
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0284', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0284 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0284', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0284 end');
    })


    /**
     * @tc.number    : testRecordConfig0285
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0285
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0285', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0285 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0285', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0285 end');
    })

    /**
     * @tc.number    : testRecordConfig0286
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0286
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0286', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0286 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioBitrate: AUDIO_BITRATE,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0286', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0286 end');
    })


    /**
     * @tc.number    : testRecordConfig0287
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0287
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0287', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0287 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioBitrate: AUDIO_BITRATE,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0287', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0287 end');
    })


    /**
     * @tc.number    : testRecordConfig0288
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0288
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0288', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0288 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0288', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0288 end');
    })


    /**
     * @tc.number    : testRecordConfig0289
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0289
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0289', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0289 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0289', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0289 end');
    })


    /**
     * @tc.number    : testRecordConfig0290
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0290
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0290', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0290 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0290', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0290 end');
    })

    /**
     * @tc.number    : testRecordConfig0291
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0291
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0291', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0291 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0291', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0291 end');
    })

    /**
     * @tc.number    : testRecordConfig0292
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0292
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0292', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0292 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0292', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0292 end');
    })


    /**
     * @tc.number    : testRecordConfig0293
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0293
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 48000,audioChannelCount is 2,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0293', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0293 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0293', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0293 end');
    })


    /**
     * @tc.number    : testRecordConfig0294
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0294
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0294', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0294 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0294', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0294 end');
    })

    /**
     * @tc.number    : testRecordConfig0295
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0295
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 16000,audioChannelCount is 2,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0295', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0295 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0295', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0295 end');
    })

    /**
     * @tc.number    : testRecordConfig0296
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0296
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 48000,audioChannelCount is 1,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0296', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0296 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0296', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0296 end');
    })

    /**
     * @tc.number    : testRecordConfig0297
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0297
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 48000,audioChannelCount is 1,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0297', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0297 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0297', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0297 end');
    })


    /**
     * @tc.number    : testRecordConfig0298
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0298
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 48000,audioChannelCount is 2,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0298', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0298 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0298', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0298 end');
    })

    /**
     * @tc.number    : testRecordConfig0299
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0299
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 48000,audioChannelCount is 2,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0299', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0299 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0299', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0299 end');
    })


    /**
     * @tc.number    : testRecordConfig0300
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0300
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 16000,audioChannelCount is 1,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0300', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0300 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0300', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0300 end');
    })

    /**
     * @tc.number    : testRecordConfig0301
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0301
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 16000,audioChannelCount is 1,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0301', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0301 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0301', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0301 end');
    })

    /**
     * @tc.number    : testRecordConfig0302
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0302
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 16000,audioChannelCount is 2,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0302', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0302 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0302', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0302 end');
    })

    /**
     * @tc.number    : testRecordConfig0303
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0303
     * @tc.desc      : fd is file.id,frameHeight is 640,audioSampleRate is 16000,audioChannelCount is 2,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0303', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0303 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0303', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0303 end');
    })


    /**
     * @tc.number    : testRecordConfig0304
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0304
     * @tc.desc      : fd is file.id,frameHeight is 640,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0304', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0304 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0304', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0304 end');
    })

    /**
     * @tc.number    : testRecordConfig0305
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0305
     * @tc.desc      : fd is file.id,frameHeight is 640,audioChannelCount is 2,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0305', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0305 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0305', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0305 end');
    })


    /**
     * @tc.number    : testRecordConfig0306
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0306
     * @tc.desc      : fd is file.id,frameHeight is 640,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0306', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0306 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0306', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0306 end');
    })


    /**
     * @tc.number    : testRecordConfig0307
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0307
     * @tc.desc      : fd is file.id,frameHeight is 640,audioChannelCount is 2,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0307', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0307 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0307', avCaptureConfig, HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0307 end');
    })

    /**
     * @tc.number    : testRecordConfig0308
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0308
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate 48000,audioChannelCount is 1,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0308', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0308 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0308', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0308 end');
    })

    /**
     * @tc.number    : testRecordConfig0309
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0309
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate 16000,audioChannelCount is 1,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0309', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0309 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0309', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0309 end');
    })


    /**
     * @tc.number    : testRecordConfig0310
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0310
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate 48000,audioChannelCount is 2,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0310', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0310 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0310', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0310 end');
    })

    /**
     * @tc.number    : testRecordConfig0311
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0311
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate 16000,audioChannelCount is 2,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0311', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0311 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0311', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0311 end');
    })

    /**
     * @tc.number    : testRecordConfig0312
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0312
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate 16000,audioChannelCount is 1,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0312', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0312 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0312', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0312 end');
    })

    /**
     * @tc.number    : testRecordConfig0313
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0313
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate 48000,audioChannelCount is 1,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0313', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0313 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0313', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0313 end');
    })

    /**
     * @tc.number    : testRecordConfig0314
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0314
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate 48000,audioChannelCount is 2,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0314', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0314 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0314', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0314 end');
    })


    /**
     * @tc.number    : testRecordConfig0315
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0315
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate 48000,audioChannelCount is 2,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0315', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0315 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0315', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0315 end');
    })

    /**
     * @tc.number    : testRecordConfig0316
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0316
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate 16000,audioChannelCount is 1,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0316', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0316 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0316', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0316 end');
    })


    /**
     * @tc.number    : testRecordConfig0317
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0317
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate 16000,audioChannelCount is 1,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0317', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0317 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0317', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0317 end');
    })



    /**
     * @tc.number    : testRecordConfig0318
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0318
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate 16000,audioChannelCount is 2,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0318', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0318 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0318', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0318 end');
    })

    /**
     * @tc.number    : testRecordConfig0319
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0319
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate 16000,audioChannelCount is 2,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0319', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0319 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0319', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0319 end');
    })

    /**
     * @tc.number    : testRecordConfig0320
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0320
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0320', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0320 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0320', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0320 end');
    })

    /**
     * @tc.number    : testRecordConfig0321
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0321
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioChannelCount is 2,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0321', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0321 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0321', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0321 end');
    })


    /**
     * @tc.number    : testRecordConfig0322
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0322
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0322', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0322 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0322', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0322 end');
    })

    /**
     * @tc.number    : testRecordConfig0323
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0323
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioChannelCount is 2,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0323', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0323 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0323', avCaptureConfig, NO_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0323 end');
    })

    /**
     * @tc.number    : testRecordConfig0324
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0324
     * @tc.desc      : fd is file.id,audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0324', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0324 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0324', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0324 end');
    })

    /**
     * @tc.number    : testRecordConfig0325
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0325
     * @tc.desc      : fd is file.id,audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0325', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0325 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0325', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0325 end');
    })

    /**
     * @tc.number    : testRecordConfig0326
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0326
     * @tc.desc      : fd is file.id,audioSampleRate is 48000,audioChannelCount is 2,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0326', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0326 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0326', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0326 end');
    })

    /**
     * @tc.number    : testRecordConfig0327
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0327
     * @tc.desc      : fd is file.id,audioSampleRate is 48000,audioChannelCount is 2,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0327', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0327 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0327', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0327 end');
    })

    /**
     * @tc.number    : testRecordConfig0328
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0328
     * @tc.desc      : fd is file.id,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0328', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0328 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0328', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0328 end');
    })

    /**
     * @tc.number    : testRecordConfig0329
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0329
     * @tc.desc      : fd is file.id,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0329', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0329 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0329', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0329 end');
    })


    /**
     * @tc.number    : testRecordConfig0330
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0330
     * @tc.desc      : fd is file.id,audioSampleRate is 16000,audioChannelCount is 2,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0330', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0330 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0330', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0330 end');
    })

    /**
     * @tc.number    : testRecordConfig0331
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0331
     * @tc.desc      : fd is file.id,audioSampleRate is 16000,audioChannelCount is 2,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0331', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0331 start');
      avCaptureConfig = {
        fd: fileFd,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0331', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0331 end');
    })

    /**
     * @tc.number    : testRecordConfig0332
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0332
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0332', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0332 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0332', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0332 end');
    })

    /**
     * @tc.number    : testRecordConfig0333
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0333
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0333', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0333 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0333', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0333 end');
    })

    /**
     * @tc.number    : testRecordConfig0334
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0334
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0334', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0334 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0334', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0334 end');
    })

    /**
     * @tc.number    : testRecordConfig0335
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0335
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 2
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0335', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0335 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0335', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0335 end');
    })

    /**
     * @tc.number    : testRecordConfig0336
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0336
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0336', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0336 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0336', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0336 end');
    })

    /**
     * @tc.number    : testRecordConfig0337
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0337
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0337', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0337 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0337', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0337 end');
    })

    /**
     * @tc.number    : testRecordConfig0338
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0338
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0338', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0338 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0338', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0338 end');
    })

    /**
     * @tc.number    : testRecordConfig0339
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0339
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0339', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0339 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0339', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0339 end');
    })

    /**
     * @tc.number    : testRecordConfig0340
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0340
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0340', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0340 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0340', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0340 end');
    })

    /**
     * @tc.number    : testRecordConfig0341
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0341
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0341', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0341 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0341', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0341 end');
    })

    /**
     * @tc.number    : testRecordConfig0342
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0342
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0342', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0342 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0342', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0342 end');
    })

    /**
     * @tc.number    : testRecordConfig0343
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0343
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 2,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0343', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0343 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0343', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0343 end');
    })

    /**
     * @tc.number    : testRecordConfig0344
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0344
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0344', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0344 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0344', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0344 end');
    })

    /**
     * @tc.number    : testRecordConfig0345
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0345
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 2,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0345', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0345 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0345', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0345 end');
    })

    /**
     * @tc.number    : testRecordConfig0346
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0346
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 1,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0346', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0346 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0346', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0346 end');
    })

    /**
     * @tc.number    : testRecordConfig0347
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0347
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 1,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0347', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0347 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0347', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0347 end');
    })

    /**
     * @tc.number    : testRecordConfig0348
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0348
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 2,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0348', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0348 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0348', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0348 end');
    })

    /**
     * @tc.number    : testRecordConfig0349
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0349
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 2,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0349', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0349 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0349', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0349 end');
    })

    /**
     * @tc.number    : testRecordConfig0350
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0350
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0350', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0350 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0350', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0350 end');
    })

    /**
     * @tc.number    : testRecordConfig0351
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0351
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0351', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0351 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0351', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0351 end');
    })

    /**
     * @tc.number    : testRecordConfig0352
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0352
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 2,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0352', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0352 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0352', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0352 end');
    })

    /**
     * @tc.number    : testRecordConfig0353
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0353
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 2,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0353', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0353 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0353', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0353 end');
    })

    /**
     * @tc.number    : testRecordConfig0354
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0354
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0354', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0354 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0354', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0354 end');
    })

    /**
     * @tc.number    : testRecordConfig0355
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0355
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0355', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0355 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0355', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0355 end');
    })

    /**
     * @tc.number    : testRecordConfig0356
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0356
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 48000,audioChannelCount is 2,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0356', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0356 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0356', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0356 end');
    })

    /**
     * @tc.number    : testRecordConfig0357
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0357
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 48000,audioChannelCount is 2,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0357', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0357 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0357', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0357 end');
    })

    /**
     * @tc.number    : testRecordConfig0358
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0358
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0358', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0358 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0358', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0358 end');
    })

    /**
     * @tc.number    : testRecordConfig0359
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0359
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0359', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0359 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0359', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0359 end');
    })

    /**
     * @tc.number    : testRecordConfig0360
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0360
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 16000,audioChannelCount is 2,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0360', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0360 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0360', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0360 end');
    })

    /**
     * @tc.number    : testRecordConfig0361
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0361
     * @tc.desc      : fd is file.id,frameWidth is 480,audioSampleRate is 16000,audioChannelCount is 2,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0361', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0361 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0361', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0361 end');
    })

    /**
     * @tc.number    : testRecordConfig0362
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0362
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0362', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0362 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0362', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0362 end');
    })

    /**
     * @tc.number    : testRecordConfig0363
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0363
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0363', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0363 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0363', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0363 end');
    })

    /**
     * @tc.number    : testRecordConfig0364
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0364
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 2,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0364', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0364 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0364', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0364 end');
    })

    /**
     * @tc.number    : testRecordConfig0365
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0365
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 2,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0365', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0365 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0365', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0365 end');
    })

    /**
     * @tc.number    : testRecordConfig0366
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0366
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 1,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0366', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0366 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0366', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0366 end');
    })

    /**
     * @tc.number    : testRecordConfig0367
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0367
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 1,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0367', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0367 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0367', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0367 end');
    })

    /**
     * @tc.number    : testRecordConfig0368
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0368
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 2,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0368', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0368 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0368', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0368 end');
    })

    /**
     * @tc.number    : testRecordConfig0369
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0369
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 2,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0369', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0369 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0369', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0369 end');
    })

    /**
     * @tc.number    : testRecordConfig0370
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0370
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0370', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0370 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0370', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0370 end');
    })

    /**
     * @tc.number    : testRecordConfig0371
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0371
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0371', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0371 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0371', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0371 end');
    })

    /**
     * @tc.number    : testRecordConfig0372
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0372
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 2,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0372', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0372 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0372', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0372 end');
    })

    /**
     * @tc.number    : testRecordConfig0373
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0373
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 2,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0373', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0373 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0373', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0373 end');
    })

    /**
     * @tc.number    : testRecordConfig0374
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0374
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0374', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0374 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0374', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0374 end');
    })

    /**
     * @tc.number    : testRecordConfig0375
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0375
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0375', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0375 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0375', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0375 end');
    })

    /**
     * @tc.number    : testRecordConfig0376
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0376
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0376', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0376 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0376', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0376 end');
    })

    /**
     * @tc.number    : testRecordConfig0377
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0377
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0377', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0377 start');
      avCaptureConfig = {
        fd: fileFd,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0377', avCaptureConfig, HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0377 end');
    })

    /**
     * @tc.number    : testRecordConfig0378
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0378
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0378', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0378 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0378', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0378 end');
    })

    /**
     * @tc.number    : testRecordConfig0379
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0379
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0379', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0379 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0379', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0379 end');
    })

    /**
     * @tc.number    : testRecordConfig0380
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0380
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0380', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0380 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0380', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0380 end');
    })

    /**
     * @tc.number    : testRecordConfig0381
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0381
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 2,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0381', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0381 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0381', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0381 end');
    })

    /**
     * @tc.number    : testRecordConfig0382
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0382
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 2,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0382', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0382 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0382', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0382 end');
    })

    /**
     * @tc.number    : testRecordConfig0383
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0383
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0383', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0383 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0383', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0383 end');
    })

    /**
     * @tc.number    : testRecordConfig0384
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0384
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0384', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0384 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0384', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0384 end');
    })

    /**
     * @tc.number    : testRecordConfig0385
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0385
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 2,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0385', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0385 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0385', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0385 end');
    })

    /**
     * @tc.number    : testRecordConfig0386
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0386
     * @tc.desc      : fd is file.id,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 2,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0386', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0386 start');
      avCaptureConfig = {
        fd: fileFd,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0386', avCaptureConfig, RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0386 end');
    })

    /**
     * @tc.number    : testRecordConfig0387
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0387
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0387', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0387 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0387', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0387 end');
    })

    /**
     * @tc.number    : testRecordConfig0388
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0388
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 2,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0388', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0388 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0388', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0388 end');
    })

    /**
     * @tc.number    : testRecordConfig0389
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0389
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0389', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0389 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0389', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0389 end');
    })

    /**
     * @tc.number    : testRecordConfig0390
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0390
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 2,audioBitrate is 96000
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0390', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0390 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0390', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0390 end');
    })

    /**
     * @tc.number    : testRecordConfig0391
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0391
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 1,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0391', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0391 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0391', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0391 end');
    })

    /**
     * @tc.number    : testRecordConfig0392
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0392
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 1,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0392', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0392 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0392', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0392 end');
    })

    /**
     * @tc.number    : testRecordConfig0393
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0393
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 2,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0393', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0393 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0393', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0393 end');
    })

    /**
     * @tc.number    : testRecordConfig0394
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0394
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 2,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0394', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0394 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0394', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0394 end');
    })

    /**
     * @tc.number    : testRecordConfig0395
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0395
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0395', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0395 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0395', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0395 end');
    })

    /**
     * @tc.number    : testRecordConfig0396
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0396
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0396', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0396 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0396', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0396 end');
    })

    /**
     * @tc.number    : testRecordConfig0397
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0397
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 2,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0397', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0397 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0397', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0397 end');
    })

    /**
     * @tc.number    : testRecordConfig0398
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0398
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 2,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0398', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0398 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0398', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0398 end');
    })

    /**
     * @tc.number    : testRecordConfig0399
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0399
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0399', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0399 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0399', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0399 end');
    })

    /**
     * @tc.number    : testRecordConfig0400
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0400
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0400', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0400 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0400', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0400 end');
    })

    /**
     * @tc.number    : testRecordConfig0401
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0401
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0401', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0401 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0401', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0401 end');
    })

    /**
     * @tc.number    : testRecordConfig0402
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0402
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0402', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0402 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0402', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0402 end');
    })

    /**
     * @tc.number    : testRecordConfig0403
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0403
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioChannelCount is 1,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0403', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0403 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0403', avCaptureConfig, WIDTH_HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0403 end');
    })

    /**
     * @tc.number    : testRecordConfig0404
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0404
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioChannelCount is 1,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0404', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0404 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0404', avCaptureConfig, WIDTH_HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0404 end');
    })

    /**
     * @tc.number    : testRecordConfig0405
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0405
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioChannelCount is 2,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0405', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0405 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0405', avCaptureConfig, WIDTH_HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0405 end');
    })

    /**
     * @tc.number    : testRecordConfig0406
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0406
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioChannelCount is 2,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0406', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0406 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0406', avCaptureConfig, WIDTH_HEIGHT_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0406 end');
    })

    /**
     * @tc.number    : testRecordConfig0407
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0407
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0407', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0407 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0407', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0407 end');
    })

    /**
     * @tc.number    : testRecordConfig0408
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0408
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0408', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0408 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0408', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0408 end');
    })

    /**
     * @tc.number    : testRecordConfig0409
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0409
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,audioSampleRate is 48000,audioChannelCount is 2,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0409', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0409 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0409', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0409 end');
    })

    /**
     * @tc.number    : testRecordConfig0410
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0410
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,audioSampleRate is 48000,audioChannelCount is 2,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0410', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0410 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0410', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0410 end');
    })

    /**
     * @tc.number    : testRecordConfig0411
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0411
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0411', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0411 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0411', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0411 end');
    })

    /**
     * @tc.number    : testRecordConfig0412
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0412
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0412', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0412 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0412', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0412 end');
    })

    /**
     * @tc.number    : testRecordConfig0413
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0413
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,audioSampleRate is 16000,audioChannelCount is 2,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0413', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0413 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0413', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0413 end');
    })

    /**
     * @tc.number    : testRecordConfig0414
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0414
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,audioSampleRate is 16000,audioChannelCount is 2,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0414', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0414 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0414', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0414 end');
    })

    /**
     * @tc.number    : testRecordConfig0415
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0415
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0415', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0415 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0415', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0415 end');
    })

    /**
     * @tc.number    : testRecordConfig0416
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0416
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0416', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0416 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0416', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0416 end');
    })

    /**
     * @tc.number    : testRecordConfig0417
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0417
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 2,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0417', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0417 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0417', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0417 end');
    })

    /**
     * @tc.number    : testRecordConfig0418
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0418
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 2,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0418', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0418 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0418', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0418 end');
    })

    /**
     * @tc.number    : testRecordConfig0419
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0419
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000,preset is H264
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0419', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0419 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0419', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0419 end');
    })

    /**
     * @tc.number    : testRecordConfig0420
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0420
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000,preset is H265
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0420', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0420 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0420', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0420 end');
    })

    /**
     * @tc.number    : testRecordConfig0421
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0421
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 2,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0421', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0421 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0421', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0421 end');
    })


    /**
     * @tc.number    : testRecordConfig0422
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0422
     * @tc.desc      : fd is file.id,frameWidth is 480,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 2,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0422', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0422 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0422', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0422 end');
    })


    /**
     * @tc.number    : testRecordConfig0423
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0423
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0423', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0423 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0423', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0423 end');
    })


    /**
     * @tc.number    : testRecordConfig0424
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0424
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0424', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0424 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0424', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0424 end');
    })


    /**
     * @tc.number    : testRecordConfig0425
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0425
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 2,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0425', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0425 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0425', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0425 end');
    })


    /**
     * @tc.number    : testRecordConfig0426
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0426
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 2,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H265_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0426', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0426 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0426', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0426 end');
    })


    /**
     * @tc.number    : testRecordConfig0427
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0427
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0427', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0427 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0427', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0427 end');
    })


    /**
     * @tc.number    : testRecordConfig0428
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0428
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0428', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0428 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0428', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0428 end');
    })


    /**
     * @tc.number    : testRecordConfig0429
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0429
     * @tc.desc      : fd is file.id,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 2,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0429', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0429 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0429', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0429 end');
    })


    /**
     * @tc.number    : testRecordConfig0430
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0430
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 2,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0430', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0430 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0430', avCaptureConfig, WIDTH_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0430 end');
    })
    // Seven parameters end

    // Eight parameters start
    /**
     * @tc.number    : testRecordConfig0431
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0431
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0431', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0431 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0431', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0431 end');
    })


    /**
     * @tc.number    : testRecordConfig0432
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0432
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0432', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0432 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0432', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0432 end');
    })


    /**
     * @tc.number    : testRecordConfig0433
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0433
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 2,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0433', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0433 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0433', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0433 end');
    })


    /**
     * @tc.number    : testRecordConfig0434
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0434
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 48000,audioChannelCount is 2,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0434', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0434 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_48;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0434', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0434 end');
    })


    /**
     * @tc.number    : testRecordConfig0435
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0435
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0435', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0435 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0435', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0435 end');
    })


    /**
     * @tc.number    : testRecordConfig0436
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0436
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0436', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0436 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0436', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0436 end');
    })


    /**
     * @tc.number    : testRecordConfig0437
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0437
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 2,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('testAVSCaptureRecordConfig0437', 0, async (done: Function) => {
      console.info(TAG + 'testAVSCaptureRecordConfig0437 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('testAVSCaptureRecordConfig0437', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'testAVSCaptureRecordConfig0437 end');
    })


    /**
     * @tc.number    : testRecordConfig0438
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0438
     * @tc.desc      : fd is 0 (incorrect),frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 16000,audioChannelCount is 2,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0438', 0, async (done: Function) => {
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0438 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_16,
        audioChannelCount: AUDIO_CHANNEL_COUNT_2,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      frameWidth = FRAME_WIDTH;
      frameHeight = FRAME_HEIGHT;
      audioSampleRate = AUDIO_SAMPLE_RATE_16;
      await recordSuccessful('SUB_MULTIMEDIA_RECORD_CONFIG_0438', avCaptureConfig, WIDTH_HEIGHT_RATE_TAG, done);
      console.info(TAG + 'SUB_MULTIMEDIA_RECORD_CONFIG_0438 end');
    })
    // Eight parameters end

    // Incorrect parameter validation start
    /**
     * @tc.number    : testRecordConfig0439
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0439
     * @tc.desc      : fd is 0 (incorrect),frameWidth is 480,frameHeight is 640,videoBitrate is 10000000, audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0439', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0439 start');
      avCaptureConfig = {
        fd: INCORRECT_NUMBER_0,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H265_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0439', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0439 end');
    })


    /**
     * @tc.number    : testRecordConfig0440
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0440
     * @tc.desc      : fd is -1 (incorrect),frameWidth is 480,frameHeight is 640,videoBitrate is 10000000, audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0440', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0440 start');
      avCaptureConfig = {
        fd: INCORRECT_NEGATIVE_NUMBER_1,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0440', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0440 end');
    })


    /**
     * @tc.number    : testRecordConfig0441
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0441
     * @tc.desc      : fd is 超长值 (incorrect),frameWidth is 480,frameHeight is 640,videoBitrate is 10000000, audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0441', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0441 start');
      avCaptureConfig = {
        fd: INCORRECT_LONG_NUMERICAL_VALE,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0441', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0441 end');
    })


    /**
     * @tc.number    : testRecordConfig0442
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0442
     * @tc.desc      : fd is 不存在的值 (incorrect),frameWidth is 480,frameHeight is 640,videoBitrate is 10000000, audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0442', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0442 start');
      avCaptureConfig = {
        fd: INCORRECT_NON_EXISTENT_VALUE,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0442', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0442 end');
    })


    /**
     * @tc.number    : testRecordConfig0443
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0443
     * @tc.desc      : fd is file.id,frameWidth is 0 (incorrect),frameHeight is 640,videoBitrate is 10000000, audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0443', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0443 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: INCORRECT_NUMBER_0,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0443', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0443 end');
    })


    /**
     * @tc.number    : testRecordConfig0444
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0444
     * @tc.desc      : fd is file.id,frameWidth is -1 (incorrect),frameHeight is 640,videoBitrate is 10000000, audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0444', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0444 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: INCORRECT_NEGATIVE_NUMBER_1,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0444', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0444 end');
    })


    /**
     * @tc.number    : testRecordConfig0445
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0445
     * @tc.desc      : fd is file.id,frameWidth 超长值 (incorrect),frameHeight is 640,videoBitrate is 10000000, audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('testAVSCaptureRecordConfig0445', 0, async (done: Function) => {
      console.info(TAG, 'testAVSCaptureRecordConfig0445 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: INCORRECT_LONG_NUMERICAL_VALE,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0445', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0445 end');
    })


    /**
     * @tc.number    : testRecordConfig0446
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0446
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 0 (incorrect),videoBitrate is 10000000, audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0446', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0446 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: INCORRECT_NUMBER_0,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0446', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0446 end');
    })


    /**
     * @tc.number    : testRecordConfig0447
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0447
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is -1 (incorrect),videoBitrate is 10000000, audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0447', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0447 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: INCORRECT_NEGATIVE_NUMBER_1,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0447', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0447 end');
    })

    /**
     * @tc.number    : testRecordConfig0448
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0448
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 超长值 (incorrect),videoBitrate is 10000000, audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0448', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0448 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: INCORRECT_LONG_NUMERICAL_VALE,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0448', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0448 end');
    })

    /**
     * @tc.number    : testRecordConfig0449
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0449
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 0 (incorrect), audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0449', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0449 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: INCORRECT_NUMBER_0,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0449', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0449 end');
    })


    /**
     * @tc.number    : testRecordConfig0450
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0450
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is -1 (incorrect), audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0450', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0450 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: INCORRECT_NEGATIVE_NUMBER_1,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0450', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0450 end');
    })


    /**
     * @tc.number    : testRecordConfig0451
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0451
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 超长值 (incorrect), audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0451', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0451 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: INCORRECT_LONG_NUMERICAL_VALE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0451', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0451 end');
    })


    /**
     * @tc.number    : testRecordConfig0452
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0452
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 边界值 10000001 (incorrect), audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0452', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0452 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE_BOUNDARY_VALUE_0,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0452', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0452 end');
    })


    /**
     * @tc.number    : testRecordConfig0453
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0453
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 边界值 9999999 (incorrect), audioSampleRate is 48000,audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0453', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0453 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE_BOUNDARY_VALUE_1,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0453', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0453 end');
    })



    /**
     * @tc.number    : testRecordConfig0454
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0454
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 0 (incorrect),audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0454', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0454 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: INCORRECT_NUMBER_0,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0454', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0454 end');
    })


    /**
     * @tc.number    : testRecordConfig0455
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0455
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is -1 (incorrect),audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0455', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0455 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: INCORRECT_NEGATIVE_NUMBER_1,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0455', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0455 end');
    })


    /**
     * @tc.number    : testRecordConfig0456
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0456
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 超长值 (incorrect),audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0456', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0456 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: INCORRECT_LONG_NUMERICAL_VALE,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0456', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0456 end');
    })


    /**
     * @tc.number    : testRecordConfig0457
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0457
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 边界值 48001 (incorrect),audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('testAVSCaptureRecordConfig0457', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0457 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_VALUE_0,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0457', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0457 end');
    })


    /**
     * @tc.number    : testRecordConfig0458
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0458
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate is 边界值 16001 (incorrect),audioChannelCount is 1,audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0458', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0458 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_VALUE_1,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0458', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0458 end');
    })


    /**
     * @tc.number    : testRecordConfig0459
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0459
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate 48000,audioChannelCount is 0 (incorrect),audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0459', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0459 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: INCORRECT_NUMBER_0,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0459', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0459 end');
    })


    /**
     * @tc.number    : testRecordConfig0460
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0460
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate 48000,audioChannelCount is -1 (incorrect),audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0460', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0460 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: INCORRECT_NEGATIVE_NUMBER_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0460', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0460 end');
    })


    /**
     * @tc.number    : testRecordConfig0461
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0461
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate 48000,audioChannelCount is is 超长值 (incorrect),audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0461', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0461 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: INCORRECT_LONG_NUMERICAL_VALE,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0461', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0461 end');
    })


    /**
     * @tc.number    : testRecordConfig0462
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0462
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate 48000,audioChannelCount is 边界值 -2 (incorrect),audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0462', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0462 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_VALUE_0,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0462', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0462 end');
    })


    /**
     * @tc.number    : testRecordConfig0463
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0463
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate 48000,audioChannelCount is 边界值 3 (incorrect),audioBitrate is 96000,preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0463', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0463 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_VALUE_1,
        audioBitrate: AUDIO_BITRATE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0463', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0463 end');
    })


    /**
     * @tc.number    : testRecordConfig0464
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0464
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate 48000,audioChannelCount is 1,audioBitrate is 0 (incorrect),preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0464', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0464 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: INCORRECT_NUMBER_0,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0464', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0464 end');
    })


    /**
     * @tc.number    : testRecordConfig0465
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0465
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate 48000,audioChannelCount is 1,audioBitrate is -1 (incorrect),preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0465', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0465 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: INCORRECT_NEGATIVE_NUMBER_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0465', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0465 end');
    })


    /**
     * @tc.number    : testRecordConfig0466
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0466
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate 48000,audioChannelCount is 1,audioBitrate is 超长值 (incorrect),preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0466', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0466 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: INCORRECT_LONG_NUMERICAL_VALE,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0466', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0466 end');
    })


    /**
     * @tc.number    : testRecordConfig0467
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0467
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate 48000,audioChannelCount is 1,audioBitrate is 边界值 96001 (incorrect),preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0467', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0467 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE_VALUE_0,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0467', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0467 end');
    })

    /**
     * @tc.number    : testRecordConfig0468
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0468
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate 48000,audioChannelCount is 1,audioBitrate is 边界值 95999 (incorrect),preset is SCREEN_RECORD_PRESET_H264_AAC_MP4
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0468', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0468 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE_VALUE_1,
        preset: media.AVScreenCaptureRecordPreset.SCREEN_RECORD_PRESET_H264_AAC_MP4,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0468', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0468 end');
    })


    /**
     * @tc.number    : testRecordConfig0469
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0469
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate 48000,audioChannelCount is 1,audioBitrate is 96000,preset is 2 (incorrect)
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0469', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0469 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: INCORRECT_PRESET_VALUE_0,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0469', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0469 end');
    })


    /**
     * @tc.number    : testRecordConfig0470
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0470
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate 48000,audioChannelCount is 1,audioBitrate is 96000,preset is -1 (incorrect)
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0470', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0470 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: INCORRECT_NEGATIVE_NUMBER_1,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0470', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0470 end');
    })


    /**
     * @tc.number    : testRecordConfig0471
     * @tc.name      : SUB_MULTIMEDIA_RECORD_CONFIG_0471
     * @tc.desc      : fd is file.id,frameWidth is 480,frameHeight is 640,videoBitrate is 10000000,audioSampleRate 48000,audioChannelCount is 1,audioBitrate is 96000,preset is 超长值 (incorrect)
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RECORD_CONFIG_0471', 0, async (done: Function) => {
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0471 start');
      avCaptureConfig = {
        fd: fileFd,
        frameWidth: FRAME_WIDTH,
        frameHeight: FRAME_HEIGHT,
        videoBitrate: VIDEO_BITRATE,
        audioSampleRate: AUDIO_SAMPLE_RATE_48,
        audioChannelCount: AUDIO_CHANNEL_COUNT_1,
        audioBitrate: AUDIO_BITRATE,
        preset: INCORRECT_LONG_NUMERICAL_VALE,
      }
      await avCaptureConfigInitError('SUB_MULTIMEDIA_RECORD_CONFIG_0471', avCaptureConfig, done);
      console.info(TAG, 'SUB_MULTIMEDIA_RECORD_CONFIG_0471 end');
    })
  })
}