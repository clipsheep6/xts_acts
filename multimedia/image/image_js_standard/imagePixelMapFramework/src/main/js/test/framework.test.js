/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import { base64Image, scale2x1, translate3x1, rotate90, flipH, testBmp, testGif, crop3x3, scale1x4, setAlpha8, translate1x3 } from './testImg2'
import { testPng, testJpg} from '../../../../../image/src/main/js/test/testImg'
export default function Image_test() {
describe('Image_test', function () {
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
    const ERROT_CODE = 62980115;
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

    async function checkPixelMapInterface(done, logger, pixelMap, orgInfo, sizeCheck, data) {
        var newInfo = await pixelMap.getImageInfo()
        sizeCheck(done, logger, orgInfo, newInfo)
        var pixelSize = pixelMap.getPixelBytesNumber();
        logger.log(`new pixel size ${pixelSize}`);
        var readBuffer = new ArrayBuffer(pixelSize);
        await pixelMap.readPixelsToBuffer(readBuffer);
        var bufferArr2 = new Uint8Array(readBuffer);
        for (var i = 0; i < bufferArr2.length; i++) {
            if (bufferArr2[i] != data[i]) {
                logger.log(`pixel[${i}] current[${bufferArr2[i]}] target[${data[i]}]`);
                expect(false).assertTrue();
                done();
                break;
            }
        }
        expect(true).assertTrue();
        done();
    }

    async function pixelMapModifySizeTest(done, testNum, type, pixelMapInterface, sizeCheck, data, ...params) {
        let logger = loger(testNum)
        try {
            var pixelMap = await genPixelMap()
            logger.log("pixelMap " + (pixelMap != undefined));
            if (pixelMap != undefined) {
                var orgInfo = await pixelMap.getImageInfo()

                if (type == 'callback') {
                    pixelMap[pixelMapInterface](...params, async () => {
                        await checkPixelMapInterface(done, logger, pixelMap, orgInfo, sizeCheck, data)
                    })
                } else {
                    await pixelMap[pixelMapInterface](...params);
                    await checkPixelMapInterface(done, logger, pixelMap, orgInfo, sizeCheck, data)
                }
            } else {
                logger.log('create pixelMap fail ');
                expect(false).assertTrue();
                done();
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
    }


    async function checkAlphaPixelmap(done, logger, alphaPixelMap) {
        logger.log("AlphaPixelMap " + alphaPixelMap);
        if (alphaPixelMap != undefined) {
            var imageInfo = await alphaPixelMap.getImageInfo();
            logger.log("AlphaPixelMap pixelformat " + imageInfo.pixelFormat);
            expect(imageInfo.pixelFormat == 6).assertTrue();
            done();
        } else {
            logger.log('creat alphaPixelMap failed');
            expect(false).assertTrue();
            done();
        }
    }
    async function createAlphaPixelmapTest(done, testNum, type, imageData) {
        let logger = loger(testNum)
        try {
            let imageSource = image.createImageSource(imageData);
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let pixelMap = await imageSource.createPixelMap();
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    if (type == 'callback') {
                        pixelMap.createAlphaPixelmap(async (err, alphaPixelMap) => {
                            await checkAlphaPixelmap(done, logger, alphaPixelMap)
                        })
                    } else {
                        var alphaPixelMap = await pixelMap.createAlphaPixelmap();
                        await checkAlphaPixelmap(done, logger, alphaPixelMap)
                    }
                } else {
                    logger.log('creat pixelMap failed');
                    expect(false).assertTrue();
                    done();
                }
            } else {
                logger.log('creat ImageSource failed');
                expect(false).assertTrue();
                done();
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
    }

    async function getDensityTest(done, testNum, imageData, decodingOptions) {
        let logger = loger(testNum)
        try {
            var sourceOptions = { sourceDensity: 120 };
            let imageSource = image.createImageSource(imageData, sourceOptions);
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let pixelMap = await imageSource.createPixelMap(decodingOptions);
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    var density = pixelMap.getDensity();
                    logger.log("Density " + density);
                    expect(decodingOptions ? (density == 240) : (density == 120)).assertTrue();
                    done();
                } else {
                    logger.log('creat pixelMap failed ');
                    expect(false).assertTrue();
                    done();
                }
            } else {
                logger.log('creat imageSource failed ');
                expect(false).assertTrue();
                done();
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
    }

    async function setDensityTest(done, testNum, imageData) {
        let logger = loger(testNum)
        try {
            var sourceOptions = { sourceDensity: 120 };
            let imageSource = image.createImageSource(imageData, sourceOptions);
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
                } else {
                    logger.log('creat pixelMap failed ');
                    expect(false).assertTrue();
                    done();
                }
            } else {
                logger.log('creat imageSource failed ');
                expect(false).assertTrue();
                done();
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
    }

    async function pixelMapModifySizeTestErr(done, testNum, type, pixelMapInterface, ...params) {
        let logger = loger(testNum)
        try {
            var pixelMap = await genPixelMap();
            logger.log("pixelMap " + (pixelMap != undefined));
            if (pixelMap != undefined) {
                if (type == 'callback') {
                    pixelMap[pixelMapInterface](...params, async (error) => {
                        expect(error == ERROT_CODE);
                        done();
                    })
                } else {
                    try {
                        await pixelMap[pixelMapInterface](...params);
                        expect(false).assertTrue();
                        done();
                    } catch (error) {
                        expect(error == ERROT_CODE);
                        done();
                    }
                }
            } else {
                logger.log('create pixelMap fail ');
                expect(false).assertTrue();
                done();
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
    }

    async function opacityErr(done, testNum, param, type) {
        let logger = loger(testNum)
        try {
            var pixelMap = await genPixelMap()
            logger.log("pixelMap " + (pixelMap != undefined));
            if (pixelMap != undefined) {
                if (type == 'callback') {
                    pixelMap.opacity(param, (err) => {
                        expect(err == ERROT_CODE).assertTrue();
                        done();
                    })
                } else {
                    try {
                        await pixelMap.opacity(param)
                        expect(false).assertTrue();
                        done();
                    } catch (error) {
                        expect(error == ERROT_CODE).assertTrue();
                        done();
                    }
                }
            } else {
                logger.log('creat pixelMap failed ');
                expect(false).assertTrue();
                done();
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
    }

    async function setAlphaAbleErr(done, testNum, param) {
        let logger = loger(testNum)
        try {
            let imageSource = genPicSource();
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let pixelMap = await imageSource.createPixelMap();
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    try {
                        pixelMap.setAlphaAble(param);
                        expect(false).assertTrue();
                        done();
                    } catch (error) {
                        expect(error == ERROT_CODE);
                        done();
                    }
                } else {
                    logger.log('create pixelmap failed ');
                    expect(false).assertTrue();
                    done();
                }
            } else {
                logger.log('create imagesource failed ');
                expect(false).assertTrue();
                done();
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
    }

    async function setDensityErr(done, testNum, imageData, param) {
        let logger = loger(testNum)
        try {
            var sourceOptions = { sourceDensity: 120 };
            let imageSource = image.createImageSource(imageData, sourceOptions);
            logger.log("ImageSource " + (imageSource != undefined));
            if (imageSource != undefined) {
                let pixelMap = await imageSource.createPixelMap();
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    try {
                        pixelMap.setDensity(param);
                        expect(false).assertTrue();
                        done();
                    } catch (error) {
                        expect(true).assertTrue();
                        logger.log('err message: ' + error);
                        done();
                    }
                } else {
                    logger.log('creat pixelMap failed ');
                    expect(false).assertTrue();
                    done();
                }
            } else {
                logger.log('creat imageSource failed ');
                expect(false).assertTrue();
                done();
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
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
     * @tc.level     : Level 0
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
     * @tc.level     : Level 0
     */
    it('frmwk_002', 0, async function (done) {
        function sizeCheck(done, logger, orgInfo, newInfo) {
            if (newInfo.size.width != orgInfo.size.width * 2) {
                logger.log(`org width ${orgInfo.size.width}, new width ${newInfo.size.width} `);
                expect(false).assertTrue();
                done()
            }
        }
        await pixelMapModifySizeTest(done, 'frmwk_002', 'promise', 'scale', sizeCheck, scale2x1, 2.0, 1.0)
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
     * @tc.level     : Level 0
     */
    it('frmwk_003', 0, async function (done) {
        function sizeCheck(done, logger, orgInfo, newInfo) {
            if (newInfo.size.height != orgInfo.size.height * 4) {
                logger.log(`org height ${orgInfo.size.height}, new height ${newInfo.size.height} `);
                expect(false).assertTrue();
                done()
            }
        }
        await pixelMapModifySizeTest(done, 'frmwk_003', 'promise', 'scale', sizeCheck, scale1x4, 1.0, 4.0)
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
     * @tc.level     : Level 0
     */
    it('frmwk_004', 0, async function (done) {
        function sizeCheck(done, logger, orgInfo, newInfo) {
            if (newInfo.size.height != orgInfo.size.height * 4) {
                logger.log(`org height ${orgInfo.size.height}, new height ${newInfo.size.height} `);
                expect(false).assertTrue();
                done()
            }
        }
        await pixelMapModifySizeTest(done, 'frmwk_004', 'callback', 'scale', sizeCheck, scale1x4, 1.0, 4.0)
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
     * @tc.level     : Level 0
     */
    it('frmwk_005', 0, async function (done) {
        function sizeCheck(done, logger, orgInfo, newInfo) {
            if (newInfo.size.width != orgInfo.size.width + 3) {
                logger.log(`org width ${orgInfo.size.width}, new width ${newInfo.size.width} `);
                expect(false).assertTrue();
                done();
            }
        }
        await pixelMapModifySizeTest(done, 'frmwk_005', 'promise', 'translate', sizeCheck, translate3x1, 3.0, 1.0)
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
     * @tc.level     : Level 0
     */
    it('frmwk_006', 0, async function (done) {
        function sizeCheck(done, logger, orgInfo, newInfo) {
            if (newInfo.size.height != orgInfo.size.height + 3) {
                logger.log(`org height ${orgInfo.size.height}, new height ${newInfo.size.height} `);
                expect(false).assertTrue();
                done();
            }
        }
        await pixelMapModifySizeTest(done, 'frmwk_006', 'promise', 'translate', sizeCheck, translate1x3, 1.0, 3.0)
    })

    /**
     * @tc.number    : frmwk_01_007
     * @tc.name      : Pixelmap Translate-callback
     * @tc.desc      : 1.create pixelmap
     *               : 2.call translate
     *               : 3.get pixelbytesnumber
     *               : 4.read pixels to buffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('frmwk_007', 0, async function (done) {
        function sizeCheck(done, logger, orgInfo, newInfo) {
            if (newInfo.size.height != orgInfo.size.height + 3) {
                logger.log(`org height ${orgInfo.size.height}, new height ${newInfo.size.height} `);
                expect(false).assertTrue();
                done();
            }
        }
        await pixelMapModifySizeTest(done, 'frmwk_007', 'callback', 'translate', sizeCheck, translate1x3, 1.0, 3.0)
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
     * @tc.level     : Level 0
     */
    it('frmwk_008', 0, async function (done) {
        function sizeCheck(done, logger, orgInfo, newInfo) {
            if (newInfo.size.width != orgInfo.size.height) {
                logger.log(`org height ${orgInfo.size.height}, new width ${newInfo.size.width} `);
                expect(false).assertTrue();
                done();
            }
        }
        await pixelMapModifySizeTest(done, 'frmwk_008', 'promise', 'rotate', sizeCheck, rotate90, 90.0)
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
     * @tc.level     : Level 0
     */
    it('frmwk_009', 0, async function (done) {
        function sizeCheck(done, logger, orgInfo, newInfo) {
            if (newInfo.size.width != orgInfo.size.height) {
                logger.log(`org height ${orgInfo.size.height}, new width ${newInfo.size.width} `);
                expect(false).assertTrue();
                done();
            }
        }
        await pixelMapModifySizeTest(done, 'frmwk_009', 'callback', 'rotate', sizeCheck, rotate90, 90.0)
    })

    /**
     * @tc.number    : frmwk_010
     * @tc.name      : Pixelmap Flip-promise
     * @tc.desc      : 1.create pixelmap
     *               : 2.call flip
     *               : 3.get pixelbytesnumber
     *               : 4.read pixels to buffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('frmwk_010', 0, async function (done) {
        function sizeCheck(done, logger, orgInfo, newInfo) {
            if (newInfo.size.width != orgInfo.size.width) {
                logger.log(`org width ${orgInfo.size.width}, new width ${newInfo.size.width} `);
                expect(false).assertTrue();
                done();
            }
        }
        await pixelMapModifySizeTest(done, 'frmwk_010', 'promise', 'flip', sizeCheck, flipH, false, true)
    })

    /**
     * @tc.number    : frmwk_011
     * @tc.name      : Pixelmap Flip-callback
     * @tc.desc      : 1.create pixelmap
     *               : 2.call flip
     *               : 3.get pixelbytesnumber
     *               : 4.read pixels to buffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('frmwk_011', 0, async function (done) {
        function sizeCheck(done, logger, orgInfo, newInfo) {
            if (newInfo.size.width != orgInfo.size.width) {
                logger.log(`org width ${orgInfo.size.width}, new width ${newInfo.size.width} `);
                expect(false).assertTrue();
                done();
            }
        }
        await pixelMapModifySizeTest(done, 'frmwk_011', 'callback', 'flip', sizeCheck, flipH, false, true)
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
     * @tc.level     : Level 0
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
                } else {
                    logger.log('create pixelmap failed ');
                    expect(false).assertTrue();
                    done();
                }
            } else {
                logger.log('create imagesource failed ');
                expect(false).assertTrue();
                done();
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
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
     * @tc.level     : Level 0
     */
    it('frmwk_013', 0, async function (done) {
        var imageData = testPng.buffer;
        await createAlphaPixelmapTest(done, 'frmwk_013', 'promise', imageData);
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
     * @tc.level     : Level 0
     */
    it('frmwk_014', 0, async function (done) {
        var imageData = testPng.buffer;
        await createAlphaPixelmapTest(done, 'frmwk_014', 'callback', imageData);
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
     * @tc.level     : Level 0
     */
    it('frmwk_015', 0, async function (done) {
        var imageData = testJpg.buffer;
        await createAlphaPixelmapTest(done, 'frmwk_015', 'promise', imageData);
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
     * @tc.level     : Level 0
     */
    it('frmwk_016', 0, async function (done) {
        var imageData = testBmp.buffer;
        await createAlphaPixelmapTest(done, 'frmwk_016', 'promise', imageData);
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
     * @tc.level     : Level 0
     */
    it('frmwk_017', 0, async function (done) {
        var imageData = testGif.buffer;
        await createAlphaPixelmapTest(done, 'frmwk_017', 'promise', imageData);
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
     * @tc.level     : Level 0
     */
    it('frmwk_018', 0, async function (done) {
        let logger = loger('frmwk_018')
        try {
            var pixelMap = await genPixelMap()
            logger.log("pixelMap " + (pixelMap != undefined));
            if (pixelMap != undefined) {
                await pixelMap.opacity(0.8)
                var pixelSize = pixelMap.getPixelBytesNumber();
                logger.log(`new pixel size ${pixelSize}`);
                var readBuffer = new ArrayBuffer(pixelSize);
                await pixelMap.readPixelsToBuffer(readBuffer);
                var bufferArr2 = new Uint8Array(readBuffer);
                for (var i = 0; i < bufferArr2.length; i++) {
                    if (bufferArr2[i] != setAlpha8[i]) {
                        logger.log(`pixel[${i}] current[${bufferArr2[i]}] target[${setAlpha8[i]}]`);
                        expect(false).assertTrue();
                        break;
                    }
                }
                expect(true).assertTrue();
                done();
            } else {
                logger.log('creat pixelMap failed ');
                expect(false).assertTrue();
                done();
            }
        } catch (error) {
            logger.log('failed ' + error);
            expect(false).assertTrue();
            done();
        }
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
     * @tc.level     : Level 0
     */
    it('frmwk_019', 0, async function (done) {
        let logger = loger('frmwk_019')
        try {
            var pixelMap = await genPixelMap()
            logger.log("pixelMap " + (pixelMap != undefined));
            if (pixelMap != undefined) {
                pixelMap.opacity(0.8, async (err) => {
                    var pixelSize = pixelMap.getPixelBytesNumber();
                    logger.log(`new pixel size ${pixelSize}`);
                    var readBuffer = new ArrayBuffer(pixelSize);
                    await pixelMap.readPixelsToBuffer(readBuffer);
                    var bufferArr2 = new Uint8Array(readBuffer);
                    for (var i = 0; i < bufferArr2.length; i++) {
                        if (bufferArr2[i] != setAlpha8[i]) {
                            logger.log(`pixel[${i}] current[${bufferArr2[i]}] target[${setAlpha8[i]}]`);
                            expect(false).assertTrue();
                            break;
                        }
                    }
                    expect(true).assertTrue();
                    done();
                })
            } else {
                logger.log('creat pixelMap failed ');
                expect(false).assertTrue();
                done();
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
     * @tc.level     : Level 0
     */
    it('frmwk_020', 0, async function (done) {
        var imageData = testPng.buffer;
        await getDensityTest(done, 'frmwk_020', imageData)
    })

    /**
     * @tc.number    : frmwk_021
     * @tc.name      : fitDensity
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap with fitDensity
     *               : 3.getDensity
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('frmwk_021', 0, async function (done) {
        var imageData = testPng.buffer;
        let decodingOptions = { fitDensity: 240 };
        await getDensityTest(done, 'frmwk_021', imageData, decodingOptions)
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
     * @tc.level     : Level 0
     */
    it('frmwk_022', 0, async function (done) {
        var imageData = testPng.buffer;
        await setDensityTest(done, 'frmwk_022', imageData)
    })

    /**
     * @tc.number    : frmwk_023
     * @tc.name      : SourceOptions getDensity fitDensity
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap
     *               : 3.getDensity
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('frmwk_023', 0, async function (done) {
        var imageData = testJpg.buffer;
        await getDensityTest(done, 'frmwk_023', imageData)
    })

    /**
     * @tc.number    : frmwk_024
     * @tc.name      : SourceOptions getDensity fitDensity
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap
     *               : 3.getDensity
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('frmwk_024', 0, async function (done) {
        var imageData = testBmp.buffer;
        await getDensityTest(done, 'frmwk_024', imageData)
    })

    /**
     * @tc.number    : frmwk_025
     * @tc.name      : SourceOptions getDensity fitDensity
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap
     *               : 3.getDensity
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('frmwk_025', 0, async function (done) {
        var imageData = testGif.buffer;
        await getDensityTest(done, 'frmwk_025', imageData)
    })

    /**
     * @tc.number    : frmwk_026
     * @tc.name      : fitDensity-JPG
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap with fitDensity
     *               : 3.getDensity
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('frmwk_026', 0, async function (done) {
        var imageData = testJpg.buffer;
        let decodingOptions = { fitDensity: 240 };
        await getDensityTest(done, 'frmwk_026', imageData, decodingOptions)
    })

    /**
     * @tc.number    : frmwk_027
     * @tc.name      : fitDensity-bmp
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap with fitDensity
     *               : 3.getDensity
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('frmwk_027', 0, async function (done) {
        var imageData = testBmp.buffer;
        let decodingOptions = { fitDensity: 240 };
        await getDensityTest(done, 'frmwk_027', imageData, decodingOptions)
    })

    /**
     * @tc.number    : frmwk_028
     * @tc.name      : fitDensity-gif
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap with fitDensity
     *               : 3.getDensity
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('frmwk_028', 0, async function (done) {
        var imageData = testGif.buffer;
        let decodingOptions = { fitDensity: 240 };
        await getDensityTest(done, 'frmwk_028', imageData, decodingOptions)
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
     * @tc.level     : Level 0
     */
    it('frmwk_029', 0, async function (done) {
        var imageData = testJpg.buffer;
        await setDensityTest(done, 'frmwk_029', imageData)
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
     * @tc.level     : Level 0
     */
    it('frmwk_030', 0, async function (done) {
        var imageData = testBmp.buffer;
        await setDensityTest(done, 'frmwk_030', imageData)
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
     * @tc.level     : Level 0
     */
    it('frmwk_031', 0, async function (done) {
        var imageData = testGif.buffer;
        await setDensityTest(done, 'frmwk_031', imageData)
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
     * @tc.level     : Level 0
     */
    it('frmwk_032', 0, async function (done) {
        var region = { size: { height: 3, width: 3 }, x: 1, y: 1 };
        function sizeCheck(done, logger, orgInfo, newInfo) {
            orgInfo = region;
            if (newInfo.size.width != orgInfo.size.width) {
                logger.log(`orgInfo width ${orgInfo.size.width}, new width ${newInfo.size.width} `);
                expect(false).assertTrue();
                done();
            }
        }
        await pixelMapModifySizeTest(done, 'frmwk_032', 'promise', 'crop', sizeCheck, crop3x3, region)
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
     * @tc.level     : Level 0
     */
    it('frmwk_033', 0, async function (done) {
        var region = { size: { height: 3, width: 3 }, x: 1, y: 1 };
        function sizeCheck(done, logger, orgInfo, newInfo) {
            orgInfo = region;
            if (newInfo.size.width != orgInfo.size.width) {
                logger.log(`orgInfo width ${orgInfo.size.width}, new width ${newInfo.size.width} `);
                expect(false).assertTrue();
                done();
            }
        }
        await pixelMapModifySizeTest(done, 'frmwk_033', 'callback', 'crop', sizeCheck, crop3x3, region)
    })

    /**
     * @tc.number    : scaleErr_001
     * @tc.name      : Pixelmap Scale-promise-wrong x
     * @tc.desc      : 1.create pixelmap
     *               : 2.call scale
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('scaleErr_001', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'scaleErr_001', 'promise', 'scale', { a: 10 }, 1.0)
    })

    /**
     * @tc.number    : scaleErr_002
     * @tc.name      : Pixelmap Scale-promise-wrong x
     * @tc.desc      : 1.create pixelmap
     *               : 2.call scale
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('scaleErr_002', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'scaleErr_002', 'promise', 'scale', 'a', 1.0)
    })

    /**
     * @tc.number    : scaleErr_003
     * @tc.name      : Pixelmap Scale-promise-wrong y
     * @tc.desc      : 1.create pixelmap
     *               : 2.call scale
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('scaleErr_003', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'scaleErr_003', 'promise', 'scale', 1.0, null)

    })

    /**
     * @tc.number    : scaleErr_004
     * @tc.name      : Pixelmap Scale-promise-wrong y
     * @tc.desc      : 1.create pixelmap
     *               : 2.call scale
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('scaleErr_004', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'scaleErr_004', 'promise', 'scale', 1.0, true)

    })

    /**
     * @tc.number    : scaleErr_005
     * @tc.name      : Pixelmap Scale-callback-wrong x
     * @tc.desc      : 1.create pixelmap
     *               : 2.call scale
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('scaleErr_005', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'scaleErr_005', 'callback', 'scale', { a: 10 }, 1.0)
    })

    /**
     * @tc.number    : scaleErr_006
     * @tc.name      : Pixelmap Scale-callback-wrong x
     * @tc.desc      : 1.create pixelmap
     *               : 2.call scale
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('scaleErr_006', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'scaleErr_006', 'callback', 'scale', 'a', 1.0)
    })

    /**
     * @tc.number    : scaleErr_007
     * @tc.name      : Pixelmap Scale-callback-wrong y
     * @tc.desc      : 1.create pixelmap
     *               : 2.call scale
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('scaleErr_007', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'scaleErr_007', 'callback', 'scale', 1.0, null)
    })

    /**
     * @tc.number    : scaleErr_008
     * @tc.name      : Pixelmap Scale-callback-wrong y
     * @tc.desc      : 1.create pixelmap
     *               : 2.call scale
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('scaleErr_008', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'scaleErr_008', 'callback', 'scale', 1.0, true)
    })

    /**
     * @tc.number    : translateErr_001
     * @tc.name      : Pixelmap Translate -promise-wrong x
     * @tc.desc      : 1.create pixelmap
     *               : 2.call translate
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('translateErr_001', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'translateErr_001', 'promise', 'translate', { a: 10 }, 1.0)
    })

    /**
    * @tc.number    : translateErr_002
    * @tc.name      : Pixelmap Translate -promise-wrong x
    * @tc.desc      : 1.create pixelmap
    *               : 2.call translate
    * @tc.size      : MEDIUM 
    * @tc.type      : Functional
    * @tc.level     : Level 0
    */
    it('translateErr_002', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'translateErr_002', 'promise', 'translate', 'a', 1.0)
    })

    /**
    * @tc.number    : translateErr_003
    * @tc.name      : Pixelmap Translate -promise-wrong y
    * @tc.desc      : 1.create pixelmap
    *               : 2.call translate
    * @tc.size      : MEDIUM 
    * @tc.type      : Functional
    * @tc.level     : Level 0
    */
    it('translateErr_003', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'translateErr_003', 'promise', 'translate', 1.0, null)
    })

    /**
    * @tc.number    : translateErr_004
    * @tc.name      : Pixelmap Translate -promise-wrong y
    * @tc.desc      : 1.create pixelmap
    *               : 2.call translate
    * @tc.size      : MEDIUM 
    * @tc.type      : Functional
    * @tc.level     : Level 0
    */
    it('translateErr_004', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'translateErr_004', 'promise', 'translate', 1.0, false)
    })

    /**
     * @tc.number    : translateErr_005
     * @tc.name      : Pixelmap Translate -callback-wrong x
     * @tc.desc      : 1.create pixelmap
     *               : 2.call translate
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('translateErr_005', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'translateErr_005', 'callback', 'translate', { a: 10 }, 1.0)
    })

    /**
    * @tc.number    : translateErr_006
    * @tc.name      : Pixelmap Translate -callback-wrong x
    * @tc.desc      : 1.create pixelmap
    *               : 2.call translate
    * @tc.size      : MEDIUM 
    * @tc.type      : Functional
    * @tc.level     : Level 0
    */
    it('translateErr_006', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'translateErr_006', 'callback', 'translate', 'a', 1.0)
    })

    /**
    * @tc.number    : translateErr_007
    * @tc.name      : Pixelmap Translate -callback-wrong y
    * @tc.desc      : 1.create pixelmap
    *               : 2.call translate
    * @tc.size      : MEDIUM 
    * @tc.type      : Functional
    * @tc.level     : Level 0
    */
    it('translateErr_007', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'translateErr_007', 'callback', 'translate', 1.0, null)
    })

    /**
    * @tc.number    : translateErr_008
    * @tc.name      : Pixelmap Translate -callback-wrong y
    * @tc.desc      : 1.create pixelmap
    *               : 2.call translate
    * @tc.size      : MEDIUM 
    * @tc.type      : Functional
    * @tc.level     : Level 0
    */
    it('translateErr_008', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'translateErr_008', 'callback', 'translate', 1.0, false)
    })

    /**
     * @tc.number    : rotateErr_001
     * @tc.name      : Pixelmap Rotate-promise-wrong angle
     * @tc.desc      : 1.create pixelmap
     *               : 2.call rotate
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('rotateErr_001', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'rotateErr_001', 'promise', 'rotate', 'a')
    })

    /**
     * @tc.number    : rotateErr_002
     * @tc.name      : Pixelmap Rotate-promise-wrong angle
     * @tc.desc      : 1.create pixelmap
     *               : 2.call rotate
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('rotateErr_002', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'rotateErr_002', 'promise', 'rotate', { a: 10 })
    })

    /**
     * @tc.number    : rotateErr_003
     * @tc.name      : Pixelmap Rotate-promise-wrong angle
     * @tc.desc      : 1.create pixelmap
     *               : 2.call rotate
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('rotateErr_003', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'rotateErr_003', 'promise', 'rotate', null)
    })

    /**
     * @tc.number    : rotateErr_004
     * @tc.name      : Pixelmap Rotate-promise-wrong angle
     * @tc.desc      : 1.create pixelmap
     *               : 2.call rotate
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('rotateErr_004', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'rotateErr_004', 'promise', 'rotate', false)
    })

    /**
     * @tc.number    : rotateErr_005
     * @tc.name      : Pixelmap Rotate-callback-wrong angle
     * @tc.desc      : 1.create pixelmap
     *               : 2.call rotate
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('rotateErr_005', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'rotateErr_005', 'callback', 'rotate', 'a')
    })

    /**
     * @tc.number    : rotateErr_006
     * @tc.name      : Pixelmap Rotate-callback-wrong angle
     * @tc.desc      : 1.create pixelmap
     *               : 2.call rotate
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('rotateErr_006', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'rotateErr_006', 'callback', 'rotate', { a: 10 })
    })

    /**
     * @tc.number    : rotateErr_007
     * @tc.name      : Pixelmap Rotate-callback-wrong angle
     * @tc.desc      : 1.create pixelmap
     *               : 2.call rotate
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('rotateErr_007', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'rotateErr_007', 'callback', 'rotate', null)
    })

    /**
     * @tc.number    : rotateErr_008
     * @tc.name      : Pixelmap Rotate-callback-wrong angle
     * @tc.desc      : 1.create pixelmap
     *               : 2.call rotate
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('rotateErr_008', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'rotateErr_008', 'callback', 'rotate', false)
    })

    /**
     * @tc.number    : flipErr_001
     * @tc.name      : Pixelmap Flip-promise-wrong x
     * @tc.desc      : 1.create pixelmap
     *               : 2.call flip
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('flipErr_001', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'flipErr_001', 'promise', 'flip', 'false', true)
    })

    /**
     * @tc.number    : flipErr_002
     * @tc.name      : Pixelmap Flip-promise-wrong x
     * @tc.desc      : 1.create pixelmap
     *               : 2.call flip
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('flipErr_002', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'flipErr_002', 'promise', 'flip', 1, true)
    })

    /**
     * @tc.number    : flipErr_003
     * @tc.name      : Pixelmap Flip-promise-wrong y
     * @tc.desc      : 1.create pixelmap
     *               : 2.call flip
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('flipErr_003', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'flipErr_003', 'promise', 'flip', true, { a: 10 })
    })

    /**
     * @tc.number    : flipErr_004
     * @tc.name      : Pixelmap Flip-promise-wrong y
     * @tc.desc      : 1.create pixelmap
     *               : 2.call flip
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('flipErr_004', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'flipErr_004', 'promise', 'flip', true, null)
    })

    /**
    * @tc.number    : flipErr_005
    * @tc.name      : Pixelmap Flip-callback-wrong x
    * @tc.desc      : 1.create pixelmap
    *               : 2.call flip
    * @tc.size      : MEDIUM 
    * @tc.type      : Functional
    * @tc.level     : Level 0
    */
    it('flipErr_005', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'flipErr_005', 'callback', 'flip', 'false', true)
    })

    /**
     * @tc.number    : flipErr_006
     * @tc.name      : Pixelmap Flip-callback-wrong x
     * @tc.desc      : 1.create pixelmap
     *               : 2.call flip
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('flipErr_006', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'flipErr_006', 'callback', 'flip', 1, true)
    })

    /**
     * @tc.number    : flipErr_007
     * @tc.name      : Pixelmap Flip-callback-wrong y
     * @tc.desc      : 1.create pixelmap
     *               : 2.call flip
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('flipErr_007', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'flipErr_007', 'callback', 'flip', true, { a: 10 })
    })

    /**
     * @tc.number    : flipErr_008
     * @tc.name      : Pixelmap Flip-callback-wrong y
     * @tc.desc      : 1.create pixelmap
     *               : 2.call flip
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('flipErr_008', 0, async function (done) {
        await pixelMapModifySizeTestErr(done, 'flipErr_008', 'callback', 'flip', true, null)
    })

    /**
     * @tc.number    : setAlphaAbleErr_001
     * @tc.name      : SetSupportAlpha-wrong alpha
     * @tc.desc      : 1.create imagesource
     *               : 2.create pixelmap
     *               : 3.call setAlphaAble
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('setAlphaAbleErr_001', 0, async function (done) {
        setAlphaAbleErr(done, 'setAlphaAbleErr_001', 'a')
    })

    /**
     * @tc.number    : setAlphaAbleErr_002
     * @tc.name      : SetSupportAlpha-wrong alpha
     * @tc.desc      : 1.create imagesource
     *               : 2.create pixelmap
     *               : 3.call setAlphaAble
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('setAlphaAbleErr_002', 0, async function (done) {
        setAlphaAbleErr(done, 'setAlphaAbleErr_002', { a: 1 })
    })

    /**
     * @tc.number    : setAlphaAbleErr_003
     * @tc.name      : SetSupportAlpha-wrong alpha
     * @tc.desc      : 1.create imagesource
     *               : 2.create pixelmap
     *               : 3.call setAlphaAble
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('setAlphaAbleErr_003', 0, async function (done) {
        setAlphaAbleErr(done, 'setAlphaAbleErr_003', null)
    })

    /**
     * @tc.number    : setAlphaAbleErr_004
     * @tc.name      : SetSupportAlpha-wrong alpha
     * @tc.desc      : 1.create imagesource
     *               : 2.create pixelmap
     *               : 3.call setAlphaAble
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('setAlphaAbleErr_004', 0, async function (done) {
        setAlphaAbleErr(done, 'setAlphaAbleErr_004', 1)
    })

    /**
     * @tc.number    : cropErr_001
     * @tc.name      : crop-promise- size: { height: 3, width: 3 }, x: -1, y: 1
     * @tc.desc      : 1.create PixelMap
     *               : 2.crop
     *               : 3.getImageInfo
     *               : 4.getPixelBytesNumber
     *               : 5.readPixelsToBuffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('cropErr_001', 0, async function (done) {
        var region = { size: { height: 3, width: 3 }, x: -1, y: 1 };
        await pixelMapModifySizeTestErr(done, 'cropErr_001', 'promise', 'crop', region)
    })

    /**
     * @tc.number    : cropErr_002
     * @tc.name      : crop-promise-size: { height: 3, width: 3 }, x: 1, y: -1
     * @tc.desc      : 1.create PixelMap
     *               : 2.crop
     *               : 3.getImageInfo
     *               : 4.getPixelBytesNumber
     *               : 5.readPixelsToBuffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('cropErr_002', 0, async function (done) {
        var region = { size: { height: 3, width: 3 }, x: 1, y: -1 };
        await pixelMapModifySizeTestErr(done, 'cropErr_002', 'promise', 'crop', region)
    })

    /**
     * @tc.number    : cropErr_003
     * @tc.name      : crop-promise-size: { height: 3, width: -3 }, x: 1, y: 1
     * @tc.desc      : 1.create PixelMap
     *               : 2.crop
     *               : 3.getImageInfo
     *               : 4.getPixelBytesNumber
     *               : 5.readPixelsToBuffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('cropErr_003', 0, async function (done) {
        var region = { size: { height: 3, width: -3 }, x: 1, y: 1 };
        await pixelMapModifySizeTestErr(done, 'cropErr_003', 'promise', 'crop', region)
    })

    /**
     * @tc.number    : cropErr_004
     * @tc.name      : crop-promise-size: { height: -3, width: 3 }, x: 1, y: 1
     * @tc.desc      : 1.create PixelMap
     *               : 2.crop
     *               : 3.getImageInfo
     *               : 4.getPixelBytesNumber
     *               : 5.readPixelsToBuffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('cropErr_004', 0, async function (done) {
        var region = { size: { height: -3, width: 3 }, x: 1, y: 1 };
        await pixelMapModifySizeTestErr(done, 'cropErr_004', 'promise', 'crop', region)
    })

    /**
     * @tc.number    : cropErr_005
     * @tc.name      : crop-callback-size: { height: 3, width: 3 }, x: -1, y: 1
     * @tc.desc      : 1.create PixelMap
     *               : 2.crop
     *               : 3.getImageInfo
     *               : 4.getPixelBytesNumber
     *               : 5.readPixelsToBuffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('cropErr_005', 0, async function (done) {
        var region = { size: { height: 3, width: 3 }, x: -1, y: 1 };
        await pixelMapModifySizeTestErr(done, 'cropErr_005', 'callback', 'crop', region)
    })

    /**
     * @tc.number    : cropErr_006
     * @tc.name      : crop-callback-size: { height: 3, width: 3 }, x: 1, y: -1
     * @tc.desc      : 1.create PixelMap
     *               : 2.crop
     *               : 3.getImageInfo
     *               : 4.getPixelBytesNumber
     *               : 5.readPixelsToBuffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('cropErr_006', 0, async function (done) {
        var region = { size: { height: 3, width: 3 }, x: 1, y: -1 };
        await pixelMapModifySizeTestErr(done, 'cropErr_006', 'callback', 'crop', region)
    })

    /**
     * @tc.number    : cropErr_007
     * @tc.name      : crop-callback-size: { height: 3, width: -3 }, x: 1, y: 1
     * @tc.desc      : 1.create PixelMap
     *               : 2.crop
     *               : 3.getImageInfo
     *               : 4.getPixelBytesNumber
     *               : 5.readPixelsToBuffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('cropErr_007', 0, async function (done) {
        var region = { size: { height: 3, width: -3 }, x: 1, y: 1 };
        await pixelMapModifySizeTestErr(done, 'cropErr_007', 'callback', 'crop', region)
    })

    /**
     * @tc.number    : cropErr_008
     * @tc.name      : crop-callback-size: { height: -3, width: 3 }, x: 1, y: 1
     * @tc.desc      : 1.create PixelMap
     *               : 2.crop
     *               : 3.getImageInfo
     *               : 4.getPixelBytesNumber
     *               : 5.readPixelsToBuffer
     * @tc.size      : MEDIUM 
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('cropErr_008', 0, async function (done) {
        var region = { size: { height: -3, width: 3 }, x: 1, y: 1 };
        await pixelMapModifySizeTestErr(done, 'cropErr_008', 'callback', 'crop', region)
    })

    /**
     * @tc.number    : setDensityErr_001
     * @tc.name      : setDensity-gif-wrong density
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap
     *               : 3.set Density
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('setDensityErr_001', 0, async function (done) {
        var imageData = testGif.buffer;
        setDensityErr(done, 'setDensityErr_001', imageData, null)
    })

    /**
     * @tc.number    : setDensityErr_002
     * @tc.name      : setDensity-gif-wrong density
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap
     *               : 3.set Density
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('setDensityErr_002', 0, async function (done) {
        var imageData = testGif.buffer;
        setDensityErr(done, 'setDensityErr_002', imageData, 'a')
    })

    /**
     * @tc.number    : setDensityErr_003
     * @tc.name      : setDensity-gif-wrong density
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap
     *               : 3.set Density
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('setDensityErr_003', 0, async function (done) {
        var imageData = testGif.buffer;
        setDensityErr(done, 'setDensityErr_003', imageData, true)
    })

    /**
     * @tc.number    : setDensityErr_004
     * @tc.name      : setDensity-gif-wrong density
     * @tc.desc      : 1.create ImageSource
     *               : 2.create PixelMap
     *               : 3.set Density
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('setDensityErr_004', 0, async function (done) {
        var imageData = testGif.buffer;
        setDensityErr(done, 'setDensityErr_004', imageData, { a: 1 })
    })

    /**
     * @tc.number    : opacityErr_001
     * @tc.name      : opacity-promise-wrong alpha
     * @tc.desc      : 1.create pixelmap
     *               : 2.opacity
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('opacityErr_001', 0, async function (done) {
        opacityErr(done, 'opacityErr_001', { a: 1 }, 'Promise')
    })

    /**
     * @tc.number    : opacityErr_002
     * @tc.name      : opacity-promise-wrong alpha
     * @tc.desc      : 1.create pixelmap
     *               : 2.opacity
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('opacityErr_002', 0, async function (done) {
        opacityErr(done, 'opacityErr_002', 'a', 'Promise')
    })

    /**
     * @tc.number    : opacityErr_003
     * @tc.name      : opacity-promise-wrong alpha
     * @tc.desc      : 1.create pixelmap
     *               : 2.opacity
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('opacityErr_003', 0, async function (done) {
        opacityErr(done, 'opacityErr_003', null, 'Promise')
    })

    /**
     * @tc.number    : opacityErr_004
     * @tc.name      : opacity-promise-wrong alpha
     * @tc.desc      : 1.create pixelmap
     *               : 2.opacity
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('opacityErr_004', 0, async function (done) {
        opacityErr(done, 'opacityErr_004', 2, 'Promise')
    })

    /**
     * @tc.number    : opacityErr_005
     * @tc.name      : opacity-callback-wrong alpha
     * @tc.desc      : 1.create pixelmap
     *               : 2.opacity
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('opacityErr_005', 0, async function (done) {
        opacityErr(done, 'opacityErr_005', { a: 1 }, 'callback')
    })

    /**
     * @tc.number    : opacityErr_006
     * @tc.name      : opacity-callback-wrong alpha
     * @tc.desc      : 1.create pixelmap
     *               : 2.opacity
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('opacityErr_006', 0, async function (done) {
        opacityErr(done, 'opacityErr_006', 'a', 'callback')
    })

    /**
     * @tc.number    : opacityErr_007
     * @tc.name      : opacityErr-callback-wrong alpha
     * @tc.desc      : 1.create pixelmap
     *               : 2.opacityErr
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('opacityErr_007', 0, async function (done) {
        opacityErr(done, 'opacityErr_007', null, 'callback')
    })

    /**
     * @tc.number    : opacityErr_008
     * @tc.name      : opacityErr-callback-wrong alpha
     * @tc.desc      : 1.create pixelmap
     *               : 2.opacity
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('opacityErr_008', 0, async function (done) {
        opacityErr(done, 'opacityErr_008', 2, 'callback')
    })
})}
