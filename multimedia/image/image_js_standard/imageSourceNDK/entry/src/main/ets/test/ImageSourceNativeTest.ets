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

export default function ImageSourceNativeTest() {
    describe('ImageSourceNativeTest', function () {
        let filePath;
        let fdNumber;
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

        async function imageSourceGetMimeTypeTest(done, testNum, picName, expName) {
            try {
                console.info("imageSourceGetMimeTypeTest testNum: " + testNum + " picName: " + picName);
                await getFd(picName);
                console.info("getFd result fdNumber: " + fdNumber);
                let res = ndkTest.JsImageSourceGetMimeType(fdNumber);
                if (res == undefined) {
                    expect(res == undefined).assertFail();
                    console.info("imageSourceGetMimeTypeTest undefined");
                    done();
                    return;
                } else {
                    expect(res == expName).assertTrue();
                    console.info("imageSourceGetMimeTypeTest success mimeType: " + res);
                    done();
                    return;
                }
            } catch {
                console.info("imageSourceGetMimeTypeTest failed testNum: " + testNum + " res: " + res);
                expect().assertFail();
                done();
            }
        }

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0100
         * @tc.name      : imageSourceGetMimeType
         * @tc.desc      : 1.create ImageSource
         *                 2.set picture
         *                 3.return mimetype
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0100', 0, async function (done) {
            await imageSourceGetMimeTypeTest(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0100", "test.jpg", "image/jpeg");
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0200
         * @tc.name      : imageSourceGetMimeType
         * @tc.desc      : 1.create ImageSource
         *                 2.set picture
         *                 3.return mimetype
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0200', 0, async function (done) {
            await imageSourceGetMimeTypeTest(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0200", "test.jpeg", "image/jpeg");
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0300
         * @tc.name      : imageSourceGetMimeType
         * @tc.desc      : 1.create ImageSource
         *                 2.set picture
         *                 3.return mimetype
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0300', 0, async function (done) {
            await imageSourceGetMimeTypeTest(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0300", "test.png", "image/png");
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0400
         * @tc.name      : imageSourceGetMimeType
         * @tc.desc      : 1.create ImageSource
         *                 2.set picture
         *                 3.return mimetype
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0400', 0, async function (done) {
            await imageSourceGetMimeTypeTest(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0400", "test.gif", "image/gif");
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0500
         * @tc.name      : imageSourceGetMimeType
         * @tc.desc      : 1.create ImageSource
         *                 2.set picture
         *                 3.return mimetype
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0500', 0, async function (done) {
            await imageSourceGetMimeTypeTest(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0500", "moving_test.webp", "image/webp");
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0600
         * @tc.name      : imageSourceGetMimeType
         * @tc.desc      : 1.create ImageSource
         *                 2.set picture
         *                 3.return mimetype
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0600', 0, async function (done) {
            await imageSourceGetMimeTypeTest(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0600", "test.ico", "image/x-ico");
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0700
         * @tc.name      : imageSourceGetMimeType
         * @tc.desc      : 1.create ImageSource
         *                 2.set picture
         *                 3.return mimetype
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0700', 0, async function (done) {
            await imageSourceGetMimeTypeTest(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0700", "test.svg", "image/svg+xml");
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0800
         * @tc.name      : imageSourceGetMimeType
         * @tc.desc      : 1.create ImageSource
         *                 2.set picture
         *                 3.return mimetype
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0800', 0, async function (done) {
            await imageSourceGetMimeTypeTest(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0800", "test.bmp", "image/bmp");
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0900
         * @tc.name      : imageSourceGetMimeType
         * @tc.desc      : 1.create ImageSource
         *                 2.set picture
         *                 3.return mimetype
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0900', 0, async function (done) {
            await imageSourceGetMimeTypeTest(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_0900", "test.dng", "image/raw");
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0100
         * @tc.name      : imageSourceGetMimeType
         * @tc.desc      : 1.create ImageSource
         *                 2.set picture
         *                 3.return mimetype
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0100', 0, async function (done) {
            await imageSourceGetMimeTypeTest(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0100", "wrong_suffix_jpg.jpeg", "image/jpeg");
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0200
         * @tc.name      : imageSourceGetMimeType
         * @tc.desc      : 1.create ImageSource
         *                 2.set picture
         *                 3.return mimetype
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0200', 0, async function (done) {
            await imageSourceGetMimeTypeTest(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0200", "wrong_suffix_jpeg.png", "image/jpeg");
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0300
         * @tc.name      : imageSourceGetMimeType
         * @tc.desc      : 1.create ImageSource
         *                 2.set picture
         *                 3.return mimetype
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0300', 0, async function (done) {
            await imageSourceGetMimeTypeTest(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0300", "wrong_suffix_png.gif", "image/png");
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0400
         * @tc.name      : imageSourceGetMimeType
         * @tc.desc      : 1.create ImageSource
         *                 2.set picture
         *                 3.return mimetype
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0400', 0, async function (done) {
            await imageSourceGetMimeTypeTest(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0400", "wrong_suffix_gif.tiff", "image/gif");
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0500
         * @tc.name      : imageSourceGetMimeType
         * @tc.desc      : 1.create ImageSource
         *                 2.set picture
         *                 3.return mimetype
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0500', 0, async function (done) {
            await imageSourceGetMimeTypeTest(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0500", "wrong_suffix_webp.ico", "image/webp");
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0600
         * @tc.name      : imageSourceGetMimeType
         * @tc.desc      : 1.create ImageSource
         *                 2.set picture
         *                 3.return mimetype
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0600', 0, async function (done) {
            await imageSourceGetMimeTypeTest(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0600", "wrong_suffix_ico.svg", "image/x-ico");
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0700
         * @tc.name      : imageSourceGetMimeType
         * @tc.desc      : 1.create ImageSource
         *                 2.set picture
         *                 3.return mimetype
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0700', 0, async function (done) {
            await imageSourceGetMimeTypeTest(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0700", "wrong_suffix_svg.bmp", "image/svg+xml");
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0800
         * @tc.name      : imageSourceGetMimeType
         * @tc.desc      : 1.create ImageSource
         *                 2.set picture
         *                 3.return mimetype
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0800', 0, async function (done) {
            await imageSourceGetMimeTypeTest(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0800", "wrong_suffix_bmp.dng", "image/bmp");
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0900
         * @tc.name      : imageSourceGetMimeType
         * @tc.desc      : 1.create ImageSource
         *                 2.set picture
         *                 3.return mimetype
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0900', 0, async function (done) {
            await imageSourceGetMimeTypeTest(done, "SUB_MULTIMEDIA_IMAGE_SOURCE_IMAGESOURCEGETMIMETYPE_WRONG_SUFFIX_0900", "wrong_suffix_dng.jpg", "image/raw");
        })
    })
}