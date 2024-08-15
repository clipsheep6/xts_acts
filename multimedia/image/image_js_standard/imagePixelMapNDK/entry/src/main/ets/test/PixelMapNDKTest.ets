// @ts-nocheck
/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
import featureAbility from "@ohos.ability.featureAbility";
import fileio from "@ohos.fileio";
import ndkTest from 'libImagePixelMapNativeTest.so';

export default function PixelMapNDKTest() {
    describe('PixelMapNDKTest', function () {
        const CODE_SUCCESS = 0;
        const CODE_ERROR = -1;
        let filePath;
        let fdNumber;
        let globalpixelmap;
        let globalImagesource;
        let globalpacker;
        const { BITS_PER_SAMPLE, ORIENTATION, IMAGE_LENGTH, IMAGE_WIDTH, GPS_LATITUDE, GPS_LONGITUDE, GPS_LATITUDE_REF,
            GPS_LONGITUDE_REF, DATE_TIME_ORIGINAL } = image.PropertyKey;
        beforeAll(function () {
            console.info('beforeAll case ++');
        })

        beforeEach(function () {
            console.info('beforeEach case ++');
        })

        afterEach(function () {
            console.info('afterEach case');
        })

        afterAll(function () {
            console.info('afterAll case');
        })

        async function getFd(fileName) {
            console.info("image getFd ");
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
        async function imageSourceCreateFromFdTest(done, testNum, picName) {
            try {
                console.info("testNum: " + testNum + " picName: " + picName);
                await getFd(picName);
                console.info("getFd result fdNumber: " + fdNumber);
                let res = ndkTest.JsConvertPixelmapToNapi(fdNumber);
                if (res == undefined) {
                    console.info("imageSourceCreateFromFdTest undefined ");
                    expect(res == undefined).assertFail();
                    done();
                    return;
                } else {
                    console.info("imageSourceCreateFromFdTest success  " + res);
                    if (res == undefined) {
                        console.info("imageSourceCreateFromFdTest undefined ");
                        expect(res == undefined).assertFail();
                        done();
                        return;
                    } else {
                        console.info("imageSourceCreateFromFdTest success  " + res.getPixelBytesNumber());
                        res.getImageInfo((err, imageInfo) => {
                            if (imageInfo == undefined) {
                                console.info('imageSourceCreateFromFdTest imageInfo is empty');
                                expect(false).assertTrue()
                                done();
                            }
                            console.info('imageSourceCreateFromFdTest imageInfo success Height and Width  : ' + imageInfo.size.height + ' ' + imageInfo.size.width );
                            done();
                        })
                        done();
                        return;
                    }
                }
            } catch {
                console.info("imageSourceCreateFromFdTest failed testNum: " + testNum + " picName: " + picName);
                expect().assertFail();
                done();
            }
        }

        async function PixelMapCreateFromFdTest(done, testNum, picName) {
            try {
                console.info("PixelMapCreateFromFdTest testNum  : " + testNum + " picName: " + picName);
                await getFd(picName);
                console.info("getFd result fdNumber: " + fdNumber);
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info("PixelMapCreateFromFdTest create image source failed");
                    expect(false).assertTrue();
                    done();
                } else {
                    globalImagesource = imageSourceApi;
                    imageSourceApi.createPixelMap().then(pixelmap => {
                        globalpixelmap = pixelmap;
                        let res = ndkTest.JsConvertPixelmapFromNapi(pixelmap);
                        let res_Width=ndkTest.JsConvertPixelmapFromNapi_Width(pixelmap);
                        if (res == undefined && res_Width == undefined) {
                            console.info("PixelMapCreateFromFdTest undefined");
                            expect(res == undefined ).assertFail();
                            done();
                            return;
                        } else {
                            console.info("PixelMapCreateFromFdTest  Height and Width  " + res + ' ' + res_Width);
                            expect(res != undefined && res_Width != undefined).assertTrue();
                            done();
                            return;
                        }
                    }).catch(error => {
                        console.log('PixelMapCreateFromFdTest error: ' + error);
                        expect().assertFail();
                        done();
                    })
                }
            } catch {
                console.info("PixelMapCreateFromFdTest failed testNum: " + testNum + " picName: " + picName);
                expect().assertFail();
                done();
            }
        }

        async function imageSourceCreateFromFdTestPixelFormat(done, testNum, picName) {
            try {
                console.info("testNum: " + testNum + " picName: " + picName);
                await getFd(picName);
                console.info("getFd result fdNumber: " + fdNumber);
                let format = ndkTest.JsConvertPixelmapGetPixelFormat(fdNumber);
                if (format == undefined) {
                    console.info("imageSourceCreateFromFdTestPixelFormat undefined ");
                    expect(format == undefined).assertFail();
                    done();
                    return;
                } else {
                    console.info("imageSourceCreateFromFdTestPixelFormat success  " + format);
                    done();
                    return;
                }
            } catch {
                console.info("imageSourceCreateFromFdTestPixelFormat failed testNum: " + testNum + " picName: " + picName);
                expect().assertFail();
                done();
            }
        }

        async function imageSourceCreateFromNapiTestPixelFormat(done, testNum, picName) {
            try {
                console.info("PixelMapCreateFromFdTest testNum  : " + testNum + " picName: " + picName);
                await getFd(picName);
                console.info("getFd result fdNumber: " + fdNumber);
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info("PixelMapCreateFromFdTest create image source failed");
                    expect(false).assertTrue();
                    done();
                } else {
                    globalImagesource = imageSourceApi;
                    imageSourceApi.createPixelMap().then(pixelmap => {
                        globalpixelmap = pixelmap;
                        let res = ndkTest.JsConvertPixelmapFromNapi(pixelmap);
                        let res_format=ndkTest.JsConvertPixelmapromNapi_PixelFormat(pixelmap);
                        if (res == undefined && res_format == undefined) {
                            console.info("PixelMapCreateFromFdTest undefined");
                            expect(res == undefined ).assertFail();
                            done();
                            return;
                        } else {
                            console.info("PixelMapCreateFromFdTest  Height and format  " + res + ' ' + res_format);
                            expect(res != undefined && res_format != undefined).assertTrue();
                            done();
                            return;
                        }
                    }).catch(error => {
                        console.log('PixelMapCreateFromFdTest error: ' + error);
                        expect().assertFail();
                        done();
                    })
                }
            } catch {
                console.info("PixelMapCreateFromFdTest failed testNum: " + testNum + " picName: " + picName);
                expect().assertFail();
                done();
            }
        }

        it('SUB_MULTIMEDIA_IMAGE_SOURCE_ConvertPixelmapToNapi_0100', 0, async function (done) {
            await imageSourceCreateFromFdTest(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_ConvertPixelmapToNapi_0100", "test.jpg");
        })

        it('SUB_MULTIMEDIA_IMAGE_SOURCE_ConvertPixelmapFromNapi_0200', 0, async function (done) {
            await PixelMapCreateFromFdTest(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_ConvertPixelmapFromNapi_0200", "test.jpg");
        })

        it('SUB_MULTIMEDIA_IMAGE_SOURCE_ConvertPixelmapFromNapi_0300', 0, async function (done) {
            await imageSourceCreateFromFdTestPixelFormat(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_ConvertPixelmapFromNapi_0300", "test.jpg");
        })

        it('SUB_MULTIMEDIA_IMAGE_SOURCE_ConvertPixelmapFromNapi_0400', 0, async function (done) {
            await imageSourceCreateFromNapiTestPixelFormat(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_ConvertPixelmapFromNapi_0400", "test.jpg");
        })
    })
}