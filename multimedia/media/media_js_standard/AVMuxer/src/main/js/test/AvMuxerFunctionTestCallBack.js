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
import * as AvMuxerTestBase from './AvMuxerTestBase.js'

describe('AvMuxerFunctionTestCallBack', function () {
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
    let createAVMuxer_event = 'createAVMuxer';
    let setOutput_event = 'setOutput';
    let audioAddTrack_event = 'audioAddTrack';
    let videoAddTrack_event = 'videoAddTrack';
    let start_event = 'start';
    let audioWriteTrackSample_event = 'audioWriteTrackSample';
    let videoWriteTrackSample_event = 'videoWriteTrackSample';
    let stop_event = 'stop';
    let release_event = 'release';


    beforeAll(async function () {
        console.info('beforeAll case');
    })

    beforeEach(async function () {
        console.info('beforeEach case');
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
    })

    afterEach(async function () {
        console.info('afterEach case');
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
        if (testAVMuxer != undefined) {
            testAVMuxer.release().then(() => {
                console.info('afterEach AVMuxer release success');
            }, (err) => {
                console.info('afterEach AVMuxer release fail, err is : ' + err);
            })
        }
    })

    afterAll(async function () {
        console.info('afterAll case');
    })

    function sleep(time) {
        for (let t = Date.now(); Date.now() - t <= time; );
    }

    function toNextStep(testAVMuxer, steps, done) {
        if (steps.length == 0) {
            done();
        } else {
            if (steps[0] == createAVMuxer_event) {
                eventEmitter.emit(steps[0], steps, done);
            } else {
                eventEmitter.emit(steps[0], testAVMuxer, steps, done);
            }
        }

    }

    function toGetAVMuxerFormatList(parameter, steps, done) {
        let mediaCapability;
        media.getMediaCapability((err, data) => {
            mediaCapability = data;
            console.info('get MediaCapability success, data is : ' + mediaCapability);
            console.info('get MediaCapability fail, err is : ' + err);
            mediaCapability.getAVMuxerFormatList((err, data) => {
                avMuxerFormatList = data;
                console.info('get AVMuxerFormatList success, data is : ' + JSON.stringify(avMuxerFormatList));
                console.info('get AVMuxerFormatList fail, err is : ' + err);
                if (avMuxerFormatList.indexOf(parameter.outputFormat) != -1) {
                    console.info('Format supported!!!');
                    toNextStep(testAVMuxer, steps, done);
                } else {
                    console.info('Format not supported!!!');
                    expect(true).assertFail();
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
            let stat = Fileio.statSync(fdReturn);
            let length = stat.size;
            let buf = new ArrayBuffer(length);
            let createStream = Fileio.createStreamSync(fdReturn, 'r+');
            createStream.readSync(buf);
            createStream.closeSync();
            console.info('buffer is : ' + buf);
            console.info('read file success');
            return buf;
        } catch (err) {
            console.info('read file fail, err is : ' + err);
            done();
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

    eventEmitter.on(createAVMuxer_event, (steps, done) => {
        console.info('start createAVMuxer!')
        steps.shift();
        media.createAVMuxer((err, data) => {
            testAVMuxer = data;
            console.info('createAVMuxer success , data is : ' + testAVMuxer);
            console.info('createAVMuxer fail , err is : ' + err);
            expect(err).assertUndefined();
            toNextStep(testAVMuxer, steps, done);
        })
    });

    eventEmitter.on(setOutput_event, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.setOutput(outputFileFdPath, parameters.outputFormat, (err, data) => {
            console.info('setOutput success ,  data is : ' + data);
            console.info('setOutput fail ,  err is : ' + err);
            expect(err).assertUndefined();
            toNextStep(testAVMuxer, steps, done);
        })
    });

    eventEmitter.on(audioAddTrack_event, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.addTrack(parameters.audioDescription,(err,data)=>{
            audioTrackIndex = data;
            console.info('addTrack success , data is : ' + audioTrackIndex);
            console.info('addTrack fail , err is : ' + err);
            expect(err).assertUndefined();
            toNextStep(testAVMuxer, steps, done);
        })
    });

    eventEmitter.on(videoAddTrack_event, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.addTrack(parameters.videoDescription,(err,data)=>{
            videoTrackIndex = data;
            console.info('addTrack success , data is : ' + videoTrackIndex);
            console.info('addTrack fail , err is : ' + err);
            expect(err).assertUndefined();
            toNextStep(testAVMuxer, steps, done);
        })
    });

    eventEmitter.on(start_event, (testAVMuxer, steps, done) => {
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
            console.info('start fail , err is : ' + err );
            expect(err).assertUndefined();
            toNextStep(testAVMuxer, steps, done);
        })
    });

    eventEmitter.on(videoWriteTrackSample_event, (testAVMuxer, steps, done) => {
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
        testAVMuxer.writeTrackSample(data, info,(err,data) => {
            console.info('data is : ' + data + '  sampleInfo is : ' + JSON.stringify(info));
            console.info('videoFrameCount: ' + videoFrameCount + ' video_frame_size.videoFrameSize.length: '
            + parameters.videoFrameSize.length);
            videoFrameCount++;
            switch (parameters.writeType) {
                case 'video':
                    if (videoFrameCount >= parameters.videoFrameSize.length) {
                        steps.shift();
                        toNextStep(testAVMuxer, steps, done);
                    } else {
                        sleep(35);
                        eventEmitter.emit(videoWriteTrackSample_event, testAVMuxer, steps, done);
                    }
                    break;
                case 'video_audio':
                    if (videoFrameCount >= parameters.videoFrameSize.length) {
                        sleep(15);
                        eventEmitter.emit(audioWriteTrackSample_event, testAVMuxer, steps, done);
                    } else {
                        sleep(35);
                        eventEmitter.emit(videoWriteTrackSample_event, testAVMuxer, steps, done);
                    }
                    break;
                case 'video_audio_crossover':
                    if (parameters.videoFrameSize.length > parameters.audioFrameSize.length) {
                        if (videoFrameCount >= parameters.videoFrameSize.length) {
                            steps.shift();
                            toNextStep(testAVMuxer, steps, done);
                        } else {
                            if (audioFrameCount >= parameters.audioFrameSize.length) {
                                sleep(15);
                                eventEmitter.emit(videoWriteTrackSample_event, testAVMuxer, steps, done);
                            } else {
                                sleep(35);
                                eventEmitter.emit(audioWriteTrackSample_event, testAVMuxer, steps, done);
                            }
                        }
                    } else {
                        sleep(35);
                        eventEmitter.emit(audioWriteTrackSample_event, testAVMuxer, steps, done);
                    }
                    break;
                case 'audio_video':
                    if (videoFrameCount >= parameters.videoFrameSize.length) {
                        steps.shift();
                        toNextStep(testAVMuxer, steps, done);
                    } else {
                        sleep(35);
                        eventEmitter.emit(videoWriteTrackSample_event, testAVMuxer, steps, done);
                    }
                    break;
                case 'audio_video_crossover':
                    if (parameters.audioFrameSize.length > parameters.videoFrameSize.length) {
                        sleep(15);
                        eventEmitter.emit(audioWriteTrackSample_event, testAVMuxer, steps, done);
                    } else {
                        if (videoFrameCount >= parameters.videoFrameSize.length) {
                            steps.shift();
                            toNextStep(testAVMuxer, steps, done);
                        } else {
                            if (audioFrameCount >= parameters.audioFrameSize.length) {
                                sleep(35);
                                eventEmitter.emit(videoWriteTrackSample_event, testAVMuxer, steps, done);
                            } else {
                                sleep(15);
                                eventEmitter.emit(audioWriteTrackSample_event, testAVMuxer, steps, done);
                            }
                        }
                    }
                    break;
            }
        })
    });

    eventEmitter.on(audioWriteTrackSample_event, (testAVMuxer, steps, done) => {
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
        testAVMuxer.writeTrackSample(data, info,(err,data) => {
            console.info('data is : ' + data + ', sampleInfo is : ' + JSON.stringify(info));
            console.info('audioFrameCount: ' + audioFrameCount + ' audio_frame_size.length: '
            + parameters.audioFrameSize.length);
            audioFrameCount++;
            switch (parameters.writeType) {
                case 'audio':
                    if (audioFrameCount >= parameters.audioFrameSize.length) {
                        steps.shift();
                        toNextStep(testAVMuxer, steps, done);
                    } else {
                        sleep(15);
                        eventEmitter.emit(audioWriteTrackSample_event, testAVMuxer, steps, done);
                    }
                    break;
                case 'audio_video':
                    if (audioFrameCount >= parameters.audioFrameSize.length) {
                        steps.shift();
                        toNextStep(testAVMuxer, steps, done);
                    } else {
                        sleep(15);
                        eventEmitter.emit(audioWriteTrackSample_event, testAVMuxer, steps, done);
                    }
                    break;
                case 'audio_video_crossover':
                    if (parameters.audioFrameSize.length > parameters.videoFrameSize.length) {
                        if (audioFrameCount >= parameters.audioFrameSize.length) {
                            steps.shift();
                            toNextStep(testAVMuxer, steps, done);
                        } else {
                            if (videoFrameCount >= parameters.videoFrameSize.length) {
                                sleep(15);
                                eventEmitter.emit(audioWriteTrackSample_event, testAVMuxer, steps, done);
                            } else {
                                sleep(35);
                                eventEmitter.emit(videoWriteTrackSample_event, testAVMuxer, steps, done);
                            }
                        }
                    } else {
                        sleep(35);
                        eventEmitter.emit(videoWriteTrackSample_event, testAVMuxer, steps, done);
                    }
                    break;
                case 'video_audio':
                    if (audioFrameCount >= parameters.audioFrameSize.length - 1) {
                        steps.shift();
                        toNextStep(testAVMuxer, steps, done);
                    } else {
                        sleep(15);
                        eventEmitter.emit(audioWriteTrackSample_event, testAVMuxer, steps, done);
                    }
                    break;
                case 'video_audio_crossover':
                    if (parameters.videoFrameSize.length > parameters.audioFrameSize.length) {
                        sleep(15);
                        eventEmitter.emit(videoWriteTrackSample_event, testAVMuxer, steps, done);
                    } else {
                        if (audioFrameCount >= parameters.audioFrameSize.length) {
                            steps.shift();
                            toNextStep(testAVMuxer, steps, done);
                        } else {
                            if (videoFrameCount >= parameters.videoFrameSize.length) {
                                sleep(35);
                                eventEmitter.emit(audioWriteTrackSample_event, testAVMuxer, steps, done);
                            } else {
                                sleep(15);
                                eventEmitter.emit(videoWriteTrackSample_event, testAVMuxer, steps, done);
                            }
                        }
                    }
                    break;
            }
        })
    });

    eventEmitter.on(stop_event, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.stop((err,data) =>{
            console.info('stop success , data is : ' + data);
            console.info('stop fail , err is : ' + err);
            expect(err).assertUndefined();
            toNextStep(testAVMuxer, steps, done);
        })
    });

    eventEmitter.on(release_event, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.release((err,data)=>{
            console.info('release success , data is : ' + data);
            console.info('release fail , err is : ' + err);
            expect(err).assertUndefined();
            toNextStep(testAVMuxer, steps, done);
        })
    });

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0100
        * @tc.name      : AVMuxer (callback) for audio, format is aac
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0100', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0100');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, start_event,
        audioWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.AUDIO_AAC, 'FUNCTION_CALLBACK_0100.m4a', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0200
        * @tc.name      : AVMuxer (callback) for video, format is h264
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0200', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0200');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.VIDEO_H264, 'FUNCTION_CALLBACK_0200.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0300
        * @tc.name      : AVMuxer (callback) for video, format is mpeg4
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0300', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0300');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.VIDEO_MPEG4, 'FUNCTION_CALLBACK_0300.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0400
        * @tc.name      : AVMuxer (callback) for video and audio, format is h264+acc
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0400', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0400');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, videoAddTrack_event, start_event,
        audioWriteTrackSample_event, videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.AAC_H264, 'FUNCTION_CALLBACK_0400.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0500
        * @tc.name      : AVMuxer (callback) for video and audio, format is mpeg4+acc
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0500', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0500');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, videoAddTrack_event, start_event,
        audioWriteTrackSample_event, videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.AAC_MPEG4, 'FUNCTION_CALLBACK_0500.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0600
        * @tc.name      : AVMuxer (callback) for video and audio, format is h264+mp3
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0600', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0600');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, videoAddTrack_event, start_event,
        audioWriteTrackSample_event, videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.MP3_H264, 'FUNCTION_CALLBACK_0600.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0700
        * @tc.name      : AVMuxer (callback) for video and audio, format is mpeg4+mp3
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0700', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0700');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, videoAddTrack_event, start_event,
        audioWriteTrackSample_event, videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.MP3_MPEG4, 'FUNCTION_CALLBACK_0700.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0800
        * @tc.name      : Create an AVMuxer instance
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0800', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0800');
        let steps = [createAVMuxer_event];
        await eventEmitter.emit(steps[0], steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0900
        * @tc.name      : get AVMuxerFormatList
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0900', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_0900');
        let steps = [];
        await toGetAVMuxerFormatList(AvMuxerTestBase.MP3_H264, steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1000
        * @tc.name      : encapsulation is successful and can be played
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1000', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1000');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, videoAddTrack_event, start_event,
        audioWriteTrackSample_event, videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.FUNCTION_1000, 'FUNCTION_CALLBACK_1000.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1100
        * @tc.name      : set up an audio track successfully
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1100', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1100');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event];
        await entrance(AvMuxerTestBase.MP3_MPEG4, 'FUNCTION_CALLBACK_1100.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1200
        * @tc.name      : Set up 16 audio tracks successfully
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1200', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1200');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, audioAddTrack_event,
        audioAddTrack_event, audioAddTrack_event, audioAddTrack_event, audioAddTrack_event, audioAddTrack_event,
        audioAddTrack_event, audioAddTrack_event, audioAddTrack_event, audioAddTrack_event, audioAddTrack_event,
        audioAddTrack_event, audioAddTrack_event, audioAddTrack_event, audioAddTrack_event];
        await entrance(AvMuxerTestBase.MP3_MPEG4, 'FUNCTION_CALLBACK_1200.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1300
        * @tc.name      : Set up 5 audio tracks successfully
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1300', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1300');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, audioAddTrack_event,
        audioAddTrack_event, audioAddTrack_event, audioAddTrack_event];
        await entrance(AvMuxerTestBase.MP3_MPEG4, 'FUNCTION_CALLBACK_1300.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1400
        * @tc.name      : write audio data first, then video data
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1400', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1400');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, videoAddTrack_event, start_event,
        audioWriteTrackSample_event, videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.AAC_MPEG4, 'FUNCTION_CALLBACK_1400.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1500
        * @tc.name      : write video data first, then audio data
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1500', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1500');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, audioWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.AAC_H264, 'FUNCTION_CALLBACK_1500.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1600
        * @tc.name      : audio and video are written alternately
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1600', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1600');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, videoAddTrack_event, start_event,
        audioWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.FUNCTION_1600, 'FUNCTION_CALLBACK_1600.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1700
        * @tc.name      : video and audio are written alternately
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1700', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1700');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.FUNCTION_1700, 'FUNCTION_CALLBACK_1700.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1800
        * @tc.name      : set up a video track
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1800', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1800');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event];
        await entrance(AvMuxerTestBase.VIDEO_H264, 'FUNCTION_CALLBACK_1800.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1900
        * @tc.name      : Set rotation 0°
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1900', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_1900');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.FUNCTION_1900, 'FUNCTION_CALLBACK_1900.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2000
        * @tc.name      : Set rotation 90°
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2000', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2000');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.FUNCTION_2000, 'FUNCTION_CALLBACK_2000.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2100
        * @tc.name      : Set rotation 180°
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2100', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2100');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.FUNCTION_2100, 'FUNCTION_CALLBACK_2100.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2200
        * @tc.name      : Set rotation 270°
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2200', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2200');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.FUNCTION_2200, 'FUNCTION_CALLBACK_2200.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2300
        * @tc.name      : set longitude to 50 and latitude to 100
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2300', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2300');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.FUNCTION_2300, 'FUNCTION_CALLBACK_2300.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2400
        * @tc.name      : set one instance
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2400', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2400');
        let steps = [createAVMuxer_event];
        await entrance(AvMuxerTestBase.VIDEO_H264, 'FUNCTION_CALLBACK_2400.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2500
        * @tc.name      : Set 16 instances
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2500', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2500');
        let steps = [createAVMuxer_event, createAVMuxer_event, createAVMuxer_event, createAVMuxer_event,
        createAVMuxer_event, createAVMuxer_event, createAVMuxer_event, createAVMuxer_event, createAVMuxer_event,
        createAVMuxer_event, createAVMuxer_event, createAVMuxer_event, createAVMuxer_event, createAVMuxer_event,
        createAVMuxer_event, createAVMuxer_event];
        await entrance(AvMuxerTestBase.VIDEO_H264, 'FUNCTION_CALLBACK_2500.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2600
        * @tc.name      : Set 2 instances
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2600', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2600');
        let steps = [createAVMuxer_event, createAVMuxer_event];
        await entrance(AvMuxerTestBase.VIDEO_H264, 'FUNCTION_CALLBACK_2600.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2700
        * @tc.name      : encapsulated files can be played
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2700', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2700');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, videoAddTrack_event, start_event,
        audioWriteTrackSample_event, videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.MP3_H264, 'FUNCTION_CALLBACK_2700.mp4', steps, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2800
        * @tc.name      : set 1 video track and 9 audio track
        * @tc.desc      : test media muxer
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2800', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_FUNCTION_CALLBACK_2800');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, audioAddTrack_event,
        audioAddTrack_event, audioAddTrack_event, audioAddTrack_event, audioAddTrack_event, audioAddTrack_event,
        audioAddTrack_event, audioAddTrack_event, audioAddTrack_event];
        await entrance(AvMuxerTestBase.MP3_H264, 'FUNCTION_CALLBACK_2800.mp4', steps, done);
    })

})
