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

describe('AvMuxerReliabilityPromise', function () {
    const EVENTS = require('events');
    const eventEmitter = new EVENTS.EventEmitter();
    let parameters;
    let fdHead = 'fd://';
    let testAVMuxer = null;
    let videoBuffer;
    let videoFrameCount = 1;
    let videoTimestamp = 0;
    let videoOffset = 0;
    let isFirstFrameVideo = true;
    let isFirstFrameAudio = true;
    let audioBuffer;
    let audioFrameCount = 1;
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
    let audioWriteTrackSample_err_event_first = 'audioWriteTrackSample_err_event_first';
    let audioWriteTrackSample_err_event_second = 'audioWriteTrackSample_err_event_second';
    let clear_event = 'clear_event';
    let jump_event ='jump_event';
    let videoWriteTrackSample_err_event = 'videoWriteTrackSample_err_event';
    let stop_event = 'stop';
    let release_event = 'release';
    let AudioAndVideoDataExchange_event = 'AudioAndVideoDataExchange';
    let VideoAndAudioDataExchange_event = 'VideoAndAudioDataExchange';
    let updateTrack_event = 'updateTrack';
    let videoInfo;
    let videoSampleInfo;
    let audioInfo;
    let audioSampleInfo;
    let size;
    let timeStampArr = [];
    let sizeArr = [];
    let audioErrCount=0;
    let videoErrCount=0;
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
        if ( testAVMuxer != undefined) {
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
        if(steps.length == 0){
            done();
        }else{
            if(steps[0]== createAVMuxer_event){
                eventEmitter.emit(steps[0], steps, done);
            }else{
                eventEmitter.emit(steps[0], testAVMuxer, steps, done);
            }
        }

    }

    async function toGetAVMuxerFormatList() {
        let mediaCapability;
        await media.getMediaCapability().then((data) => {
            mediaCapability = data;
            console.info('get MediaCapability success, data is : ' + mediaCapability);
        }, (err) => {
            console.info('get MediaCapability fail, err is : ' + err);
            expect(true).assertFail();
        })
        await mediaCapability.getAVMuxerFormatList().then((data) => {
            avMuxerFormatList = data;
            console.info('get AVMuxerFormatList success, data is : ' + JSON.stringify(avMuxerFormatList));
        }, (err) => {
            console.info('get AVMuxerFormatList fail, err is : ' + err);
            expect(true).assertFail();
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

    async function toGetAudioTimeStampFromMiddle(parameter) {
        let index = Math.ceil(parameter.audioFrameSize.length / 2);
        audioFrameCount += index;
        for (let i = index; i < parameter.audioFrameSize.length; i++) {
            timeStampArr.push(i * 33);
            sizeArr.push(parameter.audioFrameSize[i]);
        }
        for (let j = 0; j < index; j++) {
            audioOffset += parameter.audioFrameSize[j];
            timeStampArr.push(j * 33);
            sizeArr.push(parameter.audioFrameSize[j]);
        }
        console.info('parameter.audioFrameSize.length is : ' + parameter.audioFrameSize.length);
        console.info('timeStampArr.length is : ' + timeStampArr.length);
        console.info('timeStampArr is : ' + timeStampArr);
        console.info('sizeArr.length is : ' + sizeArr.length);
        console.info('sizeArr is : ' + sizeArr);
        console.info('audioFrameCount is : ' + audioFrameCount);
        console.info('audioOffset is : ' + audioOffset);
    }

    async function entrance(parameter, outputFileName, steps, done) {
        parameters = parameter;
        console.info('parameters is : ' + JSON.stringify(parameters));
        await toGetAVMuxerFormatList();
        if (avMuxerFormatList.indexOf(parameters.outputFormat) != -1) {
            console.info('Format supported!!!')
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
            eventEmitter.emit(steps[0], steps, done);
        } else {
            console.info('Format not supported!!!');
            expect(true).assertFail();
            done();
        }
    }

    eventEmitter.on(createAVMuxer_event, (steps, done) => {
        console.info('start createAVMuxer!');
        steps.shift();
        media.createAVMuxer().then((data) => {
            testAVMuxer = data;
            console.info('createAVMuxer success , data is : ' + testAVMuxer);
            toNextStep(testAVMuxer, steps, done);
        }).catch((err) => {
            console.info('createAVMuxer fail, err is : ' + err);
            expect(true).assertTrue();
            done();
        })
    });

    eventEmitter.on(setOutput_event, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.setOutput(outputFileFdPath, parameters.outputFormat).then(() => {
            console.info('setOutput success!');
            toNextStep(testAVMuxer, steps, done);
        }).catch((err) => {
            console.info('setOutput fail, err is : ' + err);
            expect(true).assertTrue();
            done();
        });
    });

    eventEmitter.on(audioAddTrack_event, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.addTrack(parameters.audioDescription).then((data) => {
            audioTrackIndex = data;
            console.info('audioTrackIndex is : ' + audioTrackIndex);
            toNextStep(testAVMuxer, steps, done);
        }).catch((err) => {
            console.info('err is : ' + err);
            expect(true).assertTrue();
            done();
        });
    });

    eventEmitter.on(videoAddTrack_event, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.addTrack(parameters.videoDescription).then((data) => {
            videoTrackIndex = data;
            console.info('videoTrackIndex is : ' + videoTrackIndex);
            toNextStep(testAVMuxer, steps, done);
        }).catch((err) => {
            console.info('addTrack fail, err is : ' + err);
            expect(true).assertTrue();
            done();
        });
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
        testAVMuxer.start().then(() => {
            console.info('start success ');
            toNextStep(testAVMuxer, steps, done);
        }).catch((err) => {
            console.info('start fail, err is : ' + err);
            expect(true).assertFail();
            done();
        })
    });

    eventEmitter.on(AudioAndVideoDataExchange_event, (testAVMuxer, steps, done) => {
        steps.shift();
        audioBuffer = videoBuffer;
        console.info('Audio => Video Exchange success!');
        toNextStep(testAVMuxer, steps, done);
    });

    eventEmitter.on(VideoAndAudioDataExchange_event, (testAVMuxer, steps, done) => {
        steps.shift();
        videoBuffer = audioBuffer;
        console.info('Video => Audio Exchange success!');
        toNextStep(testAVMuxer, steps, done);
    });

    eventEmitter.on(updateTrack_event, (testAVMuxer, steps, done) => {
        steps.shift();
        audioTrackIndex = 998;
        videoTrackIndex = 999;
        console.info('update track success!');
        console.info('after update, audioTrackIndex is : ' + audioTrackIndex + ', videoTrackIndex is : '
        + videoTrackIndex);
        toNextStep(testAVMuxer, steps, done);
    });

    eventEmitter.on(videoWriteTrackSample_event, (testAVMuxer, steps, done) => {
        console.info('writeVideoBuffer start!');
        data = videoBuffer.slice(videoOffset, videoOffset + parameters.videoFrameSize[videoFrameCount]);
        let size = parameters.videoFrameSize[videoFrameCount];
        if (parameters.sampleInfoType != undefined) {
            if (parameters.sampleInfoType == 'noneTimeMs') {
                videoSampleInfo = {
                    size: size,
                    offset: 0,
                    flags: 0
                }
            } else if (parameters.sampleInfoType == 'noneOffset') {
                videoSampleInfo = {
                    timeMs: videoTimestamp,
                    size: size,
                    flags: 0
                }
            } else if (parameters.sampleInfoType == 'noneFlags') {
                videoSampleInfo = {
                    timeMs: videoTimestamp,
                    size: size,
                    offset: 0,
                }
            }
        } else {
            videoSampleInfo = {
                timeMs: videoTimestamp,
                size: size,
                offset: 0,
                flags: 0
            }
        }
        videoInfo = {
            sampleInfo: videoSampleInfo,
            trackIndex: videoTrackIndex
        }
        if (videoInfo.sampleInfo.flags != undefined) {
            if (parameters.videoDescription.codec_mime == 'video/avc') {
                if (isFirstFrameVideo) {
                    videoInfo.sampleInfo.flags = media.FrameFlags.CODEC_DATA;
                    isFirstFrameVideo = false;
                } else if (videoFrameCount == parameters.videoFrameSize.length) {
                    videoInfo.sampleInfo.flags = media.FrameFlags.EOS_FRAME;
                } else if (parameters.videoFrameFlag[videoFrameCount] == 'I') {
                    videoInfo.sampleInfo.flags = media.FrameFlags.SYNC_FRAME;
                } else {
                    videoInfo.sampleInfo.flags = media.FrameFlags.PARTIAL_FRAME;
                }
            } else {
                if (isFirstFrameVideo) {
                    videoInfo.sampleInfo.flags = media.FrameFlags.CODEC_DATA;
                    isFirstFrameVideo = false;
                } else if (videoFrameCount == parameters.videoFrameSize.length) {
                    videoInfo.sampleInfo.flags = media.FrameFlags.EOS_FRAME;
                } else {
                    videoInfo.sampleInfo.flags = media.FrameFlags.PARTIAL_FRAME;
                }
            }
        }
        videoTimestamp += 33
        videoOffset = videoOffset + parameters.videoFrameSize[videoFrameCount];
        testAVMuxer.writeTrackSample(data, videoInfo).then(() => {
            console.info('data is : ' + data + '  sampleInfo is : ' + JSON.stringify(videoInfo));
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
                    if (parameters.videoFrameSize.length > parameters.videoFrameSize.length) {
                        if (videoFrameCount >= parameters.videoFrameSize.length) {
                            steps.shift();
                            toNextStep(testAVMuxer, steps, done);
                        } else {
                            if (audioFrameCount >= parameters.videoFrameSize.length) {
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
                    if (videoFrameCount >= parameters.videoFrameSize.length - 1) {
                        steps.shift();
                        toNextStep(testAVMuxer, steps, done);
                    } else {
                        sleep(35);
                        eventEmitter.emit(videoWriteTrackSample_event, testAVMuxer, steps, done);
                    }
                    break;
                case 'audio_video_crossover':
                    if (parameters.videoFrameSize.length > parameters.videoFrameSize.length) {
                        sleep(15);
                        eventEmitter.emit(audioWriteTrackSample_event, testAVMuxer, steps, done);
                    } else {
                        if (videoFrameCount >= parameters.videoFrameSize.length) {
                            steps.shift();
                            toNextStep(testAVMuxer, steps, done);
                        } else {
                            if (audioFrameCount >= parameters.videoFrameSize.length) {
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
        }).catch((err) => {
            console.info('write video fail, err is : ' + err);
            expect(true).assertTrue();
            done();
        })
    });

    eventEmitter.on(audioWriteTrackSample_event, (testAVMuxer, steps, done) => {
        console.info('writeAudioBuffer start !');
        data = audioBuffer.slice(audioOffset, audioOffset + parameters.audioFrameSize[audioFrameCount]);
        let size = parameters.audioFrameSize[audioFrameCount];
        if (parameters.sampleInfoType != undefined) {
            if (parameters.sampleInfoType == 'noneTimeMs') {
                audioSampleInfo = {
                    size: size,
                    offset: 0,
                    flags: 0
                }
            } else if (parameters.sampleInfoType == 'noneOffset') {
                audioSampleInfo = {
                    timeMs: audioTimestamp,
                    size: size,
                    flags: 0
                }
            } else if (parameters.sampleInfoType == 'noneFlags') {
                audioSampleInfo = {
                    timeMs: audioTimestamp,
                    size: size,
                    offset: 0,
                }
            }
        } else {
            audioSampleInfo = {
                timeMs: audioTimestamp,
                size: size,
                offset: 0,
                flags: 0
            }
        }
        audioInfo = {
            sampleInfo: audioSampleInfo,
            trackIndex: audioTrackIndex
        }
        if (audioInfo.sampleInfo.flags != undefined) {
            if (isFirstFrameAudio) {
                audioInfo.sampleInfo.flags = media.FrameFlags.CODEC_DATA;
                isFirstFrameAudio = false;
            } else if (audioFrameCount == parameters.audioFrameSize.length) {
                audioInfo.sampleInfo.flags = media.FrameFlags.EOS_FRAME;
            } else {
                audioInfo.sampleInfo.flags = 0;
            }
        }
        audioTimestamp += 33;
        audioOffset = audioOffset + parameters.audioFrameSize[audioFrameCount];
        testAVMuxer.writeTrackSample(data, audioInfo).then(() => {
            console.info('data is : ' + data + ', sampleInfo is : ' + JSON.stringify(audioInfo));
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
                        sleep(35);
                        eventEmitter.emit(videoWriteTrackSample_event, testAVMuxer, steps, done);
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
        }, (err) => {
            console.info('write audio fail, err is : ' + err);
            expect(true).assertTrue();
            done();
        })
    });

    eventEmitter.on(videoWriteTrackSample_err_event, (testAVMuxer, steps, done) => {
        console.info('writeVideoBuffer start!');
        data = videoBuffer.slice(videoOffset, videoOffset + parameters.videoFrameSize[videoFrameCount]);
        let size = parameters.videoFrameSize[videoFrameCount];
        videoInfo = {
            sampleInfo: {
                timeMs: videoTimestamp,
                size: size,
                offset: 0,
                flags: 0
            },
            trackIndex: videoTrackIndex
        }
        if (videoInfo.sampleInfo.flags != undefined) {
            if (parameters.videoDescription.codec_mime == 'video/avc') {
                if (isFirstFrameVideo) {
                    videoInfo.sampleInfo.flags = media.FrameFlags.CODEC_DATA;
                    isFirstFrameVideo = false;
                } else if (videoFrameCount == parameters.videoFrameSize.length) {
                    videoInfo.sampleInfo.flags = media.FrameFlags.EOS_FRAME;
                } else if (parameters.videoFrameFlag[videoFrameCount] == 'I') {
                    videoInfo.sampleInfo.flags = media.FrameFlags.SYNC_FRAME;
                } else {
                    videoInfo.sampleInfo.flags = media.FrameFlags.PARTIAL_FRAME;
                }
            } else {
                if (isFirstFrameVideo) {
                    videoInfo.sampleInfo.flags = media.FrameFlags.CODEC_DATA;
                    isFirstFrameVideo = false;
                } else if (videoFrameCount == parameters.videoFrameSize.length) {
                    videoInfo.sampleInfo.flags = media.FrameFlags.EOS_FRAME;
                } else {
                    videoInfo.sampleInfo.flags = media.FrameFlags.PARTIAL_FRAME;
                }
            }
        }
        videoTimestamp += 33
        videoOffset = videoOffset + parameters.videoFrameSize[videoFrameCount];
        testAVMuxer.writeTrackSample(data, videoInfo).then(() => {
            console.info('data is : ' + data + '  sampleInfo is : ' + JSON.stringify(videoInfo))
            console.info('videoFrameCount: ' + videoFrameCount + ' video_frame_size.videoFrameSize.length: '
            + parameters.videoFrameSize.length);
            videoFrameCount++;
            if (videoFrameCount >= parameters.videoFrameSize.length / 2) {
                steps.shift();
                toNextStep(testAVMuxer, steps, done);
            } else {
                sleep(35);
                eventEmitter.emit(videoWriteTrackSample_err_event, testAVMuxer, steps, done);
            }
        }).catch((err) => {
            console.info('write video fail, err is : ' + err);
            expect(true).assertFail();
            done();
        })
    });

    eventEmitter.on(audioWriteTrackSample_err_event_first, (testAVMuxer, steps, done) => {
        console.info('writeAudioBuffer start !');
        audioTimestamp = timeStampArr[audioErrCount];
        console.info("audioOffset is : " + audioOffset);
        data = audioBuffer.slice(audioOffset, audioOffset + parameters.audioFrameSize[audioFrameCount]);
        console.info("data is : " + data);
        size = sizeArr[audioErrCount];
        audioInfo = {
            sampleInfo: {
                timeMs: audioTimestamp,
                size: size,
                offset: 0,
                flags: 0
            },
            trackIndex: audioTrackIndex
        }
        console.info('audioInfo' + JSON.stringify(audioInfo));
        if (isFirstFrameAudio) {
            audioInfo.sampleInfo.flags = media.FrameFlags.CODEC_DATA;
            isFirstFrameAudio = false;
        } else if (audioErrCount == parameters.audioFrameSize.length) {
            audioInfo.sampleInfo.flags = media.FrameFlags.EOS_FRAME;
        } else {
            audioInfo.sampleInfo.flags = 0;
        }
        audioOffset = audioOffset + parameters.audioFrameSize[audioFrameCount];
        testAVMuxer.writeTrackSample(data, audioInfo).then(() => {
            console.info('data is : ' + data + ', sampleInfo is : ' + JSON.stringify(audioInfo))
            console.info('audioFrameCount: ' + audioFrameCount + ' audio_frame_size.length: '
            + parameters.audioFrameSize.length);
            audioFrameCount++;
            audioErrCount++;
            if (audioErrCount >= Math.ceil(parameters.audioFrameSize.length / 2) - 1) {
                steps.shift();
                toNextStep(testAVMuxer, steps, done)
            } else {
                sleep(15);
                eventEmitter.emit(audioWriteTrackSample_err_event_first, testAVMuxer, steps, done);
            }
        }).catch((err) => {
            console.info('write audio fail, err is : ' + err);
            expect(true).assertTrue();
            done();
        })
    });

    eventEmitter.on(audioWriteTrackSample_err_event_second, (testAVMuxer, steps, done) => {
        console.info('writeAudioBuffer start !');
        audioTimestamp = timeStampArr[audioErrCount];
        console.info("audioOffset is : " + audioOffset);
        data = audioBuffer.slice(audioOffset, audioOffset + parameters.audioFrameSize[audioFrameCount]);
        console.info("data is : " + data);
        size = sizeArr[audioErrCount];
        audioInfo = {
            sampleInfo: {
                timeMs: audioTimestamp,
                size: size,
                offset: 0,
                flags: 0
            },
            trackIndex: audioTrackIndex
        }
        console.info('audioInfo' + JSON.stringify(audioInfo));
        if (isFirstFrameAudio) {
            audioInfo.sampleInfo.flags = media.FrameFlags.CODEC_DATA;
            isFirstFrameAudio = false;
        } else if (audioErrCount == parameters.audioFrameSize.length) {
            audioInfo.sampleInfo.flags = media.FrameFlags.EOS_FRAME;
        } else {
            audioInfo.sampleInfo.flags = 0;
        }
        audioOffset = audioOffset + parameters.audioFrameSize[audioFrameCount];
        testAVMuxer.writeTrackSample(data, audioInfo).then(() => {
            console.info('data is : ' + data + ', sampleInfo is : ' + JSON.stringify(audioInfo))
            console.info('audioFrameCount: ' + audioFrameCount + ' audio_frame_size.length: '
            + parameters.audioFrameSize.length);
            audioFrameCount++;
            audioErrCount++;
            if (audioErrCount >= parameters.audioFrameSize.length) {
                steps.shift();
                toNextStep(testAVMuxer, steps, done)
            } else {
                sleep(15);
                eventEmitter.emit(audioWriteTrackSample_err_event_second, testAVMuxer, steps, done);
            }
        }).catch((err) => {
            console.info('write audio fail, err is : ' + err);
            expect(true).assertTrue();
            done();
        })
    });

    eventEmitter.on(clear_event, (testAVMuxer, steps, done) => {
        steps.shift();
        audioFrameCount = 0;
        audioOffset = 0;
        console.info("clear success");
        toNextStep(testAVMuxer, steps, done);
    });

    eventEmitter.on(jump_event, (testAVMuxer, steps, done) => {
        steps.shift();
        for (let i = 0;i < 100; i++) {
            videoOffset += parameters.videoFrameSize[videoFrameCount+i];
        }
        videoFrameCount += 100;
        videoTimestamp += 100 * 33;
        console.info("jump success");
        toNextStep(testAVMuxer, steps, done);
    });

    eventEmitter.on(stop_event, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.stop().then(() => {
            console.info('testAVMuxer stop success');
            toNextStep(testAVMuxer, steps, done);
        }).catch((err) => {
            console.info('testAVMuxer stop fail, err is : ' + err);
            expect(true).assertFail();
            done();
        })
    });

    eventEmitter.on(release_event, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.release().then(() => {
            console.info('testAVMuxer release success');
            toNextStep(testAVMuxer, steps, done);
        }).catch((err) => {
            console.info('testAVMuxer release fail, err is : ' + err);
            expect(true).assertFail();
            done();
        })
    });

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0100
       * @tc.name      : Does not support mp3 format encapsulation as m4a
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0100', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0100');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, start_event,
        audioWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.AUDIO_MP3, 'RELIABILITY_PROMISE_0100.m4a', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0200
       * @tc.name      : Does not support ts format encapsulation as mp4
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0200', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0200');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.VIDEO_MPEG2, 'RELIABILITY_PROMISE_0200.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0300
       * @tc.name      : Two video tracks are not supported
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0300', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0300');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, videoAddTrack_event];
        await entrance(AvMuxerTestBase.AAC_MPEG4, 'RELIABILITY_PROMISE_0300.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0400
       * @tc.name      : 17 audio tracks are not supported
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0400', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0400');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, audioAddTrack_event,
        audioAddTrack_event, audioAddTrack_event, audioAddTrack_event, audioAddTrack_event, audioAddTrack_event,
        audioAddTrack_event, audioAddTrack_event, audioAddTrack_event, audioAddTrack_event, audioAddTrack_event,
        audioAddTrack_event, audioAddTrack_event, audioAddTrack_event, audioAddTrack_event, audioAddTrack_event,];
        await entrance(AvMuxerTestBase.AAC_MPEG4, 'RELIABILITY_PROMISE_0400.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0500
       * @tc.name      : Does not support writing video data to audio tracks
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0500', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0500');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, start_event,
        AudioAndVideoDataExchange_event, audioWriteTrackSample_event,stop_event,release_event];
        await entrance(AvMuxerTestBase.AAC_H264, 'RELIABILITY_PROMISE_0500.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0600
       * @tc.name      : Does not support writing audio data to video tracks
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0600', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0600');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        VideoAndAudioDataExchange_event, videoWriteTrackSample_event,stop_event,release_event];
        await entrance(AvMuxerTestBase.AAC_H264, 'RELIABILITY_PROMISE_0600.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0700
       * @tc.name      : Two tracks only use one track
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0700', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0700');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event,videoAddTrack_event, start_event,
        videoWriteTrackSample_event,stop_event,release_event];
        await entrance(AvMuxerTestBase.RELIABILITY_0700, 'RELIABILITY_PROMISE_0700.mp4', steps, done);
    })

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0800
    * @tc.name      : Data writes do not have tracks
    * @tc.desc      : test media muxer
    * @tc.size      : MediumTest
    * @tc.type      : Reliability test
    * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0800', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0800');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, videoAddTrack_event,
        updateTrack_event, start_event, audioWriteTrackSample_event, videoWriteTrackSample_event,
        stop_event, release_event];
        await entrance(AvMuxerTestBase.AAC_MPEG4, 'RELIABILITY_PROMISE_0800.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0900
       * @tc.name      : The timestamp reads the middle first and then the beginning
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0900', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_0900');
        await toGetAudioTimeStampFromMiddle(AvMuxerTestBase.AUDIO_AAC);
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, start_event,
        audioWriteTrackSample_err_event_first, clear_event, audioWriteTrackSample_err_event_second,
        stop_event, release_event];
        await entrance(AvMuxerTestBase.AUDIO_AAC, 'RELIABILITY_PROMISE_0900.m4a', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1000
       * @tc.name      : The time stamp suddenly jumped
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1000', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1000');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_err_event, jump_event, videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.VIDEO_MPEG4, 'RELIABILITY_PROMISE_1000.mp4', steps, done)
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1100
       * @tc.name      : Timestamp writes very little data (1 frame)
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1100', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1100');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.RELIABILITY_1100, 'RELIABILITY_PROMISE_1100.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1200
       * @tc.name      : SetOutput is called after start
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1200', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1200');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event, setOutput_event];
        await entrance(AvMuxerTestBase.AAC_H264, 'RELIABILITY_PROMISE_1200.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1300
       * @tc.name      : AddTrack is called after start
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1300', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1300');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event, videoAddTrack_event];
        await entrance(AvMuxerTestBase.AAC_H264, 'RELIABILITY_PROMISE_1300.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1400
       * @tc.name      : After stop, addtrack is called
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1400', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1400');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, videoAddTrack_event, start_event,
        audioWriteTrackSample_event, videoWriteTrackSample_event, stop_event, audioAddTrack_event, release_event];
        await entrance(AvMuxerTestBase.AAC_MPEG4, 'RELIABILITY_PROMISE_1400.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1500
       * @tc.name      : After stop, call writeTrackSample
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1500', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1500');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, videoWriteTrackSample_event, release_event];
        await entrance(AvMuxerTestBase.VIDEO_H264, 'RELIABILITY_PROMISE_1500.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1600
       * @tc.name      : Add 1 track, do not write data, directly start then stop
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1600', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1600');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event, stop_event,
        release_event];
        await entrance(AvMuxerTestBase.VIDEO_H264, 'RELIABILITY_PROMISE_1600.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1700
       * @tc.name      : set rotation 60°
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1700', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1700');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.RELIABILITY_1700, 'RELIABILITY_PROMISE_1700.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1800
       * @tc.name      : Rotation is not set
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1800', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1800');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.VIDEO_H264, 'RELIABILITY_PROMISE_1800.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1900
       * @tc.name      : Set longitude to -200 and latitude to 50
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1900', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_1900');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.RELIABILITY_1900, 'RELIABILITY_PROMISE_1900.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2000
       * @tc.name      : Set longitude to 45 and latitude to 200
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2000', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2000');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.RELIABILITY_2000, 'RELIABILITY_PROMISE_2000.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2100
       * @tc.name      : Set longitude to -200 and latitude to 100
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2100', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2100');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.RELIABILITY_2100, 'RELIABILITY_PROMISE_2100.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2200
       * @tc.name      : Latitude and longitude are not set
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2200', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2200');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.VIDEO_H264, 'RELIABILITY_PROMISE_2200.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2300
       * @tc.name      : Write data before Start
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2300', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2300');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, videoWriteTrackSample_event,
        start_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.VIDEO_H264, 'RELIABILITY_PROMISE_2300.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2400
       * @tc.name      : After Stop, data is written
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2400', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2400');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, videoWriteTrackSample_event, release_event];
        await entrance(AvMuxerTestBase.VIDEO_H264, 'RELIABILITY_PROMISE_2400.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2500
       * @tc.name      : Set 17 instances
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2500', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2500');
        let steps = [createAVMuxer_event, createAVMuxer_event, createAVMuxer_event, createAVMuxer_event,
        createAVMuxer_event, createAVMuxer_event, createAVMuxer_event, createAVMuxer_event, createAVMuxer_event,
        createAVMuxer_event, createAVMuxer_event, createAVMuxer_event, createAVMuxer_event, createAVMuxer_event,
        createAVMuxer_event, createAVMuxer_event, createAVMuxer_event];
        await entrance(AvMuxerTestBase.VIDEO_H264, 'RELIABILITY_PROMISE_2500.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2600
       * @tc.name      : Audio addTrack in the description field value validation less set codec_mime
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2600', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2600');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, start_event,
        audioWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.RELIABILITY_2600, 'RELIABILITY_PROMISE_2600.m4a', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2700
       * @tc.name      : Audio addTrack in the description field value validation less set sample_rate
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2700', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2700');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, start_event,
        audioWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.RELIABILITY_2700, 'RELIABILITY_PROMISE_2700.m4a', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2800
       * @tc.name      : Audio addTrack in the description field value validation less set channel_count
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2800', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2800');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, start_event,
        audioWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.RELIABILITY_2800, 'RELIABILITY_PROMISE_2800.m4a', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2900
       * @tc.name      : Video addTrack in the description field value verification less set width
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2900', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_2900');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.RELIABILITY_2900, 'RELIABILITY_PROMISE_2900.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3000
       * @tc.name      : Video addTrack in the description field value verification less set height
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3000', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3000');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.RELIABILITY_3000, 'RELIABILITY_PROMISE_3000.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3100
       * @tc.name      : Video addTrack in the description field value verification less set frame_rate
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3100', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3100');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.RELIABILITY_3100, 'RELIABILITY_PROMISE_3100.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3200
       * @tc.name      : Video addTrack in the description field value verification less set codec_mime
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3200', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3200');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.RELIABILITY_3200, 'RELIABILITY_PROMISE_3200.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3300
       * @tc.name      : Set sample_rate for verifying the value of description field in addTrack
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3300', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3300');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, videoAddTrack_event, start_event,
        audioWriteTrackSample_event, videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.RELIABILITY_3300, 'RELIABILITY_PROMISE_3300.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3400
       * @tc.name      : Set sample_rate for verifying the value of description field in channel_count
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3400', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3400');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, videoAddTrack_event, start_event,
        audioWriteTrackSample_event, videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.RELIABILITY_3400, 'RELIABILITY_PROMISE_3400.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3500
       * @tc.name      : TrackSampleInfo in writeTrackSample passes less time parameters
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3500', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3500');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.RELIABILITY_3500, 'RELIABILITY_PROMISE_3500.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3600
       * @tc.name      : TrackSampleInfo in writeTrackSample passes less offset parameters
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3600', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3600');
        let steps = [createAVMuxer_event, setOutput_event, videoAddTrack_event, start_event,
        videoWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.RELIABILITY_3600, 'RELIABILITY_PROMISE_3600.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3700
       * @tc.name      : TrackSampleInfo in writeTrackSample passes less flags parameters
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3700', 0, async function (done) {
        console.info('case SUB_MEDIA_VIDEO_AVMUXER_RELIABILITY_PROMISE_3700');
        let steps = [createAVMuxer_event, setOutput_event, audioAddTrack_event, start_event,
        audioWriteTrackSample_event, stop_event, release_event];
        await entrance(AvMuxerTestBase.RELIABILITY_3700, 'RELIABILITY_PROMISE_3700.m4a', steps, done);
    })

})
