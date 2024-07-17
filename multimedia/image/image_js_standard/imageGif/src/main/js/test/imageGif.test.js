/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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
import featureAbility from "@ohos.ability.featureAbility";
export default function imageGif() {
    describe("imageGif", function () {
        const RGBA_8888 = image.PixelMapFormat.RGBA_8888;
        const EXPECTFRAMECOUNT = 3;
        const ERR_CODE1 = 62980285;
        const ERR_CODE2 = 62980118;
        const ERR_CODE3 = 62980115;
        const ERR_CODE4 = 62980281;
        const ERR_CODE5 = 62980279;
        let filePath;
        let fdNumber;
        async function getFd(fileName) {
            let context = await featureAbility.getContext();
            await context.getFilesDir().then((data) => {
                filePath = data + "/" + fileName;
                console.info("image case filePath is " + filePath);
            });
            await fileio
                .open(filePath, 0o2, 0o777)
                .then(
                    (data) => {
                        fdNumber = data;
                        console.info("image case open fd success " + fdNumber);
                    },
                    (err) => {
                        console.info("image case open fd fail" + err);
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
            console.info("afterEach case");
        });

        afterAll(async function () {
            console.info("afterAll case");
        });

        async function packingPromise(done, testNum, pixelmap) {
            const imagePackerApi = image.createImagePacker();
            if (imagePackerApi == undefined) {
                console.info(`${testNum} packingPromise create image packer failed`);
                expect(false).assertTrue();
                done();
            } else {
                let packOpts = { format: ["image/webp"], quality: 100 };
                console.info(
                    `${testNum} packingPromise packOpts={${JSON.stringify(packOpts)}}`
                );
                try {
                    let data = await imagePackerApi.packing(pixelmap, packOpts);
                    console.info(`${testNum} packing finished`);
                    if (data == undefined) {
                        console.info(`${testNum} packing failed`);
                        expect(false).assertTrue();
                        done();
                        return;
                    }
                    console.info(`${testNum} packing success`);
                    var dataArr = new Uint8Array(data);
                    console.info(`${testNum} packing show begin length: ${dataArr.length} `);
                    var line = 0;
                    for (var i = 0; i < dataArr.length; i++) {
                        var str = `dataArr[ ${i} ]=`;
                        for (var j = 0; j < 20 && i < dataArr.length; j++, i++) {
                            str = str + dataArr[i] + ",";
                        }
                        console.info(`${testNum} packing str: ${str}`);
                        i--;
                        line++;
                    }
                    console.info(`${testNum} packing show end line: ${line}`);
                    expect(true).assertTrue();
                    done();
                } catch (error) {
                    console.info(`${testNum} packingPromise error: ${error}`);
                    expect(false).assertTrue();
                    done();
                }
            }
        }

        async function getDelayTimePromise(done, testNum, picName) {
            await getFd(picName);
            let imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info(`${testNum} getDelayTimePromise create imagesource failed`);
                expect(false).assertTrue();
                done();
            } else {
                try {
                    console.info(`${testNum} getDelayTimePromise create imagesource success`);
                    let delayTimes = await imageSourceApi.getDelayTimeList();
                    if (delayTimes != undefined) {
                        console.info(`${testNum} getDelayTimePromise getDelayTime success`);
                        expect(true).assertTrue();
                        console.info(`${testNum} delayTimes show begin length: ${delayTimes.length} `);
                        for (var i = 0; i < delayTimes.length; i++) {
                            console.info(`${testNum} delayTimes[ ${i} ]= ${delayTimes[i]}`);
                        }
                        console.info(`${testNum} delayTimes show end`);
                    } else {
                        console.info(`${testNum} getDelayTimePromise getDelayTime failed`);
                        expect(false).assertTrue();
                    }
                    done();
                } catch (error) {
                    console.log(`${testNum} getDelayTimePromise err: ${error}`);
                    expect(false).assertTrue();
                    done();
                };
            }
        }

        async function getDelayTimeCallBack(done, testNum, picName) {
            let imageSourceApi;
            await getFd(picName);
            imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info(`${testNum} getDelayTimeCallBack create imagesource failed`);
                expect(false).assertTrue();
                done();
            } else {
                console.info(`${testNum} getDelayTimeCallBack create imagesource success`);
                imageSourceApi.getDelayTimeList((err, delayTimes) => {
                    if (err != undefined) {
                        console.info(`${testNum} getDelayTimeCallBack getDelayTime failed err: ${err}`);
                        expect(false).assertTrue();
                        done();
                        return;
                    }
                    expect(delayTimes != undefined).assertTrue();
                    console.info(`${testNum} getDelayTimeCallBack getDelayTime success`);
                    console.info(`${testNum} delayTimes show begin(length:` + delayTimes.length + `)`);
                    for (var i = 0; i < delayTimes.length; i++) {
                        console.info(`${testNum} delayTimes[` + i + `]=` + delayTimes[i]);
                    }
                    console.info(`${testNum} delayTimes show end`);
                    done();
                });
            }
        }

        async function getDelayTimeErrPromise(done, testNum, picName, checkErrCode, flag) {
            await getFd(picName);
            let imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info(`${testNum} getDelayTimePromise create imagesource failed`);
                expect(false).assertTrue();
                done();
            } else {
                console.info(`${testNum} getDelayTimeCallBack create imagesource success`);
                if (flag) {
                    try {
                        await imageSourceApi.getDelayTimeList();
                        expect(false).assertTrue();
                        done();
                    } catch (error) {
                        console.info(`${testNum} getDelayTimeCallBack error.code: ${error.code} err:${error}`);
                        checkErrCode(error.code);
                        done();
                    };
                } else {
                    try {
                        await imageSourceApi.getDelayTimeList(0, "", picName);
                        expect(false).assertTrue();
                        done();
                    } catch (error) {
                        console.info(`${testNum} getDelayTimeCallBack error.code: ${error.code} err:${error}`);
                        expect(error.code == ERR_CODE3).assertTrue();
                        done();
                    };
                }
            }
        }

        async function getDelayTimeErrCallBack(done, testNum, picName, checkErrCode, flag) {
            let imageSourceApi;
            await getFd(picName);
            imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info(`${testNum} getDelayTimeCallBack create imagesource failed`);
                expect(false).assertTrue();
                done();
            } else {
                console.info(`${testNum} getDelayTimeCallBack create imagesource success`);
                if (flag) {
                    imageSourceApi.getDelayTimeList((err, pixelMapList) => {
                        if (err != undefined || pixelMapList == undefined) {
                            checkErrCode(err.code);
                            console.info(`${testNum} getDelayTimeCallBack err.code: ${err.code} err:${err}`);
                            done();
                        } else {
                            console.info(`${testNum} failed`);
                            expect(false).assertTrue();
                            done();
                        }
                    });
                } else {
                    try {
                        imageSourceApi.getDelayTimeList(0, "", picName, (err, delayTimes) => {
                            console.info(`${testNum} failed`);
                            expect(false).assertTrue();
                            done();
                        });
                    } catch (error) {
                        console.info(`${testNum} getDelayTimeCallBack error.code: ${error.code} err:${error}`);
                        expect(error.code == ERR_CODE3).assertTrue();
                        done();
                    };
                }
            }
        }

        async function getDisposalTypeErrPromise(done, testNum, picName, flag) {
            await getFd(picName);
            let imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info(`${testNum} getDisposalTypePromise create imagesource failed`);
                expect(false).assertTrue();
                done();
            } else {
                console.info(`${testNum} getDisposalTypePromise create imagesource success`);
                if (flag == ERR_CODE4) {
                    imageSourceApi.getDisposalTypeList().then(() => {
                        console.info(`${testNum} failed `);
                        expect(false).assertTrue();
                        done();
                    }).catch((err) => {
                        console.info(`${testNum} getDisposalTypePromise getDisposalTypeList failed err: code is ${err.code},message is ${err.message}`);
                        expect(err.code == ERR_CODE4).assertTrue();
                        done();
                    });
                } else if (flag == ERR_CODE3){
                    try {
                        await imageSourceApi.getDisposalTypeList(0, "", picName);
                        console.info(`${testNum} failed `);
                        expect(false).assertTrue();
                        done();
                    } catch (error) {
                        console.info(`${testNum} getDisposalTypePromise getDisposalTypeList failed err: code is ${error.code},message is ${error.message}`);
                        expect(error.code == ERR_CODE3).assertTrue();
                        done();
                    };
                } else {
                    imageSourceApi.getDisposalTypeList().then(() => {
                        console.info(`${testNum} failed `);
                        expect(false).assertTrue();
                        done();
                    }).catch((err) => {
                        console.info(`${testNum} getDisposalTypePromise getDisposalTypeList failed err: code is ${err.code},message is ${err.message}`);
                        expect(err.code == ERR_CODE5).assertTrue();
                        done();
                    });
                }
            }
        }

        async function getDisposalTypePromise(done, testNum, picName) {
            await getFd(picName);
            let imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info(`${testNum} getDisposalTypePromise create imagesource failed`);
                expect(false).assertTrue();
                done();
            } else {
                try {
                    console.info(`${testNum} getDisposalTypePromise create imagesource success`);
                    imageSourceApi.getDisposalTypeList().then((disposalTypes) => {
                        console.info(`${testNum} getDisposalTypePromise getDisposalTypeList success`);
                        expect(true).assertTrue();
                        console.info(`${testNum} disposalTypes show begin length: ${disposalTypes.length} `);
                        for (var i = 0; i < disposalTypes.length; i++) {
                            console.info(`${testNum} disposalTypes[ ${i} ]= ${disposalTypes[i]}`);
                        }
                        console.info(`${testNum} disposalTypes show end`);
                    }).catch((err) => {
                        console.info(`${testNum} getDisposalTypePromise getDisposalTypeList failed err: code is ${err.code},message is ${err.message}`);
                        expect(err.code == ERR_CODE5).assertTrue();
                    })
                    done();
                } catch (error) {
                    console.log(`${testNum} getDisposalTypePromise err: ${error}`);
                    expect(false).assertTrue();
                    done();
                };
            }
        }

        async function getFrameCountPromise(done, testNum, picName) {
            try {
                await getFd(picName);
                let imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info(`${testNum} getFrameCountPromise create imagesource failed`);
                    expect(false).assertTrue();
                    done();
                } else {
                    console.info(`${testNum} getFrameCountPromise create imagesource success`);
                    let frameCount = await imageSourceApi.getFrameCount();
                    if (frameCount != undefined) {
                        console.info(`${testNum} getFrameCountPromise getFrameCount success`);
                        expect(frameCount).assertEqual(EXPECTFRAMECOUNT);
                        console.info(`${testNum} getFrameCountPromise frameCount= ${frameCount}`);
                    } else {
                        console.info(`${testNum} getFrameCountPromise getFrameCount failed`);
                        expect(false).assertTrue();
                    }
                    done();
                }
            } catch (error) {
                console.info(`${testNum} getFrameCountPromise error: ` + error);
                expect(false).assertTrue();
                done();
            }
        }

        async function getFrameCountCallBack(done, testNum, picName) {
            await getFd(picName);
            let imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info(`${testNum} getFrameCountCallBack create imagesource failed`);
                expect(false).assertTrue();
                done();
            } else {
                console.info(`${testNum} getFrameCountCallBack create imagesource success`);
                imageSourceApi.getFrameCount((err, frameCount) => {
                    if (err != undefined) {
                        console.info(`${testNum} getFrameCountCallBack getFrameCount failed err: ${err}`);
                        expect(false).assertTrue();
                        done();
                        return;
                    }
                    expect(frameCount).assertEqual(EXPECTFRAMECOUNT);
                    console.info(`${testNum} getFrameCountCallBack getFrameCount success`);
                    console.info(`${testNum} getFrameCountCallBack frameCount= ${frameCount}`);
                    done();
                });
            }
        }

        async function getFrameCountErrPromise(done, testNum, picName, flag) {
            try {
                await getFd(picName);
                let imageSourceApi = image.createImageSource(fdNumber);
                if (imageSourceApi == undefined) {
                    console.info(`${testNum} getFrameCountPromise create imagesource failed`);
                    expect(false).assertTrue();
                    done();
                } else {
                    console.info(`${testNum} getFrameCountPromise create imagesource success`);
                    if (flag) {
                        try {
                            await imageSourceApi.getFrameCount();
                            expect(false).assertTrue();
                            done();
                        } catch (error) {
                            console.info(`${testNum} getFrameCountPromise error.code: ${error.code} err:${error}`);
                            expect(error.code == ERR_CODE4).assertTrue();
                            done();
                        };
                    } else {
                        try {
                            await imageSourceApi.getFrameCount(0, "", picName);
                            expect(false).assertTrue();
                            done();
                        } catch (error) {
                            console.info(`${testNum} getFrameCountPromise error.code: ${error.code} err:${error}`);
                            expect(error.code == ERR_CODE3).assertTrue();
                            done();
                        };
                    }
                }
            } catch (error) {
                console.info(`${testNum} getFrameCountPromise error: ` + error);
                expect(false).assertTrue();
                done();
            }
        }

        async function getFrameCountErrCallBack(done, testNum, picName, flag) {
            await getFd(picName);
            let imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info(`${testNum} getFrameCountCallBack create imagesource failed`);
                expect(false).assertTrue();
                done();
            } else {
                console.info(`${testNum} getFrameCountCallBack create imagesource success`);
                if (flag) {
                    imageSourceApi.getFrameCount((err, frameCount) => {
                        if (err != undefined) {
                            expect(err.code == ERR_CODE4).assertTrue();
                            console.info(`${testNum} getFrameCountCallBack err.code: ${err.code} err:${err}`);
                            done();
                        } else {
                            console.info(`${testNum} failed`);
                            expect(false).assertTrue();
                            done();
                        }
                    });
                } else {
                    try {
                        imageSourceApi.getFrameCount(0, "", picName, (err, frameCount) => {
                            console.info(`${testNum} failed`);
                            expect(false).assertTrue();
                            done();
                        });
                    } catch (error) {
                        console.info(`${testNum} getFrameCountCallBack error.code: ${error.code} err:${error}`);
                        expect(error.code == ERR_CODE3).assertTrue();
                        done();
                    };
                }
            }
        }

        async function createPixelMapListPromise(done, testNum, picName, decodeOpts) {
            await getFd(picName);
            let imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info(`${testNum} createPixelMapListPromise create imagesource failed`);
                expect(false).assertTrue();
                done();
            } else {
                try {
                    console.info(`${testNum} createPixelMapListPromise create imagesource success`);
                    let pixelMapList = await imageSourceApi.createPixelMapList(decodeOpts);
                    if (pixelMapList != undefined) {
                        console.info(`${testNum} pixelMapList show begin(length: ${pixelMapList.length})`);
                        packingPromise(done, testNum, pixelMapList[0]);
                    } else {
                        console.info(`${testNum} createPixelMapListPromise createPixelMapList failed`);
                        expect(false).assertTrue();
                        done();
                    }
                } catch (error) {
                    console.info(`${testNum} createPixelMapListPromise error: ${error}`);
                    expect(false).assertTrue();
                    done();
                }
            }
        }

        async function createPixelMapListCallBack(done, testNum, picName, decodeOpts) {
            await getFd(picName);
            let imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info(`${testNum} createPixelMapListCallBack create imagesource failed`);
                expect(false).assertTrue();
                done();
            } else {
                console.info(`${testNum} createPixelMapListCallBack create imagesource success`);
                imageSourceApi.createPixelMapList(decodeOpts, (err, pixelMapList) => {
                    if (err != undefined) {
                        console.info(`${testNum} createPixelMapListCallBack failed err: ${err}`);
                        expect(false).assertTrue();
                        done();
                        return;
                    }
                    expect(pixelMapList != undefined).assertTrue();
                    console.info(`${testNum} pixelMapList show begin length: ${pixelMapList.length}`);
                    packingPromise(done, testNum, pixelMapList[0]);
                });
            }
        }

        async function createPixelMapListErrPromise(done, testNum, picName, decodeOpts, checkErrCode, flag) {
            await getFd(picName);
            let imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info(`${testNum} createPixelMapListPromise create imagesource failed`);
                expect(false).assertTrue();
                done();
            } else {
                if (flag) {
                    try {
                        await imageSourceApi.createPixelMapList(decodeOpts);
                        console.info(`${testNum} failed `);
                        expect(false).assertTrue();
                        done();
                    } catch (error) {
                        console.info(`${testNum} createPixelMapListPromise error.code: ${error.code} err:${error}`);
                        checkErrCode(error.code);
                        done();
                    }
                } else {
                    try {
                        await imageSourceApi.createPixelMapList(0, "", decodeOpts);
                        console.info(`${testNum} failed `);
                        expect(false).assertTrue();
                        done();
                    } catch (error) {
                        console.info(`${testNum} createPixelMapListPromise error.code: ${error.code} err:${error}`);
                        checkErrCode(error.code);
                        done();
                    };
                }
            }
        }
        async function createPixelMapListErrCallBack(done, testNum, picName, decodeOpts, checkErrCode, flag) {
            await getFd(picName);
            let imageSourceApi = image.createImageSource(fdNumber);
            if (imageSourceApi == undefined) {
                console.info(`${testNum} createPixelMapListCallBack create imagesource failed`);
                expect(false).assertTrue();
                done();
            } else {
                console.info(`${testNum} createPixelMapListCallBack create imagesource success`);
                if (flag) {
                    imageSourceApi.createPixelMapList(decodeOpts, (err, pixelMapList) => {
                        if (err != undefined || pixelMapList == undefined) {
                            checkErrCode(err.code);
                            console.info(`${testNum} createPixelMapList err.code: ${err.code} err:${err}`);
                            done();
                        } else {
                            console.info(`${testNum} failed`);
                            expect(false).assertTrue();
                            done();
                        }
                    });
                } else {
                    try {
                        imageSourceApi.createPixelMapList(0, "", decodeOpts, (err, pixelMapList) => {
                            console.info(`${testNum} failed`);
                            expect(false).assertTrue();
                            done();
                        });
                    } catch (error) {
                        console.info(`${testNum} createPixelMapListPromise error.code: ${error.code} err:${error}`);
                        checkErrCode(error.code);
                        done();
                    };
                }
            }
        }

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_PROMISE_0100
         * @tc.name      :  getDelayTime - promise
         * @tc.desc      : 1.create imagesource
         *                 2.getDelayTime
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_PROMISE_0100", 0, async function (done) {
            getDelayTimePromise(done, "SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_PROMISE_0100", "moving_test.gif");
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_ERR_PROMISE_0100
         * @tc.name      : getDelayTimeList - promise - gif - multiParameter
         * @tc.desc      : 1.create imagesource
         *                 2.call getDelayTimeList(0, "", picName)
         *                 3.return errorCode
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_ERR_PROMISE_0100", 0, async function (done) {
            getDelayTimeErrPromise(done, "SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_ERR_PROMISE_0100", "moving_test.gif", false);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_ERR_PROMISE_0200
         * @tc.name      : getDelayTimeList - promise - txt error
         * @tc.desc      : 1.create imagesource
         *                 2.call getDelayTimeList()
         *                 3.return errorCode
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_ERR_PROMISE_0200", 0, async function (done) {
            function checkErrCode(code) {
                expect(code == ERR_CODE4).assertTrue();
            }
            getDelayTimeErrPromise(done, "SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_ERR_PROMISE_0200", "giftest.txt", checkErrCode, true);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_ERR_PROMISE_0300
         * @tc.name      : getDelayTimeList - promise - jpg error
         * @tc.desc      : 1.create imagesource
         *                 2.call getDelayTimeList()
         *                 3.return errorCode
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_ERR_PROMISE_0300", 0, async function (done) {
            function checkErrCode(code) {
                expect(code == ERR_CODE5).assertTrue();
            }
            getDelayTimeErrPromise(done, "SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_ERR_PROMISE_0300", "test.jpg", checkErrCode, true);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_CALLBACK_0100
         * @tc.name      :  getDelayTime - callback
         * @tc.desc      : 1.create imagesource
         *                 2.getDelayTime
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_CALLBACK_0100", 0, async function (done) {
            getDelayTimeCallBack(done, "SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_CALLBACK_0100", "moving_test.gif");
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_ERR_CALLBACK_0100
         * @tc.name      : getDelayTimeList - callback - gif - multiParameter
         * @tc.desc      : 1.create imagesource
         *                 2.call getDelayTimeList(0, "", picName, callback)
         *                 3.return errorCode
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_ERR_CALLBACK_0100", 0, async function (done) {
            getDelayTimeErrCallBack(done, "SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_ERR_CALLBACK_0100", "moving_test.gif", false);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_ERR_CALLBACK_0200
         * @tc.name      : getDelayTimeList - callback - txt error
         * @tc.desc      : 1.create imagesource
         *                 2.call getDelayTimeList(callback)
         *                 3.return errorCode
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_ERR_CALLBACK_0200", 0, async function (done) {
            function checkErrCode(code) {
                expect(code == ERR_CODE4).assertTrue();
            }
            getDelayTimeErrCallBack(done, "SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_ERR_CALLBACK_0200", "giftest.txt", checkErrCode, true);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_ERR_CALLBACK_0300
         * @tc.name      : getDelayTimeList - callback - jpg error
         * @tc.desc      : 1.create imagesource
         *                 2.call getDelayTimeList(callback)
         *                 3.return errorCode
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_ERR_CALLBACK_0300", 0, async function (done) {
            function checkErrCode(code) {
                expect(code == ERR_CODE5).assertTrue();
            }
            getDelayTimeErrCallBack(done, "SUB_MULTIMEDIA_IMAGE_GIF_GETDELAYTIME_ERR_CALLBACK_0300", "test.jpg", checkErrCode, true);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_GETFRAMECOUNT_PROMISE_0100
         * @tc.name      :  getFrameCount - promise
         * @tc.desc      : 1.create imagesource
         *                 2.getFrameCount
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_GETFRAMECOUNT_PROMISE_0100", 0, async function (done) {
            getFrameCountPromise(done, "SUB_MULTIMEDIA_IMAGE_GIF_GETFRAMECOUNT_PROMISE_0100", "moving_test.gif");
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_GETFRAMECOUNT_CALLBACK_0100
         * @tc.name      :  getFrameCount - callback
         * @tc.desc      : 1.create imagesource
         *                 2.getFrameCount
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_GETFRAMECOUNT_CALLBACK_0100", 0, async function (done) {
            getFrameCountCallBack(done, "SUB_MULTIMEDIA_IMAGE_GIF_GETFRAMECOUNT_CALLBACK_0100", "moving_test.gif");
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_GETFRAMECOUNT_ERR_PROMISE_0100
         * @tc.name      :  getFrameCount - promise - multiParameter
         * @tc.desc      : 1.create imagesource
         *                 2.call getFrameCount(0, "", picName)
         *                 3.return errorCode
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_GETFRAMECOUNT_ERR_PROMISE_0100", 0, async function (done) {
            getFrameCountErrPromise(done, "SUB_MULTIMEDIA_IMAGE_GIF_GETFRAMECOUNT_ERR_PROMISE_0100", "moving_test.gif", false);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_GETFRAMECOUNT_ERR_PROMISE_0200
         * @tc.name      :  getFrameCount - promise txt error
         * @tc.desc      : 1.create imagesource
         *                 2.call getFrameCount()
         *                 3.return errorCode
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_GETFRAMECOUNT_ERR_PROMISE_0200", 0, async function (done) {
            getFrameCountErrPromise(done, "SUB_MULTIMEDIA_IMAGE_GIF_GETFRAMECOUNT_ERR_PROMISE_0200", "giftest.txt", true);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_GETFRAMECOUNT_ERR_CALLBACK_0100
         * @tc.name      :  getFrameCount - callback - multiParameter
         * @tc.desc      : 1.create imagesource
         *                 2.call getFrameCount(0, "", picName, callback)
         *                 3.return errorCode
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_GETFRAMECOUNT_ERR_CALLBACK_0100", 0, async function (done) {
            getFrameCountErrCallBack(done, "SUB_MULTIMEDIA_IMAGE_GIF_GETFRAMECOUNT_ERR_CALLBACK_0100", "moving_test.gif", false);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_GETFRAMECOUNT_ERR_CALLBACK_0200
         * @tc.name      :  getFrameCount - callback txt error
         * @tc.desc      : 1.create imagesource
         *                 2.call getFrameCount(callback)
         *                 3.return errorCode
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_GETFRAMECOUNT_ERR_CALLBACK_0200", 0, async function (done) {
            getFrameCountErrCallBack(done, "SUB_MULTIMEDIA_IMAGE_GIF_GETFRAMECOUNT_ERR_CALLBACK_0200", "giftest.txt", true);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_PROMISE_0100
         * @tc.name      : createPixelMapList - promise
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions
         *                 3.createPixelMapList
         *                 4.packing
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_PROMISE_0100", 0, async function (done) {
            let decodeOpts = {
                sampleSize: 1,
                editable: true,
                desiredSize: { width: 198, height: 202 },
                rotate: 0,
                desiredPixelFormat: RGBA_8888,
                index: 0,
            };
            createPixelMapListPromise(done, "SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_PROMISE_0100",
                "moving_test.gif", decodeOpts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_PROMISE_0100
         * @tc.name      : createPixelMapList - promise-sampleSize: -1
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions
         *                 3.createPixelMapList
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_PROMISE_0100", 0, async function (done) {
            let decodeOpts = {
                sampleSize: -1,
                editable: true,
                desiredSize: { width: 198, height: 202 },
                rotate: 0,
                desiredPixelFormat: RGBA_8888,
                index: 0,
            };
            function checkErrCode(code) {
                expect(code == ERR_CODE2).assertTrue();
            }
            createPixelMapListErrPromise(done, "SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_PROMISE_0100",
                "moving_test.gif", decodeOpts, checkErrCode, true);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_PROMISE_0200
         * @tc.name      : createPixelMapList - promise-index: -8
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions
         *                 3.createPixelMapList
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_PROMISE_0200", 0, async function (done) {
            let decodeOpts = {
                sampleSize: 1,
                editable: true,
                desiredSize: { width: 198, height: 202 },
                rotate: 0,
                desiredPixelFormat: RGBA_8888,
                index: -8,
            };
            function checkErrCode(code) {
                expect(code == ERR_CODE1).assertTrue();
            }
            createPixelMapListErrPromise(done, "SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_PROMISE_0200",
                "moving_test.gif", decodeOpts, checkErrCode, true);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_PROMISE_0300
         * @tc.name      : createPixelMapList - promise-rotate: 500
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions
         *                 3.createPixelMapList
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_PROMISE_0300", 0, async function (done) {
            let decodeOpts = {
                sampleSize: 1,
                editable: true,
                desiredSize: { width: 198, height: 202 },
                rotate: 500,
                desiredPixelFormat: RGBA_8888,
                index: 0,
            };
            function checkErrCode(code) {
                expect(code == ERR_CODE3).assertTrue();
            }
            createPixelMapListErrPromise(done, "SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_PROMISE_0300",
                "moving_test.gif", decodeOpts, checkErrCode, true);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_PROMISE_0400
         * @tc.name      : createPixelMapList - promise-desiredPixelFormat: unsupported format
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions
         *                 3.createPixelMapList
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_PROMISE_0400", 0, async function (done) {
            let decodeOpts = {
                sampleSize: 1,
                editable: true,
                desiredSize: { width: 198, height: 202 },
                rotate: 0,
                desiredPixelFormat: 33,
                index: 0,
            };
            function checkErrCode(code) {
                expect(code == ERR_CODE3).assertTrue();
            }
            createPixelMapListErrPromise(done, "SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_PROMISE_0400",
                "moving_test.gif", decodeOpts, checkErrCode, true);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_PROMISE_0500
         * @tc.name      : createPixelMapList - promise - multiparameter
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions
         *                 3.call createPixelMapList(0, "", decodeOpts)
         *                 4.return errorCode
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_PROMISE_0500", 0, async function (done) {
            let decodeOpts = {
                sampleSize: 1,
                editable: true,
                desiredSize: { width: 198, height: 202 },
                rotate: 0,
                desiredPixelFormat: RGBA_8888,
                index: 0,
            };
            function checkErrCode(code) {
                expect(code == ERR_CODE3).assertTrue();
            }
            createPixelMapListErrPromise(done, "SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_PROMISE_0500",
                "moving_test.gif", decodeOpts, checkErrCode, false);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_PROMISE_0600
         * @tc.name      : createPixelMapList - promise - wrong - suffix
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions
         *                 3.call createPixelMapList(decodeOpts)
         *                 4.return errorCode
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_PROMISE_0600", 0, async function (done) {
            let decodeOpts = {
                sampleSize: 1,
                editable: true,
                desiredSize: { width: 198, height: 202 },
                rotate: 0,
                desiredPixelFormat: RGBA_8888,
                index: 0,
            };
            function checkErrCode(code) {
                expect(code == ERR_CODE4).assertTrue();
            }
            createPixelMapListErrPromise(done, "SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_PROMISE_0600",
                "giftest.txt", decodeOpts, checkErrCode, true);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_CALLBACK_0100
         * @tc.name      : createPixelMapList - callback
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions
         *                 3.createPixelMapList
         *                 4.packing
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_CALLBACK_0100", 0, async function (done) {
            let decodeOpts = {
                sampleSize: 1,
                editable: true,
                desiredSize: { width: 198, height: 202 },
                rotate: 0,
                desiredPixelFormat: RGBA_8888,
                index: 0,
            };
            createPixelMapListCallBack(done, "SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_CALLBACK_0100",
                "moving_test.gif", decodeOpts);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_CALLBACK_0100
         * @tc.name      : createPixelMapList - callback-sampleSize: -1
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions
         *                 3.createPixelMapList
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_CALLBACK_0100", 0, async function (done) {
            let decodeOpts = {
                sampleSize: -1,
                editable: true,
                desiredSize: { width: 198, height: 202 },
                rotate: 0,
                desiredPixelFormat: RGBA_8888,
                index: 0,
            };
            function checkErrCode(code) {
                expect(code == ERR_CODE2).assertTrue();
            }
            createPixelMapListErrCallBack(done, "SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_CALLBACK_0100",
                "moving_test.gif", decodeOpts, checkErrCode, true);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_CALLBACK_0200
         * @tc.name      : createPixelMapList - callback- index: -8
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions
         *                 3.createPixelMapList
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_CALLBACK_0200", 0, async function (done) {
            let decodeOpts = {
                sampleSize: 1,
                editable: true,
                desiredSize: { width: 198, height: 202 },
                rotate: 0,
                desiredPixelFormat: RGBA_8888,
                index: -8,
            };
            function checkErrCode(code) {
                expect(code == ERR_CODE1).assertTrue();
            }
            createPixelMapListErrCallBack(done, "SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_CALLBACK_0200",
                "moving_test.gif", decodeOpts, checkErrCode, true);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_CALLBACK_0300
         * @tc.name      : createPixelMapList - callback-rotate: 500
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions
         *                 3.createPixelMapList
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_CALLBACK_0300", 0, async function (done) {
            let decodeOpts = {
                sampleSize: 1,
                editable: true,
                desiredSize: { width: 198, height: 202 },
                rotate: 500,
                desiredPixelFormat: RGBA_8888,
                index: 0,
            };
            function checkErrCode(code) {
                expect(code == ERR_CODE3).assertTrue();
            }
            createPixelMapListErrCallBack(done, "SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_CALLBACK_0300",
                "moving_test.gif", decodeOpts, checkErrCode, true);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_CALLBACK_0400
         * @tc.name      : createPixelMapList - callback-unsupported format
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions
         *                 3.createPixelMapList
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_CALLBACK_0400", 0, async function (done) {
            let decodeOpts = {
                sampleSize: 1,
                editable: true,
                desiredSize: { width: 198, height: 202 },
                rotate: 0,
                desiredPixelFormat: 33,
                index: 0,
            };
            function checkErrCode(code) {
                expect(code == ERR_CODE3).assertTrue();
            }
            createPixelMapListErrCallBack(done, "SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_CALLBACK_0400",
                "moving_test.gif", decodeOpts, checkErrCode, true);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_CALLBACK_0500
         * @tc.name      : createPixelMapList - callback - multiParameter
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions
         *                 3.call createPixelMapList(0, "", decodeOpts, callback)
         *                 4.return errorCode
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_CALLBACK_0500", 0, async function (done) {
            let decodeOpts = {
                sampleSize: 1,
                editable: true,
                desiredSize: { width: 198, height: 202 },
                rotate: 0,
                desiredPixelFormat: RGBA_8888,
                index: 0,
            };
            function checkErrCode(code) {
                expect(code == ERR_CODE3).assertTrue();
            }
            createPixelMapListErrCallBack(done, "SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_CALLBACK_0500",
                "moving_test.gif", decodeOpts, checkErrCode, false);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_CALLBACK_0600
         * @tc.name      : createPixelMapList - callback - wrong - suffix
         * @tc.desc      : 1.create imagesource
         *                 2.set DecodeOptions
         *                 3.call createPixelMapList(decodeOpts, callback)
         *                 4.return errorCode
         * @tc.size      : MEDIUM
         * @tc.type      : Functional
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_CALLBACK_0600", 0, async function (done) {
            let decodeOpts = {
                sampleSize: 1,
                editable: true,
                desiredSize: { width: 198, height: 202 },
                rotate: 0,
                desiredPixelFormat: RGBA_8888,
                index: 0,
            };
            function checkErrCode(code) {
                expect(code == ERR_CODE4).assertTrue();
            }
            createPixelMapListErrCallBack(done, "SUB_MULTIMEDIA_IMAGE_GIF_CREATEPIXELMAPLIST_ERR_CALLBACK_0600",
                "giftest.txt", decodeOpts, checkErrCode, true);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_GETDISPOSALTYPE_ERR_PROMISE_0100
         * @tc.name      : test getDisposalType promise - multiParameter
         * @tc.desc      : 1.create imagesource
         *                 2.call getDisposalType(0, "", picName)
         *                 3.return errorCode
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_GETDISPOSALTYPE_ERR_PROMISE_0100", 0, async function (done) {
            getDisposalTypeErrPromise(done, "SUB_MULTIMEDIA_IMAGE_GIF_GETDISPOSALTYPE_ERR_PROMISE_0100", "moving_test.gif", ERR_CODE3);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_GETDISPOSALTYPE_ERR_PROMISE_0200
         * @tc.name      : test getDisposalType promise txt error
         * @tc.desc      : 1.create imagesource
         *                 2.call getDisposalType()
         *                 3.return errorCode
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_GETDISPOSALTYPE_ERR_PROMISE_0200", 0, async function (done) {
            getDisposalTypeErrPromise(done, "SUB_MULTIMEDIA_IMAGE_GIF_GETDISPOSALTYPE_ERR_PROMISE_0200", "giftest.txt", ERR_CODE4);
        });

        /**
         * @tc.number    : SUB_MULTIMEDIA_IMAGE_GIF_GETDISPOSALTYPE_ERR_PROMISE_0300
         * @tc.name      : test getDisposalType promise jpg error
         * @tc.desc      : 1.create imagesource
         *                 2.call getDisposalType()
         *                 3.return errorCode
         * @tc.size      : MediumTest
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it("SUB_MULTIMEDIA_IMAGE_GIF_GETDISPOSALTYPE_ERR_PROMISE_0300", 0, async function (done) {
            getDisposalTypeErrPromise(done, "SUB_MULTIMEDIA_IMAGE_GIF_GETDISPOSALTYPE_ERR_PROMISE_0300", "test.jpg", ERR_CODE5);
        });
    });
}
