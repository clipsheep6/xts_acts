/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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

import media from '@ohos.multimedia.media'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'

describe('VideoRecorderProfileFuncCallback', function () {
  /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_3400
    * @tc.name      : 3400.test getAudioRecorderCaps
    * @tc.desc      : outputFormat
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
  it('SUB_PROFILE_FUNCTION_PROMISE_3400', 0, async function (done) {
    let expectFormat = ["m4a"];
    console.info("test getAudioRecorderCaps");
    media.getMediaCapability().then(async (err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getAudioRecorderCaps().then(async (err, audioCapsArray) => {
          expect(err).assertUndefined();
          console.info('getAudioRecorderCaps success');
          if (typeof (audioCapsArray) != 'undefined') {
            for (let i = 0; i < audioCapsArray.length; i++) {
              console.info('audioCapsArray[' + i + '].outputFormat: ' +
                audioCapsArray[i].outputFormat);
              expect(audioCapsArray[i].outputFormat).assertEqual(expectFormat[i]);
            }
          } else {
            console.info('audioCaps is not defined');
          }
        })
        done();
      } else {
        console.info('mediaCaps is not defined');
      }
    })
  })

  /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_3500
    * @tc.name      : 3500.test getAudioRecorderCaps
    * @tc.desc      : audioEncoderMime
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
  it('SUB_PROFILE_FUNCTION_PROMISE_3500', 0, async function (done) {
    let expectAudioEncoderMime = ["audio/mp4a-latm"];
    console.info("test getAudioRecorderCaps");
    media.getMediaCapability().then(async (err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getAudioRecorderCaps().then(async (err, audioCapsArray) => {
          expect(err).assertUndefined();
          console.info('getAudioRecorderCaps success');
          if (typeof (audioCapsArray) != 'undefined') {
            for (let i = 0; i < audioCapsArray.length; i++) {
              console.info('audioCapsArray[' + i + '].audioEncoderMime: ' +
                audioCapsArray[i].audioEncoderMime);
              expect(audioCapsArray[i].audioEncoderMime).assertEqual(expectAudioEncoderMime[i]);
            }
          } else {
            console.info('audioCaps is not defined');
          }
        })
        done();
      } else {
        console.info('mediaCaps is not defined');
      }
    })
  })

  /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_3600
    * @tc.name      : 3600.test getAudioRecorderCaps
    * @tc.desc      : sampleRates
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
  it('SUB_PROFILE_FUNCTION_PROMISE_3600', 0, async function (done) {
    let expectSampleRates = ["8000,11025,12000,16000,22050,24000,32000,44100,48000,64000,88200,96000"];
    console.info("test getAudioRecorderCaps");
    media.getMediaCapability().then(async (err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getAudioRecorderCaps().then(async (err, audioCapsArray) => {
          expect(err).assertUndefined();
          console.info('getAudioRecorderCaps success');
          if (typeof (audioCapsArray) != 'undefined') {
            for (let i = 0; i < audioCapsArray.length; i++) {
              console.info('audioCapsArray[' + i + '].sampleRates: ' +
                audioCapsArray[i].sampleRates);
              expect(audioCapsArray[i].sampleRates).assertEqual(expectSampleRates[i]);
            }
          } else {
            console.info('audioCaps is not defined');
          }
        })
        done();
      } else {
        console.info('mediaCaps is not defined');
      }
    })
  })

  /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_3700
    * @tc.name      : 3700.test getAudioRecorderCaps
    * @tc.desc      : bitrateRange
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
  it('SUB_PROFILE_FUNCTION_PROMISE_3700', 0, async function (done) {
    let expectBitrateRangeMin = ["1"];
    let expectBitrateRangeMax = ["384000"];
    console.info("test getAudioRecorderCaps");
    media.getMediaCapability().then(async (err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getAudioRecorderCaps().then(async (err, audioCapsArray) => {
          expect(err).assertUndefined();
          console.info('getAudioRecorderCaps success');
          if (typeof (audioCapsArray) != 'undefined') {
            for (let i = 0; i < audioCapsArray.length; i++) {
              console.info('audioCapsArray[' + i + '].bitrateRange.min: ' +
                audioCapsArray[i].bitrateRange.min);
              console.info('audioCapsArray[' + i + '].bitrateRange.max: ' +
                audioCapsArray[i].bitrateRange.max);
              expect(audioCapsArray[i].bitrateRange.min).assertEqual(expectBitrateRangeMin[i]);
              expect(audioCapsArray[i].bitrateRange.max).assertEqual(expectBitrateRangeMax[i]);
            }
            done();
          } else {
            console.info('audioCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
  })

  /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_3800
    * @tc.name      : 3800.test getAudioRecorderCaps
    * @tc.desc      : channelRange
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
  it('SUB_PROFILE_FUNCTION_PROMISE_3800', 0, async function (done) {
    let expectChannelRangeMin = ["1"];
    let expectChannelRangeMax = ["2"];
    console.info("test getAudioRecorderCaps");
    media.getMediaCapability().then(async (err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getAudioRecorderCaps().then(async (err, audioCapsArray) => {
          expect(err).assertUndefined();
          console.info('getAudioRecorderCaps success');
          if (typeof (audioCapsArray) != 'undefined') {
            for (let i = 0; i < audioCapsArray.length; i++) {
              console.info('audioCapsArray[' + i + '].channelRange.min: ' +
                audioCapsArray[i].channelRange.min);
              console.info('audioCapsArray[' + i + '].channelRange.max: ' +
                audioCapsArray[i].channelRange.max);
              expect(audioCapsArray[i].channelRange.min).assertEqual(expectChannelRangeMin[i]);
              expect(audioCapsArray[i].channelRange.max).assertEqual(expectChannelRangeMax[i]);
            }
            done();
          } else {
            console.info('audioCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
  })

  /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_3900
    * @tc.name      : 3900.test getVideoRecorderCaps
    * @tc.desc      : outputFormat
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
  it('SUB_PROFILE_FUNCTION_PROMISE_3900', 0, async function (done) {
    let expectFormat = ["mp4"];
    console.info("test getVideoRecorderCaps");
    media.getMediaCapability().then(async (err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderCaps().then(async (err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderCaps success');
          if (typeof (videoCapsArray) != 'undefined') {
            for (let i = 0; i < videoCapsArray.length; i++) {
              console.info('videoCapsArray[' + i + '].outputFormat: ' +
                videoCapsArray[i].outputFormat);
              expect(videoCapsArray[i].outputFormat).assertEqual(expectFormat[i]);
            }
            done();
          } else {
            console.info('videoCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
  })

  /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_4000
    * @tc.name      : 4000.test getVideoRecorderCaps
    * @tc.desc      : audioEncoderMime
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
  it('SUB_PROFILE_FUNCTION_PROMISE_4000', 0, async function (done) {
    let expectAudioEncoderMime = ["audio/mp4a-latm"];
    console.info("test getVideoRecorderCaps");
    media.getMediaCapability().then(async (err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderCaps().then(async (err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderCaps success');
          if (typeof (videoCapsArray) != 'undefined') {
            for (let i = 0; i < videoCapsArray.length; i++) {
              console.info('videoCapsArray[' + i + '].audioEncoderMime: ' +
                videoCapsArray[i].audioEncoderMime);
              expect(videoCapsArray[i].audioEncoderMime).assertEqual(expectAudioEncoderMime[i]);
            }
            done();
          } else {
            console.info('videoCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
  })

  /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_4100
    * @tc.name      : 4100.test getVideoRecorderCaps
    * @tc.desc      : audioSampleRates
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
  it('SUB_PROFILE_FUNCTION_PROMISE_4100', 0, async function (done) {
    let expectSampleRates = ["8000,11025,12000,16000,22050,24000,32000,44100,48000,64000,88200,96000"];
    console.info("test getVideoRecorderCaps");
    media.getMediaCapability().then(async (err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderCaps().then(async (err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderCaps success');
          if (typeof (videoCapsArray) != 'undefined') {
            for (let i = 0; i < videoCapsArray.length; i++) {
              console.info('videoCapsArray[' + i + '].sampleRates: ' +
                videoCapsArray[i].sampleRates);
              expect(videoCapsArray[i].sampleRates).assertEqual(expectSampleRates[i]);
            }
            done();
          } else {
            console.info('videoCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
  })

  /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_4200
    * @tc.name      : 4200.test getVideoRecorderCaps
    * @tc.desc      : videoEncoderMime
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
  it('SUB_PROFILE_FUNCTION_PROMISE_4200', 0, async function (done) {
    let expectVideoEncoderMime = ["video/mp4v-es"];
    console.info("test getVideoRecorderCaps");
    media.getMediaCapability().then(async (err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderCaps().then(async (err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderCaps success');
          if (typeof (videoCapsArray) != 'undefined') {
            for (let i = 0; i < videoCapsArray.length; i++) {
              console.info('videoCapsArray[' + i + '].videoEncoderMime: ' +
                videoCapsArray[i].videoEncoderMime);
              expect(videoCapsArray[i].videoEncoderMime).assertEqual(expectVideoEncoderMime[i]);
            }
            done();
          } else {
            console.info('videoCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
  })

  /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_4300
    * @tc.name      : 4300.test getVideoRecorderCaps
    * @tc.desc      : audioBitrateRange
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
  it('SUB_PROFILE_FUNCTION_PROMISE_4300', 0, async function (done) {
    let expectAudioBitrateRangeMin = ["1"];
    let expectAudioBitrateRangeMax = ["384000"];
    console.info("test getVideoRecorderCaps");
    media.getMediaCapability().then(async (err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderCaps().then(async (err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderCaps success');
          if (typeof (videoCapsArray) != 'undefined') {
            for (let i = 0; i < videoCapsArray.length; i++) {
              console.info('videoCapsArray[' + i + '].audioBitrateRange.min: ' +
                videoCapsArray[i].audioBitrateRange.min);
              console.info('videoCapsArray[' + i + '].audioBitrateRange.max: ' +
                videoCapsArray[i].audioBitrateRange.max);
              expect(videoCapsArray[i].audioBitrateRange.min).assertEqual(expectAudioBitrateRangeMin[i]);
              expect(videoCapsArray[i].audioBitrateRange.max).assertEqual(expectAudioBitrateRangeMax[i]);
            }
            done();
          } else {
            console.info('videoCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
  })

  /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_4400
    * @tc.name      : 4400.test getVideoRecorderCaps
    * @tc.desc      : audioChannelRange
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
  it('SUB_PROFILE_FUNCTION_PROMISE_4400', 0, async function (done) {
    let expectAudioChannelRangeMin = ["1"];
    let expectAudioChannelRangeMax = ["2"];
    console.info("test getVideoRecorderCaps");
    media.getMediaCapability().then(async (err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderCaps().then(async (err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderCaps success');
          if (typeof (videoCapsArray) != 'undefined') {
            for (let i = 0; i < videoCapsArray.length; i++) {
              console.info('videoCapsArray[' + i + '].audioChannelRange.min: ' +
                videoCapsArray[i].audioChannelRange.min);
              console.info('videoCapsArray[' + i + '].audioChannelRange.max: ' +
                videoCapsArray[i].audioChannelRange.max);
              expect(videoCapsArray[i].audioChannelRange.min).assertEqual(expectAudioChannelRangeMin[i]);
              expect(videoCapsArray[i].audioChannelRange.max).assertEqual(expectAudioChannelRangeMax[i]);
            }
            done();
          } else {
            console.info('videoCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
  })

  /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_4500
    * @tc.name      : 4500.test getVideoRecorderCaps
    * @tc.desc      : videoBitrateRange
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
  it('SUB_PROFILE_FUNCTION_PROMISE_4500', 0, async function (done) {
    let expectVideoBitrateRangeMin = ["1"];
    let expectVideoBitrateRangeMax = ["3000000"];
    console.info("test getVideoRecorderCaps");
    media.getMediaCapability().then(async (err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderCaps().then(async (err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderCaps success');
          if (typeof (videoCapsArray) != 'undefined') {
            for (let i = 0; i < videoCapsArray.length; i++) {
              console.info('videoCapsArray[' + i + '].videoBitrateRange.min: ' +
                videoCapsArray[i].videoBitrateRange.min);
              console.info('videoCapsArray[' + i + '].videoBitrateRange.max: ' +
                videoCapsArray[i].videoBitrateRange.max);
              expect(videoCapsArray[i].videoBitrateRange.min).assertEqual(expectVideoBitrateRangeMin[i]);
              expect(videoCapsArray[i].videoBitrateRange.max).assertEqual(expectVideoBitrateRangeMax[i]);
            }
            done();
          } else {
            console.info('videoCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
  })

  /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_4600
    * @tc.name      : 4600.test getVideoRecorderCaps
    * @tc.desc      : videoFramerateRange
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
  it('SUB_PROFILE_FUNCTION_PROMISE_4600', 0, async function (done) {
    let expectVideoFramerateRangeMin = ["1"];
    let expectVideoFramerateRangeMax = ["30"];
    console.info("test getVideoRecorderCaps");
    media.getMediaCapability().then(async (err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderCaps().then(async (err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderCaps success');
          if (typeof (videoCapsArray) != 'undefined') {
            for (let i = 0; i < videoCapsArray.length; i++) {
              console.info('videoCapsArray[' + i + '].videoFramerateRange.min: ' +
                videoCapsArray[i].videoFramerateRange.min);
              console.info('videoCapsArray[' + i + '].videoFramerateRange.max: ' +
                videoCapsArray[i].videoFramerateRange.max);
              expect(videoCapsArray[i].videoFramerateRange.min).assertEqual(
                expectVideoFramerateRangeMin[i]);
              expect(videoCapsArray[i].videoFramerateRange.max).assertEqual(
                expectVideoFramerateRangeMin[i]);
            }
            done();
          } else {
            console.info('videoCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
  })

  /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_4700
    * @tc.name      : 4700.test getVideoRecorderCaps
    * @tc.desc      : videoWidthRange
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
  it('SUB_PROFILE_FUNCTION_PROMISE_4700', 0, async function (done) {
    let expectVideoWidthRangeMin = ["2"];
    let expectVideoWidthRangeMax = ["1920"];
    console.info("test getVideoRecorderCaps");
    media.getMediaCapability().then(async (err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderCaps().then(async (err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderCaps success');
          if (typeof (videoCapsArray) != 'undefined') {
            for (let i = 0; i < videoCapsArray.length; i++) {
              console.info('videoCapsArray[' + i + '].videoWidthRange.min: ' +
                videoCapsArray[i].videoWidthRange.min);
              console.info('videoCapsArray[' + i + '].videoWidthRange.max: ' +
                videoCapsArray[i].videoWidthRange.max);
              expect(videoCapsArray[i].videoWidthRange.min).assertEqual(
                expectVideoWidthRangeMin[i]);
              expect(videoCapsArray[i].videoWidthRange.max).assertEqual(
                expectVideoWidthRangeMax[i]);
            }
            done();
          } else {
            console.info('videoCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
  })

  /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_4800
    * @tc.name      : 4800.test getVideoRecorderCaps
    * @tc.desc      : videoHeightRange
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
  it('SUB_PROFILE_FUNCTION_PROMISE_4800', 0, async function (done) {
    let expectVideoHeightRangeMin = ["2"];
    let expectVideoHeightRangeMax = ["1080"];
    console.info("test getVideoRecorderCaps");
    media.getMediaCapability().then(async (err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderCaps().then(async (err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderCaps success');
          if (typeof (videoCapsArray) != 'undefined') {
            for (let i = 0; i < videoCapsArray.length; i++) {
              console.info('videoCapsArray[' + i + '].videoHeightRange.min: ' +
                videoCapsArray[i].videoHeightRange.min);
              console.info('videoCapsArray[' + i + '].videoHeightRange.max: ' +
                videoCapsArray[i].videoHeightRange.max);
              expect(videoCapsArray[i].videoHeightRange.min).assertEqual(
                expectVideoHeightRangeMin[i]);
              expect(videoCapsArray[i].videoHeightRange.max).assertEqual(
                expectVideoHeightRangeMax[i]);
            }
            done();
          } else {
            console.info('videoCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
  })

  /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_4900
    * @tc.name      : 4900.test getVideoRecorderProfile
    * @tc.desc      : sourceId 0 qualityLevel 0
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
  it('SUB_PROFILE_FUNCTION_PROMISE_4900', 0, async function (done) {
    let expectProfile = {
      "audioBitrate": 0,
      "audioChannels": 0,
      "audioCodec": media.CodecMimeType.VIDEO_AVC,
      "audioSampleRate": 44100,
      "durationTime": 10030,
      "fileFormat": mddia.ContainerFormatType.CFT_MPEG_4,
      "qualityLevel": media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW,
      "videoBitrate": 0,
      "videoCodec": media.CodecMimeType.VIDEO_H263,
      "videoFrameWidth": 480,
      "videoFrameHeight": 720,
      "videoFrameRate": 44100,
    }
    console.info("test getVideoRecorderProfile");
    media.getMediaCapability().then(async (err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderProfile(0, 0).then(async (err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderProfile success');
          for (let i = 0; i < videoCapsArray.length; i++) {
            expect(videoCapsArray[i]).assertEqual(expectProfile[i]);
          }
        })
        done();
      } else {
        console.info('mediaCaps is not defined');
      }
    })
  })

  /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_5000
    * @tc.name      : 5000.test getVideoRecorderProfile
    * @tc.desc      : sourceId 1 qualityLevel 0
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
  it('SUB_PROFILE_FUNCTION_PROMISE_5000', 0, async function (done) {
    let expectProfile = {
      "audioBitrate": 0,
      "audioChannels": 0,
      "audioCodec": media.CodecMimeType.VIDEO_AVC,
      "audioSampleRate": 44100,
      "durationTime": 10030,
      "fileFormat": mddia.ContainerFormatType.CFT_MPEG_4,
      "qualityLevel": media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW,
      "videoBitrate": 0,
      "videoCodec": media.CodecMimeType.VIDEO_H263,
      "videoFrameWidth": 480,
      "videoFrameHeight": 720,
      "videoFrameRate": 44100,
    }
    console.info("test getVideoRecorderProfile");
    media.getMediaCapability().then(async (err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderProfile(1, 0).then(async (err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderProfile success');
          for (let i = 0; i < videoCapsArray.length; i++) {
            expect(videoCapsArray[i]).assertEqual(expectProfile[i]);
          }
        })
        done();
      } else {
        console.info('mediaCaps is not defined');
      }
    })
  })

  /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_5100
    * @tc.name      : 5100.test isAudioRecoderConfigSupported
    * @tc.desc      : isAudioRecoderConfigSupported true
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
  it('SUB_PROFILE_FUNCTION_PROMISE_5100', 0, async function (done) {
    console.info("test isAudioRecoderConfigSupported");
    let audioProfile = {
      "outputFormat": media.ContainerFormatType.CFT_MPEG_4A,
      "audioEncoderMime": media.CodecMimeType.AUDIO_AAC,
      "bitrate": 8000,
      "sampleRate": 500,
      "channel": 1,
    }
    media.getMediaCapability().then(async (err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.isAudioRecoderConfigSupported(audioProfile).then(async (err, ean) => {
          expect(err).assertUndefined();
          expect(ean).assertEqual(true);
          console.info('isAudioRecoderConfigSupported: success');
        })
        done();
      } else {
        console.info('mediaCaps is not defined');
      }
    })
  })

  /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_5200
    * @tc.name      : 5200.test hasVideoRecorderProfile
    * @tc.desc      : sourceId 0 qualityLevel 0
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
  it('SUB_PROFILE_FUNCTION_PROMISE_5200', 0, async function (done) {
    console.info("test hasVideoRecorderProfile");
    media.getMediaCapability().then(async (err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.hasVideoRecorderProfile(0, 0).then(async (err, ean) => {
          expect(err).assertUndefined();
          expect(ean).assertEqual(true);
          console.info('hasVideoRecorderProfile success');
        })
        done();
      } else {
        console.info('mediaCaps is not defined');
      }
    })
  })

  /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_5300
    * @tc.name      : 5300.test hasVideoRecorderProfile
    * @tc.desc      : sourceId 1 qualityLevel 0
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
  it('SUB_PROFILE_FUNCTION_PROMISE_5300', 0, async function (done) {
    console.info("test hasVideoRecorderProfile");
    media.getMediaCapability().then(async (err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.hasVideoRecorderProfile(1, 0).then(async (err, ean) => {
          expect(err).assertUndefined();
          expect(ean).assertEqual(true);
          console.info('hasVideoRecorderProfile success');
        })
        done();
      } else {
        console.info('mediaCaps is not defined');
      }
    })
  })
})

