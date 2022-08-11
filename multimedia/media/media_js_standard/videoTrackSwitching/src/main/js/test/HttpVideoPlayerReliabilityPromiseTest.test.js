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

describe('HttpVideoPlayerReliabilityPromiseTest', function () {

    const pagePath1 = 'pages/surfaceTest/surfaceTest';
    const pagePath2 = 'pages/surfaceTest2/surfaceTest2';
    const END_STATE = 0;
    const SRC_STATE = 1;
    const PLAY_STATE = 2;
    const PAUSE_STATE = 3;
    const STOP_STATE = 4;
    const RESET_STATE = 5;
    const SEEK_STATE = 6;
    const RELEASE_STATE = 7;
    const GET_TD_STATE = 8;
    const GET_ST_STATE = 9;
    const ST_STATE = 10;
    const SET_DS_STATE = 11;
    const PREPARE_STATE = 12;
    const NORMAL_STEP = 13;
    const ABNORMAL_STEP = 14;
    const BOUNDARY_STEP = 15;
    const VIDEO_TRACK_STEP = 16;
    const SECOND_INDEX = 1;
    const TIMEOUT = 2000;
    const VIDEO_HTTP_PATH = 'http://123.57.24.33:8000/03.videoplayer/multiAudioTrack/';
    const H263_AAC_3TRK_MKV = 'muliaudio_h263_1trk_aac_2trk.mkv';
    const MPEG2_MP3_3TRK_MKV = 'muliaudio_mpeg2_1trk_mp3_2trk.mkv';
    const H264_MP3_3TRK_TS = 'muliaudio_h264_1trk_mp3_2trk.ts';
    const MPEG4_AAC_3TRK_TS = 'muliaudio_mpeg4_1trk_aac_2trk.ts';

    let videoSource = '';
    let videoExpect = [];
    let fdHead = 'fd://';
    let fileDescriptor = undefined;
    let mySteps = [];
    let pageId = 0;
    let surfaceID = '';
    let videoPlayer = null;
    let allDescription = null;
    let allDescriptionIndex = [];
    let currentDescription = [];
    let currentDescriptionIndex = 1;
    let videoTrack = 1;
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
        await sleep(TIMEOUT);
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
                    if (mySteps[0] == RESET_STATE) {
                        console.info(`reset stop state`);
                        return;
                    }
                    mySteps.shift();
                    expect(videoPlayer.state).assertEqual('stopped');
                    nextStep(done);
                }).catch((err) => {
                    console.info('stop is fail, err: ' + err);
                    failureCallback(err, done);
                })
                break;
            case RESET_STATE:
                console.info(`mySteps is RESET_STATE`);
                videoPlayer.reset().then((data) => {
                    console.info('reset is success, data: ' + data);
                    mySteps.shift();
                    expect(videoPlayer.state).assertEqual('idle');
                    nextStep(done);
                }).catch((err) => {
                    console.info('reset is fail, err: ' + err);
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
            case RELEASE_STATE:
                console.info(`mySteps is RELEASE_STATE`);
                videoPlayer.release().then((data) => {
                    console.info('release is success, data: ' + data);
                    mySteps.shift();
                    nextStep(done);
                }).catch((err) => {
                    console.info('release is fail, err: ' + err);
                    failureCallback(err, done);
                })
                break;
            case GET_TD_STATE:
                console.info(`mySteps is GET_TD_STATE`);
                if (mySteps[1] == NORMAL_STEP) {
                    videoPlayer.getTrackDescription().then((allList) => {
                        allDescription = null;
                        allDescriptionIndex = [];
                        if (allList.length != 0) {
                            allDescription = allList.sort(up);
                            allDescription.sort();
                            console.info('getTrackDescription success, allDescription : ' +
                            JSON.stringify(allDescription));
                            for (let i = 0; i < allDescription.length; i++) {
                                if (allDescription[i].track_type == 1) {
                                    videoTrack = i;
                                }
                            }
                            console.info('videoTrack is : ' + videoTrack);

                            for (let i = 0; i < allDescription.length; i++) {
                                allDescriptionIndex.push(i);
                            }
                            console.info('allDescriptionIndex is : ' + JSON.stringify(allDescriptionIndex));
                            console.info('videoExpect is : ' + JSON.stringify(videoExpect));
                            expect(JSON.stringify(allDescription) == JSON.stringify(videoExpect)).assertTrue();
                            mySteps.shift();
                            mySteps.shift();
                            nextStep(done);
                        } else {
                            console.info('getTrackDescription is failed');
                            failureCallback(err, done);
                        }
                    }).catch((err) => {
                        console.info('getTrackDescription is fail, err: ' + err);
                        failureCallback(err, done);
                    })
                } else {
                    videoPlayer.getTrackDescription().then((allList) => {
                        allDescription = null;
                        allDescriptionIndex = [];
                        if (allList.length != 0) {
                            allDescription = allList.sort(up);
                            allDescription.sort();
                            console.info('getTrackDescription success, allDescription : ' +
                            JSON.stringify(allDescription));
                            for (let i = 0; i < allDescription.length; i++) {
                                allDescriptionIndex.push(i);
                            }
                            console.info('allDescriptionIndex is : ' + JSON.stringify(allDescriptionIndex));
                            expect().assertFail();
                            done();
                        } else {
                            console.info('getTrackDescription is failed');
                            expect().assertFail();
                            done();
                        }
                    }).catch((err) => {
                        console.info('getTrackDescription is fail, err: ' + err);
                        expect(err.code == 6).assertTrue();
                        mySteps.shift();
                        mySteps.shift();
                        nextStep(done);
                    })
                }
                break;
            case GET_ST_STATE:
                console.info(`mySteps is GET_ST_STATE`);
                if (mySteps[1] == NORMAL_STEP) {
                    videoPlayer.getSelectedTracks().then((currentList) => {
                        if (typeof (currentList) != 'undefined') {
                            currentDescription = currentList;
                            currentDescriptionIndex = currentList[0];
                            console.info('getSelectedTracks is success, currentDescription is: ' + currentDescription
                            + ', currentDescriptionIndex is: ' + currentDescriptionIndex);
                            expect(currentDescription != null && currentDescriptionIndex == 0).assertTrue();

                            differentTracks = [];
                            for (let i = 0; i < allDescriptionIndex.length; i++) {
                                if (currentDescriptionIndex != allDescriptionIndex[i]) {
                                    differentTracks.push(allDescriptionIndex[i]);
                                }
                            }
                            console.info('differentTracks is : ' + differentTracks);
                            mySteps.shift();
                            mySteps.shift();
                            nextStep(done);
                        } else {
                            console.info('getSelectedTracks is failed');
                            failureCallback(err, done);
                        }
                    }).catch((err) => {
                        console.info('getSelectedTracks is fail, err: ' + err);
                        failureCallback(err, done);
                    })
                } else {
                    videoPlayer.getSelectedTracks().then((currentList) => {
                        if (typeof (currentList) != 'undefined') {
                            currentDescription = currentList;
                            currentDescriptionIndex = currentList[0];
                            console.info('getSelectedTracks is success, currentDescription is: ' + currentDescription
                            + ', currentDescriptionIndex is: ' + currentDescriptionIndex);

                            differentTracks = [];
                            for (let i = 0; i < allDescriptionIndex.length; i++) {
                                if (currentDescriptionIndex != allDescriptionIndex[i]) {
                                    differentTracks.push(allDescriptionIndex[i]);
                                }
                            }
                            console.info('differentTracks is : ' + differentTracks);
                            expect().assertFail();
                            done();
                        } else {
                            console.info('getSelectedTracks is failed');
                            expect().assertFail();
                            done();
                        }
                    }).catch((err) => {
                        console.info('getSelectedTracks is fail, err: ' + err);
                        expect(err.code == 6).assertTrue();
                        mySteps.shift();
                        mySteps.shift();
                        nextStep(done);
                    })
                }
                break;
            case ST_STATE:
                console.info(`mySteps is ST_STATE` + mySteps);
                if (mySteps[2] == NORMAL_STEP) {
                    console.info(`mySteps is NORMAL_STEP`);
                    videoPlayer.selectTrack(mySteps[SECOND_INDEX]).then((data) => {
                        selectTrackData = data;
                        console.info('NORMAL_STEP - track switching succeeded, selectTrackData: ' + selectTrackData);
                        expect(data == 0).assertTrue();
                        mySteps.shift();
                        mySteps.shift();
                        mySteps.shift();
                        nextStep(done);
                    }).catch((err) => {
                        console.info('NORMAL_STEP - track switching failed, err: ' + err);
                        failureCallback(err, done);
                    })
                } else if (mySteps[2] == ABNORMAL_STEP) {
                    console.info(`mySteps is ABNORMAL_STEP`);
                    videoPlayer.selectTrack(mySteps[SECOND_INDEX]).then((data) => {
                        selectTrackData = data;
                        console.info('ABNORMAL_STEP - track switching succeeded, selectTrackData: ' + selectTrackData);
                        expect().assertFail();
                        done();
                    }).catch((err) => {
                        console.info('ABNORMAL_STEP - track switching failed, err: ' + err);
                        expect(err.code == 6).assertTrue();
                        mySteps.shift();
                        mySteps.shift();
                        mySteps.shift();
                        nextStep(done);
                    })
                } else if (mySteps[2] == BOUNDARY_STEP) {
                    console.info(`mySteps is BOUNDARY_STEP`);
                    videoPlayer.selectTrack(mySteps[SECOND_INDEX]).then((data) => {
                        selectTrackData = data;
                        console.info('BOUNDARY_STEP - track switching succeeded, selectTrackData: ' + selectTrackData);
                        expect().assertFail();
                        done();
                    }).catch((err) => {
                        console.info('BOUNDARY_STEP - track switching failed, err: ' + err);
                        expect(err.code == 3).assertTrue();
                        mySteps.shift();
                        mySteps.shift();
                        mySteps.shift();
                        nextStep(done);
                    })
                } else if (mySteps[2] == VIDEO_TRACK_STEP) {
                    console.info(`mySteps is VIDEO_TRACK_STEP`);
                    console.info('videoTrack is : ' + videoTrack)
                    videoPlayer.selectTrack(videoTrack).then((data) => {
                        selectTrackData = data;
                        console.info('VIDEO_TRACK_STEP - track switching succeeded, selectTrackData: '
                        + selectTrackData);
                        expect(data == 0).assertTrue();
                        mySteps.shift();
                        mySteps.shift();
                        mySteps.shift();
                        nextStep(done);
                    }).catch((err) => {
                        console.info('NORMAL_STEP - track switching failed, err: ' + err);
                        failureCallback(err, done);
                    })
                }
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
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0100
       * @tc.name      : selectTrack(video track)->play
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0100', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0100 is start------')
        videoSource = MPEG2_MP3_3TRK_MKV;
        videoExpect = videoBase.MPEG2_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE, NORMAL_STEP, GET_ST_STATE,
        NORMAL_STEP, ST_STATE, videoTrack, VIDEO_TRACK_STEP, PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0100 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0200
       * @tc.name      : selectedTrack (index[-1])->selectedTrack (index.length)->play
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0200', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0200 is start------')
        videoSource = H263_AAC_3TRK_MKV;
        videoExpect = videoBase.H263_AAC_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE, NORMAL_STEP, GET_ST_STATE, NORMAL_STEP,
        ST_STATE, allDescriptionIndex[-1], BOUNDARY_STEP, ST_STATE, allDescriptionIndex[allDescriptionIndex.length],
        BOUNDARY_STEP, PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0200 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0300
       * @tc.name      : play->reset->getTrackDescription
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0300', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0300 is start------')
        videoSource = H263_AAC_3TRK_MKV;
        videoExpect = videoBase.H263_AAC_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, RESET_STATE, GET_TD_STATE,
        ABNORMAL_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0300 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0400
       * @tc.name      : play->release->getTrackDescription
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0400', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0400 is start------')
        videoSource = H263_AAC_3TRK_MKV;
        videoExpect = videoBase.H263_AAC_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, RELEASE_STATE, GET_TD_STATE,
        ABNORMAL_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0400 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0500
       * @tc.name      : play->pause->stop->reset->release->getTrackDescription
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0500', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0500 is start------')
        videoSource = H263_AAC_3TRK_MKV;
        videoExpect = videoBase.H263_AAC_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, NORMAL_STEP, PAUSE_STATE,
        GET_TD_STATE, NORMAL_STEP, STOP_STATE, GET_TD_STATE, NORMAL_STEP, RESET_STATE, GET_TD_STATE, ABNORMAL_STEP,
        RELEASE_STATE, GET_TD_STATE, ABNORMAL_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0500 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0600
       * @tc.name      : play->reset->getSelectedTracks
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0600', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0600 is start------')
        videoSource = MPEG4_AAC_3TRK_TS;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, RESET_STATE, GET_ST_STATE,
        ABNORMAL_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0600 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0700
       * @tc.name      : play->release->getSelectedTracks
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0700', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0700 is start------')
        videoSource = MPEG4_AAC_3TRK_TS;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, RELEASE_STATE, GET_ST_STATE,
        ABNORMAL_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0700 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0800
       * @tc.name      : play->pause->stop->reset->release->getSelectedTracks
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0800', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0800 is start------')
        videoSource = MPEG4_AAC_3TRK_TS;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_ST_STATE, NORMAL_STEP, PAUSE_STATE,
        GET_ST_STATE, NORMAL_STEP, STOP_STATE, GET_ST_STATE, NORMAL_STEP, RESET_STATE, GET_ST_STATE, ABNORMAL_STEP,
        RELEASE_STATE, GET_ST_STATE, ABNORMAL_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0800 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0900
       * @tc.name      : play->stop->selectTrack different index
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0900', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0900 is start------')
        videoSource = MPEG4_AAC_3TRK_TS;
        videoExpect = videoBase.MPEG4_AAC_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE, NORMAL_STEP, GET_ST_STATE, NORMAL_STEP,
        PLAY_STATE, STOP_STATE, ST_STATE, differentTracks[0], ABNORMAL_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0900 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1000
       * @tc.name      : play->reset->selectTrack different index
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1000', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1000 is start------')
        videoSource = MPEG4_AAC_3TRK_TS;
        videoExpect = videoBase.MPEG4_AAC_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE, NORMAL_STEP, GET_ST_STATE, NORMAL_STEP,
        PLAY_STATE, RESET_STATE, ST_STATE, differentTracks[0], ABNORMAL_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1000 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1100
       * @tc.name      : play->release->selectTrack different index
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1100', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1100 is start------')
        videoSource = MPEG4_AAC_3TRK_TS;
        videoExpect = videoBase.MPEG4_AAC_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE, NORMAL_STEP, GET_ST_STATE, NORMAL_STEP,
        PLAY_STATE, RELEASE_STATE, ST_STATE, differentTracks[0], ABNORMAL_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1100 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1200
       * @tc.name      : play->pause->stop->reset->release->selectTrack different index
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1200', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1200 is start------')
        videoSource = MPEG2_MP3_3TRK_MKV;
        videoExpect = videoBase.MPEG2_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE, NORMAL_STEP, GET_ST_STATE, NORMAL_STEP,
        PLAY_STATE, ST_STATE, differentTracks[0], NORMAL_STEP, PAUSE_STATE, ST_STATE, differentTracks[1], NORMAL_STEP,
        STOP_STATE, ST_STATE, differentTracks[0], ABNORMAL_STEP, RESET_STATE, ST_STATE, differentTracks[1],
        ABNORMAL_STEP, RELEASE_STATE, ST_STATE, differentTracks[0], ABNORMAL_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1200 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1300
       * @tc.name      : play->selectedTrack (index[-1])->selectedTrack (index.length)
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1300', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1300 is start------')
        videoSource = MPEG2_MP3_3TRK_MKV;
        videoExpect = videoBase.MPEG2_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, NORMAL_STEP, GET_ST_STATE,
        NORMAL_STEP, ST_STATE, allDescriptionIndex[-1], BOUNDARY_STEP, ST_STATE,
        allDescriptionIndex[allDescriptionIndex.length], BOUNDARY_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1300 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1400
       * @tc.name      : play->selectTrack(video track)
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1400', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1400 is start------')
        videoSource = MPEG2_MP3_3TRK_MKV;
        videoExpect = videoBase.MPEG2_MP3_3TRK_MKV_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE, GET_TD_STATE, NORMAL_STEP, GET_ST_STATE,
        NORMAL_STEP, ST_STATE, currentDescriptionIndex, NORMAL_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1400 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1500
       * @tc.name      : getTrackDescription->setSource
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1500', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1500 is start------')
        videoSource = H264_MP3_3TRK_TS;
        videoExpect = videoBase.H264_MP3_3TRK_TS_SOURCE;
        mySteps = [GET_TD_STATE, ABNORMAL_STEP, SRC_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1500 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1600
       * @tc.name      : getSelectedTracks->setSource
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1600', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1600 is start------')
        videoSource = H264_MP3_3TRK_TS;
        mySteps = [GET_ST_STATE, ABNORMAL_STEP, SRC_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1600 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1700
       * @tc.name      : selectTrack->setSource
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1700', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1700 is start------')
        videoSource = H264_MP3_3TRK_TS;
        mySteps = [ST_STATE, 0, ABNORMAL_STEP, SRC_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1700 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1800
       * @tc.name      : getTrackDescription->setDisplaySurface
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1800', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1800 is start------')
        videoSource = H264_MP3_3TRK_TS;
        videoExpect = videoBase.H264_MP3_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, GET_TD_STATE, ABNORMAL_STEP, SET_DS_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1800 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1900
       * @tc.name      : getSelectedTracks->setDisplaySurface
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1900', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1900 is start------')
        videoSource = H264_MP3_3TRK_TS;
        videoExpect = videoBase.H264_MP3_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, GET_ST_STATE, ABNORMAL_STEP, SET_DS_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1900 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_2000
       * @tc.name      : selectTrack->setDisplaySurface
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_2000', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_2000 is start------')
        videoSource = H264_MP3_3TRK_TS;
        videoExpect = videoBase.H264_MP3_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, ST_STATE, 0, ABNORMAL_STEP, SET_DS_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_2000 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_2100
       * @tc.name      : getTrackDescription->prepare
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_2100', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_2100 is start------')
        videoSource = H264_MP3_3TRK_TS;
        videoExpect = videoBase.H264_MP3_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, GET_TD_STATE, ABNORMAL_STEP, PREPARE_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_2100 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_2200
       * @tc.name      : getSelectedTracks->prepare
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_2200', 0, async function (done) {
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_2200 is start------')
        videoSource = H264_MP3_3TRK_TS;
        videoExpect = videoBase.H264_MP3_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, GET_ST_STATE, ABNORMAL_STEP, PREPARE_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_2200 is end------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_2300
       * @tc.name      : selectTrack->prepare
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
     */
    it('SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_2300', 0, async function (done) {
        console.info('--------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_2300 is start------')
        videoSource = H264_MP3_3TRK_TS;
        videoExpect = videoBase.H264_MP3_3TRK_TS_SOURCE;
        mySteps = [SRC_STATE, SET_DS_STATE, ST_STATE, 0, ABNORMAL_STEP, PREPARE_STATE, END_STATE];
        await actFun(done);
        console.info('--------SUB_MEDIA_HTTP_VIDEO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_2300 is end------')
    })

})
