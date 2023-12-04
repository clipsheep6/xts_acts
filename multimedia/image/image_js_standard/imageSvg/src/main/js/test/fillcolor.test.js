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

import image from "@ohos.multimedia.image";
import fileio from "@ohos.fileio";
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium";
import featureAbility from "@ohos.ability.featureAbility";

export default function imageFillColor() {
    describe("imageFillColor", function () {
        const RGBA_8888 = image.PixelMapFormat.RGBA_8888;
        let filePath;
        let fdNumber;
        let globalpixelmap;
        async function getFd(fileName) {
            let context = await featureAbility.getContext();
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
        });

        beforeEach(function () {
            console.info("beforeEach case");
        });

        afterEach(async function () {
            if (globalpixelmap != undefined) {
                console.info("globalpixelmap release start");
                try {
                    await globalpixelmap.release();
                } catch (error) {
                    console.info("globalpixelmap release fail");
                }
            }
            console.info("afterEach case");
        });

        afterAll(async function () {
            console.info("afterAll case");
        });

        async function createPixelmap(done, picName, testNum, decodingOptions) {
            try {
                await getFd(picName);
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info(`${testNum} create image source failed`);
                    expect(false).assertTrue();
                    done();
                } else {
                    let pixelmap = await imageSourceApi.createPixelMap(decodingOptions);
                    globalpixelmap = pixelmap;
                    let imageInfo = await pixelmap.getImageInfo();
                    console.info(`${testNum} decoding fillcolor: ${decodingOptions.fillColor}`);
                    expect(pixelmap != undefined).assertTrue();
                    expect(imageInfo.size.width).assertEqual(4);
                    expect(imageInfo.size.height).assertEqual(2);
                    done();
                }
            } catch (error) {
                console.info(`${testNum} createPixelmap error: ` + error);
                expect(false).assertTrue();
                done();
            }
        }

        async function createPixelmapCb(done, picName, testNum, decodingOptions) {
            try {
                await getFd(picName);
                const imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info(`${testNum} create image source failed`);
                    expect(false).assertTrue();
                    done();
                } else {
                    imageSourceApi.createPixelMap(decodingOptions, async (err, pixelmap) => {
                        if (err) {
                            expect(false).assertTrue();
                            done();
                            return;
                        }
                        globalpixelmap = pixelmap;
                        let imageInfo = await pixelmap.getImageInfo();
                        console.info(`${testNum} decoding fillcolor: ${decodingOptions.fillColor}`);
                        expect(pixelmap != undefined).assertTrue();
                        expect(imageInfo.size.width).assertEqual(4);
                        expect(imageInfo.size.height).assertEqual(2);
                        done();
                    })
                }
            } catch (error) {
                console.info(`${testNum} createPixelmap error: ` + error);
                expect(false).assertTrue();
                done();
            }
        }

        /**
       * @tc.number    : SUB_MULTIMEDIA_IMAGE_SVG_CREATEPIXELMAP_PROMISE_0100
       * @tc.name      : createPixelMap - promise
       * @tc.desc      : 1.create imagesource
       *                 2.set DecodeOptions
       *                 3.create PixelMap
       * @tc.size      : MEDIUM
       * @tc.type      : Functional
       * @tc.level     : Level 0
       */
        it("SUB_MULTIMEDIA_IMAGE_SVG_CREATEPIXELMAP_PROMISE_0100", 0, async function (done) {
            let decodeOpts = {
                sampleSize: 1,
                editable: true,
                desiredSize: { width: 4, height: 2 },
                rotate: 0,
                desiredPixelFormat: RGBA_8888,
                index: 0,
            };
            await createPixelmap(done, "loading.svg", "SUB_MULTIMEDIA_IMAGE_SVG_CREATEPIXELMAP_PROMISE_0100", decodeOpts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SVG_CREATEPIXELMAP_CALLBACK_0100
         * @tc.name      : createPixelMap - callback
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions
         *                 3.create PixelMap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_SVG_CREATEPIXELMAP_CALLBACK_0100", 0, async function (done) {
            let decodeOpts = {
                sampleSize: 1,
                editable: true,
                desiredSize: { width: 4, height: 2 },
                rotate: 0,
                desiredPixelFormat: RGBA_8888,
                index: 0,
            };
            await createPixelmapCb(done, "loading.svg", "SUB_MULTIMEDIA_IMAGE_SVG_CREATEPIXELMAP_CALLBACK_0100", decodeOpts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_FILLCOLOR_PROMISE_0100
         * @tc.name      : createPixelMap_fillColor_promise-svg
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_FILLCOLOR_PROMISE_0100", 0, async function (done) {
            let decodeOpts = {
                editable: true,
                desiredPixelFormat: 3,
                desiredSize: { width: 4, height: 2 },
                fillColor: 0xFF0000,
            };
            await createPixelmap(done, 'loading.svg', 'SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_FILLCOLOR_PROMISE_0100',
                decodeOpts)
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_FILLCOLOR_CALLBACK_0100
         * @tc.name      : createPixelMap_fillColor_callback-svg
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_FILLCOLOR_CALLBACK_0100", 0, async function (done) {
            let decodeOpts = {
                editable: true,
                desiredPixelFormat: 3,
                desiredSize: { width: 4, height: 2 },
                fillColor: 0xFF0000,
            };
            await createPixelmapCb(done, 'loading.svg', 'SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_FILLCOLOR_CALLBACK_0100',
                decodeOpts)
        });
    })
}