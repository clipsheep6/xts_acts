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
// @ts-nocheck
import cameraObj from '@ohos.multimedia.camera';
import image from '@ohos.multimedia.image';
import media from '@ohos.multimedia.media';
import mediaLibrary from '@ohos.multimedia.mediaLibrary';
import deviceInfo from '@ohos.deviceInfo';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium';

const TAG = "CameraPortraitSessionTest: ";

// Define global letiables
let mCameraManager;
let mModeManager;
let mCameraDevicesArray;
let mCameraMode;
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

let mZoomRatioRangeArray;
let mZoomRatioMaxArray;
let mZoomRatioMinArray;

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
    url: 'file:///data/media/CameraPortraitSession.mp4',
    orientationHint: 0,
    location: { latitude: 30, longitude: 130 },
    maxSize: 100,
    maxDuration: 500
}

let mPicWidthMax = 8192;
let mPicHeightMax = 8192;

export default function cameraPortraitSessionTest() {

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

    async function getPhotoReceiverSurface() {
        console.log(TAG + 'Entering getPhotoReceiverSurface')
        let receiver = image.createImageReceiver(640, 480, 4, 8)
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

    async function getVideoReceiveSurface() {
        console.log(TAG + 'Entering getVideoReceiveSurface')
        await getFd('CameraPortraitSession.mp4');
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

        await sleep(100);
        console.log(TAG + 'Exit releaseVideoReceiveSurface')
    }

    function getCameraManagerInstance() {
        console.info('Enter getCameraManagerInstance');

        mCameraManager = cameraObj.getCameraManager(null);
        if (isEmpty(mCameraManager)) {
            console.info(TAG + "getCameraManager FAILED");
            return false;
        }

        console.info('Exit getCameraManagerInstance');

        return true;
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
    function getCameraSupportDevicesArray() {
        console.info('Enter getCameraSupportDevicesArray');
        
        mCameraDevicesArray = mCameraManager.getSupportedCameras();
        /*
        mCameraManager.getSupportedCameras(async (err, data) => {
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

        mZoomRatioRangeArray = new Array(mCameraNum);
        mZoomRatioMaxArray = new Array(mCameraNum);
        mZoomRatioMinArray = new Array(mCameraNum);

        console.info('Exit getCameraSupportDevicesArray');

        return true;
    }
    function getSupportedModes(idx:any) {
        console.info('Enter getSupportedModes');
        mCameraMode =  mModeManager.getSupportedModes(mCameraDevicesArray[idx]);
        if(isEmpty(mCameraMode)) {
            console.info(TAG + "getModeManager FAILED");
           return false;    
        }
        console.info('Exit getSupportedModes');
        return true;
    }
    function createPortraitSessionInstance() {
        console.info('Enter createPortraitSessionInstance');

        try {
            if (mCameraMode != null && mCameraMode.length > 0) {
                mCameraSession = mModeManager.createCaptureSession(mCameraMode[0]);
            }
        }
        catch {
            console.info('createPortraitSessionInstance FAILED');
        }

        if (isEmpty(mCameraSession)) {
            console.info(TAG + "createPortraitSessionInstance FAILED");
            return false;
        }

        mCameraSession.beginConfig();

        console.info('Exit createPortraitSessionInstance');

        return true;
    }
    async function releaseCameraSessionInstance() {
        await mCameraSession.release();
    }

    async function createInput(idx:any) {
        console.info('Enter createInput');

        if (isEmpty(mCameraDevicesArray)) {
            console.info(TAG + "Entering createInputs FAILED with NoCamera");
            return false;
        }
        
        mCameraInput = mCameraManager.createCameraInput(mCameraDevicesArray[idx]);
        
        if (isEmpty(mCameraInput)) {
            console.info(TAG + "createCameraInput FAILED");
            return false;
        }

        await mCameraInput.open();

        await sleep(100);

        console.info(idx + 'th CameraInput is: ' + mCameraInput);

        console.info('Exit createInput');

        return true;
    }

    async function releaseInput() {
        console.info('Enter releaseInput');

        if (!isEmpty(mCameraInput)) {
            await mCameraInput.close();
        }

        console.info('Exit releaseInput');

        return true;
    }

    async function createOutput(idx:any) {
        console.info('Enter createOutput');

        let cameraOutputCap = await mCameraManager.getSupportedOutputCapability(mCameraDevicesArray[idx]);

        if (!isEmpty(cameraOutputCap)) {
            if (!isEmpty(cameraOutputCap.previewProfiles)) {
                console.info(TAG + "cameraOutputCap.previewProfiles.length: " + cameraOutputCap.previewProfiles.length);      
                for (let i = 0; i < cameraOutputCap.previewProfiles.length; i++) {
                    mPreviewOutput = await mCameraManager.createPreviewOutput(cameraOutputCap.previewProfiles[i], globalThis.surfaceId);
                    if (!isEmpty(mPreviewOutput)) {
                        break;
                    }
                }
    
                if (isEmpty(mPreviewOutput)) {
                    console.info(TAG + "createPreviewOutput FAILED");
                }
    
                console.info(TAG + "createPreviewOutput: " + mPreviewOutput);
            }
    
            if (!isEmpty(cameraOutputCap.photoProfiles)) {
                console.info(TAG + "cameraOutputCap.photoProfiles.length: " + cameraOutputCap.photoProfiles.length);   
                    
                for (let i = 0; i < cameraOutputCap.photoProfiles.length; i++) {
                    mPhotoOutput = await mCameraManager.createPhotoOutput(cameraOutputCap.photoProfiles[i], mPhotoSurface);
                    if (!isEmpty(mPhotoOutput)) {
                        break;
                    }
                }
    
                if (isEmpty(mPhotoOutput)) {
                        console.info(TAG + "createPhotoOutput FAILED");
                }
    
                console.info(TAG + "createPhotoOutput: " + mPhotoOutput);
            }
            /*
            if (!isEmpty(cameraOutputCap.videoProfiles)) {
                console.info(TAG + "cameraOutputCap.videoProfiles.length: " + cameraOutputCap.videoProfiles.length); 
                for (let i = 0; i < cameraOutputCap.videoProfiles.length; i++) {
                    try {
                        mVideoOutput = await mCameraManager.createVideoOutput(cameraOutputCap.videoProfiles[i], mVideoSurface);
                        if (!isEmpty(mVideoOutput)) {
                            break;
                        }
                    }
                    catch {
                        console.info(TAG + "createVideoOutput FAILED");
                    }
                }
    
                if (isEmpty(mVideoOutput)) {
                    console.info(TAG + "createVideoOutput FAILED");
                }
    
                console.info(TAG + "createVideoOutput: " + mVideoOutput);  
            }
            */
        }
        
        console.info('Exit createOutputs');

        return true;
    }

    async function releaseOutput() {
        console.info('Enter releaseOutput');

        if (!isEmpty(mPreviewOutput)) {
            await mPreviewOutput.release();
        }
        
        if (!isEmpty(mPhotoOutput)) {
            await mPhotoOutput.release();
        }
        /*
        if (!isEmpty(mVideoOutput)) {
            await mVideoOutput.stop();
            await mVideoOutput.release();
        }
        */
        console.info('Exit releaseOutput');
        
        return true;
    }

    async function startCameraSession(idx:any) {
        console.info(TAG + "Enter startCameraSession");

        await createInput(idx);
        createOutput(idx);

        console.info(TAG + "Start to addInput");
       

        await sleep(1);

        if (!isEmpty(mCameraInput)) {
            console.info(TAG + "Start to addInput");
            mCameraSession.addInput(mCameraInput);
        }
        
        if (!isEmpty(mPreviewOutput)) {
            console.info(TAG + "Start to addOutput mPreviewOutput");
            mCameraSession.addOutput(mPreviewOutput);
        }
        
        if (!isEmpty(mPhotoOutput)) {
            console.info(TAG + "Start to addOutput mPhotoOutput");
            mCameraSession.addOutput(mPhotoOutput);
        }
        /*
        if (!isEmpty(mVideoOutput)) {
            console.info(TAG + "Start to addOutput mVideoOutput");
            await mCameraSession.addOutput(mVideoOutput);
        }
        */
        await sleep(1);

        await mCameraSession.commitConfig();
        
        console.info(TAG + "Entering startCameraSession start session begin");
        
        /*
        await mCameraSession.start(async (err) => {
            console.info(TAG + "Entering mCameraSession start callback");
            if (!err) {
                console.info(TAG + "Entering mCameraSession start PASSED ");
            } else {
                console.info(TAG + "Entering mCameraSession start FAILED : " + err.message);
            }
        })
        
        await sleep(100);
        */
        console.info(TAG + "Exit startCameraSession");

        return true;
    }

    async function stopCameraSession() {
        console.info(TAG + "Enter stopCameraSession");

        mCameraSession.beginConfig();
        /*
        mCameraSession.stop(async (err) => {
            console.info(TAG + "Entering mCameraSession stop callback");
            if (!err) {
                console.info(TAG + "Entering mCameraSession stop PASSED ");
            } else {
                console.info(TAG + "Entering mCameraSession stop FAILED : " + err.message);
            }
        })

        await sleep(100);
        */

        // await commitCameraSessionConfig();
        if (!isEmpty(mCameraInput)) {
            console.info(TAG + "Start to removeInput input");
            mCameraSession.removeInput(mCameraInput);
        }

        if (!isEmpty(mPreviewOutput)) {
            console.info(TAG + "Start to removeOutput mPreviewOutput");
            mCameraSession.removeOutput(mPreviewOutput);
        }
        
        if (!isEmpty(mPhotoOutput)) {
            console.info(TAG + "Start to removeOutput mPhotoOutput");
            mCameraSession.removeOutput(mPhotoOutput);
        }
        /*
        if (!isEmpty(mVideoOutput)) {
            console.info(TAG + "Start to removeOutput mVideoOutput");
            await mCameraSession.removeOutput(mVideoOutput);
        }
        */

        await releaseInput();
        await releaseOutput();

        console.info(TAG + "Exit stopCameraSession");

        return true;
    }

    describe('CameraPortraitSessionTest', function () {
        console.info(TAG + '----------CameraPortraitSessionTest--------------')

        beforeAll(async function () {
            sleep(100);
            getCameraManagerInstance();
            getModeManagerInstance();
            getCameraSupportDevicesArray();
            createPortraitSessionInstance();
            await getPhotoReceiverSurface();
            await getVideoReceiveSurface();
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
            releaseVideoReceiveSurface();
            releaseCameraSessionInstance();
            sleep(1000);
            console.info('afterAll case');
        })



        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_PORTRAIT_EFFECTS_PROMISE_0100
        * @tc.name      : Check portrait session get portrait effects with promise
        * @tc.desc      : Check portrait session get portrait effects with promise
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_PORTRAIT_EFFECTS_PROMISE_0100', 2, async function (done) {
            console.info("--------------SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_PORTRAIT_EFFECTS_PROMISE_0100--------------");

            if (mCameraNum == 0) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_PORTRAIT_EFFECTS_PROMISE_0100 FAILED with NoCamera");
                expect().assertFail();
                done();
            } else {
                for (let i = 0; i < mCameraNum; i++) {
                    console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_PORTRAIT_EFFECTS_PROMISE_0100 start for camera[" + i + "]");
                    let cameraMode =  mModeManager.getSupportedModes(mCameraDevicesArray[i]);
                    if (cameraMode != null && cameraMode.length > 0) {
                        await startCameraSession(i);
                        let supporttedPortraitEffects = mCameraSession.getSupportedPortraitEffects();
                        console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_PORTRAIT_EFFECTS_PROMISE_0100 continue");
                        if (supporttedPortraitEffects != null && supporttedPortraitEffects.length > 0) {
                            mCameraSession.setPortraitEffect(supporttedPortraitEffects[0]);
                            let portraitEffect = mCameraSession.getPortraitEffect();
                            if (portraitEffect == supporttedPortraitEffects[0]) {
                                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_PORTRAIT_EFFECTS_PROMISE_0100 PASSED with supporttedPortraitEffects length is: " + supporttedPortraitEffects.length);
                            } else {
                                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_PORTRAIT_EFFECTS_PROMISE_0100 PASSED with supporttedPortraitEffects length is: " + supporttedPortraitEffects.length);
                                expect().assertFail();
                            }
                        } else {
                            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_PORTRAIT_EFFECTS_PROMISE_0100 PASSED with don't supportted PortraitEffects");
                        }
                        await stopCameraSession();
                        console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_PORTRAIT_EFFECTS_PROMISE_0100 end for camera[" + i + "]");
                    } else {
                        expect(true).assertTrue();
                        console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_PORTRAIT_EFFECTS_PROMISE_0100 PASSED with don't supportted getSupportedModes");
                    }
                }
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_PORTRAIT_EFFECTS_PROMISE_0100 ends here");
                done();
            }
        })

      /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_FILTERS_PROMISE_0101
        * @tc.name      : Check portrait session get filter types with promise
        * @tc.desc      : Check portrait session get filter types with promise
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_FILTERS_PROMISE_0101', 2, async function (done) {
            console.info("--------------SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_FILTERS_PROMISE_0101--------------");
            if (mCameraNum == 0) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_FILTERS_PROMISE_0101 FAILED with NoCamera");
                expect().assertFail();
                done();
            } else {
                for (let i = 0; i < mCameraNum; i++) {
                    console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_FILTERS_PROMISE_0101 start for camera[" + i + "]");
                    let cameraMode =  mModeManager.getSupportedModes(mCameraDevicesArray[i]);
                    if (cameraMode != null && cameraMode.length > 0) {
                        await startCameraSession(i);
                        console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_FILTERS_PROMISE_0101 continue");
        
                        let supporttedFilterTypes = mCameraSession.getSupportedFilters();
                        console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_FILTERS_PROMISE_0101 finish");
                        if (supporttedFilterTypes != null && supporttedFilterTypes.length > 0) {
                            mCameraSession.setFilter(supporttedFilterTypes[0]);
                            let filterType = mCameraSession.getFilter();
                            if (filterType == supporttedFilterTypes[0]) {
                                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_FILTERS_PROMISE_0101 PASSED with supporttedFilterTypes length is: " + supporttedFilterTypes.length);
                            } else {
                                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_FILTERS_PROMISE_0101 PASSED with supporttedFilterTypes length is: " + supporttedFilterTypes.length);
                                expect().assertFail();                            
                            }
                        } else {
                            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_FILTERS_PROMISE_0101 PASSED with don't supportted PortraitEffects");
                        }
                        await stopCameraSession();
                        console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_FILTERS_PROMISE_0101 end for camera[" + i + "]");
                    }
        
                    console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_FILTERS_PROMISE_0101 ends here");
                    done();
                }
            }
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_FILTERS_PROMISE_0101 ends");
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_BEAUTY_PROMISE_0102
        * @tc.name      : Check portrait session get beauty with promise
        * @tc.desc      : Check portrait session get beauty with promise
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_BEAUTY_PROMISE_0102', 2, async function (done) {
            console.info("--------------SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_BEAUTY_PROMISE_0102--------------");
            if (mCameraNum == 0) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_BEAUTY_PROMISE_0102 FAILED with NoCamera");
                expect().assertFail();
                done();
            } else {
                for (let i = 0; i < mCameraNum; i++) {
                    console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_BEAUTY_PROMISE_0102 start for camera[" + i + "]");
                    let cameraMode =  mModeManager.getSupportedModes(mCameraDevicesArray[i]);
                    if (cameraMode != null && cameraMode.length > 0) {
                        await startCameraSession(i);
                        console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_BEAUTY_PROMISE_0102 continue");
        
                        let supporttedBeautyTypes = mCameraSession.getSupportedBeautyTypes();
                        if (supporttedBeautyTypes != null && supporttedBeautyTypes.length > 0) {
                            let supportedLevel = mCameraSession.getSupportedBeautyRanges(supporttedBeautyTypes[0]);
                            if (supportedLevel.lenght > 0) {
                                mCameraSession.setBeauty(supporttedBeautyTypes[0], supportedLevel[0]);
                                let beautyLevel = mCameraSession.getBeauty(supporttedBeautyTypes[0]);
                                if (beautyLevel == supportedLevel[0]) {
                                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_BEAUTY_PROMISE_0102 PASSED"); 
                                } else {
                                    console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_BEAUTY_PROMISE_0102 FAILED ");
                                    expect().assertFail(); 
                                }
                            }
                        } else {
                            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_BEAUTY_PROMISE_0102 PASSED with don't support beauty");
                        }
                         await stopCameraSession();
                        console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_BEAUTY_PROMISE_0102 end for camera[" + i + "]");
                    }
                    console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_BEAUTY_PROMISE_0102 ends here");
                    done();
                }
            }
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_SESSION_GET_SUPPORTED_BEAUTY_PROMISE_0102 end");
        })
    })
}