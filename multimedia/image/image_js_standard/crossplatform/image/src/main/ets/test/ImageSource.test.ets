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
import { prepareImageFile, prepareImageFileFd } from './Common';
import fileIO from '@ohos.file.fs';

export default function ImageSource() {
    describe("ImageSource", function () {
        let context;
        let filePath;
        let fileFd = null;
        let globalpixelmap;

        async function getFileFd(fileName, imageArray) {
            filePath = context.cacheDir + '/' + fileName;
            fileFd = await prepareImageFileFd(filePath, imageArray);
            expect(fileFd != null).assertTrue();
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
            if (fileFd != null) {
                fileIO.close(fileFd);
                fileFd = null;
            }
            if (globalpixelmap != undefined) {
                console.info('globalpixelmap release start');
                try {
                    await globalpixelmap.release();
                } catch (error) {
                    console.info('globalpixelmap release fail');
                }
            }
        });

        afterAll(async function () {
            console.info("afterAll case");
        });

        /**
         * @tc.number    : TEST_CREATEPIXELMAP_OPTIONS_CB_002
         * @tc.name      : testCreatePixelMapOptionsCb002
         * @tc.desc      : 1.create imagesource
         *                 2.set index and DecodeOptions
         *                 3.create PixelMap
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 2
         */
        it("testCreatePixelMapOptionsCb002", 0, async function (done) {
            try {
                await getFileFd("test.jpg", testJpg);
                const imageSourceApi = image.createImageSource(fileFd);
                if (imageSourceApi == undefined) {
                    console.info(
                        "testCreatePixelMapOptionsCb002 create image source failed"
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
                                "testCreatePixelMapOptionsCb002 createPixelMap error  " +
                                JSON.stringify(err)
                            );
                            expect(false).assertTrue();
                            done();
                        } else {
                            globalpixelmap = pixelmap;
                            console.info(
                                "testCreatePixelMapOptionsCb002 success "
                            );
                            expect(pixelmap != undefined).assertTrue();
                            done();
                        }
                    });
                }
            } catch (error) {
                console.info("testCreatePixelMapOptionsCb002 error: " + error);
                expect(false).assertTrue();
                done();
            }
        });
    });
}
