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
import fileio from '@ohos.fileio'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import featureAbility from '@ohos.ability.featureAbility'

export default function imageDecodeOptions() {
    describe('imageDecodeOptions', function () {
        let filePath;
        let fdNumber;
        let globalpixelmap;
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
            console.info('afterEach case');
        })

        afterAll(async function () {
            console.info('afterAll case');
        })
        


        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_JPG_0100
         * @tc.name      : createPixelMap(decodingOptions)-pixelformat:RGBA_8888-jpg
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_JPG_0100', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_JPG_0100 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    let decodingOptions = {
                        sampleSize: 1,
                        editable: true,
                        desiredSize: { width: 1, height: 2 },
                        rotate: 10,
                        desiredPixelFormat: 3,
                        desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                        index: 0
                    };
                    imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                        if (err) {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_JPG_0100 createPixelMap error  ' + JSON.stringify(err));
                            expect(false).assertTrue();
                            done();
                        } else {
                            globalpixelmap = pixelmap;
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_JPG_0100 success ');
                            expect(pixelmap != undefined).assertTrue();
                            done();
                        }
                    })
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_JPG_0100 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_JPG_0200
         * @tc.name      : createPixelMap(decodingOptions)-pixelformat:RGB_565-jpg
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_JPG_0200', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_JPG_0200 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    let decodingOptions = {
                        sampleSize: 1,
                        editable: true,
                        desiredSize: { width: 1, height: 2 },
                        rotate: 10,
                        desiredPixelFormat: 2,
                        desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                        index: 0
                    };
                    imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                        if (err) {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_JPG_0200 createPixelMap error  ' + JSON.stringify(err));
                            expect(false).assertTrue();
                            done();
                        } else {
                            globalpixelmap = pixelmap;
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_JPG_0200 success ');
                            expect(pixelmap != undefined).assertTrue();
                            done();
                        }
                    })
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_JPG_0200 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_JPG_0300
         * @tc.name      : createPixelMap(decodingOptions)-pixelformat:unknown-jpg
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return null
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_JPG_0300', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_JPG_0300 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    let decodingOptions = {
                        sampleSize: 1,
                        editable: true,
                        desiredSize: { width: 1, height: 2 },
                        rotate: 10,
                        desiredPixelFormat: 0,
                        desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                        index: 0
                    };
                    imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                        if (err) {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_JPG_0300 createPixelMap error  ' + JSON.stringify(err));
                            expect(false).assertTrue();
                            done();
                        } else {
                            globalpixelmap = pixelmap;
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_JPG_0300 success ');
                            expect(pixelmap != undefined).assertTrue();
                            done();
                        }
                    })
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_JPG_0300 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_JPG_0100
         * @tc.name      : createPixelMap(decodingOptions: index 1})-jpg
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_JPG_0100', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_JPG_0100 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    let decodingOptions = {
                        sampleSize: 1,
                        editable: true,
                        desiredSize: { width: 1, height: 2 },
                        rotate: 10,
                        desiredPixelFormat: 0,
                        desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                        index: 1
                    };
                    imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                        if (err) {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_JPG_0100 success ');
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_JPG_0100 createPixelMap error ' + JSON.stringify(err));
                            expect(true).assertTrue();
                            done();
                        } else {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_JPG_0100 fail  ' + pixelmap);
                            expect(false).assertTrue();
                            done();
                        }
                    })
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_JPG_0100 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_JPG_0200
         * @tc.name      : createPixelMap(decodingOptions:index -1})-jpg
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_JPG_0200', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_JPG_0200 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    let decodingOptions = {
                        sampleSize: 1,
                        editable: true,
                        desiredSize: { width: 1, height: 2 },
                        rotate: 10,
                        desiredPixelFormat: 0,
                        desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                        index: -1
                    };
                    imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                        if (err) {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_JPG_0200 success ');
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_JPG_0200 createPixelMap error ' + JSON.stringify(err));
                            expect(true).assertTrue();
                            done();
                        } else {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_JPG_0200 fail  ' + pixelmap);
                            expect(false).assertTrue();
                            done();
                        }
                    })
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_JPG_0200 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_JPG_0100
         * @tc.name      : createPixelMap(decodingOptions:sampleSize -1})-jpg
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_JPG_0100', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_JPG_0100 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    let decodingOptions = {
                        sampleSize: -1,
                        editable: true,
                        desiredSize: { width: 1, height: 2 },
                        rotate: 10,
                        desiredPixelFormat: 0,
                        desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                        index: 0
                    };
                    imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                        if (err) {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_JPG_0100 success ');
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_JPG_0100 createPixelMap error ' + JSON.stringify(err));
                            expect(true).assertTrue();
                            done();
                        } else {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_JPG_0100 fail  ' + pixelmap);
                            expect(false).assertTrue();
                            done();
                        }
                    })
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_JPG_0100 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0100
         * @tc.name      : createPixelMap(decodingOptions:rotate -10})-jpg
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0100', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0100 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    let decodingOptions = {
                        sampleSize: 1,
                        editable: true,
                        desiredSize: { width: 1, height: 2 },
                        rotate: -10,
                        desiredPixelFormat: 2,
                        desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                        index: 0
                    };
                    imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                        if (err) {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0100 success ');
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0100 createPixelMap error ' + JSON.stringify(err));
                            expect(true).assertTrue();
                            done();
                        } else {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0100 fail  ' + pixelmap);
                            expect(false).assertTrue();
                            done();
                        }
                    })
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0100 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_JPG_0100
         * @tc.name      : createPixelMap(decodingOptions:unsupported pixelformat)-jpg 
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_JPG_0100', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_JPG_0100 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    let decodingOptions = {
                        sampleSize: 1,
                        editable: true,
                        desiredSize: { width: 1, height: 2 },
                        rotate: 10,
                        desiredPixelFormat: 60,
                        desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                        index: 0
                    };
                    imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                        if (err) {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_JPG_0100 success ');
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_JPG_0100 createPixelMap error ' + JSON.stringify(err));
                            expect(true).assertTrue();
                            done();
                        } else {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_JPG_0100 fail  ' + pixelmap);
                            expect(false).assertTrue();
                            done();
                        }
                    })
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_JPG_0100 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_JPG_0100
         * @tc.name      : createPixelMap(decodingOptions:editable false})-jpg
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1             
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_JPG_0100', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_JPG_0100 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    let decodingOptions = {
                        sampleSize: 1,
                        editable: false,
                        desiredSize: { width: 1, height: 2 },
                        rotate: 10,
                        desiredPixelFormat: 2,
                        desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                        index: 0
                    };
                    imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                        if (err) {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_JPG_0100 createPixelMap error ' + JSON.stringify(err));
                            expect(false).assertTrue();
                            done();
                        } else {
                            globalpixelmap = pixelmap;
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_JPG_0100 success ');
                            expect(pixelmap != undefined).assertTrue();
                            done();
                        }
                    })
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_JPG_0100 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_JPG_0100
         * @tc.name      : createPixelMap(decodingOptions:desiredSize>imagesize)-jpg
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_JPG_0100', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_JPG_0100 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    let decodingOptions = {
                        sampleSize: 1,
                        editable: true,
                        desiredSize: { width: 10000, height: 10000 },
                        rotate: 10,
                        desiredPixelFormat: 2,
                        desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                        index: 0
                    };
                    imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                        if (err) {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_JPG_0100 createPixelMap error ' + JSON.stringify(err));
                            expect(false).assertTrue();
                            done();
                        } else {
                            globalpixelmap = pixelmap;
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_JPG_0100 success ');
                            expect(pixelmap != undefined).assertTrue();
                            done();
                        }
                    })
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_JPG_0100 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_JPG_0200
         * @tc.name      : createPixelMap(decodingOptions:desiredRegion>imagesize)-jpg
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_JPG_0200', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_JPG_0200 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    let decodingOptions = {
                        sampleSize: 1,
                        editable: true,
                        desiredSize: { width: 1, height: 2 },
                        rotate: 10,
                        desiredPixelFormat: 2,
                        desiredRegion: { size: { height: 10000, width: 10000 }, x: 0, y: 0 },
                        index: 0
                    };
                    imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                        if (err) {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_JPG_0200 createPixelMap err ' + JSON.stringify(err));
                            expect(false).assertTrue();
                            done();
                        } else {
                            globalpixelmap = pixelmap;
                            pixelmap.getImageInfo().then((imageInfo) => {
                                expect(imageInfo.size.height == 2).assertTrue();
                                expect(imageInfo.size.width == 1).assertTrue();
                                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_JPG_0200 success ');
                                console.info("imageInfo height :" + imageInfo.size.height );
                                console.info("imageInfo width : " + imageInfo.size.width);
                                done();
                            }).catch((err) => {
                                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_JPG_0200 getimageInfo err ' + JSON.stringify(err));
                            })
                        }
                    })
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_JPG_0200 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_JPG_0100
         * @tc.name      : createPixelMapdecodingOptions:x -1 y -1)-jpg
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_JPG_0100', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_JPG_0100 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    let decodingOptions = {
                        sampleSize: 1,
                        editable: true,
                        desiredSize: { width: 1, height: 2 },
                        rotate: 10,
                        desiredPixelFormat: 2,
                        desiredRegion: { size: { height: 1, width: 2 }, x: -1, y: -1 },
                        index: 0
                    };
                    imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                        if (err) {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_JPG_0100 success ');
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_JPG_0100 createPixelMap error ' + JSON.stringify(err));
                            expect(true).assertTrue();
                            done();
                        } else {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_JPG_0100 fail  ' + pixelmap);
                            expect(false).assertTrue();
                            done();
                        }
                    })
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_JPG_0100 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_JPG_0200
         * @tc.name      : createPixelMap(decodingOptions:x > image.height y > image.width)-jpg
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_JPG_0200', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_JPG_0200 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    let decodingOptions = {
                        sampleSize: 1,
                        editable: true,
                        desiredSize: { width: 1, height: 2 },
                        rotate: 10,
                        desiredPixelFormat: 2,
                        desiredRegion: { size: { height: 1, width: 2 }, x: 10000, y: 10000 },
                        index: 0
                    };
                    imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                        if (err) {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_JPG_0200 success ');
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_JPG_0200 createPixelMap error ' + JSON.stringify(err));
                            expect(true).assertTrue();
                            done();
                        } else {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_JPG_0200 fail  ' + pixelmap);
                            expect(false).assertTrue();
                            done();
                        }
                    })
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_JPG_0200 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0200
         * @tc.name      : createPixelMap(decodingOptions:rotate>360)-jpg
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0200', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0200 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    let decodingOptions = {
                        sampleSize: 1,
                        editable: true,
                        desiredSize: { width: 1, height: 2 },
                        rotate: 500,
                        desiredPixelFormat: 2,
                        desiredRegion: { size: { height: 1, width: 2 }, x: 1, y: 2 },
                        index: 0
                    };
                    imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                        if (err) {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0200 success ');
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0200 createPixelMap error ' + JSON.stringify(err));
                            expect(true).assertTrue();
                            done();
                        } else {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0200 fail  ' + pixelmap);
                            expect(false).assertTrue();
                            done();
                        }
                    })
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0200 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PROMISE_JPG_0100
         * @tc.name      : createPixelMap-promise-jpg
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PROMISE_JPG_0100', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PROMISE_JPG_0100 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    imageSourceApi.createPixelMap().then(pixelmap => {
                        globalpixelmap = pixelmap;
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PROMISE_JPG_0100 success ');
                        expect(pixelmap != undefined).assertTrue();
                        done();
                    }).catch(error => {
                        console.log('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PROMISE_JPG_0100 error: ' + error);
                        expect().assertFail();
                        done();
                    })
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PROMISE_JPG_0100 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_CALLBACK_JPG_0100
         * @tc.name      : createPixelMap-callback-jpg
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return null
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_CALLBACK_JPG_0100', 0, async function (done) {
            try {
                await getFd('test.jpg');
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_CALLBACK_JPG_0100 create image source failed');
                    expect(false).assertTrue();
                    done();
                } else {
                    imageSourceApi.createPixelMap((err, pixelmap) => {
                        globalpixelmap = pixelmap;
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_CALLBACK_JPG_0100 success ');
                        expect(pixelmap != undefined).assertTrue();
                        done();
                    })
                }
            } catch (error) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_CALLBACK_JPG_0100 error: ' + error);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_GIF_0100
         * @tc.name      : createPixelMap(decodingOptions)-pixelformat:RGBA_8888-gif
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_GIF_0100', 0, async function (done) {
            await getFd('moving_test.gif');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_GIF_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 3,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_GIF_0100 createPixelMap error ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_GIF_0100 success ');
                        expect(pixelmap != undefined).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_GIF_0200
         * @tc.name      : createPixelMap(decodingOptions)-pixelformat:RGBA_565-gif
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return null
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_GIF_0200', 0, async function (done) {
            await getFd('moving_test.gif');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_GIF_0200 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_GIF_0200 createPixelMap error ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_GIF_0200 success ');
                        expect(pixelmap != undefined).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_GIF_0300
         * @tc.name      : createPixelMap(decodingOptions)-pixelformat:unkonwn-gif
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_GIF_0300', 0, async function (done) {
            await getFd('moving_test.gif');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_GIF_0300 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 0,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_GIF_0300 createPixelMap error ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_GIF_0300 success ');
                        expect(pixelmap != undefined).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_GIF_0100
         * @tc.name      : createPixelMap(decodingOptions:index 1})-gif 
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return null
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_GIF_0100', 0, async function (done) {
            await getFd('moving_test.gif');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_GIF_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 0,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 1
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_GIF_0100 createPixelMap error ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_GIF_0100 success ');
                        expect(pixelmap != undefined).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_GIF_0200
         * @tc.name      : createPixelMap(decodingOptions:index -1})-gif
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return null
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_GIF_0200', 0, async function (done) {
            await getFd('moving_test.gif');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_GIF_0200 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 0,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: -1
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_GIF_0200 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_GIF_0200 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_GIF_0200 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_GIF_0100
         * @tc.name      : createPixelMap(decodingOptions:sampleSize -1})-gif
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_GIF_0100', 0, async function (done) {
            await getFd('moving_test.gif');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_GIF_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: -1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 0,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_GIF_0100 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_GIF_0100 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_GIF_0100 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_GIF_0100
         * @tc.name      : createPixelMap(decodingOptions:rotate -10})-gif
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_GIF_0100', 0, async function (done) {
            await getFd('moving_test.gif');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_GIF_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: -10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_GIF_0100 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_GIF_0100 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_GIF_0100 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_GIF_0100
         * @tc.name      : createPixelMap(decodingOptions:unsupported pixelformat)-gif 
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_GIF_0100', 0, async function (done) {
            await getFd('moving_test.gif');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_GIF_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 60,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_GIF_0100 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_GIF_0100 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_GIF_0100 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_GIF_0100
         * @tc.name      : createPixelMap(decodingOptions:editable false})-gif
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_GIF_0100', 0, async function (done) {
            await getFd('moving_test.gif');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_GIF_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: false,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_GIF_0100 createPixelMap error  ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_GIF_0100 success ');
                        expect(pixelmap != undefined).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_GIF_0100
         * @tc.name      : createPixelMap(decodingOptions:desiredSize>imagesize)-gif
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_GIF_0100', 0, async function (done) {
            await getFd('moving_test.gif');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_GIF_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 10000, height: 10000 },
                    rotate: 10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_GIF_0100 createPixelMap error  ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_GIF_0100 success ');
                        expect(pixelmap != undefined).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_GIF_0200
         * @tc.name      : createPixelMap(decodingOptions:desiredRegion>imagesize)-gif
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_GIF_0200', 0, async function (done) {
            await getFd('moving_test.gif');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info(' SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_GIF_0200 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 10000, width: 10000 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_GIF_0200 createPixelMap error ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        pixelmap.getImageInfo().then((imageInfo) => {
                            expect(imageInfo.size.height == 2).assertTrue();
                            expect(imageInfo.size.width == 1).assertTrue();
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_GIF_0200 success ');
                                console.info("imageInfo height :" + imageInfo.size.height);
                                console.info("imageInfo width : " + imageInfo.size.width);
                            done();
                        }).catch((err) => {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_GIF_0200 getimageInfo err ' + JSON.stringify(err));
                        })
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_GIF_0100
         * @tc.name      : createPixelMapdecodingOptions:x -1 y -1)-gif
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_GIF_0100', 0, async function (done) {
            await getFd('moving_test.gif');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_GIF_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: -1, y: -1 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_GIF_0100 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_GIF_0100createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_GIF_0100 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_GIF_0200
         * @tc.name      : createPixelMap(decodingOptions:x > image.height y > image.width)-gif
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_GIF_0200', 0, async function (done) {
            await getFd('moving_test.gif');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_GIF_0200 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 10000, y: 10000 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_GIF_0200 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_GIF_0200 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_GIF_0200 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_GIF_0200
         * @tc.name      : createPixelMap(decodingOptions:rotate>360)-gif
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_GIF_0200', 0, async function (done) {
            await getFd('moving_test.gif');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_GIF_0200 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 500,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 1, y: 2 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_GIF_0200 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_GIF_0200 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_GIF_0200 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PROMISE_GIF_0100
         * @tc.name      : createPixelMap-promise-gif
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PROMISE_GIF_0100', 0, async function (done) {
            await getFd('moving_test.gif');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PROMISE_GIF_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                imageSourceApi.createPixelMap().then(pixelmap => {
                    globalpixelmap = pixelmap;
                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PROMISE_GIF_0100 success ');
                    expect(pixelmap !== undefined).assertTrue();
                    done();
                }).catch(error => {
                    console.log('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PROMISE_GIF_0100 error: ' + error);
                    expect().assertFail();
                    done();
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_CALLBACK_GIF_0100
         * @tc.name      : createPixelMap-callback-gif
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return null
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_CALLBACK_GIF_0100', 0, async function (done) {
            await getFd('moving_test.gif');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_CALLBACK_GIF_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                imageSourceApi.createPixelMap((err, pixelmap) => {

                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_CALLBACK_GIF_0100 success ');
                    expect(pixelmap !== undefined).assertTrue();
                    done();
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_BMP_0100
         * @tc.name      : createPixelMap(decodingOptions)-pixelformat:RGBA_8888-bmp
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_BMP_0100', 0, async function (done) {
            await getFd('test.bmp');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_BMP_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 3,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_BMP_0100 createPixelMap error  ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_BMP_0100 success ');
                        expect(pixelmap != undefined).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_BMP_0200
         * @tc.name      : createPixelMap(decodingOptions)-pixelformat:RGB_565-bmp
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_BMP_0200', 0, async function (done) {
            await getFd('test.bmp');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_BMP_0200 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_BMP_0200 createPixelMap error  ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_BMP_0200 success ');
                        expect(pixelmap != undefined).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_BMP_0300
         * @tc.name      : createPixelMap(decodingOptions)-pixelformat:unkonwn-bmp
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_BMP_0300', 0, async function (done) {
            await getFd('test.bmp');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_BMP_0300 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 0,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_BMP_0300 createPixelMap error  ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_BMP_0300 success ');
                        expect(pixelmap != undefined).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_BMP_0100
         * @tc.name      : createPixelMap(decodingOptions: index 1})-bmp
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_BMP_0100', 0, async function (done) {
            await getFd('test.bmp');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_BMP_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 0,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 1
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_BMP_0100 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_BMP_0100 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_BMP_0100 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_BMP_0200
         * @tc.name      : createPixelMap(decodingOptions:index -1})-bmp
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_BMP_0200', 0, async function (done) {
            await getFd('test.bmp');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_BMP_0200 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 0,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: -1
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_BMP_0200 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_BMP_0200 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_BMP_0200 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_BMP_0100
         * @tc.name      : createPixelMap(decodingOptions:sampleSize -1})-bmp
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_BMP_0100', 0, async function (done) {
            await getFd('test.bmp');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_BMP_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: -1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 0,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_BMP_0100 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_BMP_0100 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_BMP_0100 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_BMP_0100
         * @tc.name      : createPixelMap(decodingOptions:rotate -10})-bmp
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_BMP_0100', 0, async function (done) {
            await getFd('test.bmp');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_BMP_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: -10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_BMP_0100 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_BMP_0100 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_BMP_0100 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_BMP_0100
         * @tc.name      : createPixelMap(decodingOptions:unsupported pixelformat)-bmp 
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_BMP_0100', 0, async function (done) {
            await getFd('test.bmp');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_BMP_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 60,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_BMP_0100 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_BMP_0100 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_BMP_0100 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_BMP_0100
         * @tc.name      : createPixelMap(decodingOptions:editable false})-bmp
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_BMP_0100', 0, async function (done) {
            await getFd('test.bmp');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_BMP_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: false,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_BMP_0100 createPixelMap error  ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_BMP_0100 success ');
                        expect(pixelmap != undefined).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_BMP_0100
         * @tc.name      : createPixelMap(decodingOptions:desiredSize>imagesize)-bmp
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_BMP_0100', 0, async function (done) {
            await getFd('test.bmp');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_BMP_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1500, height: 1500 },
                    rotate: 10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_BMP_0100 createPixelMap error  ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_BMP_0100 success ');
                        expect(pixelmap != undefined).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_BMP_0200
         * @tc.name      : createPixelMap(decodingOptions:desiredRegion>imagesize)-bmp
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_BMP_0200', 0, async function (done) {
            await getFd('test.bmp');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info(' SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_BMP_0200 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 10000, width: 10000 }, x: 0, y: 0 },
                    index: 0
                };

                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_BMP_0200 createPixelMap error  ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        pixelmap.getImageInfo().then((imageInfo) => {
                            expect(imageInfo.size.height == 2).assertTrue();
                            expect(imageInfo.size.width == 1).assertTrue();
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_BMP_0200 success ');
                                console.info("imageInfo height :" + imageInfo.size.height);
                                console.info("imageInfo width : " + imageInfo.size.width);
                            done();
                        }).catch((err) => {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_BMP_0200 getimageInfo err ' + JSON.stringify(err));
                        })
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_BMP_0100
         * @tc.name      : createPixelMapdecodingOptions:x -1 y -1)-bmp
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_BMP_0100', 0, async function (done) {
            await getFd('test.bmp');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_BMP_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: -1, y: -1 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_BMP_0100 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_BMP_0100 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_BMP_0100 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_BMP_0200
         * @tc.name      : createPixelMap(decodingOptions:x > image.height y > image.width)-bmp
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_BMP_0200', 0, async function (done) {
            await getFd('test.bmp');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_BMP_0200 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 10000, y: 10000 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_BMP_0200 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_BMP_0200 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_BMP_0200 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_BMP_0200
         * @tc.name      : createPixelMap(decodingOptions:rotate>360)-bmp
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_BMP_0200', 0, async function (done) {
            await getFd('test.bmp');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_BMP_0200 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 500,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 1, y: 2 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_BMP_0200 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_BMP_0200 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_BMP_0200 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_PNG_0100
         * @tc.name      : createPixelMap(decodingOptions)-pixelformat:RGBA_8888-png
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_PNG_0100', 0, async function (done) {
            await getFd('test.png');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_PNG_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 3,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_PNG_0100 createPixelMap error  ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_PNG_0100 success ');
                        expect(pixelmap != undefined).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_PNG_0200
         * @tc.name      : createPixelMap(decodingOptions)-pixelformat:RGB_565-png
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_PNG_0200', 0, async function (done) {
            await getFd('test.png');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_PNG_0200 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_PNG_0200 createPixelMap error  ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_PNG_0200 success ');
                        expect(pixelmap != undefined).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_PNG_0300
         * @tc.name      : createPixelMap(decodingOptions)-pixelformat:unkonwn-png
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_PNG_0300', 0, async function (done) {
            await getFd('test.png');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_PNG_0300 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 0,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_PNG_0300 createPixelMap error  ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_PIXELFORMAT_PNG_0300 success ');
                        expect(pixelmap != undefined).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_PNG_0100
         * @tc.name      : createPixelMap(decodingOptions: index 1})-png
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_PNG_0100', 0, async function (done) {
            await getFd('test.png');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_PNG_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 0,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 1
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_PNG_0100 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_PNG_0100 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_PNG_0100 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_PNG_0200
         * @tc.name      : createPixelMap(decodingOptions:index -1})-png
         * @tc.desc      : 1.create imagesource
         *                 2.set decodingOptions
         *                 3.call createPixelMap
         *                 4.set index=-1,options
         *                 5.return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_PNG_0200', 0, async function (done) {
            await getFd('test.png');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_PNG_0200 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 0,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: -1
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_PNG_0200 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_PNG_0200 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_INDEX_PNG_0200 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_PNG_0100
         * @tc.name      : createPixelMap(decodingOptions:sampleSize -1})-png
         * @tc.desc      : 1.create imagesource
         *                 2.set decodingOptions
         *                 3.call createPixelMap
         *                 4.set index=-1,options
         *                 5.return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_PNG_0100', 0, async function (done) {
            await getFd('test.png');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_PNG_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: -1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 0,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_PNG_0100 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_PNG_0100 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_SAMPLESIZE_PNG_0100 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_PNG_0100
         * @tc.name      : createPixelMap(decodingOptions:rotate -10})-png
         * @tc.desc      : 1.create imagesource
         *                 2.set decodingOptions
         *                 3.call createPixelMap
         *                 4.set index=-1,options
         *                 5.return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_PNG_0100', 0, async function (done) {
            await getFd('test.png');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_PNG_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: -10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_PNG_0100 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_PNG_0100 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_PNG_0100 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_PNG_0100
         * @tc.name      : createPixelMap(decodingOptions:unsupported pixelformat)-png
         * @tc.desc      : 1.create imagesource
         *                 2.set decodingOptions
         *                 3.call createPixelMap
         *                 4.set index=-1,options
         *                 5.return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_PNG_0100', 0, async function (done) {
            await getFd('test.png');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_PNG_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 60,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_PNG_0100 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_PNG_0100 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_PIXELFORMAT_PNG_0100 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_PNG_0100
         * @tc.name      : createPixelMap(decodingOptions:editable false})-png
         * @tc.desc      : 1.create imagesource
         *                 2.set decodingOptions
         *                 3.call createPixelMap
         *                 4.set index=-1,options
         *                 5.return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_PNG_0100', 0, async function (done) {
            await getFd('test.png');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_PNG_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: false,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_PNG_0100 createPixelMap error  ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_EDITABLE_FALSE_PNG_0100 success ');
                        expect(pixelmap != undefined).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_PNG_0100
         * @tc.name      : createPixelMap(decodingOptions:desiredSize>imagesize)-png
         * @tc.desc      : 1.create imagesource
         *                 2.set decodingOptions
         *                 3.call createPixelMap
         *                 4.set index=-1,options
         *                 5.return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_PNG_0100', 0, async function (done) {
            await getFd('test.png');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_PNG_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1500, height: 1500 },
                    rotate: 10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_PNG_0100 createPixelMap error  ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_PNG_0100 success ');
                        expect(pixelmap != undefined).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_PNG_0200
         * @tc.name      : createPixelMap(decodingOptions:desiredRegion>imagesize)-png
         * @tc.desc      : 1.create imagesource
         *                 2.set decodingOptions
         *                 3.call createPixelMap
         *                 4.set index=-1,options
         *                 5.return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_PNG_0200', 0, async function (done) {
            await getFd('test.png');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info(' SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_PNG_0200 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 10000, width: 10000 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_PNG_0200 createPixelMap error  ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        pixelmap.getImageInfo().then((imageInfo) => {
                            expect(imageInfo.size.height == 2).assertTrue();
                            expect(imageInfo.size.width == 1).assertTrue();
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_PNG_0200 success ');
                                console.info("imageInfo height :" + imageInfo.size.height);
                                console.info("imageInfo width : " + imageInfo.size.width);
                            done();
                        }).catch((err) => {
                            console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_DESIRED_PNG_0200 getimageInfo err ' + JSON.stringify(err));
                        })
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_PNG_0100
         * @tc.name      : createPixelMapdecodingOptions:x -1 y -1)-png
         * @tc.desc      : 1.create imagesource
         *                 2.set decodingOptions
         *                 3.call createPixelMap
         *                 4.set index=-1,options
         *                 5.return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_PNG_0100', 0, async function (done) {
            await getFd('test.png');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_PNG_0100 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: -1, y: -1 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_PNG_0100 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_PNG_0100 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_PNG_0100 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_PNG_0200
         * @tc.name      : createPixelMap(decodingOptions:x > image.height y > image.width)-png
         * @tc.desc      : 1.create imagesource
         *                 2.set decodingOptions
         *                 3.call createPixelMap
         *                 4.set index=-1,options
         *                 5.return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_PNG_0200', 0, async function (done) {
            await getFd('test.png');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_PNG_0200 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 10000, y: 10000 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_PNG_0200 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_PNG_0200 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_XY_PNG_0200 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
             * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_PNG_0200
             * @tc.name      : createPixelMap(decodingOptions:rotate>360)-png
             * @tc.desc      : 1.create imagesource
             *                 2.set index and DecodeOptions
             *                 3.create PixelMap
             *                 4.callback return undefined
             * @tc.size      : MEDIUM 
             * @tc.type      : Functional
             * @tc.level     : Level 1
             */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_PNG_0200', 0, async function (done) {
            await getFd('test.png');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_PNG_0200 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 500,
                    desiredPixelFormat: 2,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 1, y: 2 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_PNG_0200 success ');
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_PNG_0200 createPixelMap error ' + JSON.stringify(err));
                        expect(true).assertTrue();
                        done();
                    } else {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_PNG_0200 fail  ' + pixelmap);
                        expect(false).assertTrue();
                        done();
                    }
                })
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_IMAGE_FORMAT_0100
         * @tc.name      : createPixelMap-unsupported image format
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         *                 4.callback return undefined
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_IMAGE_FORMAT_0100', 0, async function (done) {
            await getFd('test.tiff');
            const imageSourceApi = image.createImageSource(fdNumber);
            let decodingOptions = {
                sampleSize: 1,
                editable: true,
                desiredSize: { width: 1, height: 2 },
                rotate: 10,
                desiredPixelFormat: 3,
                desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                index: 0
            };
            imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                globalpixelmap = pixelmap;
                if (err) {
                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_IMAGE_FORMAT_0100 success ');
                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_IMAGE_FORMAT_0100 createPixelMap error ' + JSON.stringify(err));
                    expect(pixelmap == undefined).assertTrue();
                    done();
                } else {
                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_UNSUPPORTED_IMAGE_FORMAT_0100 fail  ' + pixelmap);
                    expect(false).assertTrue();
                    done();
                }

            })
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0300
         * @tc.name      : Decode the image to generate a bitmap 
         * @tc.desc      : 1.create imagesource
         *                 2.create pixelmap
         *                 3.call getimageinfo
         *                 4.Judging the length and width are opposite to the original
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0300', 0, async function (done) {
            await getFd('test.jpg');
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0300 create image source failed');
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 90,
                    desiredPixelFormat: 3,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0300 createPixelMap error  ' + JSON.stringify(err));
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        pixelmap.getImageInfo((error, imageInfo) => {
                            if (error) {
                                console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0300 getimageInfo err ' + JSON.stringify(error));
                                expect(false).assertTrue();
                                done();
                            } else {
                                if (imageInfo != undefined) {
                                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0300 success');
                                    expect(imageInfo.size.height == 2).assertTrue();
                                    expect(imageInfo.size.width == 1).assertTrue();
                                    done();
                                } else {
                                    console.info('SUB_MULTIMEDIA_IMAGE_DECODEOPTIONS_CREATEPIXELMAP_ROTATE_JPG_0300 imageInfo is empty');
                                    expect(false).assertTrue()
                                    done();
                                }
                            }
                        })
                    }
                })
            }
        })
    })
}
