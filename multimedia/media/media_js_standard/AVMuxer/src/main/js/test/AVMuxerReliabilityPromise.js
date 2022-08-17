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

describe('AVMuxerReliabilityPromise', function () {
    const EVENTS = require('events');
    const eventEmitter = new EVENTS.EventEmitter();
    const TIME_3000 = 3000;
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
    let createAvMuxerEvent = 'createAvMuxer';
    let createAvMuxerErrEvent = 'createAvMuxerErr';
    let setOutputEvent = 'setOutput';
    let setOutputErrEvent = 'setOutputErr';
    let audioAddTrackEvent = 'audioAddTrack';
    let audioAddTrackErrEvent = 'audioAddTrackErr';
    let videoAddTrackEvent = 'videoAddTrack';
    let videoAddTrackErrEvent = 'videoAddTrackErr';
    let startEvent = 'start';
    let startErrEvent = 'startErrt';
    let audioWriteTrackSampleEvent = 'audioWriteTrackSample';
    let audioWriteTrackSampleErrEvent = 'audioWriteTrackSampleErr';
    let videoWriteTrackSampleEvent = 'videoWriteTrackSample';
    let videoWriteTrackSampleErrEvent = 'videoWriteTrackSampleErr';
    let audioWriteTrackSampleErrEventFirst = 'audioWriteTrackSampleErrEventFirst';
    let audioWriteTrackSampleErrEventSecond = 'audioWriteTrackSampleErrEventSecond';
    let clearEvent = 'clearEvent';
    let jumpEvent ='jumpEvent';
    let videoWriteTrackSampleJumpEvent = 'videoWriteTrackSampleJump';
    let stopEvent = 'stop';
    let releaseEvent = 'release';
    let AudioAndVideoDataExchangeEvent = 'AudioAndVideoDataExchange';
    let VideoAndAudioDataExchangeEvent = 'VideoAndAudioDataExchange';
    let updateTrackEvent = 'updateTrack';
    let delayEvent = 'delay';
    let videoInfo;
    let videoSampleInfo;
    let audioInfo;
    let audioSampleInfo;
    let size;
    let timeStampArr = [];
    let sizeArr = [];
    let audioErrCount=0;
    let audioPlayEvent = 'audioPlay';
    let videoPlayEvent = 'videoPlay';
    let pageId = 0;
    let surfaceID = '';
    const PAGE_PATH1 = 'pages/surfaceTest/surfaceTest';
    const PAGE_PATH2 = 'pages/surfaceTest2/surfaceTest2';

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
        console.info('------------------------beforeEach end------------------------');
    })

    function sleep(time) {
        for(let t = Date.now(); Date.now() - t <= time;);
    }

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
            if (steps[0] == createAvMuxerEvent || steps[0] == createAvMuxerErrEvent) {
                eventEmitter.emit(steps[0], steps, done);
            } else if (steps[0] == audioPlayEvent || steps[0] == videoPlayEvent) {
                eventEmitter.emit(steps[0], done);
            } else {
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

    eventEmitter.on(createAvMuxerEvent, (steps, done) => {
        console.info('start createAvMuxer!');
        steps.shift();
        media.createAvMuxer().then((data) => {
            testAVMuxer = data;
            console.info('createAvMuxer success , data is : ' + testAVMuxer);
            toNextStep(testAVMuxer, steps, done)
        }, (err) => {
            mediaTestBase.printError(err, done);
        })
    });

    eventEmitter.on(createAvMuxerErrEvent, (steps, done) => {
        console.info('start createAvMuxer!');
        steps.shift();
        media.createAvMuxer().then((data) => {
            expect().assertFail();
            done();
        }).catch((err) => {
            console.info('createAvMuxer fail, err is : ' + err);
            expect(true).assertTrue();
            done();
        })
    });

    eventEmitter.on(setOutputEvent, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.setOutput(outputFileFdPath, parameters.outputFormat).then(() => {
            console.info('setOutput success!');
            toNextStep(testAVMuxer, steps, done);
        }, (err) => {
            mediaTestBase.printError(err, done);
        });
    });

    eventEmitter.on(setOutputErrEvent, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.setOutput(outputFileFdPath, parameters.outputFormat).then(() => {
            expect().assertFail();
            done();
        }).catch((err) => {
            console.info('setOutput fail, err is : ' + err);
            expect(true).assertTrue();
            done();
        });
    });

    eventEmitter.on(audioAddTrackEvent, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.addTrack(parameters.audioDescription).then((data) => {
            audioTrackIndex = data;
            console.info('audioTrackIndex is : ' + audioTrackIndex);
            toNextStep(testAVMuxer, steps, done);
        }, (err) => {
            mediaTestBase.printError(err, done);
        });
    });

    eventEmitter.on(audioAddTrackErrEvent, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.addTrack(parameters.audioDescription).then((data) => {
            expect().assertFail();
            done();
        }).catch((err) => {
            console.info('err is : ' + err);
            expect(true).assertTrue();
            done();
        });
    });

    eventEmitter.on(videoAddTrackEvent, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.addTrack(parameters.videoDescription).then((data) => {
            videoTrackIndex = data;
            console.info('videoTrackIndex is : ' + videoTrackIndex);
            toNextStep(testAVMuxer, steps, done);
        }, (err) => {
            mediaTestBase.printError(err, done);
        });
    });

    eventEmitter.on(videoAddTrackErrEvent, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.addTrack(parameters.videoDescription).then((data) => {
            expect().assertFail();
            done();
        }).catch((err) => {
            console.info('addTrack fail, err is : ' + err);
            expect(true).assertTrue();
            done();
        });
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
        testAVMuxer.start().then(() => {
            console.info('start success ');
            toNextStep(testAVMuxer, steps, done);
        }, (err) => {
            mediaTestBase.printError(err, done);
        })
    });

    eventEmitter.on(startErrEvent, (testAVMuxer, steps, done) => {
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
            expect().assertFail();
            done();
        }).catch((err) => {
            console.info('start fail, err is : ' + err);
            expect(true).assertFail();
            done();
        })
    });

    eventEmitter.on(AudioAndVideoDataExchangeEvent, (testAVMuxer, steps, done) => {
        steps.shift();
        audioBuffer = videoBuffer;
        console.info('Audio => Video Exchange success!');
        toNextStep(testAVMuxer, steps, done);
    });

    eventEmitter.on(VideoAndAudioDataExchangeEvent, (testAVMuxer, steps, done) => {
        steps.shift();
        videoBuffer = audioBuffer;
        console.info('Video => Audio Exchange success!');
        toNextStep(testAVMuxer, steps, done);
    });

    eventEmitter.on(updateTrackEvent, (testAVMuxer, steps, done) => {
        steps.shift();
        audioTrackIndex = 998;
        videoTrackIndex = 999;
        console.info('update track success!');
        console.info('after update, audioTrackIndex is : ' + audioTrackIndex + ', videoTrackIndex is : '
        + videoTrackIndex);
        toNextStep(testAVMuxer, steps, done);
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
        testAVMuxer.writeTrackSample(data, info).then(() => {
            console.info('data is : ' + data + '  sampleInfo is : ' + JSON.stringify(info))
            console.info('videoFrameCount: ' + videoFrameCount + ' video_frame_size.videoFrameSize.length: '
            + parameters.videoFrameSize.length);
            videoFrameCount++;
            if (videoFrameCount >= parameters.videoFrameSize.length) {
                steps.shift();
                toNextStep(testAVMuxer, steps, done);
            } else {
                eventEmitter.emit(videoWriteTrackSampleEvent, testAVMuxer, steps, done);
            }
        }, (err) => {
            mediaTestBase.printError(err, done);
        })
    });

    eventEmitter.on(videoWriteTrackSampleErrEvent, (testAVMuxer, steps, done) => {
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
            eventEmitter.emit(videoWriteTrackSampleErrEvent, testAVMuxer, steps, done);
        }).catch((err) => {
            console.info('write video fail, err is : ' + err);
            expect(true).assertTrue();
            done();
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
        testAVMuxer.writeTrackSample(data, info).then(() => {
            console.info('data is : ' + data + ', sampleInfo is : ' + JSON.stringify(info));
            console.info('audioFrameCount: ' + audioFrameCount + ' audio_frame_size.length: '
            + parameters.audioFrameSize.length);
            audioFrameCount++;
            if (audioFrameCount >= parameters.audioFrameSize.length) {
                steps.shift();
                toNextStep(testAVMuxer, steps, done);
            } else {
                eventEmitter.emit(audioWriteTrackSampleEvent, testAVMuxer, steps, done);
            }
        }, (err) => {
            mediaTestBase.printError(err, done);
        })
    });

    eventEmitter.on(audioWriteTrackSampleErrEvent, (testAVMuxer, steps, done) => {
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
            eventEmitter.emit(audioWriteTrackSampleErrEvent, testAVMuxer, steps, done);
        }, (err) => {
            console.info('write audio fail, err is : ' + err);
            expect(true).assertTrue();
            done();
        })
    });

    eventEmitter.on(videoWriteTrackSampleJumpEvent, (testAVMuxer, steps, done) => {
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
                eventEmitter.emit(videoWriteTrackSampleJumpEvent, testAVMuxer, steps, done);
            }
        }).catch((err) => {
            console.info('write video fail, err is : ' + err);
            expect(true).assertFail();
            done();
        })
    });

    eventEmitter.on(audioWriteTrackSampleErrEventFirst, (testAVMuxer, steps, done) => {
        console.info('writeAudioBuffer start !');
        audioTimestamp = timeStampArr[audioErrCount];
        console.info('audioOffset is : ' + audioOffset);
        data = audioBuffer.slice(audioOffset, audioOffset + parameters.audioFrameSize[audioFrameCount]);
        console.info('data is : ' + data);
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
                eventEmitter.emit(audioWriteTrackSampleErrEventFirst, testAVMuxer, steps, done);
            }
        }).catch((err) => {
            console.info('write audio fail, err is : ' + err);
            expect(true).assertTrue();
            done();
        })
    });

    eventEmitter.on(audioWriteTrackSampleErrEventSecond, (testAVMuxer, steps, done) => {
        console.info('writeAudioBuffer start !');
        audioTimestamp = timeStampArr[audioErrCount];
        console.info('audioOffset is : ' + audioOffset);
        data = audioBuffer.slice(audioOffset, audioOffset + parameters.audioFrameSize[audioFrameCount]);
        console.info('data is : ' + data);
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
                eventEmitter.emit(audioWriteTrackSampleErrEventSecond, testAVMuxer, steps, done);
            }
        }).catch((err) => {
            console.info('write audio fail, err is : ' + err);
            expect(true).assertTrue();
            done();
        })
    });

    eventEmitter.on(clearEvent, (testAVMuxer, steps, done) => {
        steps.shift();
        audioFrameCount = 0;
        audioOffset = 0;
        console.info('clear success');
        toNextStep(testAVMuxer, steps, done);
    });

    eventEmitter.on(jumpEvent, (testAVMuxer, steps, done) => {
        steps.shift();
        for (let i = 0;i < 100; i++) {
            videoOffset += parameters.videoFrameSize[videoFrameCount+i];
        }
        videoFrameCount += 100;
        videoTimestamp += 100 * 33;
        console.info('jump success');
        toNextStep(testAVMuxer, steps, done);
    });

    eventEmitter.on(delayEvent, (testAVMuxer, steps, done) => {
        sleep(TIME_3000);
        steps.shift();
        toNextStep(testAVMuxer, steps, done);
    });

    eventEmitter.on(stopEvent, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.stop().then(() => {
            console.info('testAVMuxer stop success');
            toNextStep(testAVMuxer, steps, done);
        }, (err) => {
            mediaTestBase.printError(err, done);
        })

    });

    eventEmitter.on(releaseEvent, (testAVMuxer, steps, done) => {
        steps.shift();
        testAVMuxer.release().then(() => {
            console.info('testAVMuxer release success');
            toNextStep(testAVMuxer, steps, done);
        }, (err) => {
            mediaTestBase.printError(err, done);
        })
    });

    eventEmitter.on(audioPlayEvent, (done) => {
        AVMuxerTestBase.playAudio(outputFileFdPath, done);
    });

    eventEmitter.on(videoPlayEvent, (done) => {
        AVMuxerTestBase.playVideo(surfaceID, outputFileFdPath, done);
    });

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0100
       * @tc.name      : Does not support mp3 code_mime mux as m4a
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0100', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0100');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackErrEvent];
        await entrance(AVMuxerTestBase.AUDIO_MP3, 'RELIABILITY_PROMISE_0100.m4a', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0200
       * @tc.name      : Does not support mpeg2 code_mime mux as mp4
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0200', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0200');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackErrEvent];
        await entrance(AVMuxerTestBase.VIDEO_MPEG2, 'RELIABILITY_PROMISE_0200.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0300
       * @tc.name      : Two video tracks are not supported
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0300', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0300');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, videoAddTrackErrEvent];
        await entrance(AVMuxerTestBase.AAC_MPEG4, 'RELIABILITY_PROMISE_0300.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0400
       * @tc.name      : 17 audio tracks are not supported
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0400', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0400');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackEvent, audioAddTrackEvent,
        audioAddTrackEvent, audioAddTrackEvent, audioAddTrackEvent, audioAddTrackEvent, audioAddTrackEvent,
        audioAddTrackEvent, audioAddTrackEvent, audioAddTrackEvent, audioAddTrackEvent, audioAddTrackEvent,
        audioAddTrackEvent, audioAddTrackEvent, audioAddTrackEvent, audioAddTrackEvent, audioAddTrackErrEvent];
        await entrance(AVMuxerTestBase.AAC_MPEG4, 'RELIABILITY_PROMISE_0400.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0500
       * @tc.name      : Does not support writing video data to audio tracks
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0500', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0500');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackEvent, startEvent,
        AudioAndVideoDataExchangeEvent, audioWriteTrackSampleErrEvent];
        await entrance(AVMuxerTestBase.AAC_MPEG4, 'RELIABILITY_PROMISE_0500.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0600
       * @tc.name      : Does not support writing audio data to video tracks
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0600', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0600');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent,
        VideoAndAudioDataExchangeEvent, videoWriteTrackSampleErrEvent];
        await entrance(AVMuxerTestBase.AAC_MPEG4, 'RELIABILITY_PROMISE_0600.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0700
       * @tc.name      : Two tracks only use one track
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0700', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0700');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackEvent,videoAddTrackEvent, startEvent,
        videoWriteTrackSampleEvent,stopEvent,releaseEvent];
        await entrance(AVMuxerTestBase.TWO_TRACKS_ONLY_USE_ONE_TRACK, 'RELIABILITY_PROMISE_0700.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0800
       * @tc.name      : Data writes do not have tracks
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0800', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0800');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackEvent, videoAddTrackEvent, updateTrackEvent,
        startEvent, audioWriteTrackSampleErrEvent, videoWriteTrackSampleErrEvent];
        await entrance(AVMuxerTestBase.AAC_MPEG4, 'RELIABILITY_PROMISE_0800.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0900
       * @tc.name      : The timestamp reads the middle first and then the beginning
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0900', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_0900');
        await toGetAudioTimeStampFromMiddle(AVMuxerTestBase.AUDIO_AAC);
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackEvent, startEvent,
        audioWriteTrackSampleErrEventFirst, clearEvent, audioWriteTrackSampleErrEventSecond,
        stopEvent, releaseEvent];
        await entrance(AVMuxerTestBase.AUDIO_AAC, 'RELIABILITY_PROMISE_0900.m4a', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1000
       * @tc.name      : The time stamp suddenly jumped
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1000', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1000');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent,
        videoWriteTrackSampleJumpEvent, jumpEvent, videoWriteTrackSampleEvent, stopEvent, releaseEvent,
        videoPlayEvent];
        await entrance(AVMuxerTestBase.VIDEO_MPEG4, 'RELIABILITY_PROMISE_1000.mp4', steps, done)
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1100
       * @tc.name      : Timestamp writes very little data (1 frame)
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1100', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1100');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent,
        videoWriteTrackSampleEvent, delayEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.WRITE_DATA_ONLY_1_FRAME, 'RELIABILITY_PROMISE_1100.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1200
       * @tc.name      : SetOutput is called after start
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1200', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1200');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent, setOutputErrEvent];
        await entrance(AVMuxerTestBase.AAC_H264, 'RELIABILITY_PROMISE_1200.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1300
       * @tc.name      : AddTrack is called after start
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1300', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1300');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent, videoAddTrackErrEvent];
        await entrance(AVMuxerTestBase.AAC_H264, 'RELIABILITY_PROMISE_1300.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1400
       * @tc.name      : After stop, addtrack is called
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1400', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1400');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackEvent, videoAddTrackEvent, startEvent,
        audioWriteTrackSampleEvent, videoWriteTrackSampleEvent, stopEvent, audioAddTrackErrEvent, releaseEvent];
        await entrance(AVMuxerTestBase.AAC_MPEG4, 'RELIABILITY_PROMISE_1400.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1500
       * @tc.name      : After stop, call writeTrackSample
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1500', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1500');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent,
        videoWriteTrackSampleEvent, stopEvent, videoWriteTrackSampleErrEvent, releaseEvent];
        await entrance(AVMuxerTestBase.VIDEO_H264, 'RELIABILITY_PROMISE_1500.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1600
       * @tc.name      : Add 1 track, do not write data, directly start then stop
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1600', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1600');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent, stopEvent,
        releaseEvent];
        await entrance(AVMuxerTestBase.VIDEO_H264, 'RELIABILITY_PROMISE_1600.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1700
       * @tc.name      : set rotation 60°
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1700', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1700');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent,
        videoWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.SET_ROTATION_60, 'RELIABILITY_PROMISE_1700.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1800
       * @tc.name      : Rotation is not set
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1800', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1800');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent,
        videoWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.VIDEO_H264, 'RELIABILITY_PROMISE_1800.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1900
       * @tc.name      : Set longitude to -200 and latitude to 50
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1900', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_1900');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent,
        videoWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.SET_LONGITUDE_NEGATIVE_200_LATITUDE_50, 'RELIABILITY_PROMISE_1900.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2000
       * @tc.name      : Set longitude to 45 and latitude to 200
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2000', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2000');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent,
        videoWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.SET_LONGITUDE_45_LATITUDE_200, 'RELIABILITY_PROMISE_2000.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2100
       * @tc.name      : Set longitude to -200 and latitude to 100
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2100', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2100');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent,
        videoWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.SET_LONGITUDE_NEGATIVE_200_LATITUDE_100, 'RELIABILITY_PROMISE_2100.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2200
       * @tc.name      : Latitude and longitude are not set
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2200', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2200');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent,
        videoWriteTrackSampleEvent, stopEvent, releaseEvent, videoPlayEvent];
        await entrance(AVMuxerTestBase.VIDEO_H264, 'RELIABILITY_PROMISE_2200.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2300
       * @tc.name      : Write data before Start
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2300', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2300');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, videoWriteTrackSampleErrEvent];
        await entrance(AVMuxerTestBase.VIDEO_H264, 'RELIABILITY_PROMISE_2300.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2400
       * @tc.name      : Set 17 instances
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2400', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2400');
        let steps = [createAvMuxerEvent, createAvMuxerEvent, createAvMuxerEvent, createAvMuxerEvent,
        createAvMuxerEvent, createAvMuxerEvent, createAvMuxerEvent, createAvMuxerEvent, createAvMuxerEvent,
        createAvMuxerEvent, createAvMuxerEvent, createAvMuxerEvent, createAvMuxerEvent, createAvMuxerEvent,
        createAvMuxerEvent, createAvMuxerEvent, createAvMuxerErrEvent];
        await entrance(AVMuxerTestBase.VIDEO_H264, 'RELIABILITY_PROMISE_2400.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2500
       * @tc.name      : Audio addTrack in the description field value validation less set codec_mime
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2500', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2500');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackErrEvent];
        await entrance(AVMuxerTestBase.AUDIODESCRIPTION_NONE_CODEC_MIME, 'RELIABILITY_PROMISE_2500.m4a', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2600
       * @tc.name      : Audio addTrack in the description field value validation less set sample_rate
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2600', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2600');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackErrEvent];
        await entrance(AVMuxerTestBase.AUDIODESCRIPTION_NONE_SAMPLE_RATE, 'RELIABILITY_PROMISE_2600.m4a', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2700
       * @tc.name      : Audio addTrack in the description field value validation less set channel_count
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2700', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2700');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackErrEvent];
        await entrance(AVMuxerTestBase.AUDIODESCRIPTION_NONE_CHANNEL_COUNT, 'RELIABILITY_PROMISE_2700.m4a', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2800
       * @tc.name      : Video addTrack in the description field value verification less set width
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2800', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2800');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackErrEvent];
        await entrance(AVMuxerTestBase.VIDEODESCRIPTION_NONE_WIDTH, 'RELIABILITY_PROMISE_2800.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2900
       * @tc.name      : Video addTrack in the description field value verification less set height
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2900', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_2900');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackErrEvent];
        await entrance(AVMuxerTestBase.VIDEODESCRIPTION_NONE_HEIGHT, 'RELIABILITY_PROMISE_2900.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3000
       * @tc.name      : Video addTrack in the description field value verification less set frame_rate
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3000', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3000');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackErrEvent];
        await entrance(AVMuxerTestBase.VIDEODESCRIPTION_NONE_FRAME_RATE, 'RELIABILITY_PROMISE_3000.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3100
       * @tc.name      : Video addTrack in the description field value verification less set codec_mime
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3100', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3100');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackErrEvent];
        await entrance(AVMuxerTestBase.VIDEODESCRIPTION_NONE_CODEC_MIME, 'RELIABILITY_PROMISE_3100.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3200
       * @tc.name      : Set sample_rate for verifying the value of description field in addTrack
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3200', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3200');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackErrEvent];
        await entrance(AVMuxerTestBase.AUDIO_AND_VIDEO_AUDIODESCRIPTION_NONE_SAMPLE_RATE,
            'RELIABILITY_PROMISE_3200.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3300
       * @tc.name      : Set sample_rate for verifying the value of description field in channel_count
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3300', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3300');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackErrEvent];
        await entrance(AVMuxerTestBase.AUDIO_AND_VIDEO_VIDEODESCRIPTION_NONE_FRAME_RATE,
            'RELIABILITY_PROMISE_3300.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3400
       * @tc.name      : TrackSampleInfo in writeTrackSample passes less time parameters
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3400', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3400');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent,
        videoWriteTrackSampleErrEvent, stopEvent, releaseEvent];
        await entrance(AVMuxerTestBase.SAMPLEINFO_NONE_TIMEMS, 'RELIABILITY_PROMISE_3400.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3500
       * @tc.name      : TrackSampleInfo in writeTrackSample passes less offset parameters
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3500', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3500');
        let steps = [createAvMuxerEvent, setOutputEvent, videoAddTrackEvent, startEvent,
        videoWriteTrackSampleErrEvent, stopEvent, releaseEvent];
        await entrance(AVMuxerTestBase.SAMPLEINFO_NONE_OFFSET, 'RELIABILITY_PROMISE_3500.mp4', steps, done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3600
       * @tc.name      : TrackSampleInfo in writeTrackSample passes less flags parameters
       * @tc.desc      : test media muxer
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3600', 0, async function (done) {
        console.info('case SUB_MEDIA_AVMUXER_RELIABILITY_PROMISE_3600');
        let steps = [createAvMuxerEvent, setOutputEvent, audioAddTrackEvent, startEvent,
        audioWriteTrackSampleErrEvent];
        await entrance(AVMuxerTestBase.SAMPLEINFO_NONE_FLAGS, 'RELIABILITY_PROMISE_3600.m4a', steps, done);
    })

})
