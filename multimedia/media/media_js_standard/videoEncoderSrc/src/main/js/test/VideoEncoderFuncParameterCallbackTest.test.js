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
import fileio from '@ohos.fileio'
import abilityAccessCtrl from '@ohos.abilityAccessCtrl'
import bundle from '@ohos.bundle'
import featureAbility from '@ohos.ability.featureAbility'
import mediaLibrary from '@ohos.multimedia.mediaLibrary'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'

describe('VideoEncoderFuncParameterCallback', function () {
    let videoEncodeProcessor = null;
    let mediaTest;
    let surfaceID = '';
    let frameCountOut = 0;
    let delayTime = 3000;
    let outputQueue = [];
    let frameTotal = 100;
    let finalFrameId = 100;
    let mime = 'video/avc';
    let name = 'openh264enc';
    let reStart = false;
    let isStreamRunning = false;
    let stopBuffer = false;
    let events = require('events');
    let eventEmitter = new events.EventEmitter();
    const ROOT = '/data/app/el1/bundle/results/';
    const BASIC_PATH = ROOT + 'video_func_callback_';
    let fdWrite;
    let fileAsset;
    let context = featureAbility.getContext();
    let mediaLibraryTest = mediaLibrary.getMediaLibrary(context);
    let fileKeyObj = mediaLibrary.FileKey;
    let mediaDescription = {
        'codec_mime': 'video/avc',
        'width': 320,
        'height': 240,
        'pixel_format': 3,
        'frame_rate': 30,
        'codec_profile': media.AVCProfile.AVC_PROFILE_BASELINE,
        'video_encode_bitrate_mode': media.VideoEncodeBitrateMode.CBR
    };

    beforeAll(async function () {
        console.info('beforeAll case 1');
        await applyPermission();
        console.info('beforeAll case after get permission');
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
        frameTotal = 100;
        finalFrameId = 100;
        reStart = false;
        isStreamRunning = false;
        stopBuffer = false;
    })

    afterEach(async function () {
        console.info('afterEach case');
        if (videoEncodeProcessor != null) {
            await videoEncodeProcessor.release().then(() => {
                console.info('case videoEncodeProcessor release');
            }, failCallback).catch(failCatch);
            videoEncodeProcessor = null;
        }
        await closeFdWrite();
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

    async function applyPermission() {
        let appInfo = await bundle.getApplicationInfo('ohos.acts.multimedia.video.videoencoder', 0, 100);
        let atManager = abilityAccessCtrl.createAtManager();
        if (atManager != null) {
            let tokenID = appInfo.accessTokenId;
            console.info('[permission] case accessTokenID is ' + tokenID);
            let permissionName1 = 'ohos.permission.MEDIA_LOCATION';
            let permissionName2 = 'ohos.permission.READ_MEDIA';
            let permissionName3 = 'ohos.permission.WRITE_MEDIA';
            await atManager.grantUserGrantedPermission(tokenID, permissionName1, 1).then((result) => {
                console.info('[permission] case grantUserGrantedPermission success :' + result);
            }).catch((err) => {
                console.info('[permission] case grantUserGrantedPermission failed :' + err);
            });
            await atManager.grantUserGrantedPermission(tokenID, permissionName2, 1).then((result) => {
                console.info('[permission] case grantUserGrantedPermission success :' + result);
            }).catch((err) => {
                console.info('[permission] case grantUserGrantedPermission failed :' + err);
            });
            await atManager.grantUserGrantedPermission(tokenID, permissionName3, 1).then((result) => {
                console.info('[permission] case grantUserGrantedPermission success :' + result);
            }).catch((err) => {
                console.info('[permission] case grantUserGrantedPermission failed :' + err);
            });
        } else {
            console.info('[permission] case apply permission failed, createAtManager failed');
        }
    }

    async function getFdWrite(pathName) {
        console.info('[mediaLibrary] case start getFdWrite');
        console.info('[mediaLibrary] case getFdWrite pathName is ' + pathName);
        let mediaType = mediaLibrary.MediaType.VIDEO;
        console.info('[mediaLibrary] case mediaType is ' + mediaType);
        let publicPath = await mediaLibraryTest.getPublicDirectory(mediaLibrary.DirectoryType.DIR_VIDEO);
        console.info('[mediaLibrary] case getFdWrite publicPath: ' + publicPath);
        let dataUri = await mediaLibraryTest.createAsset(mediaType, pathName, publicPath);
        console.info('[mediaLibrary] case getFdWrite dataUri: ' + JSON.stringify(dataUri));
        if (dataUri != undefined) {
            let args = dataUri.id.toString();
            let fetchOp = {
                selections: fileKeyObj.ID + '=?',
                selectionArgs: [args],
            }
            let fetchWriteFileResult = await mediaLibraryTest.getFileAssets(fetchOp);
            console.info('[mediaLibrary] case getFdWrite getFileAssets() success');
            fileAsset = await fetchWriteFileResult.getAllObject();
            console.info('[mediaLibrary] case getFdWrite getAllObject() success');
            fdWrite = await fileAsset[0].open('Rw');
            console.info('[mediaLibrary] case getFdWrite fdWrite is ' + fdWrite);
        }
    }

    async function closeFdWrite() {
        if (fileAsset != null) {
            await fileAsset[0].close(fdWrite).then(() => {
                console.info('[mediaLibrary] case close fdWrite success, fd is ' + fdWrite);
            }).catch((err) => {
                console.info('[mediaLibrary] case close fdWrite failed');
            });
        } else {
            console.info('[mediaLibrary] case fileAsset is null');
        }
    }

    function writeFile(buf, len) {
        try {
            let res = fileio.writeSync(fdWrite, buf, { length: len });
            console.info('case fileio.write buffer success');
        } catch (e) {
            console.info('case fileio.write buffer error is ' + e);
        }
    }

    async function dequeueOutputs(nextStep) {
        while (outputQueue.length > 0) {
            let outputObject = outputQueue.shift();
            if (outputObject.flags == 1 || frameCountOut == frameTotal || frameCountOut == finalFrameId) {
                nextStep();
                return;
            }
            frameCountOut++;
            writeFile(outputObject.data, outputObject.length);
            videoEncodeProcessor.freeOutputBuffer(outputObject, (err) => {
                if (typeof (err) == 'undefined') {
                    console.log('in case release output count:' + frameCountOut);
                } else {
                    console.info(`in case release output called,errMessage is ${err.message}`);
                }
            });
        }
    }

    function printDescription(obj) {
        for (let item in obj) {
            let property = obj[item];
            console.info('video encoder key is ' + item);
            console.info('video encoder value is ' + property);
        }
    }

    function setCallback(nextStep) {
        console.info('case callback');
        videoEncodeProcessor.on('newOutputData', async (outBuffer) => {
            console.info('outputBufferAvailable');
            if (stopBuffer == false) {
                outputQueue.push(outBuffer);
                dequeueOutputs(nextStep);
            }
        });
        videoEncodeProcessor.on('error', (err) => {
            console.info('in case error called, errName is' + err);
        });
        videoEncodeProcessor.on('streamChanged', (format) => {
            if (typeof (format) != undefined) {
                printDescription(format);
            }
        });
    }

    function toGetMediaCapability(mediaDescription, done) {
        media.getMediaCapability((err, mediaCaps) => {
            expect(err).assertUndefined();
            console.info(`case getMediaCapability 1`);
            mediaCaps.getVideoEncoderCaps((err, videoCapsArray) => {
                expect(err).assertUndefined();
                console.info('getVideoEncoderCaps success');
                if (typeof (videoCapsArray) != 'undefined') {
                    console.info('case videoCapsArray' + videoCapsArray);
                } else {
                    console.info('case videoCapsArray is not defined');
                    expect().assertFail();
                    done();
                }
            })
            mediaCaps.findVideoEncoder(mediaDescription, (err, codeName) => {
                expect(err).assertUndefined();
                console.info('findVideoEncoder success');
                if (typeof (codeName) != 'undefined') {
                    console.info('case codeName ' + codeName);
                } else {
                    console.info('case codeName is not defined');
                    expect().assertFail();
                    done();
                }
            })
        })
    }

    function toCreateByName(name, action, mediaDescription, done) {   
        media.createVideoEncoderByName(name, (err, processor) => {
            expect(err).assertUndefined();
            if (typeof (processor) != 'undefined') {
                console.info('case create createVideoEncoderByName success');
                videoEncodeProcessor = processor;
                toCreateStream();
                eventEmitter.emit('configure', mediaDescription,
                    function () {
                        eventEmitter.emit(action, done);
                    }, done);
            } else {
                console.info('case create createVideoEncoderByName fail');
                expect().assertFail();
                done();
            }
        });
    }

    function toCreateByMime(mime, action, mediaDescription, done) {   
        media.createVideoEncoderByMime(mime, (err, processor) => {
            expect(err).assertUndefined();
            if (typeof (processor) != 'undefined') {
                console.info('case create createVideoEncoderByName success');
                videoEncodeProcessor = processor;
                toCreateStream();
                eventEmitter.emit('configure', mediaDescription,
                    function () {
                        eventEmitter.emit(action, done);
                    }, done);
            } else {
                console.info('case create createVideoEncoderByName fail');
                expect().assertFail();
                done();
            }
        });
    }

    function toCreateStream() {
        mediaTest = mediademo.createMediaTest();
    }

    function toSetStreamParam(width, height, frameRate, frameTotal) {
        console.info('toSetStreamParam width：' + width + ' ,height:' + height)
        mediaTest.setResolution(width, height);
        mediaTest.setFrameRate(frameRate);
        mediaTest.setFrameCount(frameTotal);

    }

    function toStartStream() {
        if (isStreamRunning == false) {
            console.info('in case : toStartStream');
            mediaTest.startStream(surfaceID);
            isStreamRunning = true;
        }
    }

    function toStopStream() {
        if (isStreamRunning == true) {
            console.info('in case : toStopStream');
            mediaTest.closeStream(surfaceID);
            isStreamRunning = false;
        }
    }

    eventEmitter.on('configure', (mediaDescription, nextStep, done) => {
        console.info('in case : configure in');
        videoEncodeProcessor.configure(mediaDescription, async (err) => {
            expect(err).assertUndefined();
            console.info('in case : configure success');
            // await getFdWrite(decPath);
            // console.info('case getFdWrite success');
            setCallback(nextStep);
            console.info('case setCallback success');
            eventEmitter.emit('getVideoEncoderCaps', mediaDescription, done);
        });
    });
    eventEmitter.on('getVideoEncoderCaps', (mediaDescription, done) => {
        videoEncodeProcessor.getVideoEncoderCaps((err, videoCaps) => {
            expect(err).assertUndefined();
            console.info('case get getVideoEncoderCaps success');
            console.info(`print videoCaps:
            codecInfo.name ${videoCaps.codecInfo.name}
            codecInfo.type ${videoCaps.codecInfo.type}
            codecInfo.mimeType ${videoCaps.codecInfo.mimeType}
            codecInfo.isHardwareAccelerated ${videoCaps.codecInfo.isHardwareAccelerated}
            codecInfo.isSoftwareOnly ${videoCaps.codecInfo.isSoftwareOnly}
            codecInfo.isVendor ${videoCaps.codecInfo.isVendor}
            supportedBitrate [${videoCaps.supportedBitrate.min},  ${videoCaps.supportedBitrate.max}]
            supportedFormats ${videoCaps.supportedFormats}
            supportedHeightAlignment ${videoCaps.supportedHeightAlignment}
            supportedWidthAlignment ${videoCaps.supportedWidthAlignment}
            supportedWidth [${videoCaps.supportedWidth.min},  ${videoCaps.supportedWidth.max}]
            supportedHeight [${videoCaps.supportedHeight.min},  ${videoCaps.supportedHeight.max}]
            supportedProfiles ${videoCaps.supportedProfiles}
            supportedLevels ${videoCaps.supportedLevels}
            supportedBitrateMode ${videoCaps.supportedBitrateMode}
            supportedQuality [${videoCaps.supportedQuality.min},  ${videoCaps.supportedQuality.max}]
            supportedComplexity [${videoCaps.supportedComplexity.min},  ${videoCaps.supportedComplexity.max}]
            `);
            eventEmitter.emit('getInputSurface', mediaDescription, done);
        });
    });
    eventEmitter.on('getInputSurface', (mediaDescription, done) => {
        videoEncodeProcessor.getInputSurface((err, inputSurface) => {
            expect(err).assertUndefined();
            expect(inputSurface != undefined).assertTrue();
            surfaceID = inputSurface;
            console.info('in case : getInputSurface success, surfaceID ' + surfaceID);
            setTimeout(() => {
                eventEmitter.emit('prepare', mediaDescription, done);
            }, delayTime);
        });
    });
    eventEmitter.on('prepare', (mediaDescription, done) => {
        videoEncodeProcessor.prepare((err) => {
            expect(err).assertUndefined();
            console.info('in case : prepare success');
            toSetStreamParam(mediaDescription.width, mediaDescription.height,
                mediaDescription.frame_rate, frameTotal);
            setTimeout(() => {
                eventEmitter.emit('start', done);
            }, delayTime);
        });
    });
    eventEmitter.on('start', (done) => {
        // toStartStream();
        videoEncodeProcessor.start((err) => {
            expect(err).assertUndefined();
            console.info('in case : start success');
            setTimeout(() => {
                toStartStream();
            }, delayTime)
        });
        stopBuffer = false;
    });
    eventEmitter.on('stop', (done) => {
        videoEncodeProcessor.stop((err) => {
            expect(err).assertUndefined();
            toStopStream();
            console.info('in case : stop success');
            if (reStart == true) {
                frameCountOut = 0;
                outputQueue = [];
                reStart = false;
                eventEmitter.emit('start', done);
            } else {
                eventEmitter.emit('reset', done);
            }
        });
        stopBuffer = true;
    });
    eventEmitter.on('flush', (done) => {
        videoEncodeProcessor.flush((err) => {
            expect(err).assertUndefined();
            console.info('in case : flush success');
            eventEmitter.emit('reset', done);
        });
    });
    eventEmitter.on('reset', (done) => {
        videoEncodeProcessor.reset((err) => {
            toStopStream();
            expect(err).assertUndefined();
            console.info('in case : reset success');
            eventEmitter.emit('release', done);
        });
    });
    eventEmitter.on('release', (done) => {
        videoEncodeProcessor.release((err) => {
            toStopStream();
            expect(err).assertUndefined();
            console.info('in case : release success');
            videoEncodeProcessor = null;
            done();
        });
    });
    eventEmitter.on('reset_for_CALLBACK_0700', async (done) => {
        let decPath2 = 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_CALLBACK_0701.h264';
        toStopStream();
        await closeFdWrite();
        mediaDescription.width = 400;
        mediaDescription.height = 300;
        mediaDescription.codec_profile = media.AVCProfile.AVC_PROFILE_HIGH;
        mediaDescription.video_encode_bitrate_mode = media.VideoEncodeBitrateMode.CBR;
        await getFdWrite(decPath2);
        videoEncodeProcessor.reset(async (err) => {
            expect(err).assertUndefined();
            console.info('in case : reset_for_CALLBACK_0700 success');
            surfaceID = '';
            frameCountOut = 0;
            outputQueue = [];
            isStreamRunning = false;
            eventEmitter.emit('configure', mediaDescription,
                function () {
                    eventEmitter.emit('stop', done);
                }, done);
        })
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_CALLBACK_0100
        * @tc.name      : test stop after last frame and reset
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_CALLBACK_0100', 0, async function (done) {
        let decPath = 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_CALLBACK_0100.h264';
        let action = 'stop';
        await getFdWrite(decPath);
        mediaDescription.codec_profile = media.AVCProfile.AVC_PROFILE_HIGH;
        mediaDescription.video_encode_bitrate_mode = media.VideoEncodeBitrateMode.VBR;
        toGetMediaCapability(mediaDescription, done);
        toCreateByMime(mime, action, mediaDescription, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_CALLBACK_0200
        * @tc.name      : test stop at running state and reset
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_CALLBACK_0200', 0, async function (done) {
        let decPath = 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_CALLBACK_0200.h264';
        let action= 'stop';
        await getFdWrite(decPath);
        mediaDescription.codec_profile = media.AVCProfile.AVC_PROFILE_BASELINE;
        mediaDescription.video_encode_bitrate_mode = media.VideoEncodeBitrateMode.VBR;
        finalFrameId = 50;
        toCreateByName(name, action, mediaDescription, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_CALLBACK_0300
        * @tc.name      : test stop at end of stream and restart
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_CALLBACK_0300', 0, async function (done) {
        let decPath = 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_CALLBACK_0300.h264';
        let action= 'stop';
        await getFdWrite(decPath);
        mediaDescription.codec_profile = media.AVCProfile.AVC_PROFILE_HIGH;
        mediaDescription.video_encode_bitrate_mode = media.VideoEncodeBitrateMode.CBR;
        reStart = true;
        toCreateByName(name, action, mediaDescription, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_CALLBACK_0400
        * @tc.name      : test stop at running state and restart
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_CALLBACK_0400', 0, async function (done) {
        let decPath = 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_CALLBACK_0400.h264';
        let action = 'stop';
        await getFdWrite(decPath);
        mediaDescription.codec_profile = media.AVCProfile.AVC_PROFILE_MAIN;
        mediaDescription.video_encode_bitrate_mode = media.VideoEncodeBitrateMode.CBR;
        finalFrameId = 50;
        reStart = true;
        toCreateByName(name, action, mediaDescription, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_CALLBACK_0500
        * @tc.name      : test flush at running state
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_CALLBACK_0500', 0, async function (done) {
        let decPath = 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_CALLBACK_0500.h264';
        let action = 'flush';
        await getFdWrite(decPath);
        mediaDescription.codec_profile = media.AVCProfile.AVC_PROFILE_HIGH;
        mediaDescription.video_encode_bitrate_mode = media.VideoEncodeBitrateMode.VBR;
        finalFrameId = 50;
        toCreateByName(name, action, mediaDescription, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_CALLBACK_0600
        * @tc.name      : test flush at end of stream
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_CALLBACK_0600', 0, async function (done) {
        let decPath = 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_CALLBACK_0600.h264';
        let action = 'flush';
        await getFdWrite(decPath);
        mediaDescription.codec_profile = media.AVCProfile.AVC_PROFILE_BASELINE;
        mediaDescription.video_encode_bitrate_mode = media.VideoEncodeBitrateMode.CBR;
        toCreateByName(name, action, mediaDescription, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_CALLBACK_0700
        * @tc.name      : test reconfigure
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_CALLBACK_0700', 0, async function (done) {
        let decPath = 'SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_CALLBACK_0700.h264';
        let action = 'reset_for_CALLBACK_0700'
        mediaDescription.codec_profile = media.AVCProfile.AVC_PROFILE_MAIN;
        mediaDescription.video_encode_bitrate_mode = media.VideoEncodeBitrateMode.VBR;
        await getFdWrite(decPath);
        toCreateByName(name, action, mediaDescription, done);
    })
})
