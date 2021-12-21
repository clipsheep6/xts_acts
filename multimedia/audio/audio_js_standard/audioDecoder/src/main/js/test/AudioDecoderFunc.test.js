import media from '@ohos.multimedia.media'
import Fileio from '@ohos.fileio'
import mediaLibrary from '@ohos.multimedia.mediaLibrary'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'


describe('AudioDecoderFunc', function () {
    const AUDIOPATH =  '/data/media/test.aac'
    const SAVEPATH = '/data/output/out.txt';
    let i = 0;
    let startpoisition = 0;
    let timestamp = 0;
    let isTimeOut = false;
    const FREAM_HEAD_BYTE = 0;
    let ES = [  361, 368, 22, 20, 20, 20, 20, 20, 18, 198, 513, 499, 534, 522, 541, 608, 596, 613, 631, 543, 
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
        asserTrue(typeof(err) == undefined);
    }

    let failCatch = function(err) {
        console.info('case catch err : ' + err);
        asserTrue(typeof(err) == undefined);
    }

    function setCallback(audioDecodeProcessor, inputbuffer){
        console.info('case callback');
        audioDecodeProcessor.on('inputBufferAvailable', async(inBuffer) => {
            console.info('inputBufferAvailable');
            console.log(Date.now());
            console.info("inBuffer.index: "+inBuffer.index);
            console.info(inBuffer.index);
            inBuffer.data = inputbuffer.slice(startpoisition + FREAM_HEAD_BYTE, startpoisition + ES[i]); //slice(begin,end) begin包括，end不包括
            console.info('inBuffer.data')
            console.info(inBuffer.data);
            console.info("inBuffer.length");
            console.info(inBuffer.data.byteLength); 
            inBuffer.timeMs = timestamp;
            inBuffer.length = ES[i] - FREAM_HEAD_BYTE;        
            // expect(inBuffer.length).assertEqual(inBuffer.data.byteLength);
            if (i == ES_LENGTH - 1) {
                inBuffer.flags = 1;               
            }
            else{
                inBuffer.flags = 0;
            }
            console.info(inBuffer.flags);
            await audioDecodeProcessor.queueInput(inBuffer) 
            .then(() => {
                console.info('queueInput success');
                timestamp += ES[i]/44.1;
                startpoisition += ES[i];
                i += 1;
            }, failCallback).catch(failCatch);
        });

        audioDecodeProcessor.on('outputBufferAvailable', async(outBuffer) => {
            console.info('outputBufferAvailable');
            let data = outBuffer.data;
            let outputbuffer = data.slice(outBuffer.offset, outBuffer.offset + outBuffer.length);
            writeFile(SAVEPATH,outputbuffer);
            await getOutputMediaDescription().then((mediaDescription) => {console.info(mediaDescription)}, failCallback).catch(failCatch);  

            if (outBuffer.flags == 1){
                await audioDecodeProcessor.stop().then(() => {console.linfo("stop success")}, failCallback).catch(failCatch);

                console.log("try reset");
                await audioDecodeProcessor.reset().then(() => {console.info("reset success")}, failCallback).catch(failCatch);

                console.log("release");
                audioDecodeProcessor = null;
                done();
            }
            await audioDecodeProcessor.releaseOutput(outBuffer).then(() => {}, failCallback).catch(failCatch);  

        });

        audioDecodeProcessor.on('error',(err) => {
            console.info('case error called,errName is ${err}');
        });

        audioDecodeProcessor.on('outputFormatChanged',(description) => {
            console.info('case outputFormatChanged' + description.toString());
        });
        
    }

    function readFile(path){
        try{
            console.info('try read file');
            let stat = Fileio.statSync(path);
            let length = stat.size;
            console.info(`file length is ${length}`);
            let buf = new ArrayBuffer(length);
            let createstream = Fileio.createStreamSync(path,'r+'); 
            createstream.readSync(buf);
            createstream.closeSync();
            return  buf;
        }catch(e){
            console.info("error happens");
            return ''
        }           
    }

    function writeFile(path,buffer){
        try{
            let createstream = Fileio.createStreamSync(path,"wb+");
            let num = createstream.writeSync(buffer);
            createstream.flushSync();
            createstream.closeSync();
        }catch(e){
            console.log(e)
        }
    }

    // function sleep(time){
    //     for (let t = Date.now();Date.now() - t <= time;);
    // }

    // function sleep(time){
    //     return new Promise((resolve) => setTimeout(resolve,time));
    // }

    /*遗留问题：
    1. sleep过程中on('inputBufferAvailable')是否也会被阻塞监听；
    2. on('inputBufferAvailable')回调得到的buffer是否需要先清空再传数据进去
    3. 如何等待outputbuffer全部输出结束了才停止程序？android是用了个循环while(output index >= 0)


    /* *
    * @tc.number    : SUB_MEDIA_Audio_Decoder_Function_01_0100
    * @tc.name      : 001.test Audio decode promise
    * @tc.desc      : basic decode function
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
    */ 



    it('SUB_MEDIA_Audio_Decoder_Function_01_0100', 0, async function (done) {
        console.log("start promise case");
        let audioDecodeProcessor = null;
        let inbuffer = null;
        var bf = new ArrayBuffer(40);
        var mediaDescription = {
                    a1: 0, 
                    a2: 'aac',
                    a3: false,
                    a4:bf,
        }

        await media.createAudioDecoderByMime('audio/mp4a-latm')
        .then((processor) => {console.log("create createAudioDecoder success"); audioDecodeProcessor = processor;}, failCallback).catch(failCatch);  

        console.log("start configure");
        await audioDecodeProcessor.configure(mediaDescription).
        then(() => {console.log("configure success"); inbuffer = readFile(AUDIOPATH)}, failCallback).catch(failCatch);

        // setCallback(audioDecodeProcessor, inbuffer);

        console.log("start prepare");
        await audioDecodeProcessor.prepare().then(() => {console.log("prepare success")}, failCallback).catch(failCatch);

        console.log("start decoding");
        await audioDecodeProcessor.start().then(() => {
            console.log("start success");
            console.log('(start)Date.now(): ' + Date.now());    
            setTimeout(() => {
                console.log("start stop");
                audioDecodeProcessor.stop().then(() => {
                    console.log("stop success");
                    console.log('(stop)Date.now(): ' + Date.now()); 
                    console.log("start reset");
                    audioDecodeProcessor.reset().then(() => {console.log("reset success"); done()}, failCallback).catch(failCatch);
                }, failCallback).catch(failCatch);                 
            }, 3000);
        })
    })
})
         // setTimeout(() => {
            //     console.log(Date.now());
            //     console.log("stop decoding");

            //     audioDecodeProcessor.stop((err) => {
            //         asserTrue(typeof(err) == undefined);
            //         console.log("stop success");
            //         console.log("try reset");
            //         audioDecodeProcessor.reset((err) => {
            //             asserTrue(typeof(err) == undefined);
            //             console.log("reset success");
            //             audioDecodeProcessor = null;
            //             done();

            //     // await audioDecodeProcessor.stop().then(() => {console.log("stop success")}, failCallback).catch(failCatch);
    
            //     // console.log("try reset");
            //     // await audioDecodeProcessor.reset().then(() => {console.log("reset success")}, failCallback).catch(failCatch);
        
            //     // console.log("release");
            //     // audioDecodeProcessor = null;
            //     // done();
            //     //     })
            //         })
            //     })
            // }, 3000);
        // }, failCallback).catch(failCatch);






    /* *
    * @tc.number    : SUB_MEDIA_Audio_Decoder_Function_01_0200
    * @tc.name      : 002.test Audio decode callback
    * @tc.desc      : basic decode function
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
    */ 
/*
//     it('SUB_MEDIA_Audio_Decoder_Function_01_0100', 0, async function (done) {
//         console.log("start callback case");
//         let audioDecodeProcessor = null;
//         var bf = new ArrayBuffer(40);
//         var mediaDescription = {
//                     a1: 0, 
//                     a2: 'aac',
//                     a3: false,
//                     a4:bf,
//         }

//         console.log("start create");
//         media.createAudioDecoderByMime('audio/mp4a-latm', (err, processor) => {
//             console.log("create success");
//             audioDecodeProcessor = processor;
//             console.log("start configure");
//             audioDecodeProcessor.configure(mediaDescription, (err) =>{
//                 asserTrue(typeof(err) == undefined);
//                 console.log("configure success");
//                 let inbuffer = readFile(AUDIOPATH);
//                 setCallback(audioDecodeProcessor,inbuffer);
//                 console.log("start prepare");
//                 audioDecodeProcessor.prepare((err) => {
//                     asserTrue(typeof(err) == undefined);
//                     console.log("prepare success");
//                     console.log("start decoding");
//                     audioDecodeProcessor.start((err) => {
//                         asserTrue(typeof(err) == undefined);
//                         console.log("start success");
//                     })
//                 })
//             })
//         })
//     })
// })

*/
    