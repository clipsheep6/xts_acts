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
import fs from '@ohos.file.fs';

export default function AVPlayerAddSubtitleTest() {
    describe('AVPlayerAddSubtitleTest', function () {
        const VIDEO_SOURCE = 'H264_NONE.mp4';
        const SUBTITLE_SOURCE = 'subtitle.srt';
        let videoFd;
        let avPlayer;
        let surfaceID = globalThis.value;
        let filePath;
        let subtitleDescriptor = { offset: 0 };

        beforeAll(async function() {
            console.info('beforeAll case');
            await mediaTestBase.getStageFileDescriptor(VIDEO_SOURCE).then((res) => {
                videoFd = res;
            });
        })

        beforeEach(async function() {
            console.info('beforeEach case');
        })

        afterEach(async function() {
            if (avPlayer != null) {
                await avPlayer.release().then(() => {
                }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
            }
            if (subtitleDescriptor.fd != undefined) {
                fs.closeSync(subtitleDescriptor.fd);
                subtitleDescriptor.fd = undefined;
            }
            console.info('afterEach case');
        })

        afterAll(async function() {
            console.info('afterAll case');
            await mediaTestBase.closeFileDescriptor(VIDEO_SOURCE);
        })

        async function getFilePath(fileName) {
            let contextStage = globalThis.context;
            let fileDir = contextStage.filesDir
            filePath = fileDir + "/" + fileName;
            console.info(`case in get file path: ${filePath}`)
        }

        async function openSubtitle(path) {
            const file = fs.openSync(path);
            const stats = fs.statSync(path);
            subtitleDescriptor.fd = file.fd;
            subtitleDescriptor.length = stats.size;
            console.info(`case in open subtitle fd: ${subtitleDescriptor.fd}, file size: ${subtitleDescriptor.length}`)
        }

        async function testAddSubtitleFromFd(done, logger) {
            await getFilePath(SUBTITLE_SOURCE);
            await openSubtitle(filePath);  
            try {
                await avPlayer.addSubtitleFromFd(
                    subtitleDescriptor.fd,
                    subtitleDescriptor.offset,
                    subtitleDescriptor.length
                );
            } catch (error) {
                logger.log("add subtitle from fd failed. " + error);
                expect().assertFail();
                done();
            }
        }

        function loger(caseName) {
            return {
                myName: caseName,
                log: function (msg) {
                    console.info(this.myName + ' ' + msg);
                }
            }
        }

        async function resetAndCallbackOff(logger, done) {
            logger.log('case now stopped, to reset');
            await avPlayer.reset().then(() => {
                logger.log('case reset AVPlayer success');
            }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
            avPlayer.off('stateChange');
            avPlayer.off('subtitleUpdate');
            logger.log('case now stopped, to release');
            await avPlayer.release().then(() => {
                logger.log('case release AVPlayer success');
            }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
            expect(true).assertTrue();
            done();
        }

        async function addSubtitleTest(fd, logger, operation, done) {
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
                        if (operation.initOp != undefined) {
                            await operation.initOp();
                        }
                        await avPlayer.prepare().then(() => {
                            logger.log('case AVPlayer change to prepare success.');
                        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
                        break;
                    case AV_PLAYER_STATE.PREPARED:
                        expect(avPlayer.state).assertEqual(AV_PLAYER_STATE.PREPARED);
                        await avPlayer.play().then(() => {
                            logger.log('case AVPlayer change to play success.');
                        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
                        break;
                    case AV_PLAYER_STATE.PLAYING:
                        expect(avPlayer.state).assertEqual(AV_PLAYER_STATE.PLAYING);
                        break;
                    case AV_PLAYER_STATE.PAUSED:
                        expect(avPlayer.state).assertEqual(AV_PLAYER_STATE.PAUSED);
                        break;
                    case AV_PLAYER_STATE.COMPLETED:
                        expect(avPlayer.state).assertEqual(AV_PLAYER_STATE.COMPLETED);
                        await resetAndCallbackOff(logger, done);
                        break;
                    case AV_PLAYER_STATE.STOPPED:
                        expect(avPlayer.state).assertEqual(AV_PLAYER_STATE.STOPPED);
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

            avPlayer.on('subtitleUpdate', async (subtitleInfo) => {
                logger.log(`case subtitleUpdate called, subtitleInfo.text is ${subtitleInfo.text}`);
                logger.log(`case subtitleUpdate called, subtitleInfo.startTime is ${subtitleInfo.startTime}`);
                logger.log(`case subtitleUpdate called, subtitleInfo.duration is ${subtitleInfo.duration}`);
                expect(subtitleInfo != undefined).assertTrue();
            });

            setSource(avPlayer, fd);
            if (operation.sourceOp != undefined) {
                await operation.sourceOp();
            }
        }

        /* *
            * @tc.number    : SUB_MULTIMEDIA_MEDIA_AVPLAYER_ADD_SUBTITLE_FUNC_0100
            * @tc.name      : 001.test avPlayer interface addSubtitleFdSrc after set source
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
            let operation = { 
                sourceOp: function() {
                    testAddSubtitleFromFd(done, logger)
                }
            }
            await addSubtitleTest(
                videoFd,
                logger,
                operation,
                done
            );
        });

         /* *
            * @tc.number    : SUB_MULTIMEDIA_MEDIA_AVPLAYER_ADD_SUBTITLE_FUNC_0200
            * @tc.name      : 002.test avPlayer interface addSubtitleFdSrc after set init
            * @tc.desc      : 1. create avPlayer
            *                 2. set data source
            *                 3. register subtitleUpdate event
            *                 4. call addSubtitleFdSrc to add external subtitle track
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level0
        */
         it('SUB_MULTIMEDIA_MEDIA_AVPLAYER_ADD_SUBTITLE_FUNC_0200', 0, async function (done) {
            let logger = loger("SUB_MULTIMEDIA_MEDIA_AVPLAYER_ADD_SUBTITLE_FUNC_0200");
            let operation = { 
                initOp: function() {
                    testAddSubtitleFromFd(done, logger)
                } 
            }

            await addSubtitleTest(
                videoFd,
                logger,
                operation,
                done
            );
        });
    })
}