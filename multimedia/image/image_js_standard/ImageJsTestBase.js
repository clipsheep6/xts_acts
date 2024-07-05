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

export function getImageBufferData(filepath, fd) {
    const stat = fileio.statSync(filepath);
    const bufferRead = new ArrayBuffer(stat.size);
    fileio.readSync(fd, bufferRead);
    return bufferRead;
}

export async function createImageSourceByRawFile(picname, sourceOpts) {
    let resmgr = await resourceManager.getResourceManager();
    let rawFileDescriptor = await resmgr.getRawFd(picname);
    globalRwafile.descriptor = rawFileDescriptor;
    globalRwafile.filename = picname;
    console.info(`case open rawFileFd: ${rawFileDescriptor.fd}`);
    if (sourceOpts == undefined) {
        return image.createImageSource(rawFileDescriptor);
    } else {
        return image.createImageSource(rawFileDescriptor, sourceOpts);
    }
}

export async function createImageSourceByBuffer(picname, sourceOpts) {
    await getFd(picname);
    if (sourceOpts == undefined) {
        return image.createImageSource(getImageBufferData(filePath, fdNumber));
    } else {
        return image.createImageSource(getImageBufferData(filePath, fdNumber), sourceOpts);
    }
}

export async function createIncrementalImageSource(picname, sourceOpts) {
    await getFd(picname);
    let bufferImage = getImageBufferData(filePath, fdNumber)
    let tempArray = new Uint8Array(bufferImage);

    let bufferSize = tempArray.length;
    console.info(`bufferSize: ${bufferSize}`);
    let offset = 0;
    let incSouce;
    if (sourceOpts == undefined) {
        incSouce = image.CreateIncrementalSource(new ArrayBuffer(1));
    } else {
        incSouce = image.CreateIncrementalSource(new ArrayBuffer(1), sourceOpts);
    }
    let isFinished = false;
    while (offset < tempArray.length) {
        var oneStep = tempArray.slice(offset, offset + bufferSize);
        offset = offset + oneStep.length;
        console.info(`offset: ` + offset);
        console.info(`one step length: ` + oneStep.length);
        if (bufferSize <= offset) {
            isFinished = true;
        }
        console.info(`isFinished: ${isFinished}`);
        await incSouce.updateData(oneStep, isFinished, 0, oneStep.length);
    }
    return incSouce;
}

export async function createImageSourceByFileDescriptor(picname, sourceOpts) {
    await getFd(picname);
    if (sourceOpts == undefined) {
        return image.createImageSource(fdNumber);
    } else {
        return image.createImageSource(fdNumber, sourceOpts);
    }
}

export async function createImageSourceByFilePath(picname, sourceOpts) {
    await getFd(picname);
    if (sourceOpts == undefined) {
        return image.createImageSource(filePath);
    } else {
        return image.createImageSource(filePath, sourceOpts);
    }
}

export async function getImageSourceData(createType, picname, sourceOpts) {
    let imageSource;
    switch(createType) {
        case "rawfile":
            imageSource = await createImageSourceByRawFile(picname, sourceOpts);
            break;
        case "buffer":
            imageSource = createImageSourceByBuffer(picname, sourceOpts);
            break;
        case "incremental":
            imageSource = await createIncrementalImageSource(picname, sourceOpts);
            break;
        case "fd":
            imageSource = await createImageSourceByFileDescriptor(picname, sourceOpts);
            break;
        case "url":
            imageSource = await createImageSourceByFilePath(picname, sourceOpts);
            break;
        default:
            imageSource = undefined;
            break;
    }
    return imageSource;
}