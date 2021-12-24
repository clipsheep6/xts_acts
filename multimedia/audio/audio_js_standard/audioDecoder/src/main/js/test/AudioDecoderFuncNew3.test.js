import media from '@ohos.multimedia.media'
import Fileio from '@ohos.fileio'
import mediaLibrary from '@ohos.multimedia.mediaLibrary'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'



describe('AudioDecoderFunc', function () {
    const AUDIOPATH =  '/data/media/test.aac';
    const AUDIOPATH2 =  '/data/media/test2.aac';
    const SAVEPATH = '/data/output/out.txt';
    const MAX_LENGTH = 1024;
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
    let signalError = false;
    let signalEOSWithLastFrame = true;
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
        isTimeOut = false;
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


    function getCodecBuffer(){
        let codecbuffer = null;
        let flag = 0;
        while (!signalError && (inputQueue.length !=0 || outputQueue !=0)){
            if (outputQueue.length !=0){
                dequeOutputCnt += 1;
                console.log('dequeOutputCnt: ' + dequeOutputCnt); 
                codecbuffer =  outputQueue.shift();
                console.log("get output codecbuffer success in getCodecBuffer()");
                flag = 0;
                break;
            }
            else{
                dequeInputCnt += 1;
                console.log('dequeInputCnt: ' + dequeInputCnt);   
                codecbuffer =  inputQueue.shift();
                console.log("get input codecbuffer success in getCodecBuffer()");
                flag = 1;
                break;
            }
        }
        return [codecbuffer,flag];
    }

    async function queueEOS(audioDecodeProcessor){
        while(!signalError && !sawInputEOS){
            let [codecbuffer, flag] = getCodecBuffer();
            if (codecbuffer != null){
                if (flag ==0){
                    await dequeueOutputbuffers(audioDecodeProcessor, codecbuffer).then(() => {}, failCallback).catch(failCatch); 
                }
                else{
                    await enqueueEOS(audioDecodeProcessor, codecbuffer).then(() => {}, failCallback).catch(failCatch);
                }
            }
        }
    }

    async function enqueueEOS(audioDecodeProcessor, codecbuffer){
        if (!sawInputEOS){
            codecbuffer.flags = 1;  
            codecbuffer.timeMs = 0;
            codecbuffer.length = 0; 
            codecbuffer.offset = 0;
            await audioDecodeProcessor.queueInput(codecbuffer).then(() => {console.info('queueInput success')}, failCallback).catch(failCatch);
            sawInputEOS = true;
            console.log('Queue End of Stream done');
        }
    }

    async function doWork(audioDecodeProcessor, framelimits){
        let frameCount = 0;
        let loopcnt = 0;
        while (!signalError && !sawInputEOS && frameCount < framelimits && loopcnt <50){
            let [codecbuffer, flag] = getCodecBuffer();
            console.log("get codec buffer");
            console.log("codecbuffer: " + codecbuffer);
            console.log("flag: " + flag);
            if (codecbuffer != null) {
                if (flag == 0){
                    console.log("get output codecbuffer success in doWork()");
                    await dequeueOutputbuffers(audioDecodeProcessor, codecbuffer).then(() => {}, failCallback).catch(failCatch); 
                }
                else{
                    console.log("get input codecbuffer success in doWork()");
                    await enqueueInputbuffers(audioDecodeProcessor, codecbuffer).then(() => {}, failCallback).catch(failCatch); 
                    frameCount += 1;
                }
            }
            loopcnt += 1;
        }
    }

    async function enqueueInputbuffers(audioDecodeProcessor, codecbuffer){
        if (!signalEOSWithLastFrame && i> ES_LENGTH){
            await enqueueEOS(audioDecodeProcessor, codecbuffer).then(() => {}, failCallback).catch(failCatch); 
        }
        else{
            console.log("read frame from file")
            console.log("i:" + i);                 
            if (i == ES_LENGTH && signalEOSWithLastFrame){
                codecbuffer.flags = 1;
                codecbuffer.timeMs = 0;
                codecbuffer.offset = 0;
                codecbuffer.length = 0
                sawInputEOS = true;
            }
            else{
                codecbuffer.flags = 0;
                codecbuffer.timeMs = timestamp;
                codecbuffer.offset = 0;
                codecbuffer.length = ES[i] - FREAM_HEAD_BYTE;  
            }
            getContent(codecbuffer.data, ES[i]);
            startpoisition += ES[i];
            timestamp += startpoisition/44.1;
            i += 1;
            }
            await audioDecodeProcessor.queueInput(codecbuffer).then(() => {
                enqueInputCnt += 1;
                console.log('enqueInputCnt:' + enqueInputCnt);
                console.info('queueInput success');
            }, failCallback).catch(failCatch);
        }
    

    async function dequeueOutputbuffers(audioDecodeProcessor, codecbuffer){
        if (codecbuffer.flags == 1){
            sawOutputEOS == true;
        }
        writeFile(SAVEPATH, outputobject.data, outputobject.length, outputobject.offset);
        await audioDecodeProcessor.releaseOutput(codecbuffer).then(() => {
            releaseOutputCnt += 1;
            console.log('release output count:' + releaseOutputCnt);
            console.info('release output success');
        }, failCallback).catch(failCatch);
    }

    async function waitForAllOutputs(audioDecodeProcessor){
        while(!signalError && !sawOutputEOS){
            let [codecbuffer,flag] = getCodecBuffer();
            if (codecbuffer != null && flag == 0){
                await dequeueOutputbuffers(audioDecodeProcessor, codecbuffer).then(() => {
                    console.info('dequeue Outputbuffers');
                }, failCallback).catch(failCatch);
            }
        }
    }

    // flush to clear inputbuffer and outputbuffer
    async function flushcodec(audioDecodeProcessor){
        await audioDecodeProcessor.flush().then(() => {
            console.linfo("flush success");
            inputQueue = [];
            outputQueue = [];
            sawInputEOS = false;
            sawOutputEOS = false;
        }, failCallback).catch(failCatch);
    }

    /* test reconfiguration */
    async function reconfigureCodec(audioDecodeProcessor, format){
        await audioDecodeProcessor.reset().then(() => {}, failCallback).catch(failCatch); 
        await audioDecodeProcessor.configure(format).then(() => {}, failCallback).catch(failCatch); 
    }


    function setCallback(audioDecodeProcessor){
        console.info('case callback');
        audioDecodeProcessor.on('inputBufferAvailable', async(inBuffer) => {
            console.info('inputBufferAvailable');
            console.info("inBuffer.index: "+ inBuffer.index);
            pushInputCnt += 1;
            console.log('pushInputCnt: ' + pushInputCnt);  
            inputQueue.push(inBuffer);
            console.log("push inBuffer into inputQueue success");      
        });

        audioDecodeProcessor.on('outputBufferAvailable', async(outBuffer) => {
            console.info('outputBufferAvailable');
            pushOutputCnt += 1;
            console.log('pushOutputCnt: ' + pushOutputCnt);  
            outputQueue.push(outBuffer);
            console.log("push outBuffer into outputQueue success");    
        });

        audioDecodeProcessor.on('error',(err) => {
            signalError = true;
            console.info('case error called,errName is' + err);
        });

        audioDecodeProcessor.on('outputFormatChanged',(format) => {
            console.info('Output format changed: ' + format.toString());
        });
    }
    



/**
 * L0:
 * basic function(create-configure-prepare-start-stop-reset)
 * L1: 
 * 1. Signal Eos with Last frame;
 * 2. Signal Eos Separately;
 * 3. test flush in running state before queuing input
 * 4. test flush in running state 
 * 5. test flush in eos state
 * 6. test reconfigure codec for new file 
 * L2:
 * 1. Tests decoder for only EOS frame
 * 2. Test decoder for partial frame
 */


    /* *
    * @tc.number    : SUB_MEDIA_Audio_Decoder_Function_02_0100
    * @tc.name      : 001.Signal Eos with Last frame(promise);
    * @tc.desc      : basic audio decode function
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level1
    */ 

    it('SUB_MEDIA_Audio_Decoder_Function_02_0100', 0, async function (done) {
        console.log("Signal Eos with Last frame(promise)");
        let audioDecodeProcessor = null;
        let mediaDescription = {
            "channel_count": 2, 
            "sample_rate": 44100,
            "audio_raw_format":4,
}

        await media.createAudioDecoderByMime('audio/mp4a-latm')
        .then((processor) => {console.log("create createAudioDecoder success!"); audioDecodeProcessor = processor;}, failCallback).catch(failCatch);  

        console.log("start configure");
        await audioDecodeProcessor.configure(mediaDescription).
        then(() => {console.log("configure success!"); readFile(AUDIOPATH)}, failCallback).catch(failCatch);

        setCallback(audioDecodeProcessor);

        console.log("start prepare");
        await audioDecodeProcessor.prepare().then(() => {console.log("prepare success!")}, failCallback).catch(failCatch);

        console.log("start decoding");
        await audioDecodeProcessor.start().then(() => {console.log("start success!")}, failCallback).catch(failCatch);

        console.log("wait for Signal Eos with Last frame");
        await doWork(audioDecodeProcessor, 500).then(() => {console.log("work done!")}, failCallback).catch(failCatch);
       
        console.log("wait for all outputs");
        await waitForAllOutputs(audioDecodeProcessor).then(() => {console.log("output all buffers successfully!")}, failCallback).catch(failCatch);

        console.log("stop decoding");
        await audioDecodeProcessor.stop().then(() => {console.log("stop success!")}, failCallback).catch(failCatch);

        console.log("reset decodeProcessor");
        await audioDecodeProcessor.reset().then(() => {console.log("reset success!")}, failCallback).catch(failCatch);
        
        audioDecodeProcessor = null;

        done();
    })
})


//     /* *
//     * @tc.number    : SUB_MEDIA_Audio_Decoder_Function_02_0200
//     * @tc.name      : 002.Signal Eos Separately(promise);
//     * @tc.desc      : basic audio decode function
//     * @tc.size      : MediumTest
//     * @tc.type      : Function test
//     * @tc.level     : Level1
//     */ 

//     it('SUB_MEDIA_Audio_Decoder_Function_02_0200', 0, async function (done) {
//         console.log("Signal Eos Separately(promise)");
//         signalEOSWithLastFrame = false;
//         let audioDecodeProcessor = null;
//         let inbuffer = null;
//         var bf = new ArrayBuffer(40);
//         var mediaDescription = {
//                     a1: 0, 
//                     a2: 'aac',
//                     a3: false,
//                     a4:bf,
//         }

//         await media.createAudioDecoderByMime('audio/mp4a-latm')
//         .then((processor) => {console.log("create createAudioDecoder success!"); audioDecodeProcessor = processor;}, failCallback).catch(failCatch);  

//         console.log("start configure");
//         await audioDecodeProcessor.configure(mediaDescription).
//         then(() => {console.log("configure success!"); inbuffer = readFile(AUDIOPATH)}, failCallback).catch(failCatch);

//         setCallback(audioDecodeProcessor, inbuffer);

//         console.log("start prepare");
//         await audioDecodeProcessor.prepare().then(() => {console.log("prepare success!")}, failCallback).catch(failCatch);

//         console.log("start decoding");
//         await audioDecodeProcessor.start().then(() => {
//             console.log("start success!");
//         }, failCallback).catch(failCatch);

//         console.log("wait for Signal Eos with Last frame");
//         await doWork(audioDecodeProcessor, ES_LENGTH).then(() => {console.log("work done!")}, failCallback).catch(failCatch);
       
//         console.log("wait for all outputs");
//         await waitForAllOutputs(audioDecodeProcessor).then(() => {console.log("output all buffers successfully!")}, failCallback).catch(failCatch);

//         console.log("stop decoding");
//         await audioDecodeProcessor.stop().then(() => {console.log("stop success!")}, failCallback).catch(failCatch);

//         console.log("reset decodeProcessor");
//         await audioDecodeProcessor.reset().then(() => {console.log("reset success!")}, failCallback).catch(failCatch);

//         audioDecodeProcessor = null;
        
//         done();
//     })

//     /* *
//     * @tc.number    : SUB_MEDIA_Audio_Decoder_Function_02_0300
//     * @tc.name      : 003.test flush in running state before queuing input(promise);
//     * @tc.desc      : basic audio decode function
//     * @tc.size      : MediumTest
//     * @tc.type      : Function test
//     * @tc.level     : Level1
//     */ 

//     it('SUB_MEDIA_Audio_Decoder_Function_02_0300', 0, async function (done) {
//         console.log("test flush in running state before queuing input(promise)");
//         let audioDecodeProcessor = null;
//         let inbuffer = null;
//         var bf = new ArrayBuffer(40);
//         var mediaDescription = {
//                     a1: 0, 
//                     a2: 'aac',
//                     a3: false,
//                     a4:bf,
//         }

//         await media.createAudioDecoderByMime('audio/mp4a-latm')
//         .then((processor) => {console.log("create createAudioDecoder success!"); audioDecodeProcessor = processor;}, failCallback).catch(failCatch);  

//         console.log("start configure");
//         await audioDecodeProcessor.configure(mediaDescription).
//         then(() => {console.log("configure success!"); inbuffer = readFile(AUDIOPATH)}, failCallback).catch(failCatch);

//         setCallback(audioDecodeProcessor, inbuffer);

//         console.log("start prepare");
//         await audioDecodeProcessor.prepare().then(() => {console.log("prepare success!")}, failCallback).catch(failCatch);

//         console.log("start decoding");
//         await audioDecodeProcessor.start().then(() => {console.log("start success!");}, failCallback).catch(failCatch);

//         console.log("flush in running state before queuing input");
//         await flushcodec(audioDecodeProcessor).then(() => {console.log("flush success!");}, failCallback).catch(failCatch);

//         console.log("wait for Signal Eos with Last frame");
//         await doWork(audioDecodeProcessor, MAX_LENGTH).then(() => {console.log("work done!")}, failCallback).catch(failCatch);
       
//         console.log("wait for all outputs");
//         await waitForAllOutputs(audioDecodeProcessor).then(() => {console.log("output all buffers successfully!")}, failCallback).catch(failCatch);

//         console.log("stop decoding");
//         await audioDecodeProcessor.stop().then(() => {console.log("stop success!")}, failCallback).catch(failCatch);

//         console.log("reset decodeProcessor");
//         await audioDecodeProcessor.reset().then(() => {console.log("reset success!")}, failCallback).catch(failCatch);
        
//         audioDecodeProcessor = null;

//         done();
//     })

//        /* *
//     * @tc.number    : SUB_MEDIA_Audio_Decoder_Function_02_0400
//     * @tc.name      : 004.test flush in running state (promise);
//     * @tc.desc      : basic audio decode function
//     * @tc.size      : MediumTest
//     * @tc.type      : Function test
//     * @tc.level     : Level1
//     */ 

//        it('SUB_MEDIA_Audio_Decoder_Function_02_0400', 0, async function (done) {
//         console.log("test flush in running state (promise)");
//         let audioDecodeProcessor = null;
//         let inbuffer = null;
//         var bf = new ArrayBuffer(40);
//         var mediaDescription = {
//                     a1: 0, 
//                     a2: 'aac',
//                     a3: false,
//                     a4:bf,
//         }

//         await media.createAudioDecoderByMime('audio/mp4a-latm')
//         .then((processor) => {console.log("create createAudioDecoder success!"); audioDecodeProcessor = processor;}, failCallback).catch(failCatch);  

//         console.log("start configure");
//         await audioDecodeProcessor.configure(mediaDescription).
//         then(() => {console.log("configure success!"); inbuffer = readFile(AUDIOPATH)}, failCallback).catch(failCatch);

//         setCallback(audioDecodeProcessor, inbuffer);

//         console.log("start prepare");
//         await audioDecodeProcessor.prepare().then(() => {console.log("prepare success!")}, failCallback).catch(failCatch);

//         console.log("start decoding");
//         await audioDecodeProcessor.start().then(() => {console.log("start success!");}, failCallback).catch(failCatch);

//         console.log("start enqueue buffers");
//         await doWork(audioDecodeProcessor, 30).then(() => {console.log("work done!")}, failCallback).catch(failCatch);
        
//         console.log("flush in running state");
//         await flushcodec(audioDecodeProcessor).then(() => {console.log("flush success!");}, failCallback).catch(failCatch);
        
//         console.log("continue enqueue buffers");
//         await doWork(audioDecodeProcessor, 30).then(() => {console.log("work done!")}, failCallback).catch(failCatch);

//         console.log("wait for all outputs");
//         await waitForAllOutputs(audioDecodeProcessor).then(() => {console.log("output all buffers successfully!")}, failCallback).catch(failCatch);

//         console.log("stop decoding");
//         await audioDecodeProcessor.stop().then(() => {console.log("stop success!")}, failCallback).catch(failCatch);

//         console.log("reset decodeProcessor");
//         await audioDecodeProcessor.reset().then(() => {console.log("reset success!")}, failCallback).catch(failCatch);
        
//         audioDecodeProcessor = null;

//         done();
//     })

//            /* *
//     * @tc.number    : SUB_MEDIA_Audio_Decoder_Function_02_0400
//     * @tc.name      : 004.test flush in running state (promise);
//     * @tc.desc      : basic audio decode function
//     * @tc.size      : MediumTest
//     * @tc.type      : Function test
//     * @tc.level     : Level1
//     */ 

//        it('SUB_MEDIA_Audio_Decoder_Function_02_0400', 0, async function (done) {
//         console.log("test flush in running state (promise)");
//         let audioDecodeProcessor = null;
//         let inbuffer = null;
//         var bf = new ArrayBuffer(40);
//         var mediaDescription = {
//                     a1: 0, 
//                     a2: 'aac',
//                     a3: false,
//                     a4:bf,
//         }

//         await media.createAudioDecoderByMime('audio/mp4a-latm')
//         .then((processor) => {console.log("create createAudioDecoder success!"); audioDecodeProcessor = processor;}, failCallback).catch(failCatch);  

//         console.log("start configure");
//         await audioDecodeProcessor.configure(mediaDescription).
//         then(() => {console.log("configure success!"); inbuffer = readFile(AUDIOPATH)}, failCallback).catch(failCatch);

//         setCallback(audioDecodeProcessor, inbuffer);

//         console.log("start prepare");
//         await audioDecodeProcessor.prepare().then(() => {console.log("prepare success!")}, failCallback).catch(failCatch);

//         console.log("start decoding");
//         await audioDecodeProcessor.start().then(() => {console.log("start success!");}, failCallback).catch(failCatch);

//         console.log("start enqueue buffers");
//         await doWork(audioDecodeProcessor, 30).then(() => {console.log("work done!")}, failCallback).catch(failCatch);
        
//         console.log("flush in running state");
//         await flushcodec(audioDecodeProcessor).then(() => {console.log("flush success!");}, failCallback).catch(failCatch);
        
//         console.log("continue enqueue buffers");
//         await doWork(audioDecodeProcessor, 30).then(() => {console.log("work done!")}, failCallback).catch(failCatch);

//         console.log("wait for all outputs");
//         await waitForAllOutputs(audioDecodeProcessor).then(() => {console.log("output all buffers successfully!")}, failCallback).catch(failCatch);

//         console.log("stop decoding");
//         await audioDecodeProcessor.stop().then(() => {console.log("stop success!")}, failCallback).catch(failCatch);

//         console.log("reset decodeProcessor");
//         await audioDecodeProcessor.reset().then(() => {console.log("reset success!")}, failCallback).catch(failCatch);
        
//         audioDecodeProcessor = null;

//         done();
//     })


//        /* *
//     * @tc.number    : SUB_MEDIA_Audio_Decoder_Function_02_0500
//     * @tc.name      : 005.test flush in eos state (promise);
//     * @tc.desc      : basic audio decode function
//     * @tc.size      : MediumTest
//     * @tc.type      : Function test
//     * @tc.level     : Level1
//     */ 

//        it('SUB_MEDIA_Audio_Decoder_Function_02_0500', 0, async function (done) {
//         console.log("test flush in running state (promise)");
//         let audioDecodeProcessor = null;
//         let inbuffer = null;
//         var bf = new ArrayBuffer(40);
//         var mediaDescription = {
//                     a1: 0, 
//                     a2: 'aac',
//                     a3: false,
//                     a4:bf,
//         }

//         await media.createAudioDecoderByMime('audio/mp4a-latm')
//         .then((processor) => {console.log("create createAudioDecoder success!"); audioDecodeProcessor = processor;}, failCallback).catch(failCatch);  

//         console.log("start configure");
//         await audioDecodeProcessor.configure(mediaDescription).
//         then(() => {console.log("configure success!"); inbuffer = readFile(AUDIOPATH)}, failCallback).catch(failCatch);

//         setCallback(audioDecodeProcessor, inbuffer);

//         console.log("start prepare");
//         await audioDecodeProcessor.prepare().then(() => {console.log("prepare success!")}, failCallback).catch(failCatch);

//         console.log("start decoding");
//         await audioDecodeProcessor.start().then(() => {console.log("start success!");}, failCallback).catch(failCatch);

//         console.log("start enqueue buffers");
//         await doWork(audioDecodeProcessor, MAX_LENGTH).then(() => {console.log("work done!")}, failCallback).catch(failCatch);

//         console.log("wait for all outputs");
//         await waitForAllOutputs(audioDecodeProcessor).then(() => {console.log("output all buffers successfully!")}, failCallback).catch(failCatch);

//         console.log("flush in EOS state");
//         await flushcodec(audioDecodeProcessor).then(() => {console.log("flush success!");}, failCallback).catch(failCatch);

//         console.log("stop decoding");
//         await audioDecodeProcessor.stop().then(() => {console.log("stop success!")}, failCallback).catch(failCatch);

//         console.log("reset decodeProcessor");
//         await audioDecodeProcessor.reset().then(() => {console.log("reset success!")}, failCallback).catch(failCatch);
        
//         audioDecodeProcessor = null;

//         done();
//     })

//       /* *
//     * @tc.number    : SUB_MEDIA_Audio_Decoder_Function_02_0600
//     * @tc.name      : 006.test reconfigure codec for new file (promise);
//     * @tc.desc      : basic audio decode function
//     * @tc.size      : MediumTest
//     * @tc.type      : Function test
//     * @tc.level     : Level1
//     */ 

//       it('SUB_MEDIA_Audio_Decoder_Function_02_0600', 0, async function (done) {
//         console.log("test reconfigure codec for new file (promise)");
//         let audioDecodeProcessor = null;
//         let inbuffer = null;
//         var bf = new ArrayBuffer(40);
//         var mediaDescription = {
//                     a1: 0, 
//                     a2: 'aac',
//                     a3: false,
//                     a4:bf,
//         }

//         await media.createAudioDecoderByMime('audio/mp4a-latm')
//         .then((processor) => {console.log("create createAudioDecoder success!"); audioDecodeProcessor = processor;}, failCallback).catch(failCatch);  

//         console.log("start configure");
//         await audioDecodeProcessor.configure(mediaDescription).
//         then(() => {console.log("configure success!"); inbuffer = readFile(AUDIOPATH)}, failCallback).catch(failCatch);

//         setCallback(audioDecodeProcessor, inbuffer);

//         console.log("start prepare");
//         await audioDecodeProcessor.prepare().then(() => {console.log("prepare success!")}, failCallback).catch(failCatch);

//         console.log("start decoding");
//         await audioDecodeProcessor.start().then(() => {console.log("start success!");}, failCallback).catch(failCatch);

//         console.log("start enqueue buffers");
//         await doWork(audioDecodeProcessor, 30).then(() => {console.log("work done!")}, failCallback).catch(failCatch);

//         console.log("wait for all outputs");
//         await waitForAllOutputs(audioDecodeProcessor).then(() => {console.log("output all buffers successfully!")}, failCallback).catch(failCatch);

//         console.log("stop decoding");
//         await audioDecodeProcessor.stop().then(() => {console.log("stop success!")}, failCallback).catch(failCatch);

//         console.log("reset decodeProcessor");
//         await audioDecodeProcessor.reset().then(() => {console.log("reset success!")}, failCallback).catch(failCatch);
 
        
//         var bf2 = new ArrayBuffer(40);
//         var mediaDescription = {
//                     a1: 0, 
//                     a2: 'aac',
//                     a3: false,
//                     a4:bf2,
//         }

//         await media.createAudioDecoderByMime('audio/mp4a-latm')
//         .then((processor) => {console.log("create createAudioDecoder success!"); audioDecodeProcessor = processor;}, failCallback).catch(failCatch);  

//         console.log("start configure");
//         await audioDecodeProcessor.configure(mediaDescription).
//         then(() => {console.log("configure success!"); inbuffer = readFile(AUDIOPATH2)}, failCallback).catch(failCatch);

//         console.log("start prepare");
//         await audioDecodeProcessor.prepare().then(() => {console.log("prepare success!")}, failCallback).catch(failCatch);

//         console.log("start decoding");
//         await audioDecodeProcessor.start().then(() => {console.log("start success!");}, failCallback).catch(failCatch);

//         console.log("start enqueue buffers");
//         await doWork(audioDecodeProcessor, 30).then(() => {console.log("work done!")}, failCallback).catch(failCatch);

//         console.log("wait for all outputs");
//         await waitForAllOutputs(audioDecodeProcessor).then(() => {console.log("output all buffers successfully!")}, failCallback).catch(failCatch);

//         console.log("stop decoding");
//         await audioDecodeProcessor.stop().then(() => {console.log("stop success!")}, failCallback).catch(failCatch);

//         console.log("reset decodeProcessor");
//         await audioDecodeProcessor.reset().then(() => {console.log("reset success!")}, failCallback).catch(failCatch);

//         audioDecodeProcessor = null;

//         done();
//     })
// })

    
    