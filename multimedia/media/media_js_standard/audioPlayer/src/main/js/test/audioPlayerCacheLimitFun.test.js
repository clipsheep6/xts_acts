// @ts-nocheck
/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import media from '@ohos.multimedia.media'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import * as mediaTestBase from '../../../../../MediaTestBase.js'

describe('audioPlayerCacheLimitFun', function () {
    const AUDIO_SOURCE_M4A = './01.m4a';
    const AUDIO_SOURCE_AAC = './AAC_48000_32_1.aac';
    const AUDIO_SOURCE_MP3 = './01.mp3';
    const AUDIO_SOURCE_OGG = './OGG_48000_1.ogg';
    const AUDIO_SOURCE_FLAC = './FLAC_48000_32_1.flac';
    const AUDIO_SOURCE_WAV = './vorbis_48000_32_1.wav';

    const SIZE_UPPER_LIMIT_100M = 100 * 1024 * 1024;
    const SIZE_UPPER_LIMIT_500M = 500 * 1024 * 1024;
    const DURATION_UPPER_LIMIT_15S = 15 * 1000;
    const DURATION_UPPER_LIMIT_60S = 60 * 1000;

    const AUDIO_HTTPSOURCE_M4A = 'http://123.57.24.33:8000/02.audio/MPEG-4_48000_32_1.m4a';
    const AUDIO_HTTPSOURCE_AAC = 'http://123.57.24.33:8000/02.audio/AAC_48000_32_1.aac';
    const AUDIO_HTTPSOURCE_MP3 = 'http://123.57.24.33:8000/02.audio/MP3_48000_32_1.mp3';
    const AUDIO_HTTPSOURCE_OGG = 'http://123.57.24.33:8000/02.audio/OGG_48000_1.ogg';
    const AUDIO_HTTPSOURCE_FLAC = 'http://123.57.24.33:8000/02.audio/FLAC_48000_32_1.flac';
    const AUDIO_HTTPSOURCE_WAV = 'http://123.57.24.33:8000/02.audio/vorbis_48000_32_1.wav';
    let audioPlayer = media.createAudioPlayer();
    let fdLocal = 'fd://';
    let allDescription = null;
    let currentDescription = 0;
    let fileDescriptor = undefined;
    let sleepTime = 2000;

    afterEach(async function () {
        console.info('afterEach start');
        audioPlayer.release();
        console.info('afterEach end');
    })

    function sleep(time) {
        return new Promise((resolve) => setTimeout(resolve, time));
    }

    async function source(Type) {
        await mediaTestBase.getFileDescriptor(Type).then((res) => {
            fileDescriptor = res;
        });
    }

    function initAudioPlayer(){
        if (typeof (audioPlayer) != 'undefined') {
            audioPlayer.release();
            audioPlayer = undefined;
            console.info(' audioPlayer release success');
        }
        audioPlayer = media.createAudioPlayer();
        if (typeof (audioPlayer) == 'undefined') {
            console.info(' case create player is faild');
            expect().assertFail();
        }
    }

    function getNetworkFd(src) {
        if (typeof (src) == 'string') {
            console.error('case src test');
            audioPlayer.src = src;
            console.info(' audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        } else {
            console.error('case fdsrc test');
            audioPlayer.fdSrc = src;
            console.info(' audioPlayer.fdSrc is : ' + JSON.stringify(audioPlayer.fdSrc));
        }
    }

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0100
       * @tc.name      : http paly m4a set sizeUpperLimit before play--100M
       * @tc.desc      : set cacheLimit 100M before play
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0100', 0, async function (done) {
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            console.info('0100 get sizeUpperLimit is success : ' + audioPlayer.cacheLimit.sizeUpperLimit);
            expect(audioPlayer.cacheLimit.sizeUpperLimit == SIZE_UPPER_LIMIT_100M).assertTrue();
            audioPlayer.play();
            done();
        })
        audioPlayer.on('error', (err) => {
            console.info( ' error end.');
            console.info(`case error called,errMessage is ${err.message}`);
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_M4A);
        console.info(' audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        audioPlayer.cacheLimit = { sizeUpperLimit: SIZE_UPPER_LIMIT_100M };
        console.info('sizeUpperLimit is : ' + audioPlayer.cacheLimit.sizeUpperLimit);
        console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0100  end');
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0200
       * @tc.name      : http paly m4a set durationUpperLimit before play--15s
       * @tc.desc      : set cacheLimit
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0200', 0, async function (done) {
        sleep(sleepTime);
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            console.info('0200 get durationUpperLimit is success : ' + audioPlayer.cacheLimit.durationUpperLimit);
            expect(audioPlayer.cacheLimit.durationUpperLimit == DURATION_UPPER_LIMIT_15S).assertTrue();
            audioPlayer.play();
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_M4A);
        console.info(' audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        audioPlayer.cacheLimit = { durationUpperLimit: DURATION_UPPER_LIMIT_15S };
        console.info('durationUpperLimit is : ' + audioPlayer.cacheLimit.durationUpperLimit);
        console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0200  end');
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0300
       * @tc.name      : http paly m4a set durationUpperLimit before play--60s
       * @tc.desc      : set cacheLimit
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0300', 0, async function (done) {
        sleep(sleepTime);
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            console.info('0300 get durationUpperLimit is success : '  + audioPlayer.cacheLimit.durationUpperLimit);
            expect(audioPlayer.cacheLimit.durationUpperLimit == DURATION_UPPER_LIMIT_60S).assertTrue();
            audioPlayer.play();
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_M4A);
        console.info(' audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        audioPlayer.cacheLimit = { durationUpperLimit: DURATION_UPPER_LIMIT_60S };
        console.info('durationUpperLimit is : ' + audioPlayer.cacheLimit.durationUpperLimit);
        console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0300  end');
    })

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0400
        * @tc.name      : http paly aac set sizeUpperLimit before play
        * @tc.desc      : set cacheLimit
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0400', 0, async function (done) {
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            console.info('0400 get sizeUpperLimit is success : ' + audioPlayer.cacheLimit.sizeUpperLimit);
            expect(audioPlayer.cacheLimit.sizeUpperLimit == SIZE_UPPER_LIMIT_100M).assertTrue();
            audioPlayer.play();
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_AAC);
        console.info(' audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        audioPlayer.cacheLimit = { sizeUpperLimit: SIZE_UPPER_LIMIT_100M };
        console.info('sizeUpperLimit is : ' + audioPlayer.cacheLimit.sizeUpperLimit);
        console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0400  end');
    })

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0500
        * @tc.name      : http paly aac set durationUpperLimit before play
        * @tc.desc      : set cacheLimit
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0500', 0, async function (done) {
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            console.info('0500 get durationUpperLimit is success : ' + audioPlayer.cacheLimit.durationUpperLimit);
            expect(audioPlayer.cacheLimit.durationUpperLimit == DURATION_UPPER_LIMIT_15S).assertTrue();
            audioPlayer.play();
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_AAC);
        console.info(' audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        audioPlayer.cacheLimit = { durationUpperLimit: DURATION_UPPER_LIMIT_15S };
        console.info('durationUpperLimit is : ' + audioPlayer.cacheLimit.durationUpperLimit);
        console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0500  end');
    })

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0600
        * @tc.name      : http paly mp3 set sizeUpperLimit before play
        * @tc.desc      : set cacheLimit
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0600', 0, async function (done) {
        sleep(sleepTime);
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            console.info('0600 get sizeUpperLimit is success : ' + audioPlayer.cacheLimit.sizeUpperLimit);
            expect(audioPlayer.cacheLimit.sizeUpperLimit == SIZE_UPPER_LIMIT_500M).assertTrue();
            audioPlayer.play();
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_MP3);
        console.info(' audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        audioPlayer.cacheLimit = { sizeUpperLimit: SIZE_UPPER_LIMIT_500M };
        console.info('sizeUpperLimit is : ' + audioPlayer.cacheLimit.sizeUpperLimit);
        console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0600  end');
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0700
       * @tc.name      : http paly mp3 set durationUpperLimit before play
       * @tc.desc      : set cacheLimit
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0700', 0, async function (done) {
        sleep(sleepTime);
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            console.info(' get durationUpperLimit is success : '+ audioPlayer.cacheLimit.durationUpperLimit);
            expect(audioPlayer.cacheLimit.durationUpperLimit == DURATION_UPPER_LIMIT_60S).assertTrue();
            audioPlayer.play();
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_MP3);
        console.info(' audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        audioPlayer.cacheLimit = { durationUpperLimit: DURATION_UPPER_LIMIT_60S };
        console.info('durationUpperLimit is : ' + audioPlayer.cacheLimit.durationUpperLimit);
        console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0700  end');
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0800
       * @tc.name      : http paly ogg set sizeUpperLimit before play
       * @tc.desc      : set cacheLimit
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0800', 0, async function (done) {
        sleep(sleepTime);
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            console.info('0800 get sizeUpperLimit is success : ' + audioPlayer.cacheLimit.sizeUpperLimit);
            expect(audioPlayer.cacheLimit.sizeUpperLimit == SIZE_UPPER_LIMIT_100M).assertTrue();
            audioPlayer.play();
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_OGG);
        console.info(' audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        audioPlayer.cacheLimit = { sizeUpperLimit: SIZE_UPPER_LIMIT_100M };
        console.info('sizeUpperLimit is : ' + audioPlayer.cacheLimit.sizeUpperLimit);
        console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0800  end');
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0900
       * @tc.name      : http paly ogg set durationUpperLimit before play
       * @tc.desc      : set cacheLimit
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0900', 0, async function (done) {
        sleep(sleepTime);
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            console.info('0900 get durationUpperLimit is success : ' + audioPlayer.cacheLimit.durationUpperLimit);
            expect(audioPlayer.cacheLimit.durationUpperLimit == DURATION_UPPER_LIMIT_15S).assertTrue();
            audioPlayer.play();
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_OGG);
        console.info(' audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        audioPlayer.cacheLimit = { durationUpperLimit: DURATION_UPPER_LIMIT_15S };
        console.info('durationUpperLimit is : ' + audioPlayer.cacheLimit.durationUpperLimit);
        console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_0900  end');
    })

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_1000
        * @tc.name      : http paly flac set sizeUpperLimit before play
        * @tc.desc      : set cacheLimit
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_1000', 0, async function (done) {
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            console.info('1000 get sizeUpperLimit is success : ' + audioPlayer.cacheLimit.sizeUpperLimit);
            expect(audioPlayer.cacheLimit.sizeUpperLimit == SIZE_UPPER_LIMIT_100M).assertTrue();
            audioPlayer.play();
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_FLAC);
        console.info(' audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        audioPlayer.cacheLimit = { sizeUpperLimit: SIZE_UPPER_LIMIT_100M };
        console.info('sizeUpperLimit is : ' + audioPlayer.cacheLimit.sizeUpperLimit);
        console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_1000  end');
    })

    /* *
       * @tc.number    : UB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_1100
       * @tc.name      : http paly flac set durationUpperLimit before play
       * @tc.desc      : set cacheLimit
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
    */
    it('UB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_1100', 0, async function (done) {
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            console.info(' get durationUpperLimit is success : ' + audioPlayer.cacheLimit.durationUpperLimit);
            expect(audioPlayer.cacheLimit.durationUpperLimit == DURATION_UPPER_LIMIT_15S).assertTrue();
            audioPlayer.play();
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_FLAC);
        console.info(' audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        audioPlayer.cacheLimit = { durationUpperLimit: DURATION_UPPER_LIMIT_15S };
        console.info('durationUpperLimit is : ' + audioPlayer.cacheLimit.durationUpperLimit);
        console.info('UB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_1100  end');
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_1200
       * @tc.name      : http paly wav set sizeUpperLimit before play
       * @tc.desc      : set cacheLimit
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_1200', 0, async function (done) {
        sleep(sleepTime);
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            console.info('1200 get sizeUpperLimit is success : ' + audioPlayer.cacheLimit.sizeUpperLimit);
            expect(audioPlayer.cacheLimit.sizeUpperLimit == SIZE_UPPER_LIMIT_100M).assertTrue();
            audioPlayer.play();
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_WAV);
        console.info(' audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        audioPlayer.cacheLimit = { sizeUpperLimit: SIZE_UPPER_LIMIT_100M };
        console.info('sizeUpperLimit is : ' + audioPlayer.cacheLimit.sizeUpperLimit);
        console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_1200  end');
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_1500
       * @tc.name      : http paly wav set durationUpperLimit before play
       * @tc.desc      : set cacheLimit
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_1300', 0, async function (done) {
        sleep(sleepTime);
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            console.info('1300 get durationUpperLimit is success : ' + audioPlayer.cacheLimit.durationUpperLimit);
            expect(audioPlayer.cacheLimit.durationUpperLimit == DURATION_UPPER_LIMIT_15S).assertTrue();
            audioPlayer.play();
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_WAV);
        console.info(' audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        audioPlayer.cacheLimit = { durationUpperLimit: DURATION_UPPER_LIMIT_15S };
        console.info('durationUpperLimit is : ' + audioPlayer.cacheLimit.durationUpperLimit);
        console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_1300  end');
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_1400
       * @tc.name      : http paly m4a set sizeUpperLimit before play--500M
       * @tc.desc      : set cacheLimit
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_1400', 0, async function (done) {
        sleep(sleepTime);
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info('dataLoad end.');
            console.info('1400 get sizeUpperLimit is success : ' + audioPlayer.cacheLimit.sizeUpperLimit);
            expect(audioPlayer.cacheLimit.sizeUpperLimit == SIZE_UPPER_LIMIT_500M).assertTrue();
            audioPlayer.play();
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_M4A)
        console.info(' audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        audioPlayer.cacheLimit = { sizeUpperLimit: SIZE_UPPER_LIMIT_500M };
        console.info('sizeUpperLimit is : ' + audioPlayer.cacheLimit.sizeUpperLimit);
        console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_1400  end');
    })

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_1500
        * @tc.name      : http paly m4a both set durationUpperLimit  and sizeUpperLimit before play
        * @tc.desc      : set cacheLimit
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_1500', 0, async function (done) {
        sleep(sleepTime);
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info('dataLoad end.');
            console.info('1500 get durationUpperLimit is success : ' + audioPlayer.cacheLimit.durationUpperLimit);
            console.info('1500 get sizeUpperLimit is success : ' + audioPlayer.cacheLimit.sizeUpperLimit);
            expect(audioPlayer.cacheLimit.durationUpperLimit == DURATION_UPPER_LIMIT_60S).assertTrue();
            expect(audioPlayer.cacheLimit.sizeUpperLimit == SIZE_UPPER_LIMIT_500M).assertTrue();
            audioPlayer.play();
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_M4A);
        console.info(' audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        audioPlayer.cacheLimit = {
            durationUpperLimit: DURATION_UPPER_LIMIT_60S,
            sizeUpperLimit: SIZE_UPPER_LIMIT_500M
        };
        console.info('durationUpperLimit is : ' + audioPlayer.cacheLimit.durationUpperLimit);
        console.info('sizeUpperLimit is : ' + audioPlayer.cacheLimit.sizeUpperLimit);
        console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_FUNCTION_1500  end');
    })
})
