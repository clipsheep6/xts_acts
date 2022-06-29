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
import * as base from './ProfileTestBase.js';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'

describe('ProfileFuncCallbackTest', function () {
    beforeAll(function () {
        console.info('beforeAll case');
    })

    beforeEach(async function () {
        console.info('beforeEach case');
    })

    afterEach(function () {
        console.info('afterEach case');
    })

    afterAll(function () {
        console.info('afterAll case');
    })

    async function getAudioRecorderCapsTest(done) {
        media.getMediaCapability((err, mediaCaps) => {
            expect(err).assertUndefined();
            console.info('getMediaCapability success');
            if (typeof (mediaCaps) != 'undefined') {
                mediaCaps.getAudioRecorderCaps((err, audioCapsArray) => {
                    expect(err).assertUndefined();
                    console.info('getAudioRecorderCaps success');
                    if (typeof (audioCapsArray) != 'undefined') {
                        base.checkAudioArray(audioCapsArray, done);
                    } else {
                        console.info('audioCaps is not defined');
                        expect().assertFail();
                        done();
                    }

                })
            } else {
                console.info('mediaCaps is not defined');
                expect().assertFail();
                done();
            }
        })
    }

    async function getVideoRecorderCapsTest(done) {
        media.getMediaCapability((err, mediaCaps) => {
            expect(err).assertUndefined();
            console.info('getMediaCapability success');
            if (typeof (mediaCaps) != 'undefined') {
                mediaCaps.getVideoRecorderCaps((err, videoCapsArray) => {
                    expect(err).assertUndefined();
                    console.info('getVideoRecorderCapsTest success');
                    if (typeof (videoCapsArray) != 'undefined') {
                        base.checkVideoArray(videoCapsArray, done);
                    } else {
                        console.info('videoCaps is not defined');
                        expect().assertFail();
                        done();
                    }
                })
            } else {
                console.info('mediaCaps is not defined');
                expect().assertFail();
                done();
            }
        })
    }

    async function callbackGetVideoProfile(sourceId, qualityLevel, expectProfile, done) {
        media.getMediaCapability((err, mediaCaps) => {
            expect(err).assertUndefined();
            console.info('getMediaCapability success');
            if (typeof (mediaCaps) != 'undefined') {
                mediaCaps.getVideoRecorderProfile(sourceId, qualityLevel, (err, videoCapsArray) => {
                    expect(err).assertUndefined();
                    console.info('getVideoRecorderProfile success');
                    expect(Object.keys(expectProfile).length).assertEqual(Object.keys(videoCapsArray).length);
                    let keys = Object.keys(videoCapsArray);
                    for (let i = 0; i < keys.length; i++) {
                        let key = keys[i];
                        expect(videoCapsArray[key]).assertEqual(expectProfile[key]);
                    }
                    done();
                })
            } else {
                console.info('mediaCaps is undefined');
                expect().assertFail();
                done();
            }
        })
    }
    
    async function callbackAbnormalGetVideoProfile(sourceId, qualityLevel, done){
        media.getMediaCapability((err, mediaCaps) => {
            expect(err).assertUndefined();
            console.info('getMediaCapability success');
            if (typeof (mediaCaps) != 'undefined') {
                mediaCaps.getVideoRecorderProfile(sourceId, qualityLevel, (err, videoCapsArray) => {
                    expect(err).assertUndefined();
                    base.checkVideoCapsArray(videoCapsArray);
                    console.info('getVideoRecorderProfile success');
                    done();
                })
            } else {
                console.info('mediaCaps is not defined');
                expect().assertFail();
                done();
            }
        })
    }
    
    async function callbackAudioRecoderConfigSupported(audioProfile, done) {
        media.getMediaCapability((err, mediaCaps) => {
            expect(err).assertUndefined();
            console.info('getMediaCapability success');
            if (typeof (mediaCaps) != 'undefined') {
                mediaCaps.isAudioRecoderConfigSupported(audioProfile, (err, ean) => {
                    expect(err).assertUndefined();
                    expect(ean).assertEqual(true);
                    console.info('isAudioRecoderConfigSupported: success');
                    done();
                })
            } else {
                console.info('mediaCaps is undefined');
                expect().assertFail();
                done();
            }
        })
    }
    
    async function callbackAbnormalAudioRecoderConfigSupported(audioProfile, done) {
        media.getMediaCapability((err, mediaCaps) => {
            expect(err).assertUndefined();
            console.info('getMediaCapability success');
            if (typeof (mediaCaps) != 'undefined') {
                mediaCaps.isAudioRecoderConfigSupported(audioProfile, (err, ean) => {
                    expect(err).assertUndefined();
                    expect(ean).assertEqual(false);
                    console.info('isAudioRecoderConfigSupported: success');
                    done();
                })
            } else {
                console.info('mediaCaps is undefined');
                expect().assertFail();
                done();
            }
        })
    }
    
    async function callbackHasVideoProfile(sourceId, qualityLevel, done) {
        media.getMediaCapability((err, mediaCaps) => {
            expect(err).assertUndefined();
            console.info('getMediaCapability success');
            if (typeof (mediaCaps) != 'undefined') {
                mediaCaps.hasVideoRecorderProfile(sourceId, qualityLevel, (err, ean) => {
                    expect(err).assertUndefined();
                    expect(ean).assertEqual(true);
                    console.info('hasVideoRecorderProfile success');
                    done();
                })
            } else {
                console.info('mediaCaps is undefined');
                expect().assertFail();
                done();
            }
        })
    }
    
    async function callbackAbnormalHasVideoProfile(sourceId, qualityLevel, done) {
        media.getMediaCapability((err, mediaCaps) => {
            expect(err).assertUndefined();
            console.info('getMediaCapability success');
            if (typeof (mediaCaps) != 'undefined') {
                mediaCaps.hasVideoRecorderProfile(sourceId, qualityLevel, (err, ean) => {
                    expect(err).assertUndefined();
                    expect(ean).assertEqual(false);
                    console.info('hasVideoRecorderProfile success');
                    done();
                })
            } else {
                console.info('mediaCaps is undefined');
                expect().assertFail();
                done();
            }
        })
    }

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_0100
        * @tc.name      : 01.test getAudioRecorderCaps
        * @tc.desc      : outputFormat/audioEncoderMime/sampleRates/bitrateRange/channelRange
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_CALLBACK_0100', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        getAudioRecorderCapsTest(done);
        console.info("test getAudioRecorderCaps success ");
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_0200
        * @tc.name      : 02.test getVideoRecorderCapsTest
        * @tc.desc      : outputFormat/audioEncoderMime/audioSampleRates/videoEncoderMime/audioBitrateRange/
                          audioChannelRange/videoBitrateRange/videoFramerateRange/videoWidthRange/videoHeightRange
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_CALLBACK_0200', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        getVideoRecorderCapsTest(done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_0300
        * @tc.name      : 003.test getVideoRecorderProfile
        * @tc.desc      : sourceId 0 qualityLevel 0
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_CALLBACK_0300', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        callbackGetVideoProfile(0,media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW, 
            base.recorderQualityLowPara, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_0400
        * @tc.name      : 004.test getVideoRecorderProfile
        * @tc.desc      : sourceId 0 qualityLevel 1
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_CALLBACK_0400', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        callbackGetVideoProfile(0, media.VideoRecorderQualityLevel.RECORDER_QUALITY_HIGH, 
            base.recorderQualityHighPara, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_0500
        * @tc.name      : 005.test getVideoRecorderProfile
        * @tc.desc      : sourceId 0 qualityLevel 2
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_CALLBACK_0500', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        callbackGetVideoProfile(0, media.VideoRecorderQualityLevel.RECORDER_QUALITY_QCIF, 
            base.recorderQualityQcifPara, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_0600
        * @tc.name      : 006.test getVideoRecorderProfile
        * @tc.desc      : sourceId 0 qualityLevel 3
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_CALLBACK_0600', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        callbackGetVideoProfile(0, media.VideoRecorderQualityLevel.RECORDER_QUALITY_CIF, 
            base.recorderQualityCifPara, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_0700
        * @tc.name      : 007.test getVideoRecorderProfile
        * @tc.desc      : sourceId 0 qualityLevel 4
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_CALLBACK_0700', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        callbackGetVideoProfile(0, media.VideoRecorderQualityLevel.RECORDER_QUALITY_480P, 
            base.recorderQuality480PPara, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_0800
        * @tc.name      : 008.test getVideoRecorderProfile
        * @tc.desc      : sourceId 0 qualityLevel 5
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_CALLBACK_0800', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        callbackGetVideoProfile(0, media.VideoRecorderQualityLevel.RECORDER_QUALITY_720P, 
            base.recorderQuality720PPara, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_0900
        * @tc.name      : 009.test getVideoRecorderProfile
        * @tc.desc      : sourceId 0 qualityLevel 6
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_CALLBACK_0900', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        callbackGetVideoProfile(0, media.VideoRecorderQualityLevel.RECORDER_QUALITY_1080P, 
            base.recorderQuality1080PPara, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_1000
        * @tc.name      : 010.test getVideoRecorderProfile
        * @tc.desc      : sourceId 0 qualityLevel 7
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_CALLBACK_1000', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        callbackGetVideoProfile(0, media.VideoRecorderQualityLevel.RECORDER_QUALITY_QVGA, 
            base.recorderQualityQvgaPara, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_1100
        * @tc.name      : 011.test getVideoRecorderProfile
        * @tc.desc      : sourceId 1 qualityLevel 0
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_CALLBACK_1100', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        callbackGetVideoProfile(1, media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW, 
            base.recorderQualityLowParaSourceId1, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_1200
        * @tc.name      : 012.test isAudioRecoderConfigSupported
        * @tc.desc      : isAudioRecoderConfigSupported true
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_CALLBACK_1200', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        callbackAudioRecoderConfigSupported(base.audioRecorderPara1, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_CALLBACK_1300
        * @tc.name      : 013.test isAudioRecoderConfigSupported
        * @tc.desc      : isAudioRecoderConfigSupported true
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_CALLBACK_1300', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        callbackAudioRecoderConfigSupported(base.audioRecorderPara2, done);
    })

    /* *
        * @tc.number  : SUB_PROFILE_FUNCTION_CALLBACK_1400
        * @tc.name    : 014.test hasVideoRecorderProfile
        * @tc.desc    : sourceId 0 qualityLevel 0
        * @tc.size    : MediumTest
        * @tc.type    : Function test
        * @tc.level   : Level0
    */
    it('SUB_PROFILE_FUNCTION_CALLBACK_1400', 0, async function (done) {
        console.info('test hasVideoRecorderProfile');
        callbackHasVideoProfile(0, media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_CALLBACK_1500
        * @tc.name      : 015.isAudioRecoderConfigSupported false
        * @tc.desc      : 5 args all set wrong
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_ABNORMAL_CALLBACK_1500', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        callbackAbnormalAudioRecoderConfigSupported(base.audioRecorderAbnormalAll, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_CALLBACK_1600
        * @tc.name      : 016.test isAudioRecoderConfigSupported false
        * @tc.desc      : FormatType  is wrong
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_ABNORMAL_CALLBACK_1600', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        callbackAbnormalAudioRecoderConfigSupported(base.audioRecorderAbnormalFormatType, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_CALLBACK_1700
        * @tc.name      : 017.test isAudioRecoderConfigSupported fasle
        * @tc.desc      : CodecMimeType is wrong
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_ABNORMAL_CALLBACK_1700', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        callbackAbnormalAudioRecoderConfigSupported(base.audioRecorderAbnormalCodecMimeType, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_CALLBACK_1800
        * @tc.name      : 018.test isAudioRecoderConfigSupported false
        * @tc.desc      : bitrate is wrong
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_ABNORMAL_CALLBACK_1800', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        callbackAbnormalAudioRecoderConfigSupported(base.audioRecorderAbnormalBitrate, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_CALLBACK_1900
        * @tc.name      : 019.test isAudioRecoderConfigSupported false
        * @tc.desc      : sampleRate is wrong
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_ABNORMAL_CALLBACK_1900', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        callbackAbnormalAudioRecoderConfigSupported(base.audioRecorderAbnormalSampleRate, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_CALLBACK_2000
        * @tc.name      : 020.test isAudioRecoderConfigSupported false
        * @tc.desc      : channel is wrong
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_ABNORMAL_CALLBACK_2000', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        callbackAbnormalAudioRecoderConfigSupported(base.audioRecorderAbnormalSampleChannel, done);
    })

    /* *
        * @tc.number  : SUB_PROFILE_ABNORMAL_CALLBACK_2100
        * @tc.name    : 021.test hasVideoRecorderProfile
        * @tc.desc    : sourceId 1 qualityLevel 0
        * @tc.size    : MediumTest
        * @tc.type    : Function test
        * @tc.level   : Level0
    */
    it('SUB_PROFILE_ABNORMAL_CALLBACK_2100', 0, async function (done) {
        console.info('test hasVideoRecorderProfile');
        callbackAbnormalHasVideoProfile(1, media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_CALLBACK_2200
        * @tc.name      : 22.test hasVideoRecorderProfile sourceId -1
        * @tc.desc      : sourceId -1 qualityLevel 0
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_CALLBACK_2200', 0, async function (done) {
        console.info("test hasVideoRecorderProfile");
        callbackAbnormalHasVideoProfile(-1, media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_CALLBACK_2300
        * @tc.name      : 023.test hasVideoRecorderProfile qualityLevel -1
        * @tc.desc      : sourceId 0 qualityLevel -1
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_CALLBACK_2300', 0, async function (done) {
        console.info("test hasVideoRecorderProfile");
        callbackAbnormalHasVideoProfile(0, -1, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_CALLBACK_2400
        * @tc.name      : 024.test hasVideoRecorderProfile sourceId 65536
        * @tc.desc      : sourceId 65535 qualityLevel 0
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_CALLBACK_2400', 0, async function (done) {
        console.info("test hasVideoRecorderProfile");
        callbackAbnormalHasVideoProfile(65535, media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_CALLBACK_2500
        * @tc.name      : 025.test hasVideoRecorderProfile sourceId 65536
        * @tc.desc      : sourceId 65536 qualityLevel 0
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_CALLBACK_2500', 0, async function (done) {
        console.info("test hasVideoRecorderProfile");
        callbackAbnormalHasVideoProfile(65536, media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_CALLBACK_2600
        * @tc.name      : 026.test hasVideoRecorderProfile qualityLevel 65536
        * @tc.desc      : sourceId 0 qualityLevel 65535
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_CALLBACK_2600', 0, async function (done) {
        console.info("test hasVideoRecorderProfile");
        callbackAbnormalHasVideoProfile(0, 65535, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_CALLBACK_2700
        * @tc.name      : 027.test hasVideoRecorderProfile qualityLevel 65536
        * @tc.desc      : sourceId 0 qualityLevel 65536
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_CALLBACK_2700', 0, async function (done) {
        console.info("test hasVideoRecorderProfile");
        callbackAbnormalHasVideoProfile(0, 65536, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_CALLBACK_2800
        * @tc.name      : 028.test getVideoRecorderProfile sourceId -1
        * @tc.desc      : sourceId -1 qualityLevel 0
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_CALLBACK_2800', 0, async function (done) {
        console.info("test getVideoRecorderProfile");
        callbackAbnormalGetVideoProfile(-1, media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_CALLBACK_2900
        * @tc.name      : 029.test getVideoRecorderProfile qualityLevel -1
        * @tc.desc      : sourceId 0 qualityLevel -1
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_CALLBACK_2900', 0, async function (done) {
        console.info("test getVideoRecorderProfile");
        callbackAbnormalGetVideoProfile(0, -1, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_CALLBACK_3000
        * @tc.name      : 030.test getVideoRecorderProfile sourceId 65535
        * @tc.desc      : sourceId 65535 qualityLevel 0
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_CALLBACK_3000', 0, async function (done) {
        console.info("test getVideoRecorderProfile");
        callbackAbnormalGetVideoProfile(65535, media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_CALLBACK_3100
        * @tc.name      : 031.test getVideoRecorderProfile sourceId 65536
        * @tc.desc      : sourceId 65536 qualityLevel 0
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_CALLBACK_3100', 0, async function (done) {
        console.info("test getVideoRecorderProfile");
        callbackAbnormalGetVideoProfile(65536, media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW, done);
    })


    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_CALLBACK_3200
        * @tc.name      : 032.test getVideoRecorderProfile qualityLevel 65535
        * @tc.desc      : sourceId 0 qualityLevel 65535
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_CALLBACK_3200', 0, async function (done) {
        console.info("test getVideoRecorderProfile");
        callbackAbnormalGetVideoProfile(0, 65535, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_CALLBACK_3300
        * @tc.name      : 033.test getVideoRecorderProfile qualityLevel 65536
        * @tc.desc      : sourceId 0 qualityLevel 65536
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_CALLBACK_3300', 0, async function (done) {
        console.info("test getVideoRecorderProfile");
        callbackAbnormalGetVideoProfile(0, 65536, done);
    })
})