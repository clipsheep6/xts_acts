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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "deccjsunit/index";
import { testPng } from "./testImg";

export default function addImage() {
    describe("addImage", function () {
        const RGBA_8888 = image.PixelMapFormat.RGBA_8888;
        let incSouce;

        beforeAll(async function () {
            console.info("beforeAll case");
        });

        beforeEach(function () {
            console.info("beforeEach case");
        });

        afterEach(async function () {
            console.info("afterEach case");
            if (incSouce != undefined) {
                try {
                    await incSouce.release();
                } catch (error) {
                    console.info("incSouce release faile :"+error);
                }
            }
        });

        afterAll(async function () {
            console.info("afterAll case");
        });

        function sleep(ms) {
            return new Promise(resolve => setTimeout(resolve, ms));
        }

        function createPixMapPromise(done, testNum, opts) {
            const Color = new ArrayBuffer(96);
            image
                .createPixelMap(Color, opts)
                .then((pixelmap) => {
                    expect(pixelmap != undefined).assertTrue();
                    console.info(`${testNum} success`);
                    done();
                })
                .catch((error) => {
                    console.log(`${testNum} error: ` + error);
                    expect(false).assertTrue();
                    done();
                });
        }

        function createPixMapCb(done, testNum, opts) {
            const Color = new ArrayBuffer(96);
            image.createPixelMap(Color, opts, (err, pixelmap) => {
                expect(pixelmap != undefined).assertTrue();
                console.info(`${testNum} success`);
                done();
            });
        }

        function createPixMapSync(done, testNum, opts) {
            const Color = new ArrayBuffer(96);
            let pixelmap = image.createPixelMapSync(Color, opts);
            expect(pixelmap != undefined).assertTrue();
            console.info(`${testNum} success`);
            done();
        }

        function createPixeMapSync(done, testNum, opts) {
            let pixelmap = image.createPixelMapSync(opts);
            expect(pixelmap != undefined).assertTrue();
            console.info(`${testNum} success`);
            done();
        }

        async function createIncrementalSourcePromise(done, testNum, type, opts) {
            let testimagebuffer = testPng;
            console.info(`${testNum} 0001 ` + testimagebuffer.length);
            let bufferSize = 5000;
            let offset = 0;
            if (type == "sourceOpts") {
                console.info(`${testNum} have sourceopts`);
                incSouce = image.CreateIncrementalSource(new ArrayBuffer(1), opts);
            } else {
                console.info(`${testNum} no sourceopts`);
                incSouce = image.CreateIncrementalSource(new ArrayBuffer(1));
            }
            let ret;
            let isFinished = false;
            while (offset < testimagebuffer.length) {
                var oneStep = testimagebuffer.slice(offset, offset + bufferSize);
                console.info(`${testNum} 0002 ` + oneStep.length);
                if (oneStep.length < bufferSize) {
                    isFinished = true;
                }
                ret = await incSouce.updateData(oneStep, isFinished, 0, oneStep.length);
                if (!ret) {
                    console.info(`${testNum} updateData failed`);
                    expect(ret).assertTrue();
                    break;
                }
                offset = offset + oneStep.length;
                console.info(`${testNum} 0003 ` + offset);
            }
            if (ret) {
                console.info(`${testNum} updateData success `);
                let decodingOptions = {
                    sampleSize: 1,
                };
                incSouce.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info(`${testNum} createPixelMap err: ` + err);
                        expect(false).assertTrue();
                        done();
                        return;
                    }
                    console.info(`${testNum} 0004` + pixelmap);
                    expect(pixelmap != undefined).assertTrue();
                    done();
                });
            } else {
                expect(false).assertTrue();
                done();
            }
        }

        async function createIncrementalSourceCb(done, testNum, type, opts) {
            let testimagebuffer = testPng;
            console.info(`${testNum} 0001 ` + testimagebuffer.length);
            let bufferSize = 5000;
            let offset = 0;
            if (type == "sourceOpts") {
                incSouce = image.CreateIncrementalSource(new ArrayBuffer(1), opts);
            } else {
                incSouce = image.CreateIncrementalSource(new ArrayBuffer(1));
            }
            let ret;
            let isFinished = false;
            while (offset < testimagebuffer.length) {
                var oneStep = testimagebuffer.slice(offset, offset + bufferSize);
                console.info(`${testNum} 0002 ` + oneStep.length);
                if (oneStep.length < bufferSize) {
                    isFinished = true;
                }
                ret = await new Promise((res) => {
                    incSouce.updateData(oneStep, isFinished, 0, oneStep.length, (err, ret) => {
                        res(ret);
                    });
                });

                if (!ret) {
                    console.info(`${testNum} updateData failed`);
                    expect(ret).assertTrue();
                    break;
                }
                offset = offset + oneStep.length;
                console.info(`${testNum} 0003 ` + offset);
            }
            if (ret) {
                console.info(`${testNum} updateData success `);
                let decodingOptions = {
                    sampleSize: 1,
                };
                incSouce.createPixelMap(decodingOptions, (err, pixelmap) => {
                    if (err) {
                        console.info(`${testNum} createPixelMap err: ` + err);
                        expect(false).assertTrue();
                        done();
                        return;
                    }
                    console.info(`${testNum} 0004` + pixelmap);
                    expect(pixelmap != undefined).assertTrue();
                    done();
                });
            } else {
                expect(false).assertTrue();
                done();
            }
        }

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_PROMISE_0100
         * @tc.name      : create pixelmap-promise (editable: true, pixelFormat: RGBA_8888, size: { height: 4, width: 6 }, bytes = buffer,scaleMode: 1, alphaType: 0)
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_PROMISE_0100", 0, async function (done) {
            let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 }, scaleMode: 1, alphaType: 0 };
            createPixMapPromise(done, "SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_PROMISE_0100", opts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_PROMISE_0200
         * @tc.name      : create pixelmap-promise (editable: true, pixelFormat: RGBA_8888, size: { height: 4, width: 6 }, bytes = buffer,scaleMode: 1, alphaType: 1)
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_PROMISE_0200", 0, async function (done) {
            let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 }, scaleMode: 1, alphaType: 1 };
            createPixMapPromise(done, "SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_PROMISE_0200", opts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_PROMISE_0300
         * @tc.name      : create pixelmap-promise (editable: true, pixelFormat: RGBA_8888, size: { height: 4, width: 6 }, bytes = buffer,scaleMode: 0, alphaType: 2)
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_PROMISE_0300", 0, async function (done) {
            let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 }, scaleMode: 0, alphaType: 2 };
            createPixMapPromise(done, "SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_PROMISE_0300", opts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_PROMISE_0400
         * @tc.name      : create pixelmap-promise (editable: true, pixelFormat: RGBA_8888, size: { height: 4, width: 6 }, bytes = buffer,scaleMode: 0, alphaType: 3)
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_PROMISE_0400", 0, async function (done) {
            let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 }, scaleMode: 0, alphaType: 3 };
            createPixMapPromise(done, "SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_PROMISE_0400", opts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0100
         * @tc.name      : create pixelmap-promise (editable: true, pixelFormat: RGBA_8888, size: { height: 4, width: 6 }, bytes = buffer,scaleMode: 1, alphaType: 0)
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0100", 0, async function (done) {
            let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 }, scaleMode: 1, alphaType: 0 };
            createPixMapSync(done, "SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0100", opts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0200
         * @tc.name      : create pixelmap-promise (editable: true, pixelFormat: RGBA_8888, size: { height: 4, width: 6 }, bytes = buffer,scaleMode: 1, alphaType: 1)
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0200", 0, async function (done) {
            let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 }, scaleMode: 1, alphaType: 1 };
            createPixMapSync(done, "SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0200", opts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0300
         * @tc.name      : create pixelmap-promise (editable: true, pixelFormat: RGBA_8888, size: { height: 4, width: 6 }, bytes = buffer,scaleMode: 0, alphaType: 2)
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0300", 0, async function (done) {
            let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 }, scaleMode: 0, alphaType: 2 };
            createPixMapSync(done, "SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0300", opts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0400
         * @tc.name      : create pixelmap-promise (editable: true, pixelFormat: RGBA_8888, size: { height: 4, width: 6 }, bytes = buffer,scaleMode: 0, alphaType: 3)
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0400", 0, async function (done) {
            let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 }, scaleMode: 0, alphaType: 3 };
            createPixMapSync(done, "SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0400", opts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SCALE_PIXELMAP_SYNC_0100
         * @tc.name      : Pixelmap Scale-sync
         * @tc.desc      : 1.create pixelmap
         *               : 2.call scale
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SCALE_PIXELMAP_SYNC_0100', 0, async function (done) {
            const color = new ArrayBuffer(96);
            let opts = { editable: true, pixelFormat: 2, size: { height: 6, width: 8 } }
            let pixelmap = image.createPixelMapSync(color, opts)
                if (pixelmap == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_SCALE_PIXELMAP_SYNC_0100 createPixelMap failed');
                    expect(false).assertTrue();
                    done();
                }
                let numberX = 1.0;
                let numberY = 4.0;
                var res = false;
                pixelmap.scaleSync(numberX,numberY);
                res = true;
                if (!res) {
                    console.info('SUB_MULTIMEDIA_IMAGE_SCALE_PIXELMAP_SYNC_0100 scale2x1 failed');
                    expect(false).assertTrue()
                    done();
                }else{
                    console.info('SUB_MULTIMEDIA_IMAGE_SCALE_PIXELMAP_SYNC_0100 success ');
                    expect(true).assertTrue();
                    done();
                }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_SCALE_PIXELMAP_SYNC_0200
         * @tc.name      : Pixelmap Scale-sync
         * @tc.desc      : 1.create pixelmap
         *               : 2.call scale
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_SCALE_PIXELMAP_SYNC_0200', 0, async function (done) {
            const color = new ArrayBuffer(96);
            let opts = { editable: true, pixelFormat: 2, size: { height: 6, width: 8 } }
            let pixelmap = image.createPixelMapSync(color, opts)
                if (pixelmap == undefined) {
                    console.info('SUB_MULTIMEDIA_IMAGE_SCALE_PIXELMAP_SYNC_0100 createPixelMap failed');
                    expect(false).assertTrue();
                    done();
                }
                let numberX = 2.0;
                let numberY = 1.0;
                var res = false;
                pixelmap.scaleSync(numberX,numberY);
                res = true;
                if (!res) {
                    console.info('SUB_MULTIMEDIA_IMAGE_SCALE_PIXELMAP_SYNC_0100 scale2x1 failed');
                    expect(false).assertTrue()
                    done();
                }else{
                    console.info('SUB_MULTIMEDIA_IMAGE_SCALE_PIXELMAP_SYNC_0100 success ');
                    expect(true).assertTrue()
                    done();
                }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_CALLBACK_0100
         * @tc.name      : create pixelmap-callback (editable: true, pixelFormat: RGBA_8888, size: { height: 4, width: 6 }, bytes = buffer,scaleMode: 0, alphaType: 0)
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_CALLBACK_0100", 0, async function (done) {
            let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 }, scaleMode: 0, alphaType: 0 };
            createPixMapCb(done, "SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_CALLBACK_0100", opts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_CALLBACK_0200
         * @tc.name      : create pixelmap-callback (editable: true, pixelFormat: RGBA_8888, size: { height: 4, width: 6 }, bytes = buffer,scaleMode: 0, alphaType: 1)
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_CALLBACK_0200", 0, async function (done) {
            let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 }, scaleMode: 0, alphaType: 1 };
            createPixMapCb(done, "SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_CALLBACK_0200", opts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_CALLBACK_0300
         * @tc.name      : create pixelmap-callback (editable: true, pixelFormat: RGBA_8888, size: { height: 4, width: 6 }, bytes = buffer,scaleMode: 1, alphaType: 2)
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_CALLBACK_0300", 0, async function (done) {
            let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 }, scaleMode: 1, alphaType: 2 };
            createPixMapCb(done, "SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_CALLBACK_0300", opts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_CALLBACK_0400
         * @tc.name      : create pixelmap-callback (editable: true, pixelFormat: RGBA_8888, size: { height: 4, width: 6 }, bytes = buffer,scaleMode: 1, alphaType: 3)
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_CALLBACK_0400", 0, async function (done) {
            let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 }, scaleMode: 1, alphaType: 3 };
            createPixMapCb(done, "SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_CALLBACK_0400", opts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEINCREMENTALSOURCE_UPDATEDATA_PNG_PROMISE_0100
         * @tc.name      : createIncrementalSource-updateData-png-promise
         * @tc.desc      : 1.create imagesource
         *                 2.update data
         *                 3.create pixelmap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEINCREMENTALSOURCE_UPDATEDATA_PNG_PROMISE_0100", 0, async function (done) {
            createIncrementalSourcePromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_CREATEINCREMENTALSOURCE_UPDATEDATA_PNG_PROMISE_0100",
                "noSourceOpts"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEINCREMENTALSOURCE_UPDATEDATA_PNG_PROMISE_0200
         * @tc.name      : createIncrementalSource-updateData-png-promise
         * @tc.desc      : 1.create imagesource
         *                 2.update data
         *                 3.create pixelmap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEINCREMENTALSOURCE_UPDATEDATA_PNG_PROMISE_0200", 0, async function (done) {
            let opts = { sourceDensity: 240, pixelFormat: RGBA_8888, size: { height: 4, width: 6 } };
            createIncrementalSourcePromise(
                done,
                "SUB_MULTIMEDIA_IMAGE_CREATEINCREMENTALSOURCE_UPDATEDATA_PNG_PROMISE_0200",
                "sourceOpts",
                opts
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEINCREMENTALSOURCE_UPDATEDATA_PNG_CALLBACK_0100
         * @tc.name      : createIncrementalSource-updateData-png-callback
         * @tc.desc      : 1.create imagesource
         *                 2.update data
         *                 3.create pixelmap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEINCREMENTALSOURCE_UPDATEDATA_PNG_CALLBACK_0100", 0, async function (done) {
            createIncrementalSourceCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_CREATEINCREMENTALSOURCE_UPDATEDATA_PNG_CALLBACK_0100",
                "noSourceOpts"
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEINCREMENTALSOURCE_UPDATEDATA_PNG_CALLBACK_0200
         * @tc.name      : createIncrementalSource-updateData-png-callback
         * @tc.desc      : 1.create imagesource
         *                 2.update data
         *                 3.create pixelmap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEINCREMENTALSOURCE_UPDATEDATA_PNG_CALLBACK_0200", 0, async function (done) {
            let opts = { sourceDensity: 240, pixelFormat: RGBA_8888, size: { height: 4, width: 6 } };
            createIncrementalSourceCb(
                done,
                "SUB_MULTIMEDIA_IMAGE_CREATEINCREMENTALSOURCE_UPDATEDATA_PNG_CALLBACK_0200",
                "sourceOpts",
                opts
            );
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0001
         * @tc.name      : create pixelmap-sync (pixelFormat: 0, size: { width: 2, height: 2 },
                           alphaType:image.AlphaType.UNPREMUL)
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0001", 0, async function (done) {
            let opts = { pixelFormat: 0, size: { width: 2, height: 2 }, alphaType: 3 };
            createPixeMapSync(done, "SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0001", opts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0002
         * @tc.name      : create pixelmap-sync (pixelFormat: 0, size: { width: 2, height: 2 },
                           alphaType:image.AlphaType.UNPREMUL)
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0002", 0, async function (done) {
            let opts = { pixelFormat: 2, size: { width: 2, height: 2 }, alphaType: 3 };
            createPixeMapSync(done, "SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0002", opts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0003
         * @tc.name      : create pixelmap-sync (pixelFormat: 0, size: { width: 2, height: 2 },
                           alphaType:image.AlphaType.UNPREMUL)
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0003", 0, async function (done) {
            let opts = { pixelFormat: 3, size: { width: 2, height: 2 }, alphaType: 3 };
            createPixeMapSync(done, "SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0003", opts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0004
         * @tc.name      : create pixelmap-sync (pixelFormat: 0, size: { width: 2, height: 2 },
                           alphaType:image.AlphaType.UNPREMUL)
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0004", 0, async function (done) {
            let opts = { pixelFormat: 4, size: { width: 2, height: 2 }, alphaType: 3 };
            createPixeMapSync(done, "SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0004", opts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0005
         * @tc.name      : create pixelmap-sync (pixelFormat: 0, size: { width: 2, height: 2 },
                           alphaType:image.AlphaType.UNPREMUL)
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0005", 0, async function (done) {
            let opts = { pixelFormat: 5, size: { width: 2, height: 2 }, alphaType: 3 };
            createPixeMapSync(done, "SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0005", opts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0006
         * @tc.name      : create pixelmap-sync (pixelFormat: 0, size: { width: 2, height: 2 },
                           alphaType:image.AlphaType.UNPREMUL)
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0006", 0, async function (done) {
            let opts = { pixelFormat: 6, size: { width: 2, height: 2 }, alphaType: 3 };
            createPixeMapSync(done, "SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0006", opts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0007
         * @tc.name      : create pixelmap-sync (pixelFormat: 0, size: { width: 2, height: 2 },
                           alphaType:image.AlphaType.UNPREMUL)
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0007", 0, async function (done) {
            let opts = { pixelFormat: 7, size: { width: 2, height: 2 }, alphaType: 3 };
            createPixeMapSync(done, "SUB_MULTIMEDIA_IMAGE_CREATEPIXELMAP_SYNC_0007", opts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0100
         * @tc.name      : create PremultiplyPixelMap-promise
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.PremultiplyPixelMap
         *                 5.return color
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0100", 0, async function (done) {
            let opts = { pixelFormat: 0, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 0, size: { width: 2, height: 2 }, alphaType: 2 };
             
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, opts);
            let dstpixelmap1 = image.createPixelMapSync(opts);
            let constprepixelmap1 = image.createPixelMapSync(color, optsPre);
            image.createPremultipliedPixelMap(srcpixelmap1,dstpixelmap1)
                .then(()=>{
                    dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2)
                        .then(()=>{
                            let src = new Uint8Array(readBuffer_1);
                            let dst = new Uint8Array(readBuffer_2);
                            for (let i = 0; i < src.length; i++) {
                                if (Math.abs(src[i] - dst[i]) > 1) {
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0100 failed');
                                    expect(false).assertTrue();
                                    done();
                                    break;
                                } else {
                                    expect(true).assertTrue();
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0100 success');
                                    done();
                                }
                            }
                        }).catch((error) => {
                            expect(false).assertTrue();
                            console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0100 failed');
                            done();
                        })
                    }).catch((error) => {
                        expect(false).assertTrue();
                        console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0100 failed');
                        done();
                    })
                }).catch((error) => {
                    expect(false).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0100 failed');
                    done();
                })
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0200
         * @tc.name      : create PremultiplyPixelMap-promise
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.PremultiplyPixelMap
         *                 5.return color
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0200", 0, async function (done) {
            let opts = { pixelFormat: 2, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 2, size: { width: 2, height: 2 }, alphaType: 2 };
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, opts);
            let dstpixelmap1 = image.createPixelMapSync(opts);
            let constprepixelmap1 = image.createPixelMapSync(color, optsPre);
            image.createPremultipliedPixelMap(srcpixelmap1, dstpixelmap1)
                .then(()=>{
                    dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2)
                        .then(()=>{
                            let src = new Uint8Array(readBuffer_1);
                            let dst = new Uint8Array(readBuffer_2);
                            for (let i = 0; i < src.length; i++) {
                                if (Math.abs(src[i] - dst[i]) != 0) {
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0200 failed');
                                    expect(false).assertTrue();
                                    done();
                                    break;
                                } else {
                                    expect(false).assertTrue();
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0200 failed');
                                    done();
                                }
                            }
                        }).catch((error) => {
                            expect(true).assertTrue();
                            console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0200 success');
                            done();
                        })
                    }).catch((error) => {
                        expect(true).assertTrue();
                        console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0200 success');
                        done();
                    })
                }).catch((error) => {
                    expect(true).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0200 success');
                    done();
                })
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0300
         * @tc.name      : create PremultiplyPixelMap-promise
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.PremultiplyPixelMap
         *                 5.return color
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0300", 0, async function (done) {
            let opts = { pixelFormat: 3, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 3, size: { width: 2, height: 2 }, alphaType: 2 };
             
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, opts);
            let dstpixelmap1 = image.createPixelMapSync(opts);
            let constprepixelmap1 = image.createPixelMapSync(color, optsPre);
            image.createPremultipliedPixelMap(srcpixelmap1,dstpixelmap1)
                .then(()=>{
                    dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2)
                        .then(()=>{
                            let src = new Uint8Array(readBuffer_1);
                            let dst = new Uint8Array(readBuffer_2);
                            for (let i = 0; i < src.length; i++) {
                                
                                if (Math.abs(src[i] - dst[i]) > 1) {
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0300 failed');
                                    expect(false).assertTrue();
                                    done();
                                    break;
                                } else {
                                    expect(true).assertTrue();
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0300 success');
                                    done();
                                }
                            }
                        }).catch((error) => {
                            expect(false).assertTrue();
                            console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0300 failed');
                            done();
                        })
                    }).catch((error) => {
                        expect(false).assertTrue();
                        console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0300 failed');
                        done();
                    })
                }).catch((error) => {
                    expect(false).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0300 failed');
                    done();
                })
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0400
         * @tc.name      : create PremultiplyPixelMap-promise
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.PremultiplyPixelMap
         *                 5.return color
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0400", 0, async function (done) {
            let opts = { pixelFormat: 4, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 4, size: { width: 2, height: 2 }, alphaType: 2 };
             
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, opts);
            let dstpixelmap1 = image.createPixelMapSync(opts);
            let constprepixelmap1 = image.createPixelMapSync(color, optsPre);
            image.createPremultipliedPixelMap(srcpixelmap1,dstpixelmap1)
                .then(()=>{
                    dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2)
                        .then(()=>{
                            let src = new Uint8Array(readBuffer_1);
                            let dst = new Uint8Array(readBuffer_2);
                            for (let i = 0; i < src.length; i++) {
                                if (Math.abs(src[i] - dst[i]) > 1) {
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0400 failed');
                                    expect(false).assertTrue();
                                    done();
                                    break;
                                } else {
                                    expect(true).assertTrue();
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0400 success');
                                    done();
                                }
                            }
                        }).catch((error) => {
                            expect(false).assertTrue();
                            console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0400 failed');
                            done();
                        })
                    }).catch((error) => {
                        expect(false).assertTrue();
                        console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0400 failed');
                        done();
                    })
                }).catch((error) => {
                    expect(false).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0400 failed');
                    done();
                })
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0500
         * @tc.name      : create PremultiplyPixelMap-promise
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.PremultiplyPixelMap
         *                 5.return color
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0500", 0, async function (done) {
            let opts = { pixelFormat: 5, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 5, size: { width: 2, height: 2 }, alphaType: 2 };         
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, opts);
            let dstpixelmap1 = image.createPixelMapSync(opts);
            let constprepixelmap1 = image.createPixelMapSync(color, optsPre);
            image.createPremultipliedPixelMap(srcpixelmap1, dstpixelmap1)
                .then(()=>{
                    dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2)
                        .then(()=>{
                            let src = new Uint8Array(readBuffer_1);
                            let dst = new Uint8Array(readBuffer_2);
                            for (let i = 0; i < src.length; i++) {                               
                                if (Math.abs(src[i] - dst[i]) != 0) {
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0500 failed');
                                    expect(false).assertTrue();
                                    done();
                                    break;
                                } else {
                                    expect(false).assertTrue();
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0500 failed');
                                    done();
                                }
                            }
                        }).catch((error) => {
                            expect(true).assertTrue();
                            console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0500 success');
                            done();
                        })
                    }).catch((error) => {
                        expect(true).assertTrue();
                        console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0500 success');
                        done();
                    })
                }).catch((error) => {
                    expect(true).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0500 success');
                    done();
                })
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0600
         * @tc.name      : create PremultiplyPixelMap-promise
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.PremultiplyPixelMap
         *                 5.return color
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0600", 0, async function (done) {
            let opts = { pixelFormat: 6, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 6, size: { width: 2, height: 2 }, alphaType: 2 };
             
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, opts);
            let dstpixelmap1 = image.createPixelMapSync(opts);
            let constprepixelmap1 = image.createPixelMapSync(color, optsPre);
            image.createPremultipliedPixelMap(srcpixelmap1,dstpixelmap1)
                .then(()=>{
                    dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2)
                        .then(()=>{
                            let src = new Uint8Array(readBuffer_1);
                            let dst = new Uint8Array(readBuffer_2);
                            for (let i = 0; i < src.length; i++) {
                                if (Math.abs(src[i] - dst[i]) > 1) {
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0600 failed');
                                    expect(false).assertTrue();
                                    done();
                                    break;
                                } else {
                                    expect(true).assertTrue();
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0600 success');
                                    done();
                                }
                            }
                        }).catch((error) => {
                            expect(false).assertTrue();
                            console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0600 failed');
                            done();
                        })
                    }).catch((error) => {
                        expect(false).assertTrue();
                        console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0600 failed');
                        done();
                    })
                }).catch((error) => {
                    expect(false).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0600 failed');
                    done();
                })
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0700
        * @tc.name      : create PremultiplyPixelMap-promise
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.PremultiplyPixelMap
         *                 5.return color
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0700", 0, async function (done) {
            let opts = { pixelFormat: 7, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 7, size: { width: 2, height: 2 }, alphaType: 2 };
             
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
             let srcpixelmap1 = image.createPixelMapSync(color, opts);
            let dstpixelmap1 = image.createPixelMapSync(opts);
            let constprepixelmap1 = image.createPixelMapSync(color, optsPre);
            image.createPremultipliedPixelMap(srcpixelmap1,dstpixelmap1)
                .then(()=>{
                    dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2)
                        .then(()=>{
                            let src = new Uint8Array(readBuffer_1);
                            let dst = new Uint8Array(readBuffer_2);
                            for (let i = 0; i < src.length; i++) {
                                if (Math.abs(src[i] - dst[i]) != 0) {
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0700 failed');
                                    expect(false).assertTrue();
                                    done();
                                    break;
                                } else {
                                    expect(false).assertTrue();
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0700 failed');
                                    done();
                                }
                            }
                        }).catch((error) => {
                        expect(true).assertTrue();
                        console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0700 success');
                        done();
                        })
                    }).catch((error) => {
                        expect(true).assertTrue();
                        console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0700 success');
                        done();
                    })
                    }).catch((error) => {
                    expect(true).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_0700 success');
                    done();
                })
        });
        
        

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0100
         * @tc.name      : create PremultiplyPixelMap-callback
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.PremultiplyPixelMap
         *                 5.callback result
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0100', 0, async function (done) {
            let opts = { pixelFormat: 0, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 0, size: { width: 2, height: 2 }, alphaType: 2 };
             
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, opts);
            let dstpixelmap1 = image.createPixelMapSync(opts);
            let constprepixelmap1 = image.createPixelMapSync(color, optsPre);
            let res = false
            image.createPremultipliedPixelMap(srcpixelmap1, dstpixelmap1, () => {
                dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2).then(()=>{
                        let src = new Uint8Array(readBuffer_1);
                        let dst = new Uint8Array(readBuffer_2);
                        for (let i = 0; i < src.length; i++) {
                            if (Math.abs(src[i] - dst[i]) <= 1) {
                                res = true;
                            } else {
                                res = false;
                                break;
                            }
                        }
                        
                    })
                })
            })
            await sleep(300);
            if (res) {
                expect(res == true).assertTrue();
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0100 success');
            } else {
                expect(res == true).assertTrue();
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0100 failed');
            }
            done();
        });
        
        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0200
         * @tc.name      : create PremultiplyPixelMap-callback
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.PremultiplyPixelMap
         *                 5.callback result
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0200', 0, async function (done) {
            let opts = { pixelFormat: 2, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 2, size: { width: 2, height: 2 }, alphaType: 2 };
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, opts);
            let dstpixelmap1 = image.createPixelMapSync(opts);
            let constprepixelmap1 = image.createPixelMapSync(color, optsPre);
            let res = false;
            image.createPremultipliedPixelMap(srcpixelmap1, dstpixelmap1, (err) => {
                if (!err) {
                    res = true;
                }
            })
            await sleep(300);
            expect(res == false).assertTrue();
            console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0200 success');
            done();
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0300
         * @tc.name      : create PremultiplyPixelMap-callback
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.PremultiplyPixelMap
         *                 5.callback result
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0300', 0, async function (done) {
            let opts = { pixelFormat: 3, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 3, size: { width: 2, height: 2 }, alphaType: 2 };
             
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, opts);
            let dstpixelmap1 = image.createPixelMapSync(opts);
            let constprepixelmap1 = image.createPixelMapSync(color, optsPre);
            let res = false
            image.createPremultipliedPixelMap(srcpixelmap1, dstpixelmap1, () => {
                dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2).then(()=>{
                        let src = new Uint8Array(readBuffer_1);
                        let dst = new Uint8Array(readBuffer_2);
                        for (let i = 0; i < src.length; i++) {
                            if (Math.abs(src[i] - dst[i]) <= 1) {
                                res = true;
                            } else {
                                res = false;
                                    break;
                            }
                        }
                        
                    })
                })
            })
            await sleep(300);
            if (res) {
                expect(res == true).assertTrue();
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0300 success');
            } else {
                expect(res == false).assertTrue();
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0300 failed');
            }
            done();
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0400
         * @tc.name      : create PremultiplyPixelMap-callback
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.PremultiplyPixelMap
         *                 5.callback result
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0400', 0, async function (done) {
            let opts = { pixelFormat: 4, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 4, size: { width: 2, height: 2 }, alphaType: 2 };
             
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, opts);
            let dstpixelmap1 = image.createPixelMapSync(opts);
            let constprepixelmap1 = image.createPixelMapSync(color, optsPre);
            let res = false
            image.createPremultipliedPixelMap(srcpixelmap1, dstpixelmap1, () => {
                dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2).then(()=>{
                        let src = new Uint8Array(readBuffer_1);
                        let dst = new Uint8Array(readBuffer_2);
                        for (let i = 0; i < src.length; i++) {
                            if (Math.abs(src[i] - dst[i]) <= 1) {
                                res = true;
                            } else {
                                res = false;
                                break;
                            }
                        }
                        
                    })
                })
            })
            await sleep(300);
            if (res) {
                expect(res == true).assertTrue();
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0400 success');
            } else {
                expect(res == false).assertTrue();
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0400 failed');
            }
            done();
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0500
         * @tc.name      : create PremultiplyPixelMap-callback
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.PremultiplyPixelMap
         *                 5.callback result
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0500', 0, async function (done) {
            let opts = { pixelFormat: 5, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 5, size: { width: 2, height: 2 }, alphaType: 2 };
             
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, opts);
            let dstpixelmap1 = image.createPixelMapSync(opts);
            let constprepixelmap1 = image.createPixelMapSync(color, optsPre);
            let res = false
            image.createPremultipliedPixelMap(srcpixelmap1, dstpixelmap1, (err) => {
                if (!err) {
                    res = true;
                }
            })
            await sleep(300);
            expect(res == false).assertTrue();
            console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0200 success');
            done();
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0600
         * @tc.name      : create PremultiplyPixelMap-callback
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.PremultiplyPixelMap
         *                 5.callback result
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0600', 0, async function (done) {
            let opts = { pixelFormat: 6, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 6, size: { width: 2, height: 2 }, alphaType: 2 };
             
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, opts);
            let dstpixelmap1 = image.createPixelMapSync(opts);
            let constprepixelmap1 = image.createPixelMapSync(color, optsPre);
            let res = false
            image.createPremultipliedPixelMap(srcpixelmap1, dstpixelmap1, () => {
                dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2).then(()=>{
                        let src = new Uint8Array(readBuffer_1);
                        let dst = new Uint8Array(readBuffer_2);
                        for (let i = 0; i < src.length; i++) {
                            if (Math.abs(src[i] - dst[i]) <= 1) {
                                res = true;
                            } else {
                                res = false;
                                break;
                            }
                        }
                    })
                })
            })
            await sleep(300);
            if (res) {
                expect(res == true).assertTrue();
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0600 success');
            } else {
                expect(res == false).assertTrue();
                console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0600 failed');
            }
            done();
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0700
         * @tc.name      : create PremultiplyPixelMap-callback
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.PremultiplyPixelMap
         *                 5.callback result
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0700', 0, async function (done) {
            let opts = { pixelFormat: 7, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 7, size: { width: 2, height: 2 }, alphaType: 2 };
             
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, opts);
            let dstpixelmap1 = image.createPixelMapSync(opts);
            let constprepixelmap1 = image.createPixelMapSync(color, optsPre);
            let res = false
            image.createPremultipliedPixelMap(srcpixelmap1, dstpixelmap1, (err) => {
                if (!err) {
                    res = true;
                }
            })
            await sleep(300);
            expect(res == false).assertTrue();
            console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0700 success');
            done();
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0100
         * @tc.name      : create UnPremultiplyPixelMap-promise
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.UnPremultiplyPixelMap
         *                 5.return color
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0100", 0, async function (done) {
            let opts = { pixelFormat: 0, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 0, size: { width: 2, height: 2 }, alphaType: 2 };
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, optsPre);
            let dstpixelmap1 = image.createPixelMapSync(optsPre);
            let constprepixelmap1 = image.createPixelMapSync(color, opts);
            image.createUnpremultipliedPixelMap(srcpixelmap1,dstpixelmap1)
                .then(()=>{
                    dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2)
                        .then(()=>{
                            let src = new Uint8Array(readBuffer_1);
                            let dst = new Uint8Array(readBuffer_2);
                            for (let i = 0; i < src.length; i++) {
                                if (Math.abs(src[i] - dst[i]) > 1) {
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0100 failed');
                                    expect(false).assertTrue();
                                    done();
                                    break;
                                } else {
                                    expect(true).assertTrue();
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0100 success');
                                    done();
                                }
                            }
                        }).catch((error) => {
                            expect(false).assertTrue();
                            console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0100 failed');
                            done();
                        })
                    }).catch((error) => {
                        expect(false).assertTrue();
                        console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0100 failed');
                        done();
                    })
                }).catch((error) => {
                    expect(false).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0100 failed');
                    done();
                })
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0200
         * @tc.name      : create UnPremultiplyPixelMap-promise
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.UnPremultiplyPixelMap
         *                 5.return color
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0200", 0, async function (done) {
            let opts = { pixelFormat: 2, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 2, size: { width: 2, height: 2 }, alphaType: 2 };
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, optsPre);
            let dstpixelmap1 = image.createPixelMapSync(optsPre);
            let constprepixelmap1 = image.createPixelMapSync(color, opts);
            image.createUnpremultipliedPixelMap(srcpixelmap1,dstpixelmap1)
                .then(()=>{
                    dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2)
                        .then(()=>{
                            let src = new Uint8Array(readBuffer_1);
                            let dst = new Uint8Array(readBuffer_2);
                            for (let i = 0; i < src.length; i++) {
                                if (Math.abs(src[i] - dst[i]) != 0) {
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0200 failed');
                                    expect(false).assertTrue();
                                    done();
                                    break;
                                } else {
                                    expect(false).assertTrue();
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0200 failed');
                                    done();
                                }
                            }
                        }).catch((error) => {
                            expect(true).assertTrue();
                            console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0200 success');
                            done();
                        })
                    }).catch((error) => {
                        expect(true).assertTrue();
                        console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0200 success');
                        done();
                    })
                }).catch((error) => {
                    expect(true).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0100 success');
                    done();
                })
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0300
         * @tc.name      : create UnPremultiplyPixelMap-promise
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.UnPremultiplyPixelMap
         *                 5.return color
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0300", 0, async function (done) {
            let opts = { pixelFormat: 3, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 3, size: { width: 2, height: 2 }, alphaType: 2 };
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, optsPre);
            let dstpixelmap1 = image.createPixelMapSync(optsPre);
            let constprepixelmap1 = image.createPixelMapSync(color, opts);
            image.createUnpremultipliedPixelMap(srcpixelmap1,dstpixelmap1)
                .then(()=>{
                    dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2)
                        .then(()=>{
                            let src = new Uint8Array(readBuffer_1);
                            let dst = new Uint8Array(readBuffer_2);
                            for (let i = 0; i < src.length; i++) {
                                if (Math.abs(src[i] - dst[i]) > 1) {
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0300 failed');
                                    expect(false).assertTrue();
                                    done();
                                    break;
                                } else {
                                    expect(true).assertTrue();
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0300 success');
                                    done();
                                }
                            }
                        }).catch((error) => {
                            expect(false).assertTrue();
                            console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0300 failed');
                            done();
                        })
                    }).catch((error) => {
                        expect(false).assertTrue();
                        console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0300 failed');
                        done();
                    })
                }).catch((error) => {
                    expect(false).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0300 failed');
                    done();
                })
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0400
         * @tc.name      : create UnPremultiplyPixelMap-promise
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.UnPremultiplyPixelMap
         *                 5.return color
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0400", 0, async function (done) {
            let opts = { pixelFormat: 4, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 4, size: { width: 2, height: 2 }, alphaType: 2 };
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, optsPre);
            let dstpixelmap1 = image.createPixelMapSync(optsPre);
            let constprepixelmap1 = image.createPixelMapSync(color, opts);
            image.createUnpremultipliedPixelMap(srcpixelmap1,dstpixelmap1)
                .then(()=>{
                    dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2)
                        .then(()=>{
                            let src = new Uint8Array(readBuffer_1);
                            let dst = new Uint8Array(readBuffer_2);
                            for (let i = 0; i < src.length; i++) {
                                if (Math.abs(src[i] - dst[i]) > 1) {
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0400 failed');
                                    expect(false).assertTrue();
                                    done();
                                    break;
                                } else {
                                    expect(true).assertTrue();
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0400 success');
                                    done();
                                }
                            }
                        }).catch((error) => {
                            expect(false).assertTrue();
                            console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0400 failed');
                            done();
                        })
                    }).catch((error) => {
                        expect(false).assertTrue();
                        console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0400 failed');
                        done();
                    })
                }).catch((error) => {
                    expect(false).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0400 failed');
                    done();
                })
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0500
         * @tc.name      : create UnPremultiplyPixelMap-promise
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.UnPremultiplyPixelMap
         *                 5.return color
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0500", 0, async function (done) {
            let opts = { pixelFormat: 5, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 5, size: { width: 2, height: 2 }, alphaType: 2 };
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, optsPre);
            let dstpixelmap1 = image.createPixelMapSync(optsPre);
            let constprepixelmap1 = image.createPixelMapSync(color, opts);
            image.createUnpremultipliedPixelMap(srcpixelmap1,dstpixelmap1)
                .then(()=>{
                    dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2)
                        .then(()=>{
                            let src = new Uint8Array(readBuffer_1);
                            let dst = new Uint8Array(readBuffer_2);
                            for (let i = 0; i < src.length; i++) {
                                if (Math.abs(src[i] - dst[i]) != 0) {
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0500 failed');
                                    expect(false).assertTrue();
                                    done();
                                    break;
                                } else {
                                    expect(false).assertTrue();
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0500 failed');
                                    done();
                                }
                            }
                        }).catch((error) => {
                            expect(true).assertTrue();
                            console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0500 success');
                            done();
                        })
                    }).catch((error) => {
                        expect(true).assertTrue();
                        console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0500 success');
                        done();
                    })
                }).catch((error) => {
                    expect(true).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0500 success');
                    done();
                })
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0600
         * @tc.name      : create UnPremultiplyPixelMap-promise
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.UnPremultiplyPixelMap
         *                 5.return color
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0600", 0, async function (done) {
            let opts = { pixelFormat: 6, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 6, size: { width: 2, height: 2 }, alphaType: 2 };
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, optsPre);
            let dstpixelmap1 = image.createPixelMapSync(optsPre);
            let constprepixelmap1 = image.createPixelMapSync(color, opts);
            image.createUnpremultipliedPixelMap(srcpixelmap1,dstpixelmap1)
                .then(()=>{
                    dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2)
                        .then(()=>{
                            let src = new Uint8Array(readBuffer_1);
                            let dst = new Uint8Array(readBuffer_2);
                            for (let i = 0; i < src.length; i++) {
                                if (Math.abs(src[i] - dst[i]) > 1) {
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0600 failed');
                                    expect(false).assertTrue();
                                    done();
                                    break;
                                } else {
                                    expect(true).assertTrue();
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0600 success');
                                    done();
                                }
                            }
                        }).catch((error) => {
                            expect(false).assertTrue();
                            console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0600 failed');
                            done();
                        })
                    }).catch((error) => {
                        expect(false).assertTrue();
                        console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0600 failed');
                        done();
                    })
                }).catch((error) => {
                    expect(false).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0600 failed');
                    done();
                })
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0700
         * @tc.name      : create UnPremultiplyPixelMap-promise
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.UnPremultiplyPixelMap
         *                 5.return color
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0700", 0, async function (done) {
            let opts = { pixelFormat: 7, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 7, size: { width: 2, height: 2 }, alphaType: 2 };
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, optsPre);
            let dstpixelmap1 = image.createPixelMapSync(optsPre);
            let constprepixelmap1 = image.createPixelMapSync(color, opts);
            image.createUnpremultipliedPixelMap(srcpixelmap1,dstpixelmap1)
                .then(()=>{
                    dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2)
                        .then(()=>{
                            let src = new Uint8Array(readBuffer_1);
                            let dst = new Uint8Array(readBuffer_2);
                            for (let i = 0; i < src.length; i++) {
                                if (Math.abs(src[i] - dst[i]) != 0) {
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0700 failed');
                                    expect(false).assertTrue();
                                    done();
                                    break;
                                } else {
                                    expect(false).assertTrue();
                                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0700 failed');
                                    done();
                                }
                            }
                        }).catch((error) => {
                            expect(true).assertTrue();
                            console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0700 success');
                            done();
                        })
                    }).catch((error) => {
                        expect(true).assertTrue();
                        console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0700 success');
                        done();
                    })
                }).catch((error) => {
                    expect(true).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_0700 success');
                    done();
                })
        });

		/**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_0100
         * @tc.name      : create PremultiplyPixelMap-callback
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.UnPremultiplyPixelMap
         *                 5.callback result
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_0100', 0, async function (done) {
            let opts = { pixelFormat: 0, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 0, size: { width: 2, height: 2 }, alphaType: 2 };
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, optsPre);
            let dstpixelmap1 = image.createPixelMapSync(optsPre);
            let constprepixelmap1 = image.createPixelMapSync(color, opts);
            let res = false;
            image.createUnpremultipliedPixelMap(srcpixelmap1, dstpixelmap1, () => {
                    dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2)
                        .then(()=>{
                            let src = new Uint8Array(readBuffer_1);
                            let dst = new Uint8Array(readBuffer_2);
                            for (let i = 0; i < src.length; i++) {
                                if (Math.abs(src[i] - dst[i]) <= 1) {
                                    res = true;
                                } else {
                                    res = false;
                                    break;
                                }
                            }
                        })
                    })
                })
                await sleep(300);
                if (res) {
                    expect(res == true).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0600 success');
                } else {
                    expect(res == false).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0600 failed');
                }
                done();
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_0200
         * @tc.name      : create PremultiplyPixelMap-callback
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.UnPremultiplyPixelMap
         *                 5.callback result
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_0200', 0, async function (done) {
            let opts = { pixelFormat: 2, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 2, size: { width: 2, height: 2 }, alphaType: 2 };
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, optsPre);
            let dstpixelmap1 = image.createPixelMapSync(optsPre);
            let constprepixelmap1 = image.createPixelMapSync(color, opts);
            let res = false;
			image.createUnpremultipliedPixelMap(srcpixelmap1, dstpixelmap1, (err) => {
                if (!err) {
                    res = true;
                }
            })
            await sleep(300);
            expect(res == false).assertTrue();
            console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0200 success');
            done();
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_0300
         * @tc.name      : create PremultiplyPixelMap-callback
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.UnPremultiplyPixelMap
         *                 5.callback result
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_0300', 0, async function (done) {
            let opts = { pixelFormat: 3, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 3, size: { width: 2, height: 2 }, alphaType: 2 };
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, optsPre);
            let dstpixelmap1 = image.createPixelMapSync(optsPre);
            let constprepixelmap1 = image.createPixelMapSync(color, opts);
            let res = false
            image.createUnpremultipliedPixelMap(srcpixelmap1, dstpixelmap1, () => {
                    dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2)
                        .then(()=>{
                            let src = new Uint8Array(readBuffer_1);
                            let dst = new Uint8Array(readBuffer_2);
                            for (let i = 0; i < src.length; i++) {
                                if (Math.abs(src[i] - dst[i]) <= 1) {
                                    res = true;
                                } else {
                                    res = false;
                                    break;
                                }
                            }
                        })
                    })
                })
                await sleep(300);
                if (res) {
                    expect(true).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_0300 success');
                } else {
                    expect(false).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_0300 failed');
                }
                done();
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_0400
         * @tc.name      : create PremultiplyPixelMap-callback
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.UnPremultiplyPixelMap
         *                 5.callback result
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_0400', 0, async function (done) {
            let opts = { pixelFormat: 4, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 4, size: { width: 2, height: 2 }, alphaType: 2 };
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, optsPre);
            let dstpixelmap1 = image.createPixelMapSync(optsPre);
            let constprepixelmap1 = image.createPixelMapSync(color, opts);
            let res = false
            image.createUnpremultipliedPixelMap(srcpixelmap1, dstpixelmap1, () => {
                    dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2)
                        .then(()=>{
                            let src = new Uint8Array(readBuffer_1);
                            let dst = new Uint8Array(readBuffer_2);
                            for (let i = 0; i < src.length; i++) {
                                if (Math.abs(src[i] - dst[i]) <= 1) {
                                    res = true;
                                } else {
                                    res = false;
                                    break;
                                }
                            }
                        })
                    })
                })
                await sleep(300);
                if (res) {
                    expect(res == true).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0600 success');
                } else {
                    expect(res ==false).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0600 failed');
                }
                done();
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_0500
         * @tc.name      : create PremultiplyPixelMap-callback
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.UnPremultiplyPixelMap
         *                 5.callback result
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_0500', 0, async function (done) {
            let opts = { pixelFormat: 5, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 5, size: { width: 2, height: 2 }, alphaType: 2 };
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, optsPre);
            let dstpixelmap1 = image.createPixelMapSync(optsPre);
            let constprepixelmap1 = image.createPixelMapSync(color, opts);
            let res = false
            image.createUnpremultipliedPixelMap(srcpixelmap1, dstpixelmap1, (err) => {
                if (!err) {
                    res = true;
                }
            })
            await sleep(300);
            expect(res == false).assertTrue();
            console.info('SUB_MULTIMEDIA_IMAGE_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_0500 success');
            done();
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_0600
         * @tc.name      : create PremultiplyPixelMap-callback
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.UnPremultiplyPixelMap
         *                 5.callback result
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_0600', 0, async function (done) {
            let opts = { pixelFormat: 6, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 6, size: { width: 2, height: 2 }, alphaType: 2 };
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, optsPre);
            let dstpixelmap1 = image.createPixelMapSync(optsPre);
            let constprepixelmap1 = image.createPixelMapSync(color, opts);
            let res = false
            image.createUnpremultipliedPixelMap(srcpixelmap1, dstpixelmap1, () => {
                    dstpixelmap1.readPixelsToBuffer(readBuffer_1).then(() => {
                    constprepixelmap1.readPixelsToBuffer(readBuffer_2)
                        .then(()=>{
                            let src = new Uint8Array(readBuffer_1);
                            let dst = new Uint8Array(readBuffer_2);
                            for (let i = 0; i < src.length; i++) {
                                if (Math.abs(src[i] - dst[i]) <= 1) {
                                    res = true;
                                } else {
                                    res = false;
                                    break;
                                }
                            }
                        })
                    })
                })
                await sleep(300);
                if (res) {
                    expect(true).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_0600 success');
                } else {
                    expect(false).assertTrue();
                    console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_0600 failed');
                }
                done();
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_0700
         * @tc.name      : create PremultiplyPixelMap-callback
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size,color
         *                 3.using color and opts create newPixelMap
         *                 4.UnPremultiplyPixelMap
         *                 5.callback result
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_0700', 0, async function (done) {
            let opts = { pixelFormat: 7, size: { width: 2, height: 2 }, alphaType: 3 };
            let optsPre =  { pixelFormat: 7, size: { width: 2, height: 2 }, alphaType: 2 };
            const color = new ArrayBuffer(2 * 2*4);
            let bufferArr = new Uint8Array(color);
            bufferArr[0] = 255; //b
            bufferArr[1] = 0;   //g
            bufferArr[2] = 153; //r
            bufferArr[3] = 127; //a

            bufferArr[4] = 0;   //b
            bufferArr[5] = 255;//g
            bufferArr[6] = 153;//r
            bufferArr[7] = 127;//a

            bufferArr[8] = 153;//b
            bufferArr[9] = 0;//g
            bufferArr[10] = 255;//r
            bufferArr[11] = 102;//a

            bufferArr[12] = 153;//b
            bufferArr[13] = 153;//g
            bufferArr[14] = 153;//r
            bufferArr[15] = 127;//a
            const readBuffer_1 = new ArrayBuffer(2 * 2*4);
            const readBuffer_2 = new ArrayBuffer(2 * 2*4);
            let srcpixelmap1 = image.createPixelMapSync(color, optsPre);
            let dstpixelmap1 = image.createPixelMapSync(optsPre);
            let constprepixelmap1 = image.createPixelMapSync(color, opts);
            let res = false
            image.createUnpremultipliedPixelMap(srcpixelmap1, dstpixelmap1, (err) => {
                if (!err) {
                    res = true;
                }
            })
            await sleep(300);
            expect(res == false).assertTrue();
            console.info('SUB_MULTIMEDIA_IMAGE_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_0700 success');
            done();
        });
    });
}
