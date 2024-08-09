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
import audio from '@ohos.multimedia.audio';
import { BusinessError } from '@ohos.base';
import { AudioState, rand_sleep, Constant } from './Common';
import fileIo from '@ohos.file.fs';

class Options {
  offset?: number;
  length?: number;
}

let context = getContext(this);
let bufferSize: number = 10;
let renderModel: audio.AudioRenderer;
let audioStreamInfo: audio.AudioStreamInfo = {
  samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
  channels: audio.AudioChannel.CHANNEL_1,
  sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
  encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
}

let audioRendererInfo: audio.AudioRendererInfo = {
  usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
  rendererFlags: 0
}

let audioRendererOptions: audio.AudioRendererOptions = {
  streamInfo: audioStreamInfo,
  rendererInfo: audioRendererInfo
}


let writeDataCallback = async  (buffer: ArrayBuffer) => {
  let path =  getContext().filesDir;
  //确保该路径下存在该资源
  let filePath = path + '/StarWars10s-2C-48000-4SW.wav';
  console.info("filePath:"+filePath)
  let file: fileIo.File = await fileIo.openSync(filePath, fileIo.OpenMode.READ_ONLY);
  let options: Options = {
    offset: bufferSize,
    length: buffer.byteLength
  }
  fileIo.readSync(file.fd, buffer, options);
  bufferSize += buffer.byteLength;
}

export async function init(audioRendererOptions: audio.AudioRendererOptions,
  byAudioState?: audio.AudioState) {
  renderModel = await audio.createAudioRenderer(audioRendererOptions);
  (renderModel as audio.AudioRenderer).on('writeData', writeDataCallback);
  await rand_sleep(Constant.SLEEP_TIME_100);
  console.info('finish init event, renderModel state is ' + renderModel.state);
  expect(renderModel.state).assertEqual(AudioState.STATE_PREPARED);
  if (byAudioState === AudioState.STATE_RUNNING) {
    await start(renderModel);
  } else if (byAudioState === AudioState.STATE_STOPPED) {
    await start(renderModel);
    await stop(renderModel);
  } else if (byAudioState === AudioState.STATE_PAUSED) {
    await start(renderModel);
    await pause(renderModel);
  }
}

export async function start(renderModel: audio.AudioRenderer) {
  await renderModel.start();
  await rand_sleep(Constant.SLEEP_TIME_100);
  console.info('finish start event, renderModel state is ' + renderModel.state);
  expect(renderModel.state).assertEqual(AudioState.STATE_RUNNING);
}

export async function pause(renderModel: audio.AudioRenderer) {
  await renderModel.pause();
  await rand_sleep(Constant.SLEEP_TIME_100);
  console.info('finish pause event, renderModel state is ' + renderModel.state);
  expect(renderModel.state).assertEqual(AudioState.STATE_PAUSED);
}

export async function stop(renderModel: audio.AudioRenderer) {
  await renderModel.stop();
  await rand_sleep(Constant.SLEEP_TIME_100);
  console.info('finish stop event, renderModel state is ' + renderModel.state);
  expect(renderModel.state).assertEqual(AudioState.STATE_STOPPED);
}

export async function release(renderModel: audio.AudioRenderer) {
  await renderModel.release();
  await rand_sleep(Constant.SLEEP_TIME_100);
  console.info('finish release event, renderModel state is ' + renderModel.state);
  expect(renderModel.state).assertEqual(AudioState.STATE_RELEASED);
}

export async function drain(renderModel: audio.AudioRenderer) {
  let bl = (renderModel.state === AudioState.STATE_RUNNING);
  await renderModel.drain().then(() => {
    console.info('Renderer drained successfully, renderModel state is ' + renderModel.state);
    expect(renderModel.state).assertEqual(AudioState.STATE_RUNNING);
    expect(bl).assertTrue();
  }).catch((err: BusinessError) => {
    console.error(`ERROR: ${err.code} renderModel state is ${renderModel.state}`);
    expect(bl).assertFalse();
  });
  await rand_sleep(Constant.SLEEP_TIME_100);
}

export async function flush(renderModel: audio.AudioRenderer) {
  let bl = (renderModel.state === AudioState.STATE_RUNNING || renderModel.state === AudioState.STATE_PAUSED ||
    renderModel.state === AudioState.STATE_STOPPED);
  await renderModel.flush().then(() => {
    console.info('Renderer flushed successfully, renderModel state is ' + renderModel.state);
    expect(bl).assertTrue();
  }).catch((err: BusinessError) => {
    console.error(`ERROR: ${err.code} renderModel state is ${renderModel.state}`);
    expect(bl).assertFalse();
  });
  await rand_sleep(Constant.SLEEP_TIME_100);
}

export default function audioRendererTestQl() {
  describe('AudioRendererTest', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(() => {
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

    /* *
		* @tc.number    : SUB_AUDIO_AUDIORENDERER_API_1
		* @tc.name      : test renderModel basic API by promise
		* @tc.desc      : test renderModel operation: init(audioRendererOptions)->start(renderModel)->pause(renderModel)->start(renderModel)->pause(renderModel)
		* @tc.size      : AudioTest
		* @tc.type      : Function
		* @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_1', 1, async () => {
      await init(audioRendererOptions);
      await start(renderModel);
      await pause(renderModel);
      await start(renderModel);
      await pause(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_2
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions)->start(renderModel)->pause(renderModel)->start(renderModel)->stop(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_2', 2, async () => {
      await init(audioRendererOptions);
      await start(renderModel);
      await pause(renderModel);
      await start(renderModel);
      await stop(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_3
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions)->start(renderModel)->pause(renderModel)->stop(renderModel)->start(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_3', 3, async () => {
      await init(audioRendererOptions);
      await start(renderModel);
      await pause(renderModel);
      await stop(renderModel);
      await start(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_4
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions)->start(renderModel)->pause(renderModel)->stop(renderModel)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_4', 4, async () => {
      await init(audioRendererOptions);
      await start(renderModel);
      await pause(renderModel);
      await stop(renderModel);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_5
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions)->start(renderModel)->pause(renderModel)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_5', 5, async () => {
      await init(audioRendererOptions);
      await start(renderModel);
      await pause(renderModel);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_6
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions)->start(renderModel)->stop(renderModel)->start(renderModel)->pause(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_6', 6, async () => {
      await init(audioRendererOptions);
      await start(renderModel);
      await stop(renderModel);
      await start(renderModel);
      await pause(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_7
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions)->start(renderModel)->stop(renderModel)->start(renderModel)->stop(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_7', 7, async () => {
      await init(audioRendererOptions);
      await start(renderModel);
      await stop(renderModel);
      await start(renderModel);
      await stop(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_8
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions)->start(renderModel)->stop(renderModel)->stop(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_8', 8, async () => {
      await init(audioRendererOptions);
      await start(renderModel);
      await stop(renderModel);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_9
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_9', 9, async () => {
      await init(audioRendererOptions);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_10
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_RUNNING)->pause(renderModel)->start(renderModel)->pause(renderModel)->start(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_10', 10, async () => {
      await init(audioRendererOptions, AudioState.STATE_RUNNING);
      await pause(renderModel);
      await start(renderModel);
      await pause(renderModel);
      await start(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_11
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_RUNNING)->pause(renderModel)->start(renderModel)->pause(renderModel)->stop(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_11', 11, async () => {
      await init(audioRendererOptions, AudioState.STATE_RUNNING);
      await pause(renderModel);
      await start(renderModel);
      await pause(renderModel);
      await stop(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_12
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_RUNNING)->pause(renderModel)->start(renderModel)->pause(renderModel)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_12', 12, async () => {
      await init(audioRendererOptions, AudioState.STATE_RUNNING);
      await pause(renderModel);
      await start(renderModel);
      await pause(renderModel);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_13
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_RUNNING)->pause(renderModel)->start(renderModel)->stop(renderModel)->start(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_13', 13, async () => {
      await init(audioRendererOptions, AudioState.STATE_RUNNING);
      await pause(renderModel);
      await start(renderModel);
      await stop(renderModel);
      await start(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_14
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_RUNNING)->pause(renderModel)->start(renderModel)->stop(renderModel)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_14', 14, async () => {
      await init(audioRendererOptions, AudioState.STATE_RUNNING);
      await pause(renderModel);
      await start(renderModel);
      await stop(renderModel);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_15
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_RUNNING)->pause(renderModel)->stop(renderModel)->start(renderModel)->pause(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_15', 15, async () => {
      await init(audioRendererOptions, AudioState.STATE_RUNNING);
      await pause(renderModel);
      await stop(renderModel);
      await start(renderModel);
      await pause(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_16
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_RUNNING)->pause(renderModel)->stop(renderModel)->start(renderModel)->stop(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_16', 16, async () => {
      await init(audioRendererOptions, AudioState.STATE_RUNNING);
      await pause(renderModel);
      await stop(renderModel);
      await start(renderModel);
      await stop(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_17
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_RUNNING)->pause(renderModel)->stop(renderModel)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_17', 17, async () => {
      await init(audioRendererOptions, AudioState.STATE_RUNNING);
      await pause(renderModel);
      await stop(renderModel);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_18
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_RUNNING)->pause(renderModel)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_18', 18, async () => {
      await init(audioRendererOptions, AudioState.STATE_RUNNING);
      await pause(renderModel);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_19
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_RUNNING)->stop(renderModel)->start(renderModel)->pause(renderModel)->start(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_19', 19, async () => {
      await init(audioRendererOptions, AudioState.STATE_RUNNING);
      await stop(renderModel);
      await start(renderModel);
      await pause(renderModel);
      await start(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_20
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_RUNNING)->stop(renderModel)->start(renderModel)->pause(renderModel)->stop(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_20', 20, async () => {
      await init(audioRendererOptions, AudioState.STATE_RUNNING);
      await stop(renderModel);
      await start(renderModel);
      await pause(renderModel);
      await stop(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_21
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_RUNNING)->stop(renderModel)->start(renderModel)->pause(renderModel)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_21', 21, async () => {
      await init(audioRendererOptions, AudioState.STATE_RUNNING);
      await stop(renderModel);
      await start(renderModel);
      await pause(renderModel);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_22
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_RUNNING)->stop(renderModel)->start(renderModel)->stop(renderModel)->start(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_22', 22, async () => {
      await init(audioRendererOptions, AudioState.STATE_RUNNING);
      await stop(renderModel);
      await start(renderModel);
      await stop(renderModel);
      await start(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_23
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_RUNNING)->stop(renderModel)->start(renderModel)->stop(renderModel)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_23', 23, async () => {
      await init(audioRendererOptions, AudioState.STATE_RUNNING);
      await stop(renderModel);
      await start(renderModel);
      await stop(renderModel);
      await release(renderModel);
    })

    // [running]-stop()-[stopped]-release()-[released]
    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_24
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_RUNNING)->stop(renderModel)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_24', 24, async () => {
      await init(audioRendererOptions, AudioState.STATE_RUNNING);
      await stop(renderModel);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_25
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_PAUSED)->start(renderModel)->pause(renderModel)->start(renderModel)->pause(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_25', 25, async () => {
      await init(audioRendererOptions, AudioState.STATE_PAUSED);
      await start(renderModel);
      await pause(renderModel);
      await start(renderModel);
      await pause(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_26
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_PAUSED)->start(renderModel)->pause(renderModel)->start(renderModel)->stop(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_26', 26, async () => {
      await init(audioRendererOptions, AudioState.STATE_PAUSED);
      await start(renderModel);
      await pause(renderModel);
      await start(renderModel);
      await stop(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_27
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_PAUSED)->start(renderModel)->pause(renderModel)->stop(renderModel)->start(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_27', 27, async () => {
      await init(audioRendererOptions, AudioState.STATE_PAUSED);
      await start(renderModel);
      await pause(renderModel);
      await stop(renderModel);
      await start(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_28
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_PAUSED)->start(renderModel)->pause(renderModel)->stop(renderModel)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_28', 28, async () => {
      await init(audioRendererOptions, AudioState.STATE_PAUSED);
      await start(renderModel);
      await pause(renderModel);
      await stop(renderModel);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_29
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_PAUSED)->start(renderModel)->pause(renderModel)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_29', 29, async () => {
      await init(audioRendererOptions, AudioState.STATE_PAUSED);
      await start(renderModel);
      await pause(renderModel);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_30
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_PAUSED)->start(renderModel)->stop(renderModel)->start(renderModel)->pause(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_30', 30, async () => {
      await init(audioRendererOptions, AudioState.STATE_PAUSED);
      await start(renderModel);
      await stop(renderModel);
      await start(renderModel);
      await pause(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_31
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_PAUSED)->start(renderModel)->stop(renderModel)->start(renderModel)->stop(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_31', 31, async () => {
      await init(audioRendererOptions, AudioState.STATE_PAUSED);
      await start(renderModel);
      await stop(renderModel);
      await start(renderModel);
      await stop(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_32
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_PAUSED)->start(renderModel)->stop(renderModel)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_32', 32, async () => {
      await init(audioRendererOptions, AudioState.STATE_PAUSED);
      await start(renderModel);
      await stop(renderModel);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_33
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_PAUSED)->stop(renderModel)->start(renderModel)->pause(renderModel)->start(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_33', 33, async () => {
      await init(audioRendererOptions, AudioState.STATE_PAUSED);
      await stop(renderModel);
      await start(renderModel);
      await pause(renderModel);
      await start(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_34
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_PAUSED)->stop(renderModel)->start(renderModel)->pause(renderModel)->stop(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_34', 34, async () => {
      await init(audioRendererOptions, AudioState.STATE_PAUSED);
      await stop(renderModel);
      await start(renderModel);
      await pause(renderModel);
      await stop(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_35
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_PAUSED)->stop(renderModel)->start(renderModel)->pause(renderModel)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_35', 35, async () => {
      await init(audioRendererOptions, AudioState.STATE_PAUSED);
      await stop(renderModel);
      await start(renderModel);
      await pause(renderModel);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_36
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_PAUSED)->stop(renderModel)->start(renderModel)->stop(renderModel)->start(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_36', 36, async () => {
      await init(audioRendererOptions, AudioState.STATE_PAUSED);
      await stop(renderModel);
      await start(renderModel);
      await stop(renderModel);
      await start(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_37
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_PAUSED)->stop(renderModel)->start(renderModel)->stop(renderModel)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_37', 37, async () => {
      await init(audioRendererOptions, AudioState.STATE_PAUSED);
      await stop(renderModel);
      await start(renderModel);
      await stop(renderModel);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_38
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_PAUSED)->stop(renderModel)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_38', 38, async () => {
      await init(audioRendererOptions, AudioState.STATE_PAUSED);
      await stop(renderModel);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_39
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_PAUSED)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_39', 39, async () => {
      await init(audioRendererOptions, AudioState.STATE_PAUSED);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_40
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_STOPPED)->start(renderModel)->pause(renderModel)->start(renderModel)->pause(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_40', 40, async () => {
      await init(audioRendererOptions, AudioState.STATE_STOPPED);
      await start(renderModel);
      await pause(renderModel);
      await start(renderModel);
      await pause(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_41
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_STOPPED)->start(renderModel)->pause(renderModel)->start(renderModel)->stop(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_41', 41, async () => {
      await init(audioRendererOptions, AudioState.STATE_STOPPED);
      await start(renderModel);
      await pause(renderModel);
      await start(renderModel);
      await stop(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_42
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_STOPPED)->start(renderModel)->pause(renderModel)->stop(renderModel)->start(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_42', 42, async () => {
      await init(audioRendererOptions, AudioState.STATE_STOPPED);
      await start(renderModel);
      await pause(renderModel);
      await stop(renderModel);
      await start(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_43
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_STOPPED)->start(renderModel)->pause(renderModel)->stop(renderModel)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_43', 43, async () => {
      await init(audioRendererOptions, AudioState.STATE_STOPPED);
      await start(renderModel);
      await pause(renderModel);
      await stop(renderModel);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_44
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_STOPPED)->start(renderModel)->pause(renderModel)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_44', 44, async () => {
      await init(audioRendererOptions, AudioState.STATE_STOPPED);
      await start(renderModel);
      await pause(renderModel);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_45
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_STOPPED)->start(renderModel)->stop(renderModel)->start(renderModel)->pause(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_45', 45, async () => {
      await init(audioRendererOptions, AudioState.STATE_STOPPED);
      await start(renderModel);
      await stop(renderModel);
      await start(renderModel);
      await pause(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_46
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_STOPPED)->start(renderModel)->stop(renderModel)->start(renderModel)->stop(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_46', 46, async () => {
      await init(audioRendererOptions, AudioState.STATE_STOPPED);
      await start(renderModel);
      await stop(renderModel);
      await start(renderModel);
      await stop(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_47
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_STOPPED)->start(renderModel)->stop(renderModel)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_47', 47, async () => {
      await init(audioRendererOptions, AudioState.STATE_STOPPED);
      await start(renderModel);
      await stop(renderModel);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_48
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions,AudioState.STATE_STOPPED)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_48', 48, async () => {
      await init(audioRendererOptions, AudioState.STATE_STOPPED);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_49
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions)->stop(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_49', 49, async () => {
      await init(audioRendererOptions);
      await renderModel.stop().then(() => {
        console.info('Renderer stopped successfully');
      }).catch((err: BusinessError) => {
        console.error(`ERROR: ${err}`);
      });
      console.info('finish stop event, renderModel state is ' + renderModel.state);
      expect(renderModel.state).not().assertEqual(AudioState.STATE_STOPPED);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_50
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_50', 50, async () => {
      await init(audioRendererOptions);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_51
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions)->pause(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_51', 51, async () => {
      await init(audioRendererOptions);
      await renderModel.pause().then(() => {
        console.info('Renderer paused');
      }).catch((err: BusinessError) => {
        console.error(`ERROR: ${err}`);
      });
      console.info('finish pause event, renderModel state is ' + renderModel.state);
      expect(renderModel.state).not().assertEqual(AudioState.STATE_PAUSED);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_52
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation: init(audioRendererOptions)->start(renderModel)->release(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_52', 52, async () => {
      await init(audioRendererOptions);
      await start(renderModel);
      await release(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_53
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation:
     init(audioRendererOptions)->drain(renderModel)->start(renderModel)->drain(renderModel)->stop(renderModel)->
     drain(renderModel)->start(renderModel)->pause(renderModel)->drain(renderModel)->release(renderModel)->drain(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_53', 53, async () => {
      await init(audioRendererOptions);
      await drain(renderModel);
      await start(renderModel);
      await drain(renderModel);
      await stop(renderModel);
      await drain(renderModel);
      await start(renderModel);
      await pause(renderModel);
      await drain(renderModel);
      await release(renderModel);
      await drain(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_54
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation:
     init(audioRendererOptions)->flush(renderModel)->start(renderModel)->flush(renderModel)->stop(renderModel)->
     flush(renderModel)->start(renderModel)->pause(renderModel)->flush(renderModel)->release(renderModel)->flush(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_54', 54, async () => {
      await init(audioRendererOptions);
      await flush(renderModel);
      await start(renderModel);
      await flush(renderModel);
      await stop(renderModel);
      await flush(renderModel);
      await start(renderModel);
      await pause(renderModel);
      await flush(renderModel);
      await release(renderModel);
      await flush(renderModel);
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_55
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation:
     init(audioRendererOptions)->start(renderModel)->start(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_55', 55, async () => {
      try {
        await init(audioRendererOptions);
        await start(renderModel);
        await start(renderModel);
      } catch (error) {
        console.error('Error errCode is:', error.code);
        expect(error.code).assertEqual(Constant.EORRCODE);
      }
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_56
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation:
     init(audioRendererOptions,AudioState.STATE_RUNNING)->stop(renderModel)->stop(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_56', 56, async () => {
      try {
        await init(audioRendererOptions,AudioState.STATE_RUNNING);
        await stop(renderModel);
        await stop(renderModel);
      } catch (error) {
        console.error('Error errCode is:', error.code);
        expect(error.code).assertEqual(Constant.EORRCODE);
      }
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_57
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation:
     init(audioRendererOptions,AudioState.STATE_STOPPED)->pause(renderModel)->pause(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_57', 57, async () => {
      try {
        await init(audioRendererOptions,AudioState.STATE_STOPPED);
        await pause(renderModel);
        await pause(renderModel);
      } catch (error) {
        console.error('Error errCode is:', error.code);
        expect(error.code).assertEqual(Constant.EORRCODE);
      }
    })

    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_58
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation:
     init(audioRendererOptions,AudioState.STATE_PAUSED)->pause(renderModel)->pause(renderModel)
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_58', 58, async () => {
      try {
        await init(audioRendererOptions,AudioState.STATE_PAUSED);
        await release(renderModel);
        await release(renderModel);
      } catch (error) {
        console.error('Error errCode is:', error.code);
        expect(error.code).assertEqual(Constant.EORRCODE);
      }
    })


    /* *
    * @tc.number    : SUB_AUDIO_AUDIORENDERER_API_59
    * @tc.name      : test renderModel basic API by promise
    * @tc.desc      : test renderModel operation:write(buffer: ArrayBuffer): Promise<number>
    * @tc.size      : AudioTest
    * @tc.type      : Function
    * @tc.level     : Level3
    */
    it('SUB_AUDIO_AUDIORENDERER_API_59', 59, async () => {
      await init(audioRendererOptions);
      let buf = new ArrayBuffer(10);
      let writeSize: number = await renderModel.write(buf);
      console.info(`writeSize: ${writeSize}`);
      renderModel.getBufferSize().then((data: number) => {
        console.info(`AudioFrameworkRenderLog: getBufferSize: SUCCESS ${data}`);
        bufferSize = data;
        console.info(`BufferSize: ${bufferSize}`);
        let path = getContext().cacheDir;
        let filePath = path + '/StarWars10s-2C-48000-4SW.wav';
        console.info(`filePath: ${filePath}`);
        let file: fileIo.File = fileIo.openSync(filePath, fileIo.OpenMode.READ_ONLY);
        fileIo.stat(filePath).then(async (stat: fileIo.Stat) => {
          let buf = new ArrayBuffer(bufferSize);
          let len =
            stat.size % bufferSize == 0 ? Math.floor(stat.size / bufferSize) : Math.floor(stat.size / bufferSize + 1);
          for (let i = 0; i < len; i++) {
            let options: Options = {
              offset: i * bufferSize,
              length: bufferSize
            }
            let readsize: number = await fileIo.read(file.fd, buf, options)
            try {
              let writeSize: number = await renderModel.write(buf);
              console.info(`BufferSize: ${bufferSize}`);
              console.info(`writeSize: ${writeSize}`);
            } catch (err) {
              let error = err as BusinessError;
              console.error(`renderModel.write err: ${error}`);
            }
          }
        });
      }).catch((err: BusinessError) => {
        console.error(`AudioFrameworkRenderLog: getBufferSize: ERROR: ${err}`);
      });

    })

  })
}