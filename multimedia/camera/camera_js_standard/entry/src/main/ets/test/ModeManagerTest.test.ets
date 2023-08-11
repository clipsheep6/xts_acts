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
// @ts-nocheck
import cameraObj from '@ohos.multimedia.camera';
import image from '@ohos.multimedia.image';
import mediaLibrary from '@ohos.multimedia.mediaLibrary';
import media from '@ohos.multimedia.media';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium';

const TAG = "ModeManagerTest: ";

// Define global variables
let mCameraManager;
let mModeManager;
let mCameraDevicesArray;
let mCameraModes;

let mPhotoSurface;
let mVideoRecorder;
let mVideoSurface;
let mFileAsset;
let mFdPath;
let mFdNumber;

// CAMERA-0 letiables
let mCameraNum;

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
    url: 'file:///data/media/ModeManager.mp4',
    orientationHint: 0,
    location: { latitude: 30, longitude: 130 },
    maxSize: 100,
    maxDuration: 500
}

let mCameraModesArray = [1]

export default function modeManagerTest() {

    async function getImageReceiverSurfaceId() {
        console.log(TAG + 'Entering create Image receiver')
        let receiver = image.createImageReceiver(640, 480, 4, 8)
        console.log(TAG + 'before receiver check')
        if (receiver !== undefined) {
            console.log(TAG + 'Receiver is ok')
            mPhotoSurface = await receiver.getReceivingSurfaceId()
            console.log(TAG + 'Received id: ' + JSON.stringify(mPhotoSurface))
        } else {
            console.log(TAG + 'Receiver is not ok')
        }
    }

    async function getFd(pathName) {
        let displayName = pathName;
        const mediaTest = mediaLibrary.getMediaLibrary();
        let fileKeyObj = mediaLibrary.FileKey;
        let mediaType = mediaLibrary.MediaType.VIDEO;
        let publicPath = await mediaTest.getPublicDirectory(mediaLibrary.DirectoryType.DIR_VIDEO);
        let dataUri = await mediaTest.createAsset(mediaType, displayName, publicPath);
        if (dataUri != undefined) {
            let args = dataUri.id.toString();
            let fetchOp = {
                selections: fileKeyObj.ID + "=?",
                selectionArgs: [args],
            }
            let fetchFileResult = await mediaTest.getFileAssets(fetchOp);
            mFileAsset = await fetchFileResult.getAllObject();
            mFdNumber = await mFileAsset[0].open('Rw');
            mFdPath = "fd://" + mFdNumber.toString();
        }
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

    async function getVideoReceiveSurface() {
        console.log(TAG + 'Entering getVideoReceiveSurface')
        await getFd('ModeManager.mp4');
        mVideoConfig.url = mFdPath;
        media.createAVRecorder((err, recorder) => {
            if (!err) {
                console.info(TAG + 'Entering create video receiver')
                mVideoRecorder = recorder
                console.info(TAG + 'videoRecorder is :' + JSON.stringify(mVideoRecorder))
                console.info(TAG + 'videoRecorder.prepare called.')
                mVideoRecorder.prepare(mVideoConfig, (err) => {
                    if (!err) {
                        console.info(TAG + 'videoRecorder.prepare success.')
                        mVideoRecorder.getInputSurface((err, id) => {
                            console.info(TAG + 'getInputSurface called')
                            if (!err) {
                                mVideoSurface = id
                                console.info(TAG + 'getInputSurface surfaceId: ' + JSON.stringify(mVideoSurface))
                            } else {
                                console.info(TAG + 'getInputSurface FAILED')
                            }
                        })
                    } else {
                        console.info(TAG + 'prepare FAILED')
                    }
                })
            } else {
                console.info(TAG + 'createVideoRecorder FAILED')
            }
        })
        console.log(TAG + 'Exit getVideoReceiveSurface')
    }

    async function releaseVideoReceiveSurface() {
        console.log(TAG + 'Entering releaseVideoReceiveSurface')
        mVideoRecorder.release((err) => {
            console.info(TAG + 'Entering release video receiver')
        })
        await closeFd();
        console.log(TAG + 'Exit releaseVideoReceiveSurface')
    }

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

    function getModeManagerInstance() {
        console.info('Enter getModeManagerInstance');

        mModeManager = cameraObj.getModeManager(null);
        if (isEmpty(mModeManager)) {
            console.info(TAG + "getModeManager FAILED");
            return false;
        }

        console.info('Exit getModeManagerInstance');

        return true;
    }

    function getCameraManagerInstance() {
        console.info('Enter getCameraManagerInstance');

        mCameraManager = cameraObj.getCameraManager(null);
        if (isEmpty(mCameraManager)) {
            console.info(TAG + "getCameraManagerInstance FAILED");
            return false;
        }

        console.info('Exit getCameraManagerInstance');

        return true;
    }

    function getCameraSupportDevicesArray() {
        console.info('Enter getCameraSupportDevicesArray');

        mCameraDevicesArray = mCameraManager.getSupportedCameras();
        /*
        mModeManager.getSupportedCameras(async (err, data) => {
            console.info(TAG + "Entering getCameraSupportDevicesArray callback");
            if (!err) {
                if (data != null || data != undefined) {
                    mCameraDevicesArray = data;
                    console.info(TAG + "Entering getCameraSupportDevicesArray PASSED with CameraDevicesArray is: " + data);
                } else {
                    console.info(TAG + "Entering getCameraSupportDevicesArray FAILED with CameraDevicesArray is: " + data);
                }
            } else {
                console.info(TAG + "Entering getCameraSupportDevicesArray FAILED : " + err.message);
            }
        })
        await sleep(3000);
        */
        if (isEmpty(mCameraDevicesArray)) {
            console.info(TAG + "getSupportedCameras FAILED");
            return false;
        }

        //mCameraNum = 1;
        mCameraNum = mCameraDevicesArray.length;

        console.info(TAG + "getCameraSupportDevicesArray is: " + mCameraNum);
        
        console.info('Exit getCameraSupportDevicesArray');

        return true;
    }

    function getCameraSupportModesArray(cameraDevice) {
        console.info('Enter getCameraSupportModesArray');
        
        mCameraModes = mModeManager.getSupportedModes(cameraDevice);
        /*
        mModeManager.getSupportedCameras(async (err, data) => {
            console.info(TAG + "Entering getCameraSupportModesArray callback");
            if (!err) {
                if (data != null || data != undefined) {
                    mCameraDevicesArray = data;
                    console.info(TAG + "Entering getCameraSupportModesArray PASSED with CameraDevicesArray is: " + data);
                } else {
                    console.info(TAG + "Entering getCameraSupportModesArray FAILED with CameraDevicesArray is: " + data);
                }
            } else {
                console.info(TAG + "Entering getCameraSupportModesArray FAILED : " + err.message);
            }
        })
        await sleep(3000);
        */
        if (isEmpty(mCameraModes)) {
            console.info(TAG + "getSupportedCameras FAILED");
            return false;
        }

        // mCameraNum = 1;
        // mCameraNum = mCameraModes.length;

        // console.info(TAG + "getCameraSupportModesArray is: " + mCameraNum);
        
        console.info('Exit getCameraSupportModesArray');

        return true;
    }

    function getSupportedOutputCapability(cameraDevice, cameraMode) {
        if (isEmpty(mModeManager)) {
            console.info(TAG + "Entering getSupportedOutputCapability cameraManager == null || undefined")
            expect().assertFail();
            return undefined;
        }

        let outputCapability = mModeManager.getSupportedOutputCapability(cameraDevice, cameraMode);

        if (isEmpty(outputCapability)) {
            console.info(TAG + "Entering getSupportedOutputCapability outputCapability == null || undefined")
        } else {
            console.info("CameraUnitTest: getSupportedOutputCapability: " + JSON.stringify(outputCapability));
        }

        return outputCapability;
    }

describe('ModeManagerTest', function () {
    console.info(TAG + '----------ModeManagerTest--------------')

    beforeAll(async function () {
        getCameraManagerInstance();
        getModeManagerInstance();
        getCameraSupportDevicesArray();
        await getImageReceiverSurfaceId();
        await getVideoReceiveSurface();
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
        releaseVideoReceiveSurface();
        sleep(1000);
        console.info('afterAll case');
    })



    /**
      * @tc.number    : SUB_MULTIMEDIA_CAMERA_GET_MODE_MANAGER_PROMISE_0100
      * @tc.name      : Create mode manager instance promise api
      * @tc.desc      : Create mode manager instance promise api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
    */
    it('SUB_MULTIMEDIA_CAMERA_GET_MODE_MANAGER_PROMISE_0100', 2, async function (done) {
      console.info("--------------SUB_MULTIMEDIA_CAMERA_GET_MODE_MANAGER_PROMISE_0100--------------");
        let modeManagerPromise = cameraObj.getModeManager(null);
        expect(isEmpty(modeManagerPromise)).assertFalse();
        console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_GET_MODE_MANAGER_PROMISE_0100 modeManagerPromise: " + JSON.stringify(modeManagerPromise));
        done();
    })

    /**
      * @tc.number    : SUB_MULTIMEDIA_CAMERA_GET_MODES_PROMISE_0101
      * @tc.name      : Get mode from modemanager to get array of mode promise api
      * @tc.desc      : Get mode from modemanager to get array of mode promise api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
    */
    it('SUB_MULTIMEDIA_CAMERA_GET_MODES_PROMISE_0101', 2, async function (done) {
        console.info("--------------SUB_MULTIMEDIA_CAMERA_GET_MODES_PROMISE_0101--------------");
        if (isEmpty(mModeManager)) {
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_GET_MODES_PROMISE_0101 mModeManager == null || undefined")
            expect().assertFail();
        } else {
           let mCameraDevicesArrayPromise = mCameraManager.getSupportedCameras();
            for (let i = 0; i < mCameraDevicesArrayPromise.length; i++) {
                let mCameraModesPromise = mModeManager.getSupportedModes(mCameraDevicesArrayPromise[i]);
                console.info("Entering SUB_MULTIMEDIA_CAMERA_GET_MODES_PROMISE_0101: " + JSON.stringify(mCameraModesPromise));
                if (mCameraModesPromise != null && mCameraModesPromise.length > 0) {
                    for (let i = 0; i < mCameraModesPromise.length; i++) {
                        // Get the variables from camera object
                        let cameraMode = mCameraModesPromise[i];
                        expect(isEmpty(cameraMode)).assertFalse();
                        console.info("Entering SUB_MULTIMEDIA_CAMERA_GET_MODES_PROMISE_0101 camera" + i + "cameraMode: " + cameraMode);
                    }
                    expect(true).assertTrue();
                    console.info("Entering SUB_MULTIMEDIA_CAMERA_GET_MODES_PROMISE_0101 PASSED");
                }
                expect(true).assertTrue();
                console.info("Entering SUB_MULTIMEDIA_CAMERA_GET_MODES_PROMISE_0101 PASSED camera:" + mCameraDevicesArrayPromise[i].cameraId);
            }
            
        }
        console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_GET_MODES_PROMISE_0101 ends here");
        await sleep(1000);
        done();
    })

    /**
      * @tc.number    : SUB_MULTIMEDIA_CAMERA_GET_SUPPORTED_CAMERA_OUTPUT_CAPABILITY_CALLBACK_0102
      * @tc.name      : Get supported preview formats from camera-0 camerainput async api
      * @tc.desc      : Get supported preview formats from camera-0 camerainput async api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
    */
    it('SUB_MULTIMEDIA_CAMERA_GET_SUPPORTED_CAMERA_OUTPUT_CAPABILITY_CALLBACK_0102', 2, async function (done) {
      console.info("--------------SUB_MULTIMEDIA_CAMERA_GET_SUPPORTED_CAMERA_OUTPUT_CAPABILITY_CALLBACK_0102--------------");
      let camerasArray = mCameraManager.getSupportedCameras();
        for (let i = 0; i < camerasArray.length; i++) {
            let cameraModesArray = mModeManager.getSupportedModes(camerasArray[i]);
            if (cameraModesArray != null && cameraModesArray.length > 0) {
                for (let y = 0; y < cameraModesArray.length; y++) {
                    let cameraOutputCap = getSupportedOutputCapability(camerasArray[i], cameraModesArray[y]);
                    console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_GET_SUPPORTED_CAMERA_OUTPUT_CAPABILITY_CALLBACK_0102 camera:" + camerasArray[i].cameraId);
                    if (!isEmpty(cameraOutputCap)) {
                        let previewProfilesArray = cameraOutputCap.previewProfiles;
                        if (isEmpty(previewProfilesArray)) {
                            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_GET_SUPPORTED_CAMERA_OUTPUT_CAPABILITY_CALLBACK_0102 previewProfilesArray == null || undefined")
                            expect().assertFail();
                        } 

                        let photoProfilesArray = cameraOutputCap.photoProfiles;
                        if (isEmpty(photoProfilesArray)) {
                            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_GET_SUPPORTED_CAMERA_OUTPUT_CAPABILITY_CALLBACK_0102 photoProfilesArray == null || undefined")
                            expect().assertFail();
                        } 

                        let videoProfilesArray = cameraOutputCap.videoProfiles;
                        if (isEmpty(videoProfilesArray)) {
                            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_GET_SUPPORTED_CAMERA_OUTPUT_CAPABILITY_CALLBACK_0102 videoProfilesArray == null || undefined")
                            expect().assertFail();
                        } 

                        let metadataObjectTypesArray = cameraOutputCap.supportedMetadataObjectTypes;
                        if (isEmpty(metadataObjectTypesArray)) {
                            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_GET_SUPPORTED_CAMERA_OUTPUT_CAPABILITY_CALLBACK_0102 metadataObjectTypesArray == null || undefined")
                        } 
                    } 
                }
            } else {
                expect(true).assertTrue();
                console.info("Entering SUB_MULTIMEDIA_CAMERA_GET_SUPPORTED_CAMERA_OUTPUT_CAPABILITY_CALLBACK_0102 PASSED camera:" + camerasArray[i].cameraId);
            }
        }
        console.info("Entering SUB_MULTIMEDIA_CAMERA_GET_SUPPORTED_CAMERA_OUTPUT_CAPABILITY_CALLBACK_0102 ends here");
        done();
    })

    /**
      * @tc.number    : SUB_MULTIMEDIA_CAMERA_CREATE_CAPTURE_SESSION_PROMISE_0103
      * @tc.name      : Create CaptureSession instance promise api
      * @tc.desc      : Create Capturesession instance promise api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 2
    */
    it('SUB_MULTIMEDIA_CAMERA_CREATE_CAPTURE_SESSION_PROMISE_0103', 2, async function (done) {
        console.info("--------------SUB_MULTIMEDIA_CAMERA_CREATE_CAPTURE_SESSION_PROMISE_0103--------------");
        let camerasArray = mCameraManager.getSupportedCameras();
        if (camerasArray != null && camerasArray.length > 0) {
            for (let i = 0; i < camerasArray.length; i++) {
                console.info(TAG + "SUB_MULTIMEDIA_CAMERA_CREATE_CAPTURE_SESSION_PROMISE_0103 getSupportedCameras is: " + camerasArray.length);
                let cameraModesArray = mModeManager.getSupportedModes(camerasArray[i]);
                if (cameraModesArray != null && cameraModesArray.length > 0) {
                    let captureSessionPromise = mModeManager.createCaptureSession(cameraModesArray[0]);
                    if (isEmpty(captureSessionPromise)) {
                        console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_CREATE_CAPTURE_SESSION_PROMISE_0103 captureSessionPromise == null || undefined")
                        expect().assertFail();
                    } else {
                        expect(true).assertTrue();
                        console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_CREATE_CAPTURE_SESSION_PROMISE_0103 PASSED");
                        await captureSessionPromise.release();
                    }
                } else {
                    expect(true).assertTrue();
                    console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_CREATE_CAPTURE_SESSION_PROMISE_0103 PASSED with don't supportted getSupportedModes");
                    done();
                }
            }
        } else {
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_CREATE_CAPTURE_SESSION_PROMISE_0103 failed with don't have cameras");
            expect().assertFail(); 
        }
    })

})
}