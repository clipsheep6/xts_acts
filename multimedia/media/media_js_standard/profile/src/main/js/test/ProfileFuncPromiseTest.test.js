/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * Distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * Limitations under the License.
 */

import media from '@ohos.multimedia.media'
import * as base from './ProfileTestBase.js';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'

describe('ProfileFuncPromiseTest', function () {
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
        media.getMediaCapability().then(async (mediaCaps) => {
            console.info('getMediaCapability success');
            if (typeof (mediaCaps) != 'undefined') {
                mediaCaps.getAudioRecorderCaps().then(async (audioCapsArray) => {
                    console.info('getAudioRecorderCaps success');
                    if (typeof (audioCapsArray) != 'undefined') {
                        base.checkAudioArray(audioCapsArray, done);
                    } else {
                        console.info('audioCaps is undefined');
                        expect().assertFail();
                        done();
                    }
                }, err => {
                    expect(err).assertUndefined();
                    done();
                })
            } else {
                console.info('mediaCaps is undefined');
                expect().assertFail();
                done();
            }
        }, err => {
            expect(err).assertUndefined();
            done();
        })
    }

    async function getVideoRecorderCapsTest(done) {
        media.getMediaCapability().then(async (mediaCaps) => {
            console.info('getMediaCapability success');
            if (typeof (mediaCaps) != 'undefined') {
                mediaCaps.getVideoRecorderCaps().then(async (videoCapsArray) => {
                    console.info('getVideoRecorderCaps success');
                    if (typeof (videoCapsArray) != 'undefined') {
                        base.checkVideoArray(videoCapsArray, done);
                    } else {
                        console.info('audioCaps is undefined');
                        expect().assertFail();
                        done();
                    }
                }, err => {
                    expect(err).assertUndefined();
                    done();
                })
            } else {
                console.info('mediaCaps is undefined');
                expect().assertFail();
                done();
            }
        }, err => {
            expect(err).assertUndefined();
            done();
        })
    }

    async function promiseGetVideoProfile(sourceId, qualityLevel, expectProfile, done) {
        media.getMediaCapability().then(async (mediaCaps) => {
            console.info('getMediaCapability success');
            if (typeof (mediaCaps) != 'undefined') {
                mediaCaps.getVideoRecorderProfile(sourceId, qualityLevel).then(async (videoCapsArray) => {
                    console.info('getVideoRecorderProfile success');
                    expect(Object.keys(expectProfile).length).assertEqual(Object.keys(videoCapsArray).length);
                    let keys = Object.keys(videoCapsArray);
                    for (let i = 0; i < keys.length; i++) {
                        let key = keys[i];
                        expect(videoCapsArray[key]).assertEqual(expectProfile[key]);
                    }
                    done();
                }, err => {
                    expect(err).assertUndefined();
                    done();
                })
            } else {
                console.info('mediaCaps is undefined');
                expect().assertFail();
                done();
            }
        }, err => {
            expect(err).assertUndefined();
            done();
        })
    }
    
    async function promiseAbnormalGetVideoProfile(sourceId, qualityLevel, done) {
        media.getMediaCapability().then(async (mediaCaps) => {
            console.info('getMediaCapability success');
            if (typeof (mediaCaps) != 'undefined') {
                mediaCaps.getVideoRecorderProfile(sourceId, qualityLevel).then(async (videoCapsArray) => {
                    base.checkVideoCapsArray(videoCapsArray);
                    console.info('getVideoRecorderProfile success');
                    done();
                }, err => {
                    expect(err).assertUndefined();
                    done();
                })
            } else {
                console.info('mediaCaps is undefined');
                expect().assertFail();
                done();
            }
        }, err => {
            expect(err).assertUndefined();
            done();
        })
    }
    
    async function promiseAudioRecoderConfigSupported(audioProfile, done) {
        media.getMediaCapability().then(async (mediaCaps) => {
            console.info('getMediaCapability success');
            if (typeof (mediaCaps) != 'undefined') {
                mediaCaps.isAudioRecoderConfigSupported(audioProfile).then(async (ean) => {
                    console.info('isAudioRecoderConfigSupported: success' + ean);
                    expect(ean).assertEqual(true);
                    console.info('isAudioRecoderConfigSupported: success');
                    done();
                }, err => {
                    expect(err).assertUndefined();
                    done();
                })
            } else {
                console.info('mediaCaps is undefined');
                expect().assertFail();
                done();
            }
        }, err => {
            expect(err).assertUndefined();
            done();
        })
    }
    
    async function promiseAbnormalAudioRecoderConfigSupported(audioProfile, done) {
        media.getMediaCapability().then(async (mediaCaps) => {
            if (typeof (mediaCaps) != 'undefined') {
                mediaCaps.isAudioRecoderConfigSupported(audioProfile).then(async (ean) => {
                    console.info('isAudioRecoderConfigSupported: success' + ean);
                    expect(ean).assertEqual(false);
                    console.info('isAudioRecoderConfigSupported: success');
                    done();
                }, err => {
                    expect(err).assertUndefined();
                    done();
                })
            } else {
                console.info('mediaCaps is undefined');
                expect().assertFail();
                done();
            }
        }, err => {
            expect(err).assertUndefined();
            done();
        })
    }
    
    async function promiseHasVideoProfile(sourceId, qualityLevel, done) {
        media.getMediaCapability().then(async (mediaCaps) => {
            console.info('getMediaCapability success');
            if (typeof (mediaCaps) != 'undefined') {
                mediaCaps.hasVideoRecorderProfile(sourceId, qualityLevel).then(async (ean) => {
                    expect(ean).assertEqual(true);
                    console.info('hasVideoRecorderProfile success');
                    done();
                }, err => {
                    expect(err).assertUndefined();
                    done();
                })
            } else {
                console.info('mediaCaps is undefined');
                expect().assertFail();
                done();
            }
        }, err => {
            expect(err).assertUndefined();
            done();
        })
    }
    
    async function promiseAbnormalHasVideoProfile(sourceId, qualityLevel, done) {
        media.getMediaCapability().then(async (mediaCaps) => {
            console.info('getMediaCapability success');
            if (typeof (mediaCaps) != 'undefined') {
                mediaCaps.hasVideoRecorderProfile(sourceId, qualityLevel).then(async (ean) => {
                    expect(ean).assertEqual(false);
                    console.info('hasVideoRecorderProfile success');
                    done();
                }, err => {
                    expect(err).assertUndefined();
                    done();
                })
            } else {
                console.info('mediaCaps is undefined');
                expect().assertFail();
                done();
            }
        }, err => {
            expect(err).assertUndefined();
            done();
        })
    }

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_0100
        * @tc.name      : 001.test getAudioRecorderCaps
        * @tc.desc      : outputFormat/audioEncoderMime/sampleRates/bitrateRange/channelRange
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_PROMISE_0100', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        getAudioRecorderCapsTest(done);
        console.info("test getAudioRecorderCaps success ");
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_0200
        * @tc.name      : 002.test getVideoRecorderCapsTest
        * @tc.desc      : outputFormat/audioEncoderMime/audioSampleRates/videoEncoderMime/audioBitrateRange/
                          audioChannelRange/videoBitrateRange/videoFramerateRange/videoWidthRange/videoHeightRange
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_PROMISE_0200', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        getVideoRecorderCapsTest(done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_0300
        * @tc.name      : 003.test getVideoRecorderProfile
        * @tc.desc      : sourceId 0 qualityLevel 0
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_PROMISE_0300', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        promiseGetVideoProfile(0,media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW, 
            base.recorderQualityLowPara, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_0400
        * @tc.name      : 004.test getVideoRecorderProfile
        * @tc.desc      : sourceId 0 qualityLevel 1
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_PROMISE_0400', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        promiseGetVideoProfile(0, media.VideoRecorderQualityLevel.RECORDER_QUALITY_HIGH, 
            base.recorderQualityHighPara, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_0500
        * @tc.name      : 005.test getVideoRecorderProfile
        * @tc.desc      : sourceId 0 qualityLevel 2
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_PROMISE_0500', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        promiseGetVideoProfile(0, media.VideoRecorderQualityLevel.RECORDER_QUALITY_QCIF, 
            base.recorderQualityQcifPara, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_0600
        * @tc.name      : 006.test getVideoRecorderProfile
        * @tc.desc      : sourceId 0 qualityLevel 3
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_PROMISE_0600', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        promiseGetVideoProfile(0, media.VideoRecorderQualityLevel.RECORDER_QUALITY_CIF, 
            base.recorderQualityCifPara, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_0700
        * @tc.name      : 007.test getVideoRecorderProfile
        * @tc.desc      : sourceId 0 qualityLevel 4
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_PROMISE_0700', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        promiseGetVideoProfile(0, media.VideoRecorderQualityLevel.RECORDER_QUALITY_480P, 
            base.recorderQuality480PPara, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_0800
        * @tc.name      : 008.test getVideoRecorderProfile
        * @tc.desc      : sourceId 0 qualityLevel 5
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_PROMISE_0800', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        promiseGetVideoProfile(0, media.VideoRecorderQualityLevel.RECORDER_QUALITY_720P, 
            base.recorderQuality720PPara, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_0900
        * @tc.name      : 009.test getVideoRecorderProfile
        * @tc.desc      : sourceId 0 qualityLevel 6
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_PROMISE_0900', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        promiseGetVideoProfile(0, media.VideoRecorderQualityLevel.RECORDER_QUALITY_1080P, 
            base.recorderQuality1080PPara, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_1000
        * @tc.name      : 010.test getVideoRecorderProfile
        * @tc.desc      : sourceId 0 qualityLevel 7
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_PROMISE_1000', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        promiseGetVideoProfile(0, media.VideoRecorderQualityLevel.RECORDER_QUALITY_QVGA, 
            base.recorderQualityQvgaPara, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_1100
        * @tc.name      : 011.test getVideoRecorderProfile
        * @tc.desc      : sourceId 1 qualityLevel 0
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_PROMISE_1100', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        promiseGetVideoProfile(1,  media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW, 
            base.recorderQualityLowParaSourceId1, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_1200
        * @tc.name      : 012.test isAudioRecoderConfigSupported
        * @tc.desc      : isAudioRecoderConfigSupported true
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_PROMISE_1200', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        promiseAudioRecoderConfigSupported(base.audioRecorderPara1, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_FUNCTION_PROMISE_1300
        * @tc.name      : 013.test isAudioRecoderConfigSupported
        * @tc.desc      : isAudioRecoderConfigSupported true
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_FUNCTION_PROMISE_1300', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        promiseAudioRecoderConfigSupported(base.audioRecorderPara2, done);
    })

    /* *
        * @tc.number  : SUB_PROFILE_FUNCTION_PROMISE_1400
        * @tc.name    : 014.test hasVideoRecorderProfile
        * @tc.desc    : sourceId 0 qualityLevel 0
        * @tc.size    : MediumTest
        * @tc.type    : Function test
        * @tc.level   : Level0
    */
    it('SUB_PROFILE_FUNCTION_PROMISE_1400', 0, async function (done) {
        console.info('test hasVideoRecorderProfile');
        promiseHasVideoProfile(0, media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_PROMISE_1500
        * @tc.name      : 015.isAudioRecoderConfigSupported false
        * @tc.desc      : 5 args all set wrong
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_ABNORMAL_PROMISE_1500', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        promiseAbnormalAudioRecoderConfigSupported(base.audioRecorderAbnormalAll, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMALPROMISE_1600
        * @tc.name      : 016.test isAudioRecoderConfigSupported false
        * @tc.desc      : FormatType  is wrong
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_ABNORMALPROMISE_1600', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        promiseAbnormalAudioRecoderConfigSupported(base.audioRecorderAbnormalFormatType, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMALPROMISE_1700
        * @tc.name      : 017.test isAudioRecoderConfigSupported
        * @tc.desc      : CodecMimeType is wrong
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_ABNORMALPROMISE_1700', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        promiseAbnormalAudioRecoderConfigSupported(base.audioRecorderAbnormalCodecMimeType, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMALPROMISE_1800
        * @tc.name      : 018.test isAudioRecoderConfigSupported
        * @tc.desc      : bitrate is wrong
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_ABNORMALPROMISE_1800', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        promiseAbnormalAudioRecoderConfigSupported(base.audioRecorderAbnormalBitrate, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMALPROMISE_1900
        * @tc.name      : 019.test isAudioRecoderConfigSupported
        * @tc.desc      : sampleRate is wrong
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_ABNORMALPROMISE_1900', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        promiseAbnormalAudioRecoderConfigSupported(base.audioRecorderAbnormalSampleRate, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMALPROMISE_2000
        * @tc.name      : 020.test isAudioRecoderConfigSupported
        * @tc.desc      : channel is wrong
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_PROFILE_ABNORMALPROMISE_2000', 0, async function (done) {
        console.info("test getAudioRecorderCaps");
        promiseAbnormalAudioRecoderConfigSupported(base.audioRecorderAbnormalSampleChannel, done);
    })

    /* *
        * @tc.number  : SUB_PROFILE_ABNORMALPROMISE_2100
        * @tc.name    : 021.test hasVideoRecorderProfile
        * @tc.desc    : sourceId 1 qualityLevel 0
        * @tc.size    : MediumTest
        * @tc.type    : Function test
        * @tc.level   : Level0
    */
    it('SUB_PROFILE_ABNORMALPROMISE_2100', 0, async function (done) {
        console.info('test hasVideoRecorderProfile');
        promiseAbnormalHasVideoProfile(1, media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_PROMISE_2200
        * @tc.name      : 022.test hasVideoRecorderProfile sourceId -1
        * @tc.desc      : sourceId -1 qualityLevel 0
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_PROMISE_2200', 0, async function (done) {
        console.info("test hasVideoRecorderProfile");
        promiseAbnormalHasVideoProfile(-1, media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_PROMISE_2300
        * @tc.name      : 023.test hasVideoRecorderProfile qualityLevel -1
        * @tc.desc      : sourceId 0 qualityLevel -1
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_PROMISE_2300', 0, async function (done) {
        console.info("test hasVideoRecorderProfile");
        promiseAbnormalHasVideoProfile(0, -1, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_PROMISE_2400
        * @tc.name      : 024.test hasVideoRecorderProfile sourceId 65536
        * @tc.desc      : sourceId 65535 qualityLevel 0
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_PROMISE_2400', 0, async function (done) {
        console.info("test hasVideoRecorderProfile");
        promiseAbnormalHasVideoProfile(65535, media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_PROMISE_2500
        * @tc.name      : 025.test hasVideoRecorderProfile sourceId 65536
        * @tc.desc      : sourceId 65536 qualityLevel 0
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_PROMISE_2500', 0, async function (done) {
        console.info("test hasVideoRecorderProfile");
        promiseAbnormalHasVideoProfile(65536, media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_PROMISE_2600
        * @tc.name      : 026.test hasVideoRecorderProfile qualityLevel 65536
        * @tc.desc      : sourceId 0 qualityLevel 65535
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_PROMISE_2600', 0, async function (done) {
        console.info("test hasVideoRecorderProfile");
        promiseAbnormalHasVideoProfile(0, 65535, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_PROMISE_2700
        * @tc.name      : 027.test hasVideoRecorderProfile qualityLevel 65536
        * @tc.desc      : sourceId 0 qualityLevel 65536
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_PROMISE_2700', 0, async function (done) {
        console.info("test hasVideoRecorderProfile");
        promiseAbnormalHasVideoProfile(0, 65536, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_PROMISE_2800
        * @tc.name      : 028.test getVideoRecorderProfile sourceId -1
        * @tc.desc      : sourceId -1 qualityLevel 0
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_PROMISE_2800', 0, async function (done) {
        console.info("test getVideoRecorderProfile");
        promiseAbnormalGetVideoProfile(-1, media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_PROMISE_2900
        * @tc.name      : 029.test getVideoRecorderProfile qualityLevel -1
        * @tc.desc      : sourceId 0 qualityLevel -1
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_PROMISE_2900', 0, async function (done) {
        console.info("test getVideoRecorderProfile");
        promiseAbnormalGetVideoProfile(0, -1, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_PROMISE_3000
        * @tc.name      : 030.test getVideoRecorderProfile sourceId 65535
        * @tc.desc      : sourceId 65535 qualityLevel 0
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_PROMISE_3000', 0, async function (done) {
        console.info("test getVideoRecorderProfile");
        promiseAbnormalGetVideoProfile(65535, media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_PROMISE_3100
        * @tc.name      : 031.test getVideoRecorderProfile sourceId 65536
        * @tc.desc      : sourceId 65536 qualityLevel 0
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_PROMISE_3100', 0, async function (done) {
        console.info("test getVideoRecorderProfile");
        promiseAbnormalGetVideoProfile(65536, media.VideoRecorderQualityLevel.RECORDER_QUALITY_LOW, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_PROMISE_3200
        * @tc.name      : 032.test getVideoRecorderProfile qualityLevel 65535
        * @tc.desc      : sourceId 0 qualityLevel 65535
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_PROMISE_3200', 0, async function (done) {
        console.info("test getVideoRecorderProfile");
        promiseAbnormalGetVideoProfile(0, 65535, done);
    })

    /* *
        * @tc.number    : SUB_PROFILE_ABNORMAL_PROMISE_3300
        * @tc.name      : 033.test getVideoRecorderProfile qualityLevel 65536
        * @tc.desc      : sourceId 0 qualityLevel 65536
        * @tc.size      : MediumTest
        * @tc.type      : Abnormal test
        * @tc.level     : Level1
    */
    it('SUB_PROFILE_ABNORMAL_PROMISE_3300', 0, async function (done) {
        console.info("test getVideoRecorderProfile");
        promiseAbnormalGetVideoProfile(0, 65536, done);
    })
})
