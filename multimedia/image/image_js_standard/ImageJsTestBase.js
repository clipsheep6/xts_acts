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

import image from "@ohos.multimedia.image";
import fileio from '@ohos.fileio';
import featureAbility from "@ohos.ability.featureAbility";
import {expect} from 'deccjsunit/index';
import resourceManager from '@ohos.resourceManager';

let filePath;
let fdNumber;
let globalImagesource;
let globalPacker;
let globalRwafile = { descriptor: undefined, filename: undefined };
const ERR_CODE = 62980149;

function Logger(caseName) {
    return {
        myName: caseName,
        log: function (msg) {
            console.info(this.myName + " " + msg);
        }
    };
}

export async function getFd(fileName) {
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
                console.info("image case open fd fail" + err);
            }
        )
        .catch((err) => {
            console.info("image case open fd err " + err);
        });
    return [filePath, fdNumber]
}

export async function getDelayTimePromise(done, testNum, picName) {
    let logger = Logger(testNum);
    await getFd(picName);
    let imageSourceApi = image.createImageSource(fdNumber);
    if (imageSourceApi === undefined) {
        logger.log("getDelayTimePromise create imagesource failed");
        expect(false).assertTrue();
        done();
    } else {
        globalImagesource = imageSourceApi;
        try {
            logger.log("getDelayTimePromise create imagesource success");
            await imageSourceApi.getDelayTimeList().then((delayTimes) => {
                logger.log("getDelayTimePromise getDelayTime success");
                expect(true).assertTrue();
                logger.log(`delayTimes show begin length: ${delayTimes.length} `);
                for (var i = 0; i < delayTimes.length; i++) {
                    logger.log(`delayTimes[ ${i} ]= ${delayTimes[i]}`);
                }
                logger.log("delayTimes show end");
            }).catch((error) => {
                logger.log("getDelayTimePromise getDelayTime failed. " + error);
                logger.log("getDelayTimePromise getDelayTime failed. " + error.code);
                expect(error.code === ERR_CODE).assertTrue();
            });
            done();
        } catch (error) {
            logger.log(`getDelayTimePromise err: ${error}`);
            expect(false).assertTrue();
            done();
        };
    }
}

export async function getDelayTimeCallBack(done, testNum, picName) {
    let logger = Logger(testNum);
    await getFd(picName);
    let imageSourceApi = image.createImageSource(fdNumber);
    if (imageSourceApi === undefined) {
        logger.log("getDelayTimeCallBack create imagesource failed");
        expect(false).assertTrue();
        done();
    } else {
        globalImagesource = imageSourceApi;
        logger.log("getDelayTimeCallBack create imagesource success");
        imageSourceApi.getDelayTimeList((err, delayTimes) => {
            if (err !== undefined) {
                logger.log(`getDelayTimeCallBack getDelayTime failed err: ${err}`);
                logger.log(`getDelayTimeCallBack getDelayTime failed err: ${err.code}`);
                expect(err.code === ERR_CODE).assertTrue();
                done();
                return;
            }
            expect(delayTimes !== undefined).assertTrue();
            logger.log("getDelayTimeCallBack getDelayTime success");
            logger.log(`delayTimes show begin(length:` + delayTimes.length + `)`);
            for (var i = 0; i < delayTimes.length; i++) {
                logger.log(`delayTimes[` + i + `]=` + delayTimes[i]);
            }
            logger.log(`delayTimes show end`);
            done();
        });
    }
}

export async function packingPromise(done, testNum, pixelmap, packOpts) {
    let logger = Logger(testNum);
    const imagePackerApi = image.createImagePacker();
    if (imagePackerApi === undefined) {
        logger.log(`packingPromise create image packer failed`);
        expect(false).assertTrue();
        done();
    } else {
        globalPacker = imagePackerApi;
        logger.log(`packingPromise packOpts={${JSON.stringify(packOpts)}}`);
        try {
            let data = await imagePackerApi.packing(pixelmap, packOpts);
            logger.log(`packing finished`);
            if (data === undefined) {
                logger.log(`packing failed`);
                expect(false).assertTrue();
                done();
                return;
            }
            logger.log(`packing success`);
            var dataArr = new Uint8Array(data);
            logger.log(`packing show begin length: ${dataArr.length} `);
            var line = 0;
            for (var i = 0; i < dataArr.length; i++) {
                var str = `dataArr[ ${i} ]=`;
                for (var j = 0; j < 20 && i < dataArr.length; j++, i++) {
                    str = str + dataArr[i] + ",";
                }
                logger.log(`packing str: ${str}`);
                i--;
                line++;
            }
            logger.log(`packing show end line: ${line}`);
            expect(true).assertTrue();
            done();
        } catch (error) {
            logger.log(`packingPromise error: ${error}`);
            expect(false).assertTrue();
            done();
        }
    }
}

export async function releaseAll() {
    console.info('case come in releaseAll')
    if (fdNumber !== undefined) {
        console.info("fdNumber close start");
        try {
            await fileio.close(fdNumber);
            fdNumber = undefined;
        } catch (error) {
            console.info("fdNumber close fail. " + error);
        }
    }
    if (globalImagesource !== undefined) {
        console.info("globalImagesource release start");
        try {
            await globalImagesource.release();
            globalImagesource = undefined;
        } catch (error) {
            console.info("globalImagesource release fail. " + error);
        }
    }
    if (globalPacker !== undefined) {
        console.info("globalPacker release start");
        try {
            await globalPacker.release();
            globalPacker = undefined;
        } catch (error) {
            console.info("globalPacker release fail");
        }
    }
    if (globalRwafile.descriptor != undefined) {
        console.info("gloableRwafileDescritor close start");
        try {
            let resmgr = await resourceManager.getResourceManager();
            await resmgr.closeRawFileDescriptor(globalRwafile.filename);
            globalRwafile.descriptor = undefined;
            globalRwafile.filename = undefined;
        } catch (error) {
            console.info("gloableRwafileDescritor close fail. " + error);
        }
    }
}