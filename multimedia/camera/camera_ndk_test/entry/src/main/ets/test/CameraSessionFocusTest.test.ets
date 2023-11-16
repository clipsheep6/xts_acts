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

// @ts-ignore

import cameraObj from 'libentry.so';
import image from '@ohos.multimedia.image';
import media from '@ohos.multimedia.media';
import mediaLibrary from '@ohos.multimedia.mediaLibrary';
import deviceInfo from '@ohos.deviceInfo';
import featureAbility from '@ohos.ability.featureAbility';
import {UiComponent, UiDriver, Component, Driver, UiWindow, ON, BY } from '@ohos.UiTest';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium';

const TAG = "CameraSessionFocusTest: ";

// Define global letiables
let mCameraManager;
let mSupportCamera;
let mCameraSession;

let mPhotoSurface;
let mVideoRecorder;
let mVideoSurface;
let mFileAsset;
let mFdPath;
let mFdNumber;

// CAMERA-0 letiables
let mCameraNum;

let mCameraInput;
let mPreviewOutput;
let mPhotoOutput;
let mVideoOutput;

let mIsFocusModeSupportedArray;

let mVideoProfileCfg = {
    audioBitrate: 48000,
    audioChannels: 2,
    audioCodec: 'audio/mp4a-latm',
    audioSampleRate: 48000,
    durationTime: 1000,
    fileFormat: 'mp4',
    videoBitrate: 2000000,
    videoCodec: 'video/mp4v-es',
    videoFrameWidth: 640,
    videoFrameHeight: 480,
    videoFrameRate: 30
}

let mVideoConfig = {
    audioSourceType: 1,
    videoSourceType: 0,
    profile: mVideoProfileCfg,
    url: 'file:///data/media/CameraSessionFocus.mp4',
    orientationHint: 0,
    location: { latitude: 30, longitude: 130 },
    maxSize: 100,
    maxDuration: 500
}

let mPicWidthMax = 1;
let mPicHeightMax = 1;

let mFocusPoint = {
    x: mPicWidthMax / 2.0,
    y: mPicHeightMax / 2.0,
}

let mFocusPointLT = {
    x: 0,
    y: 0,
}

let mFocusPointRT = {
    x: mPicWidthMax ,
    y: 0,
}

let mFocusPointLB = {
    x: 0,
    y: mPicHeightMax,
}

let mFocusPointRB = {
    x: mPicWidthMax,
    y: mPicHeightMax,
}

let mFocusPointInvalidLT = {
    x: -1,
    y: -1,
}

let mFocusPointInvalidRT = {
    x: (mPicWidthMax + 1),
    y: -1,
}

let mFocusPointInvalidLB = {
    x: -1,
    y: (mPicHeightMax + 1),
}

let mFocusPointInvalidRB = {
    x: (mPicWidthMax + 1),
    y: (mPicHeightMax + 1),
}

let Camera_FocusMode = {
    FOCUS_MODE_MANUAL : 0,
    FOCUS_MODE_CONTINUOUS_AUTO : 1,
    FOCUS_MODE_AUTO : 2,
    FOCUS_MODE_LOCKED : 3
}

let mEnableCheckInvalidFocusPoint = false;
let receiver;

export default function cameraSessionFocusTest() {

    function sleep(ms) {
        console.info(TAG + "Entering sleep -> Promise constructor");
        return new Promise(resolve => setTimeout(resolve, ms));
    }

    function isEmpty(data) {
        if (data == null || data == undefined) {
            return true;
        }
        return false;
    }

    async function closeFd() {
        if (mFileAsset != null) {
                await mFileAsset[0].close(mFdNumber).then(() => {
                console.info('[mediaLibrary] case close fd success');
            }).catch((err) => {
                console.info('[mediaLibrary] case close fd failed');
            });
        } else {
            console.info('[mediaLibrary] case fileAsset is null');
        }
    }

    async function getPhotoReceiverSurface() {
        console.log(TAG + 'Entering getPhotoReceiverSurface')
        receiver = image.createImageReceiver(640, 480, 4, 8)
        console.log(TAG + 'before receiver check')
        if (receiver !== undefined) {
            console.log(TAG + 'Photo receiver is created successfully')
            mPhotoSurface = await receiver.getReceivingSurfaceId()
            console.log(TAG + 'Photo received id: ' + JSON.stringify(mPhotoSurface))
        } else {
            console.log(TAG + 'Photo receiver is created failed')
        }
        console.log(TAG + 'Exit getPhotoReceiverSurface')
    }

    async function releaseVideoReceiveSurface() {
        console.log(TAG + 'Entering releaseVideoReceiveSurface')
        mVideoRecorder.release((err) => {
            console.info(TAG + 'Entering release video receiver')
        })
        await closeFd();

        await sleep(100);
        console.log(TAG + 'Exit releaseVideoReceiveSurface')
    }

    function getCameraManagerInstance() {
        console.info(TAG + 'Enter getCameraManagerInstance');
        console.info(TAG + 'yyx globalThis.surfaceId : ' + globalThis.surfaceId);
        let ret = cameraObj.initCamera(globalThis.surfaceId);
        if (ret != 0) {
            console.info(TAG + "getCameraManager FAILED");
            expect().assertFail();
        }
        console.info(TAG + 'Exit getCameraManagerInstance');
        return true;
    }

    function getCameraSupportDevicesArray() {
        console.info('Enter getCameraSupportDevicesArray');

        let camera = cameraObj.getSupportedCameras();
        console.info(TAG + 'Exit getCameraSupportDevicesArray  ' + camera.cameraPosition);
        console.info(TAG + 'Exit getCameraSupportDevicesArray  ' + camera.cameraType);
        console.info(TAG + 'Exit getCameraSupportDevicesArray  ' + camera.connectionType);
        console.info(TAG + 'Exit getCameraSupportDevicesArray  ' + camera.cameraId);
        if (isEmpty(camera)) {
            console.info(TAG + "getSupportedCameras FAILED");
            expect().assertFail();
        }

        mIsFocusModeSupportedArray = new Array();
        console.info('Exit getCameraSupportDevicesArray');
        return true;
    }

    function createCameraSessionInstance() {
        console.info('Enter createCameraSessionInstance');
        try {
            cameraObj.createSession();
        }
        catch {
            console.info('createCaptureSession FAILED');
            expect().assertFail();
        }
        let ret = cameraObj.sessionBegin();
        if (ret != 0) {
            console.info(TAG + "sessionBegin FAILED");
            expect().assertFail();
        }
        console.info('Exit createCameraSessionInstance');
        return true;
    }

    async function releaseCameraSessionInstance() {
        await cameraObj.sessionRelease();
    }

    async function createInput() {
        console.info('Enter createInput');
        let ret = cameraObj.createCameraInput();

        if (ret != 0) {
            console.info(TAG + "createCameraInput FAILED");
            expect().assertFail();
            return false;
        }

        await cameraObj.cameraInputOpen();
        await sleep(100);
        console.info('Exit createInput');
        return true;
    }

    async function releaseInput() {
        console.info('Enter releaseInput');
        await cameraObj.cameraInputClose();
        console.info('Exit releaseInput');
        return true;
    }

    function createOutput() {
        console.info(TAG + 'Enter createOutput');

        let cameraOutputCapability = cameraObj.getSupportedOutputCapability();
        console.info(TAG + 'cameraOutputCapability[0] = ' + cameraOutputCapability.previewProfilesSize);
        console.info(TAG + 'cameraOutputCapability[1] = ' + cameraOutputCapability.photoProfilesSize);
        console.info(TAG + 'cameraOutputCapability[2] = ' + cameraOutputCapability.videoProfilesSize);
        console.info(TAG + 'cameraOutputCapability[3] = ' + cameraOutputCapability.metadataProfilesSize);
        let mPreviewOutput = cameraObj.createPreviewOutput();
        if (mPreviewOutput != 0) {
            console.info(TAG + "createPreviewOutput FAILED");
            expect().assertFail();
        }
        console.info(TAG + "createPreviewOutput: " + mPreviewOutput);
        let mPhotoOutput = cameraObj.createPhotoOutput(mPhotoSurface);
        if (mPhotoOutput != 0) {
            console.info(TAG + "mPhotoOutput FAILED");
            expect().assertFail();
        }
        console.info(TAG + "createPhotoOutput: " + mPhotoOutput);
        console.info(TAG + 'yyx 101010');
        console.info('Exit createOutputs');
        return true;
    }

    async function releaseOutput() {
        console.info('Enter releaseOutput');

        await cameraObj.previewOutputRelease();
        await cameraObj.photoOutputRelease();
        console.info('Exit releaseOutput');

        return true;
    }

    async function startCameraSession() {
        console.info(TAG + "Enter startCameraSession");

        await createInput();
        createOutput();

        await sleep(1);
        let ret = cameraObj.sessionBegin();
        if (ret != 0) {
            console.info(TAG + "sessionBegin had been execute, please check your operation");
        }
        let addInput =cameraObj.sessionAddInput();
        if (addInput != 0) {
            console.info(TAG + "addInput FAILED");
            expect().assertFail();
        }
        let addPreviewOutput = cameraObj.sessionAddPreviewOutput();
        if (addPreviewOutput != 0) {
            console.info(TAG + "addPreviewOutput FAILED");
            expect().assertFail();
        }
        let addPhotoOutput = cameraObj.sessionAddPhotoOutput();
        if (addPhotoOutput != 0) {
            console.info(TAG + "addPhotoOutput FAILED");
            expect().assertFail();
        }

        await sleep(1);
        let commitConfig = cameraObj.sessionCommitConfig();
        if (commitConfig != 0) {
            console.info(TAG + "CommitConfig FAILED");
            expect().assertFail();
        }
        console.info(TAG + "Exit startCameraSession");

        return true;
    }

    async function stopCameraSession() {
        console.info(TAG + "Enter stopCameraSession");

        let ret = cameraObj.sessionStop();
        if (ret != 0) {
            console.info(TAG + "sessionStop FAILED");
            expect().assertFail();
        }
        cameraObj.sessionRemovePreviewOutput();
        cameraObj.sessionRemovePhotoOutput();
        await releaseInput();
        await releaseOutput();

        console.info(TAG + "Exit stopCameraSession");

        return true;
    }

    describe('cameraSessionFocusTest', function () {
        async function getPermission() {
            console.info(TAG + '1031xmj getPermission');
            let permissions = [
                'ohos.permission.CAMERA',
                'ohos.permission.MICROPHONE',
                'ohos.permission.CAPTURE_SCREEN',
                'ohos.permission.READ_MEDIA',
                'ohos.permission.WRITE_MEDIA',
                'ohos.permission.GRANT_SENSITIVE_PERMISSIONS',
                'ohos.permission.REVOKE_SENSITIVE_PERMISSIONS',
                'ohos.permission.MEDIA_LOCATION',
                'ohos.permission.START_ABILIIES_FROM_BACKGROUND',
                'ohos.permission.START_INVISIBLE_ABILITY',
                'ohos.permission.ABILITY_BACKGROUND_COMMUNICATION',
            ];
            featureAbility.getContext().requestPermissionsFromUser(permissions, 0, (data) => {
                console.info(TAG + "request success" + JSON.stringify(data.code));
            })
        }
        console.info(TAG + '----------cameraSessionFocusTest--------------')

        beforeAll(async function () {
            sleep(100);
            await getPermission();
            await sleep(5000);
            let driver = UiDriver.create();
            let button = await driver.findComponent(BY.text("允许"));
            while (button) {
                await button.click();
                button = await driver.findComponent(BY.text("允许"));
            }
            await sleep(1000);
            await getPhotoReceiverSurface();
            getCameraManagerInstance();
            getCameraSupportDevicesArray();
            createCameraSessionInstance();
            await startCameraSession();
            cameraObj.sessionCommitConfig();
            console.info('Device type = ' + deviceInfo.deviceType);

            console.info('beforeAll case');
        })

        beforeEach(function () {
            sleep(5000);
            console.info('beforeEach case');
        })

        afterEach(async function () {
            console.info('afterEach case');
        })

        afterAll(function () {
            stopCameraSession();
            releaseVideoReceiveSurface();
            releaseCameraSessionInstance();
            sleep(1000);
            console.info('afterAll case');
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0100
        * @tc.name      : Check capture session support focus manual mode with promise or not
        * @tc.desc      : Check capture session support focus manual mode with promise or not
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0100', 2, async function (done) {
            console.info(TAG + "--------------SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0100--------------");

            let sessionIsFocusModeSupported = cameraObj.sessionIsFocusModeSupported(Camera_FocusMode.FOCUS_MODE_MANUAL);
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0100 finish");
            if (sessionIsFocusModeSupported != null || sessionIsFocusModeSupported != undefined) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0100 PASSED with sessionIsFocusModeSupported is: " + sessionIsFocusModeSupported);
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0100 FAILED with sessionIsFocusModeSupported is: " + sessionIsFocusModeSupported);
                expect().assertFail();
            }

            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0100 ends here");
            done();
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0100
        * @tc.name      : Check capture session set focus manual mode with promise
        * @tc.desc      : Check capture session set focus manual mode with promise
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0100', 2, async function (done) {
            console.info(TAG + "--------------SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0100--------------");

            cameraObj.sessionSetFocusMode(Camera_FocusMode.FOCUS_MODE_MANUAL);
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0100 finish");
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0100 PASSED with FocusMode is: " + 0);

            let focusMode = cameraObj.sessionGetFocusMode();
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0100 finish");
            if (focusMode == Camera_FocusMode.FOCUS_MODE_MANUAL) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0100 PASSED with FocusMode is: " + focusMode);
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0100 FAILED with FocusMode is: " + focusMode);
                expect().assertFail();
            }

            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0100 ends here");
            done();
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0200
        * @tc.name      : Check capture session support focus continuous auto mode with promise or not
        * @tc.desc      : Check capture session support focus continuous auto mode with promise or not
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0200', 2, async function (done) {
            console.info(TAG + "--------------SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0200--------------");

            let sessionIsFocusModeSupported = cameraObj.sessionIsFocusModeSupported(Camera_FocusMode.FOCUS_MODE_CONTINUOUS_AUTO);
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0200 finish");
            if (sessionIsFocusModeSupported != null || sessionIsFocusModeSupported != undefined) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0200 PASSED with sessionIsFocusModeSupported is: " + sessionIsFocusModeSupported);
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0200 FAILED with sessionIsFocusModeSupported is: " + sessionIsFocusModeSupported);
                expect().assertFail();
            }

            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0200 ends here");
            done();
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0200
        * @tc.name      : Check capture session set focus continuous auto mode with promise
        * @tc.desc      : Check capture session set focus continuous auto mode with promise
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0200', 2, async function (done) {
            console.info(TAG + "--------------SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0200--------------");

            cameraObj.sessionSetFocusMode(Camera_FocusMode.FOCUS_MODE_CONTINUOUS_AUTO);
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0200 finish");
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0200 PASSED with FocusMode is: " + 1);

            let focusMode = cameraObj.sessionGetFocusMode();
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0200 finish");
            if (focusMode == Camera_FocusMode.FOCUS_MODE_CONTINUOUS_AUTO) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0200 PASSED with FocusMode is: " + focusMode);
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0200 FAILED with FocusMode is: " + focusMode);
                expect().assertFail();
            }

            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0200 ends here");
            done();
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0300
        * @tc.name      : Check capture session support focus auto mode with promise or not
        * @tc.desc      : Check capture session support focus auto mode with promise or not
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0300', 2, async function (done) {
            console.info(TAG + "--------------SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0300--------------");

            let sessionIsFocusModeSupported = cameraObj.sessionIsFocusModeSupported(Camera_FocusMode.FOCUS_MODE_AUTO);
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0300 finish");
            if (sessionIsFocusModeSupported != null || sessionIsFocusModeSupported != undefined) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0300 PASSED with sessionIsFocusModeSupported is: " + sessionIsFocusModeSupported);
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0300 FAILED with sessionIsFocusModeSupported is: " + sessionIsFocusModeSupported);
                expect().assertFail();
            }

            await sleep(100);
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0300 ends here");
            done();
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0300
        * @tc.name      : Check capture session set focus auto mode with promise
        * @tc.desc      : Check capture session set focus auto mode with promise
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0300', 2, async function (done) {
            console.info(TAG + "--------------SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0300--------------");

            cameraObj.sessionSetFocusMode(Camera_FocusMode.FOCUS_MODE_AUTO);
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0300 finish");
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0300 PASSED with FocusMode is: " + 2);

            let focusMode = cameraObj.sessionGetFocusMode();
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0300 finish");
            if (focusMode == Camera_FocusMode.FOCUS_MODE_AUTO) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0300 PASSED with FocusMode is: " + focusMode);
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0300 FAILED with FocusMode is: " + focusMode);
                expect().assertFail();
            }

            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0300 ends here");
            done();
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0400
        * @tc.name      : Check capture session support focus locked mode with promise or not
        * @tc.desc      : Check capture session support focus locked mode with promise or not
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0400', 2, async function (done) {
            console.info(TAG + "--------------SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0400--------------");

            let sessionIsFocusModeSupported = cameraObj.sessionIsFocusModeSupported(Camera_FocusMode.FOCUS_MODE_LOCKED);
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0400 finish");
            if (sessionIsFocusModeSupported != null || sessionIsFocusModeSupported != undefined) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0400 PASSED with sessionIsFocusModeSupported is: " + sessionIsFocusModeSupported);
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0400 FAILED with sessionIsFocusModeSupported is: " + sessionIsFocusModeSupported);
                expect().assertFail();
            }

            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_IS_FOCUS_MODE_SUPPORT_PROMISE_0400 ends here");
            done();
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0400
        * @tc.name      : Check capture session set focus locked mode with promise
        * @tc.desc      : Check capture session set focus locked mode with promise
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0400', 2, async function (done) {
            console.info(TAG + "--------------SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0400--------------");

            cameraObj.sessionSetFocusMode(Camera_FocusMode.FOCUS_MODE_LOCKED);
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0400 finish");
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0400 PASSED with FocusMode is: " + 3);

            let focusMode = cameraObj.sessionGetFocusMode();
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0400 finish");
            if (focusMode == Camera_FocusMode.FOCUS_MODE_LOCKED) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0400 PASSED with FocusMode is: " + focusMode);
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0400 FAILED with FocusMode is: " + focusMode);
                expect().assertFail();
            }

            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_MODE_PROMISE_0400 ends here");
            done();
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0100
        * @tc.name      : Check capture session set focus point with promise
        * @tc.desc      : Check capture session set focus point with promise
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0100', 2, async function (done) {
            console.info(TAG + "--------------SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0100--------------");

            cameraObj.sessionSetFocusPoint(mFocusPoint);
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0100 finish");
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0100 PASSED with FocusPoint is: " + mFocusPoint.x + ", " + mFocusPoint.y);

            let focusPoint = cameraObj.sessionGetFocusPoint();
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0100 finish");
            if ((focusPoint.x == mFocusPoint.x) && (focusPoint.y == mFocusPoint.y)) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0100 PASSED with FocusPoint is: " + focusPoint.x + ", " + focusPoint.y);
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0100 FAILED with FocusPoint is: " + focusPoint.x + ", " + focusPoint.y);
                expect().assertFail();
            }

            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0100 ends here");
            done();
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0200
        * @tc.name      : Check capture session set focus point with promise(left-top point)
        * @tc.desc      : Check capture session set focus point with promise(left-top point)
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0200', 2, async function (done) {
            console.info(TAG + "--------------SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0200--------------");

            cameraObj.sessionSetFocusPoint(mFocusPointLT);
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0200 finish");
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0200 PASSED with FocusPoint is: " + mFocusPointLT.x + ", " + mFocusPointLT.y);

            let focusPoint = cameraObj.sessionGetFocusPoint();
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0200 finish");
            if ((Math.abs(focusPoint.x - mFocusPointLT.x) >= 0) && (Math.abs(focusPoint.y - mFocusPointLT.y) >= 0)) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0200 PASSED with FocusPoint is: " + focusPoint.x + ", " + focusPoint.y);
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0200 FAILED with FocusPoint is: " + focusPoint.x + ", " + focusPoint.y);
                expect().assertFail();
            }

            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0200 ends here");
            done();
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0300
        * @tc.name      : Check capture session set focus point with promise(right-top point)
        * @tc.desc      : Check capture session set focus point with promise(right-top point)
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0300', 2, async function (done) {
            console.info(TAG + "--------------SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0300--------------");

            cameraObj.sessionSetFocusPoint(mFocusPointRT);
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0300 finish");
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0300 PASSED with FocusPoint is: " + mFocusPointRT.x + ", " + mFocusPointRT.y);

            let focusPoint = cameraObj.sessionGetFocusPoint();
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0300 finish");
            if ((Math.abs(focusPoint.x - mFocusPointRT.x) >= 0) && (Math.abs(focusPoint.y - mFocusPointRT.y) >= 0)) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0300 PASSED with FocusPoint is: " + focusPoint.x + ", " + focusPoint.y);
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0300 FAILED with FocusPoint is: " + focusPoint.x + ", " + focusPoint.y);
                expect().assertFail();
            }

            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0300 ends here");
            done();
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0400
        * @tc.name      : Check capture session set focus point with promise(left-bottom point)
        * @tc.desc      : Check capture session set focus point with promise(left-bottom point)
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0400', 2, async function (done) {
            console.info(TAG + "--------------SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0400--------------");

            cameraObj.sessionSetFocusPoint(mFocusPointLB);
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0400 finish");
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0400 PASSED with FocusPoint is: " + mFocusPointLB.x + ", " + mFocusPointLB.y);

            let focusPoint = cameraObj.sessionGetFocusPoint();
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0400 finish");
            if ((Math.abs(focusPoint.x - mFocusPointLB.x) >= 0) && (Math.abs(focusPoint.y - mFocusPointLB.y) >= 0)) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0400 PASSED with FocusPoint is: " + focusPoint.x + ", " + focusPoint.y);
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0400 FAILED with FocusPoint is: " + focusPoint.x + ", " + focusPoint.y);
                expect().assertFail();
            }
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0400 ends here");
            done();
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0500
        * @tc.name      : Check capture session set focus point with promise(right-bottom point)
        * @tc.desc      : Check capture session set focus point with promise(right-bottom point)
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0500', 2, async function (done) {
            console.info(TAG + "--------------SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0500--------------");

            cameraObj.sessionSetFocusPoint(mFocusPointRB);
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0500 finish");
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0500 PASSED with FocusPoint is: " + mFocusPointRB.x + ", " + mFocusPointRB.y);

            let focusPoint = cameraObj.sessionGetFocusPoint();
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0500 finish");
            if ((focusPoint.x == mFocusPointRB.x) && (focusPoint.y == mFocusPointRB.y)) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0500 PASSED with FocusPoint is: " + focusPoint.x + ", " + focusPoint.y);
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0500 FAILED with FocusPoint is: " + focusPoint.x + ", " + focusPoint.y);
                expect().assertFail();
            }

            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0500 ends here");
            done();
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0600
        * @tc.name      : Check capture session set focus point with promise(left-top invalid point)
        * @tc.desc      : Check capture session set focus point with promise(left-top invalid point)
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0600', 2, async function (done) {
            console.info(TAG + "--------------SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0600--------------");

            cameraObj.sessionSetFocusPoint(mFocusPointInvalidLT);
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0600 finish");
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0600 PASSED with FocusPoint is: " + mFocusPointInvalidLT.x + ", " + mFocusPointInvalidLT.y);

            let focusPoint = cameraObj.sessionGetFocusPoint();
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0600 finish");
            if (((focusPoint.x != mFocusPointInvalidLT.x) && (focusPoint.y != mFocusPointInvalidLT.y)) || (mEnableCheckInvalidFocusPoint == false)) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0600 PASSED with FocusPoint is: " + focusPoint.x + ", " + focusPoint.y);
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0600 FAILED with FocusPoint is: " + focusPoint.x + ", " + focusPoint.y);
                expect().assertFail();
            }
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0600 ends here");
            done();
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0700
        * @tc.name      : Check capture session set focus point with promise(right-top invalid point)
        * @tc.desc      : Check capture session set focus point with promise(right-top invalid point)
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0700', 2, async function (done) {
            console.info(TAG + "--------------SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0700--------------");

            cameraObj.sessionSetFocusPoint(mFocusPointInvalidRT);
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0700 finish");
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0700 PASSED with FocusPoint is: " + mFocusPointInvalidRT.x + ", " + mFocusPointInvalidRT.y);

            let focusPoint = cameraObj.sessionGetFocusPoint();
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0700 finish");
            if (((focusPoint.x != mFocusPointInvalidRT.x) && (focusPoint.y != mFocusPointInvalidRT.y)) || (mEnableCheckInvalidFocusPoint == false)) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0700 PASSED with FocusPoint is: " + focusPoint.x + ", " + focusPoint.y);
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0700 FAILED with FocusPoint is: " + focusPoint.x + ", " + focusPoint.y);
                expect().assertFail();
            }

            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0700 ends here");
            done();
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0800
        * @tc.name      : Check capture session set focus point with promise(left-bottom invalid point)
        * @tc.desc      : Check capture session set focus point with promise(left-bottom invalid point)
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0800', 2, async function (done) {
            console.info(TAG + "--------------SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0800--------------");

            cameraObj.sessionSetFocusPoint(mFocusPointInvalidLB);
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0800 finish");
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0800 PASSED with FocusPoint is: " + mFocusPointInvalidLB.x + ", " + mFocusPointInvalidLB.y);

            let focusPoint = cameraObj.sessionGetFocusPoint();
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0800 finish");
            if (((focusPoint.x != mFocusPointInvalidLB.x) && (focusPoint.y != mFocusPointInvalidLB.y)) || (mEnableCheckInvalidFocusPoint == false)) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0800 PASSED with FocusPoint is: " + focusPoint.x + ", " + focusPoint.y);
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0800 FAILED with FocusPoint is: " + focusPoint.x + ", " + focusPoint.y);
                expect().assertFail();
            }
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0800 ends here");
            done();
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0900
        * @tc.name      : Check capture session set focus point with promise(right-bottom invalid point)
        * @tc.desc      : Check capture session set focus point with promise(right-bottom invalid point)
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0900', 2, async function (done) {
            console.info(TAG + "--------------SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0900--------------");

            cameraObj.sessionSetFocusPoint(mFocusPointInvalidRB);
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0900 finish");
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0900 PASSED with FocusPoint is: " + mFocusPointInvalidRB.x + ", " + mFocusPointInvalidRB.y);

            let focusPoint = cameraObj.sessionGetFocusPoint();
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0900 finish");
            if (((focusPoint.x != mFocusPointInvalidRB.x) && (focusPoint.y != mFocusPointInvalidRB.y)) || (mEnableCheckInvalidFocusPoint == false)) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0900 PASSED with FocusPoint is: " + focusPoint.x + ", " + focusPoint.y);
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0900 FAILED with FocusPoint is: " + focusPoint.x + ", " + focusPoint.y);
                expect().assertFail();
            }

            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_SESSION_SET_GET_FOCUS_POINT_PROMISE_0900 ends here");
            done();
        })

            /**
          * @tc.number    : SUB_MULTIMEDIA_CAMERA_NDK_ON_FOCUSSTATECHANGE_0100
          * @tc.name      : camera session focusstatechange api
          * @tc.desc      : camera session focusstatechange api
          * @tc.size      : MEDIUM
          * @tc.type      : Function
          * @tc.level     : Level 1
        */
        it('SUB_MULTIMEDIA_CAMERA_NDK_ON_FOCUSSTATECHANGE_0100', 1, async function (done) {
            console.info(TAG + "--------------SUB_MULTIMEDIA_CAMERA_NDK_ON_FOCUSSTATECHANGE_0100--------------");

            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_ON_FOCUSSTATECHANGE_0100 to operate");
            let status = await cameraObj.getCameraCallbackCode();
            console.info(TAG + "Error in SUB_MULTIMEDIA_CAMERA_NDK_ON_FOCUSSTATECHANGE_0100 status: " + status);
            if (status) {
              expect(true).assertTrue();
              console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_ON_FOCUSSTATECHANGE_0100 success");
            } else {
              expect().assertFail();
              console.info(TAG + "Error in SUB_MULTIMEDIA_CAMERA_NDK_ON_FOCUSSTATECHANGE_0100 FAILED: " + status);
            }
            await sleep(1000);
            done();

            await sleep(1000);
            done();
        })

          /**
          * @tc.number    : SUB_MULTIMEDIA_CAMERA_NDK_CAMERA_SESSION_ON_ERROR_0100
          * @tc.name      : camera session callback on error
          * @tc.desc      : camera session callback on error
          * @tc.size      : MEDIUM
          * @tc.type      : Function
          * @tc.level     : Level 1
        */
        it('SUB_MULTIMEDIA_CAMERA_NDK_CAMERA_SESSION_ON_ERROR_0100', 1, async function (done) {
            console.info(TAG + "--------------SUB_MULTIMEDIA_CAMERA_NDK_CAMERA_SESSION_ON_ERROR_0100--------------");


            let status = await cameraObj.getCameraCallbackCode();
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_CAMERA_SESSION_ON_ERROR_0100 to operate");
            if (status) {
              expect(true).assertTrue();
              console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_NDK_CAMERA_SESSION_ON_ERROR_0100 success");
            } else {
              expect().assertFail();
              console.info(TAG + "Error in SUB_MULTIMEDIA_CAMERA_NDK_CAMERA_SESSION_ON_ERROR_0100 FAILED: " + status);
            }

            await sleep(1000);
            done();
        })
    })
}