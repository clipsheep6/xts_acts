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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('VideoRecorderProfileFuncCallback', function () {
    /* *
      * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_2100
      * @tc.name      : 2100.test getVideoRecorderProfile
      * @tc.desc      : sourceId -1 qualityLevel 0
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
    it('SUB_PROFILE_FUNCTION_CALLBACK_2100', 0, async function (done) {
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
                done();
            } else {
                console.info('mediaCaps is not defined');
            }
        })
    })

    /* *
      * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_2200
      * @tc.name      : 2200.test getVideoRecorderProfile
      * @tc.desc      : sourceId 0 qualityLevel -1
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
    it('SUB_PROFILE_FUNCTION_CALLBACK_2200', 0, async function (done) {
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
                done();
            } else {
                console.info('mediaCaps is not defined');
            }
        })
    })

    /* *
      * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_2300
      * @tc.name      : 2300.test getVideoRecorderProfile
      * @tc.desc      : sourceId 100000 qualityLevel 0
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
    it('SUB_PROFILE_FUNCTION_CALLBACK_2300', 0, async function (done) {
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
                done();
            } else {
                console.info('mediaCaps is not defined');
            }
        })
    })

    /* *
      * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_2400
      * @tc.name      : 2400.test getVideoRecorderProfile
      * @tc.desc      : sourceId 0 qualityLevel 100000
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
    it('SUB_PROFILE_FUNCTION_CALLBACK_2400', 0, async function (done) {
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
                done();
            } else {
                console.info('mediaCaps is not defined');
            }
        })
    })

    /* *
      * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_2600
      * @tc.name      : 2600.test hasVideoRecorderProfile
      * @tc.desc      : sourceId -1 qualityLevel 0
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
    it('SUB_PROFILE_FUNCTION_CALLBACK_2600', 0, async function (done) {
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
                done();
            } else {
                console.info('mediaCaps is not defined');
            }
        })
    })

    /* *
      * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_2700
      * @tc.name      : 2700.test hasVideoRecorderProfile
      * @tc.desc      : sourceId 0 qualityLevel -1
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
    it('SUB_PROFILE_FUNCTION_CALLBACK_2700', 0, async function (done) {
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
                done();
            } else {
                console.info('mediaCaps is not defined');
            }
        })
    })

    /* *
      * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_2800
      * @tc.name      : 2800.test hasVideoRecorderProfile
      * @tc.desc      : sourceId 100000 qualityLevel 0
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
    it('SUB_PROFILE_FUNCTION_CALLBACK_2800', 0, async function (done) {
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
                done();
            } else {
                console.info('mediaCaps is not defined');
            }
        })
    })

    /* *
      * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_2900
      * @tc.name      : 2900.test hasVideoRecorderProfile
      * @tc.desc      : sourceId 0 qualityLevel 100000
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
    it('SUB_PROFILE_FUNCTION_CALLBACK_2900', 0, async function (done) {
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
                done();
            } else {
                console.info('mediaCaps is not defined');
            }
        })
    })

    /* *
      * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_2500
      * @tc.name      : 2500.test isAudioRecoderConfigSupported
      * @tc.desc      : isAudioRecoderConfigSupported false
      * @tc.size      : MediumTest
      * @tc.type      : Function test
      * @tc.level     : Level0
  */
    it('SUB_PROFILE_FUNCTION_CALLBACK_2500', 0, async function (done) {
        console.info("test isAudioRecoderConfigSupported");
        let audioProfile = {
            "outputFormat": 'aaa',
            "audioEncoderMime": media.CodecMimeType.AUDIO_AAC,
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
                    expect(ean).assertEqual(false);
                    console.info('isAudioRecoderConfigSupported: success');
                })
                done();
            } else {
                console.info('mediaCaps is not defined');
            }
        })
    })

    /* *
  * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_3000
  * @tc.name      : 3000.test isAudioRecoderConfigSupported
  * @tc.desc      : isAudioRecoderConfigSupported false
  * @tc.size      : MediumTest
  * @tc.type      : Function test
  * @tc.level     : Level0
*/
    it('SUB_PROFILE_FUNCTION_CALLBACK_3000', 0, async function (done) {
        console.info("test isAudioRecoderConfigSupported");
        let audioProfile = {
            "outputFormat": media.ContainerFormatType.CFT_MPEG_4A,
            "audioEncoderMime": 'aaa',
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
                    expect(ean).assertEqual(false);
                    console.info('isAudioRecoderConfigSupported: success');
                })
                done();
            } else {
                console.info('mediaCaps is not defined');
            }
        })
    })

    /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_3100
    * @tc.name      : 3100.test isAudioRecoderConfigSupported
    * @tc.desc      : isAudioRecoderConfigSupported false
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
    it('SUB_PROFILE_FUNCTION_CALLBACK_3100', 0, async function (done) {
        console.info("test isAudioRecoderConfigSupported");
        let audioProfile = {
            "outputFormat": media.ContainerFormatType.CFT_MPEG_4A,
            "audioEncoderMime": media.CodecMimeType.AUDIO_AAC,
            "bitrate": 1000000,
            "sampleRate": 500,
            "channel": 1,
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
                done();
            } else {
                console.info('mediaCaps is not defined');
            }
        })
    })

    /* *
  * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_3200
  * @tc.name      : 3200.test isAudioRecoderConfigSupported
  * @tc.desc      : isAudioRecoderConfigSupported false
  * @tc.size      : MediumTest
  * @tc.type      : Function test
  * @tc.level     : Level0
*/
    it('SUB_PROFILE_FUNCTION_CALLBACK_3200', 0, async function (done) {
        console.info("test isAudioRecoderConfigSupported");
        let audioProfile = {
            "outputFormat": media.ContainerFormatType.CFT_MPEG_4A,
            "audioEncoderMime": media.CodecMimeType.AUDIO_AAC,
            "bitrate": 8000,
            "sampleRate": 1000000,
            "channel": 1,
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
                done();
            } else {
                console.info('mediaCaps is not defined');
            }
        })
    })

    /* *
    * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_3300
    * @tc.name      : 3300.test isAudioRecoderConfigSupported
    * @tc.desc      : isAudioRecoderConfigSupported false
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
*/
    it('SUB_PROFILE_FUNCTION_CALLBACK_3300', 0, async function (done) {
        console.info("test isAudioRecoderConfigSupported");
        let audioProfile = {
            "outputFormat": media.ContainerFormatType.CFT_MPEG_4A,
            "audioEncoderMime": media.CodecMimeType.AUDIO_AAC,
            "bitrate": 8000,
            "sampleRate": 500,
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
                done();
            } else {
                console.info('mediaCaps is not defined');
            }
        })
    })
})