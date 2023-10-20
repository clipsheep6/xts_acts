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
import ImageSourceRawFileNDKTest from 'libImageSourceRawFileNDKTest.so';
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

        async function rawFileTest(done, testNum, getImageSource) {
            try {
                let resMgr = await resourceManager.getResourceManager();
                let rawFile = resMgr.getRawFdSync("test.png")
                console.info(`getRawFdSync : ${JSON.stringify(rawFile)}`);
                let imageSourceObj = getImageSource(rawFile);
                if (imageSourceObj == undefined) {
                    console.info(`${testNum} create imagesource failed`);
                    expect(false).assertTrue();
                    done();
                    return;
                }
                console.info(`Create imagesource success`);
                let decodeOpts = { sampleSize: 1, editable: true,
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
                console.info(`Create pixelmap success`);
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

        it('IMAGE_SOURCE_CREATE_BY_RAW_FILE', 0, async function (done) {
            rawFileTest(done, 'IMAGE_SOURCE_CREATE_BY_RAW_FILE', function (rawFile) {
                return image.createImageSource(rawFile);
            })
        })

        it('IMAGE_SOURCE_NDK_CREATE_BY_RAW_FILE', 0, async function (done) {
            rawFileTest(done, 'IMAGE_SOURCE_NDK_CREATE_BY_RAW_FILE', function (rawFile) {
                let sourceOpts = {density: 1}
                let imageSourceRes = ImageSourceRawFileNDKTest.create(rawFile, sourceOpts)
                if (imageSourceRes != undefined) {
                    return imageSourceRes.result
                }
                return undefined
            })
        })
    })
}