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

import image from '@ohos.multimedia.image'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import {iccbuf} from './iccbuf'

describe('Image', function () {
    beforeAll(async function () {
        console.info('beforeAll case');
    })

    beforeEach(function () {
        console.info('beforeEach case');
    })

    afterEach(async function () {
        console.info('afterEach case');
    })

    afterAll(async function () {
        console.info('afterAll case');
    })

    function GenPicSource() {
        var data = iccbuf.buffer;
        return image.createImageSource(data);
    }
    async function GenPixelMap() {
        var color = new ArrayBuffer(96);
        var bufferArr = new Uint8Array(color);
        for (var i = 0; i < bufferArr.length; i++) {
            bufferArr[i] = i + 1;
        }

        let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 } }
        return image.createPixelMap(color, opts);
    }

    function Logger(caseName) {
        return {
            myName: caseName,
            log:function(msg) {
                console.info(this.myName+ ' ' + msg);
            }
        }
    }

    async function packing_cbFail(done, testNum, args){
        let logger = Logger(`${testNum}`)
        try {
            let imageSource = GenPicSource();
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource == undefined) {
                console.info(`${testNum} create image source failed`);
                expect(false).assertTrue();
                done();
            }else{
                const imagePackerApi = image.createImagePacker();
                if (imagePackerApi == undefined) {
                console.info(`${testNum} create image packer failed`);
                expect(false).assertTrue();
                done();
            }else{
                imagePackerApi.packing(imageSource, args, (err, data) => {
                    expect(data == undefined).assertTrue();
                    done();
                })
            }
        }
    } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
     }
    
     async function packing_promiseF(done, testNum, args) {
        let logger = Logger(`testNum`)
        try {
            let imageSource = GenPicSource();
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource == undefined) {
                console.info(`${testNum} create image source failed`);
                expect(false).assertTrue();
                done();
            }else{
                const imagePackerApi = image.createImagePacker();
                if (imagePackerApi == undefined) {
                console.info(`${testNum} create image packer failed`);
                expect(false).assertTrue();
                done();
            }else{
                imagePackerApi.packing(imageSource, args).then(data => {
                    expect(data == undefined).assertTrue();
                    done();
                }).catch(error => {
                    console.log(` ${testNum} error: ` + error);
                    expect(true).assertTrue();
                    done();
                })
            }
        }
    } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
    } 

    /**
     * @tc.number    : decodeP3_001
     * @tc.name      : Decode 
     * @tc.desc      : 1.create imagesource
     *                 2.create pixelmap
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
     it('decodeP3_001', 0, async function (done) {
        let logger = Logger('decodeP3_001')
        try {
            let imageSource = GenPicSource();
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let pixelMap =  await imageSource.createPixelMap();
                logger.log("PixelMap " + pixelMap);
                logger.log("PixelMap " + (pixelMap != undefined));
                expect(pixelMap != undefined ).assertTrue();
                done();
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        
    })

    /**
     * @tc.number    : decodeP3_002
     * @tc.name      : Decode -callback
     * @tc.desc      : 1.create imagesource
     *                 2.create pixelmap
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('decodeP3_002', 0, async function (done) {
        let logger = Logger('decodeP3_002')
        try {
            let imageSource = GenPicSource();
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                imageSource.createPixelMap((err,pixelMap)=>{
                    logger.log("PixelMap " + pixelMap);
                    logger.log("PixelMap " + (pixelMap != undefined));
                    expect(pixelMap != undefined ).assertTrue();
                    done();
                })
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
    })

    /**
     * @tc.number    : encodeP3_001
     * @tc.name      : Encode -callback
     * @tc.desc      : 1.create imagesource
     *                 2.createImagePacker
     *                 3.packing
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
     it('encodeP3_001', 0, async function (done) {
        let logger = Logger('encodeP3_001')
        let testNum = 'encodeP3_001'
        try {
            let imageSource = GenPicSource();
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource == undefined) {
                console.info(`${testNum} create image source failed`);
                expect(false).assertTrue();
                done();
            }else{
                const imagePackerApi = image.createImagePacker();
                if (imagePackerApi == undefined) {
                console.info(`${testNum} create image packer failed`);
                expect(false).assertTrue();
                done();
            }else{
                let packOpts = { format:["image/jpeg"], quality:90 }
                imagePackerApi.packing(imageSource, packOpts, (err, data) => {
                    expect(data != undefined).assertTrue();
                    var dataArr = new Uint8Array(data);
                    console.info(`${testNum} dataArr.length=` + dataArr.length);
                    for (var i = 0; i < dataArr.length; i++) {
                        console.info(`dataArr[` + i + `]=` + dataArr[i]);
                    }
                    var strToBase64 = data.toString('base64');
                    console.info(`${testNum} strToBase64=[` + strToBase64.toString() + `]`);
                    var strToBase64_2 = dataArr.toString('base64');
                    console.info(`${testNum} strToBase64_2=[` + strToBase64_2.toString() + `]`);
                    done();
                })
            }
        }
    } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        
    })
    /**
     * @tc.number    : encodeP3_002
     * @tc.name      : Encode -promise
     * @tc.desc      : 1.create imagesource
     *                 2.createImagePacker
     *                 3.packing
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
     it('encodeP3_002', 0, async function (done) {
        let logger = Logger('encodeP3_002')
        let testNum = 'encodeP3_002'
        try {
            let imageSource = GenPicSource();
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource == undefined) {
                console.info(`${testNum} create image source failed`);
                expect(false).assertTrue();
                done();
            }else{
                const imagePackerApi = image.createImagePacker();
                if (imagePackerApi == undefined) {
                console.info(`${testNum} create image packer failed`);
                expect(false).assertTrue();
                done();
            }else{
                let packOpts = { format:["image/jpeg"], quality:90 }
                imagePackerApi.packing(imageSource, packOpts).then(data => {
                    expect(data != undefined).assertTrue();
                    var dataArr = new Uint8Array(data);
                    console.info(`${testNum} dataArr.length=` + dataArr.length);
                    for (var i = 0; i < dataArr.length; i++) {
                        console.info(`dataArr[` + i + `]=` + dataArr[i]);
                    }
                    var strToBase64 = data.toString('base64');
                    console.info(`${testNum} strToBase64=[` + strToBase64.toString() + `]`);
                    var strToBase64_2 = dataArr.toString('base64');
                    console.info(`${testNum} strToBase64_2=[` + strToBase64_2.toString() + `]`);
                    done();
                }).catch(error => {
                    console.log('encodeP3_002 error: ' + error);
                    expect(false).assertTrue();
                    done();
                })
            }
        }
    } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }   
    })

    /**
     * @tc.number    : encodeP3_003
     * @tc.name      : Encode -callback-
     * @tc.desc      : 1.create imagesource
     *                 2.createImagePacker
     *                 3.packing
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('encodeP3_003', 0, async function (done) {
        let packOpts = { format:["image/gif"], quality:90 }
        packing_cbFail(done, 'encodeP3_003', packOpts)
    })

    /**
     * @tc.number    : encodeP3_004
     * @tc.name      : Encode -callback-wrong format
     * @tc.desc      : 1.create imagesource
     *                 2.createImagePacker
     *                 3.packing
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('encodeP3_004', 0, async function (done) {
        let packOpts = { format:["image/jpeg"], quality:200 }
        packing_cbFail(done, 'encodeP3_004', packOpts)     
    })

    /**
     * @tc.number    : encodeP3_005
     * @tc.name      : Encode -callback-no quality
     * @tc.desc      : 1.create imagesource
     *                 2.createImagePacker
     *                 3.packing
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('encodeP3_005', 0, async function (done) {
        let packOpts = { format:["image/jpeg"] }
        packing_cbFail(done, 'encodeP3_005', packOpts)     
    })

    /**
     * @tc.number    : encodeP3_006
     * @tc.name      : Encode -callback-no format
     * @tc.desc      : 1.create imagesource
     *                 2.createImagePacker
     *                 3.packing
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('encodeP3_006', 0, async function (done) {
        let packOpts = {  quality:50 }
        packing_cbFail(done, 'encodeP3_006', packOpts)      
    })
    
    /**
     * @tc.number    : encodeP3_007
     * @tc.name      : Encode -promise
     * @tc.desc      : 1.create imagesource
     *                 2.createImagePacker
     *                 3.packing
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('encodeP3_007', 0, async function (done) {
        let packOpts = { format:["image/gif"], quality:90 }
        packing_promiseF(done, 'encodeP3_007', packOpts)       
    })

    /**
     * @tc.number    : encodeP3_008
     * @tc.name      : Encode -promise
     * @tc.desc      : 1.create imagesource
     *                 2.createImagePacker
     *                 3.packing
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('encodeP3_008', 0, async function (done) {
        let packOpts = { format:["image/jpeg"], quality:101 }
        packing_promiseF(done, 'encodeP3_008', packOpts)           
    })   

    /**
     * @tc.number    : encodeP3_009
     * @tc.name      : Encode -promise -no quality
     * @tc.desc      : 1.create imagesource
     *                 2.createImagePacker
     *                 3.packing
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('encodeP3_009', 0, async function (done) {
        let packOpts = { format:["image/jpeg"] }
        packing_promiseF(done, 'encodeP3_009', packOpts)        
    })

    /**
     * @tc.number    : encodeP3_010
     * @tc.name      : Encode -promise -no format
     * @tc.desc      : 1.create imagesource
     *                 2.createImagePacker
     *                 3.packing
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('encodeP3_010', 0, async function (done) {
       let packOpts = { quality:100 }
       packing_promiseF(done, 'encodeP3_010', packOpts)        
    })

})