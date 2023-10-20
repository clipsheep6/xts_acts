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

import image from "@ohos.multimedia.image";
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'hypium/index';
import resourceManager from '@ohos.resourceManager';

export default function ImageSourceRawFileTest() {
    describe('ImageSourceRawFileTest', function () {
        beforeAll(function () {
            console.info('beforeAll case');
        })

        beforeEach(function () {
            console.info('beforeEach case');
        })

        afterEach(function () {
            console.info('afterEach case');
        })

        afterAll(function () {
            console.info('afterAll case');
        })

        async function rawFileTest(done, testNum, fileName, getImageSource) {
            try {
                let resMgr = await resourceManager.getResourceManager();
                let rawFile = resMgr.getRawFdSync(fileName)
                console.info(`${testNum} getRawFdSync : ${JSON.stringify(rawFile)}`);
                let imageSourceObj = getImageSource(rawFile);
                if (imageSourceObj == undefined) {
                    console.info(`${testNum} create imagesource failed`);
                    expect(false).assertTrue();
                    done();
                    return;
                }
                console.info(`${testNum} Create imagesource success`);
                let decodeOpts = {
                    sampleSize: 1, editable: true,
                    desiredSize: { width: 32, height: 16 },
                    rotate: 0, desiredPixelFormat: 3, index: 0,
                };
                let pixelmap = await imageSourceObj.createPixelMap(decodeOpts);
                if (pixelmap == undefined) {
                    console.info(`${testNum} create pixelmap failed`);
                    expect(false).assertTrue();
                    done();
                    return
                }
                console.info(`${testNum} Create pixelmap success`);
                let imageInfo = await pixelmap.getImageInfo();
                expect(imageInfo.size.width).assertEqual(32);
                expect(imageInfo.size.height).assertEqual(16);
                done();
            } catch (error) {
                console.info(`${testNum}  error: ` + error);
                expect(false).assertTrue();
                done();
            }
        }

        async function rawFileTestErr(done, testNum, decodeOpts, getImageSource) {
            try {
                let resMgr = await resourceManager.getResourceManager();
                let rawFile = resMgr.getRawFdSync("test.png")
                console.info(`${testNum} getRawFdSync : ${JSON.stringify(rawFile)}`);
                let imageSourceObj = getImageSource(rawFile);
                if (imageSourceObj == undefined) {
                    console.info(`${testNum} create imagesource failed`);
                    expect(false).assertTrue();
                    done();
                    return;
                }
                console.info(`${testNum} Create imagesource success`);
                try {
                    let pixelmap = await imageSourceObj.createPixelMap(decodeOpts);
                    expect(false).assertTrue();
                    console.info(`${testNum} Create pixelmap success`);
                    done();
                } catch (error) {
                    expect(true).assertTrue();
                    console.info(`${testNum} create pixelmap failed ${error}`);
                    done();
                }

            } catch (error) {
                console.info(`${testNum}  error: ` + error);
                expect(false).assertTrue();
                done();
            }
        }

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0100
         * @tc.name      : sub_multimedia_image_create_imagesource_png_001
         * @tc.desc      : 1.get rawFd
         *               : 2.create imagesource(rawFile)
         *               : 3.createPixelMap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0100', 0, async function (done) {
            rawFileTest(done, 'SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0100', "test.png", function (rawFile) {
                return image.createImageSource(rawFile);
            })
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0200
         * @tc.name      : sub_multimedia_image_create_imagesource_jpg_002
         * @tc.desc      : 1.get rawFd
         *               : 2.create imagesource(rawFile)
         *               : 3.createPixelMap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0200', 0, async function (done) {
            rawFileTest(done, 'SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0200', "test.jpg", function (rawFile) {
                return image.createImageSource(rawFile);
            })
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0300
         * @tc.name      : sub_multimedia_image_create_imagesource_bmp_003
         * @tc.desc      : 1.get rawFd
         *               : 2.create imagesource(rawFile)
         *               : 3.createPixelMap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0300', 0, async function (done) {
            rawFileTest(done, 'SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0300', "test.bmp", function (rawFile) {
                return image.createImageSource(rawFile);
            })
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0400
         * @tc.name      : sub_multimedia_image_create_imagesource_gif_004
         * @tc.desc      : 1.get rawFd
         *               : 2.create imagesource(rawFile)
         *               : 3.createPixelMap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0400', 0, async function (done) {
            rawFileTest(done, 'SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0400', "moving_test.gif",
                function (rawFile) {
                    return image.createImageSource(rawFile);
                })
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0500
         * @tc.name      : sub_multimedia_image_create_imagesource_svg_005
         * @tc.desc      : 1.get rawFd
         *               : 2.create imagesource(rawFile)
         *               : 3.createPixelMap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0500', 0, async function (done) {
            rawFileTest(done, 'SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0500', "test_large.svg",
                function (rawFile) {
                    return image.createImageSource(rawFile);
                })
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0600
         * @tc.name      : sub_multimedia_image_create_imagesource_webp_006
         * @tc.desc      : 1.get rawFd
         *               : 2.create imagesource(rawFile)
         *               : 3.createPixelMap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0600', 0, async function (done) {
            rawFileTest(done, 'SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0600', "test_large.webp",
                function (rawFile) {
                    return image.createImageSource(rawFile);
                })
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0700
         * @tc.name      : sub_multimedia_image_create_imagesource_raw_007
         * @tc.desc      : 1.get rawFd
         *               : 2.create imagesource(rawFile)
         *               : 3.createPixelMap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0700', 0, async function (done) {
            rawFileTest(done, 'SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0700', "test.nrw", function (rawFile) {
                return image.createImageSource(rawFile);
            })
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0800
         * @tc.name      : sub_multimedia_image_create_imagesource_raw_008
         * @tc.desc      : 1.get rawFd
         *               : 2.create imagesource(rawFile)
         *               : 3.createPixelMap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0800', 0, async function (done) {
            rawFileTest(done, 'SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0800', "test.cr2", function (rawFile) {
                return image.createImageSource(rawFile);
            })
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0900
         * @tc.name      : sub_multimedia_image_create_imagesource_raw_009
         * @tc.desc      : 1.get rawFd
         *               : 2.create imagesource(rawFile)
         *               : 3.createPixelMap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0900', 0, async function (done) {
            rawFileTest(done, 'SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_0900', "test_dng.dng",
                function (rawFile) {
                    return image.createImageSource(rawFile);
                })
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_1000
         * @tc.name      : sub_multimedia_image_create_imagesource_raw_010
         * @tc.desc      : 1.get rawFd
         *               : 2.create imagesource(rawFile)
         *               : 3.createPixelMap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_1000', 0, async function (done) {
            rawFileTest(done, 'SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_1000', "test.arw",
                function (rawFile) {
                    return image.createImageSource(rawFile);
                })
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_1100
         * @tc.name      : sub_multimedia_image_create_imagesource_raw_011
         * @tc.desc      : 1.get rawFd
         *               : 2.create imagesource(rawFile)
         *               : 3.createPixelMap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_1100', 0, async function (done) {
            rawFileTest(done, 'SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_1100', "test.pef",
                function (rawFile) {
                    return image.createImageSource(rawFile);
                })
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_1200
         * @tc.name      : sub_multimedia_image_create_imagesource_raw_012
         * @tc.desc      : 1.get rawFd
         *               : 2.create imagesource(rawFile)
         *               : 3.createPixelMap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_1200', 0, async function (done) {
            rawFileTest(done, 'SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_1200', "test.raf", function (rawFile) {
                return image.createImageSource(rawFile);
            })
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_1300
         * @tc.name      : sub_multimedia_image_create_imagesource_raw_013
         * @tc.desc      : 1.get rawFd
         *               : 2.create imagesource(rawFile)
         *               : 3.createPixelMap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_1300', 0, async function (done) {
            rawFileTest(done, 'SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_1300', "test.rw2", function (rawFile) {
                return image.createImageSource(rawFile);
            })
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_ERR_0100
         * @tc.name      : sub_multimedia_image_create_imagesource_err_001
         * @tc.desc      : 1.get rawFd
         *               : 2.create imagesource(rawFile)
         *               : 3.createPixelMap sampleSize: -1
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_ERR_0100', 0, async function (done) {
            let decodeOpts = {
                sampleSize: -1, editable: true,
                desiredSize: { width: 32, height: 16 },
                rotate: 0, desiredPixelFormat: 3, index: 0,
            };
            rawFileTestErr(done, 'SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_ERR_0100', decodeOpts,
                function (rawFile) {
                    return image.createImageSource(rawFile);
                })
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_ERR_0200
         * @tc.name      : sub_multimedia_image_create_imagesource_err_002
         * @tc.desc      : 1.get rawFd
         *               : 2.create imagesource(rawFile)
         *               : 3.createPixelMap index: -1
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_ERR_0200', 0, async function (done) {
            let decodeOpts = {
                sampleSize: 1, editable: true,
                desiredSize: { width: 32, height: 16 },
                rotate: 0, desiredPixelFormat: 3, index: -1,
            };
            rawFileTestErr(done, 'SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_ERR_0200', decodeOpts,
                function (rawFile) {
                    return image.createImageSource(rawFile);
                })
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_ERR_0300
         * @tc.name      : sub_multimedia_image_create_imagesource_err_003
         * @tc.desc      : 1.get rawFd
         *               : 2.create imagesource(rawFile)
         *               : 3.createPixelMap rotate: -10
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_ERR_0300', 0, async function (done) {
            let decodeOpts = {
                sampleSize: 1, editable: true,
                desiredSize: { width: 32, height: 16 },
                rotate: -10, desiredPixelFormat: 3, index: 0,
            };
            rawFileTestErr(done, 'SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_ERR_0300', decodeOpts,
                function (rawFile) {
                    return image.createImageSource(rawFile);
                })
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_ERR_0400
         * @tc.name      : sub_multimedia_image_create_imagesource_err_004
         * @tc.desc      : 1.get rawFd
         *               : 2.create imagesource(rawFile)
         *               : 3.createPixelMap desiredPixelFormat: 300
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_ERR_0400', 0, async function (done) {
            let decodeOpts = {
                sampleSize: 1, editable: true,
                desiredSize: { width: 32, height: 16 },
                rotate: 0, desiredPixelFormat: 300, index: 0,
            };
            rawFileTestErr(done, 'SUB_MULTIMEDIA_IMAGE_SOURCE_CREATE_BY_RAW_FILE_ERR_0400', decodeOpts,
                function (rawFile) {
                    return image.createImageSource(rawFile);
                })
        })
    })
}