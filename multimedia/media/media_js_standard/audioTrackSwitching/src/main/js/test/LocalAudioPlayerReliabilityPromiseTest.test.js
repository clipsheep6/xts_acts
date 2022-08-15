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
import * as audioBase from './AudioTrackSwitchingBase.js';
import * as mediaTestBase from '../../../../../MediaTestBase.js';
import media from '@ohos.multimedia.media';

describe('LocalAudioPlayerReliabilityPromiseTest', function () {

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
    const NORMAL_STEP = 11;
    const ABNORMAL_STEP = 12;
    const BOUNDARY_STEP = 13;
    const SECOND_INDEX = 1;
    const AAC_3TRK_MKV = 'muliaudio_aac_3trk.mkv';
    const MP3_3TRK_MKV = 'muliaudio_mp3_3trk.mkv';
    const AAC_3TRK_TS = 'muliaudio_aac_3trk.ts';
    const MP3_3TRK_TS = 'muliaudio_mp3_3trk.ts';

    let audioPlayer = media.createAudioPlayer();
    let allDescription = null;
    let allDescriptionIndex = [];
    let currentDescription = [];
    let currentDescriptionIndex = [];
    let differentTracks = [];
    let selectTrackData = 0;
    let audioSource = '';
    let audioExpect = [];
    let fdHead = 'fd://';
    let fileDescriptor = undefined;
    let mySteps = [];

    afterEach(async function () {
        console.info('afterEach start');
        audioExpect = [];
        await mediaTestBase.closeFileDescriptor(audioSource);
        audioPlayer.release();
        console.info('afterEach end');
    })

    async function getInputFileFd(audioSource) {
        await mediaTestBase.getFileDescriptor(audioSource).then((res) => {
            fileDescriptor = res;
            console.info('fileDescriptor is : ' + JSON.stringify(fileDescriptor));
        });
    }

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
                audioPlayer.on('dataLoad', () => {
                    console.info(`dataLoad state`);
                    mySteps.shift();
                    nextStep(done);
                });
                audioPlayer.src = fdHead + fileDescriptor.fd;
                break;
            case PLAY_STATE:
                console.info(`mySteps is PLAY_STATE`);
                audioPlayer.on('play', () => {
                    console.info(`play state`);
                    mySteps.shift();
                    expect(audioPlayer.state).assertEqual('playing');
                    nextStep(done);
                });
                audioPlayer.play();
                break;
            case PAUSE_STATE:
                console.info(`mySteps is PAUSE_STATE`);
                audioPlayer.on('pause', () => {
                    console.info(`pause state`);
                    mySteps.shift();
                    expect(audioPlayer.state).assertEqual('paused');
                    nextStep(done);
                });
                audioPlayer.pause();
                break;
            case STOP_STATE:
                console.info(`mySteps is STOP_STATE`);
                audioPlayer.on('stop', () => {
                    if (mySteps[0] == RESET_STATE) {
                        console.info(`reset stop state`);
                        return;
                    }
                    console.info(`stop state`);
                    mySteps.shift();
                    expect(audioPlayer.state).assertEqual('stopped');
                    nextStep(done);
                });
                audioPlayer.stop();
                break;
            case RESET_STATE:
                console.info(`mySteps is RESET_STATE`);
                audioPlayer.on('reset', () => {
                    console.info(`reset state`);
                    mySteps.shift();
                    expect(audioPlayer.state).assertEqual('idle');
                    nextStep(done);
                });
                audioPlayer.reset();
                break;
            case SEEK_STATE:
                console.info(`mySteps is SEEK_STATE, seek time is ${mySteps[SECOND_INDEX]}`);
                audioPlayer.on('timeUpdate', (seekDoneTime) => {
                    console.info('timeUpdate state');
                    if (typeof (seekDoneTime) == 'undefined') {
                        console.info(`case seek filed,errcode is ${seekDoneTime}`);
                        return;
                    }
                    if (mySteps[0] != SEEK_STATE) {
                        return;
                    }
                    console.info(`case seek called`);
                    mySteps.shift();
                    mySteps.shift();
                    console.info(`case seekDoneTime is ${seekDoneTime}`);
                    if ((seekDoneTime < audioPlayer.duration) || (audioPlayer.state == 'paused')) {
                        nextStep(done);
                    }
                });
                audioPlayer.seek(mySteps[SECOND_INDEX]);
                break;
            case RELEASE_STATE:
                console.info(`mySteps is RELEASE_STATE`);
                mySteps.shift();
                audioPlayer.release();
                nextStep(done);
                break;
            case GET_TD_STATE:
                console.info(`mySteps is GET_TD_STATE`);
                if (mySteps[1] == NORMAL_STEP) {
                    audioPlayer.getTrackDescription().then((allList) => {
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
                            console.info('audioExpect is : ' + JSON.stringify(audioExpect));
                            expect(JSON.stringify(allDescription) == JSON.stringify(audioExpect)).assertTrue();
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
                    audioPlayer.getTrackDescription().then((allList) => {
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
                    audioPlayer.getSelectedTracks().then((currentList) => {
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
                    audioPlayer.getSelectedTracks().then((currentList) => {
                        if (typeof (currentList) != 'undefined') {
                            currentDescription = currentList;
                            currentDescriptionIndex[0] = currentList[0];
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
                    audioPlayer.selectTrack(mySteps[SECOND_INDEX]).then((data) => {
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
                    audioPlayer.selectTrack(mySteps[SECOND_INDEX]).then((data) => {
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
                } else {
                    console.info(`mySteps is BOUNDARY_STEP` + mySteps);
                    audioPlayer.selectTrack(mySteps[SECOND_INDEX]).then((data) => {
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

                }
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
        audioPlayer = media.createAudioPlayer();
        if (typeof (audioPlayer) == 'undefined') {
            console.info(' case create player is failed');
            expect().assertFail();
            done();
        } else {
            nextStep(done);
            console.info('nextStep end');
        }
    }

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0100
       * @tc.name      : selectedTrack (index[-1])->selectedTrack (index.length)->play
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0100', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0100 is start---------')
        audioSource = AAC_3TRK_MKV;
        audioExpect = audioBase.AAC_3TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, GET_TD_STATE, NORMAL_STEP, GET_ST_STATE, NORMAL_STEP, ST_STATE, allDescriptionIndex[-1],
        BOUNDARY_STEP, ST_STATE, allDescriptionIndex[allDescriptionIndex.length], BOUNDARY_STEP, PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0100 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0200
       * @tc.name      : play->reset->getTrackDescription
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0200', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0200 is start---------')
        audioSource = AAC_3TRK_MKV;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, RESET_STATE, GET_TD_STATE, ABNORMAL_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0200 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0300
       * @tc.name      : play->release->getTrackDescription
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0300', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0300 is start---------')
        audioSource = AAC_3TRK_MKV;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, RELEASE_STATE, GET_TD_STATE, ABNORMAL_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0300 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0400
       * @tc.name      : play->pause->stop->reset->release->getTrackDescription
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0400', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0400 is start---------')
        audioSource = AAC_3TRK_MKV;
        audioExpect = audioBase.AAC_3TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, GET_TD_STATE, NORMAL_STEP, PAUSE_STATE, GET_TD_STATE, NORMAL_STEP, STOP_STATE,
        GET_TD_STATE, NORMAL_STEP, RESET_STATE, GET_TD_STATE, ABNORMAL_STEP, RELEASE_STATE, GET_TD_STATE,ABNORMAL_STEP,
        END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0400 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0500
       * @tc.name      : play->reset->getSelectedTracks
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0500', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0500 is start---------')
        audioSource = AAC_3TRK_TS;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, RESET_STATE, GET_ST_STATE, ABNORMAL_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0500 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0600
       * @tc.name      : play->release->getSelectedTracks
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0600', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0600 is start---------')
        audioSource = AAC_3TRK_TS;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, RELEASE_STATE, GET_ST_STATE, ABNORMAL_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0600 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0700
       * @tc.name      : play->pause->stop->reset->release->getSelectedTracks
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0700', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0700 is start---------')
        audioSource = AAC_3TRK_TS;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, GET_ST_STATE, NORMAL_STEP, PAUSE_STATE, GET_ST_STATE, NORMAL_STEP, STOP_STATE,
        GET_ST_STATE, NORMAL_STEP, RESET_STATE, GET_ST_STATE, ABNORMAL_STEP, RELEASE_STATE, GET_ST_STATE,ABNORMAL_STEP,
        END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0700 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0800
       * @tc.name      : play->stop->selectTrack different index
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0800', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0800 is start---------')
        audioSource = MP3_3TRK_MKV;
        audioExpect = audioBase.MP3_3TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, GET_TD_STATE, NORMAL_STEP, GET_ST_STATE, NORMAL_STEP, PLAY_STATE, STOP_STATE,
        ST_STATE, differentTracks[0], ABNORMAL_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0800 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0900
       * @tc.name      : play->reset->selectTrack different index
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0900', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0900 is start---------')
        audioSource = MP3_3TRK_MKV;
        audioExpect = audioBase.MP3_3TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, GET_TD_STATE, NORMAL_STEP, GET_ST_STATE, NORMAL_STEP, PLAY_STATE, RESET_STATE, ST_STATE,
        differentTracks[0], ABNORMAL_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_0900 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1000
       * @tc.name      : play->release->selectTrack different index
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1000', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1000 is start---------')
        audioSource = MP3_3TRK_MKV;
        audioExpect = audioBase.MP3_3TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, GET_TD_STATE, NORMAL_STEP, GET_ST_STATE, NORMAL_STEP, PLAY_STATE, RELEASE_STATE,
        ST_STATE, differentTracks[0], ABNORMAL_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1000 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1100
       * @tc.name      : play->pause->stop->reset->release->selectTrack different index
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1100', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1100 is start---------')
        audioSource = MP3_3TRK_MKV;
        audioExpect = audioBase.MP3_3TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, GET_TD_STATE, NORMAL_STEP, GET_ST_STATE, NORMAL_STEP, PLAY_STATE, ST_STATE,
        differentTracks[0], NORMAL_STEP, PAUSE_STATE, ST_STATE, differentTracks[1], NORMAL_STEP, STOP_STATE,
        ST_STATE, differentTracks[0], ABNORMAL_STEP, RESET_STATE, ST_STATE, differentTracks[1], ABNORMAL_STEP,
        RELEASE_STATE, ST_STATE, differentTracks[0], ABNORMAL_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1100 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1200
       * @tc.name      : play->selectedTrack (index[-1])->selectedTrack (index.length)
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1200', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1200 is start---------')
        audioSource = MP3_3TRK_MKV;
        audioExpect = audioBase.MP3_3TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, GET_TD_STATE, NORMAL_STEP, GET_ST_STATE, NORMAL_STEP, PLAY_STATE, ST_STATE,
        allDescriptionIndex[-1], BOUNDARY_STEP, ST_STATE, allDescriptionIndex[allDescriptionIndex.length],
        BOUNDARY_STEP, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1200 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1300
       * @tc.name      : getTrackDescription->setSource
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1300', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1300 is start---------')
        audioSource = MP3_3TRK_TS;
        await getInputFileFd(audioSource);
        mySteps = [GET_TD_STATE, ABNORMAL_STEP, SRC_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1300 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1400
       * @tc.name      : getSelectedTracks->setSource
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1400', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1400 is start---------')
        audioSource = MP3_3TRK_TS;
        await getInputFileFd(audioSource);
        mySteps = [GET_ST_STATE, ABNORMAL_STEP, SRC_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1400 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1500
       * @tc.name      : selectTrack->setSource
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1500', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1500 is start---------')
        audioSource = MP3_3TRK_TS;
        await getInputFileFd(audioSource);
        mySteps = [ST_STATE, 0, ABNORMAL_STEP, SRC_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_RELIABILITY_PROMISE_1500 is end---------')
    })
    
})
