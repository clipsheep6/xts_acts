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

export default function AVPlayerSubtitleTrackTest() {
    describe('AVPlayerSubtitleTrackTest', function () {
        const VIDEO_NOAUDIO = 'H264_NONE.mp4';
        const PLAY_TIME = 3000;
        let videoFd;
        let textFd;
        let avPlayer;
        let textTrackList = new Array();
        let selectedTrack;
        let currentTrack;
        let defaultTrack;
        let surfaceID = globalThis.value;

        beforeAll(async function() {
            console.info('beforeAll case');
            await mediaTestBase.getStageFileDescriptor(VIDEO_NOAUDIO).then((res) => {
                videoFd = res;
            });
        })

        beforeEach(async function() {
            console.info('beforeEach case');
            textTrackList = new Array();
            selectedTrack = undefined;
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
            await mediaTestBase.closeFileDescriptor(VIDEO_NOAUDIO);
        })

        function loger(caseName) {
            return {
                myName: caseName,
                log: function (msg) {
                    console.info(this.myName + ' ' + msg);
                }
            }
        }

        async function getTextTracks(logger) {
            logger.log('case to getTrackDescription');
            await avPlayer.getTrackDescription().then((arrayList) => {
                logger.log('case getTrackDescription called success.');
                if (typeof (arrayList) != 'undefined') {
                    logger.log('case trackArrayList.length is  ' + arrayList.length);
                    for (let i = 0; i < arrayList.length; i++) {
                        if (arrayList[i]['track_type'] == 2) {
                            textTrackList.push(arrayList[i]['track_index']);
                        }
                    }
                    logger.log('case textTrackList.length is  ' + textTrackList.length);
                } else {
                    logger.log('case getTrackDescription is failed.');
                    expect().assertFail();
                }
            }).catch((error) => {
                logger.log('case getTrackDescription error.' + error.toString());
                expect().assertFail();
            });
            logger.log('case textTrackList is: ' + textTrackList);
            await avPlayer.getCurrentTrack(0).then((index) => {
                logger.log(`case default text track index is ${index}`);
                defaultTrack = index;
            }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        }

        async function getCurrentTextTrack(logger) {
            mediaTestBase.msleepAsync(2000);
            await avPlayer.getCurrentTrack(0).then((index) => {
                logger.log(`case current text track index is ${index}`);
                currentTrack = index;
                logger.log(`getCurrentTextTrack ${currentTrack} ${selectedTrack}`);
                expect(currentTrack).assertEqual(defaultTrack);
            }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        }

        async function addExternalSubtitleTrack(type, logger) {
            logger.log("case addExternalSubtitleTrack way is " + type);
            if (type == "fd") {
                await avPlayer.addSubtitleFdSrc(fdNumber,offset,size,mimeType);
            } else {
                await avPlayer.addSubtitleUrl(url,mimeType);
            }
        }

        async function resetAndCallbackOff(logger) {
            logger.log('case now stopped, to reset');
            await avPlayer.reset().then(() => {
                logger.log('case reset AVPlayer success');
            }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
            avPlayer.off('stateChange');
            avPlayer.off('trackChange');
            avPlayer.off('subtitleUpdate');
            avPlayer.off('error');
            avPlayer.off('endOfStream');
            logger.log('case now stopped, to release');
            await avPlayer.release().then(() => {
                logger.log('case release AVPlayer success');
            }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        }

        async function changeSubtitleTrackTest(fd, logger, preparedOp, stoppedOp, done) {
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
                        avPlayer.surfaceId = surfaceID;
                        await avPlayer.prepare().then(() => {
                            logger.log('case AVPlayer change to prepare success.');
                        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
                        break;
                    case AV_PLAYER_STATE.PREPARED:
                        expect(avPlayer.state).assertEqual(AV_PLAYER_STATE.PREPARED);
                        expect(avPlayer.currentTime).assertEqual(0);
                        if (preparedOp != undefined) {
                            await preparedOp();
                        }
                        await avPlayer.play().then(() => {
                            logger.log('case AVPlayer change to play success.');
                        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
                        break;
                    case AV_PLAYER_STATE.PLAYING:
                        expect(avPlayer.state).assertEqual(AV_PLAYER_STATE.PLAYING);
                        await mediaTestBase.msleepAsync(PLAY_TIME);
                        break;
                    case AV_PLAYER_STATE.PAUSED:
                        expect(avPlayer.state).assertEqual(AV_PLAYER_STATE.PAUSED);
                        break;
                    case AV_PLAYER_STATE.STOPPED:
                        expect(avPlayer.state).assertEqual(AV_PLAYER_STATE.STOPPED);
                        if (stoppedOp != undefined) {
                            await stoppedOp();
                        }
                        break;
                    case AV_PLAYER_STATE.ERROR:
                        expect(avPlayer.state).assertEqual(AV_PLAYER_STATE.ERROR);
                        expect().assertFail();
                        avPlayer.release().then(() => {
                            logger.log('case release AVPlayer success');
                        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
                        done();
                        break;
                    default:
                        break;
                    }
            });
            avPlayer.on('trackChange', async (index, isSelection) => {
                logger.log(`case trackChange called, currentTrack is ${index}, isSelection is ${isSelection}`);
            });
            avPlayer.on('subtitleUpdate', async (subtitleInfo) => {
                logger.log(`case subtitleUpdate called, subtitleInfo.text is ${subtitleInfo.text}`);
                logger.log(`case subtitleUpdate called, subtitleInfo.pts is ${subtitleInfo.pts}`);
                logger.log(`case subtitleUpdate called, subtitleInfo.duration is ${subtitleInfo.duration}`);
                expect(subtitleInfo != undefined).assertTrue();
                done();
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
            * @tc.number    : SUB_MULTIMEDIA_MEDIA_AVPLAYER_ADD_SUBTITLE_FUNC_0100
            * @tc.name      : 008.test avPlayer interface addSubtitleFdSrc
            * @tc.desc      : 1. create avPlayer
            *                 2. set data source
            *                 3. register subtitleUpdate event
            *                 4. call addSubtitleFdSrc to add external subtitle track
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level0
        */
        it('SUB_MULTIMEDIA_MEDIA_AVPLAYER_ADD_SUBTITLE_FUNC_0100', 0, async function (done) {
            let logger = loger("SUB_MULTIMEDIA_MEDIA_AVPLAYER_ADD_SUBTITLE_FUNC_0100");
            async function preparedOperation() {
                await addExternalSubtitleTrack('fd', logger);
            }

            async function stoppedOperation() {
                resetAndCallbackOff(logger);
            }

            await changeSubtitleTrackTest(
                videoFd,
                logger,
                preparedOperation,
                stoppedOperation,
                done
            );
        });
    })
}