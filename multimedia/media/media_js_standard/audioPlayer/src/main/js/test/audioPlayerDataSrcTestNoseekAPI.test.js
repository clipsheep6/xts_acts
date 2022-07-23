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


describe('audioPlayerDataSrcTestNoseekAPI', function () {
    let dataSrc = null;
    let audioPlayer = media.createAudioPlayer();
    let readStreamSync = undefined;
    let mySteps = [];
    let pos_ = 0;
    let timeoutTimer = undefined;
    let isPrepared = false;
    const AUDIO_SOURCE = '/files/01.m4a';
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
        if (typeof (audioPlayer) != 'undefined') {
            console.info(' afterEach case2');
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
        var context = featureAbility.getContext();
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
        console.info('yf---001');
        await sleep(SLEEP_TIME);
        console.info('yf---002');
        addTimeoutTimer(done);
        console.info('yf---008');
        nextStep(done);
        console.info('yf---009');
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
                audioPlayer.seek(mySteps[SECOND_INDEX]);
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
            // 判断异常
            if (!buf) {
                console.info('buf not exist');
                return 0;
            }
            //            if (pos != pos_) {
            //                pos = pos_;
            //                console.info('pos error');
            //            }
            //            if (pos > size_) {
            //                console.info('pos > size_');
            //                return;
            //            }
            //            if ((pos + length) > size_) {
            //                length = size_ - pos;
            //                console.info('next size bigger than total size');
            //            }
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
        console.info('yf---005');
        removeTimeoutTimer();
        console.info('yf---006');
        timeoutTimer = setTimeout(() => {
            console.info(' case time out');
            expect().assertFail();
            done();
        }, TIME_OUT);
        console.info('yf---007');
    }

    function removeTimeoutTimer() {
        if (!!timeoutTimer) {
            clearTimeout(timeoutTimer);
            timeoutTimer = undefined;
        }
    }

    async function actFun(done) {
        console.info('yf---003');
        audioPlayer = media.createAudioPlayer();
        if (typeof (audioPlayer) == 'undefined') {
            console.info(' case create player is failed');
            expect().assertFail();
            done();
        }
        setCommonCallback(done);
        console.info('yf---003.1');
        await sleep(SLEEP_TIME);
        console.info('yf---003.2');
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
        console.info('yf---001');
        await sleep(SLEEP_TIME);
        console.info('yf---002');
        addTimeoutTimer(done);
        console.info('yf---008');
        nextStep(done);
        console.info('yf---009');
    }



    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_PAUSE_API_0100
            * @tc.name      : 01.CREATEAUDIOPLAYER->PLAY
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Reliability test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_PAUSE_API_0100', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_PAUSE_API_0200
            * @tc.name      : 02.PLAY->PAUSE
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Reliability test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_PAUSE_API_0200', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, PAUSE_STATE, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_PAUSE_API_0300
            * @tc.name      : 03.STOP->PAUSE
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Reliability test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_PAUSE_API_0300', 0, async function (done) {
        mySteps = [SRC_STATE, STOP_STATE, PAUSE_STATE, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_PAUSE_API_0400
            * @tc.name      : 04.SEEK->PAUSE
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Reliability test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_PAUSE_API_0400', 0, async function (done) {
        mySteps = [SRC_STATE, SEEK_STATE, 200, PAUSE_STATE, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_STOP_API_0500
            * @tc.name      : 05.PLAY->STOP
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Reliability test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_STOP_API_0500', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, STOP_STATE, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_STOP_API_0600
            * @tc.name      : 06.PAUSE->STOP
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Reliability test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_STOP_API_0600', 0, async function (done) {
        mySteps = [SRC_STATE, PAUSE_STATE, STOP_STATE, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RESET_API_0700
            * @tc.name      : 07.PLAY->RESET
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Reliability test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RESET_API_0700', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, RESET_STATE, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RESET_API_0800
            * @tc.name      : 08.PAUSE->RESET
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Reliability test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RESET_API_0800', 0, async function (done) {
        mySteps = [SRC_STATE, PAUSE_STATE, RESET_STATE, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_SETVOLUME_API_0900
            * @tc.name      : 09.->SETVOLUME
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Reliability test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_SETVOLUME_API_0900', 0, async function (done) {
        mySteps = [SRC_STATE, VOLUME_STATE, 0, VOLUME_STATE, MAX_VOLUME, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_SETVOLUME_API_1000
            * @tc.name      : 10.PLAY->SETVOLUME
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Reliability test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_SETVOLUME_API_1000', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, VOLUME_STATE, 0, VOLUME_STATE, MAX_VOLUME, END_STATE];
        await actFun(done);
    })

    /* *
            * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_SETVOLUME_API_1100
            * @tc.name      : 11.PAUSE->SETVOLUME
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Reliability test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_SETVOLUME_API_1100', 0, async function (done) {
        mySteps = [SRC_STATE, PAUSE_STATE, VOLUME_STATE, 0, VOLUME_STATE, MAX_VOLUME, END_STATE];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RELEASE_API_1200
        * tc.name       : 12.PLAY->RELEASE
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RELEASE_API_1200', 0, async function (done) {
        mySteps = [SRC_STATE, PLAY_STATE, RELEASE_STATE, END_STATE];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RELEASE_API_1300
        * @c.name       : 13.PAUSE->RELEASE
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RELEASE_API_1300', 0, async function (done) {
        mySteps = [SRC_STATE, PAUSE_STATE, RELEASE_STATE, END_STATE];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RELEASE_API_1400
        * @c.name       : 14.STOP->RELEASE
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RELEASE_API_1400', 0, async function (done) {
        mySteps = [SRC_STATE, STOP_STATE, RELEASE_STATE, END_STATE];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RELEASE_API_1500
        * @c.name       : 15.RESET->RELEASE
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_RELEASE_API_1500', 0, async function (done) {
        mySteps = [SRC_STATE, RESET_STATE, RELEASE_STATE, END_STATE];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_TIME_API_1600
        * @tc.name      : 16.GET PARAMETERS AFTER CREATEAUDIOPLAYER
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level 3
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_TIME_API_1600', 0, async function (done) {
        console.info('yf---16');
        audioPlayer = media.createAudioPlayer();
        if (typeof (audioPlayer) == 'undefined') {
            console.info(' case create player is failed');
            expect().assertFail();
            done();
        }
        console.info(' case create player is success');
        expect(audioPlayer.src != undefined).assertTrue();
        expect(audioPlayer.loop != undefined).assertTrue();
        expect(audioPlayer.currentTime != undefined).assertTrue();
        expect(audioPlayer.duration != undefined).assertTrue();
        expect(audioPlayer.state != undefined).assertTrue();
        console.info('expect finished');
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_TIME_API_1700
        * @tc.name      : 17.GET PARAMETERS AFTER SRC
        * @tc.desc      : Audio playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level 3
    */
    it('SUB_MEDIA_PLAYER_DATASRC_NOSEEK_AUDIOPLAYER_TIME_API_1700', 0, async function (done) {
        console.info('yf---17');
        audioPlayer = media.createAudioPlayer();
        if (typeof (audioPlayer) == 'undefined') {
            console.info(' case create player is failed');
            expect().assertFail();
            done();
        }
        dataSrc = await media.createAVDataSource();
        audioPlayer.dataSrc = dataSrc;
        console.info(' case create player is success');
        expect(audioPlayer.dataSrc != undefined).assertTrue();
        expect(audioPlayer.loop != undefined).assertTrue();
        expect(audioPlayer.currentTime != undefined).assertTrue();
        expect(audioPlayer.duration != undefined).assertTrue();
        expect(audioPlayer.state != undefined).assertTrue();
        console.info('expect finished');
        done()
    })
})
