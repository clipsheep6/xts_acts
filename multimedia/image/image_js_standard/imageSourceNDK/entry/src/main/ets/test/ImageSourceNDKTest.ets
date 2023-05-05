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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'hypium/index'
import featureAbility from "@ohos.ability.featureAbility";
import fileio from "@ohos.fileio";
import ndkTest from 'libImageSourceNDKTest.so'
import { testJpg } from './testImg';

export default function ImageSourceNDKTest() {
    describe('ImageSourceNDKTest', function () {
        const CODE_SUCCESS = 0;
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
        function logger(caseName) {
            return {
                myName: caseName,
                log: function (msg) {
                    console.info(this.myName + ' ' + msg);
                }
            }
        }

        async function getPath(fileName:string) {
            let filePath = ""
            try {
                let context = await featureAbility.getContext();
                await context.getFilesDir().then((data) => {
                    filePath = data + "/" + fileName;
                });
                console.info("image case filePath is " + filePath);
            } catch (error) {
                console.info("image getFd " + error);
            }
            return filePath;
        }

        async function getFd(fileName) {
            let fdNumber = undefined;
            let filePath = undefined;
            try {
                filePath = await getPath(fileName);
                console.info("image case filePath is " + filePath);
                await fileio.open(filePath, 0o2, 0o777).then((data) => {
                    fdNumber = data;
                    console.info("image case open fd success " + fdNumber);
                },(err) => {
                    console.info("image case open fd fail" + err);
                }).catch((err) => {
                    console.info("image case open fd err " + err);
                });
            } catch (error) {
                console.info("image getFd " + error);
            }
            return [filePath, fdNumber];
        }

        function checkNdkRes(res) {
            expect(res != undefined).assertTrue();
            expect(res.code == CODE_SUCCESS).assertTrue();
        }
        function imageSourceCreateTest(log, source, sourceOps) {
            try {
                // source: uri:string, fd:number, buffer:arraybuffer
                // sourceOps: {density:number, pixelFormat:number, size:{width:number, height:number}}
                let res = ndkTest.create(source, sourceOps);
                log.log("res " + JSON.stringify(res));
                checkNdkRes(res);
                expect(res.result != undefined).assertTrue();
                return res;
            } catch (error) {
                log.log("Test exception " + error);
                expect().assertFail();
            }
            return undefined;
        }

        /**
         * @tc.number    :
         * @tc.name      :
         * @tc.desc      :
         *               :
         * @tc.size      :
         * @tc.type      :
         * @tc.level     :
         */
        it('IMAGE_SOURCENDK_CREATE_BY_FD', 0, async function (done) {
            try {
                let log = logger("IMAGE_SOURCENDK_CREATE_BY_FD")
                let path, fd;
                [path, fd] = await getFd("moving_test.gif")
                let imageSourceOps = {
                    density: 240
                };
                console.info("fd " + JSON.stringify(fd));
                imageSourceCreateTest(log, fd, imageSourceOps)
                done();
            } catch (error) {
                console.error("Test exception " + error);
                expect().assertFail();
                done();
            }
        })

        /**
         * @tc.number    :
         * @tc.name      :
         * @tc.desc      :
         *               :
         * @tc.size      :
         * @tc.type      :
         * @tc.level     :
         */
        it('IMAGE_SOURCENDK_CREATE_BY_BUFFER', 0, async function (done) {
            try {
                let log = logger("IMAGE_SOURCENDK_CREATE_BY_BUFFER")
                let imageSourceOps = {
                    density: 240
                };
                imageSourceCreateTest(log, testJpg.buffer, imageSourceOps)
                done();
            } catch (error) {
                console.error("Test exception " + error);
                expect().assertFail();
                done();
            }
        })

        /**
         * @tc.number    :
         * @tc.name      :
         * @tc.desc      :
         *               :
         * @tc.size      :
         * @tc.type      :
         * @tc.level     :
         */
        it('IMAGE_SOURCENDK_CREATE_BY_PATH', 0, async function (done) {
            try {
                let log = logger("IMAGE_SOURCENDK_CREATE_BY_PATH")
                let path, fd;
                [path, fd] = await getFd("moving_test.gif")
                let imageSourceOps = {
                    density: 240
                };
                imageSourceCreateTest(log, path, imageSourceOps)
                done();
            } catch (error) {
                console.error("Test exception " + error);
                expect().assertFail();
                done();
            }
        })

        /**
         * @tc.number    :
         * @tc.name      :
         * @tc.desc      :
         *               :
         * @tc.size      :
         * @tc.type      :
         * @tc.level     :
         */
         it('IMAGE_SOURCENDK_CREATE_INCREMENTAL', 0, async function (done) {
            try {
                let log = logger("IMAGE_SOURCENDK_CREATE_INCREMENTAL")
                let imageSourceOps = {
                    density: 240
                };

                let res = ndkTest.createIncremental(new ArrayBuffer(1), imageSourceOps);
                log.log("res " + JSON.stringify(res));
                checkNdkRes(res);
                expect(res.result != undefined).assertTrue();
                done();
            } catch (error) {
                console.error("Test exception " + JSON.stringify(error));
                expect().assertFail();
                done();
            }
        })

        /**
         * @tc.number    :
         * @tc.name      :
         * @tc.desc      :
         *               :
         * @tc.size      :
         * @tc.type      :
         * @tc.level     :
         */
         it('IMAGE_SOURCENDK_INITNATIVE', 0, async function (done) {
            try {
                let log = logger("IMAGE_SOURCENDK_INITNATIVE")
                let path, fd;
                [path, fd] = await getFd("moving_test.gif")
                let imageSourceOps = {
                    density: 240
                };
                let res = imageSourceCreateTest(log, fd, imageSourceOps)
                if (res.result == undefined) {
                    done();
                    return;
                }
                let initRes = ndkTest.initNative(res.result);
                checkNdkRes(initRes);
                done();
            } catch (error) {
                console.error("Test exception " + error);
                expect().assertFail();
                done();
            }
        })

        /**
         * @tc.number    :
         * @tc.name      :
         * @tc.desc      :
         *               :
         * @tc.size      :
         * @tc.type      :
         * @tc.level     :
         */
         it('IMAGE_SOURCENDK_CREATE_PIXEL_MAP', 0, async function (done) {
            try {
                let log = logger("IMAGE_SOURCENDK_CREATE_PIXEL_MAP")
                let path, fd;
                [path, fd] = await getFd("moving_test.gif")
                let imageSourceOps = {
                    density: 240
                };
                let res = imageSourceCreateTest(log, fd, imageSourceOps)
                if (res.result == undefined) {
                    done();
                    return;
                }
                let decodingOps = {
                    editable: true,
                    fitDensity: 220,
                };
                let pixelMapRes = ndkTest.createPixelMap(res.result, decodingOps);
                checkNdkRes(pixelMapRes);
                expect(pixelMapRes.result != undefined).assertTrue();
                done();
            } catch (error) {
                console.error("Test exception " + error);
                expect().assertFail();
                done();
            }
        })

        /**
         * @tc.number    :
         * @tc.name      :
         * @tc.desc      :
         *               :
         * @tc.size      :
         * @tc.type      :
         * @tc.level     :
         */
         it('IMAGE_SOURCENDK_CREATE_PIXEL_MAP_LIST', 0, async function (done) {
            try {
                let log = logger("IMAGE_SOURCENDK_CREATE_PIXEL_MAP_LIST")
                let path, fd;
                [path, fd] = await getFd("moving_test.gif")
                let imageSourceOps = {
                    density: 240
                };
                let res = imageSourceCreateTest(log, fd, imageSourceOps)
                if (res.result == undefined) {
                    done();
                    return;
                }
                let decodingOps = {
                    editable: true,
                    fitDensity: 220
                }
                let pixelMapListRes = ndkTest.createPixelMapList(res.result, decodingOps);
                checkNdkRes(pixelMapListRes);
                expect(pixelMapListRes.result != undefined).assertTrue();
                expect(Array.isArray(pixelMapListRes.result)).assertTrue();
                log.log("Pixelmap list size " + pixelMapListRes.result.length)
                done();
            } catch (error) {
                console.error("Test exception " + error);
                expect().assertFail();
                done();
            }
        })

        /**
         * @tc.number    :
         * @tc.name      :
         * @tc.desc      :
         *               :
         * @tc.size      :
         * @tc.type      :
         * @tc.level     :
         */
         it('IMAGE_SOURCENDK_GET_DELAY_TIME', 0, async function (done) {
            try {
                let log = logger("IMAGE_SOURCENDK_GET_DELAY_TIME")
                let path, fd;
                [path, fd] = await getFd("moving_test.gif")
                let imageSourceOps = {
                    density: 240
                };
                let res = imageSourceCreateTest(log, fd, imageSourceOps)
                if (res.result == undefined) {
                    done();
                    return;
                }
                let delayTimeListRes = ndkTest.getDelayTime(res.result);
                checkNdkRes(delayTimeListRes);
                expect(delayTimeListRes.result != undefined).assertTrue();
                expect(Array.isArray(delayTimeListRes.result)).assertTrue();
                log.log("Delay time list size " + delayTimeListRes.result.length)
                delayTimeListRes.result.forEach(element => {
                    log.log("Delay time " + element);
                });
                done();
            } catch (error) {
                console.error("Test exception " + error);
                expect().assertFail();
                done();
            }
        })

        /**
         * @tc.number    :
         * @tc.name      :
         * @tc.desc      :
         *               :
         * @tc.size      :
         * @tc.type      :
         * @tc.level     :
         */
         it('IMAGE_SOURCENDK_GET_FRAME_COUNT', 0, async function (done) {
            try {
                let log = logger("IMAGE_SOURCENDK_GET_FRAME_COUNT")
                let path, fd;
                [path, fd] = await getFd("moving_test.gif")
                let imageSourceOps = {
                    density: 240
                };
                let res = imageSourceCreateTest(log, fd, imageSourceOps)
                if (res.result == undefined) {
                    done();
                    return;
                }
                let frameCountRes = ndkTest.getFrameCount(res.result);
                checkNdkRes(frameCountRes);
                expect(frameCountRes.result != undefined).assertTrue();
                expect(frameCountRes.result != 0).assertTrue();
                log.log("Frame count " + frameCountRes.result)
                done();
            } catch (error) {
                console.error("Test exception " + error);
                expect().assertFail();
                done();
            }
        })

        /**
         * @tc.number    :
         * @tc.name      :
         * @tc.desc      :
         *               :
         * @tc.size      :
         * @tc.type      :
         * @tc.level     :
         */
         it('IMAGE_SOURCENDK_GET_SUPPORTED_FORMATS', 0, async function (done) {
            try {
                let log = logger("IMAGE_SOURCENDK_GET_SUPPORTED_FORMATS")
                let supportedFormatListRes = ndkTest.getSupportedFormats();
                checkNdkRes(supportedFormatListRes);
                expect(supportedFormatListRes.result != undefined).assertTrue();
                expect(Array.isArray(supportedFormatListRes.result)).assertTrue();
                log.log("Supported format list size " + supportedFormatListRes.result.length)
                supportedFormatListRes.result.forEach(element => {
                    log.log("Supported format " + element);
                });
                done();
            } catch (error) {
                console.error("Test exception " + error);
                expect().assertFail();
                done();
            }
        })

        /**
         * @tc.number    :
         * @tc.name      :
         * @tc.desc      :
         *               :
         * @tc.size      :
         * @tc.type      :
         * @tc.level     :
         */
         it('IMAGE_SOURCENDK_GET_IMAGE_INFO', 0, async function (done) {
            try {
                let log = logger("IMAGE_SOURCENDK_GET_IMAGE_INFO")
                let path, fd;
                [path, fd] = await getFd("moving_test.gif")
                let imageSourceOps = {
                    density: 240
                };
                let res = imageSourceCreateTest(log, fd, imageSourceOps)
                if (res.result == undefined) {
                    done();
                    return;
                }
                let index = 0;
                let imageInfoRes = ndkTest.getImageInfo(res.result, index);
                checkNdkRes(imageInfoRes);
                log.log("Image Info " + JSON.stringify(imageInfoRes.result))
                done();
            } catch (error) {
                console.error("Test exception " + error);
                expect().assertFail();
                done();
            }
        })

        /**
         * @tc.number    :
         * @tc.name      :
         * @tc.desc      :
         *               :
         * @tc.size      :
         * @tc.type      :
         * @tc.level     :
         */
         it('IMAGE_SOURCENDK_GET_IMAGE_PROPERTY', 0, async function (done) {
            try {
                let log = logger("IMAGE_SOURCENDK_GET_IMAGE_PROPERTY")
                let path, fd;
                [path, fd] = await getFd("test_exif.jpg")
                let imageSourceOps = {
                    density: 240
                };
                let res = imageSourceCreateTest(log, fd, imageSourceOps)
                if (res.result == undefined) {
                    done();
                    return;
                }
                let imagePropertyRes = ndkTest.getImageProperty(res.result, "GPSLatitude");
                checkNdkRes(imagePropertyRes);
                log.log("Image property " + imagePropertyRes.result)
                done();
            } catch (error) {
                console.error("Test exception " + error);
                expect().assertFail();
                done();
            }
        })

        /**
         * @tc.number    :
         * @tc.name      :
         * @tc.desc      :
         *               :
         * @tc.size      :
         * @tc.type      :
         * @tc.level     :
         */
         it('IMAGE_SOURCENDK_MODIFY_IMAGE_PROPERTY', 0, async function (done) {
            try {
                let log = logger("IMAGE_SOURCENDK_MODIFY_IMAGE_PROPERTY")
                let path, fd;
                [path, fd] = await getFd("test_exif.jpg")
                let imageSourceOps = {
                    density: 240
                };
                let res = imageSourceCreateTest(log, fd, imageSourceOps)
                if (res.result == undefined) {
                    done();
                    return;
                }
                let propertyModifyRes = ndkTest.modifyImageProperty(res.result, "GPSLatitude", "114,96");
                checkNdkRes(propertyModifyRes);
                log.log("Image property modify " + propertyModifyRes.code)
                let imagePropertyRes = ndkTest.getImageProperty(res.result, "GPSLatitude");
                checkNdkRes(imagePropertyRes);
                log.log("Image property " + imagePropertyRes.result)
                done();
            } catch (error) {
                console.error("Test exception " + error);
                expect().assertFail();
                done();
            }
        })

        /**
         * @tc.number    :
         * @tc.name      :
         * @tc.desc      :
         *               :
         * @tc.size      :
         * @tc.type      :
         * @tc.level     :
         */
         it('IMAGE_SOURCENDK_UPDATE_DATA', 0, async function (done) {
            try {
                let log = logger("IMAGE_SOURCENDK_UPDATE_DATA")
                let imageSourceOps = {
                    density: 240
                };
                let res = ndkTest.createIncremental(new ArrayBuffer(1), imageSourceOps);
                if (res.result == undefined) {
                    done();
                    return;
                }
                let updateOps = {
                    buffer: testJpg.buffer,
                    offset: 0,
                    updateLength: testJpg.buffer.byteLength,
                    isCompleted: true
                }
                let updateRes = ndkTest.updateData(res.result, updateOps);
                checkNdkRes(updateRes);
                log.log("Image update Data " + updateRes.code)

                let decodingOps = {
                    editable: true,
                    fitDensity: 220
                }
                let pixelMapRes = ndkTest.createPixelMap(res.result, decodingOps);
                checkNdkRes(pixelMapRes);
                expect(pixelMapRes.result != undefined).assertTrue();
                done();
            } catch (error) {
                console.error("Test exception " + error);
                expect().assertFail();
                done();
            }
        })
    })
}