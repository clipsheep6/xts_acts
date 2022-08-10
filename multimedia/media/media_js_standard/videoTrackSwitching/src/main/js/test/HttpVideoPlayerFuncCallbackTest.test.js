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

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index';
import * as videoBase from './VideoTrackSwitchingBase.js';
import * as mediaTestBase from '../../../../../MediaTestBase.js';
import media from '@ohos.multimedia.media';

describe('HttpVideoPlayerFuncCallbackTest', function () {

    const pagePath1 = 'pages/surfaceTest/surfaceTest';
    const pagePath2 = 'pages/surfaceTest2/surfaceTest2';
    const DURATION_TIME = 219591;
    const END_STATE = 0;
    const SRC_STATE = 1;
    const PLAY_STATE = 2;
    const PAUSE_STATE = 3;
    const STOP_STATE = 4;
    const SEEK_STATE = 5;
    const GET_TD_STATE = 6;
    const GET_ST_STATE = 7;
    const ST_STATE = 8;
    const SET_DS_STATE = 9;
    const PREPARE_STATE = 10;
    const SECOND_INDEX = 1;
    const TIMEOUT = 2000;
    const VIDEO_HTTP_PATH = 'http://123.57.24.33:8000/03.videoplayer/multiAudioTrack/';
    const H263_AAC_3TRK_MKV = 'muliaudio_h263_1trk_aac_2trk.mkv';
    const H263_MP3_3TRK_MKV = 'muliaudio_h263_1trk_mp3_2trk.mkv';
    const H264_AAC_3TRK_MKV = 'muliaudio_h264_1trk_aac_2trk.mkv';
    const H264_MP3_3TRK_MKV = 'muliaudio_h264_1trk_mp3_2trk.mkv';
    const MPEG2_AAC_3TRK_MKV = 'muliaudio_mpeg2_1trk_aac_2trk.mkv';
    const MPEG2_MP3_3TRK_MKV = 'muliaudio_mpeg2_1trk_mp3_2trk.mkv';
    const MPEG4_AAC_3TRK_MKV = 'muliaudio_mpeg4_1trk_aac_2trk.mkv';
    const MPEG4_MP3_3TRK_MKV = 'muliaudio_mpeg4_1trk_mp3_2trk.mkv';
    const H263_MP3_16TRK_MKV = 'muliaudio_h263_1trk_mp3_16trk.mkv';
    const H263_AAC_1TRK_MP3_1TRK_MKV = 'muliaudio_h263_1trk_aac_1trk_mp3_1trk.mkv';
    const H264_AAC_3TRK_TS = 'muliaudio_h264_1trk_aac_2trk.ts';
    const H264_MP3_3TRK_TS = 'muliaudio_h264_1trk_mp3_2trk.ts';
    const MPEG2_AAC_3TRK_TS = 'muliaudio_mpeg2_1trk_aac_2trk.ts';
    const MPEG2_MP3_3TRK_TS = 'muliaudio_mpeg2_1trk_mp3_2trk.ts';
    const MPEG4_AAC_3TRK_TS = 'muliaudio_mpeg4_1trk_aac_2trk.ts';
    const MPEG4_MP3_3TRK_TS = 'muliaudio_mpeg4_1trk_mp3_2trk.ts';
    const MPEG2_MP3_16TRK_TS = 'muliaudio_mpeg2_1trk_mp3_16trk.ts';
    const MPEG2_AAC_1TRK_MP3_1TRK_TS = 'muliaudio_mpeg2_1trk_aac_1trk_mp3_1trk.ts';

    let videoSource = '';
    let videoExpect = [];
    let mySteps = [];
    let pageId = 0;
    let surfaceID = '';
    let videoPlayer = null;
    let allDescription = null;
    let allDescriptionIndex = [];
    let currentDescription = [];
    let currentDescriptionIndex = [];
    let differentTracks = [];
    let selectTrackData = 0;

    async function sleep(time) {
        return new Promise((resolve) => setTimeout(resolve, time))
    }

    beforeEach(async function () {
        console.info('--------------beforeEach start--------------');
        await mediaTestBase.toNewPage(pagePath1, pagePath2, pageId);
        pageId = (pageId + 1) % 2;
        await sleep(TIMEOUT);
        surfaceID = globalThis.value;
        console.info('surfaceID is : ' + surfaceID);
        console.info('beforeEach end');
    })

    afterEach(async function () {
        console.info('afterEach start');
        await mediaTestBase.closeFileDescriptor(videoSource);
        await mediaTestBase.clearRouter();
        videoExpect = [];
        await sleep(TIMEOUT);
        videoPlayer.release();
        console.info('afterEach end');
    })

    function up(x, y) {
        return x.track_index - y.track_index;
    }

    function nextStep(done) {
        if (mySteps[0] == END_STATE) {
            console.info('mySteps is END_STATE')
            done();
            console.info('case to done');
            return;
        }
        switch (mySteps[0]) {
            case SRC_STATE:
                console.info(`mySteps is SRC_STATE`);
                videoPlayer.url = VIDEO_HTTP_PATH + videoSource;
                mySteps.shift();
                nextStep(done);
                break;
            case PLAY_STATE:
                console.info(`mySteps is PLAY_STATE`);
                videoPlayer.play().then((data) => {
                    console.info('play is success, data: ' + data);
                    mySteps.shift();
                    expect(videoPlayer.state).assertEqual('playing');
                    nextStep(done);
                }).catch((err) => {
                    console.info('play is fail, err: ' + err);
                    failureCallback(err, done);
                })
                break;
            case PAUSE_STATE:
                console.info(`mySteps is PAUSE_STATE`);
                videoPlayer.pause().then((data) => {
                    console.info('pause is success, data: ' + data);
                    mySteps.shift();
                    expect(videoPlayer.state).assertEqual('paused');
                    nextStep(done);
                }).catch((err) => {
                    console.info('pause is fail, err: ' + err);
                    failureCallback(err, done);
                })
                break;
            case STOP_STATE:
                console.info(`mySteps is STOP_STATE`);
                videoPlayer.stop().then((data) => {
                    console.info('stop is success, data: ' + data);
                    mySteps.shift();
                    expect(videoPlayer.state).assertEqual('stopped');
                    nextStep(done);
                }).catch((err) => {
                    console.info('stop is fail, err: ' + err);
                    failureCallback(err, done);
                })
                break;
            case SEEK_STATE:
                console.info(`mySteps is SEEK_STATE, seek time is ${mySteps[SECOND_INDEX]}`);
                videoPlayer.seek(mySteps[SECOND_INDEX]).then((data) => {
                    console.info('seek is success, data: ' + data);
                    mySteps.shift();
                    mySteps.shift();
                    nextStep(done);
                }).catch((err) => {
                    console.info('seek is fail, err: ' + err);
                    failureCallback(err, done);
                })
                break;
            case GET_TD_STATE:
                console.info(`mySteps is GET_TD_STATE`);
                mySteps.shift();
                videoPlayer.getTrackDescription((err, allList) => {
                    allDescription = null;
                    allDescriptionIndex = [];
                    if (allList.length != 0) {
                        allDescription = allList.sort(up);
                        allDescription.sort();
                        console.info('getTrackDescription success, allDescription : ' + JSON.stringify(allDescription));
                        for (let i = 0; i < allDescription.length; i++) {
                            allDescriptionIndex.push(i);
                        }
                        console.info('allDescriptionIndex is : ' + JSON.stringify(allDescriptionIndex));
                        console.info('videoExpect is : ' + JSON.stringify(videoExpect));
                        expect(JSON.stringify(allDescription) == JSON.stringify(videoExpect)).assertTrue();
                        nextStep(done);
                    } else {
                        console.info('getTrackDescription is fail, err: ' + err);
                        failureCallback(err, done);
                    }
                })
                break;
            case GET_ST_STATE:
                console.info(`mySteps is GET_ST_STATE`);
                mySteps.shift();
                videoPlayer.getSelectedTracks((err, currentList) => {
                    if (typeof (currentList) != 'undefined') {
                        currentDescription = currentList;
                        currentDescriptionIndex[0] = currentList[0];
                        console.info('getSelectedTracks is success, currentDescription is: ' + currentDescription
                        + ', currentDescriptionIndex is: ' + currentDescriptionIndex);
                        expect(currentDescription != null && currentDescriptionIndex.length == 1).assertTrue();

                        differentTracks = [];
                        for (let i = 0; i < allDescriptionIndex.length; i++) {
                            if (currentDescriptionIndex != allDescriptionIndex[i]) {
                                differentTracks.push(allDescriptionIndex[i]);
                            }
                        }
                        console.info('differentTracks is : ' + differentTracks);
                        nextStep(done);
                    } else {
                        console.info('getSelectedTracks is fail, err: ' + err);
                        failureCallback(err, done);
                    }
                })
                break;
            case ST_STATE:
                console.info(`mySteps is ST_STATE`);
                videoPlayer.selectTrack(mySteps[SECOND_INDEX], (err, data) => {
                    if (data != undefined) {
                        mySteps.shift();
                        mySteps.shift();
                        selectTrackData = data;
                        console.info('track switching succeeded, selectTrackData: ' + selectTrackData);
                        expect(data == 0).assertTrue();
                        nextStep(done);
                    } else {
                        console.info('track switching failed, err: ' + err);
                        failureCallback(err, done);
                    }
                })
                break;
            case SET_DS_STATE:
                console.info(`mySteps is SET_DS_STATE`);
                console.info(` case to setDisplaySurface; surfaceID: ` + surfaceID);
                videoPlayer.setDisplaySurface(surfaceID).then((data) => {
                    console.info('setDisplaySurface is success, data: ' + +JSON.stringify(data));
                    mySteps.shift();
                    nextStep(done);
                }).catch((err) => {
                    console.info('setDisplaySurface is fail, err: ' + err);
                    failureCallback(err, done);
                })
                break;
            case SET_DS_STATE:
                console.info(`mySteps is SET_DS_STATE`);
                console.info(` case to setDisplaySurface; surfaceID: ` + surfaceID);
                videoPlayer.setDisplaySurface(surfaceID).then((data) => {
                    console.info('setDisplaySurface is success, data: ' + +JSON.stringify(data));
                    mySteps.shift();
                    nextStep(done);
                }).catch((err) => {
                    console.info('setDisplaySurface is fail, err: ' + err);
                    failureCallback(err, done);
                })
                break;
            case PREPARE_STATE:
                console.info(`mySteps is PREPARE_STATE`);
                videoPlayer.prepare().then((data) => {
                    console.info('prepare is success, data:  ' + +JSON.stringify(data));
                    mySteps.shift();
                    nextStep(done);
                }).catch((err) => {
                    console.info('prepare is fail, err:  ' + err);
                    failureCallback(err, done);
                })
                break;
            default:
                nextStep(done);
                break;
        }
    }

    function failureCallback(error, done) {
        console.info(`failureCallback called,errMessage is ${error.message}`);
        expect().assertFail();
        done();
    }

    async function actFun(done) {
        console.info('actFun start');
        await media.createVideoPlayer().then((video) => {
            if (typeof (video) != 'undefined') {
                videoPlayer = video;
                console.info('createVideoPlayer is success, data: ' + JSON.stringify(videoPlayer));
            } else {
                console.info('create player is failed');
            }
        }).catch((err) => {
            console.info("create player is failed, err: " + JSON.stringify(err));
            expect().assertFail();
        })
        nextStep(done);
    }

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0100
       * @tc.name      : getTrackDescription->play
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0100', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0100 is start---------')
        videoSource = H263_AAC_3TRK_MKV;
        videoExpect = videoBase.H263_AAC_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE, PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0100 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0200
       * @tc.name      : getSelectedTracks->play
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0200', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0200 is start---------')
        videoSource = H263_MP3_3TRK_MKV;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_ST_STATE, PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0200 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0300
       * @tc.name      : selectTrack same index->selectTrack different index->play
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0300', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0300 is start---------')
        videoSource = H264_AAC_3TRK_MKV;
        videoExpect = videoBase.H264_AAC_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        currentDescriptionIndex[0], ST_STATE, currentDescriptionIndex[0], ST_STATE, differentTracks[0],
        ST_STATE, differentTracks[1], PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0300 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0400
       * @tc.name      : selectedTrack  boundary index->play
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0400', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0400 is start---------')
        videoSource = H264_MP3_3TRK_MKV;
        videoExpect = videoBase.H264_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        allDescriptionIndex[0], ST_STATE, allDescriptionIndex[allDescriptionIndex.length-1], PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0400 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0500
       * @tc.name      : selectedTrack aac->mp3->play
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0500', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0500 is start---------')
        videoSource = H263_AAC_1TRK_MP3_1TRK_MKV;
        videoExpect = videoBase.H263_AAC_1TRK_MP3_1TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        differentTracks[0], ST_STATE, differentTracks[1], PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0500 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0600
       * @tc.name      : selectedTrack (h.263)aac->aac->play
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0600', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0600 is start---------')
        videoSource = H263_AAC_3TRK_MKV;
        videoExpect = videoBase.H263_AAC_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        differentTracks[0], ST_STATE, currentDescriptionIndex[0], PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0600 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0700
       * @tc.name      : selectedTrack (h.263)mp3->mp3->play
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0700', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0700 is start---------')
        videoSource = H263_MP3_3TRK_MKV;
        videoExpect = videoBase.H263_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        differentTracks[0], ST_STATE, currentDescriptionIndex[0], PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0700 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0800
       * @tc.name      : selectedTrack (h.264)aac->aac->play
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0800', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0800 is start---------')
        videoSource = H264_AAC_3TRK_MKV;
        videoExpect = videoBase.H264_AAC_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        differentTracks[0], ST_STATE, currentDescriptionIndex[0], PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0800 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0900
       * @tc.name      : selectedTrack (h.264)mp3->mp3->play
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0900', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0900 is start---------')
        videoSource = H264_MP3_3TRK_MKV;
        videoExpect = videoBase.H264_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        differentTracks[0], ST_STATE, currentDescriptionIndex[0], PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0900 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1000
       * @tc.name      : selectedTrack (mpeg2)aac->aac->play
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1000', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1000 is start---------')
        videoSource = MPEG2_AAC_3TRK_MKV;
        videoExpect = videoBase.MPEG2_AAC_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        differentTracks[0], ST_STATE, currentDescriptionIndex[0], PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1000 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1100
       * @tc.name      : selectedTrack (mpeg2)mp3->mp3->play
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1100', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1100 is start---------')
        videoSource = MPEG2_MP3_3TRK_MKV;
        videoExpect = videoBase.MPEG2_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        differentTracks[0], ST_STATE, currentDescriptionIndex[0], PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1100 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1200
       * @tc.name      : selectedTrack (mpeg4)aac->aac->play
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1200', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1200 is start---------')
        videoSource = MPEG4_AAC_3TRK_MKV;
        videoExpect = videoBase.MPEG4_AAC_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        differentTracks[0], ST_STATE, currentDescriptionIndex[0], PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1200 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1300
       * @tc.name      : selectedTrack mpeg4)mp3->mp3->play
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1300', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1300 is start---------')
        videoSource = MPEG4_MP3_3TRK_MKV;
        videoExpect = videoBase.MPEG4_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        differentTracks[0], ST_STATE, currentDescriptionIndex[0], PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1300 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1400
       * @tc.name      : selectedTrack (16 tracks)->play
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1400', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1400 is start---------')
        videoSource = H263_MP3_16TRK_MKV;
        videoExpect = videoBase.H263_MP3_16TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        differentTracks[0], ST_STATE, currentDescriptionIndex[0], PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1400 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1500
       * @tc.name      : play->getTrackDescription
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1500', 0, async function (done) {
        console.info('------H264_AAC_3TRK_TS is start---------')
        videoSource = H264_AAC_3TRK_TS;
        videoExpect = videoBase.H264_AAC_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1500 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1600
       * @tc.name      : play->pause->getTrackDescription
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1600', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1600 is start---------')
        videoSource = H264_AAC_3TRK_TS;
        videoExpect = videoBase.H264_AAC_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, PAUSE_STATE, GET_TD_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1600 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1700
       * @tc.name      : play->stop->getTrackDescription
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1700', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1700 is start---------')
        videoSource = H264_AAC_3TRK_TS;
        videoExpect = videoBase.H264_AAC_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, STOP_STATE, GET_TD_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1700 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1800
       * @tc.name      : play->seek 50%->getTrackDescription
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1800', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1800 is start---------')
        videoSource = H263_AAC_3TRK_MKV;
        videoExpect = videoBase.H263_AAC_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME * 0.5,
        GET_TD_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1800 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1900
       * @tc.name      : play->seek 50%->seek 0%->getTrackDescription
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1900', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1900 is start---------')
        videoSource = H263_AAC_3TRK_MKV;
        videoExpect = videoBase.H263_AAC_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME * 0.5,
        SEEK_STATE, 0, GET_TD_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1900 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2000
       * @tc.name      : play->seek 50%->seek 30%->getTrackDescription
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2000', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2000 is start---------')
        videoSource = H263_AAC_3TRK_MKV;
        videoExpect = videoBase.H263_AAC_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME * 0.5,
        SEEK_STATE, DURATION_TIME * 0.3, GET_TD_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2000 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2100
       * @tc.name      : play->seek 50%->seek 80%->getTrackDescription
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2100', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2100 is start---------')
        videoSource = H263_AAC_3TRK_MKV;
        videoExpect = videoBase.H263_AAC_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME * 0.5,
        SEEK_STATE, DURATION_TIME * 0.8, GET_TD_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2100 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2200
       * @tc.name      : play->seek 50%->seek 100%->getTrackDescription
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2200', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2200 is start---------')
        videoSource = H263_AAC_3TRK_MKV;
        videoExpect = videoBase.H263_AAC_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME * 0.5,
        SEEK_STATE, DURATION_TIME, GET_TD_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2200 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2300
       * @tc.name      : play->getSelectedTracks
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2300', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2300 is start---------')
        videoSource = H264_MP3_3TRK_TS;
        videoExpect = videoBase.H264_MP3_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_ST_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2300 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2400
       * @tc.name      : play->pause->getSelectedTracks
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2400', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2400 is start---------')
        videoSource = H264_MP3_3TRK_TS;
        videoExpect = videoBase.H264_MP3_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, PAUSE_STATE, GET_ST_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2400 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2500
       * @tc.name      : play->stop->getSelectedTracks
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2500', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2500 is start---------')
        videoSource = H264_MP3_3TRK_TS;
        videoExpect = videoBase.H264_MP3_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, STOP_STATE, GET_ST_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2500 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2600
       * @tc.name      : play->seek 50%->getSelectedTracks
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2600', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2600 is start---------')
        videoSource = H264_MP3_3TRK_MKV;
        videoExpect = videoBase.H264_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME * 0.5,
        GET_ST_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2600 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2700
       * @tc.name      : play->seek 50%->seek 0%->getSelectedTracks
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2700', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2700 is start---------')
        videoSource = H264_MP3_3TRK_MKV;
        videoExpect = videoBase.H264_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME * 0.5, SEEK_STATE,
        0, GET_ST_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2700 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2800
       * @tc.name      : play->seek 50%->seek 30%->getSelectedTracks
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2800', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2800 is start---------')
        videoSource = H264_MP3_3TRK_MKV;
        videoExpect = videoBase.H264_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME * 0.5, SEEK_STATE,
        DURATION_TIME * 0.3, GET_ST_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2800 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2900
       * @tc.name      : play->seek 50%->seek 80%->getSelectedTracks
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2900', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2900 is start---------')
        videoSource = H264_MP3_3TRK_MKV;
        videoExpect = videoBase.H264_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME * 0.5, SEEK_STATE,
        DURATION_TIME * 0.8, GET_ST_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2900 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3000
       * @tc.name      : play->seek 50%->seek 100%->getSelectedTracks
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3000', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3000 is start---------')
        videoSource = H264_MP3_3TRK_MKV;
        videoExpect = videoBase.H264_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME * 0.5, SEEK_STATE,
        DURATION_TIME, GET_ST_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3000 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3100
       * @tc.name      : play->selectTrack same index(twice)->selectTrack different index(twice)
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3100', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3100 is start---------')
        videoSource = H264_MP3_3TRK_MKV;
        videoExpect = videoBase.H264_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        currentDescriptionIndex[0], ST_STATE, currentDescriptionIndex[0], ST_STATE, differentTracks[0], ST_STATE,
        differentTracks[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3100 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3200
       * @tc.name      : play->pause->selectTrack different index
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3200', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3200 is start---------')
        videoSource = H264_MP3_3TRK_MKV;
        videoExpect = videoBase.H264_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, PAUSE_STATE, GET_TD_STATE, GET_ST_STATE,
        ST_STATE, differentTracks[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3200 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3300
       * @tc.name      : play->seek 50%->selectTrack different index
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3300', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3300 is start---------')
        videoSource = H264_MP3_3TRK_MKV;
        videoExpect = videoBase.H264_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, SEEK_STATE,
        DURATION_TIME * 0.5, ST_STATE, differentTracks[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3300 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3400
       * @tc.name      : play->seek 50%->seek 0%->selectTrack different index
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3400', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3400 is start---------')
        videoSource = H264_MP3_3TRK_MKV;
        videoExpect = videoBase.H264_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, SEEK_STATE,
        DURATION_TIME * 0.5, SEEK_STATE, 0, ST_STATE, differentTracks[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3400 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3500
       * @tc.name      : play->seek 50%->seek 30%->selectTrack different index
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3500', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3500 is start---------')
        videoSource = H264_MP3_3TRK_MKV;
        videoExpect = videoBase.H264_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, SEEK_STATE,
        DURATION_TIME * 0.5, SEEK_STATE, DURATION_TIME * 0.3, ST_STATE, differentTracks[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3500 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3600
       * @tc.name      : play->seek 50%->seek 80%->selectTrack different index
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3600', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3600 is start---------')
        videoSource = H264_MP3_3TRK_MKV;
        videoExpect = videoBase.H264_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, SEEK_STATE,
        DURATION_TIME * 0.5, SEEK_STATE, DURATION_TIME * 0.8, ST_STATE, differentTracks[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3600 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3700
       * @tc.name      : play->seek 50%->seek 100%->selectTrack different index
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_FUNCTION_llPROMISE_3700', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3700 is start---------')
        videoSource = H264_MP3_3TRK_MKV;
        videoExpect = videoBase.H264_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, SEEK_STATE,
        DURATION_TIME * 0.5, SEEK_STATE, DURATION_TIME, ST_STATE, differentTracks[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3700 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3800
       * @tc.name      : play->selectedTrack  boundary index
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3800', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3800 is start---------')
        videoSource = H264_MP3_3TRK_MKV;
        videoExpect = videoBase.H264_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        allDescriptionIndex[0], ST_STATE, allDescriptionIndex[allDescriptionIndex.length-1],  END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3800 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3900
       * @tc.name      : play->selectedTrack aac->mp3
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3900', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3900 is start---------')
        videoSource = MPEG2_AAC_1TRK_MP3_1TRK_TS;
        videoExpect = videoBase.MPEG2_AAC_1TRK_MP3_1TRK_TS_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        differentTracks[0], ST_STATE, currentDescriptionIndex[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3900 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4000
       * @tc.name      : play->selectedTrack (h.263)aac->aac
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4000', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4000 is start---------')
        videoSource = H263_AAC_3TRK_MKV;
        videoExpect = videoBase.H263_AAC_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        differentTracks[0], ST_STATE, currentDescriptionIndex[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4000 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4100
       * @tc.name      : play->selectedTrack (h.263)mp3->mp3
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4100', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4100 is start---------')
        videoSource = H263_AAC_3TRK_MKV;
        videoExpect = videoBase.H263_AAC_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        differentTracks[0], ST_STATE, currentDescriptionIndex[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4100 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4200
       * @tc.name      : play->selectedTrack (h.264)aac->aac
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4200', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4200 is start---------')
        videoSource = H264_AAC_3TRK_TS;
        videoExpect = videoBase.H264_AAC_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        differentTracks[0], ST_STATE, currentDescriptionIndex[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4200 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4300
       * @tc.name      : play->selectedTrack (h.264)mp3->mp3
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4300', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4300 is start---------')
        videoSource = H264_MP3_3TRK_TS;
        videoExpect = videoBase.H264_MP3_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        differentTracks[0], ST_STATE, currentDescriptionIndex[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4300 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4400
       * @tc.name      : play->selectedTrack (mpeg2)aac->aac
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4400', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4400 is start---------')
        videoSource = MPEG2_AAC_3TRK_TS;
        videoExpect = videoBase.MPEG2_AAC_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        differentTracks[0], ST_STATE, currentDescriptionIndex[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4400 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4500
       * @tc.name      : play->selectedTrack mpeg2)mp3->mp3
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4500', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4500 is start---------')
        videoSource = MPEG2_MP3_3TRK_TS;
        videoExpect = videoBase.MPEG2_MP3_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        differentTracks[0], ST_STATE, currentDescriptionIndex[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4500 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4600
       * @tc.name      : play->selectedTrack (mpeg4)aac->aac
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4600', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4600 is start---------')
        videoSource = MPEG4_AAC_3TRK_TS;
        videoExpect = videoBase.MPEG4_AAC_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        differentTracks[0], ST_STATE, currentDescriptionIndex[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4600 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4700
       * @tc.name      : play->selectedTrack mpeg4)mp3->mp3
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4700', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4700 is start---------')
        videoSource = MPEG4_MP3_3TRK_TS;
        videoExpect = videoBase.MPEG4_MP3_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        differentTracks[0], ST_STATE, currentDescriptionIndex[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4700 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4800
       * @tc.name      : play->selectedTrack (16 tracks)
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4800', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4800 is start---------')
        videoSource = MPEG2_MP3_16TRK_TS;
        videoExpect = videoBase.MPEG2_MP3_16TRK_TS_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE,
        differentTracks[0], ST_STATE, currentDescriptionIndex[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_4800 is end---------')
    })

})
