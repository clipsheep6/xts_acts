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

import image from '@ohos.multimedia.image'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'

describe('Image', function () {

    beforeAll(function () {
        console.info('beforeAll case');
    })

    beforeEach(function () {
        isTimeOut = false;
        console.info('beforeEach case');
    })

    afterEach(function () {
        console.info('afterEach case');
    })

    afterAll(function () {
        console.info('afterAll case');
    })

    /* *
        * @tc.number    : TC_001
        * @tc.name      : create pixelmap object
        * @tc.desc      : 1.创建InitializationOptions对象opts
        *                 2.设置color，colorlength，offset，width，height，pixeFormat，alphyType
        *                 3.使用color，colorlength， offset，width和opts创建PixelMap对象newPixelMap
        *                 4.验证newPixelMap对象不为null
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_001', 0, async function (done) {
        const Color = new ArrayBuffer(96);
        let opts = { alphaType: 0, editable: true, pixelFormat: 4, scaleMode: 1, size: { height: 2, width: 3 } }
        image.createPixelMap(Color, opts)
        .then(pixelmap => {
            expect(pixelmap !== null).assertTrue();
            console.info('TC_001 success');
            done();
        })
        .catch(error => {
            console.log('TC_001 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /* *
        * @tc.number    : TC_001-1
        * @tc.name      : create pixelmap object
        * @tc.desc      : 1.创建InitializationOptions对象opts
        *                 2.设置color，colorlength，offset，width，height，pixeFormat，alphyType
        *                 3.使用color，colorlength， offset，width和opts创建PixelMap对象newPixelMap
        *                 4.验证newPixelMap对象不为null
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_001-1', 0, async function (done) {
        const Color = new ArrayBuffer(96);
        let opts = { alphaType: 0, editable: true, pixelFormat: 4, scaleMode: 1, size: { height: 2, width: 3 } }
        image.createPixelMap(Color, opts, pixelmap => {
            expect(pixelmap !== null).assertTrue();
            console.info('TC_001-1 success');
            done();
        })
        .catch(error => {
            console.log('TC_001-1 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /* *
        * @tc.number    : TC_020
        * @tc.name      : read Pixels To Buffer
        * @tc.desc      : read all pixels to an buffer
        *                 1.创建PixelMap，buffer
        *                 2.调用readPixelsToBuffer读取pixels
        *                 3.返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_020', 0, async function (done) {
        console.info('TC_020 in');
        const color = new ArrayBuffer(96);
        var bufferArr = new Uint8Array(color);
        for (var i = 0; i < bufferArr.length; i++) {
            bufferArr[i] = i + 1;
        }

        let opts = { alphaType: 0, editable: true, pixelFormat: 4, scaleMode: 1, size: { height: 4, width: 6 } }
        image.createPixelMap(color, opts)
        .then(pixelmap => {
            console.info('TC_020 createPixelMap in');
            if (pixelmap == null) {
                console.info('TC_020 createPixelMap failed');
                expect(false).assertTrue()
                done();
            }

            const readBuffer = new ArrayBuffer(96);
            pixelmap.readPixelsToBuffer(readBuffer).then(() => {
                var bufferArr = new Uint8Array(readBuffer);
                var res = true;
                for (var i = 0; i < bufferArr.length; i++) {
                    if (res) {
                        if (bufferArr[i] !== 0) {
                            res = false;
                            console.info('TC_020 Success');
                            expect(true).assertTrue();
                            done();
                            break;
                        }
                    }
                }
                if (res) {
                    console.info('TC_020 buffer is all empty');
                    expect(false).assertTrue()
                    done();
                }
            })
        })
        .catch(error => {
            console.log('TC_020 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /* *
        * @tc.number    : TC_020-1
        * @tc.name      : read Pixels To Buffer
        * @tc.desc      : read all pixels to an buffer
        *                 1.创建PixelMap，buffer
        *                 2.调用readPixelsToBuffer读取pixels
        *                 3.返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_020-1', 0, async function (done) {
        console.info('TC_020-1 in');
        const color = new ArrayBuffer(96);
        var bufferArr = new Uint8Array(color);
        for (var i = 0; i < bufferArr.length; i++) {
            bufferArr[i] = i + 1;
        }

        let opts = { alphaType: 0, editable: true, pixelFormat: 4, scaleMode: 1, size: { height: 4, width: 6 } }
        image.createPixelMap(color, opts, (pixelmap) => {
            console.info('TC_020-1 createPixelMap in');
            expect(pixelmap !== null).assertTrue();
            console.info('TC_001-1 success');
            done();
        })
        const readBuffer = new ArrayBuffer(96);
        pixelmap.readPixelsToBuffer(readBuffer, () => {
            var bufferArr = new Uint8Array(readBuffer);
            var res = true;
            for (var i = 0; i < bufferArr.length; i++) {
                if (res) {
                    if (bufferArr[i] !== 0) {
                        res = false;
                        console.info('TC_020-1 Success');
                        expect(true).assertTrue();
                        done();
                        break;
                    }
                }
            }
            if (res) {
                console.info('TC_020-1 buffer is all empty');
                expect(false).assertTrue()
                done();
            }
        })
        .catch(error => {
            console.log('TC_020-1 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /* *
        * @tc.number    : TC_021
        * @tc.name      : read Pixels
        * @tc.desc      : 1.创建PixelMap
        *                 2.调用readPixels
        *                 3.主动调用返回数组存储number类型值
        *                 4.callback调用返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_021', 0, async function (done) {
        const color = new ArrayBuffer(96);
        var bufferArr = new Uint8Array(color);
        for (var i = 0; i < bufferArr.length; i++) {
            bufferArr[i] = i + 1;
        }
        let opts = { alphaType: 0, editable: true, pixelFormat: 4, scaleMode: 1, size: { height: 4, width: 6 } }
        image.createPixelMap(color, opts)
        .then(pixelmap => {
            if (pixelmap == null) {
                console.info('TC_021 createPixelMap failed');
                expect(false).assertTrue()
                done();
            }

            const area = {
                pixels: new ArrayBuffer(20), offset: 0, stride: 8,
                region: { size: { height: 1, width: 2 }, x: 0, y: 0 }
            }
            pixelmap.readPixels(area).then(() => {
                var bufferArr = new Uint8Array(area.pixels);
                var res = true;
                for (var i = 0; i < bufferArr.length; i++) {
                    console.info('TC_021 buffer ' + bufferArr[i]);
                    if (res) {
                        if (bufferArr[i] == 0) {
                            res = false;
                            console.info('TC_021 Success');
                            expect(true).assertTrue();

                            done();
                            break;
                        }
                    }
                }
                if (res) {
                    console.info('TC_021 buffer is all empty');
                    expect(false).assertTrue()
                    done();
                }

            })
        })
        .catch(error => {
            console.log('TC_021 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /* *
        * @tc.number    : TC_021-1
        * @tc.name      : read Pixels
        * @tc.desc      : 1.创建PixelMap
        *                 2.调用readPixels
        *                 3.主动调用返回数组存储number类型值
        *                 4.callback调用返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_021-1', 0, async function (done) {
        const color = new ArrayBuffer(96);
        var bufferArr = new Uint8Array(color);
        for (var i = 0; i < bufferArr.length; i++) {
            bufferArr[i] = i + 1;
        }
        let opts = { alphaType: 0, editable: true, pixelFormat: 4, scaleMode: 1, size: { height: 4, width: 6 } }
        image.createPixelMap(color, opts, pixelmap => {
            expect(pixelmap !== null).assertTrue();
            console.info('TC_021-1 success');
            done();

        })

        const area = {
            pixels: new ArrayBuffer(20), offset: 0, stride: 8,
            region: { size: { height: 1, width: 2 }, x: 0, y: 0 }
        }
        pixelmap.readPixels(area, () => {
            var bufferArr = new Uint8Array(area.pixels);
            var res = true;
            for (var i = 0; i < bufferArr.length; i++) {
                console.info('TC_021-1 buffer ' + bufferArr[i]);
                if (res) {
                    if (bufferArr[i] == 0) {
                        res = false;
                        console.info('TC_021-1 Success');
                        expect(true).assertTrue();

                        done();
                        break;
                    }
                }
            }
            if (res) {
                console.info('TC_021-1 buffer is all empty');
                expect(false).assertTrue()
                done();
            }

        })
        .catch(error => {
            console.log('TC_021-1 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /* *
        * @tc.number    : TC_022
        * @tc.name      : write Pixels
        * @tc.desc      : 1.创建PixelMap
        *                 2.调用writePixels
        *                 3.主动调用返回空
        *                 4.callback调用返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_022', 0, async function (done) {
        const color = new ArrayBuffer(96);
        let opts = { alphaType: 0, editable: true, pixelFormat: 4, scaleMode: 1, size: { height: 4, width: 6 } }
        image.createPixelMap(color, opts)
        .then(pixelmap => {
            if (pixelmap == null) {
                console.info('TC_021 createPixelMap failed');
                expect(false).assertTrue()
                done();
            }

            const area = {
                pixels: new ArrayBuffer(20), offset: 0, stride: 8,
                region: { size: { height: 1, width: 2 }, x: 0, y: 0 }
            }
            var bufferArr = new Uint8Array(area.pixels);
            for (var i = 0; i < bufferArr.length; i++) {
                bufferArr[i] = i;
            }

            pixelmap.writePixels(area).then(() => {
                const readArea = {
                    pixels: new ArrayBuffer(20), offset: 0, stride: 8,
                    region: { size: { height: 1, width: 2 }, x: 0, y: 0 }
                }
                pixelmap.readPixels(readArea).then(() => {
                    var readArr = new Uint8Array(readArea.pixels);
                    var res = true;
                    for (var i = 0; i < readArr.length; i++) {
                        if (res) {
                            if (readArr[i] !== 0) {
                                res = false;
                                console.info('TC_022 Success');
                                expect(true).assertTrue();
                                done();
                                break;
                            }
                        }
                    }
                    if (res) {
                        console.info('TC_022 buffer is all empty');
                        expect(false).assertTrue()
                        done();
                    }

                })
            })
        })
        .catch(error => {
            console.log('TC_021 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /* *
        * @tc.number    : TC_022-1
        * @tc.name      : write Pixels
        * @tc.desc      : 1.创建PixelMap
        *                 2.调用writePixels
        *                 3.主动调用返回空
        *                 4.callback调用返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_022-1', 0, async function (done) {
        const color = new ArrayBuffer(96);
        let opts = { alphaType: 0, editable: true, pixelFormat: 4, scaleMode: 1, size: { height: 4, width: 6 } }
        image.createPixelMap(color, opts, pixelmap => {
            expect(pixelmap !== null).assertTrue();
            console.info('TC_022-1 success');
            done();

        })
        const area = {
            pixels: new ArrayBuffer(20), offset: 0, stride: 8,
            region: { size: { height: 1, width: 2 }, x: 0, y: 0 }
        }
        var bufferArr = new Uint8Array(area.pixels);
        for (var i = 0; i < bufferArr.length; i++) {
            bufferArr[i] = i;
        }

        pixelmap.writePixels(area, () => {
            const readArea = {
                pixels: new ArrayBuffer(20), offset: 0, stride: 8,
                region: { size: { height: 1, width: 2 }, x: 0, y: 0 }
            }
            pixelmap.readPixels(readArea, () => {
                var readArr = new Uint8Array(readArea.pixels);
                var res = true;
                for (var i = 0; i < readArr.length; i++) {
                    if (res) {
                        if (readArr[i] !== 0) {
                            res = false;
                            console.info('TC_022-1 Success');
                            expect(true).assertTrue();
                            done();
                            break;
                        }
                    }
                }
                if (res) {
                    console.info('TC_022-1 buffer is all empty');
                    expect(false).assertTrue()
                    done();
                }

            })
        })
        .catch(error => {
            console.log('TC_021 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /* *
        * @tc.number    : TC_023
        * @tc.name      : write Buffer To Pixels
        * @tc.desc      : 1.创建PixelMap，buffer
        *                 2.调用writeBufferToPixels
        *                 3.主动调用返回空
        *                 4.callback调用返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_023', 0, async function (done) {
        const color = new ArrayBuffer(96);
        var bufferArr = new Uint8Array(color);
        for (var i = 0; i < bufferArr.length; i++) {
            bufferArr[i] = i;
        }
        let opts = { alphaType: 0, editable: true, pixelFormat: 4, scaleMode: 1, size: { height: 4, width: 6 } }
        image.createPixelMap(color, opts)
            .then(pixelmap => {
                if (pixelmap == null) {
                    console.info('TC_023 createPixelMap failed');
                    expect(false).assertTrue()
                    done();
                }

                const writeColor = new ArrayBuffer(96);
                pixelmap.writeBufferToPixels(writeColor).then(() => {
                    const readBuffer = new ArrayBuffer(96);
                    pixelmap.readPixelsToBuffer(readBuffer).then(() => {
                        var bufferArr = new Uint8Array(readBuffer);
                        var res = true;
                        for (var i = 0; i < bufferArr.length; i++) {
                            if (res) {
                                if (bufferArr[i] !== i) {
                                    res = false;
                                    console.info('TC_023 Success');
                                    expect(true).assertTrue()
                                    done();
                                    break;
                                }
                            }
                        }
                        if (res) {
                            console.info('TC_023 no change after writeBuffer');
                            expect(false).assertTrue();
                            done();
                        }
                    })
                })
            })
            .catch(error => {
                console.log('TC_021 error: ' + error);
                expect().assertFail();
                done();
            })
    })

    /* *
        * @tc.number    : TC_023-1
        * @tc.name      : write Buffer To Pixels
        * @tc.desc      : 1.创建PixelMap，buffer
        *                 2.调用writeBufferToPixels
        *                 3.主动调用返回空
        *                 4.callback调用返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_023-1', 0, async function (done) {
        const color = new ArrayBuffer(96);
        var bufferArr = new Uint8Array(color);
        for (var i = 0; i < bufferArr.length; i++) {
            bufferArr[i] = i;
        }
        let opts = { alphaType: 0, editable: true, pixelFormat: 4, scaleMode: 1, size: { height: 4, width: 6 } }
        image.createPixelMap(color, opts, pixelmap => {
            expect(pixelmap !== null).assertTrue();
            console.info('TC_023-1 success');
            done();

        })
        const writeColor = new ArrayBuffer(96);
        pixelmap.writeBufferToPixels(writeColor, () => {
            const readBuffer = new ArrayBuffer(96);
            pixelmap.readPixelsToBuffer(readBuffer, () => {
                var bufferArr = new Uint8Array(readBuffer);
                var res = true;
                for (var i = 0; i < bufferArr.length; i++) {
                    if (res) {
                        if (bufferArr[i] !== i) {
                            res = false;
                            console.info('TC_023-1 Success');
                            expect(true).assertTrue()
                            done();
                            break;
                        }
                    }
                }
                if (res) {
                    console.info('TC_023-1 no change after writeBuffer');
                    expect(false).assertTrue();
                    done();
                }
            })
        })
        .catch(error => {
            console.log('TC_021 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /* *
        * @tc.number    : TC_024
        * @tc.name      : get Image In fo
        * @tc.desc      : 1.创建PixelMap，ImageInfo
        *                 2.调用getImageInfo
        *                 3.主动调用返回imageinfo
        *                 4.callback返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_024', 0, async function (done) {
        const color = new ArrayBuffer(96);
        let opts = { alphaType: 0, editable: true, pixelFormat: 4, scaleMode: 1, size: { height: 4, width: 6 } }
        image.createPixelMap(color, opts)
        .then(pixelmap => {
            if (pixelmap == null) {
                console.info('TC_024 createPixelMap failed');
                expect(false).assertTrue()
                done();
            }
            pixelmap.getImageInfo().then(imageInfo => {
                if (imageInfo !== null) {
                    console.info('TC_024 imageInfo is ready');
                    expect(imageInfo.size.height == 4).assertTrue();
                    expect(imageInfo.size.width == 6).assertTrue();
                    expect(imageInfo.pixelFormat == 4).assertTrue();
                    done();
                } else {
                    console.info('TC_024 imageInfo is empty');
                    expect(false).assertTrue()
                    done();
                }
            })
        })
        .catch(error => {
            console.log('TC_024 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /* *
        * @tc.number    : TC_024-1
        * @tc.name      : get Image In fo
        * @tc.desc      : 1.创建PixelMap，ImageInfo
        *                 2.调用getImageInfo
        *                 3.主动调用返回imageinfo
        *                 4.callback返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_024-1', 0, async function (done) {
        const color = new ArrayBuffer(96);
        let opts = { alphaType: 0, editable: true, pixelFormat: 4, scaleMode: 1, size: { height: 4, width: 6 } }
        image.createPixelMap(color, opts, pixelmap => {
            expect(pixelmap !== null).assertTrue();
            console.info('TC_024-1 success');
            done();

        })
        pixelmap.getImageInfo(imageInfo => {
            if (imageInfo !== null) {
                console.info('TC_024-1 imageInfo is ready');
                expect(imageInfo.size.height == 4).assertTrue();
                expect(imageInfo.size.width == 6).assertTrue();
                expect(imageInfo.pixelFormat == 4).assertTrue();
                done();
            } else {
                console.info('TC_024-1 imageInfo is empty');
                expect(false).assertTrue()
                done();
            }
        })
        .catch(error => {
            console.log('TC_024-1 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /* *
        * @tc.number    : TC_025
        * @tc.name      : get Bytes Number PerRow
        * @tc.desc      : 1.创建PixelMap
        *                 2.写入PixelMap
        *                 3.调用getBytesNumberPerRow
        *                 4.主动调用返回number类型值
        *                 5.callback返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_025', 0, async function (done) {
        const color = new ArrayBuffer(96);
        let opts = { alphaType: 0, editable: true, pixelFormat: 4, scaleMode: 1, size: { height: 4, width: 6 } }
        const expectNum = opts.pixelFormat * opts.size.width;
        image.createPixelMap(color, opts)
        .then(pixelmap => {
            if (pixelmap == null) {
                console.info('TC_025 createPixelMap failed');
                expect(false).assertTrue()
                done();
            }
            pixelmap.getBytesNumberPerRow().then(num => {
                console.info('TC_025 num is ' + num);
                expect(num == expectNum).assertTrue();
                done();
            })
        })
        .catch(error => {
            console.log('TC_025 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /* *
        * @tc.number    : TC_025-1
        * @tc.name      : get Bytes Number PerRow
        * @tc.desc      : 1.创建PixelMap
        *                 2.写入PixelMap
        *                 3.调用getBytesNumberPerRow
        *                 4.主动调用返回number类型值
        *                 5.callback返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_025-1', 0, async function (done) {
        const color = new ArrayBuffer(96);
        let opts = { alphaType: 0, editable: true, pixelFormat: 4, scaleMode: 1, size: { height: 4, width: 6 } }
        const expectNum = opts.pixelFormat * opts.size.width;
        image.createPixelMap(color, opts, pixelmap => {
            expect(pixelmap !== null).assertTrue();
            console.info('TC_25-1 success');
            done();

        })
        pixelmap.getBytesNumberPerRow(num => {
            console.info('TC_025 num is ' + num);
            expect(num == expectNum).assertTrue();
            done();
        })
        .catch(error => {
            console.log('TC_025-1 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /* *
        * @tc.number    : TC_026
        * @tc.name      : get Pixel Bytes Number
        * @tc.desc      : 1.创建PixelMap
        *                 2.写入Pixel
        *                 3.调用getPixelBytesNumber
        *                 4.主动调用返回number类型值
        *                 5.callback返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_026', 0, async function (done) {
        const color = new ArrayBuffer(96);
        let opts = { alphaType: 0, editable: true, pixelFormat: 4, scaleMode: 1, size: { height: 4, width: 6 } }
        const expectNum = opts.pixelFormat * opts.size.width * opts.size.height;
        image.createPixelMap(color, opts)
        .then(pixelmap => {
            if (pixelmap == null) {
                console.info('TC_026 createPixelMap failed');
                expect(false).assertTrue()
                done();
            }
            pixelmap.getPixelBytesNumber().then(num => {
                console.info('TC_026 num is ' + num);
                expect(num == expectNum).assertTrue();
                done();
            })
        })
        .catch(error => {
            console.log('TC_026 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /* *
        * @tc.number    : TC_026-1
        * @tc.name      : get Pixel Bytes Number
        * @tc.desc      : 1.创建PixelMap
        *                 2.写入Pixel
        *                 3.调用getPixelBytesNumber
        *                 4.主动调用返回number类型值
        *                 5.callback返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_026-1', 0, async function (done) {
        const color = new ArrayBuffer(96);
        let opts = { alphaType: 0, editable: true, pixelFormat: 4, scaleMode: 1, size: { height: 4, width: 6 } }
        const expectNum = opts.pixelFormat * opts.size.width * opts.size.height;
        image.createPixelMap(color, opts, pixelmap => {
            expect(pixelmap !== null).assertTrue();
            console.info('TC_026-1 success');
            done();

        })
        pixelmap.getPixelBytesNumber(num => {
            console.info('TC_026-1 num is ' + num);
            expect(num == expectNum).assertTrue();
            done();
        })
        .catch(error => {
            console.log('TC_026-1 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /* *
        * @tc.number    : TC_027
        * @tc.name      : release
        * @tc.desc      : 1.创建PixelMap
        *                 2.写入Pixel
        *                 3.调用release
        *                 4.判断释放成功，返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_027', 0, async function (done) {
        const color = new ArrayBuffer(96);
        let opts = { alphaType: 0, editable: true, pixelFormat: 4, scaleMode: 1, size: { height: 4, width: 6 } }
        image.createPixelMap(color, opts)
        .then(pixelmap => {
            if (pixelmap == null) {
                console.info('TC_027 createPixelMap failed');
                expect(false).assertTrue()
                done();
            }

            pixelmap.release();
            expect(true).assertTrue();
            done();
        })
        .catch(error => {
            console.log('TC_027 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /* *
        * @tc.number    : TC_041
        * @tc.name      : create Image Source(uri)
        * @tc.desc      : 1.输入uri
        *                 2.调用createImageSource(uri)
        *                 3.返回imagesource
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_041', 0, async function (done) {
        const imageSourceApi = image.createImageSource('/data/local/tmp/image/test.jpg');
        expect(imageSourceApi !== null).assertTrue();
        console.info('TC_041 finished');
        done();
    })

    /* *
        * @tc.number    : TC_042
        * @tc.name      : create Image Source(fd)
        * @tc.desc      : 1.传入fd
        *                 2.调用createImageSource
        *                 3.返回imagesource
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_042', 0, async function (done) {
        const imageSourceApi = image.createImageSource(29);
        expect(imageSourceApi !== null).assertTrue();
        console.info('TC_042 finished');
        done();
    })

    /* *
        * @tc.number    : TC_043
        * @tc.name      : create Image Source(data)
        * @tc.desc      : 1.输入data
        *                 2.createImageSource
        *                 3.返回imagesource
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_043', 0, async function (done) {
        const data = new ArrayBuffer(96);
        const imageSourceApi = image.createImageSource(data);
        expect(imageSourceApi !== null).assertTrue();
        console.info('TC_043 finished');
        done();
    })

    /* *
        * @tc.number    : TC_044
        * @tc.name      : release()
        * @tc.desc      : 1.创建ImageSource
        *                 2.创建SourceStream
        *                 3.调用release()
        *                 4.主动调用时返回空
        *                 5.callback时返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_044', 0, async function (done) {
        const imageSourceApi = image.createImageSource('/data/local/tmp/image/test.jpg');
        if (imageSourceApi == null) {
            console.info('TC_044 create image source failed');
            expect(false).assertTrue();
            done();
        } else {
            imageSourceApi.release(() => {
                console.info('TC_044 Success');
                expect(true).assertTrue();
                done();
            })
        }
    })

    /* *
        * @tc.number    : TC_045
        * @tc.name      : get Image Info（ImageInfo）
        * @tc.desc      : 1.创建PixelMap
        *                 2.创建ImageInfo
        *                 3.传入参数（imageinfo）
        *                 4.调用getImageInfo（ImageInfo）
        *                 5.回调返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_045', 0, async function (done) {
        const imageSourceApi = image.createImageSource('/data/local/tmp/image/test.jpg');
        if (imageSourceApi == null) {
            console.info('TC_045 create image source failed');
            expect(false).assertTrue();
            done();
        } else {
            imageSourceApi.getImageInfo(imageInfo => {
                console.info('TC_045 imageInfo');
                expect(imageInfo !== null).assertTrue();
                done();
            })
        }
    })

    /* *
        * @tc.number    : TC_046
        * @tc.name      : get Image Info（index, ImageInfo)
        * @tc.desc      : 1.创建PixelMap
        *                 2.创建ImageInfo
        *                 3.传入参数（index,imageinfo）
        *                 4.调用getImageInfo（index, ImageInfo)
        *                 5.回调返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_046', 0, async function (done) {
        const imageSourceApi = image.createImageSource('/data/local/tmp/image/test.jpg');
        if (imageSourceApi == null) {
            console.info('TC_046 create image source failed');
            expect(false).assertTrue();
            done();
        } else {
            imageSourceApi.getImageInfo(0, imageInfo => {
                console.info('TC_046 imageInfo');
                expect(imageInfo !== null).assertTrue();
                done();
            })
        }
    })

    /* *
        * @tc.number    : TC_047
        * @tc.name      : get Image Info(index) 返回Image Info
        * @tc.desc      : 1.创建pixelMap
        *                 2.创建imagesource
        *                 3.传入指定索引
        *                 4.调用getImageInfo(index)
        *                 5.callback调用，返回imageinfo
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_047', 0, async function (done) {
        const imageSourceApi = image.createImageSource('/data/local/tmp/image/test.jpg');
        if (imageSourceApi == null) {
            console.info('TC_047 create image source failed');
            expect(false).assertTrue();
            done();
        } else {
            imageSourceApi.getImageInfo(0)
                .then(imageInfo => {
                    console.info('TC_047 imageInfo');
                    expect(imageInfo !== null).assertTrue();
                    done();
                })
        }
    })

    /* *
        * @tc.number    : TC_050
        * @tc.name      : create PixelMap对图片进行解码生成位图
        * @tc.desc      : 1.创建PixelMap
        *                 2.创建imagesource
        *                 3.确定index和DecodeOptions作为参数
        *                 4.调用createPixelMap
        *                 5.callback返回空
        *                 6.当传入参数为DecodeOptions时
        *                 7.callback返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_050', 0, async function (done) {
        const imageSourceApi = image.createImageSource('/data/local/tmp/image/test.jpg');
        if (imageSourceApi == null) {
            console.info('TC_050 create image source failed');
            expect(false).assertTrue();
            done();
        } else {
            let decodingOptions = {
                sampleSize: 1
            };
            imageSourceApi.createPixelMap(decodingOptions, pixelmap => {
                console.info('TC_050 createPixelMap ');
                expect(pixelmap !== null).assertTrue();
                done();
            })
        }
    })

    /* *
        * @tc.number    : TC_051
        * @tc.name      : create PixelMap对图片进行解码生成位图
        * @tc.desc      : 1.创建imagesource
        *                 2.设置解码区域
        *                 3.调用createPixelMap
        *                 4.传入指定index，options
        *                 5.返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_051', 0, async function (done) {
        const imageSourceApi = image.createImageSource('/data/local/tmp/image/test.jpg');
        if (imageSourceApi == null) {
            console.info('TC_051 create image source failed');
            expect(false).assertTrue();
            done();
        } else {
            let decodingOptions = {
                sampleSize: 1
            };
            imageSourceApi.createPixelMap(0, decodingOptions, pixelmap => {
                console.info('TC_051 createPixelMap ');
                expect(pixelmap !== null).assertTrue();
                done();
            })
        }
    })

    /* *
        * @tc.number    : TC_052
        * @tc.name      : create Incremental Source(data)进行渐进式解码
        * @tc.desc      : 1.创建 IncrementalSourceOptions
        *                 2.incrementalMode设为INCREMENTAL_DATA
        *                 3.调用createIncrementalSource(data)
        *                 4.返回imagesource
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_052', 0, async function (done) {
        const data = new ArrayBuffer(96);
        const imageSourceApi = image.createIncrementalSource(data);
        console.info('TC_052 create Incremental Source');
        expect(imageSourceApi !== null).assertTrue();
        done();
    })

    /* *
        * @tc.number    : TC_053
        * @tc.name      : update Data更新渐进式数据
        * @tc.desc      : 1.创建imagesource
        *                 2.创建sourceStreamPtr_
        *                 3.调用UpdateData(data, isFinal, offset,length)offset,length可以选择传入
        *                 4.主动调用时返回布尔值
        *                 5.传入参数为（data, isFinal, offset,length）时
        *                 6.callback调用
        *                 7.返回空
        *                 8.传入参数为（data, isFinal）时
        *                 9.callback返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_053', 0, async function (done) {
        const dataBuffer = new ArrayBuffer(96);
        const imageSourceIncrementalSApi = image.createIncrementalSource(dataBuffer);
        let array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
        imageSourceIncrementalSApi.updateData(array, false, 0, 10).then(data => {
            expect(data).assertTrue();
            console.info('TC_053 success');
            done();
        })
    })

    /* *
        * @tc.number    : TC_061
        * @tc.name      : packing打包ImageSource对象
        * @tc.desc      : 1.创建ImageSource
        *                 2.调用packing
        *                 3.主动调用返回数组存储number类型值
        *                 4.callback调用返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_061', 0, async function (done) {
        const imageSourceApi = image.createImageSource('/data/local/tmp/image/test.png');
        if (imageSourceApi == null) {
            console.info('TC_061 create image source failed');
            expect(false).assertTrue();
            done();
        } else {
            const imagePackerApi = image.createImagePacker();
            if (imagePackerApi == null) {
                console.info('TC_061 create image packer failed');
                expect(false).assertTrue();
                done();
            } else {
                let packOpts = { format: ["image/jpeg"], quality: 98 }
                imagePackerApi.packing(imageSourceApi, packOpts)
                .then(data => {
                    console.info('TC_061 finished');
                    expect(data !== null).assertTrue();
                    done();
                })
            }
        }
    })

    /* *
        * @tc.number    : TC_062
        * @tc.name      : release释放ImagePacker实例
        * @tc.desc      : 1.创建ImagePacker
        *                 2.调用release
        *                 3.返回空
        * @tc.size      : 
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('TC_062', 0, async function (done) {
        const imagePackerApi = image.createImagePacker();
        if (imagePackerApi == null) {
            console.info('TC_062 create image packer failed');
            expect(false).assertTrue();
            done();
        } else {
            imagePackerApi.release();
            console.info('TC_062 release');
            expect(true).assertTrue();
            done();
        }
    })
})
