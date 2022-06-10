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
import { testPng, testJpg, base64Image, scale2x1, translate3x1, rotate90, flipH, testBmp, testGif, crop3x3, scale1x4, setAlpha8, translate1x3 } from './testImg2'


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

    function genPicSource() {
        var data = testPng.buffer;
        return image.createImageSource(data);
    }

    async function genPixelMap() {
        var color = new ArrayBuffer(96);
        var bufferArr = new Uint8Array(color);
        for (var i = 0; i < bufferArr.length; i++) {
            bufferArr[i] = i + 1;
        }

        let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 } }
        return image.createPixelMap(color, opts);
    }

    function loger(caseName) {
        return {
            myName: caseName,
            log: function (msg) {
                console.info(this.myName + ' ' + msg);
            }
        }
    }
    function fNumber(num) {
        if (num > 99) {
            return "" + num;
        }
        if (num > 9) {
            return "" + num;
        }
        return " " + num;
    }
    function dumpArray(logger, arr, row) {
        var tmpS = ''
        for (var i = 0; i < arr.length; i++) {
            tmpS = tmpS + fNumber(arr[i]) + ", "
            if (i % row == (row - 1)) {
                logger.log(tmpS);
                tmpS = '';
            }
        }
    }

    async function dumpPixelmap(logger, pixelmap) {
        var imageInfo = await pixelmap.getImageInfo();
        var pixelSize = pixelmap.getPixelBytesNumber();
        var readBuffer = new ArrayBuffer(pixelSize);
        await pixelmap.readPixelsToBuffer(readBuffer);
        var bufferArr = new Uint8Array(readBuffer);
        dumpArray(logger, bufferArr, imageInfo.size.width * 4);
    }

    /**
     * @tc.number    : frmwk_001
     * @tc.name      : BASE64 Image
     * @tc.desc      : 1.create imagesource with base64Image
     *               : 2.create pixelmap
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_001', 0, async function (done) {
        let logger = loger('frmwk_001')
        try {
            const imageSource = image.createImageSource(base64Image)
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let pixelMap = await imageSource.createPixelMap();
                logger.log("PixelMap " + (pixelMap != undefined));
                expect(pixelMap != undefined).assertTrue();
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_002
     * @tc.name      : Pixelmap Scale-promise
     * @tc.desc      : 1.create pixelmap
     *               : 2.call scale
     *               : 3.get pixelbytesnumber
     *               : 4.read pixels to buffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_002', 0, async function (done) {
        let logger = loger('frmwk_002')
        try {
            var pixelMap = await genPixelMap()
            logger.log("pixelMap " + (pixelMap != undefined));
            if (pixelMap != undefined) {
                var orgInfo = await pixelMap.getImageInfo()
                await pixelMap.scale(2.0, 1.0);
                var newInfo = await pixelMap.getImageInfo()
                if (newInfo.size.width != orgInfo.size.width * 2) {
                    logger.log(`org width ${orgInfo.size.width}, new width ${newInfo.size.width} `);
                    expect(false).assertTrue();
                    done()
                }
                var pixelSize = pixelMap.getPixelBytesNumber();
                logger.log(`new pixel size ${pixelSize}`);
                var readBuffer = new ArrayBuffer(pixelSize);
                await pixelMap.readPixelsToBuffer(readBuffer);
                var bufferArr2 = new Uint8Array(readBuffer);
                for (var i = 0; i < bufferArr2.length; i++) {
                    if (bufferArr2[i] != scale2x1[i]) {
                        logger.log(`pixel[${i}] current[${bufferArr2[i]}] target[${scale2x1[i]}]`);
                        expect(false).assertTrue();
                        done();
                    }
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_003
     * @tc.name      : Pixelmap Scale-promise
     * @tc.desc      : 1.create pixelmap
     *               : 2.call scale
     *               : 3.get pixelbytesnumber
     *               : 4.read pixels to buffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_003', 0, async function (done) {
        let logger = loger('frmwk_003')
        try {
            var pixelMap = await genPixelMap()
            logger.log("pixelMap " + (pixelMap != undefined));
            if (pixelMap != undefined) {
                var orgInfo = await pixelMap.getImageInfo()
                await pixelMap.scale(1.0, 4.0);
                var newInfo = await pixelMap.getImageInfo()
                if (newInfo.size.height != orgInfo.size.height * 4) {
                    logger.log(`org height ${orgInfo.size.height}, new height ${newInfo.size.height} `);
                    expect(false).assertTrue();
                    done()
                }
                var pixelSize = pixelMap.getPixelBytesNumber();
                logger.log(`new pixel size ${pixelSize}`);
                var readBuffer = new ArrayBuffer(pixelSize);
                await pixelMap.readPixelsToBuffer(readBuffer);
                var bufferArr2 = new Uint8Array(readBuffer);
                for (var i = 0; i < bufferArr2.length; i++) {
                    if (bufferArr2[i] != scale1x4[i]) {
                        logger.log(`pixel[${i}] current[${bufferArr2[i]}] target[${scale1x4[i]}]`);
                        expect(false).assertTrue();
                        done();
                    }
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_004
     * @tc.name      : Pixelmap Scale-callback
     * @tc.desc      : 1.create pixelmap
     *               : 2.call scale
     *               : 3.get pixelbytesnumber
     *               : 4.read pixels to buffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_004', 0, async function (done) {
        let logger = loger('frmwk_004')
        try {
            var pixelMap = await genPixelMap()
            logger.log("pixelMap " + (pixelMap != undefined));
            if (pixelMap != undefined) {
                var orgInfo = await pixelMap.getImageInfo()
                pixelMap.scale(1.0, 4.0, async (err) => {
                    var newInfo = await pixelMap.getImageInfo()
                    if (newInfo.size.height != orgInfo.size.height * 4) {
                        logger.log(`org height ${orgInfo.size.height}, new height ${newInfo.size.height} `);
                        expect(false).assertTrue();
                        done()
                    }
                    var pixelSize = pixelMap.getPixelBytesNumber();
                    logger.log(`new pixel size ${pixelSize}`);
                    var readBuffer = new ArrayBuffer(pixelSize);
                    await pixelMap.readPixelsToBuffer(readBuffer);
                    var bufferArr2 = new Uint8Array(readBuffer);
                    for (var i = 0; i < bufferArr2.length; i++) {
                        if (bufferArr2[i] != scale1x4[i]) {
                            logger.log(`pixel[${i}] current[${bufferArr2[i]}] target[${scale1x4[i]}]`);
                            expect(false).assertTrue();
                            done();
                        }
                    }
                    expect(true).assertTrue();
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
     * @tc.number    : frmwk_005
     * @tc.name      : Pixelmap Translate -promise
     * @tc.desc      : 1.create pixelmap
     *               : 2.call translate
     *               : 3.get pixelbytesnumber
     *               : 4.read pixels to buffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_005', 0, async function (done) {
        let logger = loger('frmwk_005')
        try {
            var pixelMap = await genPixelMap()
            logger.log("pixelMap " + (pixelMap != undefined));
            if (pixelMap != undefined) {
                var orgInfo = await pixelMap.getImageInfo()
                await pixelMap.translate(3.0, 1.0);
                var newInfo = await pixelMap.getImageInfo()
                if (newInfo.size.width != orgInfo.size.width + 3) {
                    logger.log(`org width ${orgInfo.size.width}, new width ${newInfo.size.width} `);
                    expect(false).assertTrue();
                    done();
                }
                var pixelSize = pixelMap.getPixelBytesNumber();
                logger.log(`new pixel size ${pixelSize}`);
                var readBuffer = new ArrayBuffer(pixelSize);
                await pixelMap.readPixelsToBuffer(readBuffer);
                var bufferArr2 = new Uint8Array(readBuffer);
                for (var i = 0; i < bufferArr2.length; i++) {
                    if (bufferArr2[i] != translate3x1[i]) {
                        logger.log(`pixel[${i}] current[${bufferArr2[i]}] target[${translate3x1[i]}]`);
                        expect(false).assertTrue();
                        done();
                    }
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_006
     * @tc.name      : Pixelmap Translate-promise
     * @tc.desc      : 1.create pixelmap
     *               : 2.call translate
     *               : 3.get pixelbytesnumber
     *               : 4.read pixels to buffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_006', 0, async function (done) {
        let logger = loger('frmwk_006')
        try {
            var pixelMap = await genPixelMap()
            logger.log("pixelMap " + (pixelMap != undefined));
            if (pixelMap != undefined) {
                var orgInfo = await pixelMap.getImageInfo()
                await pixelMap.translate(1.0, 3.0);
                var newInfo = await pixelMap.getImageInfo()
                if (newInfo.size.height != orgInfo.size.height + 3) {
                    logger.log(`org height ${orgInfo.size.height}, new height ${newInfo.size.height} `);
                    expect(false).assertTrue();
                    done();
                }
                var pixelSize = pixelMap.getPixelBytesNumber();
                logger.log(`new pixel size ${pixelSize}`);
                var readBuffer = new ArrayBuffer(pixelSize);
                await pixelMap.readPixelsToBuffer(readBuffer);
                var bufferArr2 = new Uint8Array(readBuffer);
                for (var i = 0; i < bufferArr2.length; i++) {
                    if (bufferArr2[i] != translate1x3[i]) {
                        logger.log(`pixel[${i}] current[${bufferArr2[i]}] target[${translate1x3[i]}]`);
                        expect(false).assertTrue();
                        done();
                    }
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        expect(true).assertTrue();
        done();
    })

    /**
     * @tc.number    : frmwk_007
     * @tc.name      : Pixelmap Translate-callback
     * @tc.desc      : 1.create pixelmap
     *               : 2.call translate
     *               : 3.get pixelbytesnumber
     *               : 4.read pixels to buffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_007', 0, async function (done) {
        let logger = loger('frmwk_007')
        try {
            var pixelMap = await genPixelMap()
            logger.log("pixelMap " + (pixelMap != undefined));
            if (pixelMap != undefined) {
                var orgInfo = await pixelMap.getImageInfo()
                pixelMap.translate(1.0, 3.0, async (err) => {
                    var newInfo = await pixelMap.getImageInfo()
                    if (newInfo.size.height != orgInfo.size.height + 3) {
                        logger.log(`org height ${orgInfo.size.height}, new height ${newInfo.size.height} `);
                        expect(false).assertTrue();
                        done();
                    }
                    var pixelSize = pixelMap.getPixelBytesNumber();
                    logger.log(`new pixel size ${pixelSize}`);
                    var readBuffer = new ArrayBuffer(pixelSize);
                    await pixelMap.readPixelsToBuffer(readBuffer);
                    var bufferArr2 = new Uint8Array(readBuffer);
                    for (var i = 0; i < bufferArr2.length; i++) {
                        if (bufferArr2[i] != translate1x3[i]) {
                            logger.log(`pixel[${i}] current[${bufferArr2[i]}] target[${translate1x3[i]}]`);
                            expect(false).assertTrue();
                            done();
                        }
                    }
                })
                expect(true).assertTrue();
                done();
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }

    })

    /**
     * @tc.number    : frmwk_008
     * @tc.name      : Pixelmap Rotate-promise
     * @tc.desc      : 1.create pixelmap
     *               : 2.call rotate
     *               : 3.get pixelbytesnumber
     *               : 4.read pixels to buffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_008', 0, async function (done) {
        let logger = loger('frmwk_008')
        try {
            var pixelMap = await genPixelMap()
            logger.log("pixelMap " + (pixelMap != undefined));
            if (pixelMap != undefined) {
                var orgInfo = await pixelMap.getImageInfo()
                await pixelMap.rotate(90.0);
                var newInfo = await pixelMap.getImageInfo()
                if (newInfo.size.width != orgInfo.size.height) {
                    logger.log(`org height ${orgInfo.size.height}, new width ${newInfo.size.width} `);
                    expect(newInfo.size.width == orgInfo.size.height).assertTrue();
                    done();
                    return;
                }
                var pixelSize = pixelMap.getPixelBytesNumber();
                logger.log(`new pixel size ${pixelSize}`);
                var readBuffer = new ArrayBuffer(pixelSize);
                await pixelMap.readPixelsToBuffer(readBuffer);
                var bufferArr2 = new Uint8Array(readBuffer);
                for (var i = 0; i < bufferArr2.length; i++) {
                    if (bufferArr2[i] != rotate90[i]) {
                        logger.log(`pixel[${i}] current[${bufferArr2[i]}] target[${rotate90[i]}]`);
                        expect(false).assertTrue();
                        done();
                    }
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_009
     * @tc.name      : Pixelmap Rotate-callback
     * @tc.desc      : 1.create pixelmap
     *               : 2.call rotate
     *               : 3.get pixelbytesnumber
     *               : 4.read pixels to buffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_009', 0, async function (done) {
        let logger = loger('frmwk_009')
        try {
            var pixelMap = await genPixelMap()
            logger.log("pixelMap " + (pixelMap != undefined));
            if (pixelMap != undefined) {
                var orgInfo = await pixelMap.getImageInfo()
                pixelMap.rotate(90.0, async (err) => {
                    var newInfo = await pixelMap.getImageInfo()
                    if (newInfo.size.width != orgInfo.size.height) {
                        logger.log(`org height ${orgInfo.size.height}, new width ${newInfo.size.width} `);
                        expect(newInfo.size.width == orgInfo.size.height).assertTrue();
                        done();
                        return;
                    }
                    var pixelSize = pixelMap.getPixelBytesNumber();
                    logger.log(`new pixel size ${pixelSize}`);
                    var readBuffer = new ArrayBuffer(pixelSize);
                    await pixelMap.readPixelsToBuffer(readBuffer);
                    var bufferArr2 = new Uint8Array(readBuffer);
                    for (var i = 0; i < bufferArr2.length; i++) {
                        if (bufferArr2[i] != rotate90[i]) {
                            logger.log(`pixel[${i}] current[${bufferArr2[i]}] target[${rotate90[i]}]`);
                            expect(false).assertTrue();
                            done();
                        }
                    }
                })
                expect(true).assertTrue();
                done();
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }

    })

    /**
     * @tc.number    : frmwk_010
     * @tc.name      : Pixelmap Flip-promise
     * @tc.desc      : 1.create pixelmap
     *               : 2.call rotate
     *               : 3.get pixelbytesnumber
     *               : 4.read pixels to buffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_010', 0, async function (done) {
        let logger = loger('frmwk_010')
        try {
            var pixelMap = await genPixelMap()
            logger.log("pixelMap " + (pixelMap != undefined));
            if (pixelMap != undefined) {
                var orgInfo = await pixelMap.getImageInfo()
                await pixelMap.flip(false, true);
                var newInfo = await pixelMap.getImageInfo()
                if (newInfo.size.width != orgInfo.size.width) {
                    logger.log(`org width ${orgInfo.size.width}, new width ${newInfo.size.width} `);
                    expect(false).assertTrue();
                    done();
                }
                var pixelSize = pixelMap.getPixelBytesNumber();
                logger.log(`new pixel size ${pixelSize}`);
                var readBuffer = new ArrayBuffer(pixelSize);
                await pixelMap.readPixelsToBuffer(readBuffer);
                var bufferArr2 = new Uint8Array(readBuffer);
                for (var i = 0; i < bufferArr2.length; i++) {
                    if (bufferArr2[i] != flipH[i]) {
                        logger.log(`pixel[${i}] current[${bufferArr2[i]}] target[${flipH[i]}]`);
                        expect(false).assertTrue();
                        done();
                    }
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_011
     * @tc.name      : Pixelmap Flip-callback
     * @tc.desc      : 1.create pixelmap
     *               : 2.call rotate
     *               : 3.get pixelbytesnumber
     *               : 4.read pixels to buffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_011', 0, async function (done) {
        let logger = loger('frmwk_011')
        try {
            var pixelMap = await genPixelMap()
            logger.log("pixelMap " + (pixelMap != undefined));
            if (pixelMap != undefined) {
                var orgInfo = await pixelMap.getImageInfo()
                pixelMap.flip(false, true, async (err) => {
                    var newInfo = await pixelMap.getImageInfo()
                    if (newInfo.size.width != orgInfo.size.width) {
                        logger.log(`org width ${orgInfo.size.width}, new width ${newInfo.size.width} `);
                        expect(false).assertTrue();
                        done();
                    }
                    var pixelSize = pixelMap.getPixelBytesNumber();
                    logger.log(`new pixel size ${pixelSize}`);
                    var readBuffer = new ArrayBuffer(pixelSize);
                    await pixelMap.readPixelsToBuffer(readBuffer);
                    var bufferArr2 = new Uint8Array(readBuffer);
                    for (var i = 0; i < bufferArr2.length; i++) {
                        if (bufferArr2[i] != flipH[i]) {
                            logger.log(`pixel[${i}] current[${bufferArr2[i]}] target[${flipH[i]}]`);
                            expect(false).assertTrue();
                            done();
                        }
                    }
                })
                expect(true).assertTrue();
                done();
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }

    })

    /**
     * @tc.number    : frmwk_012
     * @tc.name      : isSupportAlpha SetSupportAlpha
     * @tc.desc      : 1.create imagesource
     *               : 2.create pixelmap
     *               : 3.call setAlphaAble
     *               : 4.call isSupportAlpha
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_012', 0, async function (done) {
        let logger = loger('frmwk_012')
        try {
            let imageSource = genPicSource();
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let pixelMap = await imageSource.createPixelMap();
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    var supportAlpha = pixelMap.isSupportAlpha();
                    logger.log("isSupportAlpha before " + supportAlpha);
                    pixelMap.setAlphaAble(false);
                    var supportAlpha1 = pixelMap.isSupportAlpha();
                    logger.log("isSupportAlpha after " + supportAlpha1);
                    expect(supportAlpha1 == false).assertTrue();
                    done();
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })
    /**
     * @tc.number    : frmwk_013
     * @tc.name      : createAlphaPixelmap-promise
     * @tc.desc      : 1.create imagesource
     *               : 2.create pixelmap
     *               : 3.create AlphaPixelmap
     *               : 4.call getImageInfo
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_013', 0, async function (done) {
        let logger = loger('frmwk_013')
        try {
            let imageSource = genPicSource();
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let pixelMap = await imageSource.createPixelMap();
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    var alphaPixelMap = await pixelMap.createAlphaPixelmap();
                    logger.log("AlphaPixelMap " + alphaPixelMap);
                    if (alphaPixelMap != undefined) {
                        var imageInfo = await alphaPixelMap.getImageInfo();
                        logger.log("AlphaPixelMap pixelformat " + imageInfo.pixelFormat);
                        expect(imageInfo.pixelFormat == 6).assertTrue();
                        done();
                    }
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_014
     * @tc.name      : createAlphaPixelmap-callback
     * @tc.desc      : 1.create imagesource
     *               : 2.create pixelmap
     *               : 3.create AlphaPixelmap
     *               : 4.call getImageInfo
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_014', 0, async function (done) {
        let logger = loger('frmwk_014')
        try {
            let imageSource = genPicSource();
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let pixelMap = await imageSource.createPixelMap();
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    pixelMap.createAlphaPixelmap(async (err, alphaPixelMap) => {
                        logger.log("AlphaPixelMap " + alphaPixelMap);
                        if (alphaPixelMap != undefined) {
                            var imageInfo = await alphaPixelMap.getImageInfo();
                            logger.log("AlphaPixelMap pixelformat " + imageInfo.pixelFormat);
                            expect(imageInfo.pixelFormat == 6).assertTrue();
                            done();
                        }
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
     * @tc.number    : frmwk_015
     * @tc.name      : createAlphaPixelmap-Jpg
     * @tc.desc      : 1.create imagesource
     *               : 2.create pixelmap
     *               : 3.create AlphaPixelmap
     *               : 4.call getImageInfo
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_015', 0, async function (done) {
        let logger = loger('frmwk_015')
        try {
            var data = testJpg.buffer;
            let imageSource = image.createImageSource(data);
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let pixelMap = await imageSource.createPixelMap();
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    var alphaPixelMap = await pixelMap.createAlphaPixelmap();
                    logger.log("AlphaPixelMap " + alphaPixelMap);
                    if (alphaPixelMap != undefined) {
                        var imageInfo = await alphaPixelMap.getImageInfo();
                        logger.log("AlphaPixelMap pixelformat " + imageInfo.pixelFormat);
                        expect(imageInfo.pixelFormat == 6).assertTrue();
                        done();
                    }
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_016
     * @tc.name      : createAlphaPixelmap
     * @tc.desc      : 1.create imagesource
     *               : 2.create pixelmap
     *               : 3.create AlphaPixelmap
     *               : 4.call getImageInfo
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_016', 0, async function (done) {
        let logger = loger('frmwk_016')
        try {
            var data = testBmp.buffer;
            let imageSource = image.createImageSource(data);
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let pixelMap = await imageSource.createPixelMap();
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    var alphaPixelMap = await pixelMap.createAlphaPixelmap();
                    logger.log("AlphaPixelMap " + alphaPixelMap);
                    if (alphaPixelMap != undefined) {
                        var imageInfo = await alphaPixelMap.getImageInfo();
                        logger.log("AlphaPixelMap pixelformat " + imageInfo.pixelFormat);
                        expect(imageInfo.pixelFormat == 6).assertTrue();
                        done();
                    }
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_017
     * @tc.name      : createAlphaPixelmap
     * @tc.desc      : 1.create imagesource
     *               : 2.create pixelmap
     *               : 3.create AlphaPixelmap
     *               : 4.call getImageInfo
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_017', 0, async function (done) {
        let logger = loger('frmwk_017')
        try {
            var data = testGif.buffer;
            let imageSource = image.createImageSource(data);
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let pixelMap = await imageSource.createPixelMap();
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    var alphaPixelMap = await pixelMap.createAlphaPixelmap();
                    logger.log("AlphaPixelMap " + alphaPixelMap);
                    if (alphaPixelMap != undefined) {
                        var imageInfo = await alphaPixelMap.getImageInfo();
                        logger.log("AlphaPixelMap pixelformat " + imageInfo.pixelFormat);
                        expect(imageInfo.pixelFormat == 6).assertTrue();
                        done();
                    }
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })


    /**
     * @tc.number    : frmwk_018
     * @tc.name      : setAlpha-promise
     * @tc.desc      : 1.create pixelmap
     *               : 2.setAlpha
     *               : 3.get PixelBytesNumber
     *               : 4.read Pixels To Buffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
     it('frmwk_018', 0, async function (done) {
        let logger = loger('frmwk_018');
        var res = true;
        try {
            var pixelMap = await genPixelMap()
            logger.log("pixelMap " + (pixelMap != undefined));
            if (pixelMap != undefined) {
                await pixelMap.setAlpha(0.8)
                var pixelSize = pixelMap.getPixelBytesNumber();
                logger.log(`new pixel size ${pixelSize}`);
                var readBuffer = new ArrayBuffer(pixelSize);
                await pixelMap.readPixelsToBuffer(readBuffer);
                var bufferArr2 = new Uint8Array(readBuffer);
                for (var i = 0; i < bufferArr2.length; i++) {
                    if (bufferArr2[i] != setAlpha8[i]) {
                        res = false;
                        logger.log(`pixel[${i}] current[${bufferArr2[i]}] target[${setAlpha8[i]}]`);
                        expect(false).assertTrue();
                        break;
                    }
                }
                if (res) {
                    console.info('frmwk_018 success');
                    expect(true).assertTrue();
                }
                done();
            }
            
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_019
     * @tc.name      : setAlpha -callback
     * @tc.desc      : 1.create pixelmap
     *               : 2.setAlpha
     *               : 3.get PixelBytesNumber
     *               : 4.read Pixels To Buffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_019', 0, async function (done) {
        let logger = loger('frmwk_019');
        var res = true;
        try {
            var pixelMap = await genPixelMap()
            logger.log("pixelMap " + (pixelMap != undefined));
            if (pixelMap != undefined) {
                pixelMap.setAlpha(0.8, async (err) => {
                    var pixelSize = pixelMap.getPixelBytesNumber();
                    logger.log(`new pixel size ${pixelSize}`);
                    var readBuffer = new ArrayBuffer(pixelSize);
                    await pixelMap.readPixelsToBuffer(readBuffer);
                    var bufferArr2 = new Uint8Array(readBuffer);
                    for (var i = 0; i < bufferArr2.length; i++) {
                        if (bufferArr2[i] != setAlpha8[i]) {
                            res = false;
                            logger.log(`pixel[${i}] current[${bufferArr2[i]}] target[${setAlpha8[i]}]`);
                            expect(false).assertTrue();
                            break;
                        }
                    }
                    if (res) {
                        console.info('frmwk_019 success');
                        expect(true).assertTrue();
                    }
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
     * @tc.number    : frmwk_020
     * @tc.name      : SourceOptions getDensity fitDensity
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap
     *               : 3.getDensity
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_020', 0, async function (done) {
        let logger = loger('frmwk_020')
        try {
            var data = testPng.buffer;
            var sourceOptions = { sourceDensity: 120 };
            let imageSource = image.createImageSource(data, sourceOptions);
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let pixelMap = await imageSource.createPixelMap();
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    var density = pixelMap.getDensity();
                    logger.log("Density " + density);
                    expect(density == 120).assertTrue();
                    done();
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_021
     * @tc.name      : fitDensity
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap with fitDensity
     *               : 3.getDensity
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_021', 0, async function (done) {
        let logger = loger('frmwk_021')
        try {
            var data = testPng.buffer;
            var sourceOptions = { sourceDensity: 120 };
            let imageSource = image.createImageSource(data, sourceOptions);
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let decodingOptions = { fitDensity: 240 };
                let pixelMap = await imageSource.createPixelMap(decodingOptions);
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    var density = pixelMap.getDensity();
                    logger.log("Density " + density);
                    expect(density == 240).assertTrue();
                    done();
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_022
     * @tc.name      : setDensity
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap
     *               : 3.set Density
     *               : 4.getDensity
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_022', 0, async function (done) {
        let logger = loger('frmwk_022')
        try {
            var data = testPng.buffer;
            var sourceOptions = { sourceDensity: 120 };
            let imageSource = image.createImageSource(data, sourceOptions);
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let pixelMap = await imageSource.createPixelMap();
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    var density = pixelMap.getDensity();
                    logger.log("Density1 " + density);
                    pixelMap.setDensity(360);
                    density = pixelMap.getDensity();
                    logger.log("Density2 " + density);
                    expect(density == 360).assertTrue();
                    done();
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_023
     * @tc.name      : SourceOptions getDensity fitDensity
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap
     *               : 3.getDensity
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_023', 0, async function (done) {
        let logger = loger('frmwk_023')
        try {
            var data = testJpg.buffer;
            var sourceOptions = { sourceDensity: 120 };
            let imageSource = image.createImageSource(data, sourceOptions);
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let pixelMap = await imageSource.createPixelMap();
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    var density = pixelMap.getDensity();
                    logger.log("Density " + density);
                    expect(density == 120).assertTrue();
                    done();
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_024
     * @tc.name      : SourceOptions getDensity fitDensity
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap
     *               : 3.getDensity
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_024', 0, async function (done) {
        let logger = loger('frmwk_024')
        try {
            var data = testBmp.buffer;
            var sourceOptions = { sourceDensity: 120 };
            let imageSource = image.createImageSource(data, sourceOptions);
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let pixelMap = await imageSource.createPixelMap();
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    var density = pixelMap.getDensity();
                    logger.log("Density " + density);
                    expect(density == 120).assertTrue();
                    done();
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_025
     * @tc.name      : SourceOptions getDensity fitDensity
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap
     *               : 3.getDensity
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_025', 0, async function (done) {
        let logger = loger('frmwk_025')
        try {
            var data = testGif.buffer;
            var sourceOptions = { sourceDensity: 120 };
            let imageSource = image.createImageSource(data, sourceOptions);
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let pixelMap = await imageSource.createPixelMap();
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    var density = pixelMap.getDensity();
                    logger.log("Density " + density);
                    expect(density == 120).assertTrue();
                    done();
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_026
     * @tc.name      : fitDensity-JPG
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap with fitDensity
     *               : 3.getDensity
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_026', 0, async function (done) {
        let logger = loger('frmwk_026')
        try {
            var data = testJpg.buffer;
            var sourceOptions = { sourceDensity: 120 };
            let imageSource = image.createImageSource(data, sourceOptions);
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let decodingOptions = { fitDensity: 240 };
                let pixelMap = await imageSource.createPixelMap(decodingOptions);
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    var density = pixelMap.getDensity();
                    logger.log("Density " + density);
                    expect(density == 240).assertTrue();
                    done();
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_027
     * @tc.name      : fitDensity-bmp
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap with fitDensity
     *               : 3.getDensity
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_027', 0, async function (done) {
        let logger = loger('frmwk_027')
        try {
            var data = testBmp.buffer;
            var sourceOptions = { sourceDensity: 120 };
            let imageSource = image.createImageSource(data, sourceOptions);
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let decodingOptions = { fitDensity: 240 };
                let pixelMap = await imageSource.createPixelMap(decodingOptions);
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    var density = pixelMap.getDensity();
                    logger.log("Density " + density);
                    expect(density == 240).assertTrue();
                    done();
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_028
     * @tc.name      : fitDensity-gif
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap with fitDensity
     *               : 3.getDensity
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_028', 0, async function (done) {
        let logger = loger('frmwk_028')
        try {
            var data = testGif.buffer;
            var sourceOptions = { sourceDensity: 120 };
            let imageSource = image.createImageSource(data, sourceOptions);
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let decodingOptions = { fitDensity: 240 };
                let pixelMap = await imageSource.createPixelMap(decodingOptions);
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    var density = pixelMap.getDensity();
                    logger.log("Density " + density);
                    expect(density == 240).assertTrue();
                    done();
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_029
     * @tc.name      : setDensity-Jpg
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap
     *               : 3.set Density
     *               : 4.getDensity
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_029', 0, async function (done) {
        let logger = loger('frmwk_029')
        try {
            var data = testJpg.buffer;
            var sourceOptions = { sourceDensity: 120 };
            let imageSource = image.createImageSource(data, sourceOptions);
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let pixelMap = await imageSource.createPixelMap();
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    var density = pixelMap.getDensity();
                    logger.log("Density1 " + density);
                    pixelMap.setDensity(360);
                    density = pixelMap.getDensity();
                    logger.log("Density2 " + density);
                    expect(density == 360).assertTrue();
                    done();
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_030
     * @tc.name      : setDensity-bmp
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap
     *               : 3.set Density
     *               : 4.getDensity
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_030', 0, async function (done) {
        let logger = loger('frmwk_030')
        try {
            var data = testBmp.buffer;
            var sourceOptions = { sourceDensity: 120 };
            let imageSource = image.createImageSource(data, sourceOptions);
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let pixelMap = await imageSource.createPixelMap();
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    var density = pixelMap.getDensity();
                    logger.log("Density1 " + density);
                    pixelMap.setDensity(360);
                    density = pixelMap.getDensity();
                    logger.log("Density2 " + density);
                    expect(density == 360).assertTrue();
                    done();
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_031
     * @tc.name      : setDensity-gif
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap
     *               : 3.set Density
     *               : 4.getDensity
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_031', 0, async function (done) {
        let logger = loger('frmwk_031')
        try {
            var data = testGif.buffer;
            var sourceOptions = { sourceDensity: 120 };
            let imageSource = image.createImageSource(data, sourceOptions);
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let pixelMap = await imageSource.createPixelMap();
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    var density = pixelMap.getDensity();
                    logger.log("Density1 " + density);
                    pixelMap.setDensity(360);
                    density = pixelMap.getDensity();
                    logger.log("Density2 " + density);
                    expect(density == 360).assertTrue();
                    done();
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_032
     * @tc.name      : crop-promise
     * @tc.desc      : 1.create PixelMap
     *               : 2.crop
     *               : 3.getImageInfo
     *               : 4.getPixelBytesNumber
     *               : 5.readPixelsToBuffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_032', 0, async function (done) {
        let logger = loger('frmwk_032')
        try {
            var pixelMap = await genPixelMap()
            logger.log("pixelMap " + (pixelMap != undefined));
            if (pixelMap != undefined) {
                var orgInfo = await pixelMap.getImageInfo()
                var region = { size: { height: 3, width: 3 }, x: 1, y: 1 };
                await pixelMap.crop(region);
                var newInfo = await pixelMap.getImageInfo()
                if (newInfo.size.width != region.size.width) {
                    logger.log(`region width ${region.size.width}, new width ${newInfo.size.width} `);
                    expect(false).assertTrue();
                    done();
                }
                var pixelSize = pixelMap.getPixelBytesNumber();
                logger.log(`new pixel size ${pixelSize}`);
                var readBuffer = new ArrayBuffer(pixelSize);
                await pixelMap.readPixelsToBuffer(readBuffer);
                var bufferArr2 = new Uint8Array(readBuffer);
                for (var i = 0; i < bufferArr2.length; i++) {
                    if (bufferArr2[i] != crop3x3[i]) {
                        logger.log(`pixel[${i}] current[${bufferArr2[i]}] target[${crop3x3[i]}]`);
                        expect(false).assertTrue();
                        done();
                    }
                }
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
        done();
    })

    /**
     * @tc.number    : frmwk_033
     * @tc.name      : crop -callback
     * @tc.desc      : 1.create PixelMap
     *               : 2.crop
     *               : 3.getImageInfo
     *               : 4.getPixelBytesNumber
     *               : 5.readPixelsToBuffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it('frmwk_033', 0, async function (done) {
        let logger = loger('frmwk_033')
        try {
            var pixelMap = await genPixelMap()
            logger.log("pixelMap " + (pixelMap != undefined));
            if (pixelMap != undefined) {
                var region = { size: { height: 3, width: 3 }, x: 1, y: 1 };
                pixelMap.crop(region, async (err) => {
                    var newInfo = await pixelMap.getImageInfo()
                    if (newInfo.size.width != region.size.width) {
                        logger.log(`region width ${region.size.width}, new width ${newInfo.size.width} `);
                        expect(false).assertTrue();
                        done();
                    }
                    var pixelSize = pixelMap.getPixelBytesNumber();
                    logger.log(`new pixel size ${pixelSize}`);
                    var readBuffer = new ArrayBuffer(pixelSize);
                    await pixelMap.readPixelsToBuffer(readBuffer);
                    var bufferArr2 = new Uint8Array(readBuffer);
                    for (var i = 0; i < bufferArr2.length; i++) {
                        if (bufferArr2[i] != crop3x3[i]) {
                            logger.log(`pixel[${i}] current[${bufferArr2[i]}] target[${crop3x3[i]}]`);
                            expect(false).assertTrue();
                            done();
                        }
                    }
                })
                expect(true).assertTrue();
                done();
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
    })

})