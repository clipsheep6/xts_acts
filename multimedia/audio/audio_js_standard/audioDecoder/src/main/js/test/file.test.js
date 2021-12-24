import media from '@ohos.multimedia.media'
import Fileio from '@ohos.fileio'
import mediaLibrary from '@ohos.multimedia.mediaLibrary'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'



describe('AudioDecoderFunc', function () {
    const AUDIOPATH =  '/data/media/test.aac'
    const SAVEPATH = '/data/media/out.txt';
    let readStreamSync = undefined;
    let i = 0;
    let startpoisition = 0;
    let timestamp = 0;
    const FREAM_HEAD_BYTE = 0;
    let dequecnt = 0;
    let enquecnt = 0;
    let isTimeOut  = false;
    let sawInputEOS = false;
    let sawOutputEOS = false;
    let enqueueEOS = false;
    let inputQueue = [];
    let outputQueue = [];
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
        // assertTrue(typeof(err) == undefined);
    }

    let failCatch = function(err) {
        console.info('case catch err : ' + err);
        // assertTrue(typeof(err) == undefined);
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
        let lengthreal = -1;
        lengthreal = readStreamSync.readSync(buf,{length:len});
        console.log('lengthreal: ' + lengthreal);
        return lengthreal;

    }

    

    /* *
    * @tc.number    : SUB_MEDIA_Audio_Decoder_Function_01_0100
    * @tc.name      : 001.test Audio decode promise
    * @tc.desc      : basic decode function
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
    */ 

    it('SUB_MEDIA_Audio_Decoder_Function_01_0100', 0, async function (done) {
        console.log("start fileio case");
        readFile(AUDIOPATH);
        console.log("read file success");
        let buffer = new ArrayBuffer(500);
        let size = getContent(buffer,361);
        console.log("size: " + size);
        let view = new Uint8Array(buffer);
        console.log("view[0]: " + view[0]);
        console.log("view[1]: " + view[1]);
        console.log("view[2]: " + view[2]);
        writeFile(SAVEPATH, buffer);
    })

})
