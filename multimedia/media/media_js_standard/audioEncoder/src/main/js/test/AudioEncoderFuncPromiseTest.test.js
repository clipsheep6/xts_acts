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

describe('AudioEncoderFunc', function () {
    const AUDIOPATH =  '/data/media/S32LE.pcm';
    const AUDIOPATH2 =  '/data/media/S32LE_2.pcm';
    let SAVEPATH = '/data/media/promise.txt';
    let audioEncodeProcessor = null;
    let readStreamSync = undefined;
    let eosframenum = 0;
    let workdoneAtEOS = false;
    let stopAtEOS = false;
    let resetAtEOS = false;
    let flushAtEOS = false;
    let needgetOutputMediaDescription = false;
    let needrelease = false;
    let i = 1;
    let timestamp = 0;
    const FREAM_HEAD_BYTE = 0;
    let dequeInputCnt = 0;
    let enqueInputCnt = 0;
    let dequeOutputCnt = 0;
    let releaseOutputCnt = 0;
    let pushInputCnt = 0;
    let pushOutputCnt = 0;
    let getcontentCNT = 1;
    let sawInputEOS = false;
    let sawOutputEOS = false;
    let inputQueue = [];
    let outputQueue = [];
    let ES = [0, 4096, 1024, 1024, 1024]
    let ES_LENGTH = 200;

    beforeAll(function() {
        console.info('beforeAll case');
    })

    beforeEach(function() {
        console.info('beforeEach case');
        SAVEPATH = '/data/media/';
        audioEncodeProcessor = null;
        readStreamSync = undefined;
        eosframenum = 0;
        workdoneAtEOS = false;
        stopAtEOS = false;
        resetAtEOS = false;
        flushAtEOS = false;
        needgetOutputMediaDescription = false;
        needrelease = false
        i = 1;
        timestamp = 0;
        dequeInputCnt = 0;
        enqueInputCnt = 0;
        dequeOutputCnt = 0;
        releaseOutputCnt = 0;
        pushInputCnt = 0;
        pushOutputCnt = 0;
        getcontentCNT = 1;
        sawInputEOS = false;
        sawOutputEOS = false;
        inputQueue = [];
        outputQueue = [];
        ES = [0, 4096, 1024, 1024, 1024]
        ES_LENGTH = 200;
    })

    afterEach(function() {
        console.info('afterEach case');
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

    function resetParam(){
        readStreamSync = undefined;
        eosframenum = 0;
        workdoneAtEOS = false;
        stopAtEOS = false;
        resetAtEOS = false;
        flushAtEOS = false;
        needgetOutputMediaDescription = false;
        needrelease = false
        i = 1;
        timestamp = 0;
        dequeInputCnt = 0;
        enqueInputCnt = 0;
        dequeOutputCnt = 0;
        releaseOutputCnt = 0;
        pushInputCnt = 0;
        pushOutputCnt = 0;
        getcontentCNT = 1;
        sawInputEOS = false;
        sawOutputEOS = false;
    }

    function writeHead(path, len){
        try{
            let writestream = Fileio.createStreamSync(path, "ab+");
            let head = new ArrayBuffer(7);
            addADTStoPacket(head, len);
            let num = writestream.writeSync(head, {length:7});
            console.log(' writeSync head num = ' + num);
            writestream.flushSync();
            writestream.closeSync();
        } catch(e){
            console.log(e)
        }
    }

    function writeFile(path, buf, len){
        try{
            let writestream = Fileio.createStreamSync(path, "ab+");
            let num = writestream.writeSync(buf, {length:len});
            writestream.flushSync();
            writestream.closeSync();
        }catch(e){
            console.log(e)
        }
    }

    function readFile(path){
        console.log('read file start execution');
        try{
            console.log('filepath: ' + path);
            readStreamSync = Fileio.createStreamSync(path, 'rb');
        }catch(e){
            console.log(e);
        }
    }

    function getContent(buf, len){
        console.log("start get content");
        console.log("getContent count: " + getcontentCNT);
        let lengthreal = -1;
        lengthreal = readStreamSync.readSync(buf,{length:len});
        console.log('lengthreal: ' + lengthreal);
        getcontentCNT += 1;
    }

    function addADTStoPacket(head, len) {
        let view = new Uint8Array(head)
        console.log("start add ADTS to Packet");
        let packetLen = len + 7;
        let profile = 2; 
        let freqIdx = 3; 
        let chanCfg = 1; 
        view[0] = 0xFF;
        view[1] = 0xF9;
        view[2] = ((profile - 1) << 6) + (freqIdx << 2) + (chanCfg >> 2);
        view[3] = ((chanCfg & 3) << 6) + (packetLen >> 11);
        view[4] = (packetLen & 0x7FF) >> 3;
        view[5] = ((packetLen & 7) << 5) + 0x1F;
        view[6] = 0xFC;

        if (view[0] == 0xFF && view[1] == 0xF9) {
            console.log("Add ADTS to Packet success");
            console.log("Add ADTS Head view[0] = " + view[0]);
            console.log("Add ADTS Head view[1]  = " + view[1]);
            console.log("Add ADTS Head view[2]  = " + view[2]);
            console.log("Add ADTS Head view[3]  = " + view[3]);
            console.log("Add ADTS Head view[4]  = " + view[4]);
            console.log("Add ADTS Head view[5]  = " + view[5]);
            console.log("Add ADTS Head view[6]  = " + view[6]);
        } else {
            console.log("add ADTS to Packet failed");
            console.log("view[0]  after = " + view[0]);
        }
    }

    function sleep(time) {
        return new Promise((resolve) => setTimeout(resolve, time));
    } 

    function wait(time) {
        for(let t = Date.now(); Date.now() - t <= time;);
    }

    async function enqueueAllInputs(audioEncodeProcessor, queue){
        console.log('inputQueue.length:' + queue.length);
        while (queue.length > 0 && !sawInputEOS){
            let inputobject = queue.shift(); 
            dequeInputCnt += 1;
            console.log('dequeInputCnt: ' + dequeInputCnt);   
            console.log('inputobject.index: ' + inputobject.index);
            console.log('sawInputEOS: ' + sawInputEOS);
            console.log("i:" + i);
            if (i == eosframenum || i == ES_LENGTH + 1){
                console.log("EOS frame seperately")
                inputobject.flags = 1;  
                inputobject.timeMs = 0;
                inputobject.length = 0; 
                sawInputEOS = true;
                console.log("EOS frame seperately, set sawInputEOS = true success")
            }
            else{
                console.log("read frame from file")                       
                inputobject.timeMs = timestamp;
                inputobject.offset = 0;
                inputobject.length = ES[1] - FREAM_HEAD_BYTE;  
                getContent(inputobject.data, ES[1]);
                console.log('read frame from file success');
                console.log("not EOS frame, set flag = 0");
                inputobject.flags = 0;
                console.log("not EOS frame, set flag = 0 success");    
                console.log("inputobject.flags: " + inputobject.flags);   
            }
            timestamp += 23;
            i += 1;
            audioEncodeProcessor.queueInput(inputobject).then(() => {
                enqueInputCnt += 1;
                console.log('enqueInputCnt:' + enqueInputCnt);
                console.info('queueInput success');
            }, failCallback).catch(failCatch);
        }
    }

    async function dequeueAllOutputs(audioEncodeProcessor, queue, done){
        console.log('outputQueue.length:' + queue.length);
        while (queue.length > 0 && !sawOutputEOS){
            let outputobject = queue.shift();   
            dequeOutputCnt += 1;
            console.log('dequeOutputCnt: ' + dequeOutputCnt); 
            if (outputobject.flags == 1){
                console.log('outputQueue.length(flag==1):' + queue.length);
                console.log("saw outputobject.flags == 1");
                sawOutputEOS = true;
                console.log("set sawOutputEOS = true success");
                if (stopAtEOS){
                    await audioEncodeProcessor.stop().then(() => {}, failCallback).catch(failCatch);}
                if (resetAtEOS){
                    await audioEncodeProcessor.reset().then(() => {
                        console.log("reset success");
                        if (needrelease) {audioEncodeProcessor = null}
                    }, failCallback).catch(failCatch);}
                if (workdoneAtEOS) {
                    await audioEncodeProcessor.stop().then(() => {}, failCallback).catch(failCatch);
                    await audioEncodeProcessor.reset().then(() => {}, failCallback).catch(failCatch);
                    audioEncodeProcessor = null;
                    wait(5000);
                    done();
                }
                if (flushAtEOS){
                    audioEncodeProcessor.flush().then(() => {
                        console.log("flush at inputeos success");
                        resetParam();
                        readFile(AUDIOPATH);
                        workdoneAtEOS =true;
                    }, failCallback).catch(failCatch);
                }     
            }
            else{
                writeHead(SAVEPATH, outputobject.length);
                writeFile(SAVEPATH, outputobject.data, outputobject.length);
                console.log("write to file success");
            }
            audioEncodeProcessor.releaseOutput(outputobject).then(() => {
                console.info('release output success');
                releaseOutputCnt += 1;
                console.log('release output count:' + releaseOutputCnt);
            }, failCallback).catch(failCatch);
        } 
    }

    function setCallback(audioEncodeProcessor, done){
        console.info('case callback');
        audioEncodeProcessor.on('inputBufferAvailable', async(inBuffer) => {
            console.info('inputBufferAvailable');
            console.info("inBuffer.index: "+ inBuffer.index);
            pushInputCnt += 1;
            console.log('pushInputCnt: ' + pushInputCnt);  
            inputQueue.push(inBuffer);
            await enqueueAllInputs(audioEncodeProcessor, inputQueue);
        });
        audioEncodeProcessor.on('outputBufferAvailable', async(outBuffer) => {
            console.info('outputBufferAvailable');
            console.info("outBuffer.index: "+ outBuffer.index);
            console.info("outBuffer.length: "+ outBuffer.length);
            console.info("outBuffer.flags: "+ outBuffer.flags);
            if (needgetOutputMediaDescription){
                audioEncodeProcessor.getOutputMediaDescription().then((MediaDescription) => {
                    console.log("get OutputMediaDescription success");
                    console.log('get outputMediaDescription : ' + MediaDescription);
                    needgetOutputMediaDescription=false;
                }, failCallback).catch(failCatch);
            }
            pushOutputCnt += 1;
            console.log('pushOutputCnt: ' + pushOutputCnt);  
            outputQueue.push(outBuffer);
            await dequeueAllOutputs(audioEncodeProcessor, outputQueue, done);
        });
        audioEncodeProcessor.on('error',(err) => {
            console.info('case error called,errName is' + err);
        });
        audioEncodeProcessor.on('outputFormatChanged',(format) => {
            console.info('Output format changed: ' + format);
        });
    }

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FUNCTION_PROMISE_00_0100
        * @tc.name      : 000.test set EOS after last frame and reset
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */ 
    it('SUB_MEDIA_AUDIO_ENCODER_FUNCTION_PROMISE_00_0100', 0, async function (done) {
        console.log("test set EOS after last frame and reset");
        let mediaDescription = {
            "channel_count": 1, 
            "sample_rate": 48000,
            "audio_raw_format":16,
        }
        workdoneAtEOS = true;
        needgetOutputMediaDescription = true;
        SAVEPATH = SAVEPATH + 'promise0000.txt';
        await media.createAudioEncoderByMime('audio/mp4a-latm').then((processor) => {
            console.log("create createAudioEncoder by name success"); 
            audioEncodeProcessor = processor;
        }, failCallback).catch(failCatch);  
        console.log("get AudioEncoderCaps:");
        await audioEncodeProcessor.getAudioEncoderCaps().then((AudioCaps) => {
            console.log("get AudioEncoderCaps success");
            console.log("print AudioCaps: " + AudioCaps);
        }, failCallback).catch(failCatch);
        console.log("start configure");
        await audioEncodeProcessor.configure(mediaDescription).then(() => {
            console.log("configure success"); 
            readFile(AUDIOPATH);
        }, failCallback).catch(failCatch);
        setCallback(audioEncodeProcessor, done);
        console.log("start prepare");
        await audioEncodeProcessor.prepare().then(() => {
            console.log("prepare success");
        }, failCallback).catch(failCatch);
        console.log("start encoding");
        await audioEncodeProcessor.start().then(() => {
            console.log("start success");
        }, failCallback).catch(failCatch);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FUNCTION_PROMISE_01_0100
        * @tc.name      : 001.test set EOS manually before last frame and reset
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */ 

    it('SUB_MEDIA_AUDIO_ENCODER_FUNCTION_PROMISE_01_0100', 0, async function (done) {
        console.log("case test set EOS manually before last frame and reset");
        let mediaDescription = {
            "channel_count": 1, 
            "sample_rate": 48000,
            "audio_raw_format":16,
        }
        eosframenum = 100;
        workdoneAtEOS = true;
        SAVEPATH = SAVEPATH + 'promise0100.txt';
        await media.createAudioEncoderByMime('audio/mp4a-latm').then((processor) => {
            console.log("create createAudioEncoder success"); 
            audioEncodeProcessor = processor;
        }, failCallback).catch(failCatch);  
        console.log("get AudioEncoderCaps:");
        await audioEncodeProcessor.getAudioEncoderCaps().then((AudioCaps) => {
            console.log("get AudioEncoderCaps success");
            console.log("print AudioCaps: " + AudioCaps);
        }, failCallback).catch(failCatch);
        console.log("start configure");
        await audioEncodeProcessor.configure(mediaDescription).then(() => {
            console.log("configure success"); 
            readFile(AUDIOPATH);
        }, failCallback).catch(failCatch);
        setCallback(audioEncodeProcessor, done);
        console.log("start prepare");
        await audioEncodeProcessor.prepare().then(() => {
            console.log("prepare success");
        }, failCallback).catch(failCatch);
        console.log("start encoding");
        await audioEncodeProcessor.start().then(() => {
            console.log("start success");
        }, failCallback).catch(failCatch);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FUNCTION_PROMISE_01_0200
        * @tc.name      : 002.test flush in running state
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */ 

    it('SUB_MEDIA_AUDIO_ENCODER_FUNCTION_PROMISE_01_0200', 0, async function (done) {
        console.log("case test flush in running state");
        let mediaDescription = {
            "channel_count": 1, 
            "sample_rate": 48000,
            "audio_raw_format":16,
        }
        ES_LENGTH = 2000;
        workdoneAtEOS = true;
        SAVEPATH = SAVEPATH + 'promise0200.txt';
        await media.createAudioEncoderByMime('audio/mp4a-latm').then((processor) => {
            console.log("create createAudioEncoder success"); 
            audioEncodeProcessor = processor;
        }, failCallback).catch(failCatch);  
        console.log("get AudioEncoderCaps:");
        await audioEncodeProcessor.getAudioEncoderCaps().then((AudioCaps) => {
            console.log("get AudioEncoderCaps success");
            console.log("print AudioCaps: " + AudioCaps);
        }, failCallback).catch(failCatch);
        console.log("start configure");
        await audioEncodeProcessor.configure(mediaDescription).then(() => {
            console.log("configure success"); 
            readFile(AUDIOPATH);
        }, failCallback).catch(failCatch);
        setCallback(audioEncodeProcessor, done);
        console.log("start prepare");
        await audioEncodeProcessor.prepare().then(() => {
            console.log("prepare success");
        }, failCallback).catch(failCatch);
        console.log("start encoding");
        await audioEncodeProcessor.start().then(() => {
            console.log("start success");
        }, failCallback).catch(failCatch);
        console.log("set flush after 5s");
        await sleep(5000).then(() => {
            audioEncodeProcessor.flush().then(() => {
                console.log("flush after 5s");
            }, failCallback).catch(failCatch);
        });
    })

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FUNCTION_PROMISE_01_0300
        * @tc.name      : 003. test flush in eos state
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */ 

    it('SUB_MEDIA_AUDIO_ENCODER_FUNCTION_PROMISE_01_0300', 0, async function (done) {
        console.log("case test flush in eos state");
        let mediaDescription = {
            "channel_count": 1, 
            "sample_rate": 48000,
            "audio_raw_format":16,
        }
        ES_LENGTH = 2000;
        eosframenum = 100;
        flushAtEOS = true;
        SAVEPATH = SAVEPATH + 'promise0300.txt';
        await media.createAudioEncoderByMime('audio/mp4a-latm').then((processor) => {
            console.log("create createAudioEncoder success"); 
            audioEncodeProcessor = processor;
        }, failCallback).catch(failCatch);  
        console.log("get AudioEncoderCaps:");
        await audioEncodeProcessor.getAudioEncoderCaps().then((AudioCaps) => {
            console.log("get AudioEncoderCaps success");
            console.log("print AudioCaps: " + AudioCaps);
        }, failCallback).catch(failCatch);
        console.log("start configure");
        await audioEncodeProcessor.configure(mediaDescription).then(() => {
            console.log("configure success"); 
            readFile(AUDIOPATH);
        }, failCallback).catch(failCatch);
        setCallback(audioEncodeProcessor, done);
        console.log("start prepare");
        await audioEncodeProcessor.prepare().then(() => {
            console.log("prepare success");
        }, failCallback).catch(failCatch);
        console.log("start encoding");
        await audioEncodeProcessor.start().then(() => {
            console.log("start success");
        }, failCallback).catch(failCatch);
    })


    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FUNCTION_PROMISE_01_0400
        * @tc.name      : 004. test stop at running state and reset
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */ 

    it('SUB_MEDIA_AUDIO_ENCODER_FUNCTION_PROMISE_01_0400', 0, async function (done) {
        console.log("case test stop at running state and reset");
        let mediaDescription = {
            "channel_count": 1, 
            "sample_rate": 48000,
            "audio_raw_format":16,
        }
        ES_LENGTH = 2000;
        SAVEPATH = SAVEPATH + 'promise0400.txt';
        await media.createAudioEncoderByMime('audio/mp4a-latm').then((processor) => {
            console.log("create createAudioEncoder success"); 
            audioEncodeProcessor = processor;
        }, failCallback).catch(failCatch);  
        console.log("get AudioEncoderCaps:");
        await audioEncodeProcessor.getAudioEncoderCaps().then((AudioCaps) => {
            console.log("get AudioEncoderCaps success");
            console.log("print AudioCaps: " + AudioCaps);
        }, failCallback).catch(failCatch);
        console.log("start configure");
        await audioEncodeProcessor.configure(mediaDescription).then(() => {
            console.log("configure success"); 
            readFile(AUDIOPATH);
        }, failCallback).catch(failCatch);
        setCallback(audioEncodeProcessor, done);
        console.log("start prepare");
        await audioEncodeProcessor.prepare().then(() => {
            console.log("prepare success");
        }, failCallback).catch(failCatch);
        console.log("start encoding");
        await audioEncodeProcessor.start().then(() => {
            console.log("start success");
        }, failCallback).catch(failCatch);
        console.log('stop at running state(after 5s');
        await sleep(5000).then(() => {audioEncodeProcessor.start().then(() => {
            console.log("stop after 5s success");
        }, failCallback).catch(failCatch);});
        await audioEncodeProcessor.reset().then(() => {
            console.log("reset success");
        }, failCallback).catch(failCatch);
        audioEncodeProcessor = null;
        done();
    })


    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FUNCTION_PROMISE_01_0500
        * @tc.name      : 005. test stop and restart
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */ 

    it('SUB_MEDIA_AUDIO_ENCODER_FUNCTION_PROMISE_01_0500', 0, async function (done) {
        console.log("case test stop and restart");
        let mediaDescription = {
            "channel_count": 1, 
            "sample_rate": 48000,
            "audio_raw_format":16,
        }
        eosframenum = 100;
        ES_LENGTH = 2000;
        SAVEPATH = SAVEPATH + 'promise0500.txt';
        await media.createAudioEncoderByMime('audio/mp4a-latm').then((processor) => {
            console.log("create createAudioEncoder success"); 
            audioEncodeProcessor = processor;
        }, failCallback).catch(failCatch);  
        console.log("get AudioEncoderCaps:");
        await audioEncodeProcessor.getAudioEncoderCaps().then((AudioCaps) => {
            console.log("get AudioEncoderCaps success");
            console.log("print AudioCaps: " + AudioCaps);
        }, failCallback).catch(failCatch);
        console.log("start configure");
        await audioEncodeProcessor.configure(mediaDescription).then(() => {
            console.log("configure success"); 
            readFile(AUDIOPATH);
        }, failCallback).catch(failCatch);
        setCallback(audioEncodeProcessor, done);
        console.log("start prepare");
        await audioEncodeProcessor.prepare().then(() => {
            console.log("prepare success");
        }, failCallback).catch(failCatch);
        console.log("start encoding");
        await audioEncodeProcessor.start().then(() => {
            console.log("start success");
        }, failCallback).catch(failCatch);
        await sleep(5000).then(() => {
            console.log("stop encoding after 5s");
        });     
        await audioEncodeProcessor.stop().then(() => {
            console.log("stop after 5s success");
        }, failCallback).catch(failCatch);
        await sleep(2000).then(() => {
            console.log("restart encoding after 2s");
            resetParam();
            readFile(AUDIOPATH);
        });   
        await audioEncodeProcessor.start().then(() => {
            console.log("restart after 3s success"); 
            workdoneAtEOS=true;
            enqueueAllInputs(audioEncodeProcessor, inputQueue);
        }, failCallback).catch(failCatch);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FUNCTION_PROMISE_01_0600
        * @tc.name      : 006. test reconfigure for new file with the same format
        * @tc.desc      : basic encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */ 

    it('SUB_MEDIA_AUDIO_ENCODER_FUNCTION_PROMISE_01_0600', 0, async function (done) {
        console.log("case test reconfigure for new file with the same format");
        let mediaDescription = {
            "channel_count": 1, 
            "sample_rate": 48000,
            "audio_raw_format":16,
        }
        eosframenum = 100;
        resetAtEOS = true;
        SAVEPATH = SAVEPATH + 'promise0601.txt';
        await media.createAudioEncoderByMime('audio/mp4a-latm').then((processor) => {
            console.log("create createAudioEncoder success"); 
            audioEncodeProcessor = processor;
        }, failCallback).catch(failCatch);  
        console.log("get AudioEncoderCaps:");
        await audioEncodeProcessor.getAudioEncoderCaps().then((AudioCaps) => {
            console.log("get AudioEncoderCaps success");
            console.log("print AudioCaps: " + AudioCaps);
        }, failCallback).catch(failCatch);
        console.log("start configure");
        await audioEncodeProcessor.configure(mediaDescription).then(() => {
            console.log("configure success"); 
            readFile(AUDIOPATH);
        }, failCallback).catch(failCatch);
        setCallback(audioEncodeProcessor, done);
        console.log("start prepare");
        await audioEncodeProcessor.prepare().then(() => {
            console.log("prepare success");
        }, failCallback).catch(failCatch);
        console.log("start encoding");
        await audioEncodeProcessor.start().then(() => {
            console.log("start success");
        }, failCallback).catch(failCatch);
        let mediaDescription2 = {
            "channel_count": 1, 
            "sample_rate": 48000,
            "audio_raw_format":16,
        } 
        await sleep(10000).then(() => {
            console.log("start configure 2");
        });       
        await audioEncodeProcessor.configure(mediaDescription2).then(() => {
            console.log("configure 2 success"); 
            resetParam(); 
            readFile(AUDIOPATH2);
        }, failCallback).catch(failCatch);
        SAVEPATH = '/data/media/promise0602.txt'
        workdoneAtEOS = true;
        ES = [0, 4096, 1024, 1024, 1024]
        ES_LENGTH = 200;
        setCallback(audioEncodeProcessor, done);
        console.log("start prepare");
        await audioEncodeProcessor.prepare().then(() => {
            console.log("prepare2 success");
        }, failCallback).catch(failCatch);
        console.log("start encoding");
        await audioEncodeProcessor.start().then(() => {
            console.log("start2 success");
        }, failCallback).catch(failCatch);
    })
})