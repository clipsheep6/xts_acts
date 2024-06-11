/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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

import * as mediaTestBase from '../../../../../../MediaTestBase.js';
import media from '@ohos.multimedia.media'
import { AV_PLAYER_STATE, setSource } from '../../../../../../AVPlayerTestBase.js';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';

export default function AVPlayerMultiTrackTest() {
    describe('AVPlayerMultiTrackTest', function () {
        const VIDEO_SOURCE = 'H264_AAC_multi_track.mp4';
        const VIDEO_NOAUDIO = 'H264_NONE.mp4';
        const PLAY_TIME = 5000;
        const LOOPCNT = 5;
        const NOAUDIOTRACK = -1;
        let avFd;
        let audioFd;
        let videoFd;
        let avPlayer;
        let audioTrackList = new Array();
        let selectedTrack;
        let currentTrack;
        let defaultTrack;
        let expectrack;
        let surfaceID = globalThis.value;
        let changeRepeatly = false;

        function loger(caseName) {
            return {
                myName: caseName,
                log: function (msg) {
                    console.info(this.myName + ' ' + msg);
                }
            }
        }

        beforeAll(async function() {
            console.info('beforeAll case');
            await mediaTestBase.getMutiTrackRawFd(VIDEO_SOURCE).then((res) => {
                avFd = res;
            });
            await mediaTestBase.getStageFileDescriptor(VIDEO_NOAUDIO).then((res) => {
                videoFd = res;
            });
        })

        beforeEach(async function() {
            console.info('beforeEach case');
            audioTrackList = new Array();
            selectedTrack = undefined;
            changeRepeatly = false;
        })

        afterEach(async function() {
            if (avPlayer != null) {
                await avPlayer.release().then(() => {
                }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
            }
            console.info('afterEach case');
        })

        afterAll(async function() {
            console.info('afterAll case');
            await mediaTestBase.closeFileDescriptor(VIDEO_SOURCE);
            await mediaTestBase.closeFileDescriptor(VIDEO_NOAUDIO);
        })

        function printFailureCallback(error) {
            console.info(`case failureCallback promise called,errMessage is ${error.message}`);
        }

        function printCatchCallback(error) {
            console.info(`case error catch called,errMessage is ${error.message}`);
        }

        async function getAudioTracks(logger) {
            console.info('case to getTrackDescription');
            await avPlayer.getTrackDescription().then((arrayList) => {
                console.info('case getTrackDescription called!!');
                if (typeof (arrayList) != 'undefined') {
                    console.info('case arrayList.length is  ' + arrayList.length);
                    for (let i = 0; i < arrayList.length; i++) {
                        console.info('case language_code is  ' + arrayList[i]['language_code']);
                        if (arrayList[i]['track_type'] == 0) {
                            audioTrackList.push(arrayList[i]['track_index']);
                        }
                    }
                } else {
                    console.info('case getTrackDescription is failed');
                    expect().assertFail();
                }
            })
            console.info('case audioTrackList is: ' + audioTrackList);
            await avPlayer.getCurrentTrack(0).then((index) => {
                logger.log(`case default audio track index is ${index}`);
                defaultTrack = index;
            }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        }

        async function getCurrentAudioTrack(logger) {
            mediaTestBase.msleepAsync(2000);
            await avPlayer.getCurrentTrack(0).then((index) => {
                logger.log(`case current audio track index is ${index}`);
                currentTrack = index;
                logger.log(`getCurrentAudioTrack ${currentTrack} ${selectedTrack}`);
                expect(currentTrack).assertEqual(defaultTrack);
            }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        }

        async function getThenDeselectTrack(logger) {
            await avPlayer.getCurrentTrack(0).then((index) => {
                currentTrack = index;
                logger.log(`getThenDeselectTrack ${currentTrack} ${selectedTrack}`);
                avPlayer.deselectTrack(currentTrack);
            }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        }

        async function getAndOperateAudioTrack(logger, deselect) {
            mediaTestBase.msleepAsync(1000);
            await avPlayer.getCurrentTrack(0, (err, index) => {
                if (err == null) {
                    currentTrack = index;
                    for(let i = 0; i < audioTrackList.length; i++) {
                        if (audioTrackList[i] != currentTrack) {
                            selectedTrack = audioTrackList[i];
                            logger.log('case new audio track is:' + selectedTrack);
                            avPlayer.selectTrack(selectedTrack);
                            expectrack = selectedTrack;
                            break;
                        } else {
                            continue;
                        }
                    }
                    logger.log(`getAndOperateAudioTrack select operation: ${currentTrack} ${selectedTrack}`);
                    expect(currentTrack != selectedTrack).assertTrue();
                    mediaTestBase.msleepAsync(3000);
                    if (deselect) {
                        avPlayer.deselectTrack(selectedTrack);
                        currentTrack = index;
                        logger.log(`getAndOperateAudioTrack deselect operation: ${currentTrack} ${selectedTrack}`);
                    } 
                } else {
                    console.error('getCurrentTrack failed and error is ' + err.message);
                }
            });
        }

        async function resetAndCallbackOff() {
            console.info('case now stopped, to reset');
            await avPlayer.reset().then(() => {
                console.info('case reset AVPlayer success');
            }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
            avPlayer.off('stateChange');
            avPlayer.off('trackChange');
            avPlayer.off('error');
            avPlayer.off('endOfStream');
            console.info('case now stopped, to release');
            await avPlayer.release().then(() => {
                console.info('case release AVPlayer success');
            }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        }

        async function testChangeTrack(fd, playedOp, pausedOp, caseNumber, logger) {
            let trackChangeCount = 0;
            await media.createAVPlayer().then((video) => {
                if (typeof(video) != 'undefined') {
                    logger.log('case createAVPlayer success');
                    avPlayer = video;
                } else {
                    logger.log('case createAVPlayer failed');
                    expect().assertFail();
                    done();
                }
            }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
            avPlayer.on('stateChange', async (state, reason) => {
                logger.log(`case stateChange called, state is ${state}, reason is ${reason}`);
                switch (state) {
                    case AV_PLAYER_STATE.INITIALIZED:
                        expect(avPlayer.state).assertEqual(AV_PLAYER_STATE.INITIALIZED);
                        if (fd != audioFd) {
                            logger.log('case is videosrc');
                            avPlayer.surfaceId = surfaceID;
                            logger.log(`case avPlayer.surfaceId is ${avPlayer.surfaceId}`);
                        } else {
                            logger.log('case is audiosrc');
                        }
                        await avPlayer.prepare().then(() => {
                            logger.log('case prepare called');
                        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
                        break;
                    case AV_PLAYER_STATE.PREPARED:
                        avPlayer.loop = true;
                        expect(avPlayer.state).assertEqual(AV_PLAYER_STATE.PREPARED);
                        expect(avPlayer.currentTime).assertEqual(0);
                        if (!changeRepeatly) {
                            await avPlayer.play().then(() => {
                            logger.log('case play AVPlayer success');
                        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
                        }
                        break;
                    case AV_PLAYER_STATE.PLAYING:
                        expect(avPlayer.state).assertEqual(AV_PLAYER_STATE.PLAYING);
                        await playedOp();
                        await mediaTestBase.msleepAsync(PLAY_TIME);
                            avPlayer.pause().then(() => {
                            logger.log('case stop called');
                            }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
                        break;
                    case AV_PLAYER_STATE.PAUSED:
                        expect(avPlayer.state).assertEqual(AV_PLAYER_STATE.PAUSED);
                        await pausedOp();
                        break;
                    case AV_PLAYER_STATE.STOPPED:
                        expect(avPlayer.state).assertEqual(AV_PLAYER_STATE.STOPPED);
                        await avPlayer.prepare().then(() => {
                            logger.log('case prepare avPlayer success');
                        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
                        break;
                    case AV_PLAYER_STATE.ERROR:
                        expect(avPlayer.state).assertEqual(AV_PLAYER_STATE.ERROR);
                        expect().assertFail();
                        avPlayer.release().then(() => {
                            logger.log('case release AVPlayer success');
                        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
                        break;
                    default:
                        break;
                    }
            });
            avPlayer.on('trackChange', async (index, isSelection) => {
                logger.log(`case trackChange called, currentTrack is ${index}, isSelection is ${isSelection}`);
                if (caseNumber == "SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0200") {
                    logger.log(`Change audio track ${caseNumber}`);
                    expect(index).assertEqual(defaultTrack);
                } else if (caseNumber == "SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0300"
                    || caseNumber == "SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_0700") {
                    trackChangeCount += 1;
                    if (trackChangeCount == 1 ) {
                        logger.log(`Change audio track ${caseNumber}`);
                        expect(index).assertEqual(expectrack);
                    } 
                    else {
                        logger.log(`Change audio track ${caseNumber}`);
                        expect(index).assertEqual(defaultTrack);
                    }
                } else if (caseNumber == "SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_ABNORMAL_INPUT_0100") {
                    trackChangeCount += 1;
                    if (trackChangeCount <= 6 ) {
                        logger.log(`Change audio track ${caseNumber}`);
                        expect(index).assertEqual(expectrack);
                    } else {
                        logger.log(`Change audio track ${caseNumber}`);
                        expect(index).assertEqual(defaultTrack);
                    }
                } else {
                    logger.log(`Change audio track ${caseNumber}`);
                    expect(index).assertEqual(expectrack);
                }
            });
            avPlayer.on('error', async (err) => {
                logger.log(`case error called, errMessage is ${err.message} ${err.code}`);
                expect(err.code == 401).assertTrue()
            });
            avPlayer.on('speedDone', (speedMode) => {
                logger.log(`case speedDone called, speedMode is ${speedMode}`);
            });
            setSource(avPlayer, fd);
        }
        
        /* *
            * @tc.number    : SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0100
            * @tc.name      : 001.test change default audio track
            * @tc.desc      : test change default audio track
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level0
        */
        it('SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0100', 0, async function (done) {
            let logger = loger("SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0100");
            async function playedOperation() {
                await getAudioTracks(logger);
                await getAndOperateAudioTrack(logger, false);
            }

            async function pausedOperation() {
                await resetAndCallbackOff();
                logger.log('pausedOperation')
                done();
            }

            await testChangeTrack(
                avFd, 
                playedOperation, 
                pausedOperation, 
                "SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0100",
                logger
            );
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0200
            * @tc.name      : 002.test deselect default audio track
            * @tc.desc      : test deselect default audio track
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level1
         */
        it('SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0200', 0, async function (done) {
            let logger = loger("SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0200");
            async function playedOperation() {
                await getAudioTracks(logger);
                await getThenDeselectTrack(logger);
                
            }

            async function pausedOperation() {
                await resetAndCallbackOff();
                done();
            }

            await testChangeTrack(
                avFd, 
                playedOperation, 
                pausedOperation, 
                "SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0200",
                logger
            );
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0300
            * @tc.name      : 003.test select and deselect audio track
            * @tc.desc      : test select and deselect audio track
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level1
        */
        it('SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0300', 0, async function (done) {
            let logger = loger("SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0300");
            async function playedOperation() {
                await getAudioTracks(logger);
                await getAndOperateAudioTrack(logger, true);
            }

            async function pausedOperation() {
                await resetAndCallbackOff();
                done();
            }

            await testChangeTrack(
                avFd, 
                playedOperation, 
                pausedOperation, 
                "SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0300",
                logger
            );
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0500
            * @tc.name      : 005.test Change audio track repeatly
            * @tc.desc      : test Change audio track repeatly
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0500', 0, async function (done) {
            let logger = loger("SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0500");
            let changeCnt = 0;
            async function playedOperation() {
                changeCnt += 1 ;
                logger.log(`changeCnt is ${changeCnt}`);
                if (changeCnt == 1) {
                    await getAudioTracks(logger);
                } else {
                    await getAndOperateAudioTrack(logger, false);
                }
            }

            async function pausedOperation() {
                if (changeCnt < 5) {
                    logger.log('case now paused');
                    await avPlayer.play().then(() => {
                        logger.log('case playing success');
                    }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
                } else {
                    await resetAndCallbackOff();
                    done();
                }
            }
    
            await testChangeTrack(
                avFd, 
                playedOperation, 
                pausedOperation, 
                "SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0500",
                logger
            );
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0600
            * @tc.name      : 006.test Change audio track after re-prepared
            * @tc.desc      : test Change audio track after re-prepared
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0600', 0, async function (done) {
            let logger = loger("SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0600");
            let prepareCnt = 0;
            async function playedOperation() {
                prepareCnt += 1;
                logger.log(`case prepareCnt is ${prepareCnt}`);
                if (prepareCnt == 1) {
                    await getAudioTracks(logger);
                } else {
                    await getAndOperateAudioTrack(logger, false);
                }
            }

            async function pausedOperation() {
                if (prepareCnt <= 1) {
                    logger.log('case now paused');
                    await avPlayer.stop().then(() => {
                        logger.log('case now stopped, to prepare');
                    }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
                } else {
                    await resetAndCallbackOff();
                    done();
                }
            }

            await testChangeTrack(
                avFd, 
                playedOperation, 
                pausedOperation, 
                "SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_FUNC_0600",
                logger
            );
        })


        /* *
            * @tc.number    : SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_0700
            * @tc.name      : 007.test selectTrack、seek and setSpeed
            * @tc.desc      : Local multi-audioTrack video playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_0700', 0, async function (done) {
            let logger = loger("SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_0700");
            async function playedOperation() {
                await getAudioTracks(logger);
                avPlayer.seek(avPlayer.duration / 3);
                avPlayer.setSpeed(media.PlaybackSpeed.SPEED_FORWARD_0_75_X);
                await getAndOperateAudioTrack(logger, true);
            }

            async function pausedOperation() {
                await resetAndCallbackOff();
                done();
            }

            await testChangeTrack(
                avFd, 
                playedOperation, 
                pausedOperation, 
                "SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_0700",
                logger
            );
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_ABNORMAL_INPUT_0100
            * @tc.name      : 008.test selectTrack/deselectTrack/getCurrentTrack invalid input
            * @tc.desc      : test Change audio track after re-prepared
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_ABNORMAL_INPUT_0100', 0, async function (done) {
            const NOAUDIOTRACK = -1;
            let un = undefined;
            let typeInvalid = [-1, 2, 1000000, '', 'aaa', un];
            let logger = loger("SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_ABNORMAL_INPUT_0100");
            async function playedOperation() {
                await getAudioTracks(logger);
                for (let type in typeInvalid) {
                    logger.log(`case current invalid track type in is ${typeInvalid[type]}`);
                    await avPlayer.getCurrentTrack(typeInvalid[type]).then((index) => {
                        console.info(`case current audio track index is ${index}`);
                    }, printFailureCallback).catch(printCatchCallback);
                }
                let trackInvalid = [-1, 0, 1000000, '', 'aaa', un];

                for (let track in trackInvalid) {
                    logger.log(`case current invalid track in is ${trackInvalid[track]}`);
                    await avPlayer.selectTrack(trackInvalid[track]);
                    await getCurrentAudioTrack(logger);
                }

                for (let track in trackInvalid) {
                    logger.log(`case current invalid track in is ${trackInvalid[track]}`);
                    await avPlayer.deselectTrack(trackInvalid[track]);
                    await getCurrentAudioTrack(logger);
                }
            }

            async function pausedOperation() {
                await resetAndCallbackOff();
                done();
            }

            await testChangeTrack(
                avFd, 
                playedOperation, 
                pausedOperation, 
                "SUB_MULTIMEDIA_MEDIA_VIDEO_PLAYER_MULTI_AUDIOTRACK_ABNORMAL_INPUT_0100",
                logger
            );
        })

    })
}
