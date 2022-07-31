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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import * as mediaTestBase from '../../../../../MediaTestBase.js'

describe('audioPlayerCacheLimitReliability', function () {
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
    const SIZE_UPPER_LIMIT_LARGER = 500 * 1024 * 1024 + 1;
    const DURATION_UPPER_LIMIT_LARGER = 60 * 1000 + 1;
    const SIZE_UPPER_LIMIT_SMALLER = 100 * 1024 * 1024 - 1;
    const DURATION_UPPER_LIMIT_SMALLER = 15 * 1000 - 1;
    const MINUS_ONE = -1;

    const AUDIO_HTTPSOURCE_AAC = 'http://123.57.24.33:8000/02.audio/AAC_48000_32_1.aac';
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

    async function source(Type) {
        await mediaTestBase.getFileDescriptor(Type).then((res) => {
            fileDescriptor = res;
        });
    }

    function initAudioPlayer() {
        if (typeof (audioPlayer) != 'undefined') {
            audioPlayer.release();
            audioPlayer = undefined;
            console.info('audioPlayer release success');
        }
        audioPlayer = media.createAudioPlayer();
        if (typeof (audioPlayer) == 'undefined') {
            console.info(' case create player is failed');
            expect().assertFail();
        }
    }

    function getNetworkFd(src) {
        console.info('case src test');
        audioPlayer.src = src;
        console.info(' get audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
    }


    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITY_0100
       * @tc.name      : play local  aac  cache  return -1
       * @tc.desc      : set cacheLimit
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITY_0100', 0, async function (done) {
        await source(AUDIO_SOURCE_AAC);
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            audioPlayer.cacheLimit.sizeUpperLimit = SIZE_UPPER_LIMIT_100M;
            console.info(' get sizeUpperLimit is success : ' + audioPlayer.cacheLimit.sizeUpperLimit);
            expect(audioPlayer.cacheLimit.sizeUpperLimit == MINUS_ONE).assertTrue();
            audioPlayer.play();
            console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITY_0100  end');
            done();
        })
        audioPlayer.src = fdLocal + fileDescriptor.fd;
        console.info(' get audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        console.info('0100 sizeUpperLimit is : ' + audioPlayer.cacheLimit.sizeUpperLimit)
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0200
       * @tc.name      : play local  mp3  cache  return -1
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0200', 0, async function (done) {
        await source(AUDIO_SOURCE_MP3);
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            audioPlayer.cacheLimit.sizeUpperLimit = SIZE_UPPER_LIMIT_500M;
            console.info(' get sizeUpperLimit is success : ' + audioPlayer.cacheLimit.sizeUpperLimit);
            expect(audioPlayer.cacheLimit.sizeUpperLimit == MINUS_ONE).assertTrue();
            audioPlayer.play();
            console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0200  end');
            done();
        })
        audioPlayer.src = fdLocal + fileDescriptor.fd;
        console.info(' get audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        console.info('0200 sizeUpperLimit is : ' + audioPlayer.cacheLimit.sizeUpperLimit);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0300
       * @tc.name      : play local  ogg  cache  return -1
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0300', 0, async function (done) {
        await source(AUDIO_SOURCE_OGG);
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            audioPlayer.cacheLimit.durationUpperLimit = DURATION_UPPER_LIMIT_15S;
            console.info('0300 get durationUpperLimit is success : ' + audioPlayer.cacheLimit.durationUpperLimit);
            expect(audioPlayer.cacheLimit.durationUpperLimit == MINUS_ONE).assertTrue();
            audioPlayer.play();
            console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0300  end');
            done();
        })
        audioPlayer.src = fdLocal + fileDescriptor.fd;
        console.info(' get audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        console.info('durationUpperLimit is : ' + audioPlayer.cacheLimit.durationUpperLimit);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0400
       * @tc.name      : play local  m4a  cache  return -1
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0400', 0, async function (done) {
        await source(AUDIO_SOURCE_M4A);
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            audioPlayer.cacheLimit.durationUpperLimit = DURATION_UPPER_LIMIT_60S;
            console.info('0400 get durationUpperLimit is success : ' + audioPlayer.cacheLimit.durationUpperLimit);
            expect(audioPlayer.cacheLimit.durationUpperLimit == MINUS_ONE).assertTrue();
            audioPlayer.play();
            console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0400  end');
            done();
        })
        audioPlayer.src = fdLocal + fileDescriptor.fd;
        console.info(' get audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        console.info('durationUpperLimit is : ' + audioPlayer.cacheLimit.durationUpperLimit);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0500
       * @tc.name      : play local  flac  cache  return -1
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0500', 0, async function (done) {
        await source(AUDIO_SOURCE_FLAC);
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            audioPlayer.cacheLimit.sizeUpperLimit = SIZE_UPPER_LIMIT_100M;
            console.info('0500 get sizeUpperLimit is success : ' + audioPlayer.cacheLimit.sizeUpperLimit);
            expect(audioPlayer.cacheLimit.sizeUpperLimit == MINUS_ONE).assertTrue();
            audioPlayer.play();
            console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0500  end');
            done();
        })
        audioPlayer.src = fdLocal + fileDescriptor.fd;
        console.info(' get audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0600
       * @tc.name      : play local  wav  cache  return -1
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0600', 0, async function (done) {
        await source(AUDIO_SOURCE_WAV);
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            audioPlayer.cacheLimit.sizeUpperLimit = SIZE_UPPER_LIMIT_500M;
            console.info('0600 get sizeUpperLimit is success : ' + audioPlayer.cacheLimit.sizeUpperLimit);
            expect(audioPlayer.cacheLimit.sizeUpperLimit == MINUS_ONE).assertTrue();
            audioPlayer.play();
            console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0600  end');
            done();
        })
        audioPlayer.src = fdLocal + fileDescriptor.fd;
        console.info(' get audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_PLAYBACKCACHELIMIT_ABNORMAL_PROMISE_0700
       * @tc.name      : set sizeUpperLimit before set dataSource
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0700', 0, async function (done) {
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            console.info('0700 get durationUpperLimit is success : ' + audioPlayer.cacheLimit.sizeUpperLimit);
            expect(audioPlayer.cacheLimit.sizeUpperLimit == SIZE_UPPER_LIMIT_100M).assertTrue();
            audioPlayer.play();
            console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0700 is end');
            done();
        })
        audioPlayer.cacheLimit.sizeUpperLimit = SIZE_UPPER_LIMIT_100M;
        console.info('sizeUpperLimit is : ' + audioPlayer.cacheLimit.sizeUpperLimit);
        getNetworkFd(AUDIO_HTTPSOURCE_AAC);
        console.info(' get audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0800
       * @tc.name      : set durationUpperLimit before set dataSource
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0800', 0, async function (done) {
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            console.info('0800 get durationUpperLimit is success : ' + audioPlayer.cacheLimit.durationUpperLimit);
            expect(audioPlayer.cacheLimit.durationUpperLimit != DURATION_UPPER_LIMIT_60S).assertTrue();
            audioPlayer.play();
            console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0800 is end');
            done();
        })
        audioPlayer.cacheLimit.durationUpperLimit = DURATION_UPPER_LIMIT_60S;
        console.info('durationUpperLimit is : ' + audioPlayer.cacheLimit.durationUpperLimit);
        getNetworkFd(AUDIO_HTTPSOURCE_AAC);
        console.info(' get audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0900
       * @tc.name      : set sizeUpperLimit after play
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0900', 0, async function (done) {
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            audioPlayer.play();
        })
        audioPlayer.on('play', () => {
            console.info(' play end.');
            console.info('0900 get sizeUpperLimit is success : ' + audioPlayer.cacheLimit.sizeUpperLimit);
            audioPlayer.cacheLimit = { sizeUpperLimit: SIZE_UPPER_LIMIT_100M };
            expect(audioPlayer.cacheLimit.sizeUpperLimit == SIZE_UPPER_LIMIT_100M).assertTrue();
            console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_0900 is end');
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_AAC);
        console.info(' get audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1000
       * @tc.name      : set durationUpperLimit after play
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1000', 0, async function (done) {
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            audioPlayer.play();
        })
        audioPlayer.on('play', () => {
            console.info(' play end.');
            audioPlayer.cacheLimit = { durationUpperLimit: DURATION_UPPER_LIMIT_60S };
            console.info('1000 get durationUpperLimit is success : ' + audioPlayer.cacheLimit.durationUpperLimit);
            expect(audioPlayer.cacheLimit.durationUpperLimit == DURATION_UPPER_LIMIT_15S).assertTrue();
            console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1000 is end');
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_AAC);
        console.info(' get audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1100
       * @tc.name      : set sizeUpperLimit larger than maxsize  limit
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1100', 0, async function (done) {
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            audioPlayer.cacheLimit.sizeUpperLimit = SIZE_UPPER_LIMIT_LARGER;
            console.info('1100 get sizeUpperLimit is success : ' + audioPlayer.cacheLimit.sizeUpperLimit);
            expect(audioPlayer.cacheLimit.sizeUpperLimit == SIZE_UPPER_LIMIT_100M).assertTrue();
            audioPlayer.play();
            console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1100  end');
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_AAC);
        console.info(' get audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        console.info('sizeUpperLimit is : ' + audioPlayer.cacheLimit.sizeUpperLimit);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1200
       * @tc.name      : set durationUpperLimit larger than  limit
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1200', 0, async function (done) {
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            audioPlayer.cacheLimit.durationUpperLimit = DURATION_UPPER_LIMIT_LARGER;
            console.info('1200 get durationUpperLimit is success : ' + audioPlayer.cacheLimit.durationUpperLimit);
            expect(audioPlayer.cacheLimit.durationUpperLimit == DURATION_UPPER_LIMIT_15S).assertTrue();
            audioPlayer.play();
            console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1200  end');
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_AAC);
        console.info(' get audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        console.info('durationUpperLimit is : ' + audioPlayer.cacheLimit.durationUpperLimit)
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1300
       * @tc.name      : set sizeUpperLimit less than min
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1300', 0, async function (done) {
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            audioPlayer.cacheLimit.sizeUpperLimit = SIZE_UPPER_LIMIT_SMALLER;
            console.info('1300 get sizeUpperLimit is success : ' + audioPlayer.cacheLimit.sizeUpperLimit);
            expect(audioPlayer.cacheLimit.sizeUpperLimit == SIZE_UPPER_LIMIT_100M).assertTrue();
            audioPlayer.play();
            console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1300  end');
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_AAC);
        console.info(' get audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        console.info('sizeUpperLimit is : ' + audioPlayer.cacheLimit.sizeUpperLimit);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1400
       * @tc.name      : set durationUpperLimit less than min
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1400', 0, async function (done) {
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            audioPlayer.cacheLimit.durationUpperLimit = DURATION_UPPER_LIMIT_SMALLER;
            console.info('1400 get durationUpperLimit is success : ' + audioPlayer.cacheLimit.durationUpperLimit);
            expect(audioPlayer.cacheLimit.durationUpperLimit == DURATION_UPPER_LIMIT_15S).assertTrue();
            audioPlayer.play();
            console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1400  end');
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_AAC);
        console.info(' get audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        console.info('durationUpperLimit is : ' + audioPlayer.cacheLimit.durationUpperLimit);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1500
       * @tc.name      : set sizeUpperLimit larger than maxsize  limit
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1500', 0, async function (done) {
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            audioPlayer.cacheLimit.sizeUpperLimit = MINUS_ONE;
            console.info('1500 get sizeUpperLimit is success : ' + audioPlayer.cacheLimit.sizeUpperLimit);
            expect(audioPlayer.cacheLimit.sizeUpperLimit == SIZE_UPPER_LIMIT_100M).assertTrue();
            audioPlayer.play();
            console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1500  end');
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_AAC);
        console.info(' get audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        console.info('sizeUpperLimit is : ' + audioPlayer.cacheLimit.sizeUpperLimit);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_PLAYBACKCACHELIMIT_ABNORMAL_PROMISE_1600
       * @tc.name      : set durationUpperLimit larger than  limit
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1600', 0, async function (done) {
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            audioPlayer.cacheLimit.durationUpperLimit = MINUS_ONE;
            console.info('1600 get durationUpperLimit is success : ' + audioPlayer.cacheLimit.durationUpperLimit);
            expect(audioPlayer.cacheLimit.durationUpperLimit == DURATION_UPPER_LIMIT_15S).assertTrue();
            audioPlayer.play();
            console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1600  end');
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_AAC);
        console.info(' get audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
        console.info('durationUpperLimit is : ' + audioPlayer.cacheLimit.durationUpperLimit);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1700
       * @tc.name      : do not set cacheLimit , get default value
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1700', 0, async function (done) {
        initAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info(' dataLoad end.');
            console.info('1700 get sizeUpperLimit is success : ' + audioPlayer.cacheLimit.sizeUpperLimit);
            expect(audioPlayer.cacheLimit.sizeUpperLimit == SIZE_UPPER_LIMIT_100M).assertTrue();
            audioPlayer.play();
            console.info('SUB_MEDIA_AUDIO_PLAYER_CACHELIMIT_RELIABILITYL_1700 is end');
            done();
        })
        getNetworkFd(AUDIO_HTTPSOURCE_AAC);
        console.info('sizeUpperLimit is : ' + audioPlayer.cacheLimit.sizeUpperLimit);
        console.info(' get audioPlayer.src is : ' + JSON.stringify(audioPlayer.src));
    })
})
