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

import image from '@ohos.multimedia.image'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import { testPng } from './testImg'

export default function addImage() {
    describe('addImage', function () {
        const RGBA_8888 = image.PixelMapFormat.RGBA_8888;
        const CENTER_CROP = image.ScaleMode.CENTER_CROP;
        const FIT_TARGET_SIZE = image.ScaleMode.FIT_TARGET_SIZE;
        const UNKNOWN = image.AlphaType.UNKNOWN;
        const OPAQUE = image.AlphaType.OPAQUE;
        const PREMUL = image.AlphaType.PREMUL;
        const UNPREMUL = image.AlphaType.UNPREMUL;

        beforeAll(async function () {
            console.info('beforeAll case');
        })

        beforeEach(function () {
            console.info('beforeEach case');
        })

        afterEach(async function () {
            console.info('afterEach case');
        })

        afterAll(async function () {
            console.info('afterAll case');
        })

        function createPixMapPromise(done, testNum, opts) {
            const Color = new ArrayBuffer(96);
            image.createPixelMap(Color, opts)
                .then(pixelmap => {
                    expect(pixelmap != undefined).assertTrue();
                    console.info(`${testNum} success`);
                    done();
                })
                .catch(error => {
                    console.log(`${testNum} error: ` + error);
                    expect(false).assertTrue();
                    done();
                })
        }

        function createPixMapCb(done, testNum, opts) {
            const Color = new ArrayBuffer(96);
            image.createPixelMap(Color, opts, (err, pixelmap) => {
                expect(pixelmap != undefined).assertTrue();
                console.info(`${testNum} success`);
                done();
            })
        }

        async function createIncrementalSourcePromise(done, testNum, type, opts) {
            let testimagebuffer = testPng;
            let incSouce;
            console.info(`${testNum} 0001 ` + testimagebuffer.length);
            let bufferSize = 5000;
            let offset = 0;
            if (type == 'sourceOpts') {
                console.info(`${testNum} have sourceopts`)
                incSouce = image.createIncrementalSource(new ArrayBuffer(1), opts);
            } else {
                console.info(`${testNum} no sourceopts`)
                incSouce = image.createIncrementalSource(new ArrayBuffer(1));
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
                    sampleSize: 1
                };
                incSouce.createPixelMap(decodingOptions, (err, pixelmap) => {
                    console.info(`${testNum} 0004` + pixelmap);
                    expect(pixelmap != undefined).assertTrue();
                    done();
                })
            } else {
                expect(false).assertTrue();
                done();
            }
        }

        async function createIncrementalSourceCb(done, testNum, type, opts) {
            let testimagebuffer = testPng;
            let incSouce;
            console.info(`${testNum} 0001 ` + testimagebuffer.length);
            let bufferSize = 5000;
            let offset = 0;
            if (type == 'sourceOpts') {
                incSouce = image.createIncrementalSource(new ArrayBuffer(1), opts);
            } else {
                incSouce = image.createIncrementalSource(new ArrayBuffer(1));
            }
            let ret;
            let isFinished = false;
            while (offset < testimagebuffer.length) {
                var oneStep = testimagebuffer.slice(offset, offset + bufferSize);
                console.info(`${testNum} 0002 ` + oneStep.length);
                if (oneStep.length < bufferSize) {
                    isFinished = true;
                }
                ret = await new Promise(res => {
                    incSouce.updateData(oneStep, isFinished, 0, oneStep.length, (err, ret) => {
                        res(ret);
                    })
                })

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
                    sampleSize: 1
                };
                incSouce.createPixelMap(decodingOptions, (err, pixelmap) => {
                    console.info(`${testNum} 0004` + pixelmap);
                    expect(pixelmap != undefined).assertTrue();
                    done();
                })
            } else {
                expect(false).assertTrue();
                done();
            }
        }

        /**
         * @tc.number    : addImage_001
         * @tc.name      : create pixelmap-promise (editable: true, pixelFormat: RGBA_8888, 
         * size: { height: 4, width: 6 }, bytes = buffer,scaleMode: CENTER_CROP,  alphaType: UNKNOWN )
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('add_01_001', 0, async function (done) {
            let opts = {
                editable: true, pixelFormat: RGBA_8888, size: { height: 4, width: 6 },
                scaleMode: CENTER_CROP, alphaType: UNKNOWN
            }
            createPixMapPromise(done, 'add_01_001', opts);
        })

        /**
         * @tc.number    : add_01_002
         * @tc.name      : create pixelmap-promise (editable: true, pixelFormat: RGBA_8888, 
         * size: { height: 4, width: 6 }, bytes = buffer,scaleMode: CENTER_CROP,  alphaType: OPAQUE )
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('add_01_002', 0, async function (done) {
            let opts = {
                editable: true, pixelFormat: RGBA_8888, size: { height: 4, width: 6 },
                scaleMode: CENTER_CROP, alphaType: OPAQUE
            }
            createPixMapPromise(done, 'add_01_002', opts);
        })

        /**
         * @tc.number    : add_01_003
         * @tc.name      : create pixelmap-promise (editable: true, pixelFormat: RGBA_8888, 
         * size: { height: 4, width: 6 }, bytes = buffer,scaleMode: FIT_TARGET_SIZE , alphaType: PREMUL )
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('add_01_003', 0, async function (done) {
            let opts = {
                editable: true, pixelFormat: RGBA_8888, size: { height: 4, width: 6 },
                scaleMode: FIT_TARGET_SIZE, alphaType: PREMUL
            }
            createPixMapPromise(done, 'add_01_003', opts);
        })

        /**
         * @tc.number    : add_01_004
         * @tc.name      : create pixelmap-promise (editable: true, pixelFormat: RGBA_8888,
         *  size: { height: 4, width: 6 }, bytes = buffer,scaleMode: FIT_TARGET_SIZE , alphaType: UNPREMUL )
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('add_01_004', 0, async function (done) {
            let opts = {
                editable: true, pixelFormat: RGBA_8888, size: { height: 4, width: 6 },
                scaleMode: FIT_TARGET_SIZE, alphaType: UNPREMUL
            }
            createPixMapPromise(done, 'add_01_004', opts);
        })

        /**
         * @tc.number    : add_02_001
         * @tc.name      : create pixelmap-callback (editable: true, pixelFormat: RGBA_8888, 
         * size: { height: 4, width: 6 }, bytes = buffer,scaleMode: FIT_TARGET_SIZE , alphaType: UNKNOWN )
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('add_02_001', 0, async function (done) {
            let opts = {
                editable: true, pixelFormat: RGBA_8888, size: { height: 4, width: 6 },
                scaleMode: FIT_TARGET_SIZE, alphaType: UNKNOWN
            }
            createPixMapCb(done, 'add_02_001', opts);
        })

        /**
         * @tc.number    : add_02_002
         * @tc.name      : create pixelmap-callback (editable: true, pixelFormat: RGBA_8888, 
         * size: { height: 4, width: 6 }, bytes = buffer,scaleMode: FIT_TARGET_SIZE , alphaType: OPAQUE )
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('add_02_002', 0, async function (done) {
            let opts = {
                editable: true, pixelFormat: RGBA_8888, size: { height: 4, width: 6 },
                scaleMode: FIT_TARGET_SIZE, alphaType: OPAQUE
            }
            createPixMapCb(done, 'add_02_002', opts);
        })

        /**
         * @tc.number    : add_02_003
         * @tc.name      : create pixelmap-callback (editable: true, pixelFormat: RGBA_8888, 
         * size: { height: 4, width: 6 }, bytes = buffer,scaleMode: CENTER_CROP,  alphaType: PREMUL )
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('add_02_003', 0, async function (done) {
            let opts = {
                editable: true, pixelFormat: RGBA_8888, size: { height: 4, width: 6 },
                scaleMode: CENTER_CROP, alphaType: PREMUL
            }
            createPixMapCb(done, 'add_02_003', opts);
        })

        /**
         * @tc.number    : add_02_004
         * @tc.name      : create pixelmap-callback (editable: true, pixelFormat: RGBA_8888, 
         * size: { height: 4, width: 6 }, bytes = buffer,scaleMode: CENTER_CROP,  alphaType: UNPREMUL )
         * @tc.desc      : 1.create InitializationOptions object
         *                 2.set editable,pixeFormat,size
         *                 3.using color and opts create newPixelMap
         *                 4.return newpixelmap not empty
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('add_02_004', 0, async function (done) {
            let opts = {
                editable: true, pixelFormat: RGBA_8888, size: { height: 4, width: 6 },
                scaleMode: CENTER_CROP, alphaType: UNPREMUL
            }
            createPixMapCb(done, 'add_02_004', opts);
        })

        /**
         * @tc.number    : add_053
         * @tc.name      : createIncrementalSource-updateData-png-promise
         * @tc.desc      : 1.create imagesource
         *                 2.update data
         *                 3.create pixelmap
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('add_053', 0, async function (done) {
            createIncrementalSourcePromise(done, 'add_053', 'noSourceOpts')
        })

        /**
         * @tc.number    : add_053-1
         * @tc.name      : createIncrementalSource-updateData-png-callback
         * @tc.desc      : 1.create imagesource
         *                 2.update data
         *                 3.create pixelmap
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('add_053-1', 0, async function (done) {
            createIncrementalSourceCb(done, 'add_053-1', 'noSourceOpts')
        })

        /**
         * @tc.number    : add_054
         * @tc.name      : createIncrementalSource-updateData-png-promise
         * @tc.desc      : 1.create imagesource
         *                 2.update data
         *                 3.create pixelmap
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('add_054', 0, async function (done) {
            let opts = {
                sourceDensity: 240,
                pixelFormat: RGBA_8888,
                size: { height: 4, width: 6 }
            };
            createIncrementalSourcePromise(done, 'add_054', 'sourceOpts', opts)
        })

        /**
         * @tc.number    : add_055
         * @tc.name      : createIncrementalSource-updateData-png-callback
         * @tc.desc      : 1.create imagesource
         *                 2.update data
         *                 3.create pixelmap
         * @tc.size      : MEDIUM 
         * @tc.type      : Functional
         * @tc.level     : Level 1
         */
        it('add_055', 0, async function (done) {
            let opts = {
                sourceDensity: 240,
                pixelFormat: RGBA_8888,
                size: { height: 4, width: 6 }
            };
            createIncrementalSourceCb(done, 'add_055', 'sourceOpts', opts)
        })
    })
}