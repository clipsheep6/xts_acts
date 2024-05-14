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
import featureAbility from "@ohos.ability.featureAbility";
import fileio from "@ohos.fileio";
import ndkTest from 'libImageSourceNativeTest.so';

export default function ImageSourceNDKTest() {
    describe('ImageSourceNDKTest', function () {
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

        async function imageSourceGetMimeTypeTest(done, testNum, picName) {
            try {
                console.info("imageSourceGetMimeTypeTest testNum: " + testNum + " picName: " + picName);
                await getFd(picName);
                console.info("getFd result fdNumber: " + fdNumber);
                let res = ndkTest.JsImageSourceGetMimeType(fdNumber);
                if (res == undefined) {
                    console.info("imageSourceGetMimeTypeTest undefined");
                    expect(res == undefined).assertFail();
                    done();
                    return;
                } else {
                    console.info("imageSourceGetMimeTypeTest success mimeType: " + res);
                    expect(res != undefined).assertTrue();
                    done();
                    return;
                }
            } catch {
                console.info("imageSourceGetMimeTypeTest failed testNum: " + testNum + " res: " + res);
                expect().assertFail();
                done();
            }
        }

        it('SUB_MULTIMEDIA_PIXEL_MAP_imageSourceGetMimeType_0100', 0, async function (done) {
            await imageSourceGetMimeTypeTest(done, "SUB_MULTIMEDIA_PIXEL_MAP_imageSourceGetMimeType_0100", "test.jpg");
        })
    })
}