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
import FileIO from '@ohos.fileio'
import featureAbility from '@ohos.ability.featureAbility'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import * as mediaTestBase from '../../../../../MediaTestBase.js';
import * as PlayerFormatTestBase from '../../../../../PlayerFormatTestBase.js';


describe('audioPlayerDataSrcFormatTest', function () {
    let dataSrc = null;
    let audioPlayer = media.createAudioPlayer();
    let readStreamSync = undefined;
    let mySteps = [];
    let pos_ = 0;
    let timeoutTimer = undefined;
    let isPrepared = false;
    let AUDIO_SOURCE = '/files/01.m4a';
    const DURATION_TIME = 219600;
    const DELTA_TIME = 1000;
    const END_STATE = 0;
    const SRC_STATE = 1;
    const PLAY_STATE = 2;
    const PAUSE_STATE = 3;
    const STOP_STATE = 4;
    const RESET_STATE = 5;
    const SEEK_STATE = 6;
    const VOLUME_STATE = 7;
    const ERROR_STATE = 9;
    const FINISH_STATE = 10;
    const LOOP_STATE = 11;
    const RELEASE_STATE = 12;
    const SECOND_INDEX = 1;
    const TIME_OUT = 300000;
    const READ_DATA_SIZE_MAX = 4096 * 10000;
    const SLEEP_TIME = 1500;

    beforeAll(async function () {
        console.info(' beforeAll case');
    })

    beforeEach(function () {
        isPrepared = false;
        console.info(' beforeEach case');
    })

    afterEach(async function () {
        if (audioPlayer) {
            console.info(' afterEach case enter');
            console.info('state' + audioPlayer.state);
            audioPlayer.release();
            audioPlayer = undefined;
            await mediaTestBase.msleep(SLEEP_TIME);
        }
        if (!!readStreamSync) {
            readStreamSync.close();
        }
        removeTimeoutTimer();
    })

    afterAll(async function () {
        console.info(' afterAll case');
    })

    function nextStep(done) {
        if (mySteps[0] == END_STATE) {
            console.info(' case to done');
            removeTimeoutTimer();
            expect(true).assertTrue();
            done();
            return;
        }
        switch (mySteps[0]) {
            case SRC_STATE:
                console.info(` case to src state`);
                if (isPrepared) {
                    console.info(` case to prepare after reset`);
                    mySteps.shift();
                    nextStep(done);
                } else {
                    console.info(` case to data source`);
                    audioPlayer.dataSrc = dataSrc
                }
                break;
            case PLAY_STATE:
                console.info(` case to play`);
                audioPlayer.play();
                break;
            case PAUSE_STATE:
                console.info(` case to pause`);
                audioPlayer.pause();
                break;
            case STOP_STATE:
                console.info(` case to stop`);
                audioPlayer.stop();
                break;
            case RESET_STATE:
                console.info(` case to reset`);
                audioPlayer.reset();
                console.info(` case to after reset; audioPlayer.url: ` + audioPlayer.url);
                console.info(` case to after reset; audioPlayer.state: ` + audioPlayer.state);
                break;
            case SEEK_STATE:
                console.info(` case seek to time is ${mySteps[SECOND_INDEX]}`);
                console.info('currentTime before: ' + audioPlayer.currentTime);
                console.info('state' + audioPlayer.state);
                audioPlayer.seek(mySteps[SECOND_INDEX]);
                console.info('currentTime end: ' + audioPlayer.currentTime);
                break;
            case VOLUME_STATE:
                console.info(` case to setVolume`);
                audioPlayer.setVolume(mySteps[SECOND_INDEX]);
                break;
            case LOOP_STATE:
                console.info(` case to setLoop`);
                audioPlayer.loop = mySteps[SECOND_INDEX];
                mySteps.shift();
                mySteps.shift();
                nextStep(done);
                break;
            case RELEASE_STATE:
                console.info(` case to release`);
                audioPlayer.release();
                mySteps.shift();
                nextStep(done);
                break;
            default:
                mySteps.shift();
                nextStep(done);
                break;
        }
    }

//    function getTotalLen() {
//        let buf = new ArrayBuffer(READ_DATA_SIZE_MAX);
//        let totalLength = readStreamSync.readSync(buf);
//        dataSrc.size = totalLength;
//    }

    function setReadAtCallBack() {
        console.info('MusicPlayer[PlayerModel] readAt on start');
        dataSrc.on('readAt', (length, buf, pos) => {
            let size_ = dataSrc.size;
            console.info('MusicPlayer[PlayerModel] readAt: length: ' + 
			length + ' pos : ' + pos + ' size_ : ' + size_);
            if (!buf) {
                console.info('buf not exist');
                return 0;
            }
            console.info('buf byteLength: ' + buf.byteLength);
            if (length > buf.byteLength) {
                length = buf.byteLength;
                console.info('buf length less than length');
            }
            console.info('MusicPlayer[PlayerModel] readAt: ' + length + ';pos: ' + pos);
            let lenReal = readStreamSync.readSync(buf, {
                position: pos,
                length: length,
            });
            console.info('case MusicPlayer[PlayerModel] readAt end, lenReal: ' + lenReal);
            console.info('playerXTS =========================================================');
            return lenReal;
        });
        console.info('MusicPlayer[PlayerModel] readAt on end');
    }

    function setCommonCallback(done) {
        console.info(`case setCallback`);
        audioPlayer.on('bufferingUpdate', (infoType, value) => {
            console.info('case bufferingUpdate success infoType is ' + infoType);
            console.info('case bufferingUpdate success value is ' + value);
        });
        audioPlayer.on('dataLoad', () => {
            console.info(`case dataLoad called`);
            isPrepared = true;
            mySteps.shift();
            expect(audioPlayer.currentTime).assertEqual(0);
            console.info(`audioPlayer.state is ${audioPlayer.state}`);
            expect(audioPlayer.state).assertEqual('paused');
            nextStep(done);
        });
        audioPlayer.on('play', () => {
            console.info(`case play called`);
            mySteps.shift();
            console.info(`case play currentTime is ${audioPlayer.currentTime}`);
            expect(audioPlayer.state).assertEqual('playing');
            if (mySteps[0] == FINISH_STATE) {
                console.info(`case wait for finish`);
                return;
            }
            nextStep(done);
        });
        audioPlayer.on('pause', () => {
            console.info(`case pause called`);
            mySteps.shift();
            console.info(`case pause currentTime is ${audioPlayer.currentTime}`);
            expect(audioPlayer.state).assertEqual('paused');
            nextStep(done);
        });
        audioPlayer.on('reset', () => {
            console.info(`case reset called`);
            mySteps.shift();
            expect(audioPlayer.state).assertEqual('idle');
            nextStep(done);
        });
        audioPlayer.on('stop', () => {
            if (mySteps[0] == RESET_STATE) {
                console.info(`case reset stop called`);
                return;
            }
            console.info(`case stop called`);
            mySteps.shift();
            expect(audioPlayer.state).assertEqual('stopped');
            nextStep(done);
        });
        audioPlayer.on('timeUpdate', (seekDoneTime) => {
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
            expect(audioPlayer.currentTime + DELTA_TIME).assertClose(seekDoneTime + DELTA_TIME, DELTA_TIME);
            console.info(`case loop is ${audioPlayer.loop}`);
            if ((audioPlayer.loop == true) && (seekDoneTime == DURATION_TIME)) {
                console.info('case loop is true');
            }
            if ((seekDoneTime < audioPlayer.duration) || (audioPlayer.state == 'paused')) {
                nextStep(done);
            }
        });
        audioPlayer.on('volumeChange', () => {
            console.info(`case setvolume called`);
            mySteps.shift();
            mySteps.shift();
            nextStep(done);
        });
        audioPlayer.on('finish', () => {
            console.info(`case finish called`);
            mySteps.shift();
            expect(audioPlayer.state).assertEqual('stopped');
            expect(audioPlayer.currentTime).assertClose(audioPlayer.duration, DELTA_TIME);
            nextStep(done);
        });
        audioPlayer.on('error', (err) => {
            console.info(`case error called,errName is ${err.name}`);
            console.info(`case error called,errCode is ${err.code}`);
            console.info(`case error called,errMessage is ${err.message}`);
            if ((mySteps[0] == SEEK_STATE) || (mySteps[0] == VOLUME_STATE)) {
                mySteps.shift();
                mySteps.shift();
            } else {
                mySteps.shift();
            }
            nextStep(done);
        });
    }

    function addTimeoutTimer(done) {
        removeTimeoutTimer();
        timeoutTimer = setTimeout(() => {
            console.info(' case time out');
            expect().assertFail();
            done();
        }, TIME_OUT);
    }

    function removeTimeoutTimer() {
        if (!!timeoutTimer) {
            clearTimeout(timeoutTimer);
            timeoutTimer = undefined;
        }
    }

    async function actFun(done) {
        audioPlayer = media.createAudioPlayer();
        if (typeof (audioPlayer) == 'undefined') {
            console.info(' case create player is failed');
            expect().assertFail();
            done();
        }
        setCommonCallback(done);
        await mediaTestBase.msleep(SLEEP_TIME);
        dataSrc = await media.createAVDataSource();
        let context = featureAbility.getContext();
        let publicPath = '';
        console.info('context.getOrCreateLocalDir start; dataSrc: ' + JSON.stringify(dataSrc));
        await context.getOrCreateLocalDir().then((data) => {
            console.info("data=" + data);
            publicPath = data + AUDIO_SOURCE;
        }, (err) => {
            console.info("getOrCreateLocalDir failed; err: " + err);
            expect().assertFail();
            done();
        });
        console.info('FileIO.createStreamSync start; publicPath: ' + publicPath);
        readStreamSync = FileIO.createStreamSync(publicPath, 'r+');
        console.info('FileIO.createStreamSync end;');
        if (!readStreamSync) {
            console.info(' case MusicPlayer Launcher FileUtil is null');
            expect().assertFail();
            done();
        }
        console.info('FileIO.createStreamSync success');
//        getTotalLen();
        await PlayerFormatTestBase.getTotalLen(READ_DATA_SIZE_MAX, readStreamSync, dataSrc);
        console.info('dataSrc size: ' + dataSrc.size);
        setReadAtCallBack(done);
        await mediaTestBase.msleep(SLEEP_TIME);
        addTimeoutTimer(done);
        nextStep(done);
    }


    /* *
            * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_DATASRC_PROMISE_FORMAT_MP3_0100
            * @tc.name      : 001.play
            * @tc.desc      : audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_AUDIO_PLAYER_DATASRC_PROMISE_FORMAT_MP3_0100', 0, async function (done) {
        AUDIO_SOURCE = '/files/01.mp3';
        mySteps = [SRC_STATE, LOOP_STATE,true, PLAY_STATE, PAUSE_STATE, PLAY_STATE,
        STOP_STATE, RESET_STATE, RELEASE_STATE, END_STATE];
        await actFun(done);
    })

     /* *
             * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_DATASRC_PROMISE_FORMAT_M4A_0100
             * @tc.name      : 001.play
             * @tc.desc      : audio playback control test
             * @tc.size      : MediumTest
             * @tc.type      : Function test
             * @tc.level     : Level2
     */
     it('SUB_MEDIA_AUDIO_PLAYER_DATASRC_PROMISE_FORMAT_M4A_0100', 0, async function (done) {
         AUDIO_SOURCE = '/files/59.m4a';
         mySteps = [SRC_STATE, LOOP_STATE,true, PLAY_STATE, PAUSE_STATE, PLAY_STATE,
         STOP_STATE, RESET_STATE, RELEASE_STATE, END_STATE];
         await actFun(done);
     })

     /* *
             * @tc.number    : SUB_MEDIA_AUDIO_PLAYER_DATASRC_PROMISE_FORMAT_WAV_0100
             * @tc.name      : 001.play
             * @tc.desc      : audio playback control test
             * @tc.size      : MediumTest
             * @tc.type      : Function test
             * @tc.level     : Level2
     */
     it('SUB_MEDIA_AUDIO_PLAYER_DATASRC_PROMISE_FORMAT_WAV_0100', 0, async function (done) {
         AUDIO_SOURCE = '/files/vorbis_48000_32_1.wav';
         mySteps = [SRC_STATE, LOOP_STATE,true, PLAY_STATE, PAUSE_STATE, PLAY_STATE,
         STOP_STATE, RESET_STATE, RELEASE_STATE, END_STATE];
         await actFun(done);
     })

})
