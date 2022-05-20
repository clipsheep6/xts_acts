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

describe('PlayerDataSrcNoseekTestAudioAPI', function () {
    let dataSrc = media.createAVDataSource();
    let audioPlayer = media.createAudioPlayer();
    let loopValue = false;
    let isTimeOut = false;
    let readStreamSync = undefined;
    let datasrcLen = -1;
    const AUDIO_SOURCE = '/files/01.m4a';
    const PLAY_TIME = 3000;
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
    const DURATION_TIME = 119600;
    const SEEK_TIME = 5000;
    const DELTA_TIME  = 1000;
    const SECOND_INDEX = 1;
    const VOLUME_VALUE = 0.5;
    const TIME_OUT = 40000;
    const NOSEEK_MODE = -1;
    const MAX_VOLUME = 1;
    const READ_DATA_SIZE_MAX = 4096 * 10000;
    let fdHead = 'fd://';
    let fileDescriptor = undefined;

    beforeAll(async function() {
        console.info('beforeAll case');
    })

    beforeEach(async function() {
        isTimeOut = false;

        console.info('beforeEach case');
    })

    afterEach(async function() {
        
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

    function nextStep(mySteps, done) {
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
                nextStep(mySteps,done);
                break;
            case LOOP_STATE:
                loopValue = mySteps[SECOND_INDEX];
                mySteps.shift();
                mySteps.shift();
                audioPlayer.loop = loopValue;
                nextStep(mySteps,done);
                break;
            default:
                break;
        }
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

    function setDataSrcNoSeek() {
        var context = featureAbility.getContext();
        context.getOrCreateLocalDir((err, data) => {
            console.info("data=" + data);
            readFile(data);
            if (readStreamSync == undefined) {
                console.info('case MusicPlayer Launcher FileUtil is null');
                return;
            }
            dataSrc.size = NOSEEK_MODE;
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
        setDataSrcNoSeek();
        audioPlayer.on('dataLoad', () => {
            mySteps.shift();
            console.info(`case dataLoad called`);
            expect(audioPlayer.currentTime).assertEqual(0);
            expect(audioPlayer.state).assertEqual('paused');
            nextStep(mySteps,done);
        });
        audioPlayer.on('play', () => {
            mySteps.shift();
            console.info(`case play called`);
            mediaTestBase.msleep(PLAY_TIME);
            console.info(`case play currentTime is ${audioPlayer.currentTime}`);

            if (mySteps[0] == FINISH_STATE) {
                console.info(`case wait for finish`);
                return;
            }
            expect(audioPlayer.state).assertEqual('playing');
            nextStep(mySteps,done);
        });
        audioPlayer.on('pause', () => {
            mySteps.shift();
            console.info(`case pause called`);
            console.info(`case pause currentTime is ${audioPlayer.currentTime}`);

            expect(audioPlayer.state).assertEqual('paused');
            nextStep(mySteps,done);
        });
        audioPlayer.on('reset', () => {
            mySteps.shift();
            console.info(`case reset called`);
            expect(audioPlayer.state).assertEqual('idle');
            nextStep(mySteps,done);
        });
        audioPlayer.on('stop', () => {
            if (mySteps[0] == RESET_STATE) {
                console.info(`case reset stop called`);
                return;
            }
            mySteps.shift();
            console.info(`case stop called`);
            expect(audioPlayer.currentTime).assertEqual(0);
            expect(audioPlayer.state).assertEqual('stopped');
            nextStep(mySteps,done);
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
                nextStep(mySteps,done);
            }
        });
        audioPlayer.on('volumeChange', () => {
            console.info(`case setvolume called`);
            mySteps.shift();
            mySteps.shift();
            if (audioPlayer.state == 'playing') {
                mediaTestBase.msleep(PLAY_TIME);
            }
            nextStep(mySteps,done);
        });
        audioPlayer.on('finish', () => {
            mySteps.shift();
            expect(audioPlayer.state).assertEqual('stopped');

            console.info(`case finish called`);
            nextStep(mySteps,done);
        });
        audioPlayer.on('error', (err) => {
            console.info(`case error called,errName is ${err.name}`);
            console.info(`case error called,errCode is ${err.code}`);
            console.info(`case error called,errMessage is ${err.message}`);
            if ((mySteps[0] == SEEK_STATE) || (mySteps[0] == VOLUME_STATE)) {
                mySteps.shift();
                mySteps.shift();
                mySteps.shift();
                nextStep(mySteps,done);
            } else if (mySteps[0] == ERROR_STATE) {
                mySteps.shift();
                nextStep(mySteps,done);
            } else if (mySteps[0] == END_STATE) {
                console.info('case release player error');
            } else {
                mySteps.shift();
                mySteps.shift();
                nextStep(mySteps,done);
            }
        });
    }

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_PAUSE_API_0100
        * @tc.name      : 01.createAudioPlayer->play
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_PAUSE_API_0100', 0, async function (done) {
        
        let mySteps = new Array(PAUSE_STATE, ERROR_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        audioPlayer.pause();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_PAUSE_API_0200
        * @tc.name      : 02.play->pause
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_PAUSE_API_0200', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_PAUSE_API_0300
        * @tc.name      : 03.stop->pause
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_PAUSE_API_0300', 0, async function (done) {
        
        let mySteps = new Array(PLAY_STATE, STOP_STATE, PAUSE_STATE, ERROR_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_PAUSE_API_0400
        * @tc.name      : 04.seek->pause
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_PAUSE_API_0400', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, SEEK_STATE, SEEK_TIME, PAUSE_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_STOP_API_0500
        * @tc.name      : 05.play->stop
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_STOP_API_0500', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, STOP_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_STOP_API_0600
        * @tc.name      : 06.pause->stop
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_STOP_API_0600', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, STOP_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })


    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RESET_API_0700
        * @tc.name      : 07.play->reset
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RESET_API_0700', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RESET_API_0800
        * @tc.name      : 08.pause->reset
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RESET_API_0800', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, RESET_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_SETVOLUME_API_0900
        * @tc.name      : 09.createAudioPlayer->setVolume
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_SETVOLUME_API_0900', 0, async function (done) {
        
        var mySteps = new Array(VOLUME_STATE, VOLUME_VALUE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        audioPlayer.setVolume(VOLUME_VALUE);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_SETVOLUME_API_1000
        * @tc.name      : 10.play->setVolume
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_SETVOLUME_API_1000', 0, async function (done) {
        
        var mySteps = new Array(SRC_STATE, PLAY_STATE, VOLUME_STATE, VOLUME_VALUE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_SETVOLUME_API_1100
        * @tc.name      : 11.pause->setVolume
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_SETVOLUME_API_1100', 0, async function (done) {
        
        var mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, VOLUME_STATE, VOLUME_VALUE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RELEASE_API_1200
        * @tc.name      : 12.play->release
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RELEASE_API_1200', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, RELEASE_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RELEASE_API_1300
        * @tc.name      : 13.pause->release
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RELEASE_API_1300', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, PAUSE_STATE, RELEASE_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RELEASE_API_1400
        * @tc.name      : 14.stop->release
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RELEASE_API_1400', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, STOP_STATE, RELEASE_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })


    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RELEASE_API_1500
        * @tc.name      : 15.reset->release
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RELEASE_API_1500', 0, async function (done) {
        
        let mySteps = new Array(SRC_STATE, PLAY_STATE, RESET_STATE, RELEASE_STATE, END_STATE);
        initAudioPlayer();
        setCallback(mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_TIME_API_1600
        * @tc.name      : 16.get parameters after createAudioPlayer
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_TIME_API_1600', 0, async function (done) {
        
        initAudioPlayer();
        expect(audioPlayer.dataSrc).assertEqual(undefined);
        expect(audioPlayer.duration).assertEqual(undefined);
        expect(audioPlayer.currentTime).assertEqual(0);
        expect(audioPlayer.state).assertEqual('idle');
        expect(audioPlayer.loop).assertEqual(false);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_TIME_API_1700
        * @tc.name      : 17.get parameters after src
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_TIME_API_1700', 0, async function (done) {
        
        initAudioPlayer();
        mediaTestBase.msleep(PLAY_TIME);
        expect(audioPlayer.dataSrc).assertEqual(undefined);
        expect(audioPlayer.currentTime).assertEqual(0);
        expect(audioPlayer.state).assertEqual('idle');
        expect(audioPlayer.loop).assertEqual(false);
        done();
    })
})
