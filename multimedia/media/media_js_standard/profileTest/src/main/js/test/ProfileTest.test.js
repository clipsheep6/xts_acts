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
import fileio from '@ohos.fileio'
import abilityAccessCtrl from '@ohos.abilityAccessCtrl'
import bundle from '@ohos.bundle'
import featureAbility from '@ohos.ability.featureAbility'
import mediaLibrary from '@ohos.multimedia.mediaLibrary'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'

describe('VideoRecorderProfileFuncCallback', function () {
  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_0100
      * @tc.name      : 0100.test getAudioRecorderCaps
      * @tc.desc      : outputFormat
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_0100', 0, async function (done) {
    var expectFormat = ["m4a"];
    console.info("test getAudioRecorderCaps");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getAudioRecorderCaps((err, audioCapsArray) => {
          expect(err).assertUndefined();
          console.info('getAudioRecorderCaps success');
          if (typeof (audioCapsArray) != 'undefined') {
            for (var i = 0; i < audioCapsArray.length; i++) {
              console.info('audioCapsArray[' + i + '].outputFormat: ' +
                audioCapsArray[i].outputFormat);
              expect(audioCapsArray[i].outputFormat).assertEqual(expectFormat[i]);
            }
          } else {
            console.info('audioCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
      done();
    })
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_0200
      * @tc.name      : 0200.test getAudioRecorderCaps
      * @tc.desc      : audioEncoderMime
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_0200', 0, async function (done) {
    var expectAudioEncoderMime = ["audio/mp4a-latm"];
    console.info("test getAudioRecorderCaps");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getAudioRecorderCaps((err, audioCapsArray) => {
          expect(err).assertUndefined();
          console.info('getAudioRecorderCaps success');
          if (typeof (audioCapsArray) != 'undefined') {
            for (var i = 0; i < audioCapsArray.length; i++) {
              console.info('audioCapsArray[' + i + '].audioEncoderMime: ' +
                audioCapsArray[i].audioEncoderMime);
              expect(audioCapsArray[i].audioEncoderMime).assertEqual(expectAudioEncoderMime[i]);
            }
          } else {
            console.info('audioCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
      done();
    })
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_0300
      * @tc.name      : 0300.test getAudioRecorderCaps
      * @tc.desc      : sampleRates
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_0300', 0, async function (done) {
    var expectSampleRates = ["8000,11025,12000,16000,22050,24000,32000,44100,48000,64000,88200,96000"];
    console.info("test getAudioRecorderCaps");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getAudioRecorderCaps((err, audioCapsArray) => {
          expect(err).assertUndefined();
          console.info('getAudioRecorderCaps success');
          if (typeof (audioCapsArray) != 'undefined') {
            for (var i = 0; i < audioCapsArray.length; i++) {
              console.info('audioCapsArray[' + i + '].sampleRates: ' +
                audioCapsArray[i].sampleRates);
              expect(audioCapsArray[i].sampleRates).assertEqual(expectSampleRates[i]);
            }
          } else {
            console.info('audioCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
      done();
    })
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_0400
      * @tc.name      : 0400.test getAudioRecorderCaps
      * @tc.desc      : bitrateRange
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_0400', 0, async function (done) {
    var expectBitrateRangeMin = ["1"];
    var expectBitrateRangeMax = ["384000"];
    console.info("test getAudioRecorderCaps");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getAudioRecorderCaps((err, audioCapsArray) => {
          expect(err).assertUndefined();
          console.info('getAudioRecorderCaps success');
          if (typeof (audioCapsArray) != 'undefined') {
            for (var i = 0; i < audioCapsArray.length; i++) {
              console.info('audioCapsArray[' + i + '].bitrateRange.min: ' +
                audioCapsArray[i].bitrateRange.min);
              console.info('audioCapsArray[' + i + '].bitrateRange.max: ' +
                audioCapsArray[i].bitrateRange.max);
              expect(audioCapsArray[i].bitrateRange.min).assertEqual(expectBitrateRangeMin[i]);
              expect(audioCapsArray[i].bitrateRange.max).assertEqual(expectBitrateRangeMax[i]);
            }
          } else {
            console.info('audioCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
      done();
    })
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_0500
      * @tc.name      : 0500.test getAudioRecorderCaps
      * @tc.desc      : channelRange
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_0500', 0, async function (done) {
    var expectChannelRangeMin = ["1"];
    var expectChannelRangeMax = ["2"];
    console.info("test getAudioRecorderCaps");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getAudioRecorderCaps((err, audioCapsArray) => {
          expect(err).assertUndefined();
          console.info('getAudioRecorderCaps success');
          if (typeof (audioCapsArray) != 'undefined') {
            for (var i = 0; i < audioCapsArray.length; i++) {
              console.info('audioCapsArray[' + i + '].channelRange.min: ' +
                audioCapsArray[i].channelRange.min);
              console.info('audioCapsArray[' + i + '].channelRange.max: ' +
                audioCapsArray[i].channelRange.max);
              expect(audioCapsArray[i].channelRange.min).assertEqual(expectChannelRangeMin[i]);
              expect(audioCapsArray[i].channelRange.max).assertEqual(expectChannelRangeMax[i]);
            }
          } else {
            console.info('audioCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
      done();
    })
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_0600
      * @tc.name      : 0600.test getVideoRecorderCaps
      * @tc.desc      : outputFormat
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_0600', 0, async function (done) {
    var expectFormat = ["mp4"];
    console.info("test getVideoRecorderCaps");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderCaps((err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderCaps success');
          if (typeof (videoCapsArray) != 'undefined') {
            for (var i = 0; i < videoCapsArray.length; i++) {
              console.info('videoCapsArray[' + i + '].outputFormat: ' +
                videoCapsArray[i].outputFormat);
              expect(videoCapsArray[i].outputFormat).assertEqual(expectFormat[i]);
            }
          } else {
            console.info('videoCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
      done();
    })
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_0700
      * @tc.name      : 0700.test getVideoRecorderCaps
      * @tc.desc      : audioEncoderMime
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_0700', 0, async function (done) {
    var expectAudioEncoderMime = ["audio/mp4a-latm"];
    console.info("test getVideoRecorderCaps");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderCaps((err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderCaps success');
          if (typeof (videoCapsArray) != 'undefined') {
            for (var i = 0; i < videoCapsArray.length; i++) {
              console.info('videoCapsArray[' + i + '].audioEncoderMime: ' +
                videoCapsArray[i].audioEncoderMime);
              expect(videoCapsArray[i].audioEncoderMime).assertEqual(expectAudioEncoderMime[i]);
            }
          } else {
            console.info('videoCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
      done();
    })
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_0800
      * @tc.name      : 0800.test getVideoRecorderCaps
      * @tc.desc      : audioSampleRates
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_0800', 0, async function (done) {
    var expectSampleRates = ["8000,11025,12000,16000,22050,24000,32000,44100,48000,64000,88200,96000"];
    console.info("test getVideoRecorderCaps");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderCaps((err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderCaps success');
          if (typeof (videoCapsArray) != 'undefined') {
            for (var i = 0; i < videoCapsArray.length; i++) {
              console.info('videoCapsArray[' + i + '].sampleRates: ' +
                videoCapsArray[i].sampleRates);
              expect(videoCapsArray[i].sampleRates).assertEqual(expectSampleRates[i]);
            }
          } else {
            console.info('videoCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
      done();
    })
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_0900
      * @tc.name      : 0900.test getVideoRecorderCaps
      * @tc.desc      : videoEncoderMime
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_0900', 0, async function (done) {
    var expectVideoEncoderMime = ["video/mp4v-es"];
    console.info("test getVideoRecorderCaps");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderCaps((err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderCaps success');
          if (typeof (videoCapsArray) != 'undefined') {
            for (var i = 0; i < videoCapsArray.length; i++) {
              console.info('videoCapsArray[' + i + '].videoEncoderMime: ' +
                videoCapsArray[i].videoEncoderMime);
              expect(videoCapsArray[i].videoEncoderMime).assertEqual(expectVideoEncoderMime[i]);
            }
          } else {
            console.info('videoCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
      done();
    })
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_1000
      * @tc.name      : 1000.test getVideoRecorderCaps
      * @tc.desc      : audioBitrateRange
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_1000', 0, async function (done) {
    var expectAudioBitrateRangeMin = ["1"];
    var expectAudioBitrateRangeMax = ["384000"];
    console.info("test getVideoRecorderCaps");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderCaps((err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderCaps success');
          if (typeof (videoCapsArray) != 'undefined') {
            for (var i = 0; i < videoCapsArray.length; i++) {
              console.info('videoCapsArray[' + i + '].audioBitrateRange.min: ' +
                videoCapsArray[i].audioBitrateRange.min);
              console.info('videoCapsArray[' + i + '].audioBitrateRange.max: ' +
                videoCapsArray[i].audioBitrateRange.max);
              expect(videoCapsArray[i].audioBitrateRange.min).assertEqual(expectAudioBitrateRangeMin[i]);
              expect(videoCapsArray[i].audioBitrateRange.max).assertEqual(expectAudioBitrateRangeMax[i]);
            }
          } else {
            console.info('videoCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
      done();
    })
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_1100
      * @tc.name      : 1100.test getVideoRecorderCaps
      * @tc.desc      : audioChannelRange
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_0900', 0, async function (done) {
    var expectAudioChannelRangeMin = ["1"];
    var expectAudioChannelRangeMax = ["2"];
    console.info("test getVideoRecorderCaps");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderCaps((err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderCaps success');
          if (typeof (videoCapsArray) != 'undefined') {
            for (var i = 0; i < videoCapsArray.length; i++) {
              console.info('videoCapsArray[' + i + '].audioChannelRange.min: ' +
                videoCapsArray[i].audioChannelRange.min);
              console.info('videoCapsArray[' + i + '].audioChannelRange.max: ' +
                videoCapsArray[i].audioChannelRange.max);
              expect(videoCapsArray[i].audioChannelRange.min).assertEqual(expectAudioChannelRangeMin[i]);
              expect(videoCapsArray[i].audioChannelRange.max).assertEqual(expectAudioChannelRangeMax[i]);
            }
          } else {
            console.info('videoCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
      done();
    })
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_1200
      * @tc.name      : 1200.test getVideoRecorderCaps
      * @tc.desc      : videoBitrateRange
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_1200', 0, async function (done) {
    var expectVideoBitrateRangeMin = ["1"];
    var expectVideoBitrateRangeMax = ["3000000"];
    console.info("test getVideoRecorderCaps");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderCaps((err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderCaps success');
          if (typeof (videoCapsArray) != 'undefined') {
            for (var i = 0; i < videoCapsArray.length; i++) {
              console.info('videoCapsArray[' + i + '].videoBitrateRange.min: ' +
                videoCapsArray[i].videoBitrateRange.min);
              console.info('videoCapsArray[' + i + '].videoBitrateRange.max: ' +
                videoCapsArray[i].videoBitrateRange.max);
              expect(videoCapsArray[i].videoBitrateRange.min).assertEqual(expectVideoBitrateRangeMin[i]);
              expect(videoCapsArray[i].videoBitrateRange.max).assertEqual(expectVideoBitrateRangeMax[i]);
            }
          } else {
            console.info('videoCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
      done();
    })
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_1300
      * @tc.name      : 1300.test getVideoRecorderCaps
      * @tc.desc      : videoFramerateRange
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_1300', 0, async function (done) {
    var expectVideoFramerateRangeMin = ["1"];
    var expectVideoFramerateRangeMax = ["30"];
    console.info("test getVideoRecorderCaps");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderCaps((err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderCaps success');
          if (typeof (videoCapsArray) != 'undefined') {
            for (var i = 0; i < videoCapsArray.length; i++) {
              console.info('videoCapsArray[' + i + '].videoFramerateRange.min: ' +
                videoCapsArray[i].videoFramerateRange.min);
              console.info('videoCapsArray[' + i + '].videoFramerateRange.max: ' +
                videoCapsArray[i].videoFramerateRange.max);
              expect(videoCapsArray[i].videoFramerateRange.min).assertEqual(
                expectVideoFramerateRangeMin[i]);
              expect(videoCapsArray[i].videoFramerateRange.max).assertEqual(
                expectVideoFramerateRangeMin[i]);
            }
          } else {
            console.info('videoCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
      done();
    })
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_1400
      * @tc.name      : 1400.test getVideoRecorderCaps
      * @tc.desc      : videoWidthRange
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_1400', 0, async function (done) {
    var expectVideoWidthRangeMin = ["2"];
    var expectVideoWidthRangeMax = ["1920"];
    console.info("test getVideoRecorderCaps");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderCaps((err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderCaps success');
          if (typeof (videoCapsArray) != 'undefined') {
            for (var i = 0; i < videoCapsArray.length; i++) {
              console.info('videoCapsArray[' + i + '].videoWidthRange.min: ' +
                videoCapsArray[i].videoWidthRange.min);
              console.info('videoCapsArray[' + i + '].videoWidthRange.max: ' +
                videoCapsArray[i].videoWidthRange.max);
              expect(videoCapsArray[i].videoWidthRange.min).assertEqual(
                expectVideoWidthRangeMin[i]);
              expect(videoCapsArray[i].videoWidthRange.max).assertEqual(
                expectVideoWidthRangeMax[i]);
            }
          } else {
            console.info('videoCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
      done();
    })
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_1500
      * @tc.name      : 1500.test getVideoRecorderCaps
      * @tc.desc      : videoHeightRange
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_1500', 0, async function (done) {
    var expectVideoHeightRangeMin = ["2"];
    var expectVideoHeightRangeMax = ["1080"];
    console.info("test getVideoRecorderCaps");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderCaps((err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderCaps success');
          if (typeof (videoCapsArray) != 'undefined') {
            for (var i = 0; i < videoCapsArray.length; i++) {
              console.info('videoCapsArray[' + i + '].videoHeightRange.min: ' +
                videoCapsArray[i].videoHeightRange.min);
              console.info('videoCapsArray[' + i + '].videoHeightRange.max: ' +
                videoCapsArray[i].videoHeightRange.max);
              expect(videoCapsArray[i].videoHeightRange.min).assertEqual(
                expectVideoHeightRangeMin[i]);
              expect(videoCapsArray[i].videoHeightRange.max).assertEqual(
                expectVideoHeightRangeMax[i]);
            }
          } else {
            console.info('videoCaps is not defined');
          }
        })
      } else {
        console.info('mediaCaps is not defined');
      }
      done();
    })
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_1600
      * @tc.name      : 1600.test getVideoRecorderProfile
      * @tc.desc      : sourceId 0 qualityLevel 0
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_1600', 0, async function (done) {
    console.info("test getVideoRecorderProfile");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderProfile(0, 0, (err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderProfile success');
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
    done();
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_1700
      * @tc.name      : 1700.test getVideoRecorderProfile
      * @tc.desc      : sourceId 1 qualityLevel 0
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_1700', 0, async function (done) {
    console.info("test getVideoRecorderProfile");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderProfile(1, 0, (err, videoCapsArray) => {
          expect(err).assertUndefined();
          console.info('getVideoRecorderProfile success');
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
    done();
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_1800
      * @tc.name      : 1800.test isAudioRecoderConfigSupported
      * @tc.desc      : isAudioRecoderConfigSupported true
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_1800', 0, async function (done) {
    console.info("test isAudioRecoderConfigSupported");
    let audioProfile = {
      "outputFormat": CFT_MPEG_4A,
      "audioEncoderMime": AUDIO_AAC,
      "bitrate": 8000,
      "sampleRate": 500,
      "channel": 1,
    }
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.isAudioRecoderConfigSupported(audioProfile, (err, ean) => {
          expect(err).assertUndefined();
          expect(ean).assertEqual(true);
          console.info('isAudioRecoderConfigSupported: success');
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
    done();
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_1900
      * @tc.name      : 1900.test hasVideoRecorderProfile
      * @tc.desc      : sourceId 0 qualityLevel 0
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_1900', 0, async function (done) {
    console.info("test hasVideoRecorderProfile");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.hasVideoRecorderProfile(0, 0, (err, ean) => {
          expect(err).assertUndefined();
          expect(ean).assertEqual(true);
          console.info('hasVideoRecorderProfile success');
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
    done();
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_2000
      * @tc.name      : 2000.test hasVideoRecorderProfile
      * @tc.desc      : sourceId 1 qualityLevel 0
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_2000', 0, async function (done) {
    console.info("test hasVideoRecorderProfile");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.hasVideoRecorderProfile(1, 0, (err, ean) => {
          expect(err).assertUndefined();
          expect(ean).assertEqual(true);
          console.info('hasVideoRecorderProfile success');
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
    done();
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_2100
      * @tc.name      : 2100.test getVideoRecorderProfile
      * @tc.desc      : sourceId -1 qualityLevel 0
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_2100', 0, async function (done) {
    console.info("test getVideoRecorderProfile");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderProfile(-1, 0, (err, videoCapsArray) => {
          expect(err).assertUndefined();
          expect(typeof (videoCapsArray)).assertEqual(undefined);
          console.info('getVideoRecorderProfile success');
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
    done();
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_2200
      * @tc.name      : 2200.test getVideoRecorderProfile
      * @tc.desc      : sourceId 0 qualityLevel -1
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_2200', 0, async function (done) {
    console.info("test getVideoRecorderProfile");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderProfile(0, -1, (err, videoCapsArray) => {
          expect(err).assertUndefined();
          expect(typeof (videoCapsArray)).assertEqual(undefined);
          console.info('getVideoRecorderProfile success');
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
    done();
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_2300
      * @tc.name      : 2300.test getVideoRecorderProfile
      * @tc.desc      : sourceId 100000 qualityLevel 0
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_2300', 0, async function (done) {
    console.info("test getVideoRecorderProfile");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderProfile(100000, 0, (err, videoCapsArray) => {
          expect(err).assertUndefined();
          expect(typeof (videoCapsArray)).assertEqual(undefined);
          console.info('getVideoRecorderProfile success');
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
    done();
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_2400
      * @tc.name      : 2400.test getVideoRecorderProfile
      * @tc.desc      : sourceId 0 qualityLevel 100000
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_2400', 0, async function (done) {
    console.info("test getVideoRecorderProfile");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.getVideoRecorderProfile(0, 100000, (err, videoCapsArray) => {
          expect(err).assertUndefined();
          expect(typeof (videoCapsArray)).assertEqual(undefined);
          console.info('getVideoRecorderProfile success');
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
    done();
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_2500
      * @tc.name      : 2500.test isAudioRecoderConfigSupported
      * @tc.desc      : isAudioRecoderConfigSupported false
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_2500', 0, async function (done) {
    console.info("test isAudioRecoderConfigSupported");
    let audioProfile = {
      "outputFormat": "aaa",
      "audioEncoderMime": "aaa",
      "bitrate": 1000000,
      "sampleRate": 1000000,
      "channel": 0,
    }
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.isAudioRecoderConfigSupported(audioProfile, (err, ean) => {
          expect(err).assertUndefined();
          expect(ean).assertEqual(false);
          console.info('isAudioRecoderConfigSupported: success');
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
    done();
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_2600
      * @tc.name      : 2600.test hasVideoRecorderProfile
      * @tc.desc      : sourceId -1 qualityLevel 0
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_2600', 0, async function (done) {
    console.info("test hasVideoRecorderProfile");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.hasVideoRecorderProfile(-1, 0, (err, ean) => {
          expect(err).assertUndefined();
          expect(ean).assertEqual(false);
          console.info('hasVideoRecorderProfile success');
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
    done();
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_2700
      * @tc.name      : 2700.test hasVideoRecorderProfile
      * @tc.desc      : sourceId 0 qualityLevel -1
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_2700', 0, async function (done) {
    console.info("test hasVideoRecorderProfile");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.hasVideoRecorderProfile(0, -1, (err, ean) => {
          expect(err).assertUndefined();
          expect(ean).assertEqual(false);
          console.info('hasVideoRecorderProfile success');
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
    done();
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_2800
      * @tc.name      : 2800.test hasVideoRecorderProfile
      * @tc.desc      : sourceId 100000 qualityLevel 0
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_2800', 0, async function (done) {
    console.info("test hasVideoRecorderProfile");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.hasVideoRecorderProfile(100000, 0, (err, ean) => {
          expect(err).assertUndefined();
          expect(ean).assertEqual(false);
          console.info('hasVideoRecorderProfile success');
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
    done();
  })

  /* *
      * @tc.number    : SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_2900
      * @tc.name      : 2900.test hasVideoRecorderProfile
      * @tc.desc      : sourceId 0 qualityLevel 100000
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
  it('SUB_MEDIA_VIDEO_PROFILE_FUNCTION_CALLBACK_2900', 0, async function (done) {
    console.info("test hasVideoRecorderProfile");
    media.getMediaCapability((err, mediaCaps) => {
      expect(err).assertUndefined();
      console.info('getMediaCapability success');
      if (typeof (mediaCaps) != 'undefined') {
        mediaCaps.hasVideoRecorderProfile(0, 100000, (err, ean) => {
          expect(err).assertUndefined();
          expect(ean).assertEqual(false);
          console.info('hasVideoRecorderProfile success');
        })
      } else {
        console.info('mediaCaps is not defined');
      }
    })
    done();
  })
})

