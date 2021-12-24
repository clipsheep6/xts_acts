import media from '@ohos.multimedia.media'
import Fileio from '@ohos.fileio'
import mediaLibrary from '@ohos.multimedia.mediaLibrary'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'



describe('AudioDecoderFunc', function () {
    const AUDIOPATH =  '/data/media/test.aac'
    const SAVEPATH = '/data/media/out.txt';
    let readStreamSync = undefined;
    let i = 1;
    let startpoisition = 0;
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
    let enqueueEOS = false;
    let inputQueue = [];
    let outputQueue = [];
    let ES = [  0, 361, 368, 22, 20, 20, 20, 20, 20, 18, 198, 513, 499, 534, 522, 541, 608, 596, 613, 631, 543, 
                563, 505, 411, 375, 402, 361, 396, 405, 372, 402, 382, 371, 363, 366, 401, 390, 519, 325, 367, 
                365, 389, 358, 389, 413, 327, 493, 378, 360, 359, 387, 356, 391, 362, 360, 393, 408, 384, 348, 
                361, 437, 494, 381, 397, 329, 365, 376, 354, 376, 347, 541, 366, 377, 370, 365, 368, 366, 358, 
                366, 401, 395, 393, 385, 348, 365, 386, 375, 381, 371, 549, 335, 376, 362, 390, 391, 350, 380, 
                368, 360, 387, 408, 392, 383, 390, 418, 353, 383, 375, 410, 355, 375, 437, 413, 393, 427, 397, 
                397, 363, 418, 393, 412, 373, 433, 323, 381, 396, 391, 372, 400, 397, 294, 280, 391, 405, 378, 
                410, 505, 411, 385, 380, 377, 345, 393, 375, 377, 378, 351, 401, 377, 404, 368, 370, 402, 386, 
                398, 393, 392, 386, 403, 360, 393, 373, 386, 362, 344, 416, 355, 380, 353, 398, 422, 386, 365, 
                335, 340, 383, 371, 386, 375, 399, 398, 352, 387, 380, 390, 391, 390, 385, 404, 384, 407, 365, 
                348, 388, 388, 385, 392, 383, 462, 463, 466, 392, 351, 358, 385, 358, 389, 378, 359, 349, 424, 
                335, 392, 347, 348, 379, 302, 295, 357, 458, 466, 460, 370, 390, 402, 405, 411, 378, 383, 351, 
                413, 420, 362, 343, 369, 367, 378, 355, 385, 410, 420, 375, 398, 394, 384, 376, 400, 395, 389, 
                395, 363, 422, 364, 365, 380, 395, 364, 395, 350, 319, 308, 374, 560, 503, 500, 438, 427, 445, 
                416, 366, 424, 331, 354, 376, 381, 387, 369, 382, 343, 366, 442, 419, 348, 362, 354, 405, 419, 
                332, 376, 388, 405, 365, 428, 379, 384, 387, 403, 385, 344, 366, 381, 366, 371, 286, 328, 470, 
                413, 404, 409, 406, 376, 370, 380, 393, 345, 400, 386, 397, 376, 407, 364, 362, 351, 377, 345, 
                375, 413, 353, 419, 382, 379, 383, 444, 392, 368, 374, 376, 349, 413, 405, 374, 355, 412, 385, 
                356, 277, 361, 461, 398, 431, 381, 405, 389, 374, 392, 377, 407, 377, 389, 406, 391, 378, 420, 
                388, 372, 372, 350, 373, 446, 399, 354, 368, 350, 373, 418, 390, 366, 367, 351, 414, 413, 362, 
                373, 364, 312, 400, 391, 371, 384, 478, 391, 400, 344, 360, 383, 349, 370, 393, 369, 364, 366, 
                401, 377, 360, 392, 398, 388, 358, 374, 386, 395, 374, 419, 376, 393, 376, 348, 416, 381, 363, 
                376, 381, 369, 378, 416, 366, 379, 363, 430, 368, 358, 470, 296, 358];
    const ES_LENGTH = 433;

    beforeAll(function() {

        console.info('beforeAll case');
    })

    beforeEach(function() {
        console.info('beforeEach case');
    })

    afterEach(function() {
        console.info('afterEach case');
    })

    afterAll(function() {
        console.info('afterAll case');
    })

    let failCallback = function(err) {
        console.info('case callback err : ' + err);
        // assertTrue(typeof(err) == undefined);
    }

    let failCatch = function(err) {
        console.info('case catch err : ' + err);
        // assertTrue(typeof(err) == undefined);
    }


    // /* input EOS signal */
    // function queueEOS(){
    //     enqueueEOS = true;
    // }

    // /* flush to clear inputbuffer and outputbuffer */
    // async function flushcodec(audioDecodeProcessor){
    //     await audioDecodeProcessor.flush().then(() => {
    //         console.linfo("flush success");
    //         inputQueue = [];
    //         outputQueue = [];
    //         sawInputEOS = false;
    //         sawOutputEOS = false;
    //     }, failCallback).catch(failCatch);
    // }

    /* push inputbuffers into codec  */
    async function enqueueAllInputs(audioDecodeProcessor, queue){
        console.log('inputQueue.length:' + queue.length);
        while (queue.length > 0 && !sawInputEOS){
            let inputobject = queue.shift(); 
            dequeInputCnt += 1;
            console.log('dequeInputCnt: ' + dequeInputCnt);   
            console.log('inputobject.index: ' + inputobject.index);
            console.log('sawInputEOS: ' + sawInputEOS);
            if (enqueueEOS){
                console.log("EOS frame")
                inputobject.flags = 1;  
                inputobject.timeMs = 0;
                inputobject.length = 0; 
                sawInputEOS = true;
            }
            else{
                console.log("read frame from file")
                console.log("i:" + i);                           
                inputobject.timeMs = timestamp;
                inputobject.offset = 0;
                inputobject.length = ES[i] - FREAM_HEAD_BYTE;  
                getContent(inputobject.data, ES[i]);
                console.log('read frame from file success')
                if (i == ES_LENGTH) {
                    console.log("last frame");
                    sawInputEOS = true;
                    console.log("set sawInputEOS success");
                    inputobject.flags = 1;  
                    console.log("last frame, set flag = 1 success");
                }
                else{
                    console.log("not last frame, set flag = 0");
                    inputobject.flags = 0;
                    console.log("not last frame, set flag = 0 success");
                }
                console.log("inputobject.flags: " + inputobject.flags);   
                startpoisition += ES[i];
                timestamp += ES[i]/44.1;
                i += 1;
            }
            await audioDecodeProcessor.queueInput(inputobject).then(() => {
                enqueInputCnt += 1;
                console.log('enqueInputCnt:' + enqueInputCnt);
                console.info('queueInput success');
            }, failCallback).catch(failCatch);
        }
    }


    /* get outputbuffers from codec  */
    async function dequeueAllOutputs(audioDecodeProcessor, queue){
        console.log('outputQueue.length:' + queue.length);
        while (queue.length > 0){
            if (!sawOutputEOS){
                let outputobject = queue.shift();   
                dequeOutputCnt += 1;
                console.log('dequeOutputCnt: ' + dequeOutputCnt); 
                console.log('outputobject.index: ' + outputobject.index);
                if (outputobject.flags == 1){
                    sawOutputEOS == true
                }
                writeFile(SAVEPATH, outputobject.data, outputobject.length, outputobject.offset);
                console.log("write to file success");
                await audioDecodeProcessor.releaseOutput(outputobject).then(() => {
                    console.info('release output success');
                    releaseOutputCnt += 1;
                    console.log('release output count:' + releaseOutputCnt);
                }, failCallback).catch(failCatch);
            }
            else{
                console.log("sawOutputEOS")
                await audioDecodeProcessor.stop().then(() => {console.log("stop success")}, failCallback).catch(failCatch);
                await audioDecodeProcessor.reset().then(() => {console.log("reset success")}, failCallback).catch(failCatch);
                audioDecodeProcessor = null;
                done();
            }
        } 
    }


    function setCallback(audioDecodeProcessor){
        console.info('case callback');
        audioDecodeProcessor.on('inputBufferAvailable', async(inBuffer) => {
            console.info('inputBufferAvailable');
            console.info("inBuffer.index: "+ inBuffer.index);
            pushInputCnt += 1;
            console.log('pushInputCnt: ' + pushInputCnt);  
            inputQueue.push(inBuffer);
            await enqueueAllInputs(audioDecodeProcessor, inputQueue);
        });

        audioDecodeProcessor.on('outputBufferAvailable', async(outBuffer) => {
            console.info('outputBufferAvailable');
            console.info("outBuffer.index: "+ outBuffer.index);
            pushOutputCnt += 1;
            console.log('pushOutputCnt: ' + pushOutputCnt);  
            outputQueue.push(outBuffer);
            await dequeueAllOutputs(audioDecodeProcessor, outputQueue);
        });

        audioDecodeProcessor.on('error',(err) => {
            console.info('case error called,errName is' + err);
        });

        audioDecodeProcessor.on('outputFormatChanged',(format) => {
            console.info('Output format changed: ' + format.toString());
        });
    }


    function writeFile(path,buf,len,offset){
        try{
            let writestream = Fileio.createStreamSync(path,"wb+");
            let num = writestream.writeSync(buf,{length:len, offset:offset,});
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



    /* *
    * @tc.number    : SUB_MEDIA_Audio_Decoder_Function_01_0100
    * @tc.name      : 001.test Audio decode promise
    * @tc.desc      : basic decode function
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
    */ 
    it('SUB_MEDIA_Audio_Decoder_Function_01_0200', 0, async function (done) {
        console.log("start callback case");
        let audioDecodeProcessor = null;
        let mediaDescription = {
            "channel_count": 2, 
            "sample_rate": 44100,
            "audio_raw_format":4,
        }

        console.log("start create");
        media.createAudioDecoderByMime('audio/mp4a-latm', (err, processor) => {
            console.log("create success");
            audioDecodeProcessor = processor;
            console.log("start configure");
            audioDecodeProcessor.configure(mediaDescription, (err) =>{
                // assertTrue(typeof(err) == undefined);
                console.log("configure success");
                readFile(AUDIOPATH);
                console.log("start prepare");
                setCallback(audioDecodeProcessor);
                audioDecodeProcessor.prepare((err) => {
                    // assertTrue(typeof(err) == undefined);
                    console.log("prepare success");
                    console.log("start decoding");
                    audioDecodeProcessor.start((err) => {
                        // assertTrue(typeof(err) == undefined);
                        console.log("start success");
                    })
                })
            })
        })
    })
})


    