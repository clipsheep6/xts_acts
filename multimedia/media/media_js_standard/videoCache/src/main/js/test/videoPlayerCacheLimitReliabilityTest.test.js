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
import router from '@system.router'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import * as VideoPlayerTestBase from '../../../../../VideoPlayerTestBase.js'
import * as mediaTestBase from '../../../../../MediaTestBase.js'

describe('videoPlayerCacheLimitReliabilityTest', function () {
    const HTTP_SOURCE_MP4 = 'http://123.57.24.33:8000/MPEG2_AAC.mp4';

    const LOCAL_SOURCE_MPEG_TS = 'mpeg4_aac_720p_30r.ts';
    const LOCAL_SOURCE_WEBM = 'vp8_vorbis_720p_30r.webm';

    const PLAY_TIME = 3000;
    const SEEK_TIME = 2100;
    const WIDTH_VALUE = 720;
    const HEIGHT_VALUE = 480;
    const DURATION_TIME = 10034;
    const DELTA_TIME = 1000;
    const NEXT_FRAME_TIME = 2200;
    const PREV_FRAME_TIME = 2000;

    const SIZE_UPPER_LIMIT_100M = 100 * 1024 * 1024;
    const SIZE_UPPER_LIMIT_500M = 500 * 1024 * 1024;
    const DURATION_UPPER_LIMIT_15S = 15 * 1000;
    const DURATION_UPPER_LIMIT_60S = 60 * 1000;
    const SIZE_UPPER_LIMIT_SMALLER_100M = 100 * 1024 * 1024 - 1;
    const SIZE_UPPER_LIMIT_LARGER_500M = 500 * 1024 * 1024 + 1;
    const DURATION_UPPER_LIMIT_LARGER_60S = 60 * 1000 + 1;
    const DURATION_UPPER_LIMIT_SMALLER_15S = 15 * 1000 - 1;
    const MINUS_ONE = -1;

    const pagePath1 = 'pages/surfaceTest/surfaceTest';
    const pagePath2 = 'pages/surfaceTest2/surfaceTest2';
    let videoSource = 'H264_MP3.mp4';
    let videoPlayer = null;

    let pageId = 0;
    let surfaceID = '';
    let fdLocal = 'fd://';
    let fileDescriptor = undefined;
    let sleepTime = 2000;

    beforeAll(function () {
        console.info('beforeAll case');
    })

    beforeEach(async function () {
        await mediaTestBase.toNewPage(pagePath1, pagePath2, pageId);
        pageId = (pageId + 1) % 2;
        await sleep(sleepTime);
        surfaceID = globalThis.value;
        console.info('surfaceID is : ' + surfaceID);
        console.info('beforeEach case');
    })

    afterEach(async function () {
        console.info('afterEach start');
        await mediaTestBase.closeFileDescriptor(videoSource);
        await videoPlayer.release().then(() => {
            console.info('afterEach release success');
        }, (err) => {
            console.info('afterEach release failed');
        });
        await mediaTestBase.clearRouter();
        console.info('afterEach case');
    })

    afterAll(async function () {
        console.info('afterAll case');
    })

    async function sleep(time) {
        return new Promise((resolve) => setTimeout(resolve, time));
    }

    function failureCallback(error) {
        expect().assertFail();
        console.info(`case error called,errMessage is ${error.message}`);
    }

    function catchCallback(error) {
        expect().assertFail();
        console.info(`case error called,errMessage is ${error.message}`);
    }

    async function initVideoPlayer() {
        await media.createVideoPlayer().then((video) => {
            if (typeof (video) != 'undefined') {
                videoPlayer = video;
                console.info('createVideoPlayer is success, data: ' + video);
            } else {
                console.info('create player is failed');
            }
        }).catch((err) => {
            console.info('create player is failed, err: ' + JSON.stringify(err));
            expect().assertFail();
        })
    }

    async function setVideoSource(videoFile) {
        videoSource = videoFile;
        await mediaTestBase.getFileDescriptor(videoSource).then((res) => {
            fileDescriptor = res;
        });
        await sleep(1000);
        videoPlayer.url = fdLocal + fileDescriptor.fd;
        console.info('videoPlayer.url is : ' + JSON.stringify(videoPlayer.url));
    }

    function getNetworkFd(url) {
        console.info('videoPlayer.url start!');
        videoPlayer.url = url;
        console.info('videoPlayer.url is : ' + JSON.stringify(videoPlayer.url));
    }

    async function setSurface(id) {
        console.info('this is setSurface');
        await videoPlayer.setDisplaySurface(id).then((data) => {
            console.info('setDisplaySurface is success, data: ' + +JSON.stringify(data));
        }).catch((err) => {
            console.info('setDisplaySurface is fail, err: ' + JSON.stringify(err));
        })
    }

    async function videoPrepare() {
        await videoPlayer.prepare().then((data) => {
            console.info('prepare is success, data:  ' + +JSON.stringify(data));
        }).catch((err) => {
            console.info('prepare is fail, err:  ' + JSON.stringify(err));
        })
    }


    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0100
        * @tc.name      : play local mp4 cache return -1
        * @tc.desc      : set sizeUpperLimit failure when play local video file
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0100', 0, async function (done) {
        initVideoPlayer();
        await sleep(sleepTime);
        await setVideoSource(videoSource);
        setSurface(surfaceID);
        videoPlayer.cacheLimit = {
            sizeUpperLimit: SIZE_UPPER_LIMIT_100M
        };
        console.info('case 0100 sizeUpperLimit is : ' + videoPlayer.cacheLimit.sizeUpperLimit);
        videoPrepare();
        console.info('case 0100 get sizeUpperLimit is success : ' + videoPlayer.cacheLimit.sizeUpperLimit);
        expect(videoPlayer.cacheLimit.sizeUpperLimit == MINUS_ONE).assertTrue();
        videoPlayer.play();
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0100 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0200
        * @tc.name      : play local mpeg-ts set cache limit  return -1
        * @tc.desc      : set sizeUpperLimit failure when play local video file
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0200', 0, async function (done) {
        initVideoPlayer();
        await sleep(sleepTime);
        await setVideoSource(LOCAL_SOURCE_MPEG_TS);
        setSurface(surfaceID);
        videoPrepare();
        videoPlayer.cacheLimit = {
            sizeUpperLimit: SIZE_UPPER_LIMIT_100M
        };
        console.info('case 0200 sizeUpperLimit is : ' + videoPlayer.cacheLimit.sizeUpperLimit);
        expect(videoPlayer.cacheLimit.sizeUpperLimit == MINUS_ONE).assertTrue();
        videoPlayer.play();
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0200 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0300
        * @tc.name      : play local webm  set cache limit  return -1
        * @tc.desc      : set sizeUpperLimit failure when play local video file
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0300', 0, async function (done) {
        await initVideoPlayer();
        await sleep(sleepTime);
        await setVideoSource(LOCAL_SOURCE_WEBM);
        setSurface(surfaceID);
        await videoPrepare();
        videoPlayer.cacheLimit = {
            durationUpperLimit: DURATION_UPPER_LIMIT_60S
        };
        console.info('case 0300 durationUpperLimit is : ' + videoPlayer.cacheLimit.durationUpperLimit);
        expect(videoPlayer.cacheLimit.sizeUpperLimit == MINUS_ONE).assertTrue();
        videoPlayer.play();
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0300 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0400
        * @tc.name      : set sizeUpperLimit before setSource , get default value
        * @tc.desc      : set cache limit failure before setSource
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0400', 0, async function (done) {
        await initVideoPlayer();
        await sleep(sleepTime);
        videoPlayer.cacheLimit = {
            sizeUpperLimit: SIZE_UPPER_LIMIT_500M
        };
        console.info('case 0400 sizeUpperLimit is : ' + videoPlayer.cacheLimit.sizeUpperLimit);
        getNetworkFd(HTTP_SOURCE_MP4);
        await setSurface(surfaceID);
        await videoPrepare();
        console.info('case 0400 get sizeUpperLimit is success : ' + videoPlayer.cacheLimit.sizeUpperLimit);
        expect(videoPlayer.cacheLimit.sizeUpperLimit == SIZE_UPPER_LIMIT_100M).assertTrue();
        videoPlayer.play();
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0400 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0500
        * @tc.name      : set durationUpperLimit before setSource , get default value
        * @tc.desc      : set cache limit failure before setSource
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0500', 0, async function (done) {
        await initVideoPlayer();
        await sleep(sleepTime);
        videoPlayer.cacheLimit = {
            durationUpperLimit: DURATION_UPPER_LIMIT_60S
        };
        console.info('case 0500 durationUpperLimit is : ' + videoPlayer.cacheLimit.durationUpperLimit);
        getNetworkFd(HTTP_SOURCE_MP4);
        await setSurface(surfaceID);
        await  videoPrepare();
        console.info('case 0500 durationUpperLimit is success : ' + videoPlayer.cacheLimit.durationUpperLimit);
        expect(videoPlayer.cacheLimit.durationUpperLimit == DURATION_UPPER_LIMIT_15S).assertTrue();
        videoPlayer.play();
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0500 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0600
        * @tc.name      : set sizeUpperLimit after play , get default value
        * @tc.desc      : set cache limit failure after play
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0600', 0, async function (done) {
        await initVideoPlayer();
        sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MP4);
        await setSurface(surfaceID);
        await videoPrepare();
        videoPlayer.play();
        videoPlayer.cacheLimit = {
            sizeUpperLimit: SIZE_UPPER_LIMIT_100M
        };
        console.info('case 0600 durationUpperLimit is success: ' + videoPlayer.cacheLimit.durationUpperLimit);
        expect(videoPlayer.cacheLimit.sizeUpperLimit == SIZE_UPPER_LIMIT_100M).assertTrue();
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0600 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0700
        * @tc.name      : set durationUpperLimit after play
        * @tc.desc      : set cache limit failure after play
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0700', 0, async function (done) {
        await initVideoPlayer();
        sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MP4);
        await setSurface(surfaceID);
        await videoPrepare();
        videoPlayer.play();
        videoPlayer.cacheLimit = {
            durationUpperLimit: DURATION_UPPER_LIMIT_60S
        };
        console.info('case 0700 get durationUpperLimit is success : ' + videoPlayer.cacheLimit.durationUpperLimit);
        expect(videoPlayer.cacheLimit.durationUpperLimit == DURATION_UPPER_LIMIT_60S).assertTrue();
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0700 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0800
        * @tc.name      : set sizeUpperLimit larger than maxsize limit , get default value
        * @tc.desc      : set cache limit failure when durationUpperLimit larger than maxsize limit
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0800', 0, async function (done) {
        await initVideoPlayer();
        sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MP4);
        await setSurface(surfaceID);
        await videoPrepare();
        videoPlayer.cacheLimit = {
            sizeUpperLimit: SIZE_UPPER_LIMIT_LARGER_500M
        };
        console.info('case 0800 sizeUpperLimit is : ' + videoPlayer.cacheLimit.sizeUpperLimit);
        expect(videoPlayer.cacheLimit.sizeUpperLimit == SIZE_UPPER_LIMIT_100M).assertTrue();
        videoPlayer.play();
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0800 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0900
        * @tc.name      : set durationUpperLimit larger than  limit , get default value
        * @tc.desc      : set cache limit failure when sizeUpperLimit larger than maxsize limit
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0900', 0, async function (done) {
        await initVideoPlayer();
        sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MP4);
        await setSurface(surfaceID);
        await videoPrepare();
        videoPlayer.cacheLimit = {
            durationUpperLimit: DURATION_UPPER_LIMIT_LARGER_60S
        };
        console.info('case 0900 durationUpperLimit is : ' + videoPlayer.cacheLimit.durationUpperLimit);
        expect(videoPlayer.cacheLimit.durationUpperLimit == DURATION_UPPER_LIMIT_15S).assertTrue();
        videoPlayer.play();
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_0900 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_1000
        * @tc.name      : set sizeUpperLimit less than min , get default value
        * @tc.desc      : set cache limit failure when set sizeUpperLimit less than min
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_1000', 0, async function (done) {
        await initVideoPlayer();
        sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MP4);
        await setSurface(surfaceID);
        await videoPrepare();
        videoPlayer.cacheLimit = {
            sizeUpperLimit: SIZE_UPPER_LIMIT_SMALLER_100M
        };
        console.info('case 1000 sizeUpperLimit is : ' + videoPlayer.cacheLimit.sizeUpperLimit);
        expect(videoPlayer.cacheLimit.sizeUpperLimit == SIZE_UPPER_LIMIT_100M).assertTrue();
        videoPlayer.play();
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_1000 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_1100
        * @tc.name      : set durationUpperLimit less than min , get default value
        * @tc.desc      : set cache limit failure when set durationUpperLimit less than min
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_1100', 0, async function (done) {
        await initVideoPlayer();
        sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MP4);
        await setSurface(surfaceID);
        await videoPrepare();
        videoPlayer.cacheLimit = {
            durationUpperLimit: DURATION_UPPER_LIMIT_SMALLER_15S
        };
        console.info('case 1100 durationUpperLimit is : ' + videoPlayer.cacheLimit.durationUpperLimit);
        expect(videoPlayer.cacheLimit.durationUpperLimit == DURATION_UPPER_LIMIT_15S).assertTrue();
        videoPlayer.play();
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_1100 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_1200
        * @tc.name      : set sizeUpperLimit abnormal , get default value
        * @tc.desc      : set sizeUpperLimit abnormal before prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_1200', 0, async function (done) {
        await initVideoPlayer();
        sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MP4);
        await setSurface(surfaceID);
        await videoPrepare();
        videoPlayer.cacheLimit = {
            sizeUpperLimit: MINUS_ONE
        };
        console.info('case 1200 sizeUpperLimit is : ' + videoPlayer.cacheLimit.sizeUpperLimit);
        expect(videoPlayer.cacheLimit.sizeUpperLimit == SIZE_UPPER_LIMIT_100M).assertTrue();
        videoPlayer.play();
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_1200 end');
        done();
    })


    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_1300
        * @tc.name      : http play webm set sizeUpperLimit after prepare , get default value
        * @tc.desc      : set sizeUpperLimit after prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_1300', 0, async function (done) {
        await initVideoPlayer();
        sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MP4);
        await setSurface(surfaceID);
        await videoPrepare();
        videoPlayer.cacheLimit = {
            durationUpperLimit: MINUS_ONE
        };
        console.info('case 1300 durationUpperLimit is : ' + videoPlayer.cacheLimit.durationUpperLimit);
        expect(videoPlayer.cacheLimit.durationUpperLimit == DURATION_UPPER_LIMIT_15S).assertTrue();
        videoPlayer.play();
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_1300 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_1400
        * @tc.name      : do not set cacheLimit , get default value
        * @tc.desc      : no sizeUpperLimit after prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_1400', 0, async function (done) {
        await initVideoPlayer();
        sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MP4);
        await setSurface(surfaceID);
        await videoPrepare();
        console.info('case 1400 durationUpperLimit is : ' + videoPlayer.cacheLimit.durationUpperLimit);
        expect(videoPlayer.cacheLimit.durationUpperLimit == DURATION_UPPER_LIMIT_15S).assertTrue();
        videoPlayer.play();
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_RELIABILITY_1400 end');
        done();
    })
})
