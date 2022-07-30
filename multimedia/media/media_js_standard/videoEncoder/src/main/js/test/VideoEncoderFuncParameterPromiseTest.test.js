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
import mediademo from '@ohos.multimedia.mediademo'
import fileio from '@ohos.fileio'
import abilityAccessCtrl from '@ohos.abilityAccessCtrl'
import bundle from '@ohos.bundle'
import featureAbility from '@ohos.ability.featureAbility'
import mediaLibrary from '@ohos.multimedia.mediaLibrary'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('videoEncoderFuncParameterPromise', function () {
    const BASIC_PATH = 'videoencode_func_promise_';
    let videoEncodeProcessor;
    let mediaTest;
    let surfaceID = '';
    let outputQueue = [];
    let outputCnt = 0;
    let frameTotal = 100;
    let sleepTime = 1000;
    let name = 'openh264enc';
    let mime = 'video/avc';
    let stopAtEOS = false;
    let resetAtEOS = false;
    let flushAtEOS = false;
    let sawOutputEOS = false;
    let needGetMediaDes = false;
    let fdWrite;
    let fileAsset;
    let context = featureAbility.getContext();
    let mediaLibraryTest = mediaLibrary.getMediaLibrary(context);
    let fileKeyObj = mediaLibrary.FileKey;
    let mediaDescription = {
        "codec_mime": 'video/avc',
        'width': 320,
        'height': 240,
        'pixel_format': 3,
        'frame_rate': 30,
        "codec_profile": media.AVCProfile.AVC_PROFILE_BASELINE,
        "video_encode_bitrate_mode": media.VideoEncodeBitrateMode.CBR
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
        outputQueue = [];
        outputCnt = 0;
        frameTotal = 100;
        stopAtEOS = false;
        resetAtEOS = false;
        flushAtEOS = false;
        sawOutputEOS = false;
        needGetMediaDes = false;
    })

    afterEach(async function () {
        console.info('afterEach case');
        if (videoEncodeProcessor != null) {
            await videoEncodeProcessor.release().then(() => {
                console.info("case release success");
            }, failCallback).catch(failCatch);
            videoEncodeProcessor = null;
        }
        await closeFdWrite();
    })

    afterAll(function () {
        console.info('afterAll case');
    })

    let failCallback = function (err) {
        console.info('case callback err : ' + err);
        expect(err).assertUndefined();
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
        stopAtEOS = false;
        resetAtEOS = false;
        flushAtEOS = false;
        sawOutputEOS = false;
        needGetMediaDes = false;
    }

    function sleep(time) {
        return new Promise((resolve) => setTimeout(resolve, time));
    }

    function wait(time) {
        for (let t = Date.now(); Date.now() - t <= time;);
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
        console.info('[mediaLibrary] case getFdWrite publicPath is ' + publicPath);
        let dataUri = await mediaLibraryTest.createAsset(mediaType, pathName, publicPath);
        if (dataUri != undefined) {
            let args = dataUri.id.toString();
            let fetchOp = {
                selections: fileKeyObj.ID + "=?",
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
            let res = fileio.writeSync(fdWrite, buf, {length: len});
            console.info('case fileio.write buffer success');
        } catch (e) {
            console.info('case fileio.write buffer error is ' + e);
        }
    }

    async function dequeueOutputs(done) {
        while (outputQueue.length > 0) {
            let outputObject = outputQueue.shift();
            outputCnt += 1;
            if (outputObject.flags == 1) {
                console.info("last frame, make choice");
                mediaTest.closeStream(surfaceID);
                sawOutputEOS = true;
                if (stopAtEOS) {
                    await toStop();
                } else if (resetAtEOS) {
                    await toReset();
                } else if (flushAtEOS) {
                    await toFlush();
                } else {
                    await toReset();
                    await toRelease();
                    done();
                }
            } else {
                console.info('not last frame, continue');
                writeFile(outputObject.data, outputObject.length);
                videoEncodeProcessor.freeOutputBuffer(outputObject).then(() => {
                    console.info('release output success');
                });
            }
        }
    }

    function setCallback(done) {
        console.info('case callback');
        videoEncodeProcessor.on('newOutputData', async (outBuffer) => {
            console.info('outputBufferAvailable');
            console.info('outBuffer.flags: ' + outBuffer.flags);
            if (needGetMediaDes) {
                videoEncodeProcessor.getOutputMediaDescription().then((MediaDescription) => {
                    console.info("get OutputMediaDescription success");
                    console.info('get outputMediaDescription : ' + MediaDescription);
                    needGetMediaDes = false;
                }, failCallback).catch(failCatch);
            }
            outputQueue.push(outBuffer);
            dequeueOutputs(done);
        });

        videoEncodeProcessor.on('error', (err) => {
            console.info('case error called,errName is' + err);
        });
        videoEncodeProcessor.on('streamChanged', (format) => {
            console.info('Output format changed: ' + format);
        });
    }

    async function toGetMediaCapability(mediaDescription, done) {
        await media.getMediaCapability().then((mediaCaps) => {
            console.info('getMediaCapability success');
            if (typeof (mediaCaps) != 'undefined') {
                mediaCaps.getVideoEncoderCaps().then((videoCapsArray) => {
                    console.info('getVideoEncoderCaps from media success');
                    if (typeof (videoCapsArray) != 'undefined') {
                        let videoCapsCount = 2;
                        for (let i = 0; i < videoCapsCount; i++) {
                            let videoCaps = videoCapsArray[i];
                            console.info('print videoCaps from videoCapsArray');
                            printVideoCaps(videoCaps, mediaDescription.width, mediaDescription.height);
                        }
                    } else {
                        console.info("case videoCapsArray is not defined");
                        expect().assertFail();
                        done();
                    }
                }, failCallback).catch(failCatch);
                mediaCaps.findVideoEncoder(mediaDescription).then((codeName) => {
                    console.info('findVideoEncoder success');
                    if (typeof (codeName) != 'undefined') {
                        console.info("case codeName " + codeName);
                    } else {
                        console.info("case codeName is not defined");
                        expect().assertFail();
                        done();
                    }
                }, failCallback).catch(failCatch);
            } else {
                console.info('mediaCaps is not defined');
                expect().assertFail();
                done();
            }
        }, failCallback).catch(failCatch);
    }

    async function toCreateByMime(mime, done) {
        await media.createVideoEncoderByMime(mime).then((processor) => {
            if (typeof (processor) != 'undefined') {
                videoEncodeProcessor = processor;
                console.info('in case : createVideoEncoderByMime success');
            } else {
                console.info('in case : createVideoEncoderByMime fail');
                expect().assertFail();
                done();
            }
        })
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

    async function toGetVideoEncoderCaps(width, height) {
        await videoEncodeProcessor.getVideoEncoderCaps().then((videoCaps) => {
            console.info("case get getVideoEncoderCaps success");
            printVideoCaps(videoCaps, width, height);
        }, failCallback).catch(failCatch);
    }

    async function printVideoCaps(videoCaps, width, height) {
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
        await videoCaps.getPreferredFrameRate(width, height).then((valueRange) => {
            console.info("case getPreferredFrameRate valueRange success");
            if (typeof (valueRange) != 'undefined') {
                console.info('getPreferredFrameRate.min: ' + valueRange.min);
                console.info('getPreferredFrameRate.max: ' + valueRange.max);
            } else {
                console.info('case getPreferredFrameRate valueRange is not defined');
                expect().assertFail();
            }
        }, failCallback).catch(failCatch);
        await videoCaps.getSupportedFrameRate(width, height).then((valueRange) => {
            console.info("case getSupportedFrameRate valueRange success");
            if (typeof (valueRange) != 'undefined') {
                console.info('getSupportedFrameRate.min: ' + valueRange.min);
                console.info('getSupportedFrameRate.max: ' + valueRange.max);
            } else {
                console.info('case getSupportedFrameRate valueRange is not defined');
                expect().assertFail();
            }
        }, failCallback).catch(failCatch);
        await videoCaps.isSizeSupported(width, height).then((trueOrFalse) => {
            console.info("case isSizeSupported valueRange for width:" + width + ", height: " + height);
            if (typeof (trueOrFalse) != 'undefined') {
                console.info('videoCaps.isSizeSupported: ' + trueOrFalse);
            } else {
                console.info('case isSizeSupported is not defined');
                expect().assertFail();
            }
        }, failCallback).catch(failCatch);
    }

    function toCreateStream() {
        mediaTest = mediademo.createMediaTest();
    }

    function toSetStreamParam(width, height, frameRate, frameTotal) {
        console.info('case set stream parameter');
        mediaTest.setResolution(width, height);
        mediaTest.setFrameRate(frameRate);
        mediaTest.setFrameCount(frameTotal);
    }

    async function toGetInputSurface() {
        await videoEncodeProcessor.getInputSurface().then((inputSurface) => {
            expect(inputSurface != undefined).assertTrue();
            console.info('case getInputSurface success');
            surfaceID = inputSurface;
        }, failCallback).catch(failCatch);
    }

    function toStartStream() {
        console.info('case start stream');
        mediaTest.startStream(surfaceID);
    }

    function toStopStream() {
        console.info('case stop stream');
        mediaTest.closeStream(surfaceID);
    }

    async function toConfigure(mediaDescription, savePath) {
        await videoEncodeProcessor.configure(mediaDescription).then(() => {
            console.info("case configure success");
        }, failCallback).catch(failCatch);
        await getFdWrite(savePath);
        console.info('case getFdWrite success');
    }

    async function toPrepare() {
        await videoEncodeProcessor.prepare().then(() => {
            console.info("case prepare success");
        }, failCallback).catch(failCatch);
    }

    async function toStart() {
        await videoEncodeProcessor.start().then(() => {
            console.info("case start success");
        }, failCallback).catch(failCatch);
    }

    async function toFlush() {
        outputQueue = [];
        await videoEncodeProcessor.flush().then(() => {
            console.info("case flush success");
        }, failCallback).catch(failCatch);
    }

    async function toStop() {
        await videoEncodeProcessor.stop().then(() => {
            console.info("case stop success");
        }, failCallback).catch(failCatch);
    }

    async function toReset() {
        resetParam();
        await videoEncodeProcessor.reset().then(() => {
            console.info("case reset success");
        }, failCallback).catch(failCatch);
    }

    async function toRelease() {
        resetParam();
        await videoEncodeProcessor.release().then(() => {
            console.info("case release success");
            videoEncodeProcessor = null;
        }, failCallback).catch(failCatch);
    }

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_PROMISE_0100
        * @tc.name      : test stop after last frame and reset
        * @tc.desc      : Configure diff from SetParameter
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_PROMISE_0100', 0, async function (done) {
        console.info("case test stop after last frame");
        let savePath = BASIC_PATH + '0100.h264';
        await toGetMediaCapability(mediaDescription, done);
        await toCreateByName(name, done);
        await toGetVideoEncoderCaps(mediaDescription.width, mediaDescription.height);
        toCreateStream();
        toSetStreamParam(mediaDescription.width, mediaDescription.height, mediaDescription.frame_rate, frameTotal);
        await toConfigure(mediaDescription, savePath);
        setCallback(done);
        await toGetInputSurface();
        await toPrepare();
        toStartStream();
        await toStart();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_PROMISE_0200
        * @tc.name      : test stop at runnning state and reset
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_PROMISE_0200', 0, async function (done) {
        console.info("case test stop at runnning state and reset");
        let savePath = BASIC_PATH + '0200.h264';
        mediaDescription.codec_profile = media.AVCProfile.AVC_PROFILE_HIGH;
        mediaDescription.video_encode_bitrate_mode = media.VideoEncodeBitrateMode.VBR;
        await toCreateByMime(mime, done);
        await toGetVideoEncoderCaps(mediaDescription.width, mediaDescription.height);
        toCreateStream();
        toSetStreamParam(mediaDescription.width, mediaDescription.height, mediaDescription.frame_rate, frameTotal);
        await toConfigure(mediaDescription, savePath);
        setCallback(done);
        await toGetInputSurface();
        await toPrepare();
        toStartStream();
        await toStart();
        await sleep(sleepTime);
        await toStop();
        toStopStream();
        await toReset();
        await toRelease();
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_PROMISE_0300
        * @tc.name      : test stop at end of stream and restart
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_PROMISE_0300', 0, async function (done) {
        console.info("test stop at end of stream and restart");
        let savePath = BASIC_PATH + '0300.h264';
        mediaDescription.width = 640;
        mediaDescription.height = 480;
        mediaDescription.codec_profile = media.AVCProfile.AVC_PROFILE_HIGH;
        mediaDescription.video_encode_bitrate_mode = media.VideoEncodeBitrateMode.VBR;
        frameTotal = 10;
        stopAtEOS = true;
        await toCreateByMime(mime, done);
        await toGetVideoEncoderCaps(mediaDescription.width, mediaDescription.height);
        toCreateStream();
        toSetStreamParam(mediaDescription.width, mediaDescription.height, mediaDescription.frame_rate, frameTotal);
        await toConfigure(mediaDescription, savePath);
        setCallback(done);
        await toGetInputSurface();
        await toPrepare();
        toStartStream();
        await toStart();
        await sleep(sleepTime);
        resetParam();
        toSetStreamParam(mediaDescription.width, mediaDescription.height, mediaDescription.frame_rate, frameTotal);
        await toStart();
        toStartStream();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_PROMISE_0400
        * @tc.name      : test stop at running state and restart
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_PROMISE_0400', 0, async function (done) {
        console.info("test stop at running state and restart");
        let savePath = BASIC_PATH + '0400.h264';
        mediaDescription.codec_profile = media.AVCProfile.AVC_PROFILE_HIGH;
        mediaDescription.video_encode_bitrate_mode = media.VideoEncodeBitrateMode.VBR;
        frameTotal = 1000;
        await toCreateByMime(mime, done);
        await toGetVideoEncoderCaps(mediaDescription.width, mediaDescription.height);
        toCreateStream();
        toSetStreamParam(mediaDescription.width, mediaDescription.height, mediaDescription.frame_rate, frameTotal);
        await toConfigure(mediaDescription, savePath);
        setCallback(done);
        await toGetInputSurface();
        await toPrepare();
        toStartStream();
        await toStart();
        await sleep(sleepTime);
        toStopStream();
        await toStop();
        resetParam();
        toSetStreamParam(mediaDescription.width, mediaDescription.height, mediaDescription.frame_rate, frameTotal);
        await toStart();
        toStartStream();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_PROMISE_0500
        * @tc.name      : test flush at running state
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_PROMISE_0500', 0, async function (done) {
        console.info("case test flush at running state");
        let savePath = BASIC_PATH + '0500.h264';
        mediaDescription.codec_profile = media.AVCProfile.AVC_PROFILE_HIGH;
        mediaDescription.video_encode_bitrate_mode = media.VideoEncodeBitrateMode.CBR;
        frameTotal = 500;
        await toCreateByMime(mime, done);
        await toGetVideoEncoderCaps(mediaDescription.width, mediaDescription.height);
        toCreateStream();
        toSetStreamParam(mediaDescription.width, mediaDescription.height, mediaDescription.frame_rate, frameTotal);
        await toConfigure(mediaDescription, savePath);
        setCallback(done);
        await toGetInputSurface();
        await toPrepare();
        toStartStream();
        await toStart();
        await sleep(sleepTime);
        await toFlush();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_PROMISE_0600
        * @tc.name      : test flush at end of stream
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_PROMISE_0600', 0, async function (done) {
        console.info("case test flush at end of stream");
        let savePath = BASIC_PATH + '0600.h264';
        mediaDescription.codec_profile = media.AVCProfile.AVC_PROFILE_MAIN;
        mediaDescription.video_encode_bitrate_mode = media.VideoEncodeBitrateMode.CBR;
        flushAtEOS = true;
        frameTotal = 10;
        await toCreateByMime(mime, done);
        await toGetVideoEncoderCaps(mediaDescription.width, mediaDescription.height);
        toCreateStream();
        toSetStreamParam(mediaDescription.width, mediaDescription.height, mediaDescription.frame_rate, frameTotal);
        await toConfigure(mediaDescription, savePath);
        setCallback(done);
        await toGetInputSurface();
        await toPrepare();
        toStartStream();
        await toStart();
        await sleep(sleepTime);
        resetParam();
        toSetStreamParam(mediaDescription.width, mediaDescription.height, mediaDescription.frame_rate, frameTotal);
        toStartStream();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_PROMISE_0700
        * @tc.name      : test reconfigure
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_PROMISE_0700', 0, async function (done) {
        console.info("case test reconfigure");
        let savePath = BASIC_PATH + '0700.h264';
        mediaDescription.codec_profile = media.AVCProfile.AVC_PROFILE_BASELINE;
        mediaDescription.video_encode_bitrate_mode = media.VideoEncodeBitrateMode.CBR;
        resetAtEOS = true;
        frameTotal = 10;
        await toCreateByMime(mime, done);
        await toGetVideoEncoderCaps(mediaDescription.width, mediaDescription.height);
        toCreateStream();
        toSetStreamParam(mediaDescription.width, mediaDescription.height, mediaDescription.frame_rate, frameTotal);
        await toConfigure(mediaDescription, savePath);
        setCallback(done);
        await toGetInputSurface();
        await toPrepare();
        toStartStream();
        await toStart();
        await sleep(sleepTime);
        resetParam();
        await closeFdWrite();
        mediaDescription.width = 640;
        mediaDescription.height = 480;
        mediaDescription.codec_profile = media.AVCProfile.AVC_PROFILE_HIGH;
        mediaDescription.video_encode_bitrate_mode = media.VideoEncodeBitrateMode.VBR;
        let savePath2 = BASIC_PATH + '0701.h264';
        toSetStreamParam(mediaDescription.width , mediaDescription.height, mediaDescription.frame_rate, frameTotal);
        await toConfigure(mediaDescription, savePath2);
        setCallback(done);
        await toGetInputSurface();
        await toPrepare();
        toStartStream();
        await toStart();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_PROMISE_0800
        * @tc.name      : test recreate videoencoder
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_SOFTWARE_ENCODER_FUNCTION_PAR_PROMISE_0800', 0, async function (done) {
        console.info("case test recreate videoEncoder");
        let savePath = BASIC_PATH + '0800.h264';
        mediaDescription.codec_profile = media.AVCProfile.AVC_PROFILE_HIGH;
        mediaDescription.video_encode_bitrate_mode = media.VideoEncodeBitrateMode.VBR;
        resetAtEOS = true;
        frameTotal = 10;
        await toCreateByMime(mime, done);
        await toGetVideoEncoderCaps(mediaDescription.width, mediaDescription.height);
        toCreateStream();
        toSetStreamParam(mediaDescription.width, mediaDescription.height, mediaDescription.frame_rate, frameTotal);
        await toConfigure(mediaDescription, savePath);
        setCallback(done);
        await toGetInputSurface();
        await toPrepare();
        toStartStream();
        await toStart();
        await sleep(sleepTime);
        await toRelease();
        resetParam();
        await closeFdWrite();
        mediaDescription.width = 640;
        mediaDescription.height = 480;
        let savePath2 = BASIC_PATH + '0801.h264';
        await toCreateByMime(mime, done);
        toSetStreamParam(mediaDescription.width, mediaDescription.height, mediaDescription.frame_rate, frameTotal);
        await toConfigure(mediaDescription, savePath2);
        setCallback(done);
        await toGetInputSurface();
        await toPrepare();
        toStartStream();
        await toStart();
    })
})