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


describe('audioPlayerDataSrcTestFun', function () {
    let dataSrc = null;
    let audioPlayer = media.createAudioPlayer();
    let readStreamSync = undefined;
    let mySteps = [];
    let pos_ = 0;
    let timeoutTimer = undefined;
    let isPrepared = false;
    let AUDIO_SOURCE = '/files/01.m4a';
    const PLAY_TIME = 3000;
    const DURATION_TIME = 219600;
    const SEEK_TIME = 5000;
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
    const RAND_NUM = 5;
    const TIME_OUT = 300000;
    const MAX_VOLUME = 1;
    const READ_DATA_SIZE_MAX = 4096 * 10000;
    const TIME_OUT_FLAG = false;
    const SLEEP_TIME = 1500;

    beforeAll(async function () {
        console.info(' beforeAll case');
    })

    beforeEach(function () {
        isPrepared = false;
        console.info(' beforeEach case');
    })

    afterEach(async function () {
        console.info(' afterEach case1');
        if (audioPlayer) {
            console.info(' afterEach case2');
            console.info('state' + audioPlayer.state);
            audioPlayer.release();
            console.info(' afterEach case3');
            audioPlayer = undefined;
            await sleep(SLEEP_TIME);
        }
        console.info(' afterEach case4');
        if (!!readStreamSync) {
            readStreamSync.close();
        }
        console.info(' afterEach case5');
        removeTimeoutTimer();
        console.info(' afterEach case6');
    })

    afterAll(async function () {
        console.info(' afterAll case');
    })

    function sleep(time) {
        return new Promise(resolve => {
            setTimeout(() => {
                resolve('sleep finished');
            }, time);
        })
    }

    async function initAudioPlayer(done) {
        audioPlayer = media.createAudioPlayer();
        if (typeof (audioPlayer) == 'undefined') {
            console.info(' case create player is failed');
            expect().assertFail();
            done();
        }
        setCommonCallback(done);
        await sleep(SLEEP_TIME);
    }

    async function initDataSource(done) {
        dataSrc = media.createAVDataSource();
        let context = featureAbility.getContext();
        let publicPath = '';
        console.info('context.getOrCreateLocalDir start');
        await context.getOrCreateLocalDir().then((data) => {
            console.info("data=" + data);
            publicPath = data + AUDIO_SOURCE;
        }, (err) => {
            console.info("getOrCreateLocalDir failed; err: " + err);
            expect().assertFail();
            done();
        });
        console.info('FileIO.createStreamSync start');
        readStreamSync = FileIO.createStreamSync(publicPath, 'r+');
        if (!readStreamSync) {
            console.info(' case MusicPlayer Launcher FileUtil is null');
            expect().assertFail();
            done();
        }
        console.info('FileIO.createStreamSync success');
        getTotalLen();
        console.info('dataSrc size: ' + dataSrc.size);
        setReadAtCallBack();
        await sleep(SLEEP_TIME);
        addTimeoutTimer(done);
        nextStep(done);
    }

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

    function getTotalLen() {
        let buf = new ArrayBuffer(READ_DATA_SIZE_MAX);
        let totalLength = readStreamSync.readSync(buf);
        dataSrc.size = totalLength;
    }

    function setReadAtCallBack() {
        console.info('MusicPlayer[PlayerModel] readAt on start');
        dataSrc.on('readAt', (length, buf, pos) => {
            let size_ = dataSrc.size;
            console.info('MusicPlayer[PlayerModel] readAt: length: ' + length + ' pos : ' + pos + ' size_ : ' + size_);
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
            console.info('playerXTS ========================================================================');
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
        await sleep(SLEEP_TIME);
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
        getTotalLen();
        console.info('dataSrc size: ' + dataSrc.size);
        setReadAtCallBack(done);
        await sleep(SLEEP_TIME);
        addTimeoutTimer(done);
        nextStep(done);
    }



    /* *
           * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_0100
           * @tc.name      : 001.play
           * @tc.desc      : Audio playback control test
           * @tc.size      : MediumTest
           * @tc.type      : Function test
           * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_0100', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, END_STATE];
        await actFun(done);
    })

    /* *
           * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_0200
           * @tc.name      : 002.play->pause
           * @tc.desc      : Audio playback control test
           * @tc.size      : MediumTestTest
           * @tc.type      : Function test
           * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_0200', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, PAUSE_STATE, RESET_STATE, END_STATE];
        await actFun(done);
    })

    /* *
           * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_0300
           * @tc.name      : 003.play->pause->play->reset
           * @tc.desc      : Audio playback control test
           * @tc.size      : MediumTest
           * @tc.type      : Function test
           * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_0300', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, PAUSE_STATE, PLAY_STATE, RESET_STATE, END_STATE];
        await actFun(done);
    })

    /* *
               * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_0400
               * @tc.name      : 004.play->reset
               * @tc.desc      : Audio playback control test
               * @tc.size      : MediumTest
               * @tc.type      : Function test
               * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_0400', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, RESET_STATE, END_STATE];
        await actFun(done);
    })

    /* *
               * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_0500
               * @tc.name      : 005.play->pause->play->pause
               * @tc.desc      : Audio playback control test
               * @tc.size      : MediumTest
               * @tc.type      : Function test
               * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_0500', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, PAUSE_STATE, PLAY_STATE, PAUSE_STATE, END_STATE];
        await actFun(done);
    })

    /* *
               * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_0600
               * @tc.name      : 006.play->pause->stop
               * @tc.desc      : Audio playback control test
               * @tc.size      : MediumTest
               * @tc.type      : Function test
               * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_0600', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, PAUSE_STATE, STOP_STATE, END_STATE];
        await actFun(done);
    })

    /* *
               * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_0700
               * @tc.name      : 007.play->pause->play->stop
               * @tc.desc      : Audio playback control test
               * @tc.size      : MediumTest
               * @tc.type      : Function test
               * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_0700', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, PAUSE_STATE, PLAY_STATE, STOP_STATE, END_STATE];
        await actFun(done);
    })

    /* *
           * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_0800
           * @tc.name      : 008.play->stop->reset->play->pause->play->reset
           * @tc.desc      : Audio playback control test
           * @tc.size      : MediumTest
           * @tc.type      : Function test
           * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_0800', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, STOP_STATE, RESET_STATE, SRC_STATE, PLAY_STATE,
        PAUSE_STATE, PLAY_STATE, RESET_STATE, END_STATE];
        await actFun(done);
    })

    /* *
           * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_0900
           * @tc.name      : 009.play->pause->stop->reset->play->pause->reset
           * @tc.desc      : Audio playback control test
           * @tc.size      : MediumTest
           * @tc.type      : Function test
           * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_0900', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, PAUSE_STATE, STOP_STATE, RESET_STATE, SRC_STATE, PLAY_STATE,
        PAUSE_STATE, RESET_STATE, END_STATE];
        await actFun(done);
    })

    /* *
           * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_1000
           * @tc.name      : 010.play->stop->reset->play->reset
           * @tc.desc      : Audio playback control test
           * @tc.size      : MediumTest
           * @tc.type      : Function test
           * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_1000', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, STOP_STATE, RESET_STATE,
        SRC_STATE, PLAY_STATE, RESET_STATE, END_STATE];
        await actFun(done);
    })

    /* *
           * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_1100
           * @tc.name      : 011.play->stop->pause
           * @tc.desc      : Audio playback control test
           * @tc.size      : MediumTest
           * @tc.type      : Function test
           * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_1100', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, STOP_STATE, PAUSE_STATE, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_1200
            * @tc.name      : 012.LOOP PLAY
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_1200', 0, async function (done) {
        mySteps = [SRC_STATE,LOOP_STATE,true, PLAY_STATE, PAUSE_STATE,END_STATE];
        await actFun(done);
    })

    /* *
             * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_1300
             * @tc.name      : 013.set volume 0 to 1
             * @tc.desc      : Audio playback control test
             * @tc.size      : MediumTest
             * @tc.type      : Function test
             * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_1300', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, VOLUME_STATE, 0,
        VOLUME_STATE, MAX_VOLUME, RESET_STATE, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_1400
            * @tc.name      : 014.play->seek->pause
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_1400', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, SEEK_STATE, 0, PAUSE_STATE, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_1500
            * @tc.name      : 015.play->pause->seek(duration)
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_1500', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, PAUSE_STATE, SEEK_STATE, DURATION_TIME,
         FINISH_STATE, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_1600
            * @tc.name      : 016.play->pause->play->seek(0)->pause
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_1600', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, PAUSE_STATE, PLAY_STATE, SEEK_STATE, 0, PAUSE_STATE, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_1700
            * @tc.name      : 017.play->seek(0)->reset
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_1700', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, SEEK_STATE, 0, RESET_STATE, END_STATE];
        await actFun(done);
    })

    /* *
             * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_1800
             * @tc.name      : 018.play->seek->stop->reset
             * @tc.desc      : Audio playback control test
             * @tc.size      : MediumTest
             * @tc.type      : Function test
             * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_1800', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, SEEK_STATE, 0, STOP_STATE, RESET_STATE, END_STATE];
        await actFun(done);
    })

    /* *
             * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_1900
             * @tc.name      : 019.play->stop->seek
             * @tc.desc      : Audio playback control test
             * @tc.size      : MediumTest
             * @tc.type      : Function test
             * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_1900', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, STOP_STATE, SEEK_STATE, 0, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_2000
            * @tc.name      : 020.play->pause->seek->reset
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_2000', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, PAUSE_STATE, SEEK_STATE, 0, RESET_STATE, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_2100
            * @tc.name      : 021.play->pause->seek->stop
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level0
     */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_2100', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, PAUSE_STATE, SEEK_STATE, DURATION_TIME / RAND_NUM,
        STOP_STATE, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_2200
            * @tc.name      : 022.play->pause->play->seek(0)
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_2200', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, PAUSE_STATE, PLAY_STATE, SEEK_STATE, 0, END_STATE];
        await actFun(done);
    })

    /* *
             * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_2300
             * @tc.name      : 023.play->pause->play->seek(0)->stop
             * @tc.desc      : Audio playback control test
             * @tc.size      : MediumTest
             * @tc.type      : Function test
             * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_2300', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, PAUSE_STATE, PLAY_STATE, SEEK_STATE, 0, STOP_STATE, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_2400
            * @tc.name      : 024.play->stop->seek(0)->reset->play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_2400', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, STOP_STATE, SEEK_STATE, 0,
        RESET_STATE, SRC_STATE, PLAY_STATE, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_2500
            * @tc.name      : 025.play->seek(0)
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_2500', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, SEEK_STATE, 0, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_2600
            * @tc.name      : 026.play->stop->seek->pause
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level 3
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_2600', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, STOP_STATE, SEEK_STATE, SEEK_TIME,
        PAUSE_STATE, RESET_STATE, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_2700
            * @tc.name      : 027.play->stop->seek->reset->play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level 3
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_2700', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, STOP_STATE, SEEK_STATE, SEEK_TIME,
        RESET_STATE, SRC_STATE, PLAY_STATE, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_2800
            * @tc.name      : 028.play->seek(duration)
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_2800', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME, FINISH_STATE, END_STATE];
        await actFun(done);
    })

    /* *
             * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_2900
             * @tc.name      : 029.play->seek(out of duration)
             * @tc.desc      : Audio playback control test
             * @tc.size      : MediumTest
             * @tc.type      : Function test
             * @tc.level     : Level 3
     */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_2900', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME + DELTA_TIME,
        FINISH_STATE, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_3000
            * @tc.name      : 030.play->->seek(rand)
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_3000', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME / RAND_NUM, STOP_STATE, END_STATE];
        await actFun(done);
    })

    /* *
               * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_3100
               * @tc.name      : 031.play->pause->seek(0)->play
               * @tc.desc      : Audio playback control test
               * @tc.size      : MediumTest
               * @tc.type      : Function test
               * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_3100', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, PAUSE_STATE, SEEK_STATE, 0, PLAY_STATE, RESET_STATE, END_STATE];
        await actFun(done);
    })

    /* *
                * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_3200
                * @tc.name      : 032.play->pause->seek(duration)->play
                * @tc.desc      : Audio playback control test
                * @tc.size      : MediumTest
                * @tc.type      : Function test
                * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_3200', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, PAUSE_STATE, SEEK_STATE, DURATION_TIME,
        FINISH_STATE, RESET_STATE, END_STATE];
        await actFun(done);
    })

    /* *
               * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_3300
               * @tc.name      : 033.play->pause->seek(out of duration)->play
               * @tc.desc      : Audio playback control test
               * @tc.size      : MediumTest
               * @tc.type      : Function test
               * @tc.level     : Level 3
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_3300', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, PAUSE_STATE, SEEK_STATE, DURATION_TIME + DELTA_TIME,
        FINISH_STATE, RESET_STATE, END_STATE];
        await actFun(done);
    })

    /* *
                * @tc.number    : SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_3400
                * @tc.name      : 034.play->seek(out of duration)->play
                * @tc.desc      : Audio playback control test
                * @tc.size      : MediumTest
                * @tc.type      : Function test
                * @tc.level     : Level 3
    */
    it('SUB_MEDIA_PLAYER_DATA_SOURCE_AUDIO_FUNCTION_3400', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, SEEK_STATE, DURATION_TIME + DELTA_TIME,
        FINISH_STATE, PLAY_STATE, RESET_STATE, END_STATE];
        await actFun(done);
    })

})
