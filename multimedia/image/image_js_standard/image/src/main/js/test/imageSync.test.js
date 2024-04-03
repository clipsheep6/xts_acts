/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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
import fileio from '@ohos.fileio'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import { testPng, testJpg } from './testImg'
import colorSpaceManager from "@ohos.graphics.colorSpaceManager"
import featureAbility from '@ohos.ability.featureAbility'

export default function imageSync() {
    describe('imageSync', function () {
        let filePath;
        let fdNumber;
        let globalpixelmap;
        let globalimageSource;
        let globalpacker;

        async function getFd(fileName) {
            let context = await featureAbility.getContext();
            await context.getFilesDir().then((data) => {
                filePath = data + '/' + fileName;
                console.info('image case filePath is ' + filePath);
            })
            await fileio.open(filePath).then((data) => {
                fdNumber = data;
                console.info("image case open fd success " + fdNumber);
            }, (err) => {
                console.info("image cese open fd fail" + err)
            }).catch((err) => {
                console.info("image case open fd err " + err);
            })
        }

        beforeAll(async function () {
            console.info('beforeAll case');
        })

        beforeEach(function () {
            console.info('beforeEach case');
        })

        afterEach(async function () {
            if (globalpixelmap != undefined) {
                console.info('globalpixelmap release start');
                try {
                    await globalpixelmap.release();
                } catch (error) {
                    console.info('globalpixelmap release fail');
                }
            }
            if (globalimageSource != undefined) {
                console.info('globalimageSource release start');
                try {
                    await globalimageSource.release();
                } catch (error) {
                    console.info('globalimageSource release fail');
                }
            }
            if (globalpacker != undefined) {
                console.info('globalpacker release start');
                try {
                    await globalpacker.release();
                } catch (error) {
                    console.info('globalpacker release fail');
                }
            }
            console.info('afterEach case');
        })

        afterAll(async function () {
            console.info('afterAll case');
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0100
         * @tc.name      : test all information with getImageInfoSync for jpg
         * @tc.desc      : 1.create jpg imagesource
         *                 2.call getImageInfoSync(index:0)
         *                 3.return imageinfo
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0100', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0100 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    let imageInfoHeight = 1476;
                    let imageInfoWidth = 1446;
                    let imageInfo = imageSourceApi.getImageInfoSync(0);
                    expect(imageInfo != undefined).assertTrue();
                    expect(imageInfo.size.height).assertEqual(imageInfoHeight);
                    expect(imageInfo.size.width).assertEqual(imageInfoWidth);
                    expect(imageInfo.density == undefined).assertTrue();
                    expect(imageInfo.stride == undefined).assertTrue();
                    expect(imageInfo.pixelFormat == 0).assertTrue();
                    expect(imageInfo.alphaType == 0).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0100 imageInfo:');
                    console.info('imageInfo.size.height:' + imageInfo.size.height);
                    console.info('imageInfo.size.width:' + imageInfo.size.width);
                    console.info('imageInfo.density:' + imageInfo.density);
                    console.info('imageInfo.stride:' + imageInfo.stride);
                    console.info('imageInfo.pixelFormat:' + imageInfo.pixelFormat);
                    console.info('imageInfo.alphaType:' + imageInfo.alphaType);
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0100 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0200
         * @tc.name      : test all information with getImageInfoSync for bmp
         * @tc.desc      : 1.create bmp imagesource
         *                 2.call getImageInfoSync(index:0)
         *                 3.return imageinfo
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0200', 0, async function (done) {
            try {
                await getFd('test.bmp');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0200 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    let imageInfoHeight = 1042;
                    let imageInfoWidth = 1399;
                    let imageInfo = imageSourceApi.getImageInfoSync(0);
                    expect(imageInfo != undefined).assertTrue();
                    expect(imageInfo.size.height).assertEqual(imageInfoHeight);
                    expect(imageInfo.size.width).assertEqual(imageInfoWidth);
                    expect(imageInfo.density == undefined).assertTrue();
                    expect(imageInfo.stride == undefined).assertTrue();
                    expect(imageInfo.pixelFormat == 0).assertTrue();
                    expect(imageInfo.alphaType == 0).assertTrue();
                    console.warn('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0200 imageInfo:');
                    console.info('imageInfo.size.height:' + imageInfo.size.height);
                    console.info('imageInfo.size.width:' + imageInfo.size.width);
                    console.info('imageInfo.density:' + imageInfo.density);
                    console.info('imageInfo.stride:' + imageInfo.stride);
                    console.info('imageInfo.pixelFormat:' + imageInfo.pixelFormat);
                    console.info('imageInfo.alphaType:' + imageInfo.alphaType);
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0200 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0300
         * @tc.name      : test all information with getImageInfoSync for png
         * @tc.desc      : 1.create png imagesource
         *                 2.call getImageInfoSync(index:0)
         *                 3.return imageinfo
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0300', 0, async function (done) {
            try {
                await getFd('test.png');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0300 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    let imageInfoHeight = 3384;
                    let imageInfoWidth = 6016;
                    let imageInfo = imageSourceApi.getImageInfoSync(0);
                    expect(imageInfo != undefined).assertTrue();
                    expect(imageInfo.size.height).assertEqual(imageInfoHeight);
                    expect(imageInfo.size.width).assertEqual(imageInfoWidth);
                    expect(imageInfo.density == undefined).assertTrue();
                    expect(imageInfo.stride == undefined).assertTrue();
                    expect(imageInfo.pixelFormat == 0).assertTrue();
                    expect(imageInfo.alphaType == 0).assertTrue();
                    console.log('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0300 imageInfo:');
                    console.info('imageInfo.size.height:' + imageInfo.size.height);
                    console.info('imageInfo.size.width:' + imageInfo.size.width);
                    console.info('imageInfo.density:' + imageInfo.density);
                    console.info('imageInfo.stride:' + imageInfo.stride);
                    console.info('imageInfo.pixelFormat:' + imageInfo.pixelFormat);
                    console.info('imageInfo.alphaType:' + imageInfo.alphaType);
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0300 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0400
         * @tc.name      : test all information with getImageInfoSync for gif
         * @tc.desc      : 1.create gif imagesource
         *                 2.call getImageInfoSync(index:0)
         *                 3.return imageinfo
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0400', 0, async function (done) {
            try {
                await getFd('test.gif');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0400 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    let imageInfoHeight = 3384;
                    let imageInfoWidth = 6016;
                    let imageInfo = imageSourceApi.getImageInfoSync(0);
                    expect(imageInfo != undefined).assertTrue();
                    expect(imageInfo.size.height).assertEqual(imageInfoHeight);
                    expect(imageInfo.size.width).assertEqual(imageInfoWidth);
                    expect(imageInfo.density == undefined).assertTrue();
                    expect(imageInfo.stride == undefined).assertTrue();
                    expect(imageInfo.pixelFormat == 0).assertTrue();
                    expect(imageInfo.alphaType == 0).assertTrue();
                    console.error('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0400 imageInfo:');
                    console.info('imageInfo.size.height:' + imageInfo.size.height);
                    console.info('imageInfo.size.width:' + imageInfo.size.width);
                    console.info('imageInfo.density:' + imageInfo.density);
                    console.info('imageInfo.stride:' + imageInfo.stride);
                    console.info('imageInfo.pixelFormat:' + imageInfo.pixelFormat);
                    console.info('imageInfo.alphaType:' + imageInfo.alphaType);
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0400 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0500
         * @tc.name      : test all information with getImageInfoSync for dng
         * @tc.desc      : 1.create dng imagesource
         *                 2.call getImageInfoSync(index:0)
         *                 3.return imageinfo
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0500', 0, async function (done) {
            try {
                await getFd('test_dng.dng');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0500 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    let imageInfoHeight = 2728;
                    let imageInfoWidth = 3074;
                    let imageInfo = imageSourceApi.getImageInfoSync(0);
                    expect(imageInfo != undefined).assertTrue();
                    expect(imageInfo.size.height).assertEqual(imageInfoHeight);
                    expect(imageInfo.size.width).assertEqual(imageInfoWidth);
                    expect(imageInfo.density == undefined).assertTrue();
                    expect(imageInfo.stride == undefined).assertTrue();
                    expect(imageInfo.pixelFormat == 0).assertTrue();
                    expect(imageInfo.alphaType == 0).assertTrue();
                    console.debug('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0500 imageInfo:');
                    console.info('imageInfo.size.height:' + imageInfo.size.height);
                    console.info('imageInfo.size.width:' + imageInfo.size.width);
                    console.info('imageInfo.density:' + imageInfo.density);
                    console.info('imageInfo.stride:' + imageInfo.stride);
                    console.info('imageInfo.pixelFormat:' + imageInfo.pixelFormat);
                    console.info('imageInfo.alphaType:' + imageInfo.alphaType);
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0500 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0600
         * @tc.name      : test all information with getImageInfoSync for webp
         * @tc.desc      : 1.create webp imagesource
         *                 2.call getImageInfoSync(index:0)
         *                 3.return imageinfo
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0600', 0, async function (done) {
            try {
                await getFd('test_large.webp');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0600 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    let imageInfoHeight = 681;
                    let imageInfoWidth = 1212;
                    let imageInfo = imageSourceApi.getImageInfoSync(0);
                    expect(imageInfo != undefined).assertTrue();
                    expect(imageInfo.size.height).assertEqual(imageInfoHeight);
                    expect(imageInfo.size.width).assertEqual(imageInfoWidth);
                    expect(imageInfo.density == undefined).assertTrue();
                    expect(imageInfo.stride == undefined).assertTrue();
                    expect(imageInfo.pixelFormat == 0).assertTrue();
                    expect(imageInfo.alphaType == 0).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0600 imageInfo:');
                    console.info('imageInfo.size.height:' + imageInfo.size.height);
                    console.info('imageInfo.size.width:' + imageInfo.size.width);
                    console.info('imageInfo.density:' + imageInfo.density);
                    console.info('imageInfo.stride:' + imageInfo.stride);
                    console.info('imageInfo.pixelFormat:' + imageInfo.pixelFormat);
                    console.info('imageInfo.alphaType:' + imageInfo.alphaType);
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0600 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0700
         * @tc.name      : test all information with getImageInfoSync for svg
         * @tc.desc      : 1.create svg imagesource
         *                 2.call getImageInfoSync(index:0)
         *                 3.return imageinfo
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0700', 0, async function (done) {
            try {
                await getFd('test_large.svg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0700 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    let imageInfoHeight = 1968;
                    let imageInfoWidth = 2136;
                    let imageInfo = imageSourceApi.getImageInfoSync(0);
                    expect(imageInfo != undefined).assertTrue();
                    expect(imageInfo.size.height).assertEqual(imageInfoHeight);
                    expect(imageInfo.size.width).assertEqual(imageInfoWidth);
                    expect(imageInfo.density == undefined).assertTrue();
                    expect(imageInfo.stride == undefined).assertTrue();
                    expect(imageInfo.pixelFormat == 0).assertTrue();
                    expect(imageInfo.alphaType == 0).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0700 imageInfo:');
                    console.info('imageInfo.size.height:' + imageInfo.size.height);
                    console.info('imageInfo.size.width:' + imageInfo.size.width);
                    console.info('imageInfo.density:' + imageInfo.density);
                    console.info('imageInfo.stride:' + imageInfo.stride);
                    console.info('imageInfo.pixelFormat:' + imageInfo.pixelFormat);
                    console.info('imageInfo.alphaType:' + imageInfo.alphaType);
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0700 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0800
         * @tc.name      : test all information with getImageInfoSync for ico
         * @tc.desc      : 1.create ico imagesource
         *                 2.call getImageInfoSync(index:0)
         *                 3.return imageinfo
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0800', 0, async function (done) {
            try {
                await getFd('test.ico');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0800 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    let imageInfoHeight = 128;
                    let imageInfoWidth = 128;
                    let imageInfo = imageSourceApi.getImageInfoSync(0);
                    expect(imageInfo != undefined).assertTrue();
                    expect(imageInfo.size.height).assertEqual(imageInfoHeight);
                    expect(imageInfo.size.width).assertEqual(imageInfoWidth);
                    expect(imageInfo.density == undefined).assertTrue();
                    expect(imageInfo.stride == undefined).assertTrue();
                    expect(imageInfo.pixelFormat == 0).assertTrue();
                    expect(imageInfo.alphaType == 0).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0800 imageInfo:');
                    console.info('imageInfo.size.height:' + imageInfo.size.height);
                    console.info('imageInfo.size.width:' + imageInfo.size.width);
                    console.info('imageInfo.density:' + imageInfo.density);
                    console.info('imageInfo.stride:' + imageInfo.stride);
                    console.info('imageInfo.pixelFormat:' + imageInfo.pixelFormat);
                    console.info('imageInfo.alphaType:' + imageInfo.alphaType);
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0800 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0900
         * @tc.name      : test getImageInfoSync for wrong suffix image
         * @tc.desc      : 1.create wrong suffix imagesource
         *                 2.call getImageInfoSync(index:0)
         *                 3.return imageinfo
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0900', 0, async function (done) {
            try {
                await getFd('test.123');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0900 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    try {
                        let imageInfoHeight = 3384;
                        let imageInfoWidth = 6016;
                        let imageInfo = imageSourceApi.getImageInfoSync(0);
                        expect(imageInfo.size.height).assertEqual(imageInfoHeight);
                        expect(imageInfo.size.width).assertEqual(imageInfoWidth);
                        expect(imageInfo != undefined).assertTrue();
                        expect(imageInfo.density == undefined).assertTrue();
                        expect(imageInfo.stride == undefined).assertTrue();
                        expect(imageInfo.pixelFormat == 0).assertTrue();
                        expect(imageInfo.alphaType == 0).assertTrue();
                        console.info('imageInfo.size.height:' + imageInfo.size.height);
                        console.info('imageInfo.size.width:' + imageInfo.size.width);
                        console.info('imageInfo.density:' + imageInfo.density);
                        console.info('imageInfo.stride:' + imageInfo.stride);
                        console.info('imageInfo.pixelFormat:' + imageInfo.pixelFormat);
                        console.info('imageInfo.alphaType:' + imageInfo.alphaType);
                        console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0900 success');
                        done();
                    } catch (error) {
                        console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0900 failed' + error);
                        expect(false).assertTrue();
                        done();
                    }
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_0900 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_INDEX_0100
         * @tc.name      : test getImageInfoSync with index1 for one frame gif
         * @tc.desc      : 1.create one frame gif imagesource
         *                 2.call getImageInfoSync(index:1)
         *                 3.return imageinfo
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_INDEX_0100', 0, async function (done) {
            try {
                await getFd('test.gif');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_INDEX_0100 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    let imageInfo = imageSourceApi.getImageInfoSync(1);
                    expect(imageInfo == undefined).assertTrue();
                    console.log('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_INDEX_0100 success');
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_INDEX_0100 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_INDEX_0200
         * @tc.name      : test getImageInfoSync with index-1 for one frame gif
         * @tc.desc      : 1.create gif imagesource
         *                 2.call getImageInfoSync(index:-1)
         *                 3.return imageinfo
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_INDEX_0200', 0, async function (done) {
            try {
                await getFd('test.gif');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_INDEX_0200 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    let imageInfo = imageSourceApi.getImageInfoSync(-1);
                    expect(imageInfo == undefined).assertTrue();
                    console.log('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_INDEX_0200 success');
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_INDEX_0200 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_INDEX_0300
         * @tc.name      : test getImageInfoSync with index1 for gif
         * @tc.desc      : 1.create gif imagesource
         *                 2.call getImageInfoSync(index:1)
         *                 3.return imageinfo
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_INDEX_0300', 0, async function (done) {
            try {
                await getFd('moving_test.gif');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_INDEX_0300 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    let imageInfoHeight = 202;
                    let imageInfoWidth = 198;
                    let imageInfo = imageSourceApi.getImageInfoSync(1);
                    expect(imageInfo.size.height).assertEqual(imageInfoHeight);
                    expect(imageInfo.size.width).assertEqual(imageInfoWidth);
                    expect(imageInfo != undefined).assertTrue();
                    expect(imageInfo.density == undefined).assertTrue();
                    expect(imageInfo.stride == undefined).assertTrue();
                    expect(imageInfo.pixelFormat == 0).assertTrue();
                    expect(imageInfo.alphaType == 0).assertTrue();
                    console.info('imageInfo.size.height:' + imageInfo.size.height);
                    console.info('imageInfo.size.width:' + imageInfo.size.width);
                    console.info('imageInfo.density:' + imageInfo.density);
                    console.info('imageInfo.stride:' + imageInfo.stride);
                    console.info('imageInfo.pixelFormat:' + imageInfo.pixelFormat);
                    console.info('imageInfo.alphaType:' + imageInfo.alphaType);
                    console.log('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_INDEX_0300 success');
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_GETIMAGEINFOSYNC_INDEX_0300 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0100
         * @tc.name      : test createPixelMapSync with buffer data png
         * @tc.desc      : 1.create png incremental source
         *                 2.update data
         *                 3.create pixelmap sync
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0100', 0, async function (done) {
            try {
                let testimagebuffer = testPng;
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0100 0003 ' + testimagebuffer.length);
                let bufferSize = testimagebuffer.length;
                let offset = 0;
                const incSouce = image.CreateIncrementalSource(new ArrayBuffer(1));
                globalimageSource = incSouce;
                let ret;
                let isFinished = false;
                while (offset < testimagebuffer.length) {
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0100 0006 ' + testimagebuffer.length);
                    var oneStep = testimagebuffer.slice(offset, offset + bufferSize);
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0100 0007 ' + oneStep.length);
                    if (oneStep.length < bufferSize) {
                        isFinished = true;
                    }
                    ret = await incSouce.updateData(oneStep, isFinished, 0, oneStep.length);
                    if (!ret) {
                        console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0100 updateData failed');
                        expect(ret).assertTrue();
                        break;
                    }
                    offset = offset + oneStep.length;
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0100 0011 ' + offset);
                }
                if (ret) {
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0100 updateData success ');
                    let decodingOptions = {
                        sampleSize: 1
                    };
                    let pixelmap = incSouce.createPixelMapSync(decodingOptions)
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0100 0014' + pixelmap);
                    expect(pixelmap != undefined).assertTrue();
                    done();
                } else {
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0100 updateData failed ' + error);
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0200
         * @tc.name      : test createPixelMapSync with buffer data jpg
         * @tc.desc      : 1.create jpg incremental source
         *                 2.update data
         *                 3.create pixelmap sync
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0200', 0, async function (done) {
            try {
                let testimagebuffer = testJpg;
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0200 0003 ' + testimagebuffer.length);
                let bufferSize = testimagebuffer.length;
                let offset = 0;
                const incSouce = image.CreateIncrementalSource(new ArrayBuffer(1));
                globalimageSource = incSouce;
                let isFinished = false;
                let ret;
                while (offset < testimagebuffer.length) {
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0200 0006 ' + testimagebuffer.length);
                    var oneStep = testimagebuffer.slice(offset, offset + bufferSize);
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0200 0007 ' + oneStep.length);
                    if (oneStep.length < bufferSize) {
                        isFinished = true;
                    }
                    ret = await incSouce.updateData(oneStep, isFinished, 0, oneStep.length);
                    if (!ret) {
                        console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0200 updateData failed');
                        expect(ret).assertTrue();
                        break;
                    }
                    offset = offset + oneStep.length;
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0200 0011 ' + offset);
                }
                if (ret) {
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0200 updateData success ');
                    let decodingOptions = {
                        sampleSize: 1
                    };
                    let pixelmap = incSouce.createPixelMapSync(decodingOptions);
                    expect(pixelmap != undefined).assertTrue();
                    done();
                } else {
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0200 updateData failed ' + error);
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0300
         * @tc.name      : test createPixelMapSync with decodingOption index0
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions-index0
         *                 3.create PixelMap
         *                 4.return PixelMap
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0300', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0300 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    let decodingOptions = {
                        index: 0
                    };
                    let pixelmap = imageSourceApi.createPixelMapSync(decodingOptions);
                    globalpixelmap = pixelmap;
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0300 success ');
                    expect(pixelmap != undefined).assertTrue();
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0300 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0400
         * @tc.name      : test createPixelMapSync with decodingOption index-1
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions-index-1
         *                 3.create PixelMap
         *                 4.return PixelMap
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0400', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0400 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    let decodingOptions = {
                        index: -1
                    };
                    let pixelmap = imageSourceApi.createPixelMapSync(decodingOptions);
                    globalpixelmap = pixelmap;
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0400 success ');
                    expect(pixelmap == undefined).assertTrue();
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0400 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0500
         * @tc.name      : test createPixelMapSync with decodingOption sampleSize
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions-sampleSize
         *                 3.create PixelMap
         *                 4.return PixelMap
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0500', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0500 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    let decodingOptions = {
                        sampleSize: 1
                    };
                    let pixelmap = imageSourceApi.createPixelMapSync(decodingOptions);
                    globalpixelmap = pixelmap;
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0500 success ');
                    expect(pixelmap != undefined).assertTrue();
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0500 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0600
         * @tc.name      : test createPixelMapSync with decodingOption rotate
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions-rotate
         *                 3.create PixelMap
         *                 4.return PixelMap
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0600', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0600 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    let decodingOptions = {
                        rotate: 10
                    };
                    let pixelmap = imageSourceApi.createPixelMapSync(decodingOptions);
                    globalpixelmap = pixelmap;
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0600 success ');
                    expect(pixelmap != undefined).assertTrue();
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0600 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0700
         * @tc.name      : test createPixelMapSync with decodingOption editable
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions-editable
         *                 3.create PixelMap
         *                 4.return PixelMap
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0700', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0700 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    let decodingOptions = {
                        editable: true
                    };
                    let pixelmap = imageSourceApi.createPixelMapSync(decodingOptions);
                    globalpixelmap = pixelmap;
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0700 success ');
                    expect(pixelmap != undefined).assertTrue();
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0700 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0800
         * @tc.name      : test createPixelMapSync with decodingOption desiredSize
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions-desiredSize
         *                 3.create PixelMap
         *                 4.return PixelMap
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0800', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0800 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    let decodingOptions = {
                        desiredSize: { width: 1, height: 2 }
                    };
                    let pixelmap = imageSourceApi.createPixelMapSync(decodingOptions);
                    globalpixelmap = pixelmap;
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0800 success ');
                    expect(pixelmap != undefined).assertTrue();
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0800 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0900
         * @tc.name      : test createPixelMapSync with decodingOption desiredRegion
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions-desiredRegion
         *                 3.create PixelMap
         *                 4.return PixelMap
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0900', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0900 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    let decodingOptions = {
                        desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 }
                    };
                    let pixelmap = imageSourceApi.createPixelMapSync(decodingOptions);
                    globalpixelmap = pixelmap;
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0900 success ');
                    expect(pixelmap != undefined).assertTrue();
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_0900 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_1000
         * @tc.name      : test createPixelMapSync with decodingOption desiredPixelFormat
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions-desiredPixelFormat
         *                 3.create PixelMap
         *                 4.return PixelMap
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_1000', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_1000 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    let decodingOptions = {
                        desiredPixelFormat: 0
                    };
                    let pixelmap = imageSourceApi.createPixelMapSync(decodingOptions);
                    globalpixelmap = pixelmap;
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_1000 success ');
                    expect(pixelmap != undefined).assertTrue();
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_1000 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_1100
         * @tc.name      : test createPixelMapSync with decodingOption fitDensity
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions-fitDensity
         *                 3.create PixelMap
         *                 4.return PixelMap
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_1100', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_1100 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    let decodingOptions = {
                        fitDensity: 240
                    };
                    let pixelmap = imageSourceApi.createPixelMapSync(decodingOptions);
                    globalpixelmap = pixelmap;
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_1100 success ');
                    expect(pixelmap != undefined).assertTrue();
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_1100 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_1200
         * @tc.name      : test createPixelMapSync with decodingOption desiredColorSpace
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions-desiredColorSpace
         *                 3.create PixelMap
         *                 4.return PixelMap
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_1200', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_1200 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    let csm = colorSpaceManager.create(colorSpaceManager.ColorSpace.SRGB, 2.4);
                    let decodingOptions = {
                        desiredColorSpace: csm
                    };
                    let pixelmap = imageSourceApi.createPixelMapSync(decodingOptions);
                    globalpixelmap = pixelmap;
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_1200 success ');
                    expect(pixelmap != undefined).assertTrue();
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_1200 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_1300
         * @tc.name      : test createPixelMapSync with decodingOption null
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions-null
         *                 3.create PixelMap
         *                 4.return PixelMap
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_1300', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_1300 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    globalimageSource = imageSourceApi;
                    let pixelmap = imageSourceApi.createPixelMapSync();
                    globalpixelmap = pixelmap;
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_1300 success ');
                    expect(pixelmap != undefined).assertTrue();
                    done();
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAPSYNC_1300 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })
    })
}
