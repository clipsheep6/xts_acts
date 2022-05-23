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
import Fileio from '@ohos.fileio'
import featureAbility from '@ohos.ability.featureAbility'
import * as mediaTestBase from '../../../../../MediaTestBase.js';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('PlayerDataSrcAudioFUNC', function () {
    let dataSrc = media.createAVDataSource();
    let audioPlayer = media.createAudioPlayer();
    let isTimeOut = false;
    let readStreamSync = undefined;
    let datasrcLen = -1;
    const AUDIO_SOURCE = '/files/01.m4a';
    const PLAY_TIME = 3000;
    const DURATION_TIME = 119600;
    const SEEK_TIME = 5000;
    const DELTA_TIME  = 1000;
    const END_STATE = 0;
    const SRC_STATE = 1;
    const PLAY_STATE = 2;
    const PAUSE_STATE = 3;
    const STOP_STATE = 4;
    const RESET_STATE = 5;
    const SEEK_STATE = 6;
    const VOLUME_STATE = 7;
    const RELEASE_STATE = 8;
    const ERROR_STATE = 9;
    const FINISH_STATE = 10;
    const LOOP_STATE = 11;
    const FDSRC_STATE = 12;
    const SECOND_INDEX = 1;
    const RAND_NUM = 5;
    const TIME_OUT = 40000;
    const MAX_VOLUME = 1;
    const READ_DATA_SIZE_MAX = 4096 * 10000;
    let fdHead = 'fd://';
    let fileDescriptor = undefined;

    beforeAll(async function() {
        console.info('beforeAll case');
    })

    beforeEach(function() {
        isTimeOut = false;
        console.info('beforeEach case');
    })

    afterEach(function() {
        console.info('afterEach case');
    })

    afterAll(async function() {
        console.info('afterAll case');
    })

    function initAudioPlayer() {
        if (typeof (audioPlayer) != 'undefined') {
            audioPlayer.release();
            audioPlayer = undefined;
        }
        audioPlayer = media.createAudioPlayer();
        if (typeof (audioPlayer) == 'undefined') {
            console.info('case create player is faild');
            expect().assertFail();
        }
    }

    function nextStep(mySteps,done) {
        if (mySteps[0] == END_STATE) {
            done();
            console.info('case to done');
            return;
        }
        switch (mySteps[0]) {
            case SRC_STATE:
                console.info(`case to prepare`);
                audioPlayer.dataSrc = dataSrc;
                break;
            case FDSRC_STATE:
                console.info(`case to prepare`);
                audioPlayer.fdSrc = fileDescriptor;
            case PLAY_STATE:
                console.info(`case to play`);
                audioPlayer.play();
                break;
            case PAUSE_STATE:
                console.info(`case to pause`);
                audioPlayer.pause();
                break;
            case STOP_STATE:
                console.info(`case to stop`);
                audioPlayer.stop();
                break;
            case RESET_STATE:
                console.info(`case to reset`);
                audioPlayer.reset();
                break;
            case SEEK_STATE:
                console.info(`case seek to time is ${mySteps[SECOND_INDEX]}`);
                audioPlayer.seek(mySteps[SECOND_INDEX]);
                break;
            case VOLUME_STATE:
                console.info(`case to setVolume`);
                audioPlayer.setVolume(mySteps[SECOND_INDEX]);
                break;
            case RELEASE_STATE:
                console.info(`case to release`);
                mySteps.shift();
                audioPlayer.release();
                audioPlayer = undefined;
                break;
            case LOOP_STATE:
                audioPlayer.loop = mySteps[SECOND_INDEX];
                mySteps.shift();
                mySteps.shift();
                nextStep(mySteps, done);
                break;
            default:
                break;
        }
    }

    function getTotalLen() {
        let buf = new ArrayBuffer(READ_DATA_SIZE_MAX);
        let totalLength = readStreamSync.readSync(buf);
        dataSrc.size = totalLength;
    }

    function getContent(mem, len, pos) {
        let lenReal = -1;
        if (pos == -1) {
            lenReal = readStreamSync.readSync(mem, {
                length: len,
            });
        } else {
            lenReal= readStreamSync.readSync(mem, {
                position: pos,
                length: len,
            });

        }
        return lenReal;
    }

    function readFile(path) {
        console.info('case MusicPlayer[PlayerModel] Launcher FileUtil readFile start execution');
        try {
            let publicPath = path + AUDIO_SOURCE;
            console.info('case MusicPlayer[PlayerModel] readFile: ' + publicPath);
            readStreamSync = Fileio.createStreamSync(publicPath, 'r+');
        } catch (e) {
            console.info('case MusicPlayer Launcher FileUtil readFile ' + e);
        }
    }

    function setDataSrcSeekAble() {
        var context = featureAbility.getContext();
        context.getOrCreateLocalDir((err, data) => {
            console.info("data=" + data);
            readFile(data);
            if (readStreamSync == undefined) {
                console.info('case MusicPlayer Launcher FileUtil is null');
                return;
            }
            getTotalLen();
            dataSrc.on('readAt', (length, mem, pos) => {
                console.info('MusicPlayer[PlayerModel] readAt:' + length + 'pos' + pos);
                datasrcLen = getContent(mem, length, pos);
                if (datasrcLen > 0) {
                    console.info('case MusicPlayer[PlayerModel] readAt end:' + datasrcLen);
                    return datasrcLen;
                }
                return -1;
            });
        })
    }

    function setCallback(mySteps, done) {
        console.info(`case setCallback`);
        setDataSrcSeekAble();
        audioPlayer.on('bufferingUpdate', (infoType, value) => {
            console.info('case bufferingUpdate success infoType is ' + infoType);
            console.info('case bufferingUpdate success value is ' + value);
        });
        audioPlayer.on('dataLoad', () => {
            mySteps.shift();
            console.info(`case dataLoad called`);
            expect(audioPlayer.currentTime).assertEqual(0);
            expect(audioPlayer.duration).assertEqual(DURATION_TIME);
            expect(audioPlayer.state).assertEqual('paused');
            nextStep(mySteps, done);
        });
        audioPlayer.on('play', () => {
            mySteps.shift();
            console.info(`case play called`);
            mediaTestBase.msleep(PLAY_TIME);
            console.info(`case play currentTime is ${audioPlayer.currentTime}`);
            expect(audioPlayer.duration).assertEqual(DURATION_TIME);
            if (mySteps[0] == FINISH_STATE) {
                console.info(`case wait for finish`);
                return;
            }
            expect(audioPlayer.state).assertEqual('playing');
            nextStep(mySteps, done);
        });
        audioPlayer.on('pause', () => {
            mySteps.shift();
            console.info(`case pause called`);
            console.info(`case pause currentTime is ${audioPlayer.currentTime}`);
            expect(audioPlayer.duration).assertEqual(DURATION_TIME);
            expect(audioPlayer.state).assertEqual('paused');
            nextStep(mySteps, done);
        });
        audioPlayer.on('reset', () => {
            mySteps.shift();
            console.info(`case reset called`);
            expect(audioPlayer.state).assertEqual('idle');
            nextStep(mySteps, done);
        });
        audioPlayer.on('stop', () => {
            if (mySteps[0] == RESET_STATE) {
                console.info(`case reset stop called`);
                return;
            }
            mySteps.shift();
            console.info(`case stop called`);
            expect(audioPlayer.currentTime).assertEqual(0);
            expect(audioPlayer.duration).assertEqual(DURATION_TIME);
            expect(audioPlayer.state).assertEqual('stopped');
            nextStep(mySteps, done);
        });
        audioPlayer.on('timeUpdate', (seekDoneTime) => {
            if (typeof (seekDoneTime) == 'undefined') {
                console.info(`case seek filed,errcode is ${seekDoneTime}`);
                return;
            }
            if (mySteps[0] != SEEK_STATE) {
                return;
            }
            mySteps.shift();
            mySteps.shift();
            console.info(`case seekDoneTime is ${seekDoneTime}`);
            console.info(`case seek called`);
            expect(audioPlayer.currentTime + DELTA_TIME).assertClose(seekDoneTime + DELTA_TIME, DELTA_TIME);
            console.info(`case loop is ${audioPlayer.loop}`);
            if ((audioPlayer.loop == true) && (seekDoneTime == DURATION_TIME)) {
                console.info('case loop is true');
                mediaTestBase.msleep(PLAY_STATE);
            }
            if ((seekDoneTime < audioPlayer.duration) || (audioPlayer.state == 'paused')) {
                nextStep(mySteps, done);
            }
        });
        audioPlayer.on('volumeChange', () => {
            console.info(`case setvolume called`);
            mySteps.shift();
            mySteps.shift();
            if (audioPlayer.state == 'playing') {
                mediaTestBase.msleep(PLAY_TIME);
            }
            nextStep(mySteps, done);
        });
        audioPlayer.on('finish', () => {
            mySteps.shift();
            expect(audioPlayer.state).assertEqual('stopped');
            expect(audioPlayer.currentTime).assertClose(audioPlayer.duration, DELTA_TIME);
            console.info(`case finish called`);
            nextStep(mySteps, done);
        });
        audioPlayer.on('error', (err) => {
            console.info(`case error called,errName is ${err.name}`);
            console.info(`case error called,errCode is ${err.code}`);
            console.info(`case error called,errMessage is ${err.message}`);
            if ((mySteps[0] == SEEK_STATE) || (mySteps[0] == VOLUME_STATE)) {
                mySteps.shift();
                mySteps.shift();
                mySteps.shift();
            } else {
                mySteps.shift();
                mySteps.shift();
            }
            nextStep(mySteps, done);
        });
    }

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_0100
        * @tc.name      : 001.play
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_0100', 0, async function (done) {
         
        let mySteps = new Array(SRC_STATE, PLAY_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_0200
        * @tc.name      : 002.play->pause
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTestTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_0200', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_0300
        * @tc.name      : 003.play->pause->play->reset
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_0300', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, PLAY_STATE, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_0400
        * @tc.name      : 004.play->reset
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_0400', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_0500
        * @tc.name      : 005.play->pause->play->pause
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_0500', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, PLAY_STATE, PAUSE_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_0600
        * @tc.name      : 006.play->pause->stop
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_0600', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, STOP_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_0700
        * @tc.name      : 007.play->pause->play->stop
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_0700', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, PLAY_STATE, STOP_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_0800
        * @tc.name      : 008.play->stop->reset->play->pause->play->reset
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_0800', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, STOP_STATE, RESET_STATE, SRC_STATE, PLAY_STATE,
            PAUSE_STATE, PLAY_STATE, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_0900
        * @tc.name      : 009.play->pause->stop->reset->play->pause->reset
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_0900', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, STOP_STATE, RESET_STATE, SRC_STATE, PLAY_STATE,
            PAUSE_STATE, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_1000
        * @tc.name      : 010.play->stop->reset->play->reset
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_1000', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, STOP_STATE, RESET_STATE,
            SRC_STATE, PLAY_STATE, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_1100
        * @tc.name      : 011.play->stop->pause
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_1100', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, STOP_STATE, PAUSE_STATE, ERROR_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_1200
        * @tc.name      : 012.set volume 0 to 1
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_1200', 0, async function (done) {
        let mySteps = new Array(SRC_STATE, PLAY_STATE, VOLUME_STATE, 0,
            VOLUME_STATE, MAX_VOLUME, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_1300
        * @tc.name      : 013.play
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_1300', 0, async function (done) {
        console.info(`case update`);
        let mySteps = new Array(SRC_STATE, PLAY_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_1400
        * @tc.name      : 014.play->pause
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTestTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_1400', 0, async function (done) {
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_1500
        * @tc.name      : 015.play->pause->play->reset
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_1500', 0, async function (done) {
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, PLAY_STATE, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_1600
        * @tc.name      : 016.play->reset
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_1600', 0, async function (done) {
        let mySteps = new Array(SRC_STATE, PLAY_STATE, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_1700
        * @tc.name      : 017.play->pause->play->pause
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_1700', 0, async function (done) {
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, PLAY_STATE, PAUSE_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_1800
        * @tc.name      : 018.play->pause->stop
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_1800', 0, async function (done) {
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, STOP_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_1900
        * @tc.name      : 019.play->pause->play->stop
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_1900', 0, async function (done) {
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, PLAY_STATE, STOP_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_2000
        * @tc.name      : 020.play->stop->reset->play->pause->play->reset
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_2000', 0, async function (done) {
        let mySteps = new Array(SRC_STATE, PLAY_STATE, STOP_STATE, RESET_STATE, SRC_STATE, PLAY_STATE,
            PAUSE_STATE, PLAY_STATE, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_2100
        * @tc.name      : 021.play->pause->stop->reset->play->pause->reset
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_2100', 0, async function (done) {
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, STOP_STATE, RESET_STATE, SRC_STATE, PLAY_STATE,
            PAUSE_STATE, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_2200
        * @tc.name      : 022.play->seek->pause
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_2200', 0, async function (done) {
        let mySteps = new Array(SRC_STATE, PLAY_STATE, SEEK_STATE, 0, PAUSE_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_2300
        * @tc.name      : 023.play->pause->seek(duration)
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_2300', 0, async function (done) {
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, SEEK_STATE, DURATION_TIME,
            PLAY_STATE, FINISH_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_2400
        * @tc.name      : 024.play->pause->play->seek(0)->pause
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_2400', 0, async function (done) {
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, PLAY_STATE, SEEK_STATE, 0, PAUSE_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_2500
        * @tc.name      : 025.play->seek(0)->reset
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_2500', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, SEEK_STATE, 0, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_2600
        * @tc.name      : 026.play->seek->stop->reset
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_2600', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, SEEK_STATE, 0, STOP_STATE, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_2700
        * @tc.name      : 027.play->stop->seek
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_2700', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, STOP_STATE, SEEK_STATE, 0, ERROR_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_2800
        * @tc.name      : 028.play->pause->seek->reset
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_2800', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, SEEK_STATE, 0, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_2900
        * @tc.name      : 029.play->pause->seek->stop
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_2900', 0, async function (done) {
         
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, SEEK_STATE, DURATION_TIME / RAND_NUM,
            STOP_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_3000
        * @tc.name      : 030.play->pause->play->seek(0)
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_3000', 0, async function (done) {
         
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, PLAY_STATE, SEEK_STATE, 0, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_3100
        * @tc.name      : 031.play->pause->play->seek(0)->stop
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_3100', 0, async function (done) {
         
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, PLAY_STATE, SEEK_STATE, 0, STOP_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_3200
        * @tc.name      : 032.play->stop->seek(0)->reset->play
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_3200', 0, async function (done) {
         
        let mySteps = new Array(SRC_STATE, PLAY_STATE, STOP_STATE, SEEK_STATE, 0, ERROR_STATE,
            RESET_STATE, SRC_STATE, PLAY_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_3300
        * @tc.name      : 033.play->seek(0)
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_3300', 0, async function (done) {
         
        let mySteps = new Array(SRC_STATE, PLAY_STATE, SEEK_STATE, 0, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_3400
        * @tc.name      : 034.play->stop->seek->pause
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level 3
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_3400', 0, async function (done) {
         
        let mySteps = new Array(SRC_STATE, PLAY_STATE, STOP_STATE, SEEK_STATE, SEEK_TIME, ERROR_STATE,
            PAUSE_STATE, ERROR_STATE, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_3500
        * @tc.name      : 035.play->stop->seek->reset->play
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level 3
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_3500', 0, async function (done) {
         
        let mySteps = new Array(SRC_STATE, PLAY_STATE, STOP_STATE, SEEK_STATE, SEEK_TIME, ERROR_STATE,
            RESET_STATE, SRC_STATE, PLAY_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_3600
        * @tc.name      : 036.play->seek(duration)
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_3600', 0, async function (done) {
         
        let mySteps = new Array(SRC_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME, FINISH_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_3700
        * @tc.name      : 037.play->seek(out of duration)
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level 3
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_3700', 0, async function (done) {
         
        let mySteps = new Array(SRC_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME + DELTA_TIME,
            FINISH_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_3800
        * @tc.name      : 038.play->->seek(rand)
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_3800', 0, async function (done) {
         
        let mySteps = new Array(SRC_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME / RAND_NUM, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_3900
        * @tc.name      : 039.play->pause->seek(0)->play
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_3900', 0, async function (done) {
         
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, SEEK_STATE, 0, PLAY_STATE, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_4000
        * @tc.name      : 040.play->pause->seek(duration)->play
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_4000', 0, async function (done) {
         
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, SEEK_STATE, DURATION_TIME, PLAY_STATE,
            FINISH_STATE, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_4100
        * @tc.name      : 041.play->pause->seek(out of duratin)->play
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level 3
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_4100', 0, async function (done) {
         
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, SEEK_STATE, DURATION_TIME + DELTA_TIME, PLAY_STATE,
            FINISH_STATE, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_4200
        * @tc.name      : 042.play->seek(out of duratin)->play
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level 3
    */
    it('SUB_MEDIA_PLAYER_DATASRC_AUDIO_FUNCTION_4200', 0, async function (done) {
         
        let mySteps = new Array(SRC_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME + DELTA_TIME,
            FINISH_STATE, PLAY_STATE, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })
})
