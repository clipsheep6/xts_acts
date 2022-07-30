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

const ENCODE_STEP = {
    WAIT_FOR_EOS: 'encode:waitForEOS',
    CONFIGURE: 'encode:configure',
    GET_INPUTSURFACE: 'encode:getSurface',
    PREPARE: 'encode:prepare',
    START: 'encode:start',
    FLUSH: 'encode:flush',
    STOP: 'encode:stop',
    RESET: 'encode:reset',
    WAIT_FOR_ALL_OUTS: 'encode:waitForAllOuts',
    ERROR: 'encode:error',
    RELEASE: 'encode:release',
}
const STREAM_STEP = {
    CREATE: 'stream:create',
    PREPARE: 'stream:prepare',
    SET_PARAM: 'stream:setParam',
    SET_EOS_FRAME: 'stream:setEOSFrame',
    START: 'stream:start',
    STOP: 'stream:stop',
}
describe('VideoEncoderParameterCallback', function () {
    let videoEncodeProcessor = null;
    let mediaTest = null;
    let surfaceID = '';
    let frameCountOut = 0;
    let outputQueue = [];
    let frameTotal = 100;
    let finalFrameId = 100;
    let name = 'openh264enc';
    let isStreamRunning = false;
    let workDoneAtEOS = false;
    let stopBuffer = false;
    const ROOT = '/data/app/el1/bundle/results/';
    const BASIC_PATH = ROOT + 'video_reliability_callback_';
    let mediaDescription = {
        'width': 320,
        'height': 240,
        'pixel_format': 3,
        'frame_rate': 30,
        'codec_profile': media.AVCProfile.AVC_PROFILE_BASELINE,
        'video_encode_bitrate_mode': media.VideoEncodeBitrateMode.CBR
    };

    beforeAll(function () {
        console.info('beforeAll case');
    })

    beforeEach(async function () {
        console.info('beforeEach case');
        await msleep(1000).then(() => {
        }, failCallback).catch(failCatch);
        videoEncodeProcessor = null;
        mediaTest = null;
        surfaceID = '';
        frameCountOut = 0;
        outputQueue = [];
        workDoneAtEOS = false;
        frameTotal = 100;
        finalFrameId = 100;
        isStreamRunning = false;
        stopBuffer = false;
    })

    afterEach(async function () {
        console.info('afterEach case');
        if (videoEncodeProcessor != null) {
            await videoEncodeProcessor.release().then(() => {
                console.info('in case : videoEncodeProcessor release success');
            }, failCallback).catch(failCatch);
            videoEncodeProcessor = null;
        }
        toStopStream();
    })

    afterAll(function () {
        console.info('afterAll case');
    })
    let failCallback = function (err) {
        console.error(`in case error failCallback called, errMessage is ${err.message}`);
        expect(err == undefined).assertTrue();
    }
    let failCatch = function (err) {
        console.error(`in case error failCatch called,errMessage is ${err.message}`);
        expect(err == undefined).assertTrue();
    }

    function msleep(ms) {
        return new Promise((resolve) => setTimeout(resolve, ms));
    }

    function printError(err, expectFail) {
        expect((err != undefined) == expectFail).assertTrue();
        if (expectFail == false && err != undefined) {
            console.error('in case error failCatch called,err is ' + err);
            console.error(`in case error failCatch called,errMessage is ${err.message}`);
        }
    }

    function writeFile(path, buf, len) {
        try {
            let writeStream = Fileio.createStreamSync(path, 'ab+');
            let num = writeStream.writeSync(buf, { length: len });
            writeStream.flushSync();
            writeStream.closeSync();
        } catch (e) {
            console.error('in case error writeFile: ' + e);
        }
    }

    /* get outputbuffers from codec  */
    async function dequeueOutputs(path, nextStep) {
        console.log('outputQueue.length:' + outputQueue.length);
        while (outputQueue.length > 0) {
            let outputObject = outputQueue.shift();
            if (outputObject.flags == 1 || frameCountOut == frameTotal) {
                if (workDoneAtEOS) {
                    doneWork(nextStep);
                }
                return;
            }
            frameCountOut++;
            console.info('not last frame, continue');
            videoEncodeProcessor.freeOutputBuffer(outputObject, (err) => {
                if (typeof (err) == 'undefined') {
                    console.debug('in case release output count:' + frameCountOut);
                } else {
                    console.info(`in case release output called,errMessage is ${err.message}`);
                }
            })
        }
    }

    function printDescription(obj) {
        for (let item in obj) {
            let property = obj[item];
            console.info('video encoder key is ' + item);
            console.info('video encoder value is ' + property);
        }
    }

    function setCallback(path, nextStep) {
        videoEncodeProcessor.on('newOutputData', async (outBuffer) => {
            console.info('in case: outputBufferAvailable outBuffer.index: ' + outBuffer.index);
            if (stopBuffer == false) {
                outputQueue.push(outBuffer);
                dequeueOutputs(path, nextStep);
            }
        });

        videoEncodeProcessor.on('error', (err) => {
            console.info('in case: error called,errName is' + err);
        });

        videoEncodeProcessor.on('streamChanged', (format) => {
            if (typeof (format) != undefined) {
                printDescription(format);
            }
        });
    }

    function toCreateStream(mySteps, done) {
        mediaTest = mediademo.createMediaTest();
        toNextStep(mySteps, done);
    }

    function toSetStreamParam(mySteps, done) {
        mediaTest.setResolution(mediaDescription.width, mediaDescription.height);
        mediaTest.setFrameRate(mediaDescription.frame_rate);
        toNextStep(mySteps, done);
    }

    function toSetEOSFrame(mySteps, done) {
        mediaTest.setFrameCount(frameTotal);
        toNextStep(mySteps, done);
    }

    function toStartStream(mySteps, done) {
        if (isStreamRunning == false) {
            console.info('in case : toStartStream');
            mediaTest.startStream(surfaceID);
            isStreamRunning = true;
        }
        toNextStep(mySteps, done);
    }

    function toStopStream(mySteps, done) {
        if (isStreamRunning == true) {
            console.info('in case : toStopStream');
            mediaTest.closeStream(surfaceID);
            isStreamRunning = false;
        }
        toNextStep(mySteps, done);
    }

    function toConfigure(mySteps, done, expectFail) {
        videoEncodeProcessor.configure(mediaDescription, (err) => {
            console.info(`case configure callback`);
            printError(err, expectFail);
            toNextStep(mySteps, done);
        })
    }

    function toGetInputSurface(mySteps, done, expectFail) {
        videoEncodeProcessor.getInputSurface((err, inputSurface) => {
            expect(err).assertUndefined();
            expect(inputSurface != undefined).assertTrue();
            printError(err, expectFail);
            surfaceID = inputSurface;
            console.info('in case : getInputSurface success, surfaceID ' + surfaceID);
            toNextStep(mySteps, done);
        })
    }

    function toPrepare(mySteps, done, expectFail) {
        videoEncodeProcessor.prepare((err) => {
            console.info(`case prepare callback`);
            printError(err, expectFail);
            toNextStep(mySteps, done);
        });
    }

    function toStart(mySteps, done, expectFail) {
        videoEncodeProcessor.start((err) => {
            console.info(`case start callback`);
            printError(err, expectFail);
            toNextStep(mySteps, done);
        });
        stopBuffer = false;
    }

    function toStop(mySteps, done, expectFail) {
        videoEncodeProcessor.stop((err) => {
            console.info(`case stop callback`);
            printError(err, expectFail);
            toNextStep(mySteps, done);
        });
        stopBuffer = true;
    }

    function toFlush(mySteps, done, expectFail) {
        videoEncodeProcessor.flush((err) => {
            console.info(`case flush callback`);
            printError(err, expectFail);
            toNextStep(mySteps, done);
        });
    }

    function toReset(mySteps, done, expectFail) {
        videoEncodeProcessor.reset((err) => {
            console.info(`case reset callback`);
            printError(err, expectFail);
            toNextStep(mySteps, done);
        });
    }

    function runCase(mySteps, nextCase, done) {
        if (mySteps[0] == ENCODE_STEP.ERROR) {
            mySteps.shift();
            nextCase(mySteps, done, true);
        } else {
            nextCase(mySteps, done, false);
        }
    }

    function toNextStep(mySteps, done) {
        if (mySteps[0] == ENCODE_STEP.RELEASE) {
            if (videoEncodeProcessor != null) {
                videoEncodeProcessor.release((err) => {
                    printError(err, false);
                    videoEncodeProcessor = null;
                    done();
                });
            }
            return;
        }
        switch (mySteps[0]) {
            case ENCODE_STEP.CONFIGURE:
                mySteps.shift();
                runCase(mySteps, toConfigure, done);
                break;
            case STREAM_STEP.CREATE:
                mySteps.shift();
                toCreateStream(mySteps, done);
                break;
            case STREAM_STEP.SET_PARAM:
                mySteps.shift();
                toSetStreamParam(mySteps, done);
                break;
            case STREAM_STEP.SET_EOS_FRAME:
                mySteps.shift();
                toSetEOSFrame(mySteps, done);
                break;
            case STREAM_STEP.START:
                mySteps.shift();
                toStartStream(mySteps, done);
                break;
            case STREAM_STEP.STOP:
                mySteps.shift();
                toStopStream(mySteps, done);
                break;
            case ENCODE_STEP.GET_INPUTSURFACE:
                mySteps.shift();
                runCase(mySteps, toGetInputSurface, done);
                break;
            case ENCODE_STEP.PREPARE:
                mySteps.shift();
                runCase(mySteps, toPrepare, done);
                break;
            case ENCODE_STEP.START:
                mySteps.shift();
                runCase(mySteps, toStart, done);
                break;
            case ENCODE_STEP.FLUSH:
                mySteps.shift();
                runCase(mySteps, toFlush, done);
                break;
            case ENCODE_STEP.STOP:
                mySteps.shift();
                runCase(mySteps, toStop, done);
                break;
            case ENCODE_STEP.RESET:
                mySteps.shift();
                runCase(mySteps, toReset, done);
                break;
            case ENCODE_STEP.WAIT_FOR_EOS:
                mySteps.shift();
                setTimeout(() => {
                    toNextStep(mySteps, done);
                }, 5000); // wait 5000 ms for eos
                break;
            case ENCODE_STEP.WAIT_FOR_ALL_OUTS:
                mySteps.shift();
                break;
            default:
                break;
        }
    }

    function toCreateVideoEncoderByMime(mime, path, mySteps, done) {
        media.createVideoEncoderByMime(mime, (err, processor) => {
            console.info(`case createVideoEncoderByMime callback`);
            printError(err, false);
            if (typeof (processor) != 'undefined') {
                videoEncodeProcessor = processor;
                setCallback(path, done);
                toNextStep(mySteps, done);
            } else {
                done();
            }
        })
    }

    function toCreateVideoEncoderByName(name, path, mySteps, done) {
        media.createVideoEncoderByName(name, (err, processor) => {
            printError(err, false);
            if (typeof (processor) != 'undefined') {
                videoEncodeProcessor = processor;
                setCallback(path, done);
                toNextStep(mySteps, done);
            } else {
                done();
            }
        })
    }

    async function doneWork(nextStep) {
        videoEncodeProcessor.stop((err) => {
            printError(err, false);
            console.info('case stop callback');
            mediaTest.closeStream(surfaceID);
            videoEncodeProcessor.reset((err) => {
                printError(err, false);
                console.info('case reset callback');
                videoEncodeProcessor.release((err) => {
                    printError(err, false);
                    console.info('case release callback');
                    videoEncodeProcessor = null;
                    nextStep();
                })
            })
        })
    }


    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_CALLBACK_0100
        * @tc..name      : create -> configure
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability test
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_CALLBACK_0100', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_CALLBACK_0100.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_CALLBACK_0200
        * @tc..name      : prepare -> configure
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability test
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_CALLBACK_0200', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_CALLBACK_0200.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE,
            ENCODE_STEP.CONFIGURE, ENCODE_STEP.ERROR, STREAM_STEP.STOP, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_CALLBACK_0300
        * @tc..name      : start -> configure
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability test
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_CALLBACK_0300', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_CALLBACK_0300.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE,
            ENCODE_STEP.START, ENCODE_STEP.CONFIGURE, ENCODE_STEP.ERROR, STREAM_STEP.STOP, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_CALLBACK_0400
        * @tc..name      : flush -> configure
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability test
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_CALLBACK_0400', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_CALLBACK_0400.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE,
            ENCODE_STEP.START, ENCODE_STEP.FLUSH, ENCODE_STEP.CONFIGURE, ENCODE_STEP.ERROR, STREAM_STEP.STOP,
            ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_CALLBACK_0500
        * @tc..name      : stop -> configure
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability test
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_CALLBACK_0500', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_CALLBACK_0500.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE,
            ENCODE_STEP.START, ENCODE_STEP.STOP, ENCODE_STEP.CONFIGURE, ENCODE_STEP.ERROR, STREAM_STEP.STOP,
            ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_CALLBACK_0600
        * @tc..name      : EOS -> configure
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability test
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_CALLBACK_0600', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_CALLBACK_0600.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START, ENCODE_STEP.WAIT_FOR_EOS,
            ENCODE_STEP.CONFIGURE, ENCODE_STEP.ERROR, STREAM_STEP.STOP, ENCODE_STEP.RELEASE);
        frameTotal = 50;
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_CALLBACK_0700
        * @tc..name      : reset -> configure
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability test
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_CALLBACK_0700', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_CALLBACK_0700.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START, ENCODE_STEP.RESET,
            STREAM_STEP.STOP, ENCODE_STEP.CONFIGURE, STREAM_STEP.SET_PARAM, STREAM_STEP.SET_EOS_FRAME,
            ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START, ENCODE_STEP.PREPARE,
            ENCODE_STEP.START, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_CALLBACK_0800
        * @tc..name      : configure -> configure
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability test
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_CALLBACK_0800', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_CALLBACK_0800.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START, ENCODE_STEP.CONFIGURE,
            ENCODE_STEP.ERROR, ENCODE_STEP.PREPARE, ENCODE_STEP.START,
            STREAM_STEP.STOP, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_CALLBACK_0900
        * @tc..name      : configure -> reset -> configure
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability test
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_PAR_CALLBACK_0900', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE_CALLBACK_0900.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START, ENCODE_STEP.PREPARE,
            ENCODE_STEP.START, ENCODE_STEP.RESET, STREAM_STEP.STOP, ENCODE_STEP.CONFIGURE,
            STREAM_STEP.SET_PARAM, STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_CALLBACK_0100
        * @tc..name      : create -> prepare
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_CALLBACK_0100', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_CALLBACK_0100.h264';
        let mySteps = new Array(ENCODE_STEP.PREPARE, ENCODE_STEP.ERROR, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_CALLBACK_0200
        * @tc..name      : configure -> prepare
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_CALLBACK_0200', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_CALLBACK_0200.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START, STREAM_STEP.STOP, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_CALLBACK_0300
        * @tc..name      : prepare -> prepare
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_CALLBACK_0300', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_CALLBACK_0300.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START, ENCODE_STEP.PREPARE,
            ENCODE_STEP.PREPARE, ENCODE_STEP.ERROR, ENCODE_STEP.START, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_CALLBACK_0400
        * @tc..name      : start -> prepare
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_CALLBACK_0400', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_CALLBACK_0400.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START, ENCODE_STEP.PREPARE,
            ENCODE_STEP.START, ENCODE_STEP.PREPARE, ENCODE_STEP.ERROR,
            ENCODE_STEP.RESET, STREAM_STEP.STOP, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_CALLBACK_0500
        * @tc..name      : flush -> prepare
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_CALLBACK_0500', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_CALLBACK_0500.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START, ENCODE_STEP.FLUSH, ENCODE_STEP.PREPARE,
            ENCODE_STEP.ERROR, ENCODE_STEP.RESET, STREAM_STEP.STOP, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_CALLBACK_0600
        * @tc..name      : stop -> prepare
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_CALLBACK_0600', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_CALLBACK_0600.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START, ENCODE_STEP.STOP, ENCODE_STEP.PREPARE,
            ENCODE_STEP.ERROR, ENCODE_STEP.RESET, STREAM_STEP.STOP, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_CALLBACK_0700
        * @tc..name      : EOS -> prepare
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_CALLBACK_0700', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_CALLBACK_0700.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START, ENCODE_STEP.WAIT_FOR_EOS, ENCODE_STEP.PREPARE,
            ENCODE_STEP.ERROR, STREAM_STEP.STOP, ENCODE_STEP.RELEASE);
        frameTotal = 50;
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_CALLBACK_0800
        * @tc..name      : reset -> prepare
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_PAR_CALLBACK_0800', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_PREPARE_CALLBACK_0800.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START, ENCODE_STEP.RESET, ENCODE_STEP.PREPARE,
            ENCODE_STEP.ERROR, ENCODE_STEP.RESET, STREAM_STEP.STOP, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_CALLBACK_0100
        * @tc..name      : create -> start
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_CALLBACK_0100', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_CALLBACK_0100.h264';
        let mySteps = new Array(ENCODE_STEP.START, ENCODE_STEP.ERROR, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_CALLBACK_0200
        * @tc..name      : configure -> start
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_CALLBACK_0200', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_CALLBACK_0200.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START, ENCODE_STEP.START,
            ENCODE_STEP.ERROR, STREAM_STEP.STOP, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_CALLBACK_0300
        * @tc..name      : prepare -> start
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_CALLBACK_0300', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_CALLBACK_0300.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_CALLBACK_0400
        * @tc..name      : start -> start
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_CALLBACK_0400', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_CALLBACK_0400.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START, ENCODE_STEP.PREPARE,
            ENCODE_STEP.START, ENCODE_STEP.START, ENCODE_STEP.ERROR, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_CALLBACK_0500
        * @tc..name      : flush -> start
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_CALLBACK_0500', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_CALLBACK_0500.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START, ENCODE_STEP.PREPARE,
            ENCODE_STEP.START, ENCODE_STEP.FLUSH, ENCODE_STEP.START,
            ENCODE_STEP.ERROR, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_CALLBACK_0600
        * @tc..name      : stop -> start
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_CALLBACK_0600', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_CALLBACK_0600.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START, ENCODE_STEP.PREPARE,
            ENCODE_STEP.START, ENCODE_STEP.STOP, ENCODE_STEP.START, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_CALLBACK_0700
        * @tc..name      : EOS -> start
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_CALLBACK_0700', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_CALLBACK_0700.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START, ENCODE_STEP.PREPARE,
            ENCODE_STEP.START, ENCODE_STEP.WAIT_FOR_EOS, ENCODE_STEP.START,
            ENCODE_STEP.ERROR, ENCODE_STEP.RELEASE);
        frameTotal = 50;
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_CALLBACK_0800
        * @tc..name      : reset -> start
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_PAR_CALLBACK_0800', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START_CALLBACK_0800.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START, ENCODE_STEP.RESET, ENCODE_STEP.START,
            ENCODE_STEP.ERROR, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_CALLBACK_0100
        * @tc..name      : create -> flush
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_CALLBACK_0100', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_CALLBACK_0100.h264';
        let mySteps = new Array(ENCODE_STEP.FLUSH, ENCODE_STEP.ERROR, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_CALLBACK_0200
        * @tc..name      : configure -> flush
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_CALLBACK_0200', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_CALLBACK_0200.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE,
            STREAM_STEP.START, ENCODE_STEP.FLUSH, ENCODE_STEP.ERROR, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_CALLBACK_0300
        * @tc..name      : prepare -> flush
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_CALLBACK_0300', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_CALLBACK_0300.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.FLUSH, ENCODE_STEP.ERROR, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_CALLBACK_0400
        * @tc..name      : start -> flush
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_CALLBACK_0400', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_CALLBACK_0400.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START, ENCODE_STEP.FLUSH, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_CALLBACK_0500
        * @tc..name      : flush -> flush
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_CALLBACK_0500', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_CALLBACK_0500.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START, ENCODE_STEP.PREPARE,
            ENCODE_STEP.START, ENCODE_STEP.FLUSH, ENCODE_STEP.FLUSH, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_CALLBACK_0600
        * @tc..name      : stop -> flush
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_CALLBACK_0600', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_CALLBACK_0600.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START, ENCODE_STEP.STOP, ENCODE_STEP.FLUSH,
            ENCODE_STEP.ERROR, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_CALLBACK_0700
        * @tc..name      : EOS -> flush
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_CALLBACK_0700', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_CALLBACK_0700.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START, ENCODE_STEP.PREPARE,
            ENCODE_STEP.START, ENCODE_STEP.WAIT_FOR_EOS, ENCODE_STEP.FLUSH,
            ENCODE_STEP.RELEASE);
        frameTotal = 50;
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_CALLBACK_0800
        * @tc..name      : reset -> flush
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_PAR_CALLBACK_0800', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_FLUSH_CALLBACK_0800.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START, ENCODE_STEP.RESET,
            ENCODE_STEP.FLUSH, ENCODE_STEP.ERROR, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_CALLBACK_0100
        * @tc..name      : create -> stop
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_CALLBACK_0100', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_CALLBACK_0100.h264';
        let mySteps = new Array(ENCODE_STEP.STOP, ENCODE_STEP.ERROR, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_CALLBACK_0200
        * @tc..name      : configure -> stop
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_CALLBACK_0200', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_CALLBACK_0200.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, STREAM_STEP.START, ENCODE_STEP.STOP, ENCODE_STEP.ERROR, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_CALLBACK_0300
        * @tc..name      : prepare -> stop
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_CALLBACK_0300', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_CALLBACK_0300.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START, ENCODE_STEP.PREPARE,
            ENCODE_STEP.STOP, ENCODE_STEP.ERROR, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_CALLBACK_0400
        * @tc..name      : start -> stop
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_CALLBACK_0400', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_CALLBACK_0400.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START, ENCODE_STEP.PREPARE,
            ENCODE_STEP.START, ENCODE_STEP.STOP, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_CALLBACK_0500
        * @tc..name      : flush -> stop
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_CALLBACK_0500', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_CALLBACK_0500.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START, ENCODE_STEP.FLUSH, ENCODE_STEP.STOP,
            ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_CALLBACK_0600
        * @tc..name      : stop -> stop
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_CALLBACK_0600', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_CALLBACK_0600.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START, ENCODE_STEP.PREPARE,
            ENCODE_STEP.START, ENCODE_STEP.STOP, ENCODE_STEP.STOP, ENCODE_STEP.ERROR,
            ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_CALLBACK_0700
        * @tc..name      : EOS -> stop
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_CALLBACK_0700', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_CALLBACK_0700.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START, ENCODE_STEP.PREPARE,
            ENCODE_STEP.START, ENCODE_STEP.WAIT_FOR_EOS, ENCODE_STEP.STOP,
            ENCODE_STEP.RELEASE);
        frameTotal = 50;
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_CALLBACK_0800
        * @tc..name      : reset -> stop
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_PAR_CALLBACK_0800', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_STOP_CALLBACK_0800.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START, ENCODE_STEP.PREPARE,
            ENCODE_STEP.START, ENCODE_STEP.RESET, ENCODE_STEP.STOP, ENCODE_STEP.ERROR,
            ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_CALLBACK_0100
        * @tc..name      : create -> reset
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_CALLBACK_0100', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_CALLBACK_0100.h264';
        let mySteps = new Array(ENCODE_STEP.RESET, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_CALLBACK_0200
        * @tc..name      : configure -> reset
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_CALLBACK_0200', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_CALLBACK_0200.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE,
            STREAM_STEP.START, ENCODE_STEP.RESET, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_CALLBACK_0300
        * @tc..name      : prepare -> reset
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_CALLBACK_0300', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_CALLBACK_0300.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.RESET, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_CALLBACK_0400
        * @tc..name      : start -> reset
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_CALLBACK_0400', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_CALLBACK_0400.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START, ENCODE_STEP.PREPARE,
            ENCODE_STEP.START, ENCODE_STEP.RESET, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_CALLBACK_0500
        * @tc..name      : flush -> reset
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_CALLBACK_0500', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_CALLBACK_0500.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START, ENCODE_STEP.PREPARE,
            ENCODE_STEP.START, ENCODE_STEP.FLUSH, ENCODE_STEP.RESET, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_CALLBACK_0600
        * @tc..name      : stop -> reset
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_CALLBACK_0600', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_CALLBACK_0600.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START, ENCODE_STEP.PREPARE,
            ENCODE_STEP.START, ENCODE_STEP.STOP, ENCODE_STEP.RESET, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_CALLBACK_0700
        * @tc..name      : EOS -> reset
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_CALLBACK_0700', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_CALLBACK_0700.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START,
            ENCODE_STEP.WAIT_FOR_EOS, ENCODE_STEP.RESET, ENCODE_STEP.RELEASE);
        frameTotal = 50;
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_CALLBACK_0800
        * @tc..name      : reset -> reset
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_PAR_CALLBACK_0800', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_RESET_CALLBACK_0800.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START,
            ENCODE_STEP.RESET, ENCODE_STEP.RESET, ENCODE_STEP.RELEASE);
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_PAR_CALLBACK_0100
        * @tc..name      : EOS -> flush -> stop
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_PAR_CALLBACK_0100', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_CALLBACK_0100.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START,
            ENCODE_STEP.WAIT_FOR_EOS, ENCODE_STEP.FLUSH,
            ENCODE_STEP.STOP, ENCODE_STEP.RELEASE);
        frameTotal = 50;
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_PAR_CALLBACK_0200
        * @tc..name      : EOS -> flush -> EOS
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_PAR_CALLBACK_0200', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_CALLBACK_0200.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START,
            ENCODE_STEP.WAIT_FOR_EOS, ENCODE_STEP.FLUSH,
            ENCODE_STEP.RELEASE);
        frameTotal = 50;
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_PAR_CALLBACK_0300
        * @tc..name      : EOS -> reset -> configure
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_PAR_CALLBACK_0300', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_CALLBACK_0300.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START,
            ENCODE_STEP.WAIT_FOR_EOS, ENCODE_STEP.RESET, ENCODE_STEP.CONFIGURE,
            STREAM_STEP.STOP, STREAM_STEP.SET_PARAM, STREAM_STEP.SET_EOS_FRAME,
            STREAM_STEP.START, ENCODE_STEP.RELEASE);
        frameTotal = 50;
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_PAR_CALLBACK_0400
        * @tc..name      : EOS -> stop -> start -> EOS
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_PAR_CALLBACK_0400', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_CALLBACK_0400.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START,
            ENCODE_STEP.WAIT_FOR_EOS, ENCODE_STEP.STOP, ENCODE_STEP.START, ENCODE_STEP.RELEASE);
        frameTotal = 50;
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_PAR_CALLBACK_0500
        * @tc..name      : EOS -> stop -> start -> stop
        * @tc..desc      : test for state transition
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_PAR_CALLBACK_0500', 0, async function (done) {
        let path = BASIC_PATH + 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_EOS_CALLBACK_0500.h264';
        let mySteps = new Array(ENCODE_STEP.CONFIGURE, STREAM_STEP.CREATE, STREAM_STEP.SET_PARAM,
            STREAM_STEP.SET_EOS_FRAME, ENCODE_STEP.GET_INPUTSURFACE, STREAM_STEP.START,
            ENCODE_STEP.PREPARE, ENCODE_STEP.START,
            ENCODE_STEP.WAIT_FOR_EOS, ENCODE_STEP.STOP, ENCODE_STEP.START, ENCODE_STEP.STOP, ENCODE_STEP.RELEASE);
        frameTotal = 50;
        toCreateVideoEncoderByName(name, path, mySteps, done);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE-RESET_PAR_CALLBACK_0100
        * @tc..name      : configure -> reset for 50 times
        * @tc..desc      : Reliability Test
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CONFIGURE-RESET_PAR_CALLBACK_0100', 0, async function (done) {
        let events = require('events');
        let eventEmitter = new events.EventEmitter();
        let loopCnt = 0;
        eventEmitter.on('configure', (mediaDescription) => {
            videoEncodeProcessor.configure(mediaDescription, (err) => {
                expect(err).assertUndefined();
                console.info(`case configure 1`);
                eventEmitter.emit('reset');
            })
        });
        eventEmitter.on('reset', () => {
            videoEncodeProcessor.reset((err) => {
                expect(err).assertUndefined();
                console.info(`case reset 1`);
                loopCnt += 1;
                if (loopCnt < 50) {
                    console.info('case configure-reset current loop: ' + loopCnt);
                    eventEmitter.emit('configure', mediaDescription);
                } else {
                    videoEncodeProcessor.release((err) => {
                        expect(err).assertUndefined();
                        console.info('case release callback');
                        videoEncodeProcessor = null;
                        done();
                    })
                }
            })
        });
        media.createVideoEncoderByName(name, (err, processor) => {
            expect(err).assertUndefined();
            if (typeof (processor) != 'undefined') {
                videoEncodeProcessor = processor;
                eventEmitter.emit('configure', mediaDescription);
            } else {
                console.info('in case : createVideoEncoderByName fail');
                expect().assertFail();
                done();
            }
        })
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START-STOP_PAR_CALLBACK_0100
        * @tc..name      : start -> stop for 50 times
        * @tc..desc      : Reliability Test
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_START-STOP_PAR_CALLBACK_0100', 0, async function (done) {
        let events = require('events');
        let eventEmitter = new events.EventEmitter();
        let loopCnt = 0;
        eventEmitter.on('configure', (mediaDescription) => {
            videoEncodeProcessor.configure(mediaDescription, (err) => {
                expect(err).assertUndefined();
                console.info(`case configure 1`);
                eventEmitter.emit('getInputSurface');
            })
        });
        eventEmitter.on('getInputSurface', () => {
            videoEncodeProcessor.getInputSurface((err, inputSurface) => {
                expect(err).assertUndefined();
                expect(inputSurface != undefined).assertTrue();
                surfaceID = inputSurface;
                console.info('in case : getInputSurface success, surfaceID ' + surfaceID);
                eventEmitter.emit('prepare');
            })
        });
        eventEmitter.on('prepare', () => {
            videoEncodeProcessor.prepare((err) => {
                expect(err).assertUndefined();
                console.info('in case : prepare success');
                eventEmitter.emit('start');
            });
        });
        eventEmitter.on('start', () => {
            videoEncodeProcessor.start((err) => {
                expect(err).assertUndefined();
                console.info('in case : start success');
                eventEmitter.emit('stop');
            });
        });
        eventEmitter.on('stop', () => {
            videoEncodeProcessor.stop((err) => {
                expect(err).assertUndefined();
                console.info(`case stop 1`);
                loopCnt += 1;
                if (loopCnt < 50) {
                    console.info('case start-stop current loop: ' + loopCnt);
                    eventEmitter.emit('start');
                } else {
                    videoEncodeProcessor.release((err) => {
                        expect(err).assertUndefined();
                        console.info('case release callback');
                        videoEncodeProcessor = null;
                        done();
                    })
                }
            })
        });
        media.createVideoEncoderByName(name, (err, processor) => {
            expect(err).assertUndefined();
            if (typeof (processor) != 'undefined') {
                videoEncodeProcessor = processor;
                eventEmitter.emit('configure', mediaDescription);
            } else {
                console.info('in case : createVideoEncoderByName fail');
                expect().assertFail();
                done();
            }
        })
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CREATE-RELEASE_PAR_CALLBACK_0100
        * @tc..name      : create -> release for 50 times
        * @tc..desc      : Reliability Test
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_CREATE-RELEASE_PAR_CALLBACK_0100', 0, async function (done) {
        let events = require('events');
        let eventEmitter = new events.EventEmitter();
        let loopCnt = 0;
        eventEmitter.on('create', (name) => {
            media.createVideoEncoderByName(name, (err, processor) => {
                expect(err).assertUndefined();
                if (typeof (processor) != 'undefined') {
                    videoEncodeProcessor = processor;
                    eventEmitter.emit('release');
                } else {
                    console.info('in case : createVideoEncoderByName fail');
                    expect().assertFail();
                    done();
                }
            })
        })
        eventEmitter.on('release', () => {
            videoEncodeProcessor.release((err) => {
                expect(err).assertUndefined();
                console.info(`case release 1`);
                videoEncodeProcessor = null;
                loopCnt += 1;
                if (loopCnt < 50) {
                    console.info('case create-release current loop: ' + loopCnt);
                    eventEmitter.emit('create', name);
                } else {
                    done();
                }
            })
        })
        eventEmitter.emit('create', name);
    })

    /* *
        * @tc..number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_LOOP_PAR_CALLBACK_0100
        * @tc..name      : total loop for 50 times
        * @tc..desc      : Reliability Test
        * @tc..size      : MediumTest
        * @tc..type      : Reliability
        * @tc..level     : Level2
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_API_LOOP_PAR_CALLBACK_0100', 0, async function (done) {
        let events = require('events');
        let eventEmitter = new events.EventEmitter();
        let loopCnt = 0;
        eventEmitter.on('create', (name) => {
            media.createVideoEncoderByName(name, (err, processor) => {
                expect(err).assertUndefined();
                if (typeof (processor) != 'undefined') {
                    videoEncodeProcessor = processor;
                    eventEmitter.emit('configure', mediaDescription);
                } else {
                    console.info('in case : createVideoEncoderByName fail');
                    expect().assertFail();
                    done();
                }
            })
        })
        eventEmitter.on('configure', (mediaDescription) => {
            videoEncodeProcessor.configure(mediaDescription, (err) => {
                expect(err).assertUndefined();
                console.info(`case configure 1`);
                eventEmitter.emit('getInputSurface');
            })
        });
        eventEmitter.on('getInputSurface', () => {
            videoEncodeProcessor.getInputSurface((err, inputSurface) => {
                expect(err).assertUndefined();
                expect(inputSurface != undefined).assertTrue();
                surfaceID = inputSurface;
                console.info('in case : getInputSurface success, surfaceID ' + surfaceID);
                eventEmitter.emit('prepare');
            })
        });
        eventEmitter.on('prepare', () => {
            videoEncodeProcessor.prepare((err) => {
                expect(err).assertUndefined();
                console.info('in case : prepare success');
                eventEmitter.emit('start');
            });
        });
        eventEmitter.on('start', () => {
            videoEncodeProcessor.start((err) => {
                expect(err).assertUndefined();
                console.info('in case : start success');
                eventEmitter.emit('flush');
            });
        });
        eventEmitter.on('flush', () => {
            videoEncodeProcessor.flush((err) => {
                expect(err).assertUndefined();
                console.info('in case : flush success');
                eventEmitter.emit('stop');
            });
        });
        eventEmitter.on('stop', () => {
            videoEncodeProcessor.stop((err) => {
                expect(err).assertUndefined();
                console.info('in case : stop success');
                eventEmitter.emit('reset');
            });
        });
        eventEmitter.on('reset', () => {
            videoEncodeProcessor.reset((err) => {
                expect(err).assertUndefined();
                console.info('in case : reset success');
                eventEmitter.emit('release');
            });
        });
        eventEmitter.on('release', () => {
            videoEncodeProcessor.release((err) => {
                expect(err).assertUndefined();
                console.info(`case release 1`);
                videoEncodeProcessor = null;
                loopCnt += 1;
                if (loopCnt < 50) {
                    console.info('case create-release current loop: ' + loopCnt);
                    eventEmitter.emit('create', name);
                } else {
                    done();
                }
            })
        })
        eventEmitter.emit('create', name);
    })
})

