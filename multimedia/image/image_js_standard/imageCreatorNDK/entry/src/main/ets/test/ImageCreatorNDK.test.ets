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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'hypium/index'
// @ts-ignore
import ndkTest from 'libImageCreatorNDKTest.so'

export default function ImageCreatorNDKTest() {
    describe('ImageCreatorNDKTest', function () {
        const WIDTH = 8192;
        const HEIGHT = 8;
        const CAPACITY = 8;
        const RGBA = 12;
        const Jpg_Stride = 1;
        const CREATOR_FORMAT = 2000;
        const RESULT_CODE_SUCCESS = 0
        const { JPEG } = image.ComponentType;
        function logger(caseName) {
            return {
                myName: caseName,
                log: function (msg) {
                    console.info(this.myName + ' ' + msg);
                }
            }
        }
        function sleep(ms) {
            return new Promise(resolve => setTimeout(resolve, ms));
        }
        beforeAll(function () { console.info('beforeAll case'); })

        beforeEach(function () { console.info('beforeEach case'); })

        afterEach(function () { console.info('afterEach case'); })

        afterAll(function () { console.info('afterAll case'); })

        function checkCode(res) {
            expect(res != undefined).assertTrue();
            expect(res.code == RESULT_CODE_SUCCESS).assertTrue();
        }
        function checkResult(res) {
            expect(res != undefined).assertTrue();
            expect(res.code == RESULT_CODE_SUCCESS).assertTrue();
            expect(res.result != undefined).assertTrue();
        }

        /**
        * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATORNDK_0100
        * @tc.name      : createImageCreator
        * @tc.desc      : 1.set width,height,format,capacity
        *                 2.create ImageCreator
        *                 3.return ImageCreator not empty
        * @tc.size      : MEDIUM 
        * @tc.type      : Functional
        * @tc.level     : Level 0
        */
        it('SUB_MULTIMEDIA_IMAGE_CREATORNDK_0100', 0, async function (done) {
            let mlg = logger("SUB_MULTIMEDIA_IMAGE_CREATORNDK_0100");
            try {
                mlg.log("SUB_MULTIMEDIA_IMAGE_CREATORNDK_0100");
                let res = ndkTest.create(WIDTH, HEIGHT, CREATOR_FORMAT, CAPACITY);
                checkResult(res)
                done();
            } catch (error) {
                mlg.log("Test exception " + error);
                expect().assertFail();
                done();
            }
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATORNDK_0200
        * @tc.name      : initImageCreator
        * @tc.desc      : 1.set width,height,format,capacity
        *                 2.ini ImageCreator
        *                 3.return success
        * @tc.size      : MEDIUM 
        * @tc.type      : Functional
        * @tc.level     : Level 0
        */
        it('SUB_MULTIMEDIA_IMAGE_CREATORNDK_0200', 0, async function (done) {
            let mlg = logger("SUB_MULTIMEDIA_IMAGE_CREATORNDK_0200");
            try {
                mlg.log("SUB_MULTIMEDIA_IMAGE_CREATORNDK_0200");
                let creatorRes = ndkTest.create(WIDTH, HEIGHT, CREATOR_FORMAT, CAPACITY);
                checkResult(creatorRes)
                let initRes = ndkTest.init(creatorRes.result)
                checkCode(initRes)
                done();
            } catch (error) {
                mlg.log("Test exception " + error);
                expect().assertFail();
                done();
            }
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATORNDK_0300
        * @tc.name      : getCapacity, getFormat
        * @tc.desc      : 1.set width,height,format,capacity
        *                 2.ImageCreator getCapacity
        *                 3.ImageCreator getFormat
        * @tc.size      : MEDIUM 
        * @tc.type      : Functional
        * @tc.level     : Level 0
        */
        it('SUB_MULTIMEDIA_IMAGE_CREATORNDK_0300', 0, async function (done) {
            let mlg = logger("SUB_MULTIMEDIA_IMAGE_CREATORNDK_0300");
            try {
                mlg.log("SUB_MULTIMEDIA_IMAGE_CREATORNDK_0300");
                let creatorRes = ndkTest.create(WIDTH, HEIGHT, CREATOR_FORMAT, CAPACITY);
                checkResult(creatorRes)
                let capacityRes = ndkTest.getCapacity(creatorRes.result);
                checkCode(capacityRes)
                expect(capacityRes.result == CAPACITY).assertTrue();
                let formatRes = ndkTest.getFormat(creatorRes.result);
                checkCode(formatRes)
                expect(formatRes.result == CREATOR_FORMAT).assertTrue();
                done();
            } catch (error) {
                mlg.log("Test exception " + error);
                expect().assertFail();
                done();
            }
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATORNDK_0600
        * @tc.name      : ImageCreator on
        * @tc.desc      : 1.set width,height,format,capacity
        *                 2.call on api
        *                 3.return success
        * @tc.size      : MEDIUM 
        * @tc.type      : Functional
        * @tc.level     : Level 0
        */
        it('SUB_MULTIMEDIA_IMAGE_CREATORNDK_0600', 0, async function (done) {
            let mlg = logger("SUB_MULTIMEDIA_IMAGE_CREATORNDK_0600");
            try {
                mlg.log("SUB_MULTIMEDIA_IMAGE_CREATORNDK_0600");
                let creatorRes = ndkTest.create(WIDTH, HEIGHT, CREATOR_FORMAT, CAPACITY);
                checkResult(creatorRes)
                let queueRes = ndkTest.on(creatorRes.result)
                checkCode(queueRes)
                done();
            } catch (error) {
                mlg.log("Test exception " + error);
                expect().assertFail();
                done();
            }
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATORNDK_0700
        * @tc.name      : ImageCreator dequeue
        * @tc.desc      : 1.set width,height,format,capacity
        *                 2.call dequeue api
        *                 3.return success
        * @tc.size      : MEDIUM 
        * @tc.type      : Functional
        * @tc.level     : Level 0
        */
        it('SUB_MULTIMEDIA_IMAGE_CREATORNDK_0700', 0, async function (done) {
            let mlg = logger("SUB_MULTIMEDIA_IMAGE_CREATORNDK_0700");
            try {
                mlg.log("SUB_MULTIMEDIA_IMAGE_CREATORNDK_0700");
                let creatorRes = ndkTest.create(WIDTH, HEIGHT, CREATOR_FORMAT, CAPACITY);
                checkResult(creatorRes)
                let deQueueRes = ndkTest.dequeue(creatorRes.result)
                checkResult(deQueueRes)
                done();
            } catch (error) {
                mlg.log("Test exception " + error);
                expect().assertFail();
                done();
            }
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATORNDK_0800
        * @tc.name      : ImageCreator queue
        * @tc.desc      : 1.set width,height,format,capacity
        *                 2.call queue api
        *                 3.return success
        * @tc.size      : MEDIUM 
        * @tc.type      : Functional
        * @tc.level     : Level 0
        */
        it('SUB_MULTIMEDIA_IMAGE_CREATORNDK_0800', 0, async function (done) {
            let mlg = logger("SUB_MULTIMEDIA_IMAGE_CREATORNDK_0800");
            try {
                mlg.log("SUB_MULTIMEDIA_IMAGE_CREATORNDK_0800");
                let creatorRes = ndkTest.create(WIDTH, HEIGHT, CREATOR_FORMAT, CAPACITY);
                checkResult(creatorRes)
                let deQueueRes = ndkTest.dequeue(creatorRes.result)
                checkResult(deQueueRes)
                let queueRes = ndkTest.queue(creatorRes.result, deQueueRes.result)
                checkCode(queueRes)
                done();
            } catch (error) {
                mlg.log("Test exception " + error);
                expect().assertFail();
                done();
            }
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_IMAGE_CREATORNDK_0700
        * @tc.name      : ImageCreator release
        * @tc.desc      : 1.set width,height,format,capacity
        *                 2.call release api
        *                 3.return success
        * @tc.size      : MEDIUM 
        * @tc.type      : Functional
        * @tc.level     : Level 0
        */
        it('SUB_MULTIMEDIA_IMAGE_CREATORNDK_0900', 0, async function (done) {
            let mlg = logger("SUB_MULTIMEDIA_IMAGE_CREATORNDK_0900");
            try {
                mlg.log("SUB_MULTIMEDIA_IMAGE_CREATORNDK_0900");
                let creatorRes = ndkTest.create(WIDTH, HEIGHT, CREATOR_FORMAT, CAPACITY);
                checkResult(creatorRes)
                let releaseRes = ndkTest.release(creatorRes.result)
                checkCode(releaseRes)
                done();
            } catch (error) {
                mlg.log("Test exception " + error);
                expect().assertFail();
                done();
            }
        })
    })
}
