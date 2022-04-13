/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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
import Fileio from '@ohos.fileio'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('AudioEncoderFormatCompatibilityPromise', function () {
    const RESOURCEPATH = '/data/accounts/account_0/appdata/ohos.acts.multimedia.audio.audioencoder/'
    const AUDIOPATH =  RESOURCEPATH + 'S32LE.pcm';
    const BASIC_PATH = RESOURCEPATH + 'results/encode_func_promise_';
    let audioEncodeProcessor;
    let readStreamSync;
    let eosframenum = 0;
    let stopAtEOS = false;
    let resetAtEOS = false;
    let flushAtEOS = false;
    let workdoneAtEOS = false;
    let needgetMediaDes = false;
    let needrelease = false;
    let frameCnt = 1;
    let timestamp = 0;
    let sawInputEOS = false;
    let sawOutputEOS = false;
    let inputQueue = [];
    let outputQueue = [];
    const ES = [0, 4096];
    let ES_LENGTH = 2000;

    beforeAll(function() {
        console.info('beforeAll case');
    })

    beforeEach(function() {
        console.info('beforeEach case');
        audioEncodeProcessor = null;
        readStreamSync = undefined;
        eosframenum = 0;
        stopAtEOS = false;
        resetAtEOS = false;
        flushAtEOS = false;
        workdoneAtEOS = false;
        needgetMediaDes = false;
        needrelease = false
        frameCnt = 1;
        timestamp = 0;
        sawInputEOS = false;
        sawOutputEOS = false;
        inputQueue = [];
        outputQueue = [];
        ES_LENGTH = 2000;
    })

    afterEach(async function() {
        console.info('afterEach case');
        if (audioEncodeProcessor != null) {
            await audioEncodeProcessor.release().then(() => {
                console.info('audioEncodeProcessor release success');
                audioEncodeProcessor = null;
            }, failCallback).catch(failCatch);
        }
    })

    afterAll(function() {
        console.info('afterAll case');
    })

    let failCallback = function(err) {
        console.info('case callback err : ' + err);
        expect(err).assertUndefined();
    }

    let failCatch = function(err) {
        console.info('case catch err : ' + err);
        expect(err).assertUndefined();
    }

    function resetParam() {
        readStreamSync = undefined;
        eosframenum = 0;
        stopAtEOS = false;
        resetAtEOS = false;
        flushAtEOS = false;
        workdoneAtEOS = false;
        needgetMediaDes = false;
        needrelease = false
        frameCnt = 1;
        timestamp = 0;
        sawInputEOS = false;
        sawOutputEOS = false;
        inputQueue = [];
        outputQueue = [];
    }

    function writeHead(path, len) {
        try{
            let writestream = Fileio.createStreamSync(path, "ab+");
            let head = new ArrayBuffer(7);
            addADTStoPacket(head, len);
            let num = writestream.writeSync(head, {length:7});
            writestream.flushSync();
            writestream.closeSync();
        } catch(e) {
            console.info(e)
        }
    }

    function writeFile(path, buf, len) {
        try{
            let writestream = Fileio.createStreamSync(path, "ab+");
            let num = writestream.writeSync(buf, {length:len});
            writestream.flushSync();
            writestream.closeSync();
        } catch(e) {
            console.info(e);
        }
    }

    function readFile(path) {
        try{
            console.info('filepath: ' + path);
            readStreamSync = Fileio.createStreamSync(path, 'rb');
        } catch(e) {
            console.info(e);
        }
    }

    function getContent(buf, len) {
        console.info("case start get content");
        let lengthreal = -1;
        lengthreal = readStreamSync.readSync(buf,{length:len});
        console.info('lengthreal: ' + lengthreal);
    }

    function addADTStoPacket(head, len) {
        let view = new Uint8Array(head);
        console.info("start add ADTS to Packet");
        let packetLen = len + 7; // 7: head length
        let profile = 2; // 2: AAC LC  
        let freqIdx = 3; // 3: 48000HZ 
        let chanCfg = 1; // 1: 1 channel
        view[0] = 0xFF;
        view[1] = 0xF9;
        view[2] = ((profile - 1) << 6) + (freqIdx << 2) + (chanCfg >> 2);
        view[3] = ((chanCfg & 3) << 6) + (packetLen >> 11);
        view[4] = (packetLen & 0x7FF) >> 3;
        view[5] = ((packetLen & 7) << 5) + 0x1F;
        view[6] = 0xFC;
    }

    async function stopWork() {
        await audioEncodeProcessor.stop().then(() => {
            console.info("case stop success")
        }, failCallback).catch(failCatch);
    }

    async function resetWork() {
        resetParam();
        await audioEncodeProcessor.reset().then(() => {
            console.info("case reset success");
            if (needrelease) {
                audioEncodeProcessor = null;
            }
        }, failCallback).catch(failCatch);
    }

    async function flushWork() {
        inputQueue = [];
        outputQueue = [];
        await audioEncodeProcessor.flush().then(() => {
            console.info("case flush at inputeos success");
            resetParam();
            readFile(AUDIOPATH);
            workdoneAtEOS =true;
        }, failCallback).catch(failCatch);
    }

    async function doneWork() {
        await audioEncodeProcessor.stop().then(() => {
            console.info("case stop success");
        }, failCallback).catch(failCatch);
        resetParam();
        await audioEncodeProcessor.reset().then(() => {
            console.info("case reset success");
        }, failCallback).catch(failCatch);
        await audioEncodeProcessor.release().then(() => {
            console.info("case release success");
        }, failCallback).catch(failCatch);
        audioEncodeProcessor = null;
    }


    function sleep(time) {
        return new Promise((resolve) => setTimeout(resolve, time));
    }

    function wait(time) {
        for(let t = Date.now();Date.now() - t <= time;);
    }

    async function enqueueInputs(queue) {
        while (queue.length > 0 && !sawInputEOS) {
            let inputobject = queue.shift();
            console.info("case frameCnt:" + frameCnt);
            if (frameCnt == eosframenum || frameCnt == ES_LENGTH + 1) {
                console.info("case EOS frame seperately")
                inputobject.flags = 1;
                inputobject.timeMs = 0;
                inputobject.length = 0;
                sawInputEOS = true;
            } else {
                console.info("case read frame from file");
                inputobject.timeMs = timestamp;
                inputobject.offset = 0;
                inputobject.length = ES[1];
                getContent(inputobject.data, ES[1]);
                inputobject.flags = 0;
            }
            timestamp += 23;
            frameCnt += 1;
            audioEncodeProcessor.queueInput(inputobject).then(() => {
                console.info('case queueInput success');
            });
        }
    }

    async function dequeueOutputs(queue, savepath, done) {
        while (queue.length > 0 && !sawOutputEOS) {
            let outputobject = queue.shift();
            if (outputobject.flags == 1) {
                sawOutputEOS = true;
                if (stopAtEOS) {
                    await stopWork();
                } else if (resetAtEOS) {
                    await resetWork();
                } else if (flushAtEOS) {
                    await flushWork();
                } else if (workdoneAtEOS) {
                    await doneWork();
                    done();
                } else {
                    console.info('sawOutputEOS = true');
                }
            }
            else{
                writeHead(savepath, outputobject.length);
                writeFile(savepath, outputobject.data, outputobject.length);
                console.info("write to file success");
            }
            audioEncodeProcessor.releaseOutput(outputobject).then(() => {
                console.info('release output success');
            });
        }
    }

    function printfDescription(obj) {
        for (let item in obj) {
            let property = obj[item];
            console.info("AudioEncoder config is" + item + ":" + property);
        }
    }

    function setCallback(savepath, done) {
        console.info('case callback');
        audioEncodeProcessor.on('inputBufferAvailable', async(inBuffer) => {
            console.info('inputBufferAvailable');
            inputQueue.push(inBuffer);
            await enqueueInputs(inputQueue);
        });
        audioEncodeProcessor.on('outputBufferAvailable', async(outBuffer) => {
            console.info('outputBufferAvailable');
            if (needgetMediaDes) {
                audioEncodeProcessor.getOutputMediaDescription().then((MediaDescription) => {
                    console.info("get OutputMediaDescription success");
                    console.info('get outputMediaDescription : ' + MediaDescription);
                    needgetMediaDes=false;
                }, failCallback).catch(failCatch);
            }
            outputQueue.push(outBuffer);
            await dequeueOutputs(outputQueue, savepath, done);
        });
        audioEncodeProcessor.on('error',(err) => {
            console.info('case error called,errName is' + err);
            expect().assertFail();
        });
        audioEncodeProcessor.on('outputFormatChanged',(format) => {
            console.info('Output format changed: ' + format);
        });
    }

    async function encodeSource(config, config2, path, done){
        console.info('start test case');
        let mediaDescription = config;
        let mediaDescription2 = config2;
        let savepath = path;
        needgetMediaDes = true;
        workdoneAtEOS = true;
        await media.getMediaCapability().then((mediaCaps)  => {
            console.info('getMediaCapability success');
            if (typeof (mediaCaps) != 'undefined') {
                mediaCaps.getAudioEncoderCaps().then((audioCaps)  => {
                    console.info('getAudioEncoderCaps success');
                    if (typeof (audioCaps) != 'undefined') {
                        console.info("case audioCaps " + audioCaps);
                    } else {
                        console.info("case audioCaps is not defined");
                    }
                }, failCallback).catch(failCatch);
                mediaCaps.findAudioEncoder(mediaDescription2).then((codecname)  => {
                    console.info('getAudioEncoderCaps success');
                    if (typeof (codecname) != 'undefined') {
                        console.info("case codecname " + codecname);
                    } else {
                        console.info("case codecname is not defined");
                    }
                }, failCallback).catch(failCatch);
            } else {
                console.info('mediaCaps is not defined');
            }
        }, failCallback).catch(failCatch);
        await media.createAudioEncoderByMime('audio/mp4a-latm').then((processor) => {
            console.info("case create createAudioEncoder success");
            audioEncodeProcessor = processor;
        }, failCallback).catch(failCatch);
        await audioEncodeProcessor.getAudioEncoderCaps().then((AudioCaps) => {
            console.info("case get AudioEncoderCaps success");
            console.info("print AudioCaps: " + AudioCaps)
        }, failCallback).catch(failCatch);
        await audioEncodeProcessor.configure(mediaDescription).then(() => {
            console.info("case configure success");
            readFile(AUDIOPATH);
        }, failCallback).catch(failCatch);
        setCallback(savepath, done);
        await audioEncodeProcessor.prepare().then(() => {
            console.info("case prepare success");
        }, failCallback).catch(failCatch);
        await audioEncodeProcessor.start().then(() => {
            console.info("case start success")
        }, failCallback).catch(failCatch);
        await audioEncodeProcessor.getOutputMediaDescription().then((mediaDescription) => {
            console.info("getOutputMediaDescription success");
            printfDescription(mediaDescription);
        },failCallback).catch(failCatch);
        audioEncodeProcessor.on('error',(err) => {
            console.info(`case error called,errName is ${err.name}`);
            console.info(`case error called,errCode is ${err.code}`);
            console.info(`case error called,errMessage is ${err.message}`);
            expect().assertFail();
            done();
        });

    }

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_01_0100
        * @tc.name      : 01.test acc format-channel_count 2-sample_rate 96KHz-bitrate 112Kbps
        * @tc.desc      : audio encoder format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_01_0100', 0, async function (done) {
        console.info("case test acc format-channel_count 2-sample_rate 96KHz-bitrate 112Kbps");
        let savepath = BASIC_PATH + '0000.txt';
        let mediaDescription = {
            "channel_count": 2,
            "sample_rate": 96000,
            "audio_raw_format": 16,
            "bitrate": 112000,
        }
        let mediaDescription2 = {
            "codec_mime": 'audio/mp4a-latm',
        }
        encodeSource(mediaDescription, mediaDescription2, savepath, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_01_0200
        * @tc.name      : 01.test acc format-channel_count 1-sample_rate 96KHz-bitrate 112Kbps
        * @tc.desc      : audio encoder format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_01_0200', 0, async function (done) {
        console.info("case test acc format-channel_count 1-sample_rate 96KHz-bitrate 112Kbps");
        let savepath = BASIC_PATH + '0100.txt';
        let mediaDescription = {
            "channel_count": 1,
            "sample_rate": 96000,
            "audio_raw_format": 16,
            "bitrate": 112000,
        }
        let mediaDescription2 = {
            "codec_mime": 'audio/mp4a-latm',
        }
        encodeSource(mediaDescription, mediaDescription2, savepath, done);
    })

    /* *
    * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_02_0100
    * @tc.name      : 01.test acc format-channel_count 2-sample_rate 8KHz-bitrate 112Kbps
    * @tc.desc      : audio encoder format compatibility test
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_02_0100', 0, async function (done) {
        console.info("case test acc format-channel_count 2-sample_rate 8KHz-bitrate 112Kbps");
        let savepath = BASIC_PATH + '0200.txt';
        let mediaDescription = {
            "channel_count": 2,
            "sample_rate": 8000,
            "audio_raw_format": 16,
            "bitrate": 112000,
        }
        let mediaDescription2 = {
            "codec_mime": 'audio/mp4a-latm',
        }
        encodeSource(mediaDescription, mediaDescription2, savepath, done);
    })

    /* *
    * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_02_0200
    * @tc.name      : 01.test acc format-channel_count 2-sample_rate 32KHz-bitrate 112Kbps
    * @tc.desc      : audio encoder format compatibility test
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_02_0200', 0, async function (done) {
        console.info("case test acc format-channel_count 2-sample_rate 32KHz-bitrate 112Kbps");
        let savepath = BASIC_PATH + '0300.txt';
        let mediaDescription = {
            "channel_count": 2,
            "sample_rate": 32000,
            "audio_raw_format": 16,
            "bitrate": 112000,
        }
        let mediaDescription2 = {
            "codec_mime": 'audio/mp4a-latm',
        }
        encodeSource(mediaDescription, mediaDescription2, savepath, done);
    })

    /* *
    * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_02_0300
    * @tc.name      : 01.test acc format-channel_count 2-sample_rate 44.1KHz-bitrate 112Kbps
    * @tc.desc      : audio encoder format compatibility test
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_02_0300', 0, async function (done) {
        console.info("case test acc format-channel_count 2-sample_rate 44.1KHz-bitrate 112Kbps");
        let savepath = BASIC_PATH + '0400.txt';
        let mediaDescription = {
            "channel_count": 2,
            "sample_rate": 44100,
            "audio_raw_format": 16,
            "bitrate": 112000,
        }
        let mediaDescription2 = {
            "codec_mime": 'audio/mp4a-latm',
        }
        encodeSource(mediaDescription, mediaDescription2, savepath, done);
    })

    /* *
    * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_02_0400
    * @tc.name      : 01.test acc format-channel_count 2-sample_rate 48KHz-bitrate 112Kbps
    * @tc.desc      : audio encoder format compatibility test
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_02_0400', 0, async function (done) {
        console.info("case test acc format-channel_count 2-sample_rate 48KHz-bitrate 112Kbps");
        let savepath = BASIC_PATH + '0500.txt';
        let mediaDescription = {
            "channel_count": 2,
            "sample_rate": 48000,
            "audio_raw_format": 16,
            "bitrate": 112000,
        }
        let mediaDescription2 = {
            "codec_mime": 'audio/mp4a-latm',
        }
        encodeSource(mediaDescription, mediaDescription2, savepath, done);
    })

    /* *
    * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_02_0500
    * @tc.name      : 01.test acc format-channel_count 2-sample_rate 64KHz-bitrate 112Kbps
    * @tc.desc      : audio encoder format compatibility test
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_02_0500', 0, async function (done) {
        console.info("case test acc format-channel_count 2-sample_rate 64KHz-bitrate 112Kbps");
        let savepath = BASIC_PATH + '0600.txt';
        let mediaDescription = {
            "channel_count": 2,
            "sample_rate": 64000,
            "audio_raw_format": 16,
            "bitrate": 112000,
        }
        let mediaDescription2 = {
            "codec_mime": 'audio/mp4a-latm',
        }
        encodeSource(mediaDescription, mediaDescription2, savepath, done);
    })

    /* *
    * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_03_0100
    * @tc.name      : 01.test acc format-channel_count 2-sample_rate 96KHz-bitrate 8Kbps
    * @tc.desc      : audio encoder format compatibility test
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_03_0100', 0, async function (done) {
        console.info("case test acc format-channel_count 2-sample_rate 96KHz-bitrate 8Kbps");
        let savepath = BASIC_PATH + '0700.txt';
        let mediaDescription = {
            "channel_count": 2,
            "sample_rate": 96000,
            "audio_raw_format": 16,
            "bitrate": 8000,
        }
        let mediaDescription2 = {
            "codec_mime": 'audio/mp4a-latm',
        }
        encodeSource(mediaDescription, mediaDescription2, savepath, done);
    })

    /* *
    * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_03_0200
    * @tc.name      : 01.test acc format-channel_count 2-sample_rate 96KHz-bitrate 16Kbps
    * @tc.desc      : audio encoder format compatibility test
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_03_0200', 0, async function (done) {
        console.info("case test acc format-channel_count 2-sample_rate 96KHz-bitrate 16Kbps");
        let savepath = BASIC_PATH + '0800.txt';
        let mediaDescription = {
            "channel_count": 2,
            "sample_rate": 96000,
            "audio_raw_format": 16,
            "bitrate": 16000,
        }
        let mediaDescription2 = {
            "codec_mime": 'audio/mp4a-latm',
        }
        encodeSource(mediaDescription, mediaDescription2, savepath, done);
    })

    /* *
    * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_03_0300
    * @tc.name      : 01.test acc format-channel_count 2-sample_rate 96KHz-bitrate 32Kbps
    * @tc.desc      : audio encoder format compatibility test
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_03_0300', 0, async function (done) {
        console.info("case test acc format-channel_count 2-sample_rate 96KHz-bitrate 32Kbps");
        let savepath = BASIC_PATH + '0900.txt';
        let mediaDescription = {
            "channel_count": 2,
            "sample_rate": 96000,
            "audio_raw_format": 16,
            "bitrate": 32000,
        }
        let mediaDescription2 = {
            "codec_mime": 'audio/mp4a-latm',
        }
        encodeSource(mediaDescription, mediaDescription2, savepath, done);
    })

    /* *
    * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_03_0400
    * @tc.name      : 01.test acc format-channel_count 2-sample_rate 96KHz-bitrate 64Kbps
    * @tc.desc      : audio encoder format compatibility test
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_ENCODER_FORMAT_COMPATIBILITY_AAC_PROMISE_03_0400', 0, async function (done) {
        console.info("case test acc format-channel_count 2-sample_rate 96KHz-bitrate 64Kbps");
        let savepath = BASIC_PATH + '1000.txt';
        let mediaDescription = {
            "channel_count": 2,
            "sample_rate": 96000,
            "audio_raw_format": 16,
            "bitrate": 64000,
        }
        let mediaDescription2 = {
            "codec_mime": 'audio/mp4a-latm',
        }
        encodeSource(mediaDescription, mediaDescription2, savepath, done);
    })
})