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

describe('LocalAudioPlayerFuncCallbackTest', function () {

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
    const SECOND_INDEX = 1;
    const AAC_3TRK_MKV = 'muliaudio_aac_3trk.mkv';
    const MP3_3TRK_MKV = 'muliaudio_mp3_3trk.mkv';
    const AAC_2TRK_MP3_1TRK_MKV = 'muliaudio_aac_2trk_mp3_1trk.mkv';
    const AAC_16TRK_MKV = 'muliaudio_aac_16trk.mkv';
    const AAC_3TRK_TS = 'muliaudio_aac_3trk.ts';
    const MP3_3TRK_TS = 'muliaudio_mp3_3trk.ts';
    const AAC_2TRK_MP3_1TRK_TS = 'muliaudio_aac_2trk_mp3_1trk.ts';

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
                audioPlayer.play();
                audioPlayer.on('play', () => {
                    console.info(`play state`);
                    mySteps.shift();
                    expect(audioPlayer.state).assertEqual('playing');
                    nextStep(done);
                });
                break;
            case PAUSE_STATE:
                console.info(`mySteps is PAUSE_STATE`);
                audioPlayer.pause();
                audioPlayer.on('pause', () => {
                    console.info(`pause state`);
                    mySteps.shift();
                    expect(audioPlayer.state).assertEqual('paused');
                    nextStep(done);
                });
                break;
            case STOP_STATE:
                console.info(`mySteps is STOP_STATE`);
                audioPlayer.stop();
                audioPlayer.on('stop', () => {
                    console.info(`stop state`);
                    mySteps.shift();
                    expect(audioPlayer.state).assertEqual('stopped');
                    nextStep(done);
                });
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
            case GET_TD_STATE:
                console.info(`mySteps is GET_TD_STATE`);
                mySteps.shift();
                audioPlayer.getTrackDescription((err, allList) => {
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
                        console.info('audioExpect is : ' + JSON.stringify(audioExpect));
                        expect(JSON.stringify(allDescription) == JSON.stringify(audioExpect)).assertTrue();
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
                audioPlayer.getSelectedTracks((err, currentList) => {
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
                audioPlayer.selectTrack(mySteps[SECOND_INDEX], (err, data) => {
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
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0100
       * @tc.name      : getTrackDescription->play
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0100', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0100 is start---------')
        audioSource = AAC_3TRK_TS;
        audioExpect = audioBase.AAC_3TRK_TS_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, GET_TD_STATE, PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0100 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0200
       * @tc.name      : getSelectedTracks->play
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0200', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0200 is start---------')
        audioSource = MP3_3TRK_TS;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, GET_ST_STATE, PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0200 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0300
       * @tc.name      : selectTrack same index->selectTrack different index->play
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0300', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0300 is start---------')
        audioSource = AAC_3TRK_MKV;
        audioExpect = audioBase.AAC_3TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE, currentDescriptionIndex[0], ST_STATE,
        currentDescriptionIndex[0], ST_STATE, differentTracks[0], ST_STATE, differentTracks[1], PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0300 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0400
       * @tc.name      : selectedTrack boundary index->play
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0400', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0400 is start---------')
        audioSource = AAC_3TRK_MKV;
        audioExpect = audioBase.AAC_3TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE, allDescriptionIndex[0], ST_STATE,
        allDescriptionIndex[allDescriptionIndex.length-1], PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0400 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0500
       * @tc.name      : selectedTrack aac->mp3->play
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0500', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0500 is start---------')
        audioSource = AAC_2TRK_MP3_1TRK_TS;
        audioExpect = audioBase.AAC_2TRK_MP3_1TRK_TS_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE, currentDescriptionIndex[0], ST_STATE,
        differentTracks[0], PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0500 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0600
       * @tc.name      : selectedTrack aac->aac->play
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0600', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0600 is start---------')
        audioSource = AAC_3TRK_MKV;
        audioExpect = audioBase.AAC_3TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE, currentDescriptionIndex[0], ST_STATE,
        differentTracks[0], PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0600 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0700
       * @tc.name      : selectedTrack mp3->mp3->play
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0700', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0700 is start---------')
        audioSource = MP3_3TRK_MKV;
        audioExpect = audioBase.MP3_3TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE, currentDescriptionIndex[0], ST_STATE,
        differentTracks[0], PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0700 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0800
       * @tc.name      : selectedTrack(16 tracks)->play
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0800', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0800 is start---------')
        audioSource = AAC_16TRK_MKV;
        audioExpect = audioBase.AAC_16TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE, currentDescriptionIndex[0], ST_STATE,
        differentTracks[0], PLAY_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0800 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0900
       * @tc.name      : play->getTrackDescription
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0900', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0900 is start---------')
        audioSource = AAC_3TRK_MKV;
        audioExpect = audioBase.AAC_3TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, GET_TD_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_0900 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1000
       * @tc.name      : play->pause->getTrackDescription
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1000', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1000 is start---------')
        audioSource = AAC_3TRK_MKV;
        audioExpect = audioBase.AAC_3TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, PAUSE_STATE, GET_TD_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1000 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1100
       * @tc.name      : play->stop->getTrackDescription
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1100', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1100 is start---------')
        audioSource = AAC_3TRK_MKV;
        audioExpect = audioBase.AAC_3TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, STOP_STATE, GET_TD_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1100 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1200
       * @tc.name      : play->seek 50%->getTrackDescription
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1200', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1200 is start---------')
        audioSource = AAC_3TRK_MKV;
        audioExpect = audioBase.AAC_3TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME * 0.5, GET_TD_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1200 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1300
       * @tc.name      : play->seek 50%->seek 0%->getTrackDescription
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1300', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1300 is start---------')
        audioSource = AAC_3TRK_MKV;
        audioExpect = audioBase.AAC_3TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME * 0.5, SEEK_STATE, 0, GET_TD_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1300 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1400
       * @tc.name      : play->seek 50%->seek 30%->getTrackDescription
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1400', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1400 is start---------')
        audioSource = AAC_3TRK_MKV;
        audioExpect = audioBase.AAC_3TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME * 0.5, SEEK_STATE,
        DURATION_TIME * 0.3, GET_TD_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1400 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1500
       * @tc.name      : play->seek 50%->seek 80%->getTrackDescription
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1500', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1500 is start---------')
        audioSource = AAC_3TRK_MKV;
        audioExpect = audioBase.AAC_3TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME * 0.5, SEEK_STATE,
        DURATION_TIME * 0.8, GET_TD_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1500 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1600
       * @tc.name      : play->seek 50%->seek 100%->getTrackDescription
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1600', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1600 is start---------')
        audioSource = AAC_3TRK_MKV;
        audioExpect = audioBase.AAC_3TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME * 0.5, SEEK_STATE,
        DURATION_TIME, GET_TD_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1600 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1700
       * @tc.name      : play->getSelectedTracks
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1700', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1700 is start---------')
        audioSource = MP3_3TRK_TS;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, GET_ST_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1700 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1800
       * @tc.name      : play->pause->getSelectedTracks
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1800', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1800 is start---------')
        audioSource = MP3_3TRK_TS;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, PAUSE_STATE, GET_ST_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1800 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1900
       * @tc.name      : play->stop->getSelectedTracks
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1900', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1900 is start---------')
        audioSource = MP3_3TRK_TS;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, STOP_STATE, GET_ST_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_1900 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2000
       * @tc.name      : play->seek 50%->getSelectedTracks
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2000', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2000 is start---------')
        audioSource = AAC_3TRK_MKV;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME * 0.5, GET_ST_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2000 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2100
       * @tc.name      : play->seek 50%->seek 0%->getSelectedTracks
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2100', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2100 is start---------')
        audioSource = AAC_3TRK_MKV;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME * 0.5, SEEK_STATE, 0, GET_ST_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2100 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2200
       * @tc.name      : play->seek 50%->seek 30%->getSelectedTracks
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2200', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2200 is start---------')
        audioSource = AAC_3TRK_MKV;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME * 0.5, SEEK_STATE, DURATION_TIME * 0.3,
        GET_ST_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2200 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2300
       * @tc.name      : play->seek 50%->seek 80%->getSelectedTracks
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2300', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2300 is start---------')
        audioSource = AAC_3TRK_MKV;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME * 0.5, SEEK_STATE, DURATION_TIME * 0.8,
        GET_ST_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2300 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2400
       * @tc.name      : play->seek 50%->seek 100%->getSelectedTracks
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2400', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2400 is start---------')
        audioSource = AAC_3TRK_MKV;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME * 0.5, SEEK_STATE, DURATION_TIME,
        GET_ST_STATE, END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2400 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2500
       * @tc.name      : play->selectTrack same index->selectTrack different index
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2500', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2500 is start---------')
        audioSource = AAC_3TRK_TS;
        audioExpect = audioBase.AAC_3TRK_TS_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE, differentTracks[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2500 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2600
       * @tc.name      : play->pause->selectTrack different index
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2600', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2600 is start---------')
        audioSource = AAC_3TRK_TS;
        audioExpect = audioBase.AAC_3TRK_TS_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, PAUSE_STATE, GET_TD_STATE, GET_ST_STATE,
        ST_STATE, differentTracks[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2600 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2700
       * @tc.name      : play->seek 50%->selectTrack different index
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2700', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2700 is start---------')
        audioSource = AAC_3TRK_TS;
        audioExpect = audioBase.AAC_3TRK_TS_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, SEEK_STATE, DURATION_TIME * 0.5,
        ST_STATE, differentTracks[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2700 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2800
       * @tc.name      : play->seek 50%->seek 0%->selectTrack different index
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2800', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2800 is start---------')
        audioSource = AAC_3TRK_TS;
        audioExpect = audioBase.AAC_3TRK_TS_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, SEEK_STATE, DURATION_TIME * 0.5, SEEK_STATE, 0,
        ST_STATE, differentTracks[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2800 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2900
       * @tc.name      : play->seek 50%->seek 30%->selectTrack different index
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2900', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2900 is start---------')
        audioSource = AAC_3TRK_TS;
        audioExpect = audioBase.AAC_3TRK_TS_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, SEEK_STATE, DURATION_TIME * 0.5, SEEK_STATE,
        DURATION_TIME * 0.3, ST_STATE, differentTracks[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_2900 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3000
       * @tc.name      : play->seek 50%->seek 80%->selectTrack different index
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3000', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3000 is start---------')
        audioSource = AAC_3TRK_TS;
        audioExpect = audioBase.AAC_3TRK_TS_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, SEEK_STATE, DURATION_TIME * 0.5, SEEK_STATE,
        DURATION_TIME * 0.8, ST_STATE, differentTracks[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3000 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3100
       * @tc.name      : play->seek 50%->seek 100%->selectTrack different index
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3100', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3100 is start---------')
        audioSource = AAC_3TRK_TS;
        audioExpect = audioBase.AAC_3TRK_TS_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, SEEK_STATE, DURATION_TIME * 0.5, SEEK_STATE,
        DURATION_TIME, ST_STATE, differentTracks[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3100 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3200
       * @tc.name      : play->selectedTrack  boundary index
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3200', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3200 is start---------')
        audioSource = AAC_3TRK_TS;
        audioExpect = audioBase.AAC_3TRK_TS_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE, allDescriptionIndex[0], ST_STATE,
        allDescriptionIndex[allDescriptionIndex.length-1], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3200 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3300
       * @tc.name      : play->selectedTrack aac->mp3
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3300', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3300 is start---------')
        audioSource = AAC_2TRK_MP3_1TRK_MKV;
        audioExpect = audioBase.AAC_2TRK_MP3_1TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE, currentDescriptionIndex[0], ST_STATE,
        differentTracks[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3300 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3400
       * @tc.name      : play->selectedTrack aac->aac
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3400', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3400 is start---------')
        audioSource = AAC_3TRK_TS;
        audioExpect = audioBase.AAC_3TRK_TS_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE, currentDescriptionIndex[0], ST_STATE,
        differentTracks[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3400 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3500
       * @tc.name      : play->selectedTrack mp3->mp3
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3500', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3500 is start---------')
        audioSource = MP3_3TRK_TS;
        audioExpect = audioBase.MP3_3TRK_TS_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE, currentDescriptionIndex[0], ST_STATE,
        differentTracks[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3500 is end---------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3600
       * @tc.name      : play->selectedTrack(16 tracks)
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3600', 0, async function (done) {
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3600 is start---------')
        audioSource = AAC_16TRK_MKV;
        audioExpect = audioBase.AAC_16TRK_MKV_SOURCE;
        await getInputFileFd(audioSource);
        mySteps = [SRC_STATE, PLAY_STATE, GET_TD_STATE, GET_ST_STATE, ST_STATE, currentDescriptionIndex[0], ST_STATE,
        differentTracks[0], END_STATE];
        await actFun(done);
        console.info('------SUB_MEDIA_LOCAL_AUDIO_PLAYER_TRACK_SWITCH_FUNCTION_CALLBACK_3600 is end---------')
    })

})
