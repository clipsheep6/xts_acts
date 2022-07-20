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

describe('videoPlayerCacheLimitFunTest', function () {
    const HTTP_SOURCE_MP4 = 'http://123.57.24.33:8000/MPEG2_AAC.mp4';
    const HTTP_SOURCE_MPEG_TS = 'http://123.57.24.33:8000/MPEG2_AAC.ts';
    const HTTP_SOURCE_WEBM = 'http://123.57.24.33:8000/VP8_VORBIS.webm';

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

    const pagePath1 = 'pages/surfaceTest/surfaceTest';
    const pagePath2 = 'pages/surfaceTest2/surfaceTest2';

    let videoSource = 'http://123.57.24.33:8000/MPEG2_AAC.ts'
    let videoPlayer = null;

    let pageId = 0;
    let surfaceID = '';
    let sleepTime = 2000;
    let a = -1;
    let b = 0

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
        await mediaTestBase.closeFileDescriptor(videoSource);
        videoPlayer.release()
        //        await router.clear();
        console.info('afterEach case');
    })

    afterAll(async function () {
        console.info('afterAll case');
    })

    async function sleep(time) {
        return new Promise((resolve) => setTimeout(resolve, time))
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
                console.info('create player is faild');
            }
        }).catch((err) => {
            console.info('create player is faild, err: ' + JSON.stringify(err))
            expect().assertFail();
        })
    }

    function getNetworkFd(url) {
        console.info('videoplayer.url start!')
        if (typeof (url) != 'undefined') {
            videoPlayer.url = url;
            console.info('videoPlayer.url is : ' + JSON.stringify(videoPlayer.url));
        } else {
            console.error('case fdsrc test error');
        }
    }

    async function setSurface(id) {
        console.info('this is setSurface');
        videoPlayer.setDisplaySurface(id).then((data) => {
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

    async function videoPlay(caseid, cacheLimit, type1, type2, type1value, type2value) {
        console.info('cacheLimit is ' + JSON.stringify(cacheLimit));
        await videoPlayer.play().then((data) => {
            onsole.info('cacheLimit 1 is ' + JSON.stringify(cacheLimit));
            console.info('play is success, data: ' + data);
            if (type1 == 'sizeUpperLimit' && type2 == null) {
                console.info('type1value is ' + type1value);
                console.info('case ' + caseid + ' get sizeUpperLimit is success : ' + cacheLimit.sizeUpperLimit);
                expect(cacheLimit.sizeUpperLimit == type1value).assertTrue();
            }
            else if (type1 == null && type2 == 'durationUpperLimit') {
                onsole.info('cacheLimit 2 is ' + JSON.stringify(cacheLimit));
                console.info('type2value is ' + type2value);
                console.info('case ' + caseid + ' get durationUpperLimit is success : ' + cacheLimit.durationUpperLimit);
                expect(cacheLimit.durationUpperLimit == type2value).assertTrue();
            }
            else if (type1 == 'sizeUpperLimit' && type2 == 'durationUpperLimit') {
                onsole.info('cacheLimit 3 is ' + JSON.stringify(cacheLimit));
                console.info('play is success, data: ' + data);
                console.info('case ' + caseid + ' get durationUpperLimit is success : ' + cacheLimit.durationUpperLimit);
                console.info('case ' + caseid + ' get sizeUpperLimit is success : ' + cacheLimit.sizeUpperLimit);
                expect(cacheLimit.durationUpperLimit == type2value).assertTrue();
                expect(cacheLimit.sizeUpperLimit == type1value).assertTrue();
            }
        }).catch((err) => {
            console.info('play is fail, err: ' + err);
        });
    }

    async function videoPlaySigle(caseid, cacheLimit, type, value) {
        videoPlayer.play().then((data) => {
            console.info('play is success, data: ' + data);
            if (type == 'sizeUpperLimit') {
                console.info('case ' + caseid + ' get sizeUpperLimit is success : ' + cacheLimit.sizeUpperLimit);
                expect(cacheLimit.sizeUpperLimit == value).assertTrue();
            }
            else if (type == 'durationUpperLimit') {
                console.info('case ' + caseid + ' get durationUpperLimit is success : ' + cacheLimit.durationUpperLimit);
                expect(cacheLimit.durationUpperLimit == value).assertTrue();
            }
        }).catch((err) => {
            console.info('play is fail, err: ' + err);
        });
    }

    async function videoPlayBoth(caseid, cacheLimit, value1, value2) {
        videoPlayer.play().then((data) => {
            console.info('play is success, data: ' + data);
            console.info('case ' + caseid + 'get durationUpperLimit is success : ' + cacheLimit.durationUpperLimit);
            console.info('case ' + caseid + ' get sizeUpperLimit is success : ' + cacheLimit.sizeUpperLimit);
            expect(cacheLimit.durationUpperLimit == value2).assertTrue();
            expect(cacheLimit.sizeUpperLimit == value1).assertTrue();
        }).catch((err) => {
            console.info('play is fail, err: ' + err);
        });
    }

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0100
        * @tc.name      : http paly mp4 set sizeUpperLimit before prepare--100M
        * @tc.desc      : set sizeUpperLimit before prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0100', 0, async function (done) {
        let caseid = '0100';
        await initVideoPlayer();
        getNetworkFd(HTTP_SOURCE_MPEG_TS);
        console.info('case 0100 getmetworkfd videoPlayer.url:' + videoPlayer.url);
        await setSurface(surfaceID);
        videoPlayer.cacheLimit = { sizeUpperLimit: SIZE_UPPER_LIMIT_100M };
        console.info('case 0100sizeUpperLimit is : ' + videoPlayer.cacheLimit.sizeUpperLimit);
        await videoPrepare();
        await sleep(sleepTime);
        await videoPlay(caseid, videoPlayer.cacheLimit, 'sizeUpperLimit', null, SIZE_UPPER_LIMIT_100M, null);
        await sleep(sleepTime);
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0100 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0200
        * @tc.name      : http paly mp4 set sizeUpperLimit after prepare--100M
        * @tc.desc      : set sizeUpperLimit after prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0200', 0, async function (done) {
        let caseid = '0200';
        await initVideoPlayer();
        await sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MP4);
        await setSurface(surfaceID);
        await videoPrepare();
        videoPlayer.cacheLimit = { sizeUpperLimit: SIZE_UPPER_LIMIT_100M };
        console.info('sizeUpperLimit is : ' + videoPlayer.cacheLimit.sizeUpperLimit);
        await videoPlaySigle(caseid, videoPlayer.cacheLimit, 'sizeUpperLimit', SIZE_UPPER_LIMIT_100M);
        await sleep(sleepTime);
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0200 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0300
        * @tc.name      : http paly mp4 set durationUpperLimit before prepare--15s
        * @tc.desc      : set durationUpperLimit before prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0300', 0, async function (done) {
        let caseid = '0300';
        await initVideoPlayer();
        await sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MP4);
        await setSurface(surfaceID);
        videoPlayer.cacheLimit = { durationUpperLimit: DURATION_UPPER_LIMIT_15S };
        console.info('durationUpperLimit is : ' + videoPlayer.cacheLimit.durationUpperLimit);
        await videoPrepare();
        await sleep(sleepTime);
        await videoPlay(caseid, videoPlayer.cacheLimit, null, 'durationUpperLimit', null, DURATION_UPPER_LIMIT_15S);
        await sleep(sleepTime);
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0300 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0400
        * @tc.name      : http paly mp4 set durationUpperLimit before prepare--60s
        * @tc.desc      : set durationUpperLimit before prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0400', 0, async function (done) {
        let caseid = '0400';
        await initVideoPlayer();
        await sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MP4);
        await setSurface(surfaceID);
        videoPlayer.cacheLimit = { durationUpperLimit: DURATION_UPPER_LIMIT_60S };
        await videoPrepare();
        console.info('durationUpperLimit is : ' + videoPlayer.cacheLimit.durationUpperLimit);
        await sleep(sleepTime);
        await videoPlay(caseid, videoPlayer.cacheLimit, null, 'durationUpperLimit', null, DURATION_UPPER_LIMIT_60S);
        console.info('case 0400 get durationUpperLimit is success : ' + videoPlayer.cacheLimit.durationUpperLimit);
        await sleep(sleepTime);
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0400 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0500
        * @tc.name      : http paly mp4 set durationUpperLimit after prepare--15s
        * @tc.desc      : set durationUpperLimit after prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0500', 0, async function (done) {
        let caseid = '0500';
        await initVideoPlayer();
        await sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MP4);
        await setSurface(surfaceID);
        await videoPrepare();
        videoPlayer.cacheLimit = { durationUpperLimit: DURATION_UPPER_LIMIT_15S };
        console.info('durationUpperLimit is : ' + videoPlayer.cacheLimit.durationUpperLimit);
        await sleep(sleepTime);
        await videoPlay(caseid, videoPlayer.cacheLimit, null, 'durationUpperLimit', null, DURATION_UPPER_LIMIT_15S);
        await sleep(sleepTime);
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0500 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0600
        * @tc.name      : http paly mp4 set durationUpperLimit after prepare--60s
        * @tc.desc      : set durationUpperLimit after prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0600', 0, async function (done) {
        let caseid = '0600';
        await initVideoPlayer();
        await sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MP4);
        await setSurface(surfaceID);
        videoPlayer.cacheLimit = { durationUpperLimit: DURATION_UPPER_LIMIT_60S };
        console.info('durationUpperLimit is : ' + videoPlayer.cacheLimit.durationUpperLimit);
        await videoPrepare();
        await sleep(sleepTime);
        await videoPlay(caseid, videoPlayer.cacheLimit, null, 'durationUpperLimit', null, DURATION_UPPER_LIMIT_60S);
        await sleep(sleepTime);
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0600 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0700
        * @tc.name      : both set sizeUpperLimit and durationUpperLimit  after prepare
        * @tc.desc      : both set sizeUpperLimit and durationUpperLimit
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0700', 0, async function (done) {
        let caseid = '0700';
        await initVideoPlayer();
        await sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MP4);
        await setSurface(surfaceID);
        videoPlayer.cacheLimit = {
            sizeUpperLimit: SIZE_UPPER_LIMIT_100M,
            durationUpperLimit: DURATION_UPPER_LIMIT_60S
        };
        console.info('durationUpperLimit is : ' + videoPlayer.cacheLimit.durationUpperLimit);
        console.info('sizeUpperLimit is : ' + videoPlayer.cacheLimit.sizeUpperLimit);
        await videoPrepare();
        await sleep(sleepTime);
        await videoPlay(caseid, videoPlayer.cacheLimit, 'sizeUpperLimit', 'durationUpperLimit',
            SIZE_UPPER_LIMIT_100M, DURATION_UPPER_LIMIT_60S);
        await sleep(sleepTime);
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0700 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0800
        * @tc.name      : http paly mpeg-ts  set sizeUpperLimit before prepare
        * @tc.desc      : set sizeUpperLimit before prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0800', 0, async function (done) {
        let caseid = '0800';
        await initVideoPlayer();
        await sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MPEG_TS);
        await setSurface(surfaceID);
        videoPlayer.cacheLimit = { sizeUpperLimit: SIZE_UPPER_LIMIT_100M };
        console.info('sizeUpperLimit is : ' + videoPlayer.cacheLimit.sizeUpperLimit);
        await videoPrepare();
        await sleep(sleepTime);
        await videoPlay(caseid, videoPlayer.cacheLimit, 'sizeUpperLimit', null, SIZE_UPPER_LIMIT_100M, null);
        await sleep(sleepTime);
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0800 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0900
        * @tc.name      : http paly mpeg-ts  set sizeUpperLimit after prepare
        * @tc.desc      : set sizeUpperLimit after prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0900', 0, async function (done) {
        let caseid = '0900';
        await initVideoPlayer();
        await sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MPEG_TS);
        await setSurface(surfaceID);
        await videoPrepare();
        videoPlayer.cacheLimit = { sizeUpperLimit: SIZE_UPPER_LIMIT_100M };
        console.info('sizeUpperLimit is : ' + videoPlayer.cacheLimit.sizeUpperLimit);
        await sleep(sleepTime);
        await videoPlay(caseid, videoPlayer.cacheLimit, 'sizeUpperLimit', null, SIZE_UPPER_LIMIT_100M, null);
        await sleep(sleepTime);
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_0900 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1000
        * @tc.name      : http paly mpeg-ts set durationUpperLimit before prepare
        * @tc.desc      : set durationUpperLimit before prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1000', 0, async function (done) {
        let caseid = '1000';
        await initVideoPlayer();
        await sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MPEG_TS);
        await setSurface(surfaceID);
        videoPlayer.cacheLimit = { durationUpperLimit: DURATION_UPPER_LIMIT_15S };
        console.info('durationUpperLimit is : ' + videoPlayer.cacheLimit.durationUpperLimit);
        await videoPrepare();
        await sleep(sleepTime);
        await videoPlay(caseid, videoPlayer.cacheLimit, null, 'durationUpperLimit', null, DURATION_UPPER_LIMIT_15S);
        await sleep(sleepTime);
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1000 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1100
        * @tc.name      : http paly mpeg-ts set durationUpperLimit  after prepare
        * @tc.desc      : set durationUpperLimit after prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1100', 0, async function (done) {
        let caseid = '1100';
        await initVideoPlayer();
        await sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MPEG_TS);
        await setSurface(surfaceID);
        await videoPrepare();
        videoPlayer.cacheLimit = { durationUpperLimit: DURATION_UPPER_LIMIT_60S };
        console.info('durationUpperLimit is : ' + videoPlayer.cacheLimit.durationUpperLimit);
        await sleep(sleepTime);
        await videoPlay(caseid, videoPlayer.cacheLimit, null, 'durationUpperLimit', null, DURATION_UPPER_LIMIT_60S);
        await sleep(sleepTime);
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1100 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1200
        * @tc.name      : http paly webm set sizeUpperLimit before prepare
        * @tc.desc      : set sizeUpperLimit before prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1200', 0, async function (done) {
        let caseid = '1200';
        await initVideoPlayer();
        await sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_WEBM);
        await setSurface(surfaceID);
        videoPlayer.cacheLimit = { sizeUpperLimit: SIZE_UPPER_LIMIT_100M };
        console.info('sizeUpperLimit is : ' + videoPlayer.cacheLimit.sizeUpperLimit);
        await videoPrepare();
        await sleep(sleepTime);
        await videoPlay(caseid, videoPlayer.cacheLimit, 'sizeUpperLimit', null, SIZE_UPPER_LIMIT_100M, null);
        await sleep(sleepTime);
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1200 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1300
        * @tc.name      : http paly webm set sizeUpperLimit after prepare
        * @tc.desc      : set sizeUpperLimit after prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1300', 0, async function (done) {
        let caseid = '1300';
        await initVideoPlayer();
        await sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_WEBM);
        await setSurface(surfaceID);
        await videoPrepare();
        videoPlayer.cacheLimit = { sizeUpperLimit: SIZE_UPPER_LIMIT_500M };
        console.info('sizeUpperLimit is : ' + videoPlayer.cacheLimit.sizeUpperLimit);
        await sleep(sleepTime);
        await videoPlay(caseid, videoPlayer.cacheLimit, 'sizeUpperLimit', null, SIZE_UPPER_LIMIT_500M, null);
        await sleep(sleepTime);
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1300 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1400
        * @tc.name      : http paly webm set durationUpperLimit before prepare
        * @tc.desc      : set durationUpperLimit before prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1400', 0, async function (done) {
        let caseid = '1400';
        await initVideoPlayer();
        await sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_WEBM);
        await setSurface(surfaceID);
        videoPlayer.cacheLimit = { durationUpperLimit: DURATION_UPPER_LIMIT_60S };
        console.info('durationUpperLimit is : ' + videoPlayer.cacheLimit.durationUpperLimit);
        await videoPrepare();
        await sleep(sleepTime);
        await videoPlay(caseid, videoPlayer.cacheLimit, null, 'durationUpperLimit', null, DURATION_UPPER_LIMIT_60S);
        await sleep(sleepTime);
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1400 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1500
        * @tc.name      : http paly webm set durationUpperLimit  after prepare
        * @tc.desc      : set durationUpperLimit after prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1500', 0, async function (done) {
        let caseid = '1500';
        await initVideoPlayer();
        await sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_WEBM);
        await setSurface(surfaceID);
        await videoPrepare();
        videoPlayer.cacheLimit = { durationUpperLimit: DURATION_UPPER_LIMIT_15S };
        console.info('durationUpperLimit is : ' + videoPlayer.cacheLimit.durationUpperLimit);
        await sleep(sleepTime);
        await videoPlay(caseid, videoPlayer.cacheLimit, null, 'durationUpperLimit', null, DURATION_UPPER_LIMIT_15S);
        await sleep(sleepTime);
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1500 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1600
        * @tc.name      : http paly mp4 set sizeUpperLimit before prepare--500M
        * @tc.desc      : set sizeUpperLimit before prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1600', 0, async function (done) {
        let caseid = '1600';
        await initVideoPlayer();
        await sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MP4);
        await setSurface(surfaceID);
        videoPlayer.cacheLimit = { sizeUpperLimit: SIZE_UPPER_LIMIT_500M };
        console.info('sizeUpperLimit is : ' + videoPlayer.cacheLimit.sizeUpperLimit);
        await videoPrepare();
        await sleep(sleepTime);
        await videoPlay(caseid, videoPlayer.cacheLimit, 'sizeUpperLimit', null, SIZE_UPPER_LIMIT_500M, null);
        await sleep(sleepTime);
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1600 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1700
        * @tc.name      : http paly mp4 set sizeUpperLimit after prepare--500M
        * @tc.desc      : set sizeUpperLimit after prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1700', 0, async function (done) {
        let caseid = '1700';
        await initVideoPlayer();
        await sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MP4);
        await setSurface(surfaceID);
        await videoPrepare();
        videoPlayer.cacheLimit = { sizeUpperLimit: SIZE_UPPER_LIMIT_500M };
        console.info('sizeUpperLimit is : ' + videoPlayer.cacheLimit.sizeUpperLimit);
        await sleep(sleepTime);
        await videoPlay(caseid, videoPlayer.cacheLimit, 'sizeUpperLimit', null, SIZE_UPPER_LIMIT_500M, null);
        await sleep(sleepTime);
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1700 end');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1800
        * @tc.name      : both set sizeUpperLimit and durationUpperLimit before prepare
        * @tc.desc      : both set sizeUpperLimit and durationUpperLimit and set durationUpperLimit success
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1800', 0, async function (done) {
        let caseid = '1800';
        await initVideoPlayer();
        await sleep(sleepTime);
        getNetworkFd(HTTP_SOURCE_MP4);
        await setSurface(surfaceID);
        videoPlayer.cacheLimit = {
            durationUpperLimit: DURATION_UPPER_LIMIT_15S,
            sizeUpperLimit: SIZE_UPPER_LIMIT_100M
        };
        console.info('durationUpperLimit is : ' + videoPlayer.cacheLimit.durationUpperLimit)
        console.info('sizeUpperLimit is : ' + videoPlayer.cacheLimit.sizeUpperLimit)
        await videoPrepare();
        await sleep(sleepTime);
        await videoPlayBoth(caseid, videoPlayer.cacheLimit, 'sizeUpperLimit', 'durationUpperLimit',
            SIZE_UPPER_LIMIT_100M, DURATION_UPPER_LIMIT_15S);
        console.info('SUB_MEDIA_VIDEO_PLAYER_CACHELIMIT_FUNCTION_1800 end');
        done();
    })
})
