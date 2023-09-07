/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import { testPng, testJpg } from './testImg';
import { testGif, testBmp } from './testImg2';
import { getPropertyBuf } from "./getPropertyBuf";
import { modifyBuf } from "./modifyBuffer";
import { prepareImageFile, prepareImageFileFd } from './Common';
import fileIO from '@ohos.file.fs';
import fileio from "@ohos.fileio";

export default function ImageSource() {
    describe("ImageSource", function () {
        let context;
        let filePath;
        let fileFd = null;
        let fdNumber = -1;
        let globalpixelmap;
        const { UNKNOWN, RGB_565, RGBA_8888 } = image.PixelMapFormat;

        async function getFileFd(fileName, imageArray) {
            console.info("image case getFileFd fileName is " + fileName);
            filePath = context.cacheDir + '/' + fileName;
            fileFd = await prepareImageFileFd(filePath, imageArray);
            expect(fileFd != null).assertTrue();
        }

        async function getFd(fileName) {
            console.info("image case getFd fileName is " + fileName);
            await context.getFilesDir().then((data) => {
                filePath = data + "/" + fileName;
                console.info("image case filePath is " + filePath);
            });
            await fileio
                .open(filePath)
                .then(
                    (data) => {
                        fdNumber = data;
                        console.info("image case open fd success " + fdNumber);
                    },
                    (err) => {
                        console.info("image cese open fd fail" + err);
                    }
                )
                .catch((err) => {
                    console.info("image case open fd err " + err);
                });
        }

        beforeAll(async function () {
            console.info("beforeAll case");
            context = globalThis.abilityContext;
        });

        beforeEach(async function () {
            console.info("beforeEach case");
        });

        afterEach(async function () {
            console.info('afterEach case');
            fdNumber = -1;
        });

        afterAll(async function () {
            console.info("afterAll case");
        });



        /**
         * @tc.number    : TEST_CREATEPIXELMAP_OPTIONS_CB_044
         * @tc.name      : testCreatePixelMapOptionsCb044
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 2
         */
        it("testCreatePixelMapOptionsCb044", 0, async function (done) {
            console.info("image case testCreatePixelMapOptionsCb044 in ");
            await getFd("test.png");
            console.info("image case testCreatePixelMapOptionsCb044 in 2 fd:"+fdNumber);
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info(
                    "testCreatePixelMapOptionsCb044 create image source failed"
                );
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: image.PixelMapFormat.RGB_565,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0,
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info(
                            "testCreatePixelMapOptionsCb044 createPixelMap error  " +
                            JSON.stringify(err)
                        );
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        console.info("testCreatePixelMapOptionsCb044 success ");
                        expect(pixelmap != undefined).assertTrue();
                        done();
                    }
                });
            }
        });

                /**
         * @tc.number    : TEST_CREATEPIXELMAP_OPTIONS_CB_044
         * @tc.name      : testCreatePixelMapOptionsCb045
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 2
         */
        it("testCreatePixelMapOptionsCb045", 0, async function (done) {
            console.info("image case testCreatePixelMapOptionsCb045 in ");
            await getFileFd("test2.png", testPng);
            console.info("image case testCreatePixelMapOptionsCb045 in 2 fd:"+fdNumber);
            const imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info(
                    "testCreatePixelMapOptionsCb045 create image source failed"
                );
                expect(false).assertTrue();
                done();
            } else {
                let decodingOptions = {
                    sampleSize: 1,
                    editable: true,
                    desiredSize: { width: 1, height: 2 },
                    rotate: 10,
                    desiredPixelFormat: RGB_565,
                    desiredRegion: { size: { height: 1, width: 2 }, x: 0, y: 0 },
                    index: 0,
                };
                imageSourceApi.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info(
                            "testCreatePixelMapOptionsCb045 createPixelMap error  " +
                            JSON.stringify(err)
                        );
                        expect(false).assertTrue();
                        done();
                    } else {
                        globalpixelmap = pixelmap;
                        console.info("testCreatePixelMapOptionsCb045 success ");
                        expect(pixelmap != undefined).assertTrue();
                        done();
                    }
                });
            }
        });
    });
}
