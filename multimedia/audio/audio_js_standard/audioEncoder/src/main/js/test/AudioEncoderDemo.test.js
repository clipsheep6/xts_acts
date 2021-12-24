import media from '@ohos.multimedia.media'
import Fileio from '@ohos.fileio'
import mediaLibrary from '@ohos.multimedia.mediaLibrary'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'



describe('AudioEncoderFunc', function () {
    const AUDIOPATH =  '/data/media/s16le.pcm'
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
    let ES = [0, 1024, 1024, 1024, 1024];
    const ES_LENGTH = 4;

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


    /* push inputbuffers into codec  */
    async function enqueueAllInputs(audioEncodeProcessor, queue){
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
                console.log('read frame from file success');
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
            await audioEncodeProcessor.queueInput(inputobject).then(() => {
                enqueInputCnt += 1;
                console.log('enqueInputCnt:' + enqueInputCnt);
                console.info('queueInput success');
            }, failCallback).catch(failCatch);
        }
    }


    /* get outputbuffers from codec  */
    async function dequeueAllOutputs(audioEncodeProcessor, queue){
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
                await audioEncodeProcessor.releaseOutput(outputobject).then(() => {
                    console.info('release output success');
                    releaseOutputCnt += 1;
                    console.log('release output count:' + releaseOutputCnt);
                }, failCallback).catch(failCatch);
            }
            else{
                console.log("sawOutputEOS")
                await audioEncodeProcessor.stop().then(() => {console.log("stop success")}, failCallback).catch(failCatch);
                await audioEncodeProcessor.reset().then(() => {console.log("reset success")}, failCallback).catch(failCatch);
                audioEncodeProcessor = null;
                done();
            }
        } 
    }


    function setCallback(audioEncodeProcessor){
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
            pushOutputCnt += 1;
            console.log('pushOutputCnt: ' + pushOutputCnt);  
            outputQueue.push(outBuffer);
            await dequeueAllOutputs(audioEncodeProcessor, outputQueue);
        });

        audioEncodeProcessor.on('error',(err) => {
            console.info('case error called,errName is' + err);
        });

        audioEncodeProcessor.on('outputFormatChanged',(format) => {
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
    * @tc.number    : SUB_MEDIA_Audio_Encoder_Function_01_0100
    * @tc.name      : 001.test Audio encode promise
    * @tc.desc      : basic encode function
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
    */ 

    it('SUB_MEDIA_Audio_Encoder_Function_01_0100', 0, async function (done) {
        console.log("start promise case");
        let audioEncodeProcessor = null;
        let mediaDescription = {
                    "channel_count": 2, 
                    "sample_rate": 48000,
                    "audio_raw_format":4,
        }

        await media.createAudioEncoderByMime('audio/raw')
        .then((processor) => {console.log("create createAudioEncoder success"); audioEncodeProcessor = processor;}, failCallback).catch(failCatch);  

        console.log("start configure");
        await audioEncodeProcessor.configure(mediaDescription).
        then(() => {console.log("configure success"); readFile(AUDIOPATH)}, failCallback).catch(failCatch);

        setCallback(audioEncodeProcessor);

        console.log("start prepare");
        await audioEncodeProcessor.prepare().then(() => {console.log("prepare success")}, failCallback).catch(failCatch);

        console.log("start decoding");
        await audioEncodeProcessor.start().then(() => {console.log("start success")}, failCallback).catch(failCatch);
    })




    /* *
    * @tc.number    : SUB_MEDIA_Audio_Encoder_Function_01_0200
    * @tc.name      : 001.test Audio encode promise
    * @tc.desc      : basic encode function
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
    */ 
    it('SUB_MEDIA_Audio_Encoder_Function_01_0200', 0, async function (done) {
        console.log("start callback case");
        let audioEncodeProcessor = null;
        let mediaDescription = {
            "channel_count": 2, 
            "sample_rate": 48000,
            "audio_raw_format":4,
        }


        console.log("start create");
        media.createAudioEncoderByMime('audio/raw', (err, processor) => {
            console.log("create success");
            audioEncodeProcessor = processor;
            console.log("start configure");
            audioEncodeProcessor.configure(mediaDescription, (err) =>{
                // expect(err).assertUndefined();
                console.log("configure success");
                readFile(AUDIOPATH);
                console.log("start prepare");
                setCallback(audioEncodeProcessor);
                audioEncodeProcessor.prepare((err) => {
                    // expect(err).assertUndefined();
                    console.log("prepare success");
                    console.log("start decoding");
                    audioEncodeProcessor.start((err) => {
                        // expect(err).assertUndefined();
                        console.log("start success");
                    })
                })
            })
        })
    })
})


    