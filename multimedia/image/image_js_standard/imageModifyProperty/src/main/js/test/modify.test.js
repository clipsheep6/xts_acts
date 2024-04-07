/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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
import { modifyBuf } from "./modifyBuffer";
import featureAbility from "@ohos.ability.featureAbility";

export default function imageModifyProperty() {
    describe("imageModifyProperty", function () {
        const { IMAGE_LENGTH,IMAGE_WIDTH,GPS_DATE_STAMP,IMAGE_DESCRIPTION,SCENE_BLUE_SKY_CONF,SCENE_GREEN_PLANT_CONF } = image.PropertyKey;
        let globalImagesource;
        let filePath;
        let fdNumber;
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
            if (globalImagesource != undefined) {
                console.info("globalImagesource release start");
                try {
                    await globalImagesource.release();
                } catch (error) {
                    console.info("globalImagesource release fail");
                }
            }
            console.info("afterEach case");
        });

        afterAll(function () {
            console.info("afterAll case");
        });

        async function modifyImageProperties(done, testNum, type, key, checkKey, checkResult) {
            let imageSourceApi;
            if (type == "buffer") {
                const data = modifyBuf.buffer;
                imageSourceApi = image.createImageSource(data);
            } else {
                await getFd(type);
                imageSourceApi = image.createImageSource(filePath);
            }
            if (imageSourceApi == undefined) {
                console.info(`${testNum} create image source failed`);
                expect(false).assertTrue();
                done();
            } else {
                globalImagesource = imageSourceApi;
                imageSourceApi.modifyImageProperties(key)
                    .then(() => {
                        imageSourceApi
                            .getImageProperties(checkKey)
                            .then((data) => {
                                console.info(`${testNum} ${JSON.stringify(key)} ,` + JSON.stringify(data));
                                checkResult(data);
                                done();
                            })
                            .catch((err) => {
                                const errormsg = err.toString();
                                console.log(`${testNum} error: ` + errormsg);
                                expect(errormsg.includes("exif key") || errormsg.includes("exif value")).assertTrue();
                                done();
                            });
                    })
                    .catch((err) => {
                        const errormsg = err.toString();
                        console.log(`${testNum} error: ` + errormsg);
                        imageSourceApi
                            .getImageProperties(checkKey)
                            .then((data) => {
                                console.info(`${testNum} ${JSON.stringify(key)} ,` + JSON.stringify(data));
                                checkResult(errormsg);
                                done();
                            })
                            .catch((err) => {
                                const errormsg = err.toString();
                                console.log(`${testNum} error: ` + errormsg);
                                expect(errormsg.includes("exif key") || errormsg.includes("exif value")).assertTrue();
                                done();
                            });
                    });
            }
        }

        async function modifyPromise(done, testNum, type, key, value, checkProps) {
            let imageSourceApi;
            if (type == "buffer") {
                const data = modifyBuf.buffer;
                imageSourceApi = image.createImageSource(data);
            } else {
                await getFd("test_exif.jpg");
                imageSourceApi = image.createImageSource(filePath);
            }
            if (imageSourceApi == undefined) {
                console.info(`${testNum} create image source failed`);
                expect(false).assertTrue();
                done();
            } else {
                globalImagesource = imageSourceApi;
                imageSourceApi
                    .modifyImageProperty(key, value)
                    .then(() => {
                        imageSourceApi
                            .getImageProperty(key)
                            .then((data) => {
                                console.info(`${testNum} ${key} ` + data);
                                checkProps(data);
                                done();
                            })
                            .catch((err) => {
                                console.info(`${testNum} getImageProperty failed, err:${err}`);
                                expect(false).assertTrue();
                                done();
                            });
                    })
                    .catch((err) => {
                        console.info(`${testNum} modifyImageProperty failed, err:${err}`);
                        expect(false).assertTrue();
                        done();
                    });
            }
        }

        async function modifyCb(done, testNum, type, key, value, checkProps) {
            let imageSourceApi;
            if (type == "buffer") {
                const data = modifyBuf.buffer;
                imageSourceApi = image.createImageSource(data);
            } else {
                await getFd("test_exif.jpg");
                imageSourceApi = image.createImageSource(filePath);
            }
            if (imageSourceApi == undefined) {
                console.info(`${testNum} create image source failed`);
                expect(false).assertTrue();
                done();
            } else {
                globalImagesource = imageSourceApi;
                imageSourceApi.modifyImageProperty(key, value, (error) => {
                    if (error) {
                        console.info(`${testNum} modify err: ` + error);
                        expect(false).assertTrue();
                        done();
                    } else {
                        imageSourceApi.getImageProperty(key, (error, data) => {
                            if (error) {
                                console.info(`${testNum} get err: ` + error);
                                expect(false).assertTrue();
                                done();
                            } else {
                                console.info(`${testNum} ${key}: ` + data);
                                checkProps(data);
                                done();
                            }
                        });
                    }
                });
            }
        }

        async function modifyCb1(done, testNum, type, key, value, checkProps) {
            let imageSourceApi;
            if (type == "buffer") {
                const data = modifyBuf.buffer;
                imageSourceApi = image.createImageSource(data);
            } else {
                await getFd("test_exif.jpg");
                imageSourceApi = image.createImageSource(filePath);
            }
            if (imageSourceApi == undefined) {
                console.info(`${testNum} create image source failed`);
                expect(false).assertTrue();
                done();
            } else {
                globalImagesource = imageSourceApi;
                let property = { index: 0, defaultValue: "1" };
                imageSourceApi.modifyImageProperty(key, value, property, (error) => {
                    if (error) {
                        console.info(`${testNum} modify err: ` + error);
                        expect(false).assertTrue();
                        done();
                    } else {
                        imageSourceApi.getImageProperty(key, (error, data) => {
                            if (error) {
                                console.info(`${testNum} get err: ` + error);
                                expect(false).assertTrue();
                                done();
                            } else {
                                console.info(`${testNum} ${key}: ` + data);
                                checkProps(data);
                                done();
                            }
                        });
                    }
                });
            }
        }

        async function modifyErrCb(done, testNum, type, key, value) {
            let imageSourceApi;
            if (type == "buffer") {
                const data = modifyBuf.buffer;
                imageSourceApi = image.createImageSource(data);
            } else {
                await getFd("test_exif.jpg");
                imageSourceApi = image.createImageSource(filePath);
            }
            if (imageSourceApi == undefined) {
                console.info(`${testNum} create image source failed`);
                expect(false).assertTrue();
                done();
            } else {
                globalImagesource = imageSourceApi;
                imageSourceApi.modifyImageProperty(key, value, (error) => {
                    console.info(`${testNum} errormsg: ` + error);
                    expect(error.code == 62980135).assertTrue();
                    done();
                });
            }
        }

        async function modifyErrCb1(done, testNum, type, key, value) {
            let imageSourceApi;
            if (type == "buffer") {
                const data = modifyBuf.buffer;
                imageSourceApi = image.createImageSource(data);
            } else {
                await getFd("test_exif.jpg");
                imageSourceApi = image.createImageSource(filePath);
            }
            if (imageSourceApi == undefined) {
                console.info(`${testNum} create image source failed`);
                expect(false).assertTrue();
                done();
            } else {
                globalImagesource = imageSourceApi;
                let property = { index: 0, defaultValue: "1" };
                imageSourceApi.modifyImageProperty(key, value, property, (error) => {
                    console.info(`${testNum} errormsg: ` + error);
                    expect(error.code == 62980135).assertTrue();
                    done();
                });
            }
        }

        async function modifyImageErrPromise(done, testNum, type, key, value) {
            let imageSourceApi;
            try {
                if (type == "buffer") {
                    const data = modifyBuf.buffer;
                    imageSourceApi = image.createImageSource(data);
                } else {
                    await getFd("test_exif.jpg");
                    imageSourceApi = image.createImageSource(filePath);
                }
            } catch (error) {
                expect(false).assertTrue();
                done();
            }

            if (imageSourceApi == undefined) {
                console.info(`${testNum} create image source failed`);
                expect(false).assertTrue();
                done();
            } else {
                globalImagesource = imageSourceApi;
                imageSourceApi
                    .modifyImageProperty(key, value)
                    .then(() => {
                        expect(false).assertTrue();
                        done();
                    })
                    .catch((error) => {
                        expect(error.code != 0).assertTrue();
                        console.info(`${testNum} message: ` + error);
                        done();
                    });
            }
        }

        async function modifyImageBuffer(done, testNum, type, key, value) {
            let imageSourceApi;
            try {
                if (type == "buffer") {
                    const data = modifyBuf.buffer;
                    imageSourceApi = image.createImageSource(data);
                } else {
                    console.info(`${testNum} buffer source failed`);
                    expect(false).assertTrue();
                    done();
                }
            } catch (error) {
                console.info(`${testNum} create image source failed`);
                expect(false).assertTrue();
                done();
            }

            if (imageSourceApi == undefined) {
                console.info(`${testNum} create image source failed`);
                expect(false).assertTrue();
                done();
            } else {
                globalImagesource = imageSourceApi;
                imageSourceApi
                    .modifyImageProperty(key, value)
                    .then(() => {
                        expect(false).assertTrue();
                        done();
                    })
                    .catch((error) => {
                        console.info(`${testNum} message: ` + error);
                        expect(error.code == 62980146).assertTrue();
                        expect(error.message == "The EXIF data failed to be written to the file.").assertTrue();
                        done();
                    });
            }
        }

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0100
         * @tc.name      : modifyImageProperty(Orientation)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0100", 0, async function (done) {
            modifyImageBuffer(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0100",
                "buffer",
                image.PropertyKey.ORIENTATION,
                "2"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0200
         * @tc.name      : modifyImageProperty(GPSLatitude)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0200", 0, async function (done) {
            modifyImageBuffer(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0200",
                "buffer",
                image.PropertyKey.GPS_LATITUDE,
                "114,3"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0300
         * @tc.name      : modifyImageProperty(GPSLongitude)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0300", 0, async function (done) {
            modifyImageBuffer(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0300",
                "buffer",
                image.PropertyKey.GPS_LONGITUDE,
                "18,2"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0400
         * @tc.name      : modifyImageProperty(GPSLatitudeRef)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0400", 0, async function (done) {
            modifyImageBuffer(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0400",
                "buffer",
                image.PropertyKey.GPS_LATITUDE_REF,
                "N",
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0500
         * @tc.name      : modifyImageProperty(GPSLongitudeRef)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0500", 0, async function (done) {
            modifyImageBuffer(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0500",
                "buffer",
                image.PropertyKey.GPS_LONGITUDE_REF,
                "W"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0600
         * @tc.name      : modifyImageProperty(Orientation)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0600", 0, async function (done) {
            function checkProps(result) {
                expect(result == "Top-right").assertTrue();
            }
            modifyPromise(done, "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0600", "fd", image.PropertyKey.ORIENTATION, "2", checkProps);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0700
         * @tc.name      : modifyImageProperty(GPSLatitude)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0700", 0, async function (done) {
            function checkProps(result) {
                expect(result.search("38") != -1).assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0700",
                "fd",
                image.PropertyKey.GPS_LATITUDE,
                "114,3",
                checkProps
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0800
         * @tc.name      : modifyImageProperty(GPSLongitude)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0800", 0, async function (done) {
            function checkProps(result) {
                expect(result.search("9") != -1).assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0800",
                "fd",
                image.PropertyKey.GPS_LONGITUDE,
                "18,2",
                checkProps
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0900
         * @tc.name      : modifyImageProperty(GPSLatitudeRef)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0900", 0, async function (done) {
            function checkProps(result) {
                expect(result == "N").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_0900",
                "fd",
                image.PropertyKey.GPS_LATITUDE_REF,
                "N",
                checkProps
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1000
         * @tc.name      : modifyImageProperty(GPSLongitudeRef)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1000", 0, async function (done) {
            function checkProps(result) {
                expect(result == "W").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1000",
                "fd",
                image.PropertyKey.GPS_LONGITUDE_REF,
                "W",
                checkProps
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1100
         * @tc.name      : modifyImageProperty(BitsPerSample)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1100", 0, async function (done) {
            function checkProps(result) {
                expect(result == "4, 4, 4").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1100",
                "fd",
                image.PropertyKey.BITS_PER_SAMPLE,
                "4, 4, 4",
                checkProps
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1200
         * @tc.name      : modifyImageProperty(ImageLength)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1200", 0, async function (done) {
            function checkProps(result) {
                expect(result == "800").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1200",
                "fd",
                image.PropertyKey.IMAGE_LENGTH,
                "800",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1300
                 * @tc.name      : modifyImageProperty(ImageWidth)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1300", 0, async function (done) {
            function checkProps(result) {
                expect(result == "500").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1300",
                "fd",
                image.PropertyKey.IMAGE_WIDTH,
                "500",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1400
                 * @tc.name      : modifyImageProperty(DateTimeOriginal)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1400", 0, async function (done) {
            function checkProps(result) {
                expect(result == "2022:06:02 00:00:00").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1400",
                "fd",
                "DateTimeOriginal",
                "2022:06:02 00:00:00",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1500
                 * @tc.name      : modifyImageProperty(ExposureTime)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1500", 0, async function (done) {
            function checkProps(result) {
                expect(result == "1/3 sec.").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1500",
                "fd",
                "ExposureTime",
                "1/3",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1600
                 * @tc.name      : modifyImageProperty(SceneType)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1600", 0, async function (done) {
            function checkProps(result) {
                expect(result == "Directly photographed").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1600",
                "fd",
                "SceneType",
                "1",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1700
                 * @tc.name      : modifyImageProperty(ISOSpeedRatings)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1700", 0, async function (done) {
            function checkProps(result) {
                expect(result == "2").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1700",
                "fd",
                "ISOSpeedRatings",
                "2",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1800
                 * @tc.name      : modifyImageProperty(FNumber)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1800", 0, async function (done) {
            function checkProps(result) {
                expect(result == "f/0.5").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1800",
                "fd",
                "FNumber",
                "1/2",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1900
                 * @tc.name      : modifyImageProperty(DateTime)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1900", 0, async function (done) {
            function checkProps(result) {
                expect(result == "2022:06:02 00:00:00").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_1900",
                "fd",
                "DateTime",
                "2022:06:02 00:00:00",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2000
                 * @tc.name      : modifyImageProperty(GPSTimeStamp)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2000", 0, async function (done) {
            function checkProps(result) {
                expect(result == "11:37:56.00").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2000",
                "fd",
                "GPSTimeStamp",
                "11/1 37/1 56/1",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2100
                 * @tc.name      : modifyImageProperty(GPSDateStamp)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2100", 0, async function (done) {
            function checkProps(result) {
                expect(result == "2023:10:19").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2100",
                "fd",
                "GPSDateStamp",
                "2023:10:19",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2200
                 * @tc.name      : modifyImageProperty(ImageDescription)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2200", 0, async function (done) {
            function checkProps(result) {
                expect(result == "badPhoto").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2200",
                "fd",
                "ImageDescription",
                "badPhoto",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2300
                 * @tc.name      : modifyImageProperty(Make)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2300", 0, async function (done) {
            function checkProps(result) {
                expect(result == "XiaoMI").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2300",
                "fd",
                "Make",
                "XiaoMI",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2400
                 * @tc.name      : modifyImageProperty(Model)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2400", 0, async function (done) {
            function checkProps(result) {
                expect(result == "TNY-AL00").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2400",
                "fd",
                "Model",
                "TNY-AL00",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2600
                 * @tc.name      : modifyImageProperty(SensitivityType)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2600", 0, async function (done) {
            function checkProps(result) {
                expect(result == "ISO speed").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2600",
                "fd",
                "SensitivityType",
                "3",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2800
                 * @tc.name      : modifyImageProperty(RecommendedExposureIndex)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2800", 0, async function (done) {
            function checkProps(result) {
                expect(result == "200").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2800",
                "fd",
                "RecommendedExposureIndex",
                "200",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2900
                 * @tc.name      : modifyImageProperty(ISOSpeedRatings)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2900", 0, async function (done) {
            function checkProps(result) {
                expect(result == "3").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_2900",
                "fd",
                "ISOSpeedRatings",
                "3",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3000
                 * @tc.name      : modifyImageProperty(ApertureValue)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3000", 0, async function (done) {
            function checkProps(result) {
                expect(result == "0.50 EV (f/1.2)").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3000",
                "fd",
                "ApertureValue",
                "1/2",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3100
                 * @tc.name      : modifyImageProperty(ExposureBiasValue)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3100", 0, async function (done) {
            function checkProps(result) {
                expect(result == "0.50 EV").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3100",
                "fd",
                "ExposureBiasValue",
                "1/2",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3200
                 * @tc.name      : modifyImageProperty(MeteringMode)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3200", 0, async function (done) {
            function checkProps(result) {
                expect(result == "Spot").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3200",
                "fd",
                "MeteringMode",
                "3",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3300
                 * @tc.name      : modifyImageProperty(LightSource)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3300", 0, async function (done) {
            function checkProps(result) {
                expect(result == "Fluorescent").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3300",
                "fd",
                "LightSource",
                "2",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3400
                 * @tc.name      : modifyImageProperty(Flash)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3400", 0, async function (done) {
            function checkProps(result) {
                expect(result == "Flash fired, auto mode").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3400",
                "fd",
                "Flash",
                "25",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3500
                 * @tc.name      : modifyImageProperty(FocalLength)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3500", 0, async function (done) {
            function checkProps(result) {
                expect(result == "0.5 mm").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3500",
                "fd",
                "FocalLength",
                "1/2",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3600
                 * @tc.name      : modifyImageProperty(UserComment)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3600", 0, async function (done) {
            function checkProps(result) {
                expect(result == "1111").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3600",
                "fd",
                "UserComment",
                "1111",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3700
                 * @tc.name      : modifyImageProperty(PixelXDimension)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3700", 0, async function (done) {
            function checkProps(result) {
                expect(result == "2000").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3700",
                "fd",
                "PixelXDimension",
                "2000",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3800
                 * @tc.name      : modifyImageProperty(PixelYDimension)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3800", 0, async function (done) {
            function checkProps(result) {
                expect(result == "2000").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3800",
                "fd",
                "PixelYDimension",
                "2000",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3900
                 * @tc.name      : modifyImageProperty(WhiteBalance)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3900", 0, async function (done) {
            function checkProps(result) {
                expect(result == "Auto white balance").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_3900",
                "fd",
                "WhiteBalance",
                "0",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_4000
                 * @tc.name      : modifyImageProperty(FocalLengthIn35mmFilm)-promise
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_4000", 0, async function (done) {
            function checkProps(result) {
                expect(result == "35").assertTrue();
            }
            modifyPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_4000",
                "fd",
                "FocalLengthIn35mmFilm",
                "35",
                checkProps
            );
        });


        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0100
         * @tc.name      : modifyImageProperty(Orientation)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0100", 0, async function (done) {
            modifyImageBuffer(done, "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0100", "buffer", "Orientation", "2");
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0200
         * @tc.name      : modifyImageProperty(GPSLatitude)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0200", 0, async function (done) {
            modifyImageBuffer(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0200",
                "buffer",
                "GPSLatitude",
                "114,3"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0300
         * @tc.name      : modifyImageProperty(GPSLongitude)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0300", 0, async function (done) {
            modifyImageBuffer(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0300",
                "buffer",
                "GPSLongitude",
                "18,2"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0400
         * @tc.name      : modifyImageProperty(GPSLatitudeRef)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0400", 0, async function (done) {
            modifyImageBuffer(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0400",
                "buffer",
                "GPSLatitudeRef",
                "N"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0500
         * @tc.name      : modifyImageProperty(GPSLongitudeRef)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0500", 0, async function (done) {
            modifyImageBuffer(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0500",
                "buffer",
                "GPSLongitudeRef",
                "W"
                );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0600
         * @tc.name      : modifyImageProperty(Orientation)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0600", 0, async function (done) {
            function checkProps(result) {
                expect(result == "Top-right").assertTrue();
            }
            modifyCb(done, "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0600", "fd", "Orientation", "2", checkProps);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0700
         * @tc.name      : modifyImageProperty(GPSLatitude)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0700", 0, async function (done) {
            function checkProps(result) {
                expect(result.search("38") != -1).assertTrue();
            }
            modifyCb(done, "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0700", "fd", "GPSLatitude", "114,3", checkProps);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0800
         * @tc.name      : modifyImageProperty(GPSLongitude)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0800", 0, async function (done) {
            function checkProps(result) {
                expect(result.search("9") != -1).assertTrue();
            }
            modifyCb(done, "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0800", "fd", "GPSLongitude", "18,2", checkProps);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0900
         * @tc.name      : modifyImageProperty(GPSLatitudeRef)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0900", 0, async function (done) {
            function checkProps(result) {
                expect(result == "N").assertTrue();
            }
            modifyCb(done, "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_0900", "fd", "GPSLatitudeRef", "N", checkProps);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1000
         * @tc.name      : modifyImageProperty(GPSLongitudeRef)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1000", 0, async function (done) {
            function checkProps(result) {
                expect(result == "W").assertTrue();
            }
            modifyCb(done, "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1000", "fd", "GPSLongitudeRef", "W", checkProps);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1100
         * @tc.name      : modifyImageProperty(BitsPerSample)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1100", 0, async function (done) {
            function checkProps(result) {
                expect(result == "4, 4, 4").assertTrue();
            }
            modifyCb(done, "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1100", "fd", "BitsPerSample", "4, 4, 4", checkProps);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1200
         * @tc.name      : modifyImageProperty(ImageLength)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1200", 0, async function (done) {
            function checkProps(result) {
                expect(result == "800").assertTrue();
            }
            modifyCb(done, "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1200", "fd", "ImageLength", "800", checkProps);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1300
         * @tc.name      : modifyImageProperty(ImageWidth)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1300", 0, async function (done) {
            function checkProps(result) {
                expect(result == "500").assertTrue();
            }
            modifyCb(done, "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1300", "fd", "ImageWidth", "500", checkProps);
        });


        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1400
                 * @tc.name      : modifyImageProperty(DateTimeOriginal)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1400", 0, async function (done) {
            function checkProps(result) {
                expect(result == "2022:06:02 00:00:00").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1400",
                "fd",
                "DateTimeOriginal",
                "2022:06:02 00:00:00",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1500
                 * @tc.name      : modifyImageProperty(ExposureTime)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1500", 0, async function (done) {
            function checkProps(result) {
                expect(result == "1/3 sec.").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1500",
                "fd",
                "ExposureTime",
                "1/3",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1600
                 * @tc.name      : modifyImageProperty(SceneType)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1600", 0, async function (done) {
            function checkProps(result) {
                expect(result == "Directly photographed").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1600",
                "fd",
                "SceneType",
                "1",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1700
                 * @tc.name      : modifyImageProperty(ISOSpeedRatings)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1700", 0, async function (done) {
            function checkProps(result) {
                expect(result == "2").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1700",
                "fd",
                "ISOSpeedRatings",
                "2",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1800
                 * @tc.name      : modifyImageProperty(FNumber)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1800", 0, async function (done) {
            function checkProps(result) {
                expect(result == "f/0.5").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1800",
                "fd",
                "FNumber",
                "1/2",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1900
                 * @tc.name      : modifyImageProperty(DateTime)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1900", 0, async function (done) {
            function checkProps(result) {
                expect(result == "2022:06:02 00:00:00").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_1900",
                "fd",
                "DateTime",
                "2022:06:02 00:00:00",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2000
                 * @tc.name      : modifyImageProperty(GPSTimeStamp)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2000", 0, async function (done) {
            function checkProps(result) {
                expect(result == "11:37:56.00").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2000",
                "fd",
                "GPSTimeStamp",
                "11:37:56",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2100
                 * @tc.name      : modifyImageProperty(GPSDateStamp)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2100", 0, async function (done) {
            function checkProps(result) {
                expect(result == "2023:10:19").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2100",
                "fd",
                "GPSDateStamp",
                "2023:10:19",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2200
                 * @tc.name      : modifyImageProperty(ImageDescription)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2200", 0, async function (done) {
            function checkProps(result) {
                expect(result == "badPhoto").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2200",
                "fd",
                "ImageDescription",
                "badPhoto",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2300
                 * @tc.name      : modifyImageProperty(Make)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2300", 0, async function (done) {
            function checkProps(result) {
                expect(result == "XiaoMI").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2300",
                "fd",
                "Make",
                "XiaoMI",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2400
                 * @tc.name      : modifyImageProperty(Model)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2400", 0, async function (done) {
            function checkProps(result) {
                expect(result == "TNY-AL00").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2400",
                "fd",
                "Model",
                "TNY-AL00",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2600
                 * @tc.name      : modifyImageProperty(SensitivityType)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2600", 0, async function (done) {
            function checkProps(result) {
                expect(result == "ISO speed").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2600",
                "fd",
                "SensitivityType",
                "3",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2800
                 * @tc.name      : modifyImageProperty(RecommendedExposureIndex)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2800", 0, async function (done) {
            function checkProps(result) {
                expect(result == "200").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2800",
                "fd",
                "RecommendedExposureIndex",
                "200",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2900
                 * @tc.name      : modifyImageProperty(ISOSpeedRatings)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2900", 0, async function (done) {
            function checkProps(result) {
                expect(result == "3").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_2900",
                "fd",
                "ISOSpeedRatings",
                "3",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3000
                 * @tc.name      : modifyImageProperty(ApertureValue)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3000", 0, async function (done) {
            function checkProps(result) {
                expect(result == "0.50 EV (f/1.2)").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3000",
                "fd",
                "ApertureValue",
                "1/2",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3100
                 * @tc.name      : modifyImageProperty(ExposureBiasValue)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3100", 0, async function (done) {
            function checkProps(result) {
                expect(result == "0.50 EV").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3100",
                "fd",
                "ExposureBiasValue",
                "1/2",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3200
                 * @tc.name      : modifyImageProperty(MeteringMode)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3200", 0, async function (done) {
            function checkProps(result) {
                expect(result == "Spot").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3200",
                "fd",
                "MeteringMode",
                "3",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3300
                 * @tc.name      : modifyImageProperty(LightSource)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3300", 0, async function (done) {
            function checkProps(result) {
                expect(result == "Fluorescent").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3300",
                "fd",
                "LightSource",
                "2",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3400
                 * @tc.name      : modifyImageProperty(Flash)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3400", 0, async function (done) {
            function checkProps(result) {
                expect(result == "Flash fired, auto mode").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3400",
                "fd",
                "Flash",
                "25",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3500
                 * @tc.name      : modifyImageProperty(FocalLength)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3500", 0, async function (done) {
            function checkProps(result) {
                expect(result == "0.5 mm").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3500",
                "fd",
                "FocalLength",
                "1/2",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3600
                 * @tc.name      : modifyImageProperty(UserComment)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3600", 0, async function (done) {
            function checkProps(result) {
                expect(result == "1111").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3600",
                "fd",
                "UserComment",
                "1111",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3700
                 * @tc.name      : modifyImageProperty(PixelXDimension)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3700", 0, async function (done) {
            function checkProps(result) {
                expect(result == "2000").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3700",
                "fd",
                "PixelXDimension",
                "2000",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3800
                 * @tc.name      : modifyImageProperty(PixelYDimension)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3800", 0, async function (done) {
            function checkProps(result) {
                expect(result == "2000").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3800",
                "fd",
                "PixelYDimension",
                "2000",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3900
                 * @tc.name      : modifyImageProperty(WhiteBalance)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3900", 0, async function (done) {
            function checkProps(result) {
                expect(result == "Auto white balance").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_3900",
                "fd",
                "WhiteBalance",
                "0",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_4000
                 * @tc.name      : modifyImageProperty(FocalLengthIn35mmFilm)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_4000", 0, async function (done) {
            function checkProps(result) {
                expect(result == "35").assertTrue();
            }
            modifyCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_4000",
                "fd",
                "FocalLengthIn35mmFilm",
                "35",
                checkProps
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0100
         * @tc.name      : modifyImageProperty(Orientation,property)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value,options)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0100", 0, async function (done) {
            modifyImageBuffer(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0100",
                "buffer",
                "Orientation",
                "2"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0200
         * @tc.name      : modifyImageProperty(GPSLatitude,property)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value,options)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0200", 0, async function (done) {
            modifyImageBuffer(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0200",
                "buffer",
                "GPSLatitude",
                "114,3"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0300
         * @tc.name      : modifyImageProperty(GPSLongitude,property)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value,options)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0300", 0, async function (done) {
            modifyImageBuffer(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0300",
                "buffer",
                "GPSLongitude",
                "18,2"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0400
         * @tc.name      : modifyImageProperty(GPSLatitudeRef,property)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value,options)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0400", 0, async function (done) {
            modifyImageBuffer(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0400",
                "buffer",
                "GPSLatitudeRef",
                "N"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0500
         * @tc.name      : modifyImageProperty(GPSLongitudeRef,property)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value,options)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0500", 0, async function (done) {
            modifyImageBuffer(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0500",
                "buffer",
                "GPSLongitudeRef",
                "W"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0600
         * @tc.name      : modifyImageProperty(Orientation,property)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value,options)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0600", 0, async function (done) {
            function checkProps(result) {
                expect(result == "Top-right").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0600",
                "fd",
                "Orientation",
                "2",
                checkProps
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0700
         * @tc.name      : modifyImageProperty(GPSLatitude,property)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value,options)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0700", 0, async function (done) {
            function checkProps(result) {
                expect(result.search("38") != -1).assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0700",
                "fd",
                "GPSLatitude",
                "114,3",
                checkProps
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0800
         * @tc.name      : modifyImageProperty(GPSLongitude,property)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value,options)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0800", 0, async function (done) {
            function checkProps(result) {
                expect(result.search("9") != -1).assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0800",
                "fd",
                "GPSLongitude",
                "18,2",
                checkProps
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0900
         * @tc.name      : modifyImageProperty(GPSLatitudeRef,property)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value,options)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0900", 0, async function (done) {
            function checkProps(result) {
                expect(result == "N").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_0900",
                "fd",
                "GPSLatitudeRef",
                "N",
                checkProps
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1000
         * @tc.name      : modifyImageProperty(GPSLongitudeRef,property)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value,options)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1000", 0, async function (done) {
            function checkProps(result) {
                expect(result == "W").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1000",
                "fd",
                "GPSLongitudeRef",
                "W",
                checkProps
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1100
         * @tc.name      : modifyImageProperty(BitsPerSample,property)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value,options)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1100", 0, async function (done) {
            function checkProps(result) {
                expect(result == "4, 4, 4").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1100",
                "fd",
                "BitsPerSample",
                "4, 4, 4",
                checkProps
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1200
         * @tc.name      : modifyImageProperty(ImageLength,property)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value,options)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1200", 0, async function (done) {
            function checkProps(result) {
                expect(result == "800").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1200",
                "fd",
                "ImageLength",
                "800",
                checkProps
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1300
         * @tc.name      : modifyImageProperty(ImageWidth,property)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value,options)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1300", 0, async function (done) {
            function checkProps(result) {
                expect(result == "500").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1300",
                "fd",
                "ImageWidth",
                "500",
                checkProps
            );
        });


        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1400
                 * @tc.name      : modifyImageProperty(DateTimeOriginal,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1400", 0, async function (done) {
            function checkProps(result) {
                expect(result == "2022:06:02 00:00:00").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1400",
                "fd",
                "DateTimeOriginal",
                "2022:06:02 00:00:00",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1500
                 * @tc.name      : modifyImageProperty(ExposureTime,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1500", 0, async function (done) {
            function checkProps(result) {
                expect(result == "1/3 sec.").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1500",
                "fd",
                "ExposureTime",
                "1/3",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1600
                 * @tc.name      : modifyImageProperty(SceneType,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1600", 0, async function (done) {
            function checkProps(result) {
                expect(result == "Directly photographed").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1600",
                "fd",
                "SceneType",
                "1",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1700
                 * @tc.name      : modifyImageProperty(ISOSpeedRatings,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1700", 0, async function (done) {
            function checkProps(result) {
                expect(result == "2").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1700",
                "fd",
                "ISOSpeedRatings",
                "2",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1800
                 * @tc.name      : modifyImageProperty(FNumber,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1800", 0, async function (done) {
            function checkProps(result) {
                expect(result == "f/0.5").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1800",
                "fd",
                "FNumber",
                "1/2",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1900
                 * @tc.name      : modifyImageProperty(DateTime,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1900", 0, async function (done) {
            function checkProps(result) {
                expect(result == "2022:06:02 00:00:00").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_1900",
                "fd",
                "DateTime",
                "2022:06:02 00:00:00",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2000
                 * @tc.name      : modifyImageProperty(GPSTimeStamp,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2000", 0, async function (done) {
            function checkProps(result) {
                expect(result == "11:37:56.00").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2000",
                "fd",
                "GPSTimeStamp",
                "11:37:56",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2100
                 * @tc.name      : modifyImageProperty(GPSDateStamp,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2100", 0, async function (done) {
            function checkProps(result) {
                expect(result == "2023:10:19").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2100",
                "fd",
                "GPSDateStamp",
                "2023:10:19",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2200
                 * @tc.name      : modifyImageProperty(ImageDescription,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2200", 0, async function (done) {
            function checkProps(result) {
                expect(result == "badPhoto").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2200",
                "fd",
                "ImageDescription",
                "badPhoto",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2300
                 * @tc.name      : modifyImageProperty(Make,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2300", 0, async function (done) {
            function checkProps(result) {
                expect(result == "XiaoMI").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2300",
                "fd",
                "Make",
                "XiaoMI",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2400
                 * @tc.name      : modifyImageProperty(Model,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2400", 0, async function (done) {
            function checkProps(result) {
                expect(result == "TNY-AL00").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2400",
                "fd",
                "Model",
                "TNY-AL00",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2600
                 * @tc.name      : modifyImageProperty(SensitivityType,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2600", 0, async function (done) {
            function checkProps(result) {
                expect(result == "ISO speed").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2600",
                "fd",
                "SensitivityType",
                "3",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2800
                 * @tc.name      : modifyImageProperty(RecommendedExposureIndex,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2800", 0, async function (done) {
            function checkProps(result) {
                expect(result == "200").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2800",
                "fd",
                "RecommendedExposureIndex",
                "200",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2900
                 * @tc.name      : modifyImageProperty(ISOSpeedRatings,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2900", 0, async function (done) {
            function checkProps(result) {
                expect(result == "3").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_2900",
                "fd",
                "ISOSpeedRatings",
                "3",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3000
                 * @tc.name      : modifyImageProperty(ApertureValue,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3000", 0, async function (done) {
            function checkProps(result) {
                expect(result == "0.50 EV (f/1.2)").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3000",
                "fd",
                "ApertureValue",
                "1/2",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3100
                 * @tc.name      : modifyImageProperty(ExposureBiasValue,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3100", 0, async function (done) {
            function checkProps(result) {
                expect(result == "0.50 EV").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3100",
                "fd",
                "ExposureBiasValue",
                "1/2",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3200
                 * @tc.name      : modifyImageProperty(MeteringMode,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3200", 0, async function (done) {
            function checkProps(result) {
                expect(result == "Spot").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3200",
                "fd",
                "MeteringMode",
                "3",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3300
                 * @tc.name      : modifyImageProperty(LightSource,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3300", 0, async function (done) {
            function checkProps(result) {
                expect(result == "Fluorescent").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3300",
                "fd",
                "LightSource",
                "2",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3400
                 * @tc.name      : modifyImageProperty(Flash,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3400", 0, async function (done) {
            function checkProps(result) {
                expect(result == "Flash fired, auto mode").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3400",
                "fd",
                "Flash",
                "25",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3500
                 * @tc.name      : modifyImageProperty(FocalLength,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3500", 0, async function (done) {
            function checkProps(result) {
                expect(result == "0.5 mm").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3500",
                "fd",
                "FocalLength",
                "1/2",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3600
                 * @tc.name      : modifyImageProperty(UserComment,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3600", 0, async function (done) {
            function checkProps(result) {
                expect(result == "1111").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3600",
                "fd",
                "UserComment",
                "1111",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3700
                 * @tc.name      : modifyImageProperty(PixelXDimension,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3700", 0, async function (done) {
            function checkProps(result) {
                expect(result == "2000").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3700",
                "fd",
                "PixelXDimension",
                "2000",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3800
                 * @tc.name      : modifyImageProperty(PixelYDimension,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3800", 0, async function (done) {
            function checkProps(result) {
                expect(result == "2000").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3800",
                "fd",
                "PixelYDimension",
                "2000",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3900
                 * @tc.name      : modifyImageProperty(WhiteBalance,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3900", 0, async function (done) {
            function checkProps(result) {
                expect(result == "Auto white balance").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_3900",
                "fd",
                "WhiteBalance",
                "0",
                checkProps
            );
        });

        /**
                 * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_4000
                 * @tc.name      : modifyImageProperty(FocalLengthIn35mmFilm,property)-callback
                 * @tc.desc      : 1.create imagesource
                 *                 2.call modifyImageProperty(key,value,options)
                 *                 3.return undefined
                 * @tc.size      : MEDIUM
                 * @tc.type      : Functional
                 * @tc.level     : Level 1
                 */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_4000", 0, async function (done) {
            function checkProps(result) {
                expect(result == "35").assertTrue();
            }
            modifyCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_4000",
                "fd",
                "FocalLengthIn35mmFilm",
                "35",
                checkProps
            );
        });




        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0100
         * @tc.name      : modifyImageProperty(Orientation)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0100", 0, async function (done) {
            modifyImageErrPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0100",
                "fd",
                "Orientation",
                "abcdef"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0200
         * @tc.name      : modifyImageProperty(GPSLatitude)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0200", 0, async function (done) {
            modifyImageErrPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0200",
                "fd",
                "GPSLatitude",
                "abc,3"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0300
         * @tc.name      : modifyImageProperty(GPSLongitude)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0300", 0, async function (done) {
            modifyImageErrPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0200",
                "fd",
                "GPSLongitude",
                "abc,2"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0400
         * @tc.name      : modifyImageProperty(GPSLatitudeRef)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0400", 0, async function (done) {
            modifyImageErrPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0400",
                "fd",
                "GPSLatitudeRef",
                "456"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0500
         * @tc.name      : modifyImageProperty(GPSLongitudeRef)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0500", 0, async function (done) {
            modifyImageErrPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0500",
                "fd",
                "GPSLongitudeRef",
                "1234"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0600
         * @tc.name      : modifyImageProperty(Orientation)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0600", 0, async function (done) {
            modifyImageErrPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0600",
                "buffer",
                "Orientation",
                "abcdef"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0700
         * @tc.name      : modifyImageProperty(GPSLatitude)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0700", 0, async function (done) {
            modifyImageErrPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0700",
                "buffer",
                "GPSLatitude",
                "abc,3"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0800
         * @tc.name      : modifyImageProperty(GPSLongitude)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0800", 0, async function (done) {
            modifyImageErrPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0800",
                "buffer",
                "GPSLongitude",
                "abc,2"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0900
         * @tc.name      : modifyImageProperty(GPSLatitudeRef)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0900", 0, async function (done) {
            modifyImageErrPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_0900",
                "buffer",
                "GPSLatitudeRef",
                "456"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_1000
         * @tc.name      : modifyImageProperty(GPSLongitudeRef)-promise
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_1000", 0, async function (done) {
            modifyImageErrPromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROMISE_ERROR_1000",
                "buffer",
                "GPSLongitudeRef",
                "1234"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0100
         * @tc.name      : modifyImageProperty(Orientation)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0100", 0, async function (done) {
            modifyErrCb(done, "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0100", "fd", "Orientation", "abcdef");
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0200
         * @tc.name      : modifyImageProperty(GPSLatitude)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0200", 0, async function (done) {
            modifyErrCb(done, "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0200", "fd", "GPSLatitude", "abc,3");
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0300
         * @tc.name      : modifyImageProperty(GPSLongitude)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0300", 0, async function (done) {
            modifyErrCb(done, "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0300", "fd", "GPSLongitude", "abc,2");
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0400
         * @tc.name      : modifyImageProperty(GPSLongitudeRef)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0400", 0, async function (done) {
            modifyErrCb(done, "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0400", "fd", "GPSLongitudeRef", "1234");
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0500
         * @tc.name      : modifyImageProperty(GPSLatitudeRef)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0500", 0, async function (done) {
            modifyErrCb(done, "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0500", "fd", "GPSLatitudeRef", "456");
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0600
         * @tc.name      : modifyImageProperty(Orientation)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0600", 0, async function (done) {
            modifyErrCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0600",
                "buffer",
                "Orientation",
                "abcdef"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0700
         * @tc.name      : modifyImageProperty(GPSLatitude)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0700", 0, async function (done) {
            modifyErrCb(done, "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0700", "buffer", "GPSLatitude", "abc,3");
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0800
         * @tc.name      : modifyImageProperty(GPSLongitude)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0800", 0, async function (done) {
            modifyErrCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0800",
                "buffer",
                "GPSLongitude",
                "abc,2"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0900
         * @tc.name      : modifyImageProperty(GPSLongitudeRef)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0900", 0, async function (done) {
            modifyErrCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_0900",
                "buffer",
                "GPSLongitudeRef",
                "1234"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_1000
         * @tc.name      : modifyImageProperty(GPSLatitudeRef)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_1000", 0, async function (done) {
            modifyErrCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_CALLBACK_ERROR_1000",
                "buffer",
                "GPSLatitudeRef",
                "456"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0100
         * @tc.name      : modifyImageProperty(Orientation)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0100", 0, async function (done) {
            modifyErrCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0100",
                "fd",
                "Orientation",
                "abcdef"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0200
         * @tc.name      : modifyImageProperty(GPSLatitude)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0200", 0, async function (done) {
            modifyErrCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0200",
                "fd",
                "GPSLatitude",
                "abc,3"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0300
         * @tc.name      : modifyImageProperty(GPSLongitude)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0300", 0, async function (done) {
            modifyErrCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0300",
                "fd",
                "GPSLongitude",
                "abc,2"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0400
         * @tc.name      : modifyImageProperty(GPSLatitudeRef)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0400", 0, async function (done) {
            modifyErrCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0400",
                "fd",
                "GPSLatitudeRef",
                "1234"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0500
         * @tc.name      : modifyImageProperty(GPSLongitudeRef)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0500", 0, async function (done) {
            modifyErrCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0500",
                "fd",
                "GPSLongitudeRef",
                "567"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0600
         * @tc.name      : modifyImageProperty(Orientation)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0600", 0, async function (done) {
            modifyErrCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0600",
                "buffer",
                "Orientation",
                "abcef"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0700
         * @tc.name      : modifyImageProperty(GPSLatitude)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0700", 0, async function (done) {
            modifyErrCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0700",
                "buffer",
                "GPSLatitude",
                "abc,3"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0800
         * @tc.name      : modifyImageProperty(GPSLongitude)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0800", 0, async function (done) {
            modifyErrCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0800",
                "buffer",
                "GPSLongitude",
                "abc,2"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0900
         * @tc.name      : modifyImageProperty(GPSLatitudeRef)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0900", 0, async function (done) {
            modifyErrCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_0900",
                "buffer",
                "GPSLatitudeRef",
                "456"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_1000
         * @tc.name      : modifyImageProperty(GPSLongitudeRef)-callback
         * @tc.desc      : 1.create imagesource
         *                 2.call modifyImageProperty(key,value)
         *                 3.return undefined
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_1000", 0, async function (done) {
            modifyErrCb1(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTY_PROPERTY_CALLBACK_ERROR_1000",
                "buffer",
                "GPSLongitudeRef",
                "1234"
            );
        });
        
        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_0100
         * @tc.name      : test modifyImageProperties for jpg with multy keys
         * @tc.desc      : 1.create jpg imagesource
         *                 2.call modifyImageProperty(keys)
         *                 3.return undefined
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_0100", 0, async function (done) {
            function checkProps(result) {
                const keys = Object.keys(props)
                const ret = true;
                for (let key in keys) {
                    if(props[keys[key]] != result[key][keys[key]]) {
                        ret = false;
                        break;
                    }
                }
                expect(ret).assertTrue();
            }
            let props = {
                ImageWidth: "1024",
                ImageLength: "2048"
            }
            let checkKey = [
                IMAGE_WIDTH,
                IMAGE_LENGTH
            ];
            await modifyImageProperties(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_0100",
                "test_exif.jpg",
                props,
                checkKey,
                checkProps
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_0200
         * @tc.name      : test modifyImageProperties for jpg with single key
         * @tc.desc      : 1.create jpg imagesource
         *                 2.call modifyImageProperty(keys)
         *                 3.return undefined
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_0200", 0, async function (done) {
            function checkProps(result) {
                const keys = Object.keys(props)
                const ret = true;
                for (let key in keys) {
                    if(props[keys[key]] != result[key][keys[key]]) {
                        ret = false;
                        break;
                    }
                }
                expect(ret).assertTrue();
            }
            let props = {
                ImageLength: "2048"
            }
            let checkKey = [
                IMAGE_LENGTH
            ];
            await modifyImageProperties(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_0200",
                "test_exif.jpg",
                props,
                checkKey,
                checkProps
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_0300
         * @tc.name      : test modifyImageProperties for all the key with null value of jpg icon
         * @tc.desc      : 1.create jpg imagesource
         *                 2.call modifyImageProperty(keys)
         *                 3.return undefined
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_0300", 0, async function (done) {
            function checkProps(result) {
                const keys = Object.keys(props)
                const ret = true;
                for (let key in keys) {
                    if(props[keys[key]] != result[key][keys[key]]) {
                        ret = false;
                        break;
                    }
                }
                expect(ret).assertTrue();
            }
            let props = {
                GPSDateStamp: "2023:04:13",
                ImageDescription: "A gray picture"
            }
            let checkKey = [
                GPS_DATE_STAMP,
                IMAGE_DESCRIPTION
            ];
            await modifyImageProperties(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_0300",
                "test_exif.jpg",
                props,
                checkKey,
                checkProps
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_0400
         * @tc.name      : test modifyImageProperties for partially the key with null value of jpg icon
         * @tc.desc      : 1.create jpg imagesource
         *                 2.call modifyImageProperty(keys)
         *                 3.return undefined
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_0400", 0, async function (done) {
            function checkProps(result) {
                const keys = Object.keys(props)
                const ret = true;
                for (let key in keys) {
                    if(props[keys[key]] != result[key][keys[key]]) {
                        ret = false;
                        break;
                    }
                }
                expect(ret).assertTrue();
            }
            let props = {
                GPSDateStamp: "2023:04:13",
                ImageWidth: "1024",
            }
            let checkKey = [
                GPS_DATE_STAMP,
                IMAGE_WIDTH
            ];
            await modifyImageProperties(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_0400",
                "test_exif.jpg",
                props,
                checkKey,
                checkProps
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0100
         * @tc.name      : test modifyImageProperties for jpg with invalid value
         * @tc.desc      : 1.create jpg imagesource
         *                 2.call modifyImageProperty(keys)
         *                 3.return undefined
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0100", 0, async function (done) {
            function checkError(result) {
                expect(result.indexOf('ImageLength') == -1).assertTrue();
            }
            let props = {
                ImageWidth: "-1",
                ImageLength: "2344"
            }
            let checkKey = [
                IMAGE_WIDTH,
                IMAGE_LENGTH
            ];
            await modifyImageProperties(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0100",
                "test_exif.jpg",
                props,
                checkKey,
                checkError
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0200
         * @tc.name      : test modifyImageProperties for jpg with out-of-bounds value
         * @tc.desc      : 1.create jpg imagesource
         *                 2.call modifyImageProperty(keys)
         *                 3.return undefined
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0200", 0, async function (done) {
            function checkError(result) {
                expect(result.indexOf('ImageLength') == -1).assertTrue();
            }
            let props = {
                ImageWidth: "100000000000000",
                ImageLength: "2344"
            }
            let checkKey = [
                IMAGE_WIDTH,
                IMAGE_LENGTH
            ];
            await modifyImageProperties(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0200",
                "test_exif.jpg",
                props,
                checkKey,
                checkError
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0300
         * @tc.name      : test modifyImageProperties for jpg with invalid keys
         * @tc.desc      : 1.create jpg imagesource
         *                 2.call modifyImageProperty(keys)
         *                 3.return undefined
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0300", 0, async function (done) {
            function checkError(result) {
                expect(result.includes('ErrorKey1') && result.includes('ErrorKey2')).assertTrue();
            }
            let props = {
                "ErrorKey1": "1024",
                "ErrorKey2": "2048"
            }
            let checkKey = [
                "ErrorKey1",
                "ErrorKey2"
            ];
            await modifyImageProperties(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0300",
                "test_exif.jpg",
                props,
                checkKey,
                checkError
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0400
         * @tc.name      : test modifyImageProperties for jpg with invalid key
         * @tc.desc      : 1.create jpg imagesource
         *                 2.call modifyImageProperty(keys)
         *                 3.return undefined
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0400", 0, async function (done) {
            function checkError(result) {
                expect(result.indexOf('ImageLength') == -1).assertTrue();
            }
            let props = {
                ImageLength: "2048",
                "ErrorKey": "1024",
            }
            let checkKey = [
                IMAGE_LENGTH,
                "ErrorKey"
            ];
            await modifyImageProperties(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0400",
                "test_exif.jpg",
                props,
                checkKey,
                checkError
            );
        });

         /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0500
         * @tc.name      : test modifyImageProperties for jpg with all null value 
         * @tc.desc      : 1.create jpg imagesource
         *                 2.call modifyImageProperty(keys)
         *                 3.return undefined
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
         it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0500", 0, async function (done) {
            function checkError(result) {
                expect(result.includes('ImageLength') && result.includes('ImageWidth')).assertTrue();
            }
            let props = {
                ImageLength: "",
                ImageWidth: "",
            }
            let checkKey = [
                IMAGE_LENGTH,
                IMAGE_WIDTH
            ];
            await modifyImageProperties(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0500",
                "test_exif.jpg",
                props,
                checkKey,
                checkError
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0600
         * @tc.name      : test modifyImageProperties for jpg with partially null value
         * @tc.desc      : 1.create jpg imagesource
         *                 2.call modifyImageProperty(keys)
         *                 3.return undefined
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0600", 0, async function (done) {
            function checkError(result) {
                expect(result.indexOf('ImageLength') == -1).assertTrue();
            }
            let props = {
                ImageLength: "2048",
                ImageWidth: "",
            }
            let checkKey = [
                IMAGE_LENGTH,
                IMAGE_WIDTH
            ];
            await modifyImageProperties(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0600",
                "test_exif.jpg",
                props,
                checkKey,
                checkError
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0700
         * @tc.name      : test modifyImageProperties for jpg with incorrect type
         * @tc.desc      : 1.create jpg imagesource
         *                 2.call modifyImageProperty(keys)
         *                 3.return undefined
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0700", 0, async function (done) {
            function checkError(result) {
                expect(result.indexOf('ImageLength') == -1).assertTrue();
            }
            let props = {
                ImageLength: "2048",
                ImageWidth: "abc",
            }
            let checkKey = [
                IMAGE_LENGTH,
                IMAGE_WIDTH
            ];
            await modifyImageProperties(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0700",
                "test_exif.jpg",
                props,
                checkKey,
                checkError
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0800
         * @tc.name      : test modifyImageProperties for private filed of jpg
         * @tc.desc      : 1.create jpg imagesource
         *                 2.call modifyImageProperty(keys)
         *                 3.return undefined
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0800", 0, async function (done) {
            function checkError(result) {
                expect(result.includes('HwMnoteSceneBlueSkyConf') && result.includes('HwMnoteSceneGreenPlantConf')).assertTrue();
            }
            let props = {
                HwMnoteSceneBlueSkyConf: "71",
                HwMnoteSceneGreenPlantConf: "98"
            }
            let checkKey = [
                SCENE_BLUE_SKY_CONF,
                SCENE_GREEN_PLANT_CONF
            ];
            await modifyImageProperties(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0800",
                "test_exif.jpg",
                props,
                checkKey,
                checkError
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0900
         * @tc.name      : test modifyImageProperties for private and public filed of jpg
         * @tc.desc      : 1.create jpg imagesource
         *                 2.call modifyImageProperty(keys)
         *                 3.return undefined
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0900", 0, async function (done) {
            function checkError(result) {
                expect(result.indexOf('ImageLength') == -1 && result.indexOf('ImageWidth') == -1).assertTrue();
            }
            let props = {
                ImageWidth: "1024",
                ImageLength: "2048",
                HwMnoteSceneBlueSkyConf: "71",
                HwMnoteSceneGreenPlantConf: "98"
            }
            let checkKey = [
                IMAGE_WIDTH,
                IMAGE_LENGTH,
                SCENE_BLUE_SKY_CONF,
                SCENE_GREEN_PLANT_CONF
            ];
            await modifyImageProperties(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_0900",
                "test_exif.jpg",
                props,
                checkKey,
                checkError
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_1000
         * @tc.name      : test modifyImageProperties for unwritable filed of jpg
         * @tc.desc      : 1.create jpg imagesource
         *                 2.call modifyImageProperty(keys)
         *                 3.return undefined
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_1000", 0, async function (done) {
            function checkError(result) {
                const errormsg = JSON.stringify(result);
                expect(errormsg.includes("exif key") || errormsg.includes("exif value")).assertTrue();
            }
            let props = {
                "JPEGInterchangeFormat": "1450",
                "JPEGInterchangeFormatLength": "1450",
                "MakerNote": "xxxxx",
            }
            let checkKey = [
                "JPEGInterchangeFormat",
                "JPEGInterchangeFormatLength",
                "MakerNote"
            ];
            await modifyImageProperties(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_1000",
                "test_exif.jpg",
                props,
                checkKey,
                checkError
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_1100
         * @tc.name      : test modifyImageProperties for tiff with multy keys
         * @tc.desc      : 1.create tiff imagesource
         *                 2.call modifyImageProperty(keys)
         *                 3.return undefined
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_1100", 0, async function (done) {
            function checkError(result) {
                expect(result.includes('ImageWidth') && result.includes('ImageLength')).assertTrue();
            }
            let props = {
                ImageWidth: "1024",
                ImageLength: "2048"
            }
            let checkKey = [
                IMAGE_WIDTH,
                IMAGE_LENGTH
            ];
            await modifyImageProperties(
                done,
                "SUB_MULTIMEDIA_IMAGE_MODIFYPROPERTIES_PROMISE_ERROR_1100",
                "test.tiff",
                props,
                checkKey,
                checkError
            );
        });
    });
}
