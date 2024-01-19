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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'hypium/index';
import ndkTest from 'libOpenCVNDKTest.so';

export default function OpenCVNDKTest() {
    describe('OpenCVNDKTest', function () {
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
        function FixNum(number, n) {
            return ( new Array(n).join('0') + number ).slice(-n);
        };

        function dumpArray(log, bufferArr, row, itemToString, channel) {
            var tmpS = ''
            let actRow = row * channel
            for (var i = 0; i < bufferArr.length; i++) {
                tmpS = tmpS + itemToString(bufferArr[i]) + ", "
                if (i % actRow == (actRow - 1)) {
                    log.log(tmpS);
                    tmpS = '';
                }
            }
        }

        function dumpMat(log, mat, toTypedArray, itemToString, channel) {
            try {
                log.log(`type: ${mat.type}, rows: ${mat.rows}, cols: ${mat.cols}`)
                if (mat.data != undefined) {
                    dumpArray(log, toTypedArray(mat.data), mat.rows, itemToString, channel);
                } else {
                    log.log('mat.data is undefined')
                }
            } catch (error) {
                log.log( JSON.stringify(error) )
            }
        }

        function dumpU8Mat(log, mat, channel = 1) {
            dumpMat(log, mat, function (buffer) {
                return new Uint8Array(buffer)
            }, function (item) {
                return FixNum(item.toString(16), 2)
            }, channel)
        }

        function dumpFloat32Mat(log, mat) {
            dumpMat(log, mat, function (buffer) {
                return new Float32Array(buffer)
            }, function (item) {
                return item
            }, 1)
        }

        function dumpFloat64Mat(log, mat) {
            dumpMat(log, mat, function (buffer) {
                return new Float64Array(buffer)
            }, function (item) {
                return item
            }, 1)
        }

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_ERODE_0100
         * @tc.name      : OpenCVNDK - erode
         * @tc.desc      : erode
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_OPENCVNDK_ERODE_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_ERODE_0100')
            let srcBuffer = new Uint8Array([
                255, 255, 255, 255, 255, 255, 255,
                255, 255, 255, 255, 255, 255, 255,
                255, 255, 0,   0,   0,   255, 255,
                255, 255, 0,   0,   0,   255, 255,
                255, 255, 0,   0,   0,   255, 255,
                255, 255, 255, 255, 255, 255, 255,
                255, 255, 255, 255, 255, 255, 255,
            ])
            let kernel = new Uint8Array([
                0, 1, 0,
                1, 1, 1,
                0, 1, 0,
            ])
            let cvMorphOpts = {
                'src': {
                    'type': 0,
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                },
                'kernel': {
                    'type': 0,
                    'rows': 3,
                    'cols': 3,
                    'data': kernel.buffer,
                },
                'anchor': {
                    'x': 0,
                    'y': 0,
                },
                'iterations':1
            }

            let ndkRes = ndkTest.erode(cvMorphOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    dumpU8Mat(log, ndkRes.result)
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_DILATE_0100
         * @tc.name      : OpenCVNDK - dilate
         * @tc.desc      : dilate
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_OPENCVNDK_DILATE_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_DILATE_0100')
            let srcBuffer = new Uint8Array([
                255, 255, 255, 255, 255, 255, 255,
                255, 0,   0,   0,   0,   0,   255,
                255, 0,   0,   0,   0,   0,   255,
                255, 0,   0,   0,   0,   0,   255,
                255, 0,   0,   0,   0,   0,   255,
                255, 0,   0,   0,   0,   0,   255,
                255, 255, 255, 255, 255, 255, 255,
            ])
            let kernel = new Uint8Array([
                1, 1, 1,
                1, 1, 1,
                1, 1, 1,
            ])
            let cvMorphOpts = {
                'src': {
                    'type': 0,
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                },
                'kernel': {
                    'type': 0,
                    'rows': 3,
                    'cols': 3,
                    'data': kernel.buffer,
                },
                'anchor': {
                    'x': -1,
                    'y': -1,
                },
                'iterations':1
            }

            let ndkRes = ndkTest.dilate(cvMorphOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    dumpU8Mat(log, ndkRes.result)
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_MORPHOLOGYEX_0100
         * @tc.name      : OpenCVNDK - morphologyEx
         * @tc.desc      : morphologyEx
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it('SUB_MULTIMEDIA_OPENCVNDK_MORPHOLOGYEX_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_MORPHOLOGYEX_0100')
            let srcBuffer = new Uint8Array([
                255, 255, 255, 0,   0,   0,   0,
                255, 255, 255, 0,   0,   0,   0,
                255, 255, 255, 0,   0,   0,   0,
                0,   0,   0,   255, 255, 255, 0,
                0,   0,   0,   255, 255, 255, 0,
                0,   0,   0,   255, 255, 255, 0,
                0,   0,   255, 255, 255, 0,   0,
            ])
            let kernel = new Uint8Array([
                0, 1, 0,
                1, 1, 1,
                0, 1, 0,
            ])
            let cvMorphOpts = {
                'src': {
                    'type': 0,
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                },
                'kernel': {
                    'type': 0,
                    'rows': 3,
                    'cols': 3,
                    'data': kernel.buffer,
                },
                'morphType':2,
                'anchor': {
                    'x': -1,
                    'y': -1,
                },
                'iterations':1
            }

            let ndkRes = ndkTest.morphologyEx(cvMorphOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    dumpU8Mat(log, ndkRes.result)
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_RESIZE_0100
         * @tc.name      : OpenCVNDK - resize
         * @tc.desc      : resize
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_RESIZE_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_RESIZE_0100')
            let srcBuffer = new Uint8Array([
                0,  1,  2,  3,  4,  5,  6,
                7,  8,  9,  10, 11, 12, 13,
                14, 15, 16, 17, 18, 19, 20,
                21, 22, 23, 24, 25, 26, 27,
                28, 29, 30, 31, 32, 33, 34,
                35, 36, 37, 38, 39, 40, 41,
                42, 43, 44, 45, 46, 47, 48
            ])
            let cvResizeOpts = {
                'src': {
                    'type': 0,
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                },
                'dstSize': {
                    'width': 9,
                    'height': 10,
                },
                'fx': 0,
                'fy': 0,
            }

            let ndkRes = ndkTest.resize(cvResizeOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    dumpU8Mat(log, ndkRes.result)
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_GETROTATIONMATRIX2D_0100
         * @tc.name      : OpenCVNDK - getRotationMatrix2D
         * @tc.desc      : getRotationMatrix2D
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_GETROTATIONMATRIX2D_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_GETROTATIONMATRIX2D_0100')
            let cvGetRotationMatrix2DOpts = {
                'center': {
                    'x': 3.5,
                    'y': 3.5,
                },
                'angle': 45,
                'scale': 1.0,
            }

            let ndkRes = ndkTest.getRotationMatrix2D(cvGetRotationMatrix2DOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    dumpFloat64Mat(log, ndkRes.result)
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_GETPERSPECTIVETRANSFORM_0100
         * @tc.name      : OpenCVNDK - getPerspectiveTransform
         * @tc.desc      : getPerspectiveTransform
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_GETPERSPECTIVETRANSFORM_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_GETPERSPECTIVETRANSFORM_0100')
            let src1Buffer = new Float32Array([
                0.0, 0.0,
                6.0, 0.0,
                0.0, 6.0,
                6.0, 6.0,
            ])

            let src2Buffer = new Float32Array([
                1.0, 1.0,
                5.0, 1.0,
                0.0, 6.0,
                6.0, 6.0,
            ])
            let cvGetPerspectiveTransformOpts = {
                'src1': {
                    'type': 13, //32FC2
                    'rows': 4,
                    'cols': 1,
                    'data': src1Buffer.buffer,
                },
                'src2': {
                    'type': 13, //32FC2
                    'rows': 4,
                    'cols': 1,
                    'data': src2Buffer.buffer,
                },
                'solve': 0,
            }

            let ndkRes = ndkTest.getPerspectiveTransform(cvGetPerspectiveTransformOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    dumpFloat64Mat(log, ndkRes.result)
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_WARPAFFINE_0100
         * @tc.name      : OpenCVNDK - warpAffine
         * @tc.desc      : warpAffine
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_WARPAFFINE_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_WARPAFFINE_0100')
            let cvGetRotationMatrix2DOpts = {
                'center': {
                    'x': 3.5,
                    'y': 3.5,
                },
                'angle': 90,
                'scale': 1.0,
            }

            let ndkRes = ndkTest.getRotationMatrix2D(cvGetRotationMatrix2DOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    dumpFloat64Mat(log, ndkRes.result)
                }
            }
            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();

            let srcBuffer = new Uint8Array([
                0,  1,  2,  3,  4,  5,  6,
                7,  8,  9,  10, 11, 12, 13,
                14, 15, 16, 17, 18, 19, 20,
                21, 22, 23, 24, 25, 26, 27,
                28, 29, 30, 31, 32, 33, 34,
                35, 36, 37, 38, 39, 40, 41,
                42, 43, 44, 45, 46, 47, 48
            ])
            let cvWarpAffineOpts = {
                'src': {
                    'type': 0,
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                },
                'm': ndkRes.result,
                'dstSize': {
                    'width': 7,
                    'height': 7,
                },
                'interpolation':1
            }

            let ndkRes1 = ndkTest.warpAffine(cvWarpAffineOpts);
            if (ndkRes1.code != undefined) {
                log.log('ndkRes1.code ' + JSON.stringify(ndkRes1.code))
                if (ndkRes1.result != undefined) {
                    dumpU8Mat(log, ndkRes1.result)
                }
            }

            expect(ndkRes1 != undefined).assertTrue();
            expect(ndkRes1.code == 0).assertTrue();
            expect(ndkRes1.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_WARPPERSPECTIVE_0100
         * @tc.name      : OpenCVNDK - warpPerspective
         * @tc.desc      : warpPerspective
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_WARPPERSPECTIVE_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_WARPPERSPECTIVE_0100')
            let src1Buffer = new Float32Array([
                0.0, 0.0,
                6.0, 0.0,
                0.0, 6.0,
                6.0, 6.0,
            ])

            let src2Buffer = new Float32Array([
                1.0, 1.0,
                5.0, 1.0,
                0.0, 6.0,
                6.0, 6.0,
            ])
            let cvGetPerspectiveTransformOpts = {
                'src1': {
                    'type': 13, //32FC2
                    'rows': 4,
                    'cols': 1,
                    'data': src1Buffer.buffer,
                },
                'src2': {
                    'type': 13, //32FC2
                    'rows': 4,
                    'cols': 1,
                    'data': src2Buffer.buffer,
                },
                'solve': 0,
            }

            let ndkRes = ndkTest.getPerspectiveTransform(cvGetPerspectiveTransformOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    dumpFloat64Mat(log, ndkRes.result)
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();

            let srcBuffer = new Uint8Array([
                0,  1,  2,  3,  4,  5,  6,
                7,  8,  9,  10, 11, 12, 13,
                14, 15, 16, 17, 18, 19, 20,
                21, 22, 23, 24, 25, 26, 27,
                28, 29, 30, 31, 32, 33, 34,
                35, 36, 37, 38, 39, 40, 41,
                42, 43, 44, 45, 46, 47, 48
            ])
            let cvWarpPerspectiveOpts = {
                'src': {
                    'type': 0,
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                },
                'm': ndkRes.result,
                'dstSize': {
                    'width': 7,
                    'height': 7,
                },
                'interpolation':1
            }

            let ndkRes1 = ndkTest.warpPerspective(cvWarpPerspectiveOpts);
            if (ndkRes1.code != undefined) {
                log.log('ndkRes1.code ' + JSON.stringify(ndkRes1.code))
                if (ndkRes1.result != undefined) {
                    dumpU8Mat(log, ndkRes1.result)
                }
            }

            expect(ndkRes1 != undefined).assertTrue();
            expect(ndkRes1.code == 0).assertTrue();
            expect(ndkRes1.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_REMAP_0100
         * @tc.name      : OpenCVNDK - remap
         * @tc.desc      : remap
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_REMAP_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_REMAP_0100')
            let map1 = new Float32Array([
                0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0,
                0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0,
                0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0,
                0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0,
                0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0,
                0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0,
                0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0,
            ])

            let map2 = new Float32Array([
                6.0, 6.0, 6.0, 6.0, 6.0, 6.0, 6.0,
                5.0, 5.0, 5.0, 5.0, 5.0, 5.0, 5.0,
                4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0,
                3.0, 3.0, 3.0, 3.0, 3.0, 3.0, 3.0,
                2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0,
                1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
                0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0
            ])

            let srcBuffer = new Uint8Array([
                0,  1,  2,  3,  4,  5,  6,
                7,  8,  9,  10, 11, 12, 13,
                14, 15, 16, 17, 18, 19, 20,
                21, 22, 23, 24, 25, 26, 27,
                28, 29, 30, 31, 32, 33, 34,
                35, 36, 37, 38, 39, 40, 41,
                42, 43, 44, 45, 46, 47, 48
            ])
            let cvRemapOpts = {
                'src': {
                    'type': 0,
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                },
                'map1': {
                    'type': 5,
                    'rows': 7,
                    'cols': 7,
                    'data': map1.buffer,
                },
                'map2': {
                    'type': 5,
                    'rows': 7,
                    'cols': 7,
                    'data': map2.buffer,
                },
                'interpolation':1
            }

            let ndkRes = ndkTest.remap(cvRemapOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    dumpU8Mat(log, ndkRes.result)
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_SOBEL_0100
         * @tc.name      : OpenCVNDK - sobel
         * @tc.desc      : sobel
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_SOBEL_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_SOBEL_0100')
            let srcBuffer = new Uint8Array([
                255, 255, 255, 255, 255, 255, 255,
                255, 255, 0,   0,   255, 255, 255,
                255, 255, 0,   0,   0,   255, 255,
                255, 255, 0,   0,   0,   255, 255,
                255, 255, 0,   0,   0,   255, 255,
                255, 255, 0,   0,   255, 255, 255,
                255, 255, 255, 255, 255, 255, 255,
            ])
            let cvSobelOpts = {
                'src': {
                    'type': 0,
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                },
                'dDepth': -1,
                'dx': 1,
                'dy': 0,
                'kSize': 3
            }

            let ndkRes = ndkTest.sobel(cvSobelOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    dumpU8Mat(log, ndkRes.result)
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_THRESHOLD_0100
         * @tc.name      : OpenCVNDK - threshold
         * @tc.desc      : threshold
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_THRESHOLD_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_THRESHOLD_0100')
            let srcBuffer = new Uint8Array([
                0,  1,  2,  3,  4,  5,  6,
                7,  8,  9,  10, 11, 12, 13,
                14, 15, 16, 17, 18, 19, 20,
                21, 22, 23, 24, 25, 26, 27,
                28, 29, 30, 31, 32, 33, 34,
                35, 36, 37, 38, 39, 40, 41,
                42, 43, 44, 45, 46, 47, 48
            ])
            let cvThresholdOpts = {
                'src': {
                    'type': 0,
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                },
                'thresh': 23.5,
                'maxval': 255
            }

            let ndkRes = ndkTest.threshold(cvThresholdOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    dumpU8Mat(log, ndkRes.result)
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_CVTCOLOR_0100
         * @tc.name      : OpenCVNDK - cvtColor
         * @tc.desc      : cvtColor
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_CVTCOLOR_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_CVTCOLOR_0100')
            let srcBuffer = new Uint8Array([
                255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0,
                255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0,
                255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0,
                255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0,
                255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0,
                255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0,
                255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0,
                255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0, 255, 128, 0,
            ])
            let cvCvtColorOpts = {
                'src': {
                    'type': 16, // 8UC3
                    'rows': 8,
                    'cols': 8,
                    'data': srcBuffer.buffer,
                },
                'code': 127 //RGBToYUV_I420
            }

            let ndkRes = ndkTest.cvtColor(cvCvtColorOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    dumpU8Mat(log, ndkRes.result)
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_BLUR_0100
         * @tc.name      : OpenCVNDK - blur
         * @tc.desc      : blur
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_BLUR_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_BLUR_0100')
            let srcBuffer = new Uint8Array([
                0,  1,  2,  3,  4,  5,  6,
                7,  8,  9,  10, 11, 12, 13,
                14, 15, 16, 17, 18, 19, 20,
                21, 22, 23, 24, 25, 26, 27,
                28, 29, 30, 31, 32, 33, 34,
                35, 36, 37, 38, 39, 40, 41,
                42, 43, 44, 45, 46, 47, 48
            ])
            let cvBlurOpts = {
                'src': {
                    'type': 0,
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                },
                'kSize': {
                    'width': 5,
                    'height': 5
                },
                'anchor': {
                    'x': -1,
                    'y': -1
                }
            }

            let ndkRes = ndkTest.blur(cvBlurOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    dumpU8Mat(log, ndkRes.result)
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_FILLPOLY_0100
         * @tc.name      : OpenCVNDK - fillPoly
         * @tc.desc      : fillPoly
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_FILLPOLY_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_FILLPOLY_0100')
            let srcBuffer = new Uint8Array([
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
            ])
            let ptsBuffer = new Int32Array([
                0, 3,
                3, 6,
                6, 4,
                6, 2,
                3, 0
            ])
            let cvFillPolyOpts = {
                'src': {
                    'type': 16, // 8UC3
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                },
                'pts': {
                    'type': 4, //32SC1
                    'rows': 5,
                    'cols': 2,
                    'data': ptsBuffer.buffer,
                },
                'color': {
                    'scalarX': 255,
                    'scalarY': 128,
                    'scalarZ': 64
                },
                'shift': 0,
                'offset': {
                    'x': -1,
                    'y': -1
                }
            }

            let ndkRes = ndkTest.fillPoly(cvFillPolyOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    dumpU8Mat(log, ndkRes.result, 3)
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_ADAPTIVETHRESHOLD_0100
         * @tc.name      : OpenCVNDK - adaptiveThreshold
         * @tc.desc      : adaptiveThreshold
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_ADAPTIVETHRESHOLD_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_ADAPTIVETHRESHOLD_0100')
            let srcBuffer = new Uint8Array([
                0,  1,  2,  3,  4,  5,  6,
                7,  8,  9,  10, 11, 12, 13,
                14, 15, 16, 17, 18, 19, 20,
                21, 22, 23, 24, 25, 26, 27,
                28, 29, 30, 31, 32, 33, 34,
                35, 36, 37, 38, 39, 40, 41,
                42, 43, 44, 45, 46, 47, 48
            ])
            let cvAdaptiveThresholdOpts = {
                'src': {
                    'type': 0,
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                },
                'maxValue': 255.0,
                'adaptiveMethod': 0,
                'thresholdType': 0,
                'blockSize': 3,
                'delta': 1.0,
            }

            let ndkRes = ndkTest.adaptiveThreshold(cvAdaptiveThresholdOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    dumpU8Mat(log, ndkRes.result)
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_FINDCONTOURS_0100
         * @tc.name      : OpenCVNDK - findContours
         * @tc.desc      : findContours
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_FINDCONTOURS_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_FINDCONTOURS_0100')
            let srcBuffer = new Uint8Array([
                0, 0,   0,   0,   0,   0,   0,
                0, 255, 255, 255, 255, 255, 0,
                0, 255, 255, 255, 255, 255, 0,
                0, 255, 255, 255, 255, 255, 0,
                0, 255, 255, 255, 255, 255, 0,
                0, 255, 255, 255, 255, 255, 0,
                0, 0,   0,   0,   0,   0,   0,
            ])
            let cvFindContoursOpts = {
                'src': {
                    'type': 0,
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                },
                'mode': 1,
                'method': 1,
                'offset': {
                    'x': -1,
                    'y': -1
                }
            }

            let ndkRes = ndkTest.findContours(cvFindContoursOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    log.log('ndkRes.result ' + JSON.stringify(ndkRes.result))
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_BOXFILTER_0100
         * @tc.name      : OpenCVNDK - boxFilter
         * @tc.desc      : boxFilter
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_BOXFILTER_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_BOXFILTER_0100')
            let srcBuffer = new Uint8Array([
                0,  1,  2,  3,  4,  5,  6,
                7,  8,  9,  10, 11, 12, 13,
                14, 15, 16, 17, 18, 19, 20,
                21, 22, 23, 24, 25, 26, 27,
                28, 29, 30, 31, 32, 33, 34,
                35, 36, 37, 38, 39, 40, 41,
                42, 43, 44, 45, 46, 47, 48
            ])
            let cvBoxFilterOpts = {
                'src': {
                    'type': 0,
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                },
                'dDepth': -1,
                'kSize': {
                    'width': 3,
                    'height': 3
                },
                'anchor': {
                    'x': -1,
                    'y': -1
                },
            }

            let ndkRes = ndkTest.boxFilter(cvBoxFilterOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    dumpU8Mat(log, ndkRes.result)
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_BORDERINTERPOLATE_0100
         * @tc.name      : OpenCVNDK - borderInterpolate
         * @tc.desc      : borderInterpolate
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_BORDERINTERPOLATE_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_BORDERINTERPOLATE_0100')
            let cvBorderInterpolateOpts = {
                'p': 100,
                'len': 7
            }

            let ndkRes = ndkTest.borderInterpolate(cvBorderInterpolateOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    log.log('ndkRes.result ' + JSON.stringify(ndkRes.result))
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_COUNTNONZERO_0100
         * @tc.name      : OpenCVNDK - countNonZero
         * @tc.desc      : countNonZero
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_COUNTNONZERO_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_COUNTNONZERO_0100')
            let srcBuffer = new Uint8Array([
                0,  1,  2,  3,  4,  5,  6,
                7,  0,  9,  10, 11, 12, 13,
                14, 15, 0,  17, 18, 19, 20,
                21, 22, 23, 0,  25, 26, 27,
                28, 29, 30, 31, 0,  33, 34,
                35, 36, 37, 38, 39, 0,  41,
                42, 43, 44, 45, 46, 47, 0
            ])
            let cvCountNonZeroOpts = {
                'src': {
                    'type': 0,
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                }
            }

            let ndkRes = ndkTest.countNonZero(cvCountNonZeroOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    log.log('ndkRes.result ' + JSON.stringify(ndkRes.result))
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_COPYMAKEBORDER_0100
         * @tc.name      : OpenCVNDK - copyMakeBorder
         * @tc.desc      : copyMakeBorder
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_COPYMAKEBORDER_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_COPYMAKEBORDER_0100')
            let srcBuffer = new Uint8Array([
                0,  1,  2,  3,  4,  5,  6,
                7,  8,  9,  10, 11, 12, 13,
                14, 15, 16, 17, 18, 19, 20,
                21, 22, 23, 24, 25, 26, 27,
                28, 29, 30, 31, 32, 33, 34,
                35, 36, 37, 38, 39, 40, 41,
                42, 43, 44, 45, 46, 47, 48
            ])
            let cvCopyMakeBorderOpts = {
                'src': {
                    'type': 0,
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                },
                'position': {
                    'left': 3,
                    'top': 2,
                    'right': 3,
                    'bottom': 1
                }
            }

            let ndkRes = ndkTest.copyMakeBorder(cvCopyMakeBorderOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    dumpU8Mat(log, ndkRes.result)
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_SPLIT_0100
         * @tc.name      : OpenCVNDK - split
         * @tc.desc      : split
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_SPLIT_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_SPLIT_0100')
            let srcBuffer = new Uint8Array([
                0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,
                0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,
                0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,
                0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,
                0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,
                0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,
                0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2
            ])
            let cvSplitOpts = {
                'src': {
                    'type': 16, // 8UC3
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                }
            }

            let ndkRes = ndkTest.split(cvSplitOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    for (var i = 0; i < ndkRes.result.length; i++) {
                        dumpU8Mat(log, ndkRes.result[i])
                    }
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_MERGE_0100
         * @tc.name      : OpenCVNDK - merge
         * @tc.desc      : merge
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_MERGE_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_MERGE_0100')
            let srcBuffer = new Uint8Array([
                0,  1,  2,  3,  4,  5,  6,
                7,  8,  9,  10, 11, 12, 13,
                14, 15, 16, 17, 18, 19, 20,
                21, 22, 23, 24, 25, 26, 27,
                28, 29, 30, 31, 32, 33, 34,
                35, 36, 37, 38, 39, 40, 41,
                42, 43, 44, 45, 46, 47, 48
            ])
            let cvMergeOpts = [{
                    'type': 0,
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                }, {
                    'type': 0,
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                }, {
                    'type': 0,
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                }
            ]

            let ndkRes = ndkTest.merge(cvMergeOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    dumpU8Mat(log, ndkRes.result, 3)
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_MINMAXLOC_0100
         * @tc.name      : OpenCVNDK - minMaxLoc
         * @tc.desc      : minMaxLoc
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_MINMAXLOC_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_MINMAXLOC_0100')
            let srcBuffer = new Uint8Array([
                0,  1,  2,  3,  4,  5,  6,
                7,  8,  9,  10, 11, 12, 13,
                14, 15, 16, 17, 18, 19, 20,
                21, 22, 23, 24, 25, 26, 27,
                28, 29, 30, 31, 32, 33, 34,
                35, 36, 37, 38, 39, 40, 41,
                42, 43, 44, 45, 46, 47, 48
            ])

            let cvMinMaxLocOpts = {
                'src': {
                    'type': 0,
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                }
            }

            let ndkRes = ndkTest.minMaxLoc(cvMinMaxLocOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    log.log('ndkRes.result ' + JSON.stringify(ndkRes.result))
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_NORMALIZE_0100
         * @tc.name      : OpenCVNDK - normalize
         * @tc.desc      : normalize
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_NORMALIZE_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_NORMALIZE_0100')
            let srcBuffer = new Uint8Array([
                0,  1,  2,  3,  4,  5,  6,
                7,  8,  9,  10, 11, 12, 13,
                14, 15, 16, 17, 18, 19, 20,
                21, 22, 23, 24, 25, 26, 27,
                28, 29, 30, 31, 32, 33, 34,
                35, 36, 37, 38, 39, 40, 41,
                42, 43, 44, 45, 46, 47, 48
            ])
            let cvNormalizeOpts = {
                'src': {
                    'type': 0,
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                },
                "alpha": 15.0,
                "beta": 38.5,
                "normType": 32, //MINMAX
                "dType": -1
            }

            let ndkRes = ndkTest.normalize(cvNormalizeOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    dumpU8Mat(log, ndkRes.result)
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_OPENCVNDK_MIXCHANNELS_0100
         * @tc.name      : OpenCVNDK - mixChannels
         * @tc.desc      : mixChannels
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
         it('SUB_MULTIMEDIA_OPENCVNDK_MIXCHANNELS_0100', 0, async function (done) {
            let log = logger('SUB_MULTIMEDIA_OPENCVNDK_MIXCHANNELS_0100')
            let srcBuffer = new Uint8Array([
                0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,
                0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,
                0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,
                0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,
                0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,
                0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,
                0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2,  0,  1,  2
            ])

            let cvMixChannelsOpts = {
                'src': [{
                    'type': 16, //8UC3
                    'rows': 7,
                    'cols': 7,
                    'data': srcBuffer.buffer,
                }],
                'dst': [{
                    'type': 0,
                    'rows': 7,
                    'cols': 7
                },{
                    'type': 8, //8UC2
                    'rows': 7,
                    'cols': 7
                }],
                "formTo": [0, 1, 1, 0, 2, 2],
                "parisCount": 3
            }

            let ndkRes = ndkTest.mixChannels(cvMixChannelsOpts);
            if (ndkRes.code != undefined) {
                log.log('ndkRes.code ' + JSON.stringify(ndkRes.code))
                if (ndkRes.result != undefined) {
                    dumpU8Mat(log, ndkRes.result[0])
                    dumpU8Mat(log, ndkRes.result[1], 2)
                }
            }

            expect(ndkRes != undefined).assertTrue();
            expect(ndkRes.code == 0).assertTrue();
            expect(ndkRes.result != undefined).assertTrue();
            done();
        })
    })
}