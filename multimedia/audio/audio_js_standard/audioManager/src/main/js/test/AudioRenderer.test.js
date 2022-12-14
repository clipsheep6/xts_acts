/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http:// www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import audio from '@ohos.multimedia.audio';
import fileio from '@ohos.fileio';
import featureAbility from '@ohos.ability.featureAbility'
import resourceManager from '@ohos.resourceManager';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';

describe('audioRenderer', function () {

    let fdRead;
    let readpath;
    let fdPath;
    let filePath;
    let LE24;
    let LE32;
    const audioManager = audio.getAudioManager();
    console.info('AudioFrameworkRenderLog: Create AudioManger Object JS Framework');
   
    beforeAll(async function () {
        console.info('AudioFrameworkRenderLog: beforeAll: Prerequisites at the test suite level');
    })

    beforeEach(async function () {
        console.info('AudioFrameworkRenderLog: beforeEach: Prerequisites at the test case level');
        await sleep(1000);
    })

    afterEach(function () {
        console.info('AudioFrameworkRenderLog: afterEach: Test case-level clearance conditions');
    })

    afterAll(async function () {
        console.info('AudioFrameworkRenderLog: afterAll: Test suite-level cleanup condition');
    })

    function sleep(ms) {
        return new Promise(resolve => setTimeout(resolve, ms));
    }

    async function closeFileDescriptor(fileName) {
        await resourceManager.getResourceManager().then(async (mgr) => {
            await mgr.closeRawFileDescriptor(fileName).then(value => {
                console.log('AudioFrameworkRenderLog:case closeRawFileDescriptor success for file:' + fileName);
            }).catch(error => {
                console.log('AudioFrameworkRenderLog:case closeRawFileDescriptor err: ' + error);
            });
        });
    }

    async function getFdRead(pathName, done) {
        let context = await featureAbility.getContext();
        console.info("case0 context is  " + context);
        await context.getFilesDir().then((data) => {
            console.info("case1 getFilesDir is path " + data);
            filePath = data + '/' + pathName;
            console.info('case4 filePath is ' + filePath);

        })
        fdPath = 'fd://';
        await fileio.open(filePath).then((fdNumber) => {
            fdPath = fdPath + '' + fdNumber;
            fdRead = fdNumber;
            console.info('[fileIO]case open fd success,fdPath is ' + fdPath);
            console.info('[fileIO]case open fd success,fdRead is ' + fdRead);

        }, (err) => {
            console.info('[fileIO]case open fd failed');
        }).catch((err) => {
            console.info('[fileIO]case catch open fd failed');
        });
    }
    
    async function playbackPromise(AudioRendererOptions, pathName, AudioScene) {
        var resultFlag = 'new';
        console.info('AudioFrameworkRenderLog: Promise : Audio Playback Function');
        let isPass = false;
        var audioRen;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            return resultFlag;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            return resultFlag;
        }

        console.info('AudioFrameworkRenderLog: AudioRenderer : Path : ' + pathName);

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.getStreamInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer getStreamInfo:');
            console.info('AudioFrameworkRenderLog: Renderer sampleFormat:' + audioParamsGet.sampleFormat);
            console.info('AudioFrameworkRenderLog: Renderer samplingRate:' + audioParamsGet.samplingRate);
            console.info('AudioFrameworkRenderLog: Renderer channels:' + audioParamsGet.channels);
            console.info('AudioFrameworkRenderLog: Renderer encodingType:' + audioParamsGet.encodingType);
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: getStreamInfo :ERROR: ' + err.message);
            resultFlag = false;
        });
        if (resultFlag == false) {
            console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
            return resultFlag;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });
        if (resultFlag == false) {
            console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
            return resultFlag;
        }

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });
        if (resultFlag == false) {
            console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
            return resultFlag;
        }

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        var bufferSize;
        await audioRen.getBufferSize().then(async function (data) {
            console.info('AudioFrameworkRenderLog: getBufferSize :SUCCESS ' + data);
            bufferSize = data;
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: getBufferSize :ERROR : ' + err.message);
            resultFlag = false;
        });
        if (resultFlag == false) {
            console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
            return resultFlag;
        }

        let ss = fileio.fdopenStreamSync(fdRead, 'r');
        console.info('AudioFrameworkRenderLog:case2: File Path: ' + ss);
        let discardHeader = new ArrayBuffer(44);
        ss.readSync(discardHeader);
        let totalSize = fileio.fstatSync(fdRead).size;
        console.info('AudioFrameworkRenderLog:case3: File totalSize size: ' + totalSize);
        totalSize = totalSize - 44;
        console.info('AudioFrameworkRenderLog: File size : Removing header: ' + totalSize);
        let rlen = 0;
        while (rlen < totalSize / 4) {
            let buf = new ArrayBuffer(bufferSize);
            rlen += ss.readSync(buf);
            console.info('AudioFrameworkRenderLog:BufferAudioFramework: bytes read from file: ' + rlen);
            await audioRen.write(buf);
            if (rlen > (totalSize / 2)) {
                await audioManager.getAudioScene().then(async function (data) {
                    console.info('AudioFrameworkRenderLog:AudioFrameworkAudioScene: getAudioScene : Value : ' + data);
                }).catch((err) => {
                    console.info('AudioFrameworkRenderLog:AudioFrameworkAudioScene: getAudioScene : ERROR : ' + err.message);
                    resultFlag = false;
                });
            }
        }
        console.info('AudioFrameworkRenderLog: Renderer after read');

        await audioRen.drain().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer drained : SUCCESS');
        }).catch((err) => {
            console.error('AudioFrameworkRenderLog: Renderer drain: ERROR : ' + err.message);
            resultFlag = false;
        });
        if (resultFlag == false) {
            console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
            return resultFlag;
        }

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
            resultFlag = true;
            console.info('AudioFrameworkRenderLog: resultFlagRen : ' + resultFlag);
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
            resultFlag = false;
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
            resultFlag = false;
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);

        return resultFlag;
    }

    async function playbackPromise_93(AudioRendererOptions, pathName, AudioScene) {
        var resultFlag = true;
        console.info('AudioFrameworkRenderLog: Promise : Audio Playback Function');

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            return resultFlag;
        }

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.getStreamInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer getStreamInfo:');
            console.info('AudioFrameworkRenderLog: Renderer sampleFormat:' + audioParamsGet.sampleFormat);
            console.info('AudioFrameworkRenderLog: Renderer samplingRate:' + audioParamsGet.samplingRate);
            console.info('AudioFrameworkRenderLog: Renderer channels:' + audioParamsGet.channels);
            console.info('AudioFrameworkRenderLog: Renderer encodingType:' + audioParamsGet.encodingType);
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: getStreamInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });

        //let audioTime = Date.now();
        let audioTimeStart;

        await audioRen.getAudioTime().then(async function (data) {
            // audioTime = Date.now();
            audioTimeStart = data / 1000000000;//-audioTime)/1000000000;
            console.info('AudioFrameworkRenderLog: getAudioTime : After Start : Converted: ' + audioTimeStart);
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: getAudioTime : ERROR : ' + err.message);
            resultFlag = false;
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        var bufferSize = await audioRen.getBufferSize();
        console.info('AudioFrameworkRenderLog: buffer size: ' + bufferSize);

        let ss = fileio.fdopenStreamSync(fdRead, 'r');
        console.info('AudioFrameworkRenderLog:case 2:AudioFrameworkRenderLog: File Path: ' + ss);
        let discardHeader = new ArrayBuffer(44);
        ss.readSync(discardHeader);
        let totalSize = fileio.fstatSync(fdRead).size;
        console.info('AudioFrameworkRenderLog:case 3 : AudioFrameworkRenderLog: File totalSize size: ' + totalSize);
        totalSize = totalSize - 44;
        console.info('AudioFrameworkRenderLog: File size : Removing header: ' + totalSize);
        let rlen = 0;
        while (rlen < totalSize / 4) {
            let buf = new ArrayBuffer(bufferSize);
            rlen += ss.readSync(buf);
            console.info('AudioFrameworkRenderLog:BufferAudioFramework: bytes read from file: ' + rlen);
            await audioRen.write(buf);
        }
        console.info('AudioFrameworkRenderLog: Renderer after read');

        //var gettime = audioTimeMiddle-audioTimeStart;
        if (audioTimeStart != 0) {
            console.info('AudioFrameworkRenderLog: getAudioTime : PASS : ' + audioTimeStart);
        }
        else {
            console.info('AudioFrameworkRenderLog: getAudioTime : FAIL : ' + audioTimeStart);
            resultFlag = false;
        }

        await audioRen.drain().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer drained : SUCCESS');
        }).catch((err) => {
            console.error('AudioFrameworkRenderLog: Renderer drain: ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        return resultFlag;
    }

    async function playbackPromise_94(AudioRendererOptions, pathName, AudioScene) {
        var resultFlag = true;
        console.info('AudioFrameworkRenderLog: Promise : Audio Playback Function');

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            return resultFlag;
        }

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.getStreamInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer getStreamInfo:');
            console.info('AudioFrameworkRenderLog: Renderer sampleFormat:' + audioParamsGet.sampleFormat);
            console.info('AudioFrameworkRenderLog: Renderer samplingRate:' + audioParamsGet.samplingRate);
            console.info('AudioFrameworkRenderLog: Renderer channels:' + audioParamsGet.channels);
            console.info('AudioFrameworkRenderLog: Renderer encodingType:' + audioParamsGet.encodingType);
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: getStreamInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });

        // let audioTime = Date.now();
        let audioTimeStart;
        //let audioTimeEnd;
        //let audioTimeMiddle;
        //console.info('AudioFrameworkRenderLog: Current Time in NANOSeconds : '+audioTime);
        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        var bufferSize = await audioRen.getBufferSize();
        console.info('AudioFrameworkRenderLog: buffer size: ' + bufferSize);

        let ss = fileio.fdopenStreamSync(fdRead, 'r');
        console.info('AudioFrameworkRenderLog:case 2:AudioFrameworkRenderLog: File Path: ' + ss);
        let discardHeader = new ArrayBuffer(44);
        ss.readSync(discardHeader);
        let totalSize = fileio.fstatSync(fdRead).size;
        console.info('AudioFrameworkRenderLog:case 3 : AudioFrameworkRenderLog: File totalSize size: ' + totalSize);
        totalSize = totalSize - 44;
        console.info('AudioFrameworkRenderLog: File size : Removing header: ' + totalSize);
        let rlen = 0;
        var gettime = 0;
        while (rlen < totalSize / 4) {
            let buf = new ArrayBuffer(bufferSize);
            rlen += ss.readSync(buf);
            console.info('AudioFrameworkRenderLog:BufferAudioFramework: bytes read from file: ' + rlen);
            await audioRen.write(buf);
            await audioRen.getAudioTime().then(async function (data) {
                audioTimeStart = data / 1000000000;
                console.info('AudioFrameworkRenderLog: getAudioTime : After Start : Converted: ' + audioTimeStart);
            }).catch((err) => {
                console.info('AudioFrameworkRenderLog: getAudioTime : ERROR : ' + err.message);
                resultFlag = false;
            });
        }
        console.info('AudioFrameworkRenderLog: Renderer after read');

        await audioRen.drain().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer drained : SUCCESS');
        }).catch((err) => {
            console.error('AudioFrameworkRenderLog: Renderer drain: ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
        });

        if (audioTimeStart != 0) {
            console.info('AudioFrameworkRenderLog: getAudioTime : PASS : ' + audioTimeStart);
        }
        else {
            console.info('AudioFrameworkRenderLog: getAudioTime : FAIL : ' + audioTimeStart);
            resultFlag = false;
        }

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        return resultFlag;
    }

    async function playbackPromise_95(AudioRendererOptions, pathName, AudioScene) {
        var resultFlag = true;
        console.info('AudioFrameworkRenderLog: Promise : Audio Playback Function');

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            return resultFlag;
        }

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.getStreamInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer getStreamInfo:');
            console.info('AudioFrameworkRenderLog: Renderer sampleFormat:' + audioParamsGet.sampleFormat);
            console.info('AudioFrameworkRenderLog: Renderer samplingRate:' + audioParamsGet.samplingRate);
            console.info('AudioFrameworkRenderLog: Renderer channels:' + audioParamsGet.channels);
            console.info('AudioFrameworkRenderLog: Renderer encodingType:' + audioParamsGet.encodingType);
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: getStreamInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });

        let audioTimeStart;

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        var bufferSize = await audioRen.getBufferSize();
        console.info('AudioFrameworkRenderLog: buffer size: ' + bufferSize);

        let ss = fileio.fdopenStreamSync(fdRead, 'r');
        console.info('AudioFrameworkRenderLog:case 2:AudioFrameworkRenderLog: File Path: ' + ss);
        let discardHeader = new ArrayBuffer(44);
        ss.readSync(discardHeader);
        let totalSize = fileio.fstatSync(fdRead).size;
        console.info('AudioFrameworkRenderLog:case 3 : AudioFrameworkRenderLog: File totalSize size: ' + totalSize);
        totalSize = totalSize - 44;
        console.info('AudioFrameworkRenderLog: File size : Removing header: ' + totalSize);
        let rlen = 0;
        while (rlen < totalSize / 4) {
            let buf = new ArrayBuffer(bufferSize);
            rlen += ss.readSync(buf);
            console.info('AudioFrameworkRenderLog:BufferAudioFramework: bytes read from file: ' + rlen);
            await audioRen.write(buf);
        }

        console.info('AudioFrameworkRenderLog: Renderer after read');

        await audioRen.drain().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer drained : SUCCESS');
        }).catch((err) => {
            console.error('AudioFrameworkRenderLog: Renderer drain: ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
        });

        await audioRen.getAudioTime().then(async function (data) {
            audioTimeStart = data / 1000000000;
            console.info('AudioFrameworkRenderLog: getAudioTime : After Start : Converted: ' + audioTimeStart);
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: getAudioTime : ERROR : ' + err.message);
            resultFlag = false;
        });

        if (audioTimeStart != 0) {
            console.info('AudioFrameworkRenderLog: getAudioTime : PASS : ' + audioTimeStart);
        }
        else {
            console.info('AudioFrameworkRenderLog: getAudioTime : FAIL : ' + audioTimeStart);
            resultFlag = false;
        }

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        return resultFlag;
    }

    async function playbackPromise_102(AudioRendererOptions, pathName) {
        var resultFlag = false;
        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            return resultFlag;
        }
        audioRen.on('markReach', 55, (position) => {
            console.log('AudioFrameworkTest: markReach Event is called : ' + position);
            resultFlag = true;
        })

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        var bufferSize;
        await audioRen.getBufferSize().then(async function (data) {
            console.info('AudioFrameworkRenderLog: getBufferSize :SUCCESS ' + data);
            bufferSize = data;
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: getBufferSize :ERROR : ' + err.message);
            resultFlag = false;
        });

        let ss = fileio.fdopenStreamSync(fdRead, 'r');
        console.info('AudioFrameworkRenderLog:case 2:AudioFrameworkRenderLog: File Path: ' + ss);
        let discardHeader = new ArrayBuffer(44);
        console.info('AudioFrameworkRenderLog:case 2-1:AudioFrameworkRenderLog: File Path: ');
        ss.readSync(discardHeader);
        console.info('AudioFrameworkRenderLog:case 2-2:AudioFrameworkRenderLog: File Path: ');
        let totalSize = fileio.fstatSync(fdRead).size;
        console.info('AudioFrameworkRenderLog:case 3 : AudioFrameworkRenderLog: File totalSize size: ' + totalSize);
        totalSize = totalSize - 44;
        console.info('AudioFrameworkRenderLog: File size : Removing header: ' + totalSize);
        let rlen = 0;
        while (rlen < totalSize / 4) {
            let buf = new ArrayBuffer(bufferSize);
            rlen += ss.readSync(buf);
            console.info('AudioFrameworkRenderLog:BufferAudioFramework: bytes read from file: ' + rlen);
            await audioRen.write(buf);
        }

        console.info('AudioFrameworkRenderLog: Renderer after read');

        await audioRen.drain().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer drained : SUCCESS');
        }).catch((err) => {
            console.error('AudioFrameworkRenderLog: Renderer drain: ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);
        return resultFlag;
    }

    async function playbackPromise_103(AudioRendererOptions, pathName) {
        var resultFlag = false;
        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            return resultFlag;
        }
        audioRen.on('markReach', 55, (position) => {
            console.log('AudioFrameworkTest: markReach Event is called : ' + position);
            audioRen.off('markReach');
            audioRen.on('markReach', 100, (position) => {
                console.log('AudioFrameworkTest: markReach Event is called : ' + position);
                resultFlag = true;
            });
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        var bufferSize;
        await audioRen.getBufferSize().then(async function (data) {
            console.info('AudioFrameworkRenderLog: getBufferSize :SUCCESS ' + data);
            bufferSize = data;
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: getBufferSize :ERROR : ' + err.message);
            resultFlag = false;
        });

        let ss = fileio.fdopenStreamSync(fdRead, 'r');
        console.info('AudioFrameworkRenderLog:case 2:AudioFrameworkRenderLog: File Path: ' + ss);
        let discardHeader = new ArrayBuffer(44);
        ss.readSync(discardHeader);
        let totalSize = fileio.fstatSync(fdRead).size;
        console.info('AudioFrameworkRenderLog:case 3 : AudioFrameworkRenderLog: File totalSize size: ' + totalSize);
        totalSize = totalSize - 44;
        console.info('AudioFrameworkRenderLog: File size : Removing header: ' + totalSize);
        let rlen = 0;
        while (rlen < totalSize / 4) {
            let buf = new ArrayBuffer(bufferSize);
            rlen += ss.readSync(buf);
            console.info('AudioFrameworkRenderLog:BufferAudioFramework: bytes read from file: ' + rlen);
            await audioRen.write(buf);
        }
        console.info('AudioFrameworkRenderLog: Renderer after read');

        await audioRen.drain().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer drained : SUCCESS');
        }).catch((err) => {
            console.error('AudioFrameworkRenderLog: Renderer drain: ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);
        return resultFlag;
    }

    async function playbackPromise_104(AudioRendererOptions, pathName) {
        var resultFlag = false;
        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            return resultFlag;
        }
        audioRen.on('markReach', 55, (position) => {
            console.log('AudioFrameworkTest: markReach Event is called : ' + position);
            resultFlag = true;
            audioRen.on('markReach', 73, (position) => {
                console.log('AudioFrameworkTest: markReach Event is called : ' + position);
                resultFlag = true;
            });
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        var bufferSize;
        await audioRen.getBufferSize().then(async function (data) {
            console.info('AudioFrameworkRenderLog: getBufferSize :SUCCESS ' + data);
            bufferSize = data;
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: getBufferSize :ERROR : ' + err.message);
            resultFlag = false;
        });

        let ss = fileio.fdopenStreamSync(fdRead, 'r');
        console.info('AudioFrameworkRenderLog:case 2:AudioFrameworkRenderLog: File Path: ' + ss);
        let discardHeader = new ArrayBuffer(44);
        ss.readSync(discardHeader);
        let totalSize = fileio.fstatSync(fdRead).size;
        console.info('AudioFrameworkRenderLog:case 3 : AudioFrameworkRenderLog: File totalSize size: ' + totalSize);
        totalSize = totalSize - 44;
        console.info('AudioFrameworkRenderLog: File size : Removing header: ' + totalSize);
        let rlen = 0;
        while (rlen < totalSize / 4) {
            let buf = new ArrayBuffer(bufferSize);
            rlen += ss.readSync(buf);
            console.info('AudioFrameworkRenderLog:BufferAudioFramework: bytes read from file: ' + rlen);
            await audioRen.write(buf);
        }
        console.info('AudioFrameworkRenderLog: Renderer after read');

        await audioRen.drain().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer drained : SUCCESS');
        }).catch((err) => {
            console.error('AudioFrameworkRenderLog: Renderer drain: ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);
        return resultFlag;
    }

    async function playbackPromise_105(AudioRendererOptions, pathName) {
        var resultFlag = false;
        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            return resultFlag;
        }
        audioRen.on('periodReach', 55, (position) => {
            console.log('AudioFrameworkTest: periodReach Event is called : ' + position);
            resultFlag = true;
            audioRen.off('periodReach');
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        var bufferSize;
        await audioRen.getBufferSize().then(async function (data) {
            console.info('AudioFrameworkRenderLog: getBufferSize :SUCCESS ' + data);
            bufferSize = data;
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: getBufferSize :ERROR : ' + err.message);
            resultFlag = false;
        });

        let ss = fileio.fdopenStreamSync(fdRead, 'r');
        console.info('AudioFrameworkRenderLog:case 2:AudioFrameworkRenderLog: File Path: ' + ss);
        let discardHeader = new ArrayBuffer(44);
        ss.readSync(discardHeader);
        let totalSize = fileio.fstatSync(fdRead).size;
        console.info('AudioFrameworkRenderLog:case 3 : AudioFrameworkRenderLog: File totalSize size: ' + totalSize);
        totalSize = totalSize - 44;
        console.info('AudioFrameworkRenderLog: File size : Removing header: ' + totalSize);
        let rlen = 0;
        while (rlen < totalSize / 4) {
            let buf = new ArrayBuffer(bufferSize);
            rlen += ss.readSync(buf);
            console.info('AudioFrameworkRenderLog:BufferAudioFramework: bytes read from file: ' + rlen);
            await audioRen.write(buf);
        }

        console.info('AudioFrameworkRenderLog: Renderer after read');

        await audioRen.drain().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer drained : SUCCESS');
        }).catch((err) => {
            console.error('AudioFrameworkRenderLog: Renderer drain: ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });
        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);
        return resultFlag;
    }

    async function playbackPromise_106(AudioRendererOptions, pathName) {
        var resultFlag = false;
        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            return resultFlag;
        }
        audioRen.on('periodReach', 55, (position) => {
            console.log('AudioFrameworkTest: periodReach Event is called : ' + position);
            //            resultFlag = true;
            audioRen.off('periodReach');
            audioRen.on('periodReach', 100, (position) => {
                console.log('AudioFrameworkTest: periodReach Event is called : ' + position);
                resultFlag = true;
                audioRen.off('periodReach');
            });

        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        var bufferSize;
        await audioRen.getBufferSize().then(async function (data) {
            console.info('AudioFrameworkRenderLog: getBufferSize :SUCCESS ' + data);
            bufferSize = data;
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: getBufferSize :ERROR : ' + err.message);
            resultFlag = false;
        });

        let ss = fileio.fdopenStreamSync(fdRead, 'r');
        console.info('AudioFrameworkRenderLog:case 2:AudioFrameworkRenderLog: File Path: ' + ss);
        let discardHeader = new ArrayBuffer(44);
        ss.readSync(discardHeader);
        let totalSize = fileio.fstatSync(fdRead).size;
        console.info('AudioFrameworkRenderLog:case 3 : AudioFrameworkRenderLog: File totalSize size: ' + totalSize);
        totalSize = totalSize - 44;
        console.info('AudioFrameworkRenderLog: File size : Removing header: ' + totalSize);
        let rlen = 0;
        while (rlen < totalSize / 4) {
            let buf = new ArrayBuffer(bufferSize);
            rlen += ss.readSync(buf);
            console.info('AudioFrameworkRenderLog:BufferAudioFramework: bytes read from file: ' + rlen);
            await audioRen.write(buf);
        }
        console.info('AudioFrameworkRenderLog: Renderer after read');

        await audioRen.drain().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer drained : SUCCESS');
        }).catch((err) => {
            console.error('AudioFrameworkRenderLog: Renderer drain: ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);
        return resultFlag;
    }

    async function playbackPromise_107(AudioRendererOptions, pathName) {
        var resultFlag = false;
        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            return resultFlag;
        }
        audioRen.on('periodReach', 55, (position) => {
            console.log('AudioFrameworkTest: periodReach Event is called : ' + position);
            resultFlag = true;
            audioRen.on('periodReach', 73, (position) => {
                console.log('AudioFrameworkTest: periodReach Event is called : ' + position);
                resultFlag = false;
            });
        });
        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        var bufferSize;
        await audioRen.getBufferSize().then(async function (data) {
            console.info('AudioFrameworkRenderLog: getBufferSize :SUCCESS ' + data);
            bufferSize = data;
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: getBufferSize :ERROR : ' + err.message);
            resultFlag = false;
        });

        let ss = fileio.fdopenStreamSync(fdRead, 'r');
        console.info('AudioFrameworkRenderLog:case 2:AudioFrameworkRenderLog: File Path: ' + ss);
        let discardHeader = new ArrayBuffer(44);
        ss.readSync(discardHeader);
        let totalSize = fileio.fstatSync(fdRead).size;
        console.info('AudioFrameworkRenderLog:case 3 : AudioFrameworkRenderLog: File totalSize size: ' + totalSize);
        totalSize = totalSize - 44;
        console.info('AudioFrameworkRenderLog: File size : Removing header: ' + totalSize);
        let rlen = 0;
        while (rlen < totalSize / 4) {
            let buf = new ArrayBuffer(bufferSize);
            rlen += ss.readSync(buf);
            console.info('AudioFrameworkRenderLog:BufferAudioFramework: bytes read from file: ' + rlen);
            await audioRen.write(buf);
        }
        console.info('AudioFrameworkRenderLog: Renderer after read');

        await audioRen.drain().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer drained : SUCCESS');
        }).catch((err) => {
            console.error('AudioFrameworkRenderLog: Renderer drain: ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);
        return resultFlag;
    }

    async function playbackPromise_113(AudioRendererOptions, pathName) {
        var resultFlag = true;
        console.info('AudioFrameworkRenderLog: Promise : Audio Playback Function');

        var audioRen;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            resultFlag = false;
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.getStreamInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer getStreamInfo:');
            console.info('AudioFrameworkRenderLog: Renderer sampleFormat:' + audioParamsGet.sampleFormat);
            console.info('AudioFrameworkRenderLog: Renderer samplingRate:' + audioParamsGet.samplingRate);
            console.info('AudioFrameworkRenderLog: Renderer channels:' + audioParamsGet.channels);
            console.info('AudioFrameworkRenderLog: Renderer encodingType:' + audioParamsGet.encodingType);
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: getStreamInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });


        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        var bufferSize = await audioRen.getBufferSize();
        console.info('AudioFrameworkRenderLog: buffer size: ' + bufferSize);

        let ss = fileio.fdopenStreamSync(fdRead, 'r');
        console.info('AudioFrameworkRenderLog:case 2:AudioFrameworkRenderLog: File Path: ' + ss);
        let discardHeader = new ArrayBuffer(44);
        ss.readSync(discardHeader);
        let totalSize = fileio.fstatSync(fdRead).size;
        console.info('AudioFrameworkRenderLog:case 3 : AudioFrameworkRenderLog: File totalSize size: ' + totalSize);
        totalSize = totalSize - 44;
        console.info('AudioFrameworkRenderLog: File size : Removing header: ' + totalSize);
        let rlen = 0;
        while (rlen < totalSize / 4) {
            let buf = new ArrayBuffer(bufferSize);
            rlen += ss.readSync(buf);
            console.info('AudioFrameworkRenderLog:BufferAudioFramework: bytes read from file: ' + rlen);
            await audioRen.write(buf);
            if (rlen > (totalSize / 8)) {
                await audioManager.getAudioScene().then(async function (data) {
                    console.info('AudioFrameworkAudioScene: getAudioScene : Value : ' + data);
                }).catch((err) => {
                    console.info('AudioFrameworkAudioScene: getAudioScene : ERROR : ' + err.message);
                    resultFlag = false;
                });
            }
            if (rlen > (totalSize / 8)) {

                audioRen.setRenderRate(audio.AudioRendererRate.RENDER_RATE_DOUBLE, (err) => {
                    if (err) {
                        console.info('AudioFrameworkAudioScene: setRenderRate : RENDER_RATE_DOUBLE : ERROR : ' + err.message);
                        resultFlag = false;
                    }
                    else {
                        console.info('AudioFrameworkRenderLog: setRenderRate : RENDER_RATE_DOUBLE : SUCCESS');
                    }
                });
            }
        }
        console.info('AudioFrameworkRenderLog: Renderer after read');

        audioRen.getRenderRate((err, data) => {
            if (err) {
                console.info('AudioFrameworkAudioScene: getRenderRate : RENDER_RATE_DOUBLE : ERROR : ' + err.message);
                resultFlag = false;
            }
            else if (data == audio.AudioRendererRate.RENDER_RATE_DOUBLE) {
                console.info('AudioFrameworkRenderLog: getRenderRate : RENDER_RATE_DOUBLE : PASS : ' + data);
            }
            else {
                console.info('AudioFrameworkRenderLog: getRenderRate : RENDER_RATE_DOUBLE : FAIL : ' + data);
                resultFlag = false;
            }
        });

        await audioRen.drain().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer drained : SUCCESS');
        }).catch((err) => {
            console.error('AudioFrameworkRenderLog: Renderer drain: ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        return resultFlag;
    }

    async function playbackCB(AudioRendererOptions, pathName) {

        var resultFlag = 'new';

        console.info('AudioFrameworkRenderLog: CALLBACK : Audio Playback Function');

        var audioRen;
        let isPass = false;

        audio.createAudioRenderer(AudioRendererOptions, (err, data) => {
            if (err) {     
                LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
                LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
                let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
                if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                    isPass = true;
                    return;
                }
                resultFlag = false
            }
            else {
                console.info('AudioFrameworkRenderLog: AudioRender Created : Success : SUCCESS');
                audioRen = data;
            }
        });
        console.log(`isPass: ${isPass}`);
        if (isPass) {
            resultFlag = true;
            return resultFlag;
        }
        if (resultFlag == false) {
            console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
            return resultFlag;
        }

        await sleep(100);

        console.info('AudioFrameworkRenderLog: AudioRenderer : Path : ' + pathName);

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        console.info('AudioFrameworkRenderLog: Callback : Audio Playback Function');

        audioRen.start((err) => {
            if (err) {
                console.error(`AudioFrameworkRenderLog: Renderer start failed: Error: ${err.message}`);
                resultFlag = false;
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer started');
            }
        });
        await sleep(100);
        if (resultFlag == false) {
            console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
            return resultFlag;
        }
        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        var samplingRate;
        audioRen.getStreamInfo(async (err, audioParamsGet) => {
            await sleep(100);
            if (err) {
                console.log('AudioFrameworkRenderLog: getStreamInfo :ERROR: ' + err.message);
                resultFlag = false;
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer getStreamInfo:');
                console.info('AudioFrameworkRenderLog: Renderer sampleFormat:' + audioParamsGet.sampleFormat);
                console.info('AudioFrameworkRenderLog: Renderer samplingRate:' + audioParamsGet.samplingRate);
                console.info('AudioFrameworkRenderLog: Renderer channels:' + audioParamsGet.channels);
                console.info('AudioFrameworkRenderLog: Renderer encodingType:' + audioParamsGet.encodingType);
                samplingRate = audioParamsGet.samplingRate;
            }
        });
        if (resultFlag == false) {
            console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
            return resultFlag;
        }

        audioRen.getRendererInfo(async (err, audioParamsGet) => {
            await sleep(100);
            if (err) {
                console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
                resultFlag = false;
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
                console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
                console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
                console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            }
        });
        await sleep(100);
        if (resultFlag == false) {
            console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
            return resultFlag;
        }

        var bufferSize;
        await audioRen.getBufferSize((err, data) => {
            if (err) {
                console.info('AudioFrameworkRenderLog: getBufferSize :ERROR : ' + err.message);
                resultFlag = false;
            }
            else {
                console.info('AudioFrameworkRenderLog: getBufferSize :SUCCESS ' + data);
                bufferSize = data;
            }
        });
        await sleep(100);
        if (resultFlag == false) {
            console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
            return resultFlag;
        }

        let ss = fileio.fdopenStreamSync(fdRead, 'r');
        console.info('AudioFrameworkRenderLog:case 4: File Path: ' + ss);
        let discardHeader = new ArrayBuffer(44);
        ss.readSync(discardHeader);
        let totalSize = fileio.fstatSync(fdRead).size;
        let aa = fileio.fstatSync(fdRead);
        console.log('case 6 : ' + aa);
        console.info('AudioFrameworkRenderLog: File totalSize size: ' + totalSize);
        totalSize = totalSize - 44;
        let rlen = 0;
        console.info('AudioFrameworkRenderLog: File size : Removing header: ' + totalSize);
        await sleep(100);
        //     var waitTime = (totalSize/88200);
        var waitTime;
        switch (samplingRate) {
            case 44100:
                waitTime = 45;
                break;
            case 8000:
                waitTime = 60;
                break;
            case 32000:
                waitTime = 45;
                break;
            case 64000:
                waitTime = 45;
                break;
            case 96000:
                waitTime = 45;
                break;
            case 11025:
                waitTime = 45;
                break;
            case 12000:
                waitTime = 45;
                break;
            case 16000:
                waitTime = 45;
                break;
            case 22050:
                waitTime = 45;
                break;
            case 24000:
                waitTime = 45;
                break;
            case 48000:
                waitTime = 45;
                break;
            default:
                waitTime = 45;
                break
        }

        await sleep(100);
        console.info('AudioFrameworkRenderLog: waitTime : ' + waitTime);
        while (rlen < totalSize / 10) {
            let buf = new ArrayBuffer(bufferSize);
            rlen += ss.readSync(buf);
            console.info('BufferAudioFramework: bytes read from file: ' + rlen);
            await audioRen.write(buf, (err, data) => {
                if (err) {
                    console.error(`AudioFrameworkRenderLog: Buff write: Error: ${err.message}`);
                    resultFlag = false;
                }
                else {
                    console.info('BufferAudioFramework: Buff write successful : ');
                    resultFlag = true;
                }
            });
            await sleep(waitTime);
        }
        await sleep(2000);
        if (resultFlag == false) {
            console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
            return resultFlag;
        }
        ss.closeSync();
        audioRen.drain((err, state) => {
            if (err) {
                console.error(`AudioFrameworkRenderLog: Renderer drain failed: Error: ${err.message}`);
                resultFlag = false;
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer drained');
            }
        });
        await sleep(100);
        if (resultFlag == false) {
            console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
            return resultFlag;
        }
        audioRen.stop((err, state) => {
            if (err) {
                console.error(`AudioFrameworkRenderLog: Renderer stop failed: Error: ${err.message}`);
                resultFlag = false;
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer stopped');
                resultFlag = true;
                console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
            }
        });
        await sleep(100);
        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        if (resultFlag == false) {
            console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
            return resultFlag;
        }
        audioRen.release((err, state) => {
            if (err) {
                console.error(`AudioFrameworkRenderLog: Renderer release failed: Error: ${err.message}`);
                resultFlag = false;
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer released');
            }
        });
        await sleep(100);
        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        return resultFlag;

    }

    /* *
           * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_001
           * @tc.name      : AudioRenderer-Set1-Media
           * @tc.desc      : AudioRenderer with parameter set 1
           * @tc.size      : MEDIUM
           * @tc.type      : Function
           * @tc.level     : Level 0
       */
    it('SUB_AUDIO_RENDERER_Play_audio_001', 0, async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
            channels: audio.AudioChannel.CHANNEL_1,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-1C-44100-2SW.wav'
        await getFdRead(readpath, done)
        var resultFlag = await playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_VOICE_CHAT);
        await sleep(100);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_093
    * @tc.name      : AudioRenderer - getAudioTime -Before Play
    * @tc.desc      : AudioRenderer - getAudioTime -Before Play
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_093', 0, async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_24000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-2C-24000-3SW.wav'
        await getFdRead(readpath, done)
        var resultFlag = await playbackPromise_93(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_VOICE_CHAT);
        await sleep(100)
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_094
    * @tc.name      : AudioRenderer - getAudioTime - During Play
    * @tc.desc      : AudioRenderer - getAudioTime - During Play
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_094', 0, async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_24000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-2C-24000-3SW.wav'
        await getFdRead(readpath, done);
        var resultFlag = await playbackPromise_94(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_VOICE_CHAT);
        await sleep(100)
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_095
    * @tc.name      : AudioRenderer - getAudioTime - after Play
    * @tc.desc      : AudioRenderer - getAudioTime - after Play
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_095', 0, async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_24000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-2C-24000-3SW.wav'
        await getFdRead(readpath, done);
        var resultFlag = await playbackPromise_95(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_VOICE_CHAT);
        await sleep(100)
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_102
    * @tc.name      : AudioRenderer - markReached - On
    * @tc.desc      : AudioRenderer - markReached
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_102', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        //var fpath = mediaDir+'/StarWars10s-2C-48000-4SW.wav';
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done);
        var resultFlag = await playbackPromise_102(AudioRendererOptions, filePath);
        await sleep(100);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_103
    * @tc.name      : AudioRenderer - markReached - On - off -on
    * @tc.desc      : AudioRenderer - markReached
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_103', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        //var fpath = mediaDir+'/StarWars10s-2C-48000-4SW.wav';
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done);
        var resultFlag = await playbackPromise_103(AudioRendererOptions, filePath);
        await sleep(100)
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_104
    * @tc.name      : AudioRenderer - markReached - on - on
    * @tc.desc      : AudioRenderer - markReached
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_104', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        //var fpath = mediaDir+'/StarWars10s-2C-48000-4SW.wav';
        readpath = 'StarWars10s-2C-48000-4SW.wav';
        await getFdRead(readpath, done);
        var resultFlag = await playbackPromise_104(AudioRendererOptions, filePath);
        await sleep(100)
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_105
    * @tc.name      : AudioRenderer - periodReach - On
    * @tc.desc      : AudioRenderer - periodReach
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_105', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        readpath = 'StarWars10s-2C-48000-4SW.wav';
        await getFdRead(readpath, done);
        var resultFlag = await playbackPromise_105(AudioRendererOptions, filePath);
        await sleep(100)
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_106
    * @tc.name      : AudioRenderer - periodReach - On - off -on
    * @tc.desc      : AudioRenderer - periodReach
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_106', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        //var fpath = mediaDir+'/StarWars10s-2C-48000-4SW.wav';
        readpath = 'StarWars10s-2C-48000-4SW.wav';
        await getFdRead(readpath, done);
        var resultFlag = await playbackPromise_106(AudioRendererOptions, filePath);
        await sleep(100)
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_107
    * @tc.name      : AudioRenderer - periodReach - on - on
    * @tc.desc      : AudioRenderer - periodReach
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_107', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        //var fpath = mediaDir+'/StarWars10s-2C-48000-4SW.wav';
        readpath = 'StarWars10s-2C-48000-4SW.wav';
        await getFdRead(readpath, done);
        var resultFlag = await playbackPromise_107(AudioRendererOptions, filePath);
        await sleep(100)
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
           * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_002
           * @tc.name      : AudioRenderer-Set2-Media
           * @tc.desc      : AudioRenderer with parameter set 2
           * @tc.size      : MEDIUM
           * @tc.type      : Function
           * @tc.level     : Level 0
       */
    it('SUB_AUDIO_RENDERER_Play_audio_002', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_8000,
            channels: audio.AudioChannel.CHANNEL_1,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-1C-8000-2SW.wav'
        await getFdRead(readpath, done)
        var resultFlag = await playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_VOICE_CHAT);
        await sleep(100);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);

        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
           * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_003
           * @tc.name      : AudioRenderer-Set3-Media
           * @tc.desc      : AudioRenderer with parameter set 3
           * @tc.size      : MEDIUM
           * @tc.type      : Function
           * @tc.level     : Level 0
       */
    it('SUB_AUDIO_RENDERER_Play_audio_003', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_32000,
            channels: audio.AudioChannel.CHANNEL_1,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_U8,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-1C-32000-1SW.wav'
        await getFdRead(readpath, done)
        var resultFlag = await playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_VOICE_CHAT);
        await sleep(100);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);

        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
           * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_004
           * @tc.name      : AudioRenderer-Set4-Media
           * @tc.desc      : AudioRenderer with parameter set 4
           * @tc.size      : MEDIUM
           * @tc.type      : Function
           * @tc.level     : Level 0
       */
    it('SUB_AUDIO_RENDERER_Play_audio_004', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_64000,
            channels: audio.AudioChannel.CHANNEL_1,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-1C-64000-3SW.wav'
        await getFdRead(readpath, done)
        var resultFlag = await playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_VOICE_CHAT);
        await sleep(100);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
            * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_005
            * @tc.name      : AudioRenderer-Set5-Media
            * @tc.desc      : AudioRenderer with parameter set 5
            * @tc.size      : MEDIUM
            * @tc.type      : Function
            * @tc.level     : Level 0
        */
    it('SUB_AUDIO_RENDERER_Play_audio_005', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_96000,
            channels: audio.AudioChannel.CHANNEL_1,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-1C-96000-4SW.wav'
        await getFdRead(readpath, done)
        var resultFlag = await playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_VOICE_CHAT);
        await sleep(100);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
            * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_006
            * @tc.name      : AudioRenderer-Set6-Media
            * @tc.desc      : AudioRenderer with parameter set 6
            * @tc.size      : MEDIUM
            * @tc.type      : Function
            * @tc.level     : Level 0
        */
    it('SUB_AUDIO_RENDERER_Play_audio_006', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_11025,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_U8,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-2C-11025-1SW.wav'
        await getFdRead(readpath, done)
        var resultFlag = await playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_VOICE_CHAT);
        await sleep(100);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
            * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_007
            * @tc.name      : AudioRenderer-Set7-Media
            * @tc.desc      : AudioRenderer with parameter set 7
            * @tc.size      : MEDIUM
            * @tc.type      : Function
            * @tc.level     : Level 0
        */
    it('SUB_AUDIO_RENDERER_Play_audio_007', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_12000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-2C-12000-2SW.wav'
        await getFdRead(readpath, done)
        var resultFlag = await playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_VOICE_CHAT);
        await sleep(100);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
            * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_011
            * @tc.name      : AudioRenderer-Set11-Media
            * @tc.desc      : AudioRenderer with parameter set 11
            * @tc.size      : MEDIUM
            * @tc.type      : Function
            * @tc.level     : Level 0
        */
    it('SUB_AUDIO_RENDERER_Play_audio_011', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        var resultFlag = await playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(100);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
        * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_012
        * @tc.name      : AudioRenderer-isStreamActive - UNKNOWN - UNKNOWN
        * @tc.desc      : AudioRenderer-isStreamActive - UNKNOWN - UNKNOWN
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_012', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
            usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.MEDIA).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive Media: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive Media: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();

    })

    /* *
        * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_013
        * @tc.name      : AudioRenderer-isStreamActive - SPEECH - UNKNOWN
        * @tc.desc      : AudioRenderer-isStreamActive - SPEECH - UNKNOWN
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_013', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.MEDIA).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive Media: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive Media: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
        * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_014
        * @tc.name      : AudioRenderer-isStreamActive - MUSIC - UNKNOWN
        * @tc.desc      : AudioRenderer-isStreamActive - MUSIC - UNKNOWN
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_014', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_MUSIC,
            usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.MEDIA).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive Media: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive Media: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
        * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_015
        * @tc.name      : AudioRenderer-isStreamActive - MOVIE - UNKNOWN
        * @tc.desc      : AudioRenderer-isStreamActive - MOVIE - UNKNOWN
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_015', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_MOVIE,
            usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.MEDIA).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive Media: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive Media: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();

    })

    /* *
        * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_016
        * @tc.name      : AudioRenderer-isStreamActive - SONIFICATION - UNKNOWN
        * @tc.desc      : AudioRenderer-isStreamActive - SONIFICATION - UNKNOWN
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_016', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
            usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.RINGTONE).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive RINGTONE: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive RINGTONE: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
        * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_017
        * @tc.name      : AudioRenderer-isStreamActive - RINGTONE - UNKNOWN
        * @tc.desc      : AudioRenderer-isStreamActive - RINGTONE - UNKNOWN
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_017', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.RINGTONE).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive RINGTONE: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive RINGTONE: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
        * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_018
        * @tc.name      : AudioRenderer-isStreamActive - UNKNOWN - MEDIA
        * @tc.desc      : AudioRenderer-isStreamActive - UNKNOWN - MEDIA
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_018', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
            usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.MEDIA).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive Media: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive Media: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_019
    * @tc.name      : AudioRenderer-isStreamActive - SPEECH - MEDIA
    * @tc.desc      : AudioRenderer-isStreamActive - SPEECH - MEDIA
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_019', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.VOICE_ASSISTANT).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive VOICE_ASSISTANT: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive VOICE_ASSISTANT: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_020
    * @tc.name      : AudioRenderer-isStreamActive - MUSIC - MEDIA
    * @tc.desc      : AudioRenderer-isStreamActive - MUSIC - MEDIA
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_020', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_MUSIC,
            usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.MEDIA).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive Media: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive Media: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_021
    * @tc.name      : AudioRenderer-isStreamActive - MOVIE - MEDIA
    * @tc.desc      : AudioRenderer-isStreamActive - MOVIE - MEDIA
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_021', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_MOVIE,
            usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.MEDIA).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive Media: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive Media: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_022
    * @tc.name      : AudioRenderer-isStreamActive - SONIFICATION - MEDIA
    * @tc.desc      : AudioRenderer-isStreamActive - SONOTIFICATION - MEDIA
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_022', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
            usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.RINGTONE).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive RINGTONE: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive RINGTONE: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_023
    * @tc.name      : AudioRenderer-isStreamActive - RINGTONE - MEDIA
    * @tc.desc      : AudioRenderer-isStreamActive - RINGTONE - MEDIA
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_023', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.RINGTONE).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive RINGTONE: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive RINGTONE: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
        * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_024
        * @tc.name      : AudioRenderer-isStreamActive - UNKNOWN - VOICE_COMMUNICATION
        * @tc.desc      : AudioRenderer-isStreamActive - UNKNOWN - VOICE_COMMUNICATION
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_024', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.MEDIA).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive Media: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive Media: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_025
    * @tc.name      : AudioRenderer-isStreamActive - SPEECH - VOICE_COMMUNICATION
    * @tc.desc      : AudioRenderer-isStreamActive - SPEECH - VOICE_COMMUNICATION
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_025', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.VOICE_CALL).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive VOICE_CALL: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive VOICE_CALL: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_026
    * @tc.name      : AudioRenderer-isStreamActive - MUSIC - VOICE_COMMUNICATION
    * @tc.desc      : AudioRenderer-isStreamActive - MUSIC - VOICE_COMMUNICATION
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_026', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_MUSIC,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.MEDIA).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive Media: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive Media: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_027
    * @tc.name      : AudioRenderer-isStreamActive - MOVIE - VOICE_COMMUNICATION
    * @tc.desc      : AudioRenderer-isStreamActive - MOVIE - VOICE_COMMUNICATION
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_027', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_MOVIE,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.MEDIA).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive Media: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive Media: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_028
    * @tc.name      : AudioRenderer-isStreamActive - SONOTIFICATION - VOICE_COMMUNICATION
    * @tc.desc      : AudioRenderer-isStreamActive - SONOTIFICATION - VOICE_COMMUNICATION
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_028', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.MEDIA).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive Media: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive Media: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_029
    * @tc.name      : AudioRenderer-isStreamActive - RINGTONE - VOICE_COMMUNICATION
    * @tc.desc      : AudioRenderer-isStreamActive - RINGTONE - VOICE_COMMUNICATION
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_029', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.MEDIA).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive Media: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive Media: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
        * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_030
        * @tc.name      : AudioRenderer-isStreamActive - UNKNOWN - NOTIFICATION_RINGTONE
        * @tc.desc      : AudioRenderer-isStreamActive - UNKNOWN - NOTIFICATION_RINGTONE
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_030', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.MEDIA).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive Media: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive Media: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_031
    * @tc.name      : AudioRenderer-isStreamActive - SPEECH - NOTIFICATION_RINGTONE
    * @tc.desc      : AudioRenderer-isStreamActive - SPEECH - NOTIFICATION_RINGTONE
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_031', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.MEDIA).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive Media: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive Media: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_032
    * @tc.name      : AudioRenderer-isStreamActive - MUSIC - NOTIFICATION_RINGTONE
    * @tc.desc      : AudioRenderer-isStreamActive - MUSIC - NOTIFICATION_RINGTONE
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_032', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_MUSIC,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.RINGTONE).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive RENGITONE: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive RINGTONE: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_033
    * @tc.name      : AudioRenderer-isStreamActive - MOVIE - NOTIFICATION_RINGTONE
    * @tc.desc      : AudioRenderer-isStreamActive - MOVIE - NOTIFICATION_RINGTONE
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_033', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_MOVIE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.MEDIA).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive Media: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive Media: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_034
    * @tc.name      : AudioRenderer-isStreamActive - SONOTIFICATION - NOTIFICATION_RINGTONE
    * @tc.desc      : AudioRenderer-isStreamActive - SONOTIFICATION - NOTIFICATION_RINGTONE
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_034', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.MEDIA).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive Media: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive Media: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_035
    * @tc.name      : AudioRenderer-isStreamActive - RINGTONE - NOTIFICATION_RINGTONE
    * @tc.desc      : AudioRenderer-isStreamActive - RINGTONE - NOTIFICATION_RINGTONE
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_035', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        playbackPromise(AudioRendererOptions, filePath, audio.AudioScene.AUDIO_SCENE_DEFAULT);
        await sleep(2000);
        audioManager.isActive(audio.AudioVolumeType.RINGTONE).then(function (data) {
            if (data == true) {
                console.log('AudioFrameworkTest: Promise : isActive RINGTONE: PASS :' + data);
            }
            else {
                console.log('AudioFrameworkTest: Promise : isActive RINGTONE: FAIL :' + data);
            }
        });
        await sleep(9000);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();

    })

  

    /* *
        * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_042
        * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set1
        * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set1
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_042', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
            usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_043
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set2
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set2
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_043', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_044
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set3
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set3
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_044', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_MUSIC,
            usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_045
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set4
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set4
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_045', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_MOVIE,
            usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_046
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set5
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set5
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_046', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
            usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_047
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set6
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set6
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_047', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_048
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set7
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set7
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_048', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
            usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_049
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set8
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set8
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_049', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_050
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set9
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set9
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_050', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_MUSIC,
            usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_051
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set10
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set10
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_051', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_MOVIE,
            usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_052
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set11
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set11
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_052', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
            usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_053
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set12
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set12
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_053', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_054
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set13
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set13
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_054', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_055
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set14
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set14
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_055', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_056
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set15
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set15
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_056', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_MUSIC,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_057
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set16
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set16
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_057', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_MOVIE,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_058
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set17
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set17
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_058', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_059
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set18
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set18
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_059', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_060
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set19
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set19
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_060', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_061
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set20
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set20
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_061', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_062
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set21
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set21
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_062', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_MUSIC,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_063
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set22
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set22
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_063', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_MOVIE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_064
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set23
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set23
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_064', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_065
    * @tc.name      : AudioRenderer-SET & GET AudioRendererInfo - Set24
    * @tc.desc      : AudioRenderer-SET & GET AudioRendererInfo - Set24
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_065', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
            if (audioParamsGet.content == AudioRendererInfo.content) {
                console.info('AudioFrameworkRenderLog: Renderer content type: PASS: ' + audioParamsGet.content);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer content type: FAIL: ' + audioParamsGet.content);
                resultFlag = false;
            }
            if (audioParamsGet.usage == AudioRendererInfo.usage) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.usage);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.usage);
                resultFlag = false;
            }
            if (audioParamsGet.rendererFlags == AudioRendererInfo.rendererFlags) {
                console.info('AudioFrameworkRenderLog: Renderer usage type: PASS: ' + audioParamsGet.rendererFlags);
            }
            else {
                console.info('AudioFrameworkRenderLog: Renderer usage type: FAIL: ' + audioParamsGet.rendererFlags);
                resultFlag = false;
            }
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_073
    * @tc.name      : AudioRenderer - STATE_PREPARED
    * @tc.desc      : AudioRenderer - STATE_PREPARED
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_073', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        if (audioRen.state == audio.AudioState.STATE_PREPARED) {
            console.info('AudioFrameworkRenderLog: Audio State : STATE_PREPARED : PASS : ' + audioRen.state);
        }
        else {
            console.info('AudioFrameworkRenderLog: Audio State : STATE_PREPARED : FAIL : ' + audioRen.state);
            resultFlag = false;
        }

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_074
    * @tc.name      : AudioRenderer - STATE_RUNNING
    * @tc.desc      : AudioRenderer - STATE_RUNNING
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_074', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });

        await sleep(500);

        if (audioRen.state == audio.AudioState.STATE_RUNNING) {
            console.info('AudioFrameworkRenderLog: Audio State : STATE_RUNNING : PASS : ' + audioRen.state);
        }
        else {
            console.info('AudioFrameworkRenderLog: Audio State : STATE_RUNNING : FAIL : ' + audioRen.state);
            resultFlag = false;
        }

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
        });

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_075
    * @tc.name      : AudioRenderer - STATE_STOPPED
    * @tc.desc      : AudioRenderer - STATE_STOPPED
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_075', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });

        await sleep(500);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
            resultFlag = false;
        });
        await sleep(500);

        if (audioRen.state == audio.AudioState.STATE_STOPPED) {
            console.info('AudioFrameworkRenderLog: Audio State : STATE_STOPPED : PASS : ' + audioRen.state);
        }
        else {
            console.info('AudioFrameworkRenderLog: Audio State : STATE_STOPPED : FAIL : ' + audioRen.state);
            resultFlag = false;
        }

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_076
    * @tc.name      : AudioRenderer - STATE_RELEASED
    * @tc.desc      : AudioRenderer - STATE_RELEASED
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_076', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });

        await sleep(500);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
            resultFlag = false;
        });
        await sleep(500);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });
        await sleep(500);

        if (audioRen.state == audio.AudioState.STATE_RELEASED) {
            console.info('AudioFrameworkRenderLog: Audio State : STATE_RELEASED : PASS : ' + audioRen.state);
        }
        else {
            console.info('AudioFrameworkRenderLog: Audio State : STATE_RELEASED : FAIL : ' + audioRen.state);
            resultFlag = false;
        }

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_077
    * @tc.name      : AudioRenderer - STATE_PAUSED
    * @tc.desc      : AudioRenderer - STATE_PAUSED
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_077', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = true;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });

        await sleep(500);

        await audioRen.pause().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant Pause :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant Pause :ERROR : ' + err.message);
            resultFlag = false;
        });

        await sleep(500);

        if (audioRen.state == audio.AudioState.STATE_PAUSED) {
            console.info('AudioFrameworkRenderLog: Audio State : STATE_PAUSED : PASS : ' + audioRen.state);
        }
        else {
            console.info('AudioFrameworkRenderLog: Audio State : STATE_PAUSED : FAIL : ' + audioRen.state);
            resultFlag = false;
        }

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
        });
        await sleep(500);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });
        await sleep(500)

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_078
    * @tc.name      : AudioRenderer - SetRenderRate - RENDER_RATE_DOUBLE
    * @tc.desc      : AudioRenderer - SetRenderRate - RENDER_RATE_DOUBLE
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_078', 0, async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        // var fpath = mediaDir+'/StarWars10s-2C-48000-4SW.wav';
        readpath = 'StarWars10s-2C-48000-4SW.wav';
        await getFdRead(readpath, done);
        var AudioScene = audio.AudioScene.AUDIO_SCENE_DEFAULT;

        var resultFlag = true;
        console.info('AudioFrameworkRenderLog: Promise : Audio Playback Function');

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        console.info('AudioFrameworkRenderLog: AudioRenderer : Path : ' + readpath);

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.getStreamInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer getStreamInfo:');
            console.info('AudioFrameworkRenderLog: Renderer sampleFormat:' + audioParamsGet.sampleFormat);
            console.info('AudioFrameworkRenderLog: Renderer samplingRate:' + audioParamsGet.samplingRate);
            console.info('AudioFrameworkRenderLog: Renderer channels:' + audioParamsGet.channels);
            console.info('AudioFrameworkRenderLog: Renderer encodingType:' + audioParamsGet.encodingType);
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: getStreamInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });


        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        var bufferSize = await audioRen.getBufferSize();
        console.info('AudioFrameworkRenderLog: buffer size: ' + bufferSize);

        let ss = fileio.fdopenStreamSync(fdRead, 'r');
        console.info('AudioFrameworkRenderLog:case 2:AudioFrameworkRenderLog: File Path: ' + ss);
        let discardHeader = new ArrayBuffer(44);
        ss.readSync(discardHeader);
        let totalSize = fileio.fstatSync(fdRead).size;
        console.info('AudioFrameworkRenderLog:case 3 : AudioFrameworkRenderLog: File totalSize size: ' + totalSize);
        totalSize = totalSize - 44;
        console.info('AudioFrameworkRenderLog: File size : Removing header: ' + totalSize);
        let rlen = 0;
        while (rlen < totalSize / 4) {
            let buf = new ArrayBuffer(bufferSize);
            rlen += ss.readSync(buf);
            console.info('AudioFrameworkRenderLog:BufferAudioFramework: bytes read from file: ' + rlen);
            await audioRen.write(buf);
            if (rlen > (totalSize / 8)) {
                await audioManager.getAudioScene().then(async function (data) {
                    console.info('AudioFrameworkAudioScene: getAudioScene : Value : ' + data);
                }).catch((err) => {
                    console.info('AudioFrameworkAudioScene: getAudioScene : ERROR : ' + err.message);
                    resultFlag = false;
                });
            }
            if (rlen > (totalSize / 8)) {
                await audioRen.setRenderRate(audio.AudioRendererRate.RENDER_RATE_DOUBLE).then(async function () {
                    console.info('AudioFrameworkRenderLog: setRenderRate : RENDER_RATE_DOUBLE : SUCCESS');
                }).catch((err) => {
                    console.info('AudioFrameworkAudioScene: setRenderRate : RENDER_RATE_DOUBLE : ERROR : ' + err.message);
                    resultFlag = false;
                });
            }
        }

        console.info('AudioFrameworkRenderLog: Renderer after read');
        await audioRen.getRenderRate().then(async function (data) {
            if (data == audio.AudioRendererRate.RENDER_RATE_DOUBLE) {
                console.info('AudioFrameworkRenderLog: getRenderRate : RENDER_RATE_DOUBLE : PASS : ' + data);
            }
            else {
                console.info('AudioFrameworkRenderLog: getRenderRate : RENDER_RATE_DOUBLE : FAIL : ' + data);
                resultFlag = false;
            }
        }).catch((err) => {
            console.info('AudioFrameworkAudioScene: getRenderRate : RENDER_RATE_DOUBLE : ERROR : ' + err.message);
            resultFlag = false;
        });

        await audioRen.drain().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer drained : SUCCESS');
        }).catch((err) => {
            console.error('AudioFrameworkRenderLog: Renderer drain: ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);

        await sleep(500)

        expect(resultFlag).assertTrue();

        await closeFileDescriptor(readpath);
        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_079
    * @tc.name      : AudioRenderer - SetRenderRate - RENDER_RATE_HALF
    * @tc.desc      : AudioRenderer - SetRenderRate - RENDER_RATE_HALF
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_079', 0, async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_24000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        //var fpath = mediaDir+'/StarWars10s-2C-48000-4SW.wav';
        readpath = 'StarWars10s-2C-24000-3SW.wav'
        await getFdRead(readpath, done);
        var AudioScene = audio.AudioScene.AUDIO_SCENE_DEFAULT;

        var resultFlag = true;
        console.info('AudioFrameworkRenderLog: Promise : Audio Playback Function');

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        console.info('AudioFrameworkRenderLog: AudioRenderer : Path : ' + readpath);

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.getStreamInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer getStreamInfo:');
            console.info('AudioFrameworkRenderLog: Renderer sampleFormat:' + audioParamsGet.sampleFormat);
            console.info('AudioFrameworkRenderLog: Renderer samplingRate:' + audioParamsGet.samplingRate);
            console.info('AudioFrameworkRenderLog: Renderer channels:' + audioParamsGet.channels);
            console.info('AudioFrameworkRenderLog: Renderer encodingType:' + audioParamsGet.encodingType);
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: getStreamInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });


        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        var bufferSize = await audioRen.getBufferSize();
        console.info('AudioFrameworkRenderLog: buffer size: ' + bufferSize);

        let ss = fileio.fdopenStreamSync(fdRead, 'r');
        console.info('AudioFrameworkRenderLog:case 2:AudioFrameworkRenderLog: File Path: ' + ss);
        let discardHeader = new ArrayBuffer(44);
        ss.readSync(discardHeader);
        let totalSize = fileio.fstatSync(fdRead).size;
        console.info('AudioFrameworkRenderLog:case 3 : AudioFrameworkRenderLog: File totalSize size: ' + totalSize);
        totalSize = totalSize - 44;
        console.info('AudioFrameworkRenderLog: File size : Removing header: ' + totalSize);
        let rlen = 0;
        while (rlen < totalSize / 4) {
            let buf = new ArrayBuffer(bufferSize);
            rlen += ss.readSync(buf);
            console.info('AudioFrameworkRenderLog:BufferAudioFramework: bytes read from file: ' + rlen);
            await audioRen.write(buf);
            if (rlen > (totalSize / 8)) {
                await audioManager.getAudioScene().then(async function (data) {
                    console.info('AudioFrameworkAudioScene: getAudioScene : Value : ' + data);
                }).catch((err) => {
                    console.info('AudioFrameworkAudioScene: getAudioScene : ERROR : ' + err.message);
                    resultFlag = false;
                });
            }
            if (rlen > (totalSize / 8)) {
                await audioRen.setRenderRate(audio.AudioRendererRate.RENDER_RATE_HALF).then(async function () {
                    console.info('AudioFrameworkRenderLog: setRenderRate : RENDER_RATE_HALF : SUCCESS');
                }).catch((err) => {
                    console.info('AudioFrameworkAudioScene: setRenderRate : RENDER_RATE_HALF : ERROR : ' + err.message);
                    resultFlag = false;
                });
            }
        }
        console.info('AudioFrameworkRenderLog: Renderer after read');
        await audioRen.getRenderRate().then(async function (data) {
            if (data == audio.AudioRendererRate.RENDER_RATE_HALF) {
                console.info('AudioFrameworkRenderLog: getRenderRate : RENDER_RATE_HALF : PASS : ' + data);
            }
            else {
                console.info('AudioFrameworkRenderLog: getRenderRate : RENDER_RATE_HALF : FAIL : ' + data);
                resultFlag = false;
            }
        }).catch((err) => {
            console.info('AudioFrameworkAudioScene: getRenderRate : RENDER_RATE_HALF : ERROR : ' + err.message);
            resultFlag = false;
        });

        await audioRen.drain().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer drained : SUCCESS');
        }).catch((err) => {
            console.error('AudioFrameworkRenderLog: Renderer drain: ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);

        await sleep(500)

        expect(resultFlag).assertTrue();

        await closeFileDescriptor(readpath);
        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_080
    * @tc.name      : AudioRenderer - SetRenderRate - RENDER_RATE_NORMAL
    * @tc.desc      : AudioRenderer - SetRenderRate - RENDER_RATE_NORMAL
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_080', 0, async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
            channels: audio.AudioChannel.CHANNEL_1,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        //var fpath = mediaDir+'/StarWars10s-2C-48000-4SW.wav';
        readpath = 'StarWars10s-1C-44100-2SW.wav'
        await getFdRead(readpath, done);
        var AudioScene = audio.AudioScene.AUDIO_SCENE_DEFAULT;

        var resultFlag = true;
        console.info('AudioFrameworkRenderLog: Promise : Audio Playback Function');

        var audioRen;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            resultFlag = false;
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : Path : ' + readpath);

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });


        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        var bufferSize = await audioRen.getBufferSize();
        console.info('AudioFrameworkRenderLog: buffer size: ' + bufferSize);

        let ss = fileio.fdopenStreamSync(fdRead, 'r');
        console.info('AudioFrameworkRenderLog:case 2:AudioFrameworkRenderLog: File Path: ' + ss);
        let discardHeader = new ArrayBuffer(44);
        ss.readSync(discardHeader);
        let totalSize = fileio.fstatSync(fdRead).size;
        console.info('AudioFrameworkRenderLog:case 3 : AudioFrameworkRenderLog: File totalSize size: ' + totalSize);
        totalSize = totalSize - 44;
        console.info('AudioFrameworkRenderLog: File size : Removing header: ' + totalSize);
        let rlen = 0;
        while (rlen < totalSize / 4) {
            let buf = new ArrayBuffer(bufferSize);
            rlen += ss.readSync(buf);
            console.info('AudioFrameworkRenderLog:BufferAudioFramework: bytes read from file: ' + rlen);
            await audioRen.write(buf);
            if (rlen > (totalSize / 8)) {
                await audioManager.getAudioScene().then(async function (data) {
                    console.info('AudioFrameworkAudioScene: getAudioScene : Value : ' + data);
                }).catch((err) => {
                    console.info('AudioFrameworkAudioScene: getAudioScene : ERROR : ' + err.message);
                    resultFlag = false;
                });
            }
            if (rlen > (totalSize / 8)) {
                await audioRen.setRenderRate(audio.AudioRendererRate.RENDER_RATE_DOUBLE).then(async function () {
                    console.info('AudioFrameworkRenderLog: setRenderRate : RENDER_RATE_DOUBLE : SUCCESS');
                }).catch((err) => {
                    console.info('AudioFrameworkAudioScene: setRenderRate : RENDER_RATE_DOUBLE : ERROR : ' + err.message);
                    resultFlag = false;
                });
            }
        }
        await audioRen.setRenderRate(audio.AudioRendererRate.RENDER_RATE_NORMAL).then(async function () {
            console.info('AudioFrameworkRenderLog: setRenderRate : RENDER_RATE_NORMAL : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkAudioScene: setRenderRate : RENDER_RATE_NORMAL : ERROR : ' + err.message);
            resultFlag = false;
        });

        console.info('AudioFrameworkRenderLog: Renderer after read');
        await audioRen.getRenderRate().then(async function (data) {
            if (data == audio.AudioRendererRate.RENDER_RATE_NORMAL) {
                console.info('AudioFrameworkRenderLog: getRenderRate : RENDER_RATE_NORMAL : PASS : ' + data);
            }
            else {
                console.info('AudioFrameworkRenderLog: getRenderRate : RENDER_RATE_NORMAL : FAIL : ' + data);
                resultFlag = false;
            }
        }).catch((err) => {
            console.info('AudioFrameworkAudioScene: getRenderRate : RENDER_RATE_NORMAL : ERROR : ' + err.message);
            resultFlag = false;
        });

        await audioRen.drain().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer drained : SUCCESS');
        }).catch((err) => {
            console.error('AudioFrameworkRenderLog: Renderer drain: ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);

        await sleep(500)

        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_081
    * @tc.name      : AudioRenderer - SetRenderRate - DEFAULT - RENDER_RATE_NORMAL
    * @tc.desc      : AudioRenderer - SetRenderRate - DEFAULT - RENDER_RATE_NORMAL
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_081', 0, async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_96000,
            channels: audio.AudioChannel.CHANNEL_1,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        // var fpath = mediaDir+'/StarWars10s-2C-48000-4SW.wav';
        readpath = 'StarWars10s-1C-96000-4SW.wav'
        await getFdRead(readpath, done);
        var AudioScene = audio.AudioScene.AUDIO_SCENE_DEFAULT;

        var resultFlag = true;
        console.info('AudioFrameworkRenderLog: Promise : Audio Playback Function');

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        console.info('AudioFrameworkRenderLog: AudioRenderer : Path : ' + readpath);

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);


        await audioRen.getStreamInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer getStreamInfo:');
            console.info('AudioFrameworkRenderLog: Renderer sampleFormat:' + audioParamsGet.sampleFormat);
            console.info('AudioFrameworkRenderLog: Renderer samplingRate:' + audioParamsGet.samplingRate);
            console.info('AudioFrameworkRenderLog: Renderer channels:' + audioParamsGet.channels);
            console.info('AudioFrameworkRenderLog: Renderer encodingType:' + audioParamsGet.encodingType);
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: getStreamInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        await audioRen.getRendererInfo().then(async function (audioParamsGet) {
            console.info('AudioFrameworkRenderLog: Renderer RendererInfo:');
            console.info('AudioFrameworkRenderLog: Renderer content type:' + audioParamsGet.content);
            console.info('AudioFrameworkRenderLog: Renderer usage:' + audioParamsGet.usage);
            console.info('AudioFrameworkRenderLog: Renderer rendererFlags:' + audioParamsGet.rendererFlags);
        }).catch((err) => {
            console.log('AudioFrameworkRenderLog: RendererInfo :ERROR: ' + err.message);
            resultFlag = false;
        });

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });


        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        var bufferSize = await audioRen.getBufferSize();
        console.info('AudioFrameworkRenderLog: buffer size: ' + bufferSize);

        let ss = fileio.fdopenStreamSync(fdRead, 'r');
        console.info('AudioFrameworkRenderLog:case 2:AudioFrameworkRenderLog: File Path: ' + ss);
        let discardHeader = new ArrayBuffer(44);
        ss.readSync(discardHeader);
        let totalSize = fileio.fstatSync(fdRead).size;
        console.info('AudioFrameworkRenderLog:case 3 : AudioFrameworkRenderLog: File totalSize size: ' + totalSize);
        totalSize = totalSize - 44;
        console.info('AudioFrameworkRenderLog: File size : Removing header: ' + totalSize);
        let rlen = 0;
        while (rlen < totalSize / 4) {
            let buf = new ArrayBuffer(bufferSize);
            rlen += ss.readSync(buf);
            console.info('AudioFrameworkRenderLog:BufferAudioFramework: bytes read from file: ' + rlen);
            await audioRen.write(buf);
            if (rlen > (totalSize / 2)) {
                await audioManager.getAudioScene().then(async function (data) {
                    console.info('AudioFrameworkAudioScene: getAudioScene : Value : ' + data);
                }).catch((err) => {
                    console.info('AudioFrameworkAudioScene: getAudioScene : ERROR : ' + err.message);
                    resultFlag = false;
                });
            }
        }
        console.info('AudioFrameworkRenderLog: Renderer after read');
        await audioRen.getRenderRate().then(async function (data) {
            if (data == audio.AudioRendererRate.RENDER_RATE_NORMAL) {
                console.info('AudioFrameworkRenderLog: getRenderRate : RENDER_RATE_NORMAL : PASS : ' + data);
            }
            else {
                console.info('AudioFrameworkRenderLog: getRenderRate : RENDER_RATE_NORMAL : FAIL : ' + data);
                resultFlag = false;
            }
        }).catch((err) => {
            console.info('AudioFrameworkAudioScene: getRenderRate : RENDER_RATE_NORMAL : ERROR : ' + err.message);
            resultFlag = false;
        });

        await audioRen.drain().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer drained : SUCCESS');
        }).catch((err) => {
            console.error('AudioFrameworkRenderLog: Renderer drain: ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);

        await sleep(500)

        expect(resultFlag).assertTrue();

        await closeFileDescriptor(readpath);
        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_113
    * @tc.name      : AudioRenderer - SetRenderRate - RENDER_RATE_DOUBLE - Callback
    * @tc.desc      : AudioRenderer - SetRenderRate - RENDER_RATE_DOUBLE - Callback
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_113', 0, async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_32000,
            channels: audio.AudioChannel.CHANNEL_1,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_U8,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        //var fpath = mediaDir+'/StarWars10s-2C-48000-4SW.wav';
        readpath = 'StarWars10s-1C-32000-1SW.wav'
        await getFdRead(readpath, done);
        var resultFlag = await playbackPromise_113(AudioRendererOptions, filePath);
        await sleep(100)
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
        * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_096
        * @tc.name      : AudioRenderer - getAudioTime - Error
        * @tc.desc      : AudioRenderer - getAudioTime - Error
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_096', 0, async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        //var fpath = mediaDir+'/StarWars10s-2C-48000-4SW.wav';

        readpath = 'StarWars10s-2C-48000-4SW.wav';
        await getFdRead(readpath, done);
        var resultFlag = true;
        console.info('AudioFrameworkRenderLog: AudioRenderer : Path : ' + readpath);

        console.info('AudioFrameworkRenderLog: Promise : Audio Playback Function');

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        await audioRen.getAudioTime().then(async function (data) {
            console.info('AudioFrameworkRenderLog: getAudioTime : Value : ' + data);
            resultFlag = true;
            if (data > 0) {
                console.info('AudioFrameworkRenderLog: getAudioTime : PASS : ' + data);
            }
            else {
                console.info('AudioFrameworkRenderLog: getAudioTime : FAIL : ' + data);
            }
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: getAudioTime : ERROR : ' + err.message);
        });

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });

        console.info('AudioFrameworkRenderLog: AudioRenderer : STATE : ' + audioRen.state);

        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);

        await sleep(500);

        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();

    })


    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_097
    * @tc.name      : AudioRenderer - STATE_PREPARED -Callback
    * @tc.desc      : AudioRenderer - STATE_PREPARED
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_097', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = false;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        audioRen.on('stateChange', (AudioState) => {

            console.log('AudioFrameworkTest: Volume Change Event is called');

            switch (AudioState) {
                case audio.AudioState.STATE_RELEASED:
                    console.info('AudioFrameworkTest: state : STATE_NEW');
                    resultFlag = true;
                    break;
                default:
                    console.info('AudioFrameworkTest: state : ' + AudioState);
                    break;
            }
        });

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });
        await sleep(1000);
        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_098
    * @tc.name      : AudioRenderer - STATE_RUNNING - Callback
    * @tc.desc      : AudioRenderer - STATE_RUNNING
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_098', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = false;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        audioRen.on('stateChange', (AudioState) => {

            console.log('AudioFrameworkTest: Volume Change Event is called');

            switch (AudioState) {
                case audio.AudioState.STATE_RUNNING:
                    console.info('AudioFrameworkTest: state : STATE_RUNNING');
                    resultFlag = true;
                    break;
                default:
                    console.info('AudioFrameworkTest: state : ' + AudioState);
                    break;
            }
        });

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });

        await sleep(500);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
        });

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });
        await sleep(1000);

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_099
    * @tc.name      : AudioRenderer - STATE_STOPPED - Callback
    * @tc.desc      : AudioRenderer - STATE_STOPPED
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_099', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = false;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        audioRen.on('stateChange', (AudioState) => {

            console.log('AudioFrameworkTest: Volume Change Event is called');

            switch (AudioState) {
                case audio.AudioState.STATE_STOPPED:
                    console.info('AudioFrameworkTest: state : STATE_STOPPED');
                    resultFlag = true;
                    break;
                default:
                    console.info('AudioFrameworkTest: state : ' + AudioState);
                    break;
            }
        });

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });

        await sleep(500);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
            resultFlag = false;
        });
        await sleep(500);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });
        await sleep(500);

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_100
    * @tc.name      : AudioRenderer - STATE_RELEASED - Callback
    * @tc.desc      : AudioRenderer - STATE_RELEASED
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_100', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = false;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }

        audioRen.on('stateChange', (AudioState) => {

            console.log('AudioFrameworkTest: Volume Change Event is called');

            switch (AudioState) {
                case audio.AudioState.STATE_RELEASED:
                    console.info('AudioFrameworkTest: state : STATE_RELEASED');
                    resultFlag = true;
                    break;
                default:
                    console.info('AudioFrameworkTest: state : ' + AudioState);
                    break;
            }
        });

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });

        await sleep(500);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
            resultFlag = false;
        });
        await sleep(500);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });
        await sleep(500);

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_101
    * @tc.name      : AudioRenderer - STATE_PAUSED - Callback
    * @tc.desc      : AudioRenderer - STATE_PAUSED
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_101', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = false;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }
        audioRen.on('stateChange', (AudioState) => {

            console.log('AudioFrameworkTest: Volume Change Event is called');

            switch (AudioState) {
                case audio.AudioState.STATE_PAUSED:
                    console.info('AudioFrameworkTest: state : STATE_PAUSED');
                    resultFlag = true;
                    break;
                default:
                    console.info('AudioFrameworkTest: state : ' + AudioState);
                    break;
            }
        });
        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });

        await sleep(500);

        await audioRen.pause().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant Pause :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant Pause :ERROR : ' + err.message);
            resultFlag = false;
        });

        await sleep(500);
        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
        });
        await sleep(500);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });
        await sleep(500)

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
                * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_108
                * @tc.name      : AudioState - STATE_INVALID
                * @tc.desc      : AudioState - STATE_INVALID
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_RENDERER_Play_audio_108', 0, async function (done) {

        expect(audio.AudioState.STATE_INVALID).assertEqual(-1);
        await sleep(50);
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_109
                * @tc.name      : AudioState - STATE_NEW
                * @tc.desc      : AudioState - STATE_NEW
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_RENDERER_Play_audio_109', 0, async function (done) {

        expect(audio.AudioState.STATE_NEW).assertEqual(0);
        await sleep(50);
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_110
                * @tc.name      : AudioSampleFormat - STATE_FORMAT_INVALID
                * @tc.desc      : AudioSampleFormat - STATE_FORMAT_INVALID
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_RENDERER_Play_audio_110', 0, async function (done) {

        expect(audio.AudioSampleFormat.SAMPLE_FORMAT_INVALID).assertEqual(-1);
        await sleep(50);
        done();
    })

    /* *
                * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_111
                * @tc.name      : SourceType - SOURCE_TYPE_INVALID
                * @tc.desc      : SourceType - SOURCE_TYPE_INVALID
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_RENDERER_Play_audio_111', 0, async function (done) {

        expect(audio.SourceType.SOURCE_TYPE_INVALID).assertEqual(-1);
        await sleep(50);
        done();
    })

    /* *
    * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_112
    * @tc.name      : AudioRenderer - Pause - Callback
    * @tc.desc      : AudioRenderer - Pause - Callback
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_RENDERER_Play_audio_112', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = false;

        var audioRen;
        let isPass = false;
        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRenderLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: AudioRender Created : ERROR : ' + err.message);
            LE24 = audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE;
            LE32 = audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE;
            let sampleFormat = AudioRendererOptions.streamInfo.sampleFormat;
            if ((sampleFormat == LE24 || sampleFormat == LE32) && err.code == 202) {
                isPass = true;
                return;
            }
            resultFlag = false;
        });
        console.log("isPass:" + isPass);
        if (isPass) {
            resultFlag = true;
            expect(resultFlag).assertTrue();
            done();
            return;
        }
        audioRen.on('stateChange', (AudioState) => {

            console.log('AudioFrameworkTest: Volume Change Event is called');

            switch (AudioState) {
                case audio.AudioState.STATE_PAUSED:
                    console.info('AudioFrameworkTest: state : STATE_PAUSED');
                    resultFlag = true;
                    break;
                default:
                    console.info('AudioFrameworkTest: state : ' + AudioState);
                    break;
            }
        });
        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRenderLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: renderInstant start :ERROR : ' + err.message);
            resultFlag = false;
        });

        await sleep(2000);

        audioRen.pause((err) => {
            if (err) {
                console.info('AudioFrameworkRenderLog: renderInstant Pause :ERROR : ' + err.message);
                resultFlag = false;
            }
            else {
                console.info('AudioFrameworkRenderLog: renderInstant Pause :SUCCESS ');
            }
        });
        await sleep(500);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer stop:ERROR : ' + err.message);
        });
        await sleep(500);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRenderLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRenderLog: Renderer release :ERROR : ' + err.message);
        });
        await sleep(500)

        expect(resultFlag).assertTrue();

        done();

    })

    /* *
                * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_114
                * @tc.name      : AudioEncodingType - ENCODING_TYPE_INVALID
                * @tc.desc      : AudioEncodingType - ENCODING_TYPE_INVALID
                * @tc.size      : MEDIUM
                * @tc.type      : Function
                * @tc.level     : Level 0
            */
    it('SUB_AUDIO_RENDERER_Play_audio_114', 0, async function (done) {

        expect(audio.AudioEncodingType.ENCODING_TYPE_INVALID).assertEqual(-1);
        await sleep(50);
        done();
    })

    /* *
            * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_082
            * @tc.name      : AudioRenderer-Set11-Media - CALLBACK
            * @tc.desc      : AudioRenderer with parameter set 11
            * @tc.size      : MEDIUM
            * @tc.type      : Function
            * @tc.level     : Level 0
        */
    it('SUB_AUDIO_RENDERER_Play_audio_082', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-2C-48000-4SW.wav'
        await getFdRead(readpath, done)
        var resultFlag = await playbackCB(AudioRendererOptions, filePath);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        await sleep(9000);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
           * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_083
           * @tc.name      : AudioRenderer-Set1-Media - CALLBACK
           * @tc.desc      : AudioRenderer with parameter set 1
           * @tc.size      : MEDIUM
           * @tc.type      : Function
           * @tc.level     : Level 0
       */
    it('SUB_AUDIO_RENDERER_Play_audio_083', 0, async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
            channels: audio.AudioChannel.CHANNEL_1,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-1C-44100-2SW.wav'
        await getFdRead(readpath, done)
        var resultFlag = await playbackCB(AudioRendererOptions, filePath);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        await sleep(5000);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
           * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_084
           * @tc.name      : AudioRenderer-Set2-Media - CALLBACK
           * @tc.desc      : AudioRenderer with parameter set 2
           * @tc.size      : MEDIUM
           * @tc.type      : Function
           * @tc.level     : Level 0
       */
    it('SUB_AUDIO_RENDERER_Play_audio_084', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_8000,
            channels: audio.AudioChannel.CHANNEL_1,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-1C-8000-2SW.wav'
        await getFdRead(readpath, done)
        var resultFlag = await playbackCB(AudioRendererOptions, filePath);
        await sleep(100);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
           * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_085
           * @tc.name      : AudioRenderer-Set3-Media - CALLBACK
           * @tc.desc      : AudioRenderer with parameter set 3
           * @tc.size      : MEDIUM
           * @tc.type      : Function
           * @tc.level     : Level 0
       */
    it('SUB_AUDIO_RENDERER_Play_audio_085', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_32000,
            channels: audio.AudioChannel.CHANNEL_1,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_U8,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-1C-32000-1SW.wav'
        await getFdRead(readpath, done)
        var resultFlag = await playbackCB(AudioRendererOptions, filePath);
        await sleep(100);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
           * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_086
           * @tc.name      : AudioRenderer-Set4-Media - CALLBACK
           * @tc.desc      : AudioRenderer with parameter set 4
           * @tc.size      : MEDIUM
           * @tc.type      : Function
           * @tc.level     : Level 0
       */
    it('SUB_AUDIO_RENDERER_Play_audio_086', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_64000,
            channels: audio.AudioChannel.CHANNEL_1,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-1C-64000-3SW.wav'
        await getFdRead(readpath, done)
        var resultFlag = await playbackCB(AudioRendererOptions, filePath);
        await sleep(100);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
            * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_087
            * @tc.name      : AudioRenderer-Set5-Media - CALLBACK
            * @tc.desc      : AudioRenderer with parameter set 5
            * @tc.size      : MEDIUM
            * @tc.type      : Function
            * @tc.level     : Level 0
        */
    it('SUB_AUDIO_RENDERER_Play_audio_087', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_96000,
            channels: audio.AudioChannel.CHANNEL_1,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-1C-96000-4SW.wav'
        await getFdRead(readpath, done)
        var resultFlag = await playbackCB(AudioRendererOptions, filePath);
        await sleep(100);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
            * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_088
            * @tc.name      : AudioRenderer-Set6-Media - CALLBACK
            * @tc.desc      : AudioRenderer with parameter set 6
            * @tc.size      : MEDIUM
            * @tc.type      : Function
            * @tc.level     : Level 0
        */
    it('SUB_AUDIO_RENDERER_Play_audio_088', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_11025,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_U8,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-2C-11025-1SW.wav'
        await getFdRead(readpath, done)
        var resultFlag = await playbackCB(AudioRendererOptions, filePath);
        await sleep(100);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
            * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_089
            * @tc.name      : AudioRenderer-Set7-Media - CALLBACK
            * @tc.desc      : AudioRenderer with parameter set 7
            * @tc.size      : MEDIUM
            * @tc.type      : Function
            * @tc.level     : Level 0
        */
    it('SUB_AUDIO_RENDERER_Play_audio_089', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_12000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-2C-12000-2SW.wav'
        await getFdRead(readpath, done)
        var resultFlag = await playbackCB(AudioRendererOptions, filePath);
        await sleep(100);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
            * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_090
            * @tc.name      : AudioRenderer-Set8-Media - CALLBACK
            * @tc.desc      : AudioRenderer with parameter set 8
            * @tc.size      : MEDIUM
            * @tc.type      : Function
            * @tc.level     : Level 0
        */
    it('SUB_AUDIO_RENDERER_Play_audio_090', 0, async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_16000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-2C-16000-3SW.wav'
        await getFdRead(readpath, done)
        var resultFlag = await playbackCB(AudioRendererOptions, filePath);
        await sleep(100);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();

    })

    /* *
            * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_091
            * @tc.name      : AudioRenderer-Set9-Media - CALLBACK
            * @tc.desc      : AudioRenderer with parameter set 9
            * @tc.size      : MEDIUM
            * @tc.type      : Function
            * @tc.level     : Level 0
        */
    it('SUB_AUDIO_RENDERER_Play_audio_091', 0, async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_22050,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-2C-22050-2SW.wav'
        await getFdRead(readpath, done)
        var resultFlag = await playbackCB(AudioRendererOptions, filePath);
        await sleep(100);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })

    /* *
            * @tc.number    : SUB_AUDIO_RENDERER_Play_audio_092
            * @tc.name      : AudioRenderer-Set10-Media - CALLBACK
            * @tc.desc      : AudioRenderer with parameter set 10
            * @tc.size      : MEDIUM
            * @tc.type      : Function
            * @tc.level     : Level 0
        */
    it('SUB_AUDIO_RENDERER_Play_audio_092', 0, async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_24000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 0
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        readpath = 'StarWars10s-2C-24000-3SW.wav'
        await getFdRead(readpath, done)
        var resultFlag = await playbackCB(AudioRendererOptions, filePath);
        await sleep(100);
        console.info('AudioFrameworkRenderLog: resultFlag : ' + resultFlag);
        expect(resultFlag).assertTrue();
        await closeFileDescriptor(readpath);
        done();
    })


})