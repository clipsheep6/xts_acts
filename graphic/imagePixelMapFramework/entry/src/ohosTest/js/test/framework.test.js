/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
export default function imagePixelMapFramework() {
    describe('imagePixelMapFramework', function () {
        let globalpixelmap;
        let globalImagesource;
        let globalreceiver;
        const WIDTH = 8192;
        const HEIGHT = 8;
        const CAPACITY = 8;
        const DEVICE_CODE = 801;
        const { JPEG: FORMATJPEG } = image.ImageFormat;
        beforeAll(async function () {
            console.info('beforeAll case');
        })

        beforeEach(function () {
            console.info('beforeEach case');
        })

        afterEach(async function () {
            if (globalpixelmap != undefined) {
                console.info("globalpixelmap release start");
                try {
                    await globalpixelmap.release();
                } catch (error) {
                    console.info("globalpixelmap release fail");
                }
            }
            if (globalImagesource != undefined) {
                console.info("globalpixelmap release start");
                try {
                    await globalImagesource.release();
                } catch (error) {
                    console.info("globalImagesource release fail");
                }
            }
            console.info('afterEach case');
        })

        afterAll(async function () {
            console.info('afterAll case');
        })

        async function sleep(times = 200) {
            await new Promise((res) =>
                setTimeout(() => {
                    res();
                }, times)
            );
        }

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_RECEIVER_CREATEPIXELMAPFROMSURFACE_0100
         * @tc.name      : testCreatePixelMapFromSurface_receiver
         * @tc.desc      : createPixelMapFromSurface
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("testCreatePixelMapFromSurface_receiver", 0, async function (done) {
            var receiver = image.createImageReceiver(WIDTH, HEIGHT, FORMATJPEG, CAPACITY);
            if (receiver == undefined) {
                expect(false).assertTrue();
                done();
                return;
            } else {
                globalreceiver = receiver;
                var error = receiver.checkDeviceTest;
                if (DEVICE_CODE == error) {
                    expect(error == DEVICE_CODE).assertTrue();
                    done();
                    return;
                }
                let pass = false;
                receiver.on("imageArrival", (err) => {
                    if (err) {
                        console.info("SUB_MULTIMEDIA_IMAGE_RECEIVER_CREATEPIXELMAPFROMSURFACE_0100 on err" + err);
                        expect(false).assertTrue();
                        done();
                        return;
                    } else {
                        pass = true;
                        console.info("SUB_MULTIMEDIA_IMAGE_RECEIVER_CREATEPIXELMAPFROMSURFACE_0100 on call back IN");
                    }
                });
                receiver.getReceivingSurfaceId().then((id) => {
                    logger.log('SurfaceId success' + id);
                    expect(isString(id)).assertTrue();
                    let region = { size: { height: 3, width: 3 }, x: 1, y: 1 };
                    image.createPixelMapFromSurface(id, region).then((pixelMap) => {
                        logger.log("PixelMap " + pixelMap);
                        if (pixelMap != undefined) {
                            globalpixelmap = pixelMap;
                            pixelMap.getImageInfo().then((imageInfo) => {
                                if (imageInfo == undefined) {
                                    logger.log('failed to obtain the image pixel map information');
                                    expect(false).assertTrue();
                                    done();
                                } else if (imageInfo.size.height == 3 && imageInfo.size.width == 3) {
                                    logger.log('success in obtaining the pixelmap information');
                                    expect(true).assertTrue();
                                    done();
                                }
                            })
                        } else {
                            expect(true).assertTrue();
                            done();
                        }
                        done();
                        return;
                    }).catch((error) => {
                        expect(true).assertTrue();
                        done();
                    })
                })
                var dummy = receiver.test;
                await sleep(2000);
                expect(pass).assertTrue();
                done();
                return;
            }
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_RECEIVER_CREATEPIXELMAPFROMSURFACESYNC_0100
         * @tc.name      : testCreatePixelMapFromSurfaceSync_receiver
         * @tc.desc      : createPixelMapFromSurfaceSync
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("testCreatePixelMapFromSurfaceSync_receiver", 0, async function (done) {
            var receiver = image.createImageReceiver(WIDTH, HEIGHT, FORMATJPEG, CAPACITY);
            if (receiver == undefined) {
                expect(false).assertTrue();
                done();
                return;
            } else {
                globalreceiver = receiver;
                var error = receiver.checkDeviceTest;
                if (DEVICE_CODE == error) {
                    expect(error == DEVICE_CODE).assertTrue();
                    done();
                    return;
                }
                let pass = false;
                receiver.on("imageArrival", (err) => {
                    if (err) {
                        expect(false).assertTrue();
                        done();
                        return;
                    } else {
                        pass = true;
                    }
                });
                receiver.getReceivingSurfaceId().then((id) => {
                    logger.log('SurfaceId success' + id);
                    expect(isString(id)).assertTrue();
                    let region = { size: { height: 3, width: 3 }, x: 1, y: 1 };
                    try {
                        image.createPixelMapFromSurfaceSync(id, region)
                        console.log('receiver surfaceId Successed in createPixelMapFromSurfaceSync')
                        expect().assertFail();
                        done();
                    } catch (error) {
                        console.log('receiver surfaceId Failed in createPixelMapFromSurfaceSync')
                        expect(true).assertTrue();
                        done();
                    }
                })
                var dummy = receiver.test;
                await sleep(2000);
                expect(pass).assertTrue();
                done();
                return;
            }
        });
    })
}
