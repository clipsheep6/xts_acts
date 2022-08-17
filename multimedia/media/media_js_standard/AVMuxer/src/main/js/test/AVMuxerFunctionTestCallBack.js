/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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
import Fileio from '@ohos.fileio'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import * as mediaTestBase from '../../../../../MediaTestBase.js'
import * as AVMuxerTestBase from './AVMuxerTestBase.js'

describe('AVMuxerFunctionTestCallBack', function () {
    const EVENTS = require('events');
    const eventEmitter = new EVENTS.EventEmitter();
    let parameters;
    let fdHead = 'fd://';
    let testAVMuxer = null;
    let videoBuffer;
    let videoFrameCount = 0;
    let videoTimestamp = 0;
    let videoOffset = 0;
    let isFirstFrameVideo = true;
    let isFirstFrameAudio = true;
    let audioBuffer;
    let audioFrameCount = 0;
    let audioTimestamp = 0;
    let audioOffset = 0;
    let data;
    let outputFileFdPath;
    let avMuxerFormatList = [];
    let videoTrackIndex = 0;
    let audioTrackIndex = 0;
    let createAvMuxerEvent = 'createAvMuxer';
    let setOutputEvent = 'setOutput';
    let audioAddTrackEvent = 'audioAddTrack';
    let videoAddTrackEvent = 'videoAddTrack';
    let startEvent = 'start';
    let audioWriteTrackSampleEvent = 'audioWriteTrackSample';
    let videoWriteTrackSampleEvent = 'videoWriteTrackSample';
    let concurrentWriteTrackSampleEvent = 'concurrentWriteTrackSample';
    let stopEvent = 'stop';
    let releaseEvent = 'release';
    let audioPlayEvent = 'audioPlay';
    let videoPlayEvent = 'videoPlay';
    let audioAddTrack16Event = 'audioAddTrack16';
    let audioWriteTrackSample16Event = 'audioWriteTrackSample16';
    let pageId = 0;
    let surfaceID = '';
    const PAGE_PATH1 = 'pages/surfaceTest/surfaceTest';
    const PAGE_PATH2 = 'pages/surfaceTest2/surfaceTest2';
    let audioTrackArr = [];
    let info;
    let writeMessage = '';
    const FIRST_INDEX = 0;
    const SECOND_INDEX = 1;
    beforeAll(async function () {
        console.info('beforeAll case');
    })

    beforeEach(async function () {
        console.info('------------------------beforeEach start------------------------');
        await mediaTestBase.toNewPage(PAGE_PATH1, PAGE_PATH2, pageId);
        pageId = (pageId + 1) % 2;
        videoFrameCount = 0;
        videoTimestamp = 0;
        videoOffset = 0;
        audioFrameCount = 0;
        audioTimestamp = 0;
        audioOffset = 0;
        isFirstFrameVideo = true;
        isFirstFrameAudio = true;
        parameters = null;
        avMuxerFormatList = [];
        outputFileFdPath = '';
        console.info('------------------------beforeEach end------------------------');
    })

    afterEach(async function () {
        console.info('------------------------afterEach start------------------------');
        await mediaTestBase.clearRouter();
        surfaceID = '';
        if (testAVMuxer != undefined) {
            await testAVMuxer.release().then(() => {
                console.info('afterEach AVMuxer release success');
            }, (err) => {
                console.info('afterEach AVMuxer release fail, err is : ' + err);
            })
        }
        console.info('------------------------afterEach end------------------------');
    })

    afterAll(async function () {
        console.info('afterAll case');
    })

    function toNextStep(testAVMuxer, steps, done) {
        if (steps.length == 0) {
            done();
        } else {
            if (steps[FIRST_INDEX] == createAvMuxerEvent) {
                eventEmitter.emit(steps[FIRST_INDEX], steps, done);
            } else if (steps[FIRST_INDEX] == audioPlayEvent || steps[FIRST_INDEX] == videoPlayEvent) {
                eventEmitter.emit(steps[FIRST_INDEX], done);
            } else {
                eventEmitter.emit(steps[FIRST_INDEX], testAVMuxer, steps, done);
            }
        }
    }

    function toGetAVMuxerFormatList(parameter, steps, done) {
        let mediaCapability;
        media.getMediaCapability((err, data) => {
            mediaCapability = data;
            console.info('get MediaCapability success, data is : ' + mediaCapability);
            mediaTestBase.printError(err, done);
            mediaCapability.getAVMuxerFormatList((err, data) => {
                avMuxerFormatList = data;
                console.info('get AVMuxerFormatList success, data is : ' + JSON.stringify(avMuxerFormatList));
                mediaTestBase.printError(err, done);
                if (avMuxerFormatList.indexOf(parameter.outputFormat) != -1) {
                    console.info('Format supported!!!');
                    toNextStep(testAVMuxer, steps, done);
                } else {
                    console.info('Format not supported!!!');
                    expect().assertFail();
                    done()
                }
            })
        })
    }

    async function readFile(pathName, done) {
        let fdReturn = await mediaTestBase.getFdRead(pathName, done);
        console.info('fdReturn is : ' + JSON.stringify(fdReturn));
        try {
            console.info('try read file');
            let stat = Fileio.fstatSync(fdReturn);
            let length = stat.size;
            let buf = new ArrayBuffer(length);
            let num = Fileio.readSync(fdReturn, buf, {length:length});
            console.info('buffer is : ' + buf);
            console.info('result number is : ' + num);
            console.info('read file success');
            return buf;
        } catch (err) {
            mediaTestBase.printError(err, done);
        }
    }

    async function toGetAudioOutputFileFdPath(pathName) {
        let fdObject;
        let fdPath;
        fdObject = await mediaTestBase.getAudioFd(pathName);
        console.info('fdObject is : ' + fdObject.fdNumber);
        fdPath = fdHead + fdObject.fdNumber.toString();
        console.info('fdPath is : ' + fdPath);
        return fdPath;
    }

    async function toGetVideoOutputFileFdPath(pathName) {
        let fdObject;
        let fdPath;
        fdObject = await mediaTestBase.getFd(pathName);
        console.info('fdObject is : ' + fdObject.fdNumber);
        fdPath = fdHead + fdObject.fdNumber.toString();
        console.info('fdPath is : ' + fdPath);
        return fdPath;
    }

    async function entrance(parameter, outputFileName, steps, done) {
        parameters = parameter;
        console.info('parameters is : ' + JSON.stringify(parameters));
        if (parameters.mediaType == 'onlyAudio') {
            audioBuffer = await readFile(parameters.audioInputFileName, done);
            outputFileFdPath = await toGetAudioOutputFileFdPath(outputFileName);
        } else if (parameters.mediaType == 'onlyVideo') {
            videoBuffer = await readFile(parameters.videoInputFileName, done);
            outputFileFdPath = await toGetVideoOutputFileFdPath(outputFileName);
        } else if (parameters.mediaType == 'Audio_and_Video') {
            audioBuffer = await readFile(parameters.audioInputFileName, done);
            videoBuffer = await readFile(parameters.videoInputFileName, done);
            outputFileFdPath = await toGetVideoOutputFileFdPath(outputFileName);
        }
        toGetAVMuxerFormatList(parameter, steps, done);
    }

    eventEmitter.on(createAvMuxerEvent, (steps, done) => {
        console.info('start createAvMuxer!')
        steps.shift();
        media.createAvMuxer((err, data) => {
            testAVMuxer = data;
            console.info('createAvMuxer success , data is : ' + testAVMuxer);
            mediaTestBase.printError(err, done);
            toNextStep(testAVMuxer, steps, done);
        })
    });

    eventEmitter.on(setOutputEvent, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.setOutput(outputFileFdPath, parameters.outputFormat, (err, data) => {
            console.info('setOutput success ,  data is : ' + data);
            mediaTestBase.printError(err, done);
            toNextStep(testAVMuxer, steps, done);
        })
    });

    eventEmitter.on(audioAddTrackEvent, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.addTrack(parameters.audioDescription,(err,data)=>{
            audioTrackIndex = data;
            console.info('addTrack success , data is : ' + audioTrackIndex);
            mediaTestBase.printError(err, done);
            toNextStep(testAVMuxer, steps, done);
        })
    });

    eventEmitter.on(videoAddTrackEvent, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.addTrack(parameters.videoDescription,(err,data)=>{
            videoTrackIndex = data;
            console.info('addTrack success , data is : ' + videoTrackIndex);
            mediaTestBase.printError(err, done);
            toNextStep(testAVMuxer, steps, done);
        })
    });

    eventEmitter.on(startEvent, (testAVMuxer, steps, done) => {
        if (parameters.rotation != undefined) {
            testAVMuxer.rotation = parameters.rotation;
            console.info('rotation set success, data is : ' + parameters.rotation);
        }
        if (parameters.location != undefined) {
            testAVMuxer.location = parameters.location;
            console.info('location set success, data is : ' + JSON.stringify(parameters.location));
        }
        steps.shift();
        testAVMuxer.start((err,data)=>{
            console.info('start success , data is : ' + data );
            mediaTestBase.printError(err, done);
            toNextStep(testAVMuxer, steps, done);
        })
    });

    eventEmitter.on(videoWriteTrackSampleEvent, (testAVMuxer, steps, done) => {
        console.info('writeVideoBuffer start!');
        data = videoBuffer.slice(videoOffset, videoOffset + parameters.videoFrameSize[videoFrameCount]);
        let size = parameters.videoFrameSize[videoFrameCount];
        let info = {
            sampleInfo: {
                timeMs: videoTimestamp,
                size: size,
                offset: 0,
                flags: 0
            },
            trackIndex: videoTrackIndex
        }
        if (parameters.videoDescription.codec_mime == 'video/avc') {
            if (isFirstFrameVideo) {
                info.sampleInfo.flags = media.FrameFlags.CODEC_DATA;
                isFirstFrameVideo = false;
            } else if (videoFrameCount == parameters.videoFrameSize.length) {
                info.sampleInfo.flags = media.FrameFlags.EOS_FRAME;
            } else if (parameters.videoFrameFlag[videoFrameCount] == 'I') {
                info.sampleInfo.flags = media.FrameFlags.SYNC_FRAME;
            } else {
                info.sampleInfo.flags = media.FrameFlags.PARTIAL_FRAME;
            }
        } else {
            if (isFirstFrameVideo) {
                info.sampleInfo.flags = media.FrameFlags.CODEC_DATA;
                isFirstFrameVideo = false;
            } else if (videoFrameCount == parameters.videoFrameSize.length) {
                info.sampleInfo.flags = media.FrameFlags.EOS_FRAME;
            } else {
                info.sampleInfo.flags = media.FrameFlags.PARTIAL_FRAME;
            }
        }
        videoTimestamp += 33
        videoOffset = videoOffset + parameters.videoFrameSize[videoFrameCount];
        testAVMuxer.writeTrackSample(data, info, (err, data) => {
            console.info('data is : ' + data + '  sampleInfo is : ' + JSON.stringify(info));
            console.info('videoFrameCount: ' + videoFrameCount + ' video_frame_size.videoFrameSize.length: '
            + parameters.videoFrameSize.length);
            if (err != undefined) {
                mediaTestBase.printError(err, done);
            } else {
                videoFrameCount++;
                if (videoFrameCount >= parameters.videoFrameSize.length) {
                    steps.shift();
                    toNextStep(testAVMuxer, steps, done);
                } else {
                    eventEmitter.emit(videoWriteTrackSampleEvent, testAVMuxer, steps, done);
                }
            }
        })
    });

    eventEmitter.on(audioWriteTrackSampleEvent, (testAVMuxer, steps, done) => {
        console.info('writeAudioBuffer start !');
        data = audioBuffer.slice(audioOffset, audioOffset + parameters.audioFrameSize[audioFrameCount]);
        let size = parameters.audioFrameSize[audioFrameCount];
        let info = {
            sampleInfo: {
                timeMs: audioTimestamp,
                size: size,
                offset: 0,
                flags: 0
            },
            trackIndex: audioTrackIndex
        }
        if (isFirstFrameAudio) {
            info.sampleInfo.flags = media.FrameFlags.CODEC_DATA;
            isFirstFrameAudio = false;
        } else if (audioFrameCount == parameters.audioFrameSize.length) {
            info.sampleInfo.flags = media.FrameFlags.EOS_FRAME;
        } else {
            info.sampleInfo.flags = 0;
        }
        audioTimestamp += 33;
        audioOffset = audioOffset + parameters.audioFrameSize[audioFrameCount];
        testAVMuxer.writeTrackSample(data, info, (err, data) => {
            console.info('data is : ' + data + ', sampleInfo is : ' + JSON.stringify(info));
            console.info('audioFrameCount: ' + audioFrameCount + ' audio_frame_size.length: '
            + parameters.audioFrameSize.length);
            if (err != undefined) {
                mediaTestBase.printError(err, done);
            } else {
                audioFrameCount++;
                if (audioFrameCount >= parameters.audioFrameSize.length) {
                    steps.shift();
                    toNextStep(testAVMuxer, steps, done);
                } else {
                    eventEmitter.emit(audioWriteTrackSampleEvent, testAVMuxer, steps, done);
                }
            }
        })
    });

    eventEmitter.on(concurrentWriteTrackSampleEvent, (testAVMuxer, steps, done) => {
        console.info('writeBuffer start !');
        if (steps[SECOND_INDEX] == 'audio') {
            data = audioBuffer.slice(audioOffset, audioOffset + parameters.audioFrameSize[audioFrameCount]);
            let audioSize = parameters.audioFrameSize[audioFrameCount];
            info = {
                sampleInfo: {
                    timeMs: audioTimestamp,
                    size: audioSize,
                    offset: 0,
                    flags: 0
                },
                trackIndex: audioTrackIndex
            }
            if (isFirstFrameAudio) {
                info.sampleInfo.flags = media.FrameFlags.CODEC_DATA;
                isFirstFrameAudio = false;
            } else if (audioFrameCount == parameters.audioFrameSize.length) {
                info.sampleInfo.flags = media.FrameFlags.EOS_FRAME;
            } else {
                info.sampleInfo.flags = 0;
            }
            audioTimestamp += 33;
            audioOffset = audioOffset + parameters.audioFrameSize[audioFrameCount];
            writeMessage = 'audioFrameCount: ' + audioFrameCount + ' audio_frame_size.length: '
            + parameters.audioFrameSize.length;
            audioFrameCount++;
            steps[SECOND_INDEX] = 'video';
        } else {
            data = videoBuffer.slice(videoOffset, videoOffset + parameters.videoFrameSize[videoFrameCount]);
            let videoSize = parameters.videoFrameSize[videoFrameCount];
            info = {
                sampleInfo: {
                    timeMs: videoTimestamp,
                    size: videoSize,
                    offset: 0,
                    flags: 0
                },
                trackIndex: videoTrackIndex
            }
            if (parameters.videoDescription.codec_mime == 'video/avc') {
                if (isFirstFrameVideo) {
                    info.sampleInfo.flags = media.FrameFlags.CODEC_DATA;
                    isFirstFrameVideo = false;
                } else if (videoFrameCount == parameters.videoFrameSize.length) {
                    info.sampleInfo.flags = media.FrameFlags.EOS_FRAME;
                } else if (parameters.videoFrameFlag[videoFrameCount] == 'I') {
                    info.sampleInfo.flags = media.FrameFlags.SYNC_FRAME;
                } else {
                    info.sampleInfo.flags = media.FrameFlags.PARTIAL_FRAME;
                }
            } else {
                if (isFirstFrameVideo) {
                    info.sampleInfo.flags = media.FrameFlags.CODEC_DATA;
                    isFirstFrameVideo = false;
                } else if (videoFrameCount == parameters.videoFrameSize.length) {
                    info.sampleInfo.flags = media.FrameFlags.EOS_FRAME;
                } else {
                    info.sampleInfo.flags = media.FrameFlags.PARTIAL_FRAME;
                }
            }
            videoTimestamp += 33
            videoOffset = videoOffset + parameters.videoFrameSize[videoFrameCount];
            writeMessage = 'videoFrameCount: ' + videoFrameCount + ' video_frame_size.length: '
            + parameters.videoFrameSize.length;
            steps[SECOND_INDEX] = 'audio';
            videoFrameCount++;
        }
        if (audioFrameCount <= parameters.audioFrameSize.length
        && videoFrameCount <= parameters.videoFrameSize.length) {
            testAVMuxer.writeTrackSample(data, info, (err, data) => {
                console.info('data is : ' + data + ', sampleInfo is : ' + JSON.stringify(info));
                console.info(writeMessage);
                if (err != undefined) {
                    mediaTestBase.printError(err, done);
                } else {
                    eventEmitter.emit(concurrentWriteTrackSampleEvent, testAVMuxer, steps, done);
                }
            })
        } else if (audioFrameCount >= parameters.audioFrameSize.length
        && videoFrameCount < parameters.videoFrameSize.length) {
            steps.shift();
            eventEmitter.emit(videoWriteTrackSampleEvent, testAVMuxer, steps, done);
        } else if (audioFrameCount < parameters.audioFrameSize.length
        && videoFrameCount >= parameters.videoFrameSize.length) {
            steps.shift();
            eventEmitter.emit(audioWriteTrackSampleEvent, testAVMuxer, steps, done);
        }
    });

    eventEmitter.on(stopEvent, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.stop((err,data) =>{
            console.info('stop success , data is : ' + data);
            mediaTestBase.printError(err, done);
            toNextStep(testAVMuxer, steps, done);
        })
    });

    eventEmitter.on(releaseEvent, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.release((err,data)=>{
            console.info('release success , data is : ' + data);
            mediaTestBase.printError(err, done);
            toNextStep(testAVMuxer, steps, done);
        })
    });

    eventEmitter.on(audioPlayEvent, (done) => {
        AVMuxerTestBase.playAudio(outputFileFdPath, done);
    });

    eventEmitter.on(videoPlayEvent, (done) => {
        AVMuxerTestBase.playVideo(surfaceID, outputFileFdPath, done);
    });

    eventEmitter.on(audioAddTrack16Event, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.addTrack(parameters.audioDescription,(err,data)=>{
            audioTrackIndex = data;
            console.info('addTrack success , data is : ' + audioTrackIndex);
            mediaTestBase.printError(err, done);
            audioTrackArr.push(audioTrackIndex);
            toNextStep(testAVMuxer, steps, done);
        })
    });

    eventEmitter.on(audioWriteTrackSample16Event, (testAVMuxer, steps, done) => {
        console.info('writeAudioBuffer start !');
        data = audioBuffer.slice(audioOffset, audioOffset + parameters.audioFrameSize[audioFrameCount]);
        let size = parameters.audioFrameSize[audioFrameCount];
        let info = {
            sampleInfo: {
                timeMs: audioTimestamp,
                size: size,
                offset: 0,
                flags: 0
            },
            trackIndex: audioTrackArr[0]
        }
        if (isFirstFrameAudio) {
            info.sampleInfo.flags = media.FrameFlags.CODEC_DATA;
            isFirstFrameAudio = false;
        } else if (audioFrameCount == parameters.audioFrameSize.length) {
            info.sampleInfo.flags = media.FrameFlags.EOS_FRAME;
        } else {
            info.sampleInfo.flags = 0;
        }
        audioTimestamp += 33;
        audioOffset = audioOffset + parameters.audioFrameSize[audioFrameCount];
        testAVMuxer.writeTrackSample(data, info, (err, data) => {
            console.info('data is : ' + data + ', sampleInfo is : ' + JSON.stringify(info));
            console.info('audioFrameCount: ' + audioFrameCount + ' audio_frame_size.length: '
            + parameters.audioFrameSize.length);
            if(err!=undefined){
                mediaTestBase.printError(err, done);
            }else{
                audioFrameCount++;
                if (audioFrameCount >= parameters.audioFrameSize.length) {
                    steps.shift();
                    audioTrackArr.shift();
                    isFirstFrameAudio = true;
                    audioTimestamp = 0;
                    audioFrameCount = 0;
                    audioOffset = 0;
                    toNextStep(testAVMuxer, steps, done);
                } else {
                    eventEmitter.emit(audioWriteTrackSample16Event, testAVMuxer, steps, done);
                }
            }
        })
    });

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0100
        * @tc.name      : AVMuxer (callback) for audio, audio:aac, format:m4a
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0100', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0100');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackEvent, startEvent,
        audioWriteTrackSampleEvent, stopEvent, releaseEvent, audioPlayEvent];
        await entrance(AVMuxerTestBase.AUDIO_AAC, 'FUNCTION_CALLBACK_0100.m4a', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0200
        * @tc.name      : AVMuxer (callback) for video, video:h264, format:mp4
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0200', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0200');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent,
        videoWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.VIDEO_H264, 'FUNCTION_CALLBACK_0200.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0300
        * @tc.name      : AVMuxer (callback) for video, video:mpeg4, format:mp4
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0300', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0300');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent,
        videoWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.VIDEO_MPEG4, 'FUNCTION_CALLBACK_0300.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0400
        * @tc.name      : AVMuxer (callback) for video and audio, audio:aac, video:h264, format:mp4
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0400', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0400');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackEvent, videoAddTrackEvent, startEvent,
        videoWriteTrackSampleEvent, audioWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.AAC_H264, 'FUNCTION_CALLBACK_0400.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0500
        * @tc.name      : AVMuxer (callback) for video and audio, audio:aac, video:mpeg4, format:mp4
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0500', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0500');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackEvent, videoAddTrackEvent, startEvent,
        audioWriteTrackSampleEvent, videoWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.AAC_MPEG4, 'FUNCTION_CALLBACK_0500.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0600
        * @tc.name      : AVMuxer (callback) for video and audio, audio:mp3, video:h264, format:mp4
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0600', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0600');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackEvent, videoAddTrackEvent, startEvent,
        audioWriteTrackSampleEvent, videoWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.MP3_H264, 'FUNCTION_CALLBACK_0600.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0700
        * @tc.name      : AVMuxer (callback) for video and audio, audio:mp3, video:mpeg4, format:mp4
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0700', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0700');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackEvent, videoAddTrackEvent, startEvent,
        audioWriteTrackSampleEvent, videoWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.MP3_MPEG4, 'FUNCTION_CALLBACK_0700.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0800
        * @tc.name      : Create an AVMuxer instance
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0800', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0800');
        let steps = [createAvMuxerEvent];
        await eventEmitter.emit(steps[FIRST_INDEX], steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0900
        * @tc.name      : get AVMuxerFormatList
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0900', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_0900');
        let steps = [];
        await toGetAVMuxerFormatList(AVMuxerTestBase.MP3_H264, steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1000
        * @tc.name      : mux is successful and can be played
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1000', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1000');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackEvent, videoAddTrackEvent, startEvent,
        audioWriteTrackSampleEvent, videoWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.AUDIO_VIDEO_ALL, 'FUNCTION_CALLBACK_1000.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1100
        * @tc.name      : set up an audio track successfully
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1100', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1100');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackEvent];
        await entrance(AVMuxerTestBase.MP3_MPEG4, 'FUNCTION_CALLBACK_1100.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1200
        * @tc.name      : Set up 16 audio tracks successfully
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1200', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1200');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrack16Event, audioAddTrack16Event,
        audioAddTrack16Event, audioAddTrack16Event, audioAddTrack16Event, audioAddTrack16Event,
        audioAddTrack16Event, audioAddTrack16Event, audioAddTrack16Event, audioAddTrack16Event,
        audioAddTrack16Event, audioAddTrack16Event, audioAddTrack16Event, audioAddTrack16Event,
        audioAddTrack16Event, audioAddTrack16Event, startEvent, audioWriteTrackSample16Event,
        audioWriteTrackSample16Event, audioWriteTrackSample16Event, audioWriteTrackSample16Event,
        audioWriteTrackSample16Event, audioWriteTrackSample16Event, audioWriteTrackSample16Event,
        audioWriteTrackSample16Event, audioWriteTrackSample16Event, audioWriteTrackSample16Event,
        audioWriteTrackSample16Event, audioWriteTrackSample16Event, audioWriteTrackSample16Event,
        audioWriteTrackSample16Event, audioWriteTrackSample16Event, audioWriteTrackSample16Event,
        stopEvent, releaseEvent, audioPlayEvent];
        await entrance(AVMuxerTestBase.AUDIO_AAC, 'FUNCTION_CALLBACK_1200.m4a', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1300
        * @tc.name      : Set up 5 audio tracks successfully
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1300', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1300');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackEvent, audioAddTrackEvent,
        audioAddTrackEvent, audioAddTrackEvent, audioAddTrackEvent];
        await entrance(AVMuxerTestBase.MP3_MPEG4, 'FUNCTION_CALLBACK_1300.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1400
        * @tc.name      : write audio data first, then video data
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1400', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1400');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackEvent, videoAddTrackEvent, startEvent,
        audioWriteTrackSampleEvent, videoWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.AAC_MPEG4, 'FUNCTION_CALLBACK_1400.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1500
        * @tc.name      : write video data first, then audio data
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1500', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1500');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackEvent, videoAddTrackEvent, startEvent,
        videoWriteTrackSampleEvent, audioWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.AAC_H264, 'FUNCTION_CALLBACK_1500.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1600
        * @tc.name      : audio and video are written alternately
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1600', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1600');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackEvent, videoAddTrackEvent, startEvent,
        concurrentWriteTrackSampleEvent,'audio', stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.AUDIO_VIDEO_ALTERNATE_WRITING, 'FUNCTION_CALLBACK_1600.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1700
        * @tc.name      : video and audio are written alternately
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1700', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1700');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackEvent, videoAddTrackEvent, startEvent,
        concurrentWriteTrackSampleEvent, 'video',stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.VIDEO_AUDIO_ALTERNATE_WRITING, 'FUNCTION_CALLBACK_1700.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1800
        * @tc.name      : set up a video track
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1800', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1800');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent];
        await entrance(AVMuxerTestBase.VIDEO_H264, 'FUNCTION_CALLBACK_1800.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1900
        * @tc.name      : Set rotation 0°
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1900', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_1900');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent,
        videoWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.SET_ROTATION_0, 'FUNCTION_CALLBACK_1900.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2000
        * @tc.name      : Set rotation 90°
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2000', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2000');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent,
        videoWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.SET_ROTATION_90, 'FUNCTION_CALLBACK_2000.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2100
        * @tc.name      : Set rotation 180°
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2100', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2100');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent,
        videoWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.SET_ROTATION_180, 'FUNCTION_CALLBACK_2100.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2200
        * @tc.name      : Set rotation 270°
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2200', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2200');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent,
        videoWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.SET_ROTATION_270, 'FUNCTION_CALLBACK_2200.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2300
        * @tc.name      : set longitude to 50 and latitude to 100
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2300', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2300');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent,
        videoWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.SET_LONGITUDE_50_LATITUDE_90, 'FUNCTION_CALLBACK_2300.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2400
        * @tc.name      : set one instance
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2400', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2400');
        let steps = [createAvMuxerEvent];
        await entrance(AVMuxerTestBase.VIDEO_H264, 'FUNCTION_CALLBACK_2400.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2500
        * @tc.name      : Set 16 instances
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2500', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2500');
        let steps = [createAvMuxerEvent, createAvMuxerEvent, createAvMuxerEvent, createAvMuxerEvent,
        createAvMuxerEvent, createAvMuxerEvent, createAvMuxerEvent, createAvMuxerEvent, createAvMuxerEvent,
        createAvMuxerEvent, createAvMuxerEvent, createAvMuxerEvent, createAvMuxerEvent, createAvMuxerEvent,
        createAvMuxerEvent, createAvMuxerEvent];
        await entrance(AVMuxerTestBase.VIDEO_H264, 'FUNCTION_CALLBACK_2500.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2600
        * @tc.name      : Set 2 instances
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2600', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2600');
        let steps = [createAvMuxerEvent, createAvMuxerEvent];
        await entrance(AVMuxerTestBase.VIDEO_H264, 'FUNCTION_CALLBACK_2600.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2700
        * @tc.name      : mux files can be played
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2700', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2700');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackEvent, videoAddTrackEvent, startEvent,
        audioWriteTrackSampleEvent, videoWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.AAC_H264, 'FUNCTION_CALLBACK_2700.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2800
        * @tc.name      : set 1 video track and 9 audio track
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2800', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_FUNCTION_CALLBACK_2800');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, audioAddTrackEvent,
        audioAddTrackEvent, audioAddTrackEvent, audioAddTrackEvent, audioAddTrackEvent, audioAddTrackEvent,
        audioAddTrackEvent, audioAddTrackEvent, audioAddTrackEvent];
        await entrance(AVMuxerTestBase.MP3_H264, 'FUNCTION_CALLBACK_2800.mp4', steps, done);
    })

})
