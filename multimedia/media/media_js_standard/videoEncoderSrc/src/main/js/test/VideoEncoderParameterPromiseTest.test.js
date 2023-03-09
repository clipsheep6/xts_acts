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

import media from '@ohos.multimedia.media'
import mediademo from '@ohos.multimedia.mediademo'
import Fileio from '@ohos.fileio'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'

describe('videoEncoderParameterPromise', function () {
    const ROOT = '/data/app/el1/bundle/results/';
    const BASIC_PATH = ROOT + 'video_reliability_promise_';
    let videoEncodeProcessor;
    let mediaTest = mediademo.createMediaTest();
    let surfaceID = '';
    let outputQueue = [];
    let outputCnt = 0;
    let frameTotal = 100;
    let frameCountOut = 0;
    let flushAtEOS = false;
    let sawOutputEOS = false;
    let needGetMediaDes = false;
    let workDoneAtEOS = false;
    const END = 0;
    const CONFIGURE = 1;
    const GETSURFACE = 2;
    const SETSTREAMPARAM = 3;
    const PREPARE = 4;
    const STARTSTREAM = 5;
    const STOPSTREAM = 6;
    const START = 7;
    const FLUSH = 8;
    const STOP = 9;
    const RESET = 10;
    const RELEASE = 11;
    const HOLDON = 12;
    const ERROR = 13;
    const WAITFORALLOUTS = 14;
    const JUDGE_EOS = 15;
    const WAITTIME = 3000;
    let mime = 'video/avc';
    let name = 'openh264enc';
    let width = 320;
    let height = 240;
    let frameRate = 30;
    let mediaDescription = {
        'width': width,
        'height': height,
        'pixel_format': 3,
        'frame_rate': frameRate,
        'codec_profile': media.AVCProfile.AVC_PROFILE_HIGH,
        'video_encode_bitrate_mode': media.VideoEncodeBitrateMode.VBR
    };

    beforeAll(function () {
        console.info('beforeAll case');
    })

    beforeEach(async function () {
        console.info('beforeEach case');
        await msleep(1000).then(() => {
        }, failCallback).catch(failCatch);
        videoEncodeProcessor = null;
        surfaceID = '';
        outputQueue = [];
        outputCnt = 0;
        flushAtEOS = false;
        sawOutputEOS = false;
        needGetMediaDes = false;
        workDoneAtEOS = false;
        width = 320;
        height = 240;
        frameRate = 30;
        frameTotal = 100;
    })

    afterEach(async function () {
        console.info('afterEach case');
        if (videoEncodeProcessor != null) {
            await videoEncodeProcessor.release().then(() => {
                console.info(`case release 1`);
            }, failCallback).catch(failCatch);
            videoEncodeProcessor = null;
        }
    })

    afterAll(function () {
        console.info('afterAll case');
    })

    let failCallback = function (err) {
        console.info(' failCallback case callback err : ' + err);
        expect(err).assertUndefined();
    }

    let failCallbackTrue = function (err, mySteps, done) {
        console.info('failCallbackTrue case callback err : ' + err);
        expect(err != undefined).assertTrue();
        nextStep(mySteps, done);
    }

    let failCatch = function (err) {
        console.info('case catch err : ' + err);
        expect(err).assertUndefined();
    }

    function msleep(ms) {
        return new Promise((resolve) => setTimeout(resolve, ms));
    }

    function resetParam() {
        outputQueue = [];
        outputCnt = 0;
        frameTotal = 100;
        flushAtEOS = false;
        sawOutputEOS = false;
        needGetMediaDes = false;
        workDoneAtEOS = false;
    }

    function writeFile(path, buf, len) {
        try {
            let writeStream = Fileio.createStreamSync(path, 'ab+');
            let num = writeStream.writeSync(buf, { length: len });
            writeStream.flushSync();
            writeStream.closeSync();
        } catch (e) {
            console.info(e)
        }
    }

    function sleep(time) {
        return new Promise((resolve) => setTimeout(resolve, time));
    }

    function wait(time) {
        for (let t = Date.now(); Date.now() - t <= time;);
    }

    async function nextStep(mySteps, done) {
        if (mySteps[0] == END) {
            done();
        }
        switch (mySteps[0]) {
            case CONFIGURE:
                mySteps.shift();
                console.info(`case to configure`);
                await toConfigure(mySteps, done);
                break;
            case GETSURFACE:
                mySteps.shift();
                console.info(`case to getInputSurface`);
                await toGetInputSurface();
                nextStep(mySteps, done);
                break;
            case SETSTREAMPARAM:
                mySteps.shift();
                toSetStreamParam();
                nextStep(mySteps, done);
                break;
            case PREPARE:
                mySteps.shift();
                console.info(`case to prepare`);
                await toPrepare(mySteps, done);
                break;
            case STARTSTREAM:
                mySteps.shift();
                console.info(`case to start stream`);
                toStartStream();
                nextStep(mySteps, done);
                break;
            case STOPSTREAM:
                mySteps.shift();
                console.info(`case to stop stream`);
                mediaTest.closeStream(surfaceID);
                nextStep(mySteps, done);
                break;
            case START:
                mySteps.shift();
                console.info(`case to start`);
                await toStart(mySteps, done);
                break;
            case FLUSH:
                mySteps.shift();
                console.info(`case to flush`);
                await toFlush(mySteps, done);
                break;
            case STOP:
                mySteps.shift();
                console.info(`case to stop`);
                await toStop(mySteps, done);
                break;
            case RESET:
                mySteps.shift();
                console.info(`case to reset`);
                await toReset();
                nextStep(mySteps, done);
                break;
            case RELEASE:
                mySteps.shift();
                console.info(`case to release`);
                await toRelease(mySteps, done);
                break;
            case HOLDON:
                mySteps.shift();
                setTimeout(() => {
                    nextStep(mySteps, done);
                }, WAITTIME);
                break;
            case WAITFORALLOUTS:
                mySteps.shift();
                console.info(`case wait for all outputs`);
                break;
            case JUDGE_EOS:
                mySteps.shift();
                console.info(`case judge EOS state`);
                expect(sawOutputEOS).assertTrue();
                nextStep(mySteps, done);
                break;
            default:
                break;
        }
    }
    async function dequeueOutputs(path, done) {
        while (outputQueue.length > 0) {
            let outputObject = outputQueue.shift();
            outputCnt += 1;
            if (outputObject.flags == 1) {
                console.info('saw output EOS');
                sawOutputEOS = true;
                if (workDoneAtEOS) {
                    mediaTest.closeStream(surfaceID);
                    await toReset();
                    await videoEncodeProcessor.release().then(() => {
                        console.info('case release success');
                    }, failCallback).catch(failCatch);
                    videoEncodeProcessor = null;
                    done();
                } else {
                    console.info('sawOutputEOS = true;');
                }
            } else {
                console.info('not last frame, continue');
                videoEncodeProcessor.freeOutputBuffer(outputObject).then(() => {
                    console.info('release output success');
                    frameCountOut++;
                    console.log('release output count:' + frameCountOut);
                })
            }
        }
    }

    function setCallback(path, done) {
        console.info('case callback');
        videoEncodeProcessor.on('newOutputData', async (outBuffer) => {
            console.info('outputBufferAvailable');
            console.info('outBuffer.flags :' + outBuffer.flags);
            if (needGetMediaDes) {
                videoEncodeProcessor.getOutputMediaDescription().then((MediaDescription) => {
                    console.info('get OutputMediaDescription success');
                    console.info('get outputMediaDescription : ' + MediaDescription);
                    needGetMediaDes = false;
                }, failCallback).catch(failCatch);
            }
            outputQueue.push(outBuffer);
            await dequeueOutputs(path, done);
        });

        videoEncodeProcessor.on('error', (err) => {
            console.info('case error called,errName is' + err);
        });
        videoEncodeProcessor.on('streamChanged', (format) => {
            console.info('Output format changed: ' + format);
        });
    }

    async function createVideoEncoder(savePath, mySteps, done) {
        await media.createVideoEncoderByMime(mime).then((processor) => {
            console.info(`case createVideoEncoder 1`);
            videoEncodeProcessor = processor;
            setCallback(savePath, done);
            console.info('case start api test');
            nextStep(mySteps, done);
        }, failCallback).catch(failCatch);
    }

    async function toCreateByName(name, done) {
        await media.createVideoEncoderByName(name).then((processor) => {
            if (typeof (processor) != 'undefined') {
                videoEncodeProcessor = processor;
                console.info('in case : createVideoEncoderByName success');
            } else {
                console.info('in case : createVideoEncoderByName fail');
                expect().assertFail();
                done();
            }
        })
    }

    function toSetStreamParam() {
        mediaTest.setResolution(width, height);
        mediaTest.setFrameRate(frameRate);
        mediaTest.setFrameCount(frameTotal);
    }

    async function toGetInputSurface() {
        await videoEncodeProcessor.getInputSurface().then((inputSurface) => {
            expect(inputSurface != undefined).assertTrue();
            surfaceID = inputSurface;
        }, failCallback).catch(failCatch);
    }

    function toStartStream() {
        mediaTest.isStart = 1;
        mediaTest.startStream(surfaceID);
    }

    async function toConfigure(mySteps, done) {
        if (mySteps[0] == ERROR) {
            mySteps.shift();
            console.info(`case to configure 2`);
            await videoEncodeProcessor.configure(mediaDescription).then(() => {
                console.info(`case configure error 1`);
                expect().assertFail();
            }, (err) => {
                failCallbackTrue(err, mySteps, done)
            }).catch(failCatch);
        } else {
            await videoEncodeProcessor.configure(mediaDescription).then(() => {
                console.info('case configure success');
            }, failCallback).catch(failCatch);
        }
        nextStep(mySteps, done);
    }

    async function toPrepare(mySteps, done) {
        if (mySteps[0] == ERROR) {
            mySteps.shift();
            console.info(`case to prepare 2`);
            await videoEncodeProcessor.prepare().then(() => {
                console.info(`case prepare error 1`);
                expect().assertFail();
            }, (err) => {
                failCallbackTrue(err, mySteps, done)
            }).catch(failCatch);
        } else {
            await videoEncodeProcessor.prepare().then(() => {
                console.info('case prepare success');
            }, failCallback).catch(failCatch);
        }
        nextStep(mySteps, done);
    }

    async function toStart(mySteps, done) {
        if (mySteps[0] == ERROR) {
            mySteps.shift();
            console.info(`case to start 2`);
            await videoEncodeProcessor.start().then(() => {
                console.info(`case start error 1`);
                expect().assertFail();
            }, (err) => {
                failCallbackTrue(err, mySteps, done)
            }).catch(failCatch);
        } else {
            if (sawOutputEOS) {
                resetParam();
                workDoneAtEOS = true;
            }
            await videoEncodeProcessor.start().then(() => {
                console.info('case start success');
            }, failCallback).catch(failCatch);
        }
        nextStep(mySteps, done);
    }

    async function toFlush(mySteps, done) {
        if (mySteps[0] == ERROR) {
            mySteps.shift();
            console.info(`case to flush 2`);
            await videoEncodeProcessor.flush().then(() => {
                console.info(`case flush error 1`);
                expect().assertFail();
            }, (err) => {
                failCallbackTrue(err, mySteps, done)
            }).catch(failCatch);
        } else {
            await videoEncodeProcessor.flush().then(() => {
                console.info('case flush success');
            }, failCallback).catch(failCatch);
            if (flushAtEOS) {
                mediaTest.closeStream(surfaceID);
                resetParam();
                workDoneAtEOS = true;
            }
        }
        nextStep(mySteps, done);
    }

    async function toStop(mySteps, done) {
        if (mySteps[0] == ERROR) {
            mySteps.shift();
            console.info(`case to stop 2`);
            await videoEncodeProcessor.stop().then(() => {
                console.info(`case stop error 1`);
                expect().assertFail();
            }, (err) => {
                failCallbackTrue(err, mySteps, done)
            }).catch(failCatch);
        } else {
            await videoEncodeProcessor.stop().then(() => {
                console.info('case stop success');
            }, failCallback).catch(failCatch);
        }
        nextStep(mySteps, done);
    }

    async function toReset() {
        await videoEncodeProcessor.reset().then(() => {
            console.info('case reset success');
        }, failCallback).catch(failCatch);
    }

    async function toRelease(mySteps, done) {
        if (mySteps[0] == ERROR) {
            mySteps.shift();
            console.info(`case to relase 2`);
            await videoEncodeProcessor.release().then(() => {
                console.info(`case release error 1`);
                expect().assertFail();
            }, (err) => {
                failCallbackTrue(err, mySteps, done)
            }).catch(failCatch);
            videoEncodeProcessor = null;
        } else {
            await videoEncodeProcessor.release().then(() => {
                console.info('case release success');
            }, failCallback).catch(failCatch);
            if (mySteps[0] != RELEASE) {
                videoEncodeProcessor = null;
            }
        }
        nextStep(mySteps, done);
    }

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_PROMISE_0100
        * @tc.name      : create -> configure
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_PROMISE_0100', 0, async function (done) {
        let savePath = BASIC_PATH + 'configure_0100.h264';
        let mySteps = new Array(CONFIGURE, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_PROMISE_0200
        * @tc.name      : prepare -> configure
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_PROMISE_0200', 0, async function (done) {
        let savePath = BASIC_PATH + 'configure_0200.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, CONFIGURE, ERROR, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_PROMISE_0300
        * @tc.name      : start -> configure
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_PROMISE_0300', 0, async function (done) {
        let savePath = BASIC_PATH + 'configure_0300.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM,
            START, CONFIGURE, ERROR, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_PROMISE_0400
        * @tc.name      : flush -> configure
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_PROMISE_0400', 0, async function (done) {
        let savePath = BASIC_PATH + 'configure_0400.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, 
            START, FLUSH, CONFIGURE, ERROR, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_PROMISE_0500
        * @tc.name      : stop -> configure
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_PROMISE_0500', 0, async function (done) {
        let savePath = BASIC_PATH + 'configure_0500.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, 
            START, STOP, CONFIGURE, ERROR, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_PROMISE_0600
        * @tc.name      : EOS -> configure
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_PROMISE_0600', 0, async function (done) {
        let savePath = BASIC_PATH + 'configure_0600.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, START, STARTSTREAM,
            HOLDON, JUDGE_EOS, CONFIGURE, ERROR, STOPSTREAM, END);
        frameTotal = 2;
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_PROMISE_0700
        * @tc.name      : reset -> configure
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_PROMISE_0700', 0, async function (done) {
        let savePath = BASIC_PATH + 'configure_0700.h264';
        let mySteps = new Array(RESET, CONFIGURE, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_PROMISE_0800
        * @tc.name      : configure -> configure
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_PROMISE_0800', 0, async function (done) {
        let savePath = BASIC_PATH + 'configure_0800.h264';
        let mySteps = new Array(CONFIGURE, CONFIGURE, ERROR, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_PROMISE_0900
        * @tc.name      : configure -> reset -> configure
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_PROMISE_0900', 0, async function (done) {
        let savePath = BASIC_PATH + 'configure_0900.h264';
        let mySteps = new Array(CONFIGURE, RESET, CONFIGURE, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_PROMISE_0100
        * @tc.name      : create -> prepare
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_PROMISE_0100', 0, async function (done) {
        let savePath = BASIC_PATH + 'prepare_0100.h264';
        let mySteps = new Array(PREPARE, ERROR, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_PROMISE_0200
        * @tc.name      : configure -> prepare
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_PROMISE_0200', 0, async function (done) {
        let savePath = BASIC_PATH + 'prepare_0200.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_PROMISE_0300
        * @tc.name      : prepare -> prepare
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_PROMISE_0300', 0, async function (done) {
        let savePath = BASIC_PATH + 'prepare_0300.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, PREPARE, ERROR, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_PROMISE_0400
        * @tc.name      : start -> prepare
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_PROMISE_0400', 0, async function (done) {
        let savePath = BASIC_PATH + 'prepare_0400.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, START,
            PREPARE, ERROR, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_PROMISE_0500
        * @tc.name      : flush -> prepare
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_PROMISE_0500', 0, async function (done) {
        let savePath = BASIC_PATH + 'prepare_0500.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, START, FLUSH,
            PREPARE, ERROR, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_PROMISE_0600
        * @tc.name      : stop -> prepare
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_PROMISE_0600', 0, async function (done) {
        let savePath = BASIC_PATH + 'prepare_0600.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, START, STOP,
            PREPARE, ERROR, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_PROMISE_0700
        * @tc.name      : EOS -> prepare
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_PROMISE_0700', 0, async function (done) {
        let savePath = BASIC_PATH + 'prepare_0700.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, START, STARTSTREAM, HOLDON,
            JUDGE_EOS, PREPARE, ERROR, STOPSTREAM, END);
        frameTotal = 2;
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_PROMISE_0800
        * @tc.name      : reset -> prepare
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_PROMISE_0800', 0, async function (done) {
        let savePath = BASIC_PATH + 'prepare_0800.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, START, RESET,
            PREPARE, ERROR, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_PROMISE_0100
        * @tc.name      : create -> start
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_PROMISE_0100', 0, async function (done) {
        let savePath = BASIC_PATH + 'start_0100.h264';
        let mySteps = new Array(START, ERROR, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_PROMISE_0200
        * @tc.name      : configure -> start
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_PROMISE_0200', 0, async function (done) {
        let savePath = BASIC_PATH + 'start_0200.h264';
        let mySteps = new Array(CONFIGURE, START, ERROR, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_PROMISE_0300
        * @tc.name      : prepare -> start
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_PROMISE_0300', 0, async function (done) {
        let savePath = BASIC_PATH + 'start_0300.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM,
            START, WAITFORALLOUTS);
        workDoneAtEOS = true;
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_PROMISE_0400
        * @tc.name      : start -> start
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_PROMISE_0400', 0, async function (done) {
        let savePath = BASIC_PATH + 'start_0400.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, 
            START, START, ERROR, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_PROMISE_0500
        * @tc.name      : flush -> start
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_PROMISE_0500', 0, async function (done) {
        let savePath = BASIC_PATH + 'start_0500.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, 
            START, FLUSH, START, ERROR, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_PROMISE_0600
        * @tc.name      : stop -> start
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_PROMISE_0600', 0, async function (done) {
        let savePath = BASIC_PATH + 'start_0600.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, 
            START, STOP, START, WAITFORALLOUTS);
        workDoneAtEOS = true;
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_PROMISE_0700
        * @tc.name      : EOS -> start
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_PROMISE_0700', 0, async function (done) {
        let savePath = BASIC_PATH + 'start_0700.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, START,
            STARTSTREAM, HOLDON, JUDGE_EOS, START, ERROR, STOPSTREAM, END);
        frameTotal = 2;
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_PROMISE_0800
        * @tc.name      : reset -> start
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_PROMISE_0800', 0, async function (done) {
        let savePath = BASIC_PATH + 'start_0800.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, 
            START, RESET, START, ERROR, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_PROMISE_0100
        * @tc.name      : create -> flush
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_PROMISE_0100', 0, async function (done) {
        let savePath = BASIC_PATH + 'flush_0100.h264';
        let mySteps = new Array(FLUSH, ERROR, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_PROMISE_0200
        * @tc.name      : configure -> flush
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_PROMISE_0200', 0, async function (done) {
        let savePath = BASIC_PATH + 'flush_0200.h264';
        let mySteps = new Array(CONFIGURE, FLUSH, ERROR, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_PROMISE_0300
        * @tc.name      : prepare -> flush
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_PROMISE_0300', 0, async function (done) {
        let savePath = BASIC_PATH + 'flush_0300.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, FLUSH, ERROR, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_PROMISE_0400
        * @tc.name      : start -> flush
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_PROMISE_0400', 0, async function (done) {
        let savePath = BASIC_PATH + 'flush_0400.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, START,
            STARTSTREAM, FLUSH, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_PROMISE_0500
        * @tc.name      : flush -> flush
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_PROMISE_0500', 0, async function (done) {
        let savePath = BASIC_PATH + 'flush_0500.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM,
            START, FLUSH, FLUSH, WAITFORALLOUTS);
        workDoneAtEOS = true;
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_PROMISE_0600
        * @tc.name      : stop -> flush
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_PROMISE_0600', 0, async function (done) {
        let savePath = BASIC_PATH + 'flush_0600.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, 
            START, STOP, FLUSH, ERROR, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_PROMISE_0700
        * @tc.name      : EOS -> flush
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_PROMISE_0700', 0, async function (done) {
        let savePath = BASIC_PATH + 'flush_0700.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, START,
            STARTSTREAM, HOLDON, JUDGE_EOS, FLUSH, STOPSTREAM, END);
        frameTotal = 2;
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_PROMISE_0800
        * @tc.name      : reset -> flush
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_PROMISE_0800', 0, async function (done) {
        let savePath = BASIC_PATH + 'flush_0800.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, 
            START, RESET, FLUSH, ERROR, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_PROMISE_0100
        * @tc.name      : create -> stop
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_PROMISE_0100', 0, async function (done) {
        let savePath = BASIC_PATH + 'stop_0100.h264';
        let mySteps = new Array(STOP, ERROR, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_PROMISE_0200
        * @tc.name      : configure -> stop
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_PROMISE_0200', 0, async function (done) {
        let savePath = BASIC_PATH + 'stop_0200.h264';
        let mySteps = new Array(CONFIGURE, STOP, ERROR, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_PROMISE_0300
        * @tc.name      : prepare -> stop
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_PROMISE_0300', 0, async function (done) {
        let savePath = BASIC_PATH + 'stop_0300.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STOP, ERROR, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_PROMISE_0400
        * @tc.name      : start -> stop
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_PROMISE_0400', 0, async function (done) {
        let savePath = BASIC_PATH + 'stop_0400.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, 
            START, STOP, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_PROMISE_0500
        * @tc.name      : flush -> stop
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_PROMISE_0500', 0, async function (done) {
        let savePath = BASIC_PATH + 'stop_0500.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, 
            START, FLUSH, STOP, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_PROMISE_0600
        * @tc.name      : stop -> stop
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_PROMISE_0600', 0, async function (done) {
        let savePath = BASIC_PATH + 'stop_0600.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, 
            START, STOP, STOP, ERROR, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_PROMISE_0700
        * @tc.name      : EOS -> stop
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_PROMISE_0700', 0, async function (done) {
        let savePath = BASIC_PATH + 'stop_0700.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, 
            START, STARTSTREAM, HOLDON, JUDGE_EOS, STOP, STOPSTREAM, END);
        frameTotal = 2;
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_PROMISE_0800
        * @tc.name      : reset -> stop
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_PROMISE_0800', 0, async function (done) {
        let savePath = BASIC_PATH + 'stop_0800.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, 
            START, RESET, STOP, ERROR, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_PROMISE_0100
        * @tc.name      : create -> reset
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_PROMISE_0100', 0, async function (done) {
        let savePath = BASIC_PATH + 'reset_0100.h264';
        let mySteps = new Array(RESET, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_PROMISE_0200
        * @tc.name      : configure -> reset
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_PROMISE_0200', 0, async function (done) {
        let savePath = BASIC_PATH + 'reset_0200.h264';
        let mySteps = new Array(CONFIGURE, RESET, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_PROMISE_0300
        * @tc.name      : prepare -> reset
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_PROMISE_0300', 0, async function (done) {
        let savePath = BASIC_PATH + 'reset_0300.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, RESET, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_PROMISE_0400
        * @tc.name      : start -> reset
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_PROMISE_0400', 0, async function (done) {
        let savePath = BASIC_PATH + 'reset_0400.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, 
            START, RESET, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_PROMISE_0500
        * @tc.name      : flush -> reset
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_PROMISE_0500', 0, async function (done) {
        let savePath = BASIC_PATH + 'reset_0500.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, 
            START, FLUSH, RESET, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_PROMISE_0600
        * @tc.name      : stop -> reset
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_PROMISE_0600', 0, async function (done) {
        let savePath = BASIC_PATH + 'reset_0600.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, 
            START, STOP, RESET, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_PROMISE_0700
        * @tc.name      : EOS -> reset
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_PROMISE_0700', 0, async function (done) {
        let savePath = BASIC_PATH + 'reset_0700.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, 
            START, STARTSTREAM, HOLDON, JUDGE_EOS, RESET, STOPSTREAM, END);
        frameTotal = 2;
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_PROMISE_0800
        * @tc.name      : reset -> reset
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_PROMISE_0800', 0, async function (done) {
        let savePath = BASIC_PATH + 'reset_0800.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, 
            START, RESET, RESET, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RELEASE_PAR_PROMISE_0100
        * @tc.name      : create -> release
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RELEASE_PAR_PROMISE_0100', 0, async function (done) {
        let savePath = BASIC_PATH + 'release_0100.h264';
        let mySteps = new Array(RELEASE, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RELEASE_PAR_PROMISE_0200
        * @tc.name      : configure -> release
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RELEASE_PAR_PROMISE_0200', 0, async function (done) {
        let savePath = BASIC_PATH + 'release_0200.h264';
        let mySteps = new Array(CONFIGURE, RELEASE, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RELEASE_PAR_PROMISE_0300
        * @tc.name      : prepare -> release
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RELEASE_PAR_PROMISE_0300', 0, async function (done) {
        let savePath = BASIC_PATH + 'release_0300.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, RELEASE, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RELEASE_PAR_PROMISE_0400
        * @tc.name      : start -> release
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RELEASE_PAR_PROMISE_0400', 0, async function (done) {
        let savePath = BASIC_PATH + 'release_0400.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, 
            START, RELEASE, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RELEASE_PAR_PROMISE_0500
        * @tc.name      : flush -> release
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RELEASE_PAR_PROMISE_0500', 0, async function (done) {
        let savePath = BASIC_PATH + 'release_0500.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, 
            START, FLUSH, RELEASE, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RELEASE_PAR_PROMISE_0600
        * @tc.name      : stop -> release
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RELEASE_PAR_PROMISE_0600', 0, async function (done) {
        let savePath = BASIC_PATH + 'release_0600.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, 
            START, STOP, RELEASE, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RELEASE_PAR_PROMISE_0700
        * @tc.name      : EOS -> release
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RELEASE_PAR_PROMISE_0700', 0, async function (done) {
        let savePath = BASIC_PATH + 'release_0700.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, 
            START, STARTSTREAM, HOLDON, JUDGE_EOS, RELEASE, STOPSTREAM, END);
        frameTotal = 2;
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RELEASE_PAR_PROMISE_0800
        * @tc.name      : release -> release
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RELEASE_PAR_PROMISE_0800', 0, async function (done) {
        let savePath = BASIC_PATH + 'release_0800.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, STARTSTREAM, 
            START, RELEASE, RELEASE, ERROR, STOPSTREAM, END);
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_PAR_PROMISE_0100
        * @tc.name      : EOS -> flush -> stop
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_PAR_PROMISE_0100', 0, async function (done) {
        let savePath = BASIC_PATH + 'eos_0100.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, 
            START, STARTSTREAM, HOLDON, JUDGE_EOS, FLUSH, STOP, STOPSTREAM, END);
        frameTotal = 2;
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_PAR_PROMISE_0200
        * @tc.name      : EOS -> flush -> EOS
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_PAR_PROMISE_0200', 0, async function (done) {
        let savePath = BASIC_PATH + 'eos_0200.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, 
            START, STARTSTREAM, HOLDON, JUDGE_EOS, FLUSH, STARTSTREAM, WAITFORALLOUTS);
        frameTotal = 2;
        flushAtEOS = true;
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_PAR_PROMISE_0300
        * @tc.name      : EOS -> reset -> configure
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_PAR_PROMISE_0300', 0, async function (done) {
        let savePath = BASIC_PATH + 'eos_0300.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, 
            START, STARTSTREAM, HOLDON, JUDGE_EOS, RESET, CONFIGURE, STOPSTREAM, END);
        frameTotal = 2;
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_PAR_PROMISE_0400
        * @tc.name      : EOS -> stop -> start -> EOS
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_PAR_PROMISE_0400', 0, async function (done) {
        let savePath = BASIC_PATH + 'eos_0400.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, START,
            STARTSTREAM, HOLDON, JUDGE_EOS, STOPSTREAM, STOP, START, SETSTREAMPARAM, STARTSTREAM, WAITFORALLOUTS);
        frameTotal = 2;
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_PAR_PROMISE_0500
        * @tc.name      : EOS -> stop -> start -> stop
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_PAR_PROMISE_0500', 0, async function (done) {
        let savePath = BASIC_PATH + 'eos_0500.h264';
        let mySteps = new Array(CONFIGURE, GETSURFACE, SETSTREAMPARAM, PREPARE, 
            START, STARTSTREAM, HOLDON, JUDGE_EOS, STOP, START, STOP, STOPSTREAM, RELEASE, END);
        frameTotal = 2;
        createVideoEncoder(savePath, mySteps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE-RESET_PAR_PROMISE_0100
        * @tc.name      : configure -> reset for 50 times
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE-RESET_PAR_PROMISE_0100', 0, async function (done) {
        await toCreateByName(name, done);
        for (let j = 1; j < 51; j++) {
            console.info('case configure-reset current loop: ' + j);
            await videoEncodeProcessor.configure(mediaDescription).then(() => {
                console.info('case configure success');
            }, failCallback).catch(failCatch);
            await videoEncodeProcessor.reset().then(() => {
                console.info('case reset success');
            }, failCallback).catch(failCatch);
        }
        await videoEncodeProcessor.release().then(() => {
            console.info('case release success');
        }, failCallback).catch(failCatch);
        videoEncodeProcessor = null;
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START-STOP_PAR_PROMISE_0100
        * @tc.name      : start -> stop for 50 times
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START-STOP_PAR_PROMISE_0100', 0, async function (done) {
        await toCreateByName(name, done);
        await videoEncodeProcessor.configure(mediaDescription).then(() => {
            console.info('case configure success');
        }, failCallback).catch(failCatch);
        await toGetInputSurface();
        await videoEncodeProcessor.prepare().then(() => {
            console.info('case prepare success');
        }, failCallback).catch(failCatch);
        for (let j = 1; j < 51; j++) {
            console.info('case start-stop current loop: ' + j);
            await videoEncodeProcessor.start().then(() => {
                console.info('case start success');
            }, failCallback).catch(failCatch);
            await videoEncodeProcessor.stop().then(() => {
                console.info('case stop success');
            }, failCallback).catch(failCatch);
        }
        await videoEncodeProcessor.release().then(() => {
            console.info('case release success');
        }, failCallback).catch(failCatch);
        videoEncodeProcessor = null;
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CREATE-RELEASE_PAR_PROMISE_0100
        * @tc.name      : create -> release for 50 times
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CREATE-RELEASE_PAR_PROMISE_0100', 0, async function (done) {
        for (let j = 1; j < 51; j++) {
            console.info('case create-release current loop: ' + j);
            await toCreateByName(name, done);
            await videoEncodeProcessor.release().then(() => {
                console.info('case release success');
            }, failCallback).catch(failCatch);
            videoEncodeProcessor = null;
        }
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_TOTALLOOP_PAR_PROMISE_0100
        * @tc.name      : total loop for 50 times
        * @tc.desc      : Reliability Test
        * @tc.size      : MediumTest
        * @tc.type      : Reliability
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_TOTALLOOP_PAR_PROMISE_0100', 0, async function (done) {
        for (let j = 1; j < 51; j++) {
            console.info('case create-release current loop: ' + j);
            await toCreateByName(name, done);
            await videoEncodeProcessor.configure(mediaDescription).then(() => {
                console.info('case configure success');
            }, failCallback).catch(failCatch);
            await toGetInputSurface();
            await videoEncodeProcessor.prepare().then(() => {
                console.info('case prepare success');
            }, failCallback).catch(failCatch);
            await videoEncodeProcessor.start().then(() => {
                console.info('case start success');
            }, failCallback).catch(failCatch);
            await videoEncodeProcessor.flush().then(() => {
                console.info('case flush success');
            }, failCallback).catch(failCatch);
            await videoEncodeProcessor.stop().then(() => {
                console.info('case stop success');
            }, failCallback).catch(failCatch);
            await videoEncodeProcessor.reset().then(() => {
                console.info('case reset success');
            }, failCallback).catch(failCatch);
            await videoEncodeProcessor.release().then(() => {
                console.info('case release success');
            }, failCallback).catch(failCatch);
            videoEncodeProcessor = null;
        }
        done();
    })
})
