// @ts-nocheck
/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'hypium/index'
// @ts-ignore
import featureAbility from '@ohos.ability.featureAbility';
import image from "@ohos.multimedia.image";
import fs from "@ohos.file.fs";

export default function ImageColorMatrixTest() {
    describe('ImageColorMatrixTest', function () {
        const ERR_CODE = 62980115;
        beforeAll(async function () {
            console.info("beforeAll case");
        });

        beforeEach(function () {
            console.info("beforeEach case");
        });

        afterEach(async function () {
            console.info("afterEach case");
        });

        afterAll(async function () {
            console.info("afterAll case");
        });
        async function getFd(fileName) {
            let context = await featureAbility.getContext();
            let filePath;
            await context.getFilesDir().then((data) => {
                filePath = data + "/" + fileName;
                console.info("image case filePath is " + filePath);
            });
            let file = await fs.open(filePath, 0o0)
            return file.fd
        }
        function Logger(caseName) {
            return {
                myName: caseName,
                log: function (msg) {
                    console.info(this.myName + " " + msg);
                },
            };
        }
        async function applyColorMatrixPromise(done, testNum, matrix) {
            let logger = Logger(testNum);
            try {
                let fd = await getFd("colorspace.jpg")
                let imageSource = image.createImageSource(fd);
                logger.log("ImageSource " + (imageSource != undefined));
                if (imageSource == undefined) {
                    logger.log('creat imageSource failed ');
                    expect(false).assertTrue();
                    done();
                    return;
                }
                let decodingOptions = {};
                let pixelMap = await imageSource.createPixelMap(decodingOptions);
                if (pixelMap != undefined) {
                    await pixelMap.applyColorMatrix(matrix);
                    var pixelSize = pixelMap.getPixelBytesNumber();
                    logger.log(`new pixel size ${pixelSize}`);
                    let readBuffer0 = new ArrayBuffer(pixelSize);
                    await pixelMap.readPixelsToBuffer(readBuffer0);
                    let bufferArr0 = new Uint8Array(readBuffer0);
                    for (let i = 0; i < 50; i++) {
                        logger.log("PixelMap buffer[" + i + "] = " + bufferArr0[i]);
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
        }
        async function applyColorMatrixCb(done, testNum, matrix) {
            let logger = Logger(testNum);
            try {
                let fd = await getFd("colorspace.jpg")
                let imageSource = image.createImageSource(fd);
                logger.log("ImageSource " + (imageSource != undefined));
                if (imageSource == undefined) {
                    logger.log('creat imageSource failed ');
                    expect(false).assertTrue();
                    done();
                    return;
                }
                let decodingOptions = {};
                let pixelMap = await imageSource.createPixelMap(decodingOptions);
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    pixelMap.applyColorMatrix(matrix, async (err) => {
                        if (err) {
                            logger.log('applyColorMatrix failed ' + err);
                            expect(false).assertTrue();
                            done();
                            return;
                        }
                        var pixelSize = pixelMap.getPixelBytesNumber();
                        logger.log(`new pixel size ${pixelSize}`);
                        let readBuffer0 = new ArrayBuffer(pixelSize);
                        await pixelMap.readPixelsToBuffer(readBuffer0);
                        let bufferArr0 = new Uint8Array(readBuffer0);
                        for (let i = 0; i < 50; i++) {
                            logger.log("PixelMap buffer[" + i + "] = " + bufferArr0[i]);
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
        }
        async function applyColorMatrixPromiseErr(done, testNum, matrix) {
            let logger = Logger(testNum);
            try {
                let fd = await getFd("colorspace.jpg")
                let imageSource = image.createImageSource(fd);
                logger.log("ImageSource " + (imageSource != undefined));
                if (imageSource == undefined) {
                    logger.log('creat imageSource failed ');
                    expect(false).assertTrue();
                    done();
                    return;
                }
                let decodingOptions = {};
                let pixelMap = await imageSource.createPixelMap(decodingOptions);
                if (pixelMap == undefined) {
                    expect(false).assertTrue();
                    done();
                    return;
                }
                try {
                    await pixelMap.applyColorMatrix(matrix)
                    expect(false).assertTrue();
                    done();
                } catch (error) {
                    logger.log('applyColorMatrix error ' + error);
                    expect(error == ERR_CODE).assertTrue();
                    done();
                }
            } catch (error) {
                logger.log('failed ' + error);
                expect(false).assertTrue();
                done();
            }
        }
        async function applyColorMatrixCbErr(done, testNum, matrix) {
            let logger = Logger(testNum);
            try {
                let fd = await getFd("colorspace.jpg")
                let imageSource = image.createImageSource(fd);
                logger.log("ImageSource " + (imageSource != undefined));
                if (imageSource == undefined) {
                    logger.log('creat imageSource failed ');
                    expect(false).assertTrue();
                    done();
                    return;
                }
                let decodingOptions = {};
                let pixelMap = await imageSource.createPixelMap(decodingOptions);
                logger.log("PixelMap " + pixelMap);
                if (pixelMap != undefined) {
                    pixelMap.applyColorMatrix(matrix, async (err) => {
                        logger.log('applyColorMatrix error ' + err);
                        expect(err == ERR_CODE).assertTrue();
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
        }

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_0100
         * @tc.name      : applyColorMatrix_promise_001
         * @tc.desc      : 1.create imagesource
         *               : 2.create pixelmap
         *               : 3.applyColorMatrix
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_0100', 0, async function (done) {
            let matrix = [
                -1.0, 0, 0, 0, 1,
                0, -1.0, 0, 0, 1,
                0, 0, -1.0, 0, 1,
                0, 0, 0, 1, 0];
            await applyColorMatrixPromise(done, 'SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_0100', matrix)
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_0200
         * @tc.name      : applyColorMatrix_promise_002
         * @tc.desc      : 1.create imagesource
         *               : 2.create pixelmap
         *               : 3.applyColorMatrix
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_0200', 0, async function (done) {
            await applyColorMatrixPromise(done, 'SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_0200',
                image.ColorMatrix.GRAY)
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_0300
         * @tc.name      : applyColorMatrix_promise_003
         * @tc.desc      : 1.create imagesource
         *               : 2.create pixelmap
         *               : 3.applyColorMatrix
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_0300', 0, async function (done) {
            await applyColorMatrixPromise(done, 'SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_0300',
                image.ColorMatrix.INVERT)
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_0400
         * @tc.name      : applyColorMatrix_promise_004
         * @tc.desc      : 1.create imagesource
         *               : 2.create pixelmap
         *               : 3.applyColorMatrix
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_0400', 0, async function (done) {
            await applyColorMatrixPromise(done, 'SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_0400',
                image.ColorMatrix.INCREASE)
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_0500
         * @tc.name      : applyColorMatrix_promise_005
         * @tc.desc      : 1.create imagesource
         *               : 2.create pixelmap
         *               : 3.applyColorMatrix
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_0500', 0, async function (done) {
            await applyColorMatrixPromise(done, 'SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_0500',
                image.ColorMatrix.DECREASE)
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_0100
         * @tc.name      : applyColorMatrix_callback_001
         * @tc.desc      : 1.create imagesource
         *               : 2.create pixelmap
         *               : 3.applyColorMatrix
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_0100', 0, async function (done) {
            let matrix = [
                0.5, 0, 0, 0, 1 / 255,
                0, 0.5, 0, 0, 1 / 255,
                0, 0, 0.5, 0, 1 / 255,
                0, 0, 0, 1, 0];
            await applyColorMatrixCb(done, 'SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_0100', matrix)
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_0200
         * @tc.name      : applyColorMatrix_callback_002
         * @tc.desc      : 1.create imagesource
         *               : 2.create pixelmap
         *               : 3.applyColorMatrix
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_0200', 0, async function (done) {
            await applyColorMatrixCb(done, 'SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_0200',
                image.ColorMatrix.GRAY)
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_0300
         * @tc.name      : applyColorMatrix_callback_003
         * @tc.desc      : 1.create imagesource
         *               : 2.create pixelmap
         *               : 3.applyColorMatrix
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_0300', 0, async function (done) {
            await applyColorMatrixCb(done, 'SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_0300',
                image.ColorMatrix.INVERT)
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_0400
         * @tc.name      : applyColorMatrix_callback_004
         * @tc.desc      : 1.create imagesource
         *               : 2.create pixelmap
         *               : 3.applyColorMatrix
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_0400', 0, async function (done) {
            await applyColorMatrixCb(done, 'SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_0400',
                image.ColorMatrix.INCREASE)
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_0500
         * @tc.name      : applyColorMatrix_callback_005
         * @tc.desc      : 1.create imagesource
         *               : 2.create pixelmap
         *               : 3.applyColorMatrix
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_0500', 0, async function (done) {
            await applyColorMatrixCb(done, 'SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_0500',
                image.ColorMatrix.DECREASE)
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_ERR_0100
         * @tc.name      : applyColorMatrix_promise_err_001
         * @tc.desc      : 1.create imagesource
         *               : 2.create pixelmap
         *               : 3.applyColorMatrix
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_ERR_0100', 0, async function (done) {
            await applyColorMatrixPromiseErr(done, 'SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_ERR_0100', -1)
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_ERR_0200
         * @tc.name      : applyColorMatrix_promise_err_002
         * @tc.desc      : 1.create imagesource
         *               : 2.create pixelmap
         *               : 3.applyColorMatrix
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_ERR_0200', 0, async function (done) {
            await applyColorMatrixPromiseErr(done, 'SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_ERR_0200', 'matrix')
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_ERR_0300
         * @tc.name      : applyColorMatrix_promise_err_003
         * @tc.desc      : 1.create imagesource
         *               : 2.create pixelmap
         *               : 3.applyColorMatrix
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_ERR_0300', 0, async function (done) {
            await applyColorMatrixPromiseErr(done, 'SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_PROMISE_ERR_0300', null)
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_ERR_0100
         * @tc.name      : applyColorMatrix_callback_err_001
         * @tc.desc      : 1.create imagesource
         *               : 2.create pixelmap
         *               : 3.applyColorMatrix
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_ERR_0100', 0, async function (done) {
            await applyColorMatrixCbErr(done, 'SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_ERR_0100', -1)
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_ERR_0200
         * @tc.name      : applyColorMatrix_callback_err_002
         * @tc.desc      : 1.create imagesource
         *               : 2.create pixelmap
         *               : 3.applyColorMatrix
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_ERR_0200', 0, async function (done) {
            await applyColorMatrixCbErr(done, 'SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_ERR_0200', 'matrix')
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_ERR_0300
         * @tc.name      : applyColorMatrix_callback_err_003
         * @tc.desc      : 1.create imagesource
         *               : 2.create pixelmap
         *               : 3.applyColorMatrix
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_ERR_0300', 0, async function (done) {
            await applyColorMatrixCbErr(done, 'SUB_MULTIMEDIA_IMAGE_COLOR_MATRIX_CALLBACK_ERR_0300', null)
        })
    })
}
