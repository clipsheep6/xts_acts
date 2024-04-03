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

import cameraObj from '@ohos.multimedia.camera';
import featureAbility from '@ohos.ability.featureAbility';
import { expect } from '@ohos/hypium';
const TAG: string = "CameraCommon: ";

let context = featureAbility.getContext();
let mCameraManager:cameraObj.CameraManager = getCameraManagerInstance();
let mCameraDeviceArray: Array<cameraObj.CameraDevice> = getCameraDeviceArray();

export function sleep(testCase:string, time:number):Promise<void> {
    console.info(testCase + "Entering sleep -> Promise constructor");
    return new Promise(resolve => setTimeout(resolve, time));
}

export function isEmpty<T>(data:T) {
    return (data == null || data == undefined);
}

export function getCameraManagerInstance() {
    console.info(TAG + 'Enter getCameraManagerInstance');
    let cameraManager:cameraObj.CameraManager = cameraObj.getCameraManager(context);
    expect(isEmpty<cameraObj.CameraManager>(cameraManager)).assertFalse();
    return cameraManager;
}

export function getCameraDeviceArray() {
    let cameraDeviceArray: Array<cameraObj.CameraDevice> = mCameraManager.getSupportedCameras();
    expect(isEmpty<Array<cameraObj.CameraDevice>>(cameraDeviceArray)).assertFalse();
    mCameraDeviceArray = mCameraManager.getSupportedCameras();
    let cameraNum:number = mCameraDeviceArray.length;
    console.info(TAG + "cameraDeviceArray length is: " + cameraNum);
    return cameraDeviceArray;
}

export function createPhotoSessionInstance(testCase:string) {
    console.info(testCase + ' Enter createPhotoSessionInstance');
    let photoSession:cameraObj.PhotoSession = mCameraManager.createSession(cameraObj.SceneMode.NORMAL_PHOTO);
    expect(isEmpty<cameraObj.PhotoSession>(photoSession)).assertFalse();
    return photoSession;
}

export function createVideoSessionInstance(testCase:string) {
    console.info(testCase + ' Enter createVideoSessionInstance');
    let videoSession:cameraObj.VideoSession = mCameraManager.createSession(cameraObj.SceneMode.NORMAL_VIDEO);
    expect(isEmpty<cameraObj.VideoSession>(videoSession)).assertFalse();
    return videoSession;
}

export async function releaseSessionInstance(testCase:string, session:cameraObj.Session) {
    console.info(testCase + 'Enter releaseSessionInstance');
    await session.release();
}

export async function createInput(testCase:string, idx:number) {
    console.info(testCase + 'Enter createInput idx:' + idx);
    let cameraInput:cameraObj.CameraInput = mCameraManager.createCameraInput(mCameraDeviceArray[idx]);
    expect(isEmpty<cameraObj.CameraInput>(cameraInput)).assertFalse();
    await cameraInput.open();
    await sleep(testCase, 100);
    console.info(testCase  + 'the CameraInput is:' + cameraInput);
    return cameraInput;
}

export async function releaseInput(testCase:string, cameraInput:cameraObj.CameraInput) {
    console.info(testCase + ' Enter releaseInput');
    expect(isEmpty<cameraObj.CameraInput>(cameraInput)).assertFalse();
    await cameraInput.close();
    console.info(testCase + ' Exit releaseInput');
}

export function createPreviewOutput(testCase:string, idx:number) {
    console.info(testCase + ' Enter createPreviewOutput idx:' + idx);
    let surfaceId:string = globalThis.surfaceId;
    console.info(testCase + ' Enter createPreviewOutput surfaceId:' + surfaceId);
    let cameraOutputCap:cameraObj.CameraOutputCapability = mCameraManager.getSupportedOutputCapability(mCameraDeviceArray[idx],
        cameraObj.SceneMode.NORMAL_PHOTO);
    expect(isEmpty<cameraObj.CameraOutputCapability>(cameraOutputCap)).assertFalse();
    let previewProfiles: Array<cameraObj.Profile> = cameraOutputCap.previewProfiles;
    expect(isEmpty<Array<cameraObj.Profile>>(previewProfiles)).assertFalse();
    let previewOutput:cameraObj.PreviewOutput = mCameraManager.createPreviewOutput(previewProfiles[0], surfaceId);
    expect(isEmpty<cameraObj.PreviewOutput>(previewOutput)).assertFalse();
    console.info(testCase + " createPreviewOutput: " + previewOutput);
    return previewOutput;
}

export function createPhotoOutput(testCase:string, idx:number) {
    console.info(testCase + ' Enter createPhotoOutput idx:' + idx);
    let surfaceId:string = globalThis.surfaceId;
    console.info(testCase + ' Enter createPhotoOutput surfaceId:' + surfaceId);
    let cameraOutputCap:cameraObj.CameraOutputCapability = mCameraManager.getSupportedOutputCapability(mCameraDeviceArray[idx],
        cameraObj.SceneMode.NORMAL_PHOTO);
    expect(isEmpty<cameraObj.CameraOutputCapability>(cameraOutputCap)).assertFalse();
    let photoProfiles: Array<cameraObj.Profile> = cameraOutputCap.photoProfiles;
    expect(isEmpty<Array<cameraObj.Profile>>(photoProfiles)).assertFalse();
    let photoOutput:cameraObj.PhotoOutput = mCameraManager.createPhotoOutput(photoProfiles[0]);
    expect(isEmpty<cameraObj.PhotoOutput>(photoOutput)).assertFalse();
    console.info(testCase + " createPhotoOutput: " + photoOutput);
    return photoOutput;
}

export function createVideoOutput(testCase:string, idx:number) {
    console.info(testCase + ' Enter createVideoOutput idx:' + idx);
    let surfaceId:string = globalThis.surfaceId;
    console.info(testCase + ' Enter createVideoOutput surfaceId:' + surfaceId);
    let cameraOutputCap:cameraObj.CameraOutputCapability = mCameraManager.getSupportedOutputCapability(mCameraDeviceArray[idx],
        cameraObj.SceneMode.NORMAL_VIDEO);
    expect(isEmpty<cameraObj.CameraOutputCapability>(cameraOutputCap)).assertFalse();
    let videoProfiles: Array<cameraObj.VideoProfile> = cameraOutputCap.videoProfiles;
    expect(isEmpty<Array<cameraObj.VideoProfile>>(videoProfiles)).assertFalse();
    let videoOutput:cameraObj.VideoOutput = mCameraManager.createVideoOutput(videoProfiles[0], surfaceId);
    expect(isEmpty<cameraObj.VideoOutput>(videoOutput)).assertFalse();
    console.info(testCase + " createVideoOutput: " + videoOutput);
    return videoOutput;
}

export async function releaseOutput(testCase:string, output:cameraObj.CameraOutput) {
    console.info(testCase + 'Enter releaseOutput');
    if (!isEmpty<cameraObj.CameraOutput>(output)) {
        await output.release();
    }
}