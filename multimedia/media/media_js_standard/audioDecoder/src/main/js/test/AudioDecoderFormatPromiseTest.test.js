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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it} from 'deccjsunit/index'

describe('AudioDecoderFormatTest', function () {
    const AUDIOPATH1 =  '/data/media/AAC_48000_32_1.aac'
    const AUDIOPATH2 =  '/data/media/FLAC_48000_32_1.flac'
    const AUDIOPATH3 = '/data/media/mp3.es';
    let SAVEPATH = '/data/media/totalfunc.txt';
    let audioDecodeProcessor = null;
    let readStreamSync = undefined;
    let eosframenum = 0;
    let workdoneAtEOS = false;
    let stopAtEOS = false;
    let resetAtEOS = false;
    let stopinprocess = false;
    let stopframenum = 0;
    let needrestart = false;
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
    let ES = [];
    let ES_LENGTH = 0;
    let samplerate = 44.1;
    let isMp3 = false;

    beforeAll(function() {
        console.info('beforeAll case');
    })

    beforeEach(function() {
        console.info('beforeEach case');
        SAVEPATH = '/data/media/';
        audioDecodeProcessor = null;
        readStreamSync = undefined;
        eosframenum = 0;
        workdoneAtEOS = false;
        stopAtEOS = false;
        resetAtEOS = false;
        stopinprocess = false;
        stopframenum = 0;
        needrestart = false;
        flushAtEOS = false;
        needgetOutputMediaDescription = false;
        needrelease = false;
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
        ES = [];
        ES_LENGTH = 0;
        samplerate = 44.1;
        isMp3 = false;
    })

    afterEach(function() {
        console.info('afterEach case');
        if (audioDecodeProcessor != null){
            audioDecodeProcessor = null
        }
    })

    afterAll(function() {
        console.info('afterAll case');
    })

    let failCallback = function(err) {
        console.info('case callback err : ' + err);
    }

    let failCatch = function(err) {
        console.info('case catch err : ' + err);
    }

    function resetParam(){
        readStreamSync = undefined;
        eosframenum = 0;
        workdoneAtEOS = false;
        stopinprocess = false;
        stopframenum = 0;
        needrestart = false;
        flushAtEOS = false;
        needgetOutputMediaDescription = false;
        needrelease = false;
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
        isMp3 = false;
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

    /* push inputbuffers into codec  */
    async function enqueueAllInputs(audioDecodeProcessor, queue, done){
        console.log('inputQueue.length:' + queue.length);
        while (queue.length > 0 && !sawInputEOS){
            let inputobject = queue.shift(); 
            dequeInputCnt += 1;
            if (i == eosframenum || i == ES_LENGTH + 1){
                inputobject.flags = 1;  
                inputobject.timeMs = 0;
                inputobject.length = 0; 
                sawInputEOS = true;
            }
            else{                   
                inputobject.timeMs = timestamp;
                inputobject.offset = 0;
                if (isMp3){                
                    inputobject.length = ES[1] - FREAM_HEAD_BYTE;  
                    getContent(inputobject.data, ES[1]);
                }
                else{
                    inputobject.length = ES[i] - FREAM_HEAD_BYTE;  
                    getContent(inputobject.data, ES[i]);
                }
                inputobject.flags = 0;
            }
            if (isMp3){timestamp += ES[1]/samplerate;}
            else{timestamp += ES[i]/samplerate;}
            i += 1;
            audioDecodeProcessor.queueInput(inputobject).then(() => {
                enqueInputCnt += 1;
            }, failCallback).catch(failCatch);
        }
    }


    /* get outputbuffers from codec  */
    async function dequeueAllOutputs(audioDecodeProcessor, queue, done){
        while (queue.length > 0 && !sawOutputEOS){
            let outputobject = queue.shift();   
            dequeOutputCnt += 1;
            if (outputobject.flags == 1){
                sawOutputEOS = true;
                if (stopAtEOS){
                    await audioDecodeProcessor.stop().then(() => {console.log("stop success")}, failCallback).catch(failCatch);}
                if (resetAtEOS){
                    await audioDecodeProcessor.reset().then(() => {
                        console.log("reset success");
                        if (needrelease) {audioDecodeProcessor = null
                        }
                    }, failCallback).catch(failCatch);
                }
                if (workdoneAtEOS) {
                    await audioDecodeProcessor.stop().then(() => {console.log("stop success")}, failCallback).catch(failCatch);
                    await audioDecodeProcessor.reset().then(() => {console.log("reset success")}, failCallback).catch(failCatch);
                    audioDecodeProcessor = null;
                    done();
                }
                if (flushAtEOS){
                    audioDecodeProcessor.flush().then(() => {
                        resetParam();
                        readFile(AUDIOPATH);
                        workdoneAtEOS =true;
                    }, failCallback).catch(failCatch);
                }     
            }
            else{
                writeFile(SAVEPATH, outputobject.data, outputobject.length);
                console.log("write to file success");
            }
            audioDecodeProcessor.releaseOutput(outputobject).then(() => {
                console.info('release output success');
                releaseOutputCnt += 1;
            }, failCallback).catch(failCatch);
        } 
    }

    function setCallback(audioDecodeProcessor, done){
        console.info('case callback');
        audioDecodeProcessor.on('inputBufferAvailable', async(inBuffer) => {
            pushInputCnt += 1;
            inputQueue.push(inBuffer);
            await enqueueAllInputs(audioDecodeProcessor, inputQueue, done);
        });

        audioDecodeProcessor.on('outputBufferAvailable', async(outBuffer) => {
            if (needgetOutputMediaDescription){
                audioDecodeProcessor.getOutputMediaDescription().then((MediaDescription) => {
                    console.log("get OutputMediaDescription success");
                    console.log('get outputMediaDescription : ' + MediaDescription);
                    needgetOutputMediaDescription=fals
                }, failCallback).catch(failCatch);}
            pushOutputCnt += 1;
            outputQueue.push(outBuffer);
            await dequeueAllOutputs(audioDecodeProcessor, outputQueue, done);
        });

        audioDecodeProcessor.on('error',(err) => {
            console.info('case error called,errName is' + err);
        });

        audioDecodeProcessor.on('outputFormatChanged',(format) => {
            console.info('Output format changed: ' + format);
        });
    }

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_DECODER_FORMAT_PROMISE_01_0100
        * @tc.name      : 001.aac
        * @tc.desc      : basic decode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */ 

    it('SUB_MEDIA_AUDIO_DECODER_FORMAT_PROMISE_01_0100', 0, async function (done) {
        console.log("aac promise");
        let mediaDescription = {
                    "channel_count": 2, 
                    "sample_rate": 44100,
                    "audio_raw_format":4,
        }
        workdoneAtEOS = true;
        needgetOutputMediaDescription = true;
        SAVEPATH = SAVEPATH + 'aacPromise0100.txt';
        ES = [0, 283, 336, 291, 405, 438, 411, 215, 215, 313, 270, 342, 641, 554, 545, 545, 546, 541, 540, 542, 552, 537, 533, 498, 472, 445, 430, 445, 427, 414, 386, 413, 370, 380, 401, 393, 369, 391, 367, 395, 396, 396, 385, 391, 384, 395, 392, 386, 388, 384, 379, 376, 381, 375, 373, 349, 391, 357, 384, 395, 384, 380, 386, 372, 386, 383, 378, 385, 385, 384, 342, 390, 379, 387, 386, 393, 397, 362, 393, 394, 391, 383, 385, 377, 379, 381, 369, 375, 379, 346, 382, 356, 361, 366, 394, 393, 385, 362, 406, 399, 384, 377, 385, 389, 375, 346, 396, 388, 381, 383, 352, 357, 397, 382, 395, 376, 388, 373, 374, 353, 383, 384, 393, 379, 348, 364, 389, 380, 381, 388, 423, 392, 381, 368, 351, 391, 355, 358, 395, 390, 385, 382, 383, 388, 388, 389, 376, 379, 376, 384, 369, 354, 390, 389, 396, 393, 382, 385, 353, 383, 381, 377, 411, 387, 390, 377, 349, 381, 390, 378, 373, 375, 381, 351, 392, 381, 380, 381, 378, 387, 379, 383, 348, 386, 364, 386, 371, 399, 399, 385, 380, 355, 397, 395, 382, 380, 386, 352, 387, 390, 373, 372, 388, 378, 385, 368, 385, 370, 378, 373, 383, 368, 373, 388, 351, 384, 391, 387, 389, 383, 355, 361, 392, 386, 354, 394, 392, 397, 392, 352, 381, 395, 349, 383, 390, 392, 350, 393, 393, 385, 389, 393, 382, 378, 384, 378, 375, 373, 375, 389, 377, 383, 387, 373, 344, 388, 379, 391, 373, 384, 358, 361, 391, 394, 363, 350, 361, 395, 399, 389, 398, 375, 398, 400, 381, 354, 363, 366, 400, 400, 356, 370, 400, 394, 398, 385, 378, 372, 354, 359, 393, 381, 363, 396, 396, 355, 390, 356, 355, 371, 399, 367, 406, 375, 377, 405, 401, 390, 393, 392, 384, 386, 374, 358, 397, 389, 393, 385, 345, 379, 357, 388, 356, 381, 389, 367, 358, 391, 360, 394, 396, 357, 395, 388, 394, 383, 357, 383, 392, 394, 376, 379, 356, 386, 395, 387, 377, 377, 389, 377, 385, 351, 387, 350, 388, 384, 345, 358, 368, 399, 394, 385, 384, 395, 378, 387, 386, 386, 376, 375, 382, 351, 359, 356, 401, 388, 363, 406, 363, 374, 435, 366, 400, 393, 392, 371, 391, 359, 359, 397, 388, 390, 420, 411, 369, 384, 382, 383, 383, 375, 381, 361, 380, 348, 379, 386, 379, 379, 386, 371, 352, 378, 378, 388, 384, 385, 352, 355, 387, 383, 379, 362, 386, 399, 376, 390, 350, 387, 357, 403, 398, 397, 360, 351, 394, 400, 399, 393, 388, 395, 370, 377, 395, 360, 346, 381, 370, 390, 380, 391, 387, 382, 384, 383, 354, 349, 394, 358, 387, 400, 386, 402, 354, 396, 387, 391, 365, 377, 359, 361, 365, 395, 388, 388, 384, 388, 378, 374, 382, 376, 377, 389, 378, 341, 390, 376, 381, 375, 414, 368, 369, 387, 411, 396, 391, 378, 389, 349, 383, 344, 381, 387, 380, 353, 361, 391, 365, 390, 396, 382, 386, 385, 385, 409, 387, 386, 378, 372, 372, 374, 349, 388, 389, 348, 395, 380, 382, 388, 375, 347, 383, 359, 389, 368, 361, 405, 398, 393, 395, 359, 360, 395, 395, 362, 354, 388, 348, 388, 386, 390, 350, 388, 356, 369, 364, 404, 404, 391, 394, 385, 439, 432, 375, 366, 441, 362, 367, 382, 374, 346, 391, 371, 354, 376, 390, 373, 382, 385, 389, 378, 377, 347, 414, 338, 348, 385, 352, 385, 386, 381, 388, 387, 364, 465, 405, 443, 387, 339, 376, 337, 379, 387, 370, 374, 358, 354, 357, 393, 356, 381, 357, 407, 361, 397, 362, 394, 394, 392, 394, 391, 381, 386, 379, 354, 351, 392, 408, 393, 389, 388, 385, 375, 388, 375, 388, 375, 354, 384, 379, 386, 394, 383, 359, 405, 395, 352, 345, 403, 427, 373, 380, 350, 415, 378, 434, 385, 388, 387, 400, 405, 329, 391, 356, 419, 358, 359, 375, 367, 391, 359, 369, 361, 376, 378, 379, 348, 390, 345, 388, 390, 406, 349, 368, 364, 391, 384, 401, 384, 391, 361, 399, 359, 386, 392, 382, 386, 380, 383, 345, 376, 393, 400, 395, 343, 352, 354, 381, 388, 357, 393, 389, 384, 389, 388, 384, 404, 372, 358, 381, 352, 355, 485, 393, 371, 376, 389, 377, 391, 387, 376, 342, 390, 375, 379, 396, 376, 402, 353, 392, 382, 383, 387, 386, 372, 377, 382, 388, 381, 387, 357, 393, 385, 346, 389, 388, 357, 362, 404, 398, 397, 402, 371, 351, 370, 362, 350, 388, 399, 402, 406, 377, 396, 359, 372, 390, 392, 368, 383, 346, 384, 381, 379, 367, 384, 389, 381, 371, 358, 422, 372, 382, 374, 444, 412, 369, 362, 373, 389, 401, 383, 380, 366, 365, 361, 379, 372, 345, 382, 375, 376, 375, 382, 356, 395, 383, 384, 391, 361, 396, 407, 365, 351, 385, 378, 403, 344, 352, 387, 397, 399, 377, 371, 381, 415, 382, 388, 368, 383, 405, 390, 386, 384, 374, 375, 381, 371, 372, 374, 377, 346, 358, 381, 377, 359, 385, 396, 385, 390, 389, 391, 375, 357, 389, 390, 377, 370, 379, 351, 381, 381, 380, 371, 386, 389, 389, 383, 362, 393, 388, 355, 396, 383, 352, 384, 352, 383, 362, 396, 385, 396, 357, 388, 382, 377, 373, 379, 383, 386, 350, 393, 355, 380, 401, 392, 391, 402, 391, 427, 407, 394, 332, 398, 367, 373, 343, 381, 383, 386, 382, 349, 353, 393, 378, 386, 375, 390, 356, 392, 384, 387, 380, 381, 385, 386, 383, 378, 379, 359, 381, 382, 388, 357, 357, 397, 358, 424, 382, 352, 409, 374, 368, 365, 399, 352, 393, 389, 385, 352, 380, 398, 389, 385, 387, 387, 353, 402, 396, 386, 357, 395, 368, 369, 407, 394, 383, 362, 380, 385, 368, 375, 365, 379, 377, 388, 380, 346, 383, 381, 399, 359, 386, 455, 368, 406, 377, 339, 381, 377, 373, 371, 338]
        ES_LENGTH = 1000;

        await media.createAudioDecoderByMime('audio/mp4a-latm')
        .then((processor) => {console.log("create createAudioDecoder success"); audioDecodeProcessor = processor;}, failCallback).catch(failCatch);  

        console.log("get AudioDecoderCaps:");
        await audioDecodeProcessor.getAudioDecoderCaps().
        then((AudioCaps) => {console.log("get AudioDecoderCaps success");console.log("print AudioCaps: " + AudioCaps)}, failCallback).catch(failCatch);

        console.log("start configure");
        await audioDecodeProcessor.configure(mediaDescription).
        then(() => {console.log("configure success"); readFile(AUDIOPATH1)}, failCallback).catch(failCatch);

        setCallback(audioDecodeProcessor, done);

        console.log("start prepare");
        await audioDecodeProcessor.prepare().then(() => {console.log("prepare success")}, failCallback).catch(failCatch);

        console.log("start decoding");
        await audioDecodeProcessor.start().then(() => {console.log("start success")}, failCallback).catch(failCatch);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_DECODER_FORMAT_PROMISE_01_0200
        * @tc.name      : 001.aac
        * @tc.desc      : basic decode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */ 

    it('SUB_MEDIA_AUDIO_DECODER_FORMAT_PROMISE_01_0200', 0, async function (done) {
        console.log("flac promise");
        let mediaDescription = {
                    "channel_count": 1, 
                    "sample_rate": 48000,
                    "audio_raw_format":4,
        }
        workdoneAtEOS = true;
        needgetOutputMediaDescription = true;
        SAVEPATH = SAVEPATH + 'flacPromise0100.txt';
        samplerate = 48;
        ES = [0, 2116, 2093, 2886, 2859, 2798, 2778, 2752, 2752, 2754, 2720, 2898, 2829, 2806, 2796, 2786, 2774, 2758, 2741, 3489, 3342, 3272, 3167, 3048, 3060, 2919, 2839, 2794, 2770, 2763, 2756, 2722, 2950, 2876, 2842, 2827, 2792, 3121, 3075, 2969, 3240, 3199, 3082, 2975, 2895, 3135, 3024, 2970, 2902, 2860, 2802, 2778, 2779, 2963, 2893, 2870, 2831, 2800, 2762, 2752, 2760, 2759, 2726, 2889, 2960, 2876, 3223, 3040, 3006, 3042, 2980, 3097, 3069, 3215, 3365, 3296, 3653, 3480, 3300, 3140, 3014, 2975, 2952, 2896, 2897, 2842, 2929, 3567, 3929, 3485, 3082, 3625, 4953, 5239, 5094, 4993, 4821, 4431, 5195, 5542, 5557, 4894, 4414, 5085, 5496, 5089, 4459, 4532, 4778, 5460, 5372, 5224, 4395, 4701, 5512, 5304, 4798, 7128, 6534, 5704, 5562, 5539, 5675, 5780, 6058, 6194, 6076, 5971, 5758, 5202, 4438, 3821, 4267, 5550, 4896, 3841, 5166, 4904, 4504, 5530, 5354, 5047, 5695, 5422, 5168, 5338, 5154, 5385, 5322, 4934, 4512, 4001, 3793, 3624, 3589, 3562, 4346, 5407, 5582, 5645, 5581, 5605, 5520, 5399, 5164, 4991, 4556, 4058, 3662, 3757, 4627, 5183, 5061, 4114, 5840, 5051, 5126, 4573, 5269, 4437, 5021, 5508, 5289, 5171, 5153, 5118, 5721, 5375, 4863, 6353, 5477, 5608, 5614, 5737, 5178, 4614, 4671, 5204, 5027, 4977, 3922, 5904]
        ES_LENGTH = 200;

        await media.createAudioDecoderByMime('audio/flac')
        .then((processor) => {console.log("create createAudioDecoder success"); audioDecodeProcessor = processor;}, failCallback).catch(failCatch);  

        console.log("get AudioDecoderCaps:");
        await audioDecodeProcessor.getAudioDecoderCaps().
        then((AudioCaps) => {console.log("get AudioDecoderCaps success");console.log("print AudioCaps: " + AudioCaps)}, failCallback).catch(failCatch);

        console.log("start configure");
        await audioDecodeProcessor.configure(mediaDescription).
        then(() => {console.log("configure success"); readFile(AUDIOPATH2)}, failCallback).catch(failCatch);

        setCallback(audioDecodeProcessor, done);

        console.log("start prepare");
        await audioDecodeProcessor.prepare().then(() => {console.log("prepare success")}, failCallback).catch(failCatch);

        console.log("start decoding");
        await audioDecodeProcessor.start().then(() => {console.log("start success")}, failCallback).catch(failCatch);
    })

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_DECODER_FORMAT_PROMISE_01_0300
        * @tc.name      : 001.aac
        * @tc.desc      : basic decode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */ 

    it('SUB_MEDIA_AUDIO_DECODER_FORMAT_PROMISE_01_0300', 0, async function (done) {
        console.log("mp3 promise");
        let mediaDescription = {
            "channel_count": 2, 
            "sample_rate": 44100,
            "audio_raw_format":4,
        }
        workdoneAtEOS = true;
        needgetOutputMediaDescription = true;
        SAVEPATH = SAVEPATH + 'mp3Promise0100.txt';
        isMp3 = true;
        ES = [0, 1044]
        ES_LENGTH = 1000;

        await media.createAudioDecoderByMime('audio/mpeg')
        .then((processor) => {console.log("create createAudioDecoder success"); audioDecodeProcessor = processor;}, failCallback).catch(failCatch);  

        console.log("get AudioDecoderCaps:");
        await audioDecodeProcessor.getAudioDecoderCaps().
        then((AudioCaps) => {console.log("get AudioDecoderCaps success");console.log("print AudioCaps: " + AudioCaps)}, failCallback).catch(failCatch);

        console.log("start configure");
        await audioDecodeProcessor.configure(mediaDescription).
        then(() => {console.log("configure success"); readFile(AUDIOPATH3)}, failCallback).catch(failCatch);

        setCallback(audioDecodeProcessor, done);

        console.log("start prepare");
        await audioDecodeProcessor.prepare().then(() => {console.log("prepare success")}, failCallback).catch(failCatch);

        console.log("start decoding");
        await audioDecodeProcessor.start().then(() => {console.log("start success")}, failCallback).catch(failCatch);
    })
})
