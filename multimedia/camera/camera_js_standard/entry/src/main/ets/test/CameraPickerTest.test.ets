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

import cameraObj from '@ohos.multimedia.camera';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium';
import deviceInfo from '@ohos.deviceInfo';
import common from '@ohos.app.ability.common';
const TAG = "CameraPickerTest: ";

// Define global letiables
let mCameraPicker;
let mContext = getContext(this) as common.Context;
let mPhotoProfile: cameraObj.PhotoProfileForPicker = {
    cameraPosition: cameraObj.CameraPosition.CAMERA_POSITION_BACK,
    saveUri: 'camera'
};
let mVideoProfile: cameraObj.VideoProfileForPicker = {
    cameraPosition: cameraObj.CameraPosition.CAMERA_POSITION_BACK,
    saveUri: 'camera'
};
export default function CameraPickerTest() {

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

    function mgetCameraPickerInstance() {
        console.info('Enter mgetCameraPickerInstance');

        mCameraPicker = cameraObj.getCameraPicker(mContext);
        if (isEmpty(mCameraPicker)) {
            console.info(TAG + "getCameraPicker FAILED");
            return false;
        }

        console.info('Exit mgetCameraPickerInstance');

        return true;
    }

    describe('CameraPickerTest', function () {
        console.info(TAG + '----------CameraPickerTest--------------')

        beforeAll(async function () {
            sleep(100);
            mgetCameraPickerInstance();
            console.info('beforeAll case');
        })
    
        beforeEach(function () {
            sleep(1000);
            console.info('beforeEach case');
        })

        afterEach(async function () {
            console.info('afterEach case');
        })

        afterAll(function () {
            sleep(1000);
            console.info('afterAll case');
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_PICKER_TAKE_FRONT_PHOTO_0100
        * @tc.name      : Check camera picker take front photo
        * @tc.desc      : Check camera picker take front photo
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_CAMERA_PICKER_TAKE_FRONT_PHOTO_0100', 2, async function (done) {
            console.info("--------------SUB_MULTIMEDIA_CAMERA_PICKER_TAKE_FRONT_PHOTO_0100--------------");
            if (deviceInfo.deviceType == 'phone'){
                mPhotoProfile.cameraPosition = cameraObj.CameraPosition.CAMERA_POSITION_FRONT;
                mCameraPicker = cameraObj.getCameraPicker(mContext);
                let ret = mCameraPicker.takePhoto(mContext, mPhotoProfile);
                if (ret = 0){
                    console.info(TAG + "SUB_MULTIMEDIA_CAMERA_PICKER_TAKE_FRONT_PHOTO_0100 PASSED");
                    expect(true).assertTrue();
                } else {
                    console.info(TAG + "SUB_MULTIMEDIA_CAMERA_PICKER_TAKE_FRONT_PHOTO_0100 FAILED");
                    expect().assertFail();
                }
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_PICKER_TAKE_FRONT_PHOTO_0100 FAILED with deviceType: " + deviceInfo.deviceType + " don't supportted");
            }
            done();
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_PICKER_RECORD_FRONT_VIDEO_0101
        * @tc.name      : Check camera picker record front Video
        * @tc.desc      : Check camera picker record front Video
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_CAMERA_PICKER_RECORD_FRONT_VIDEO_0101', 2, async function (done) {
            console.info("--------------SUB_MULTIMEDIA_CAMERA_PICKER_RECORD_FRONT_VIDEO_0101--------------");
            if (deviceInfo.deviceType == 'phone'){
                mVideoProfile.cameraPosition = cameraObj.CameraPosition.CAMERA_POSITION_FRONT;
                mCameraPicker = cameraObj.getCameraPicker(mContext);
                let ret = mCameraPicker.recordVideo(mContext, mVideoProfile);
                if (ret = 0){
                    console.info(TAG + "SUB_MULTIMEDIA_CAMERA_PICKER_RECORD_FRONT_VIDEO_0101 PASSED");
                    expect(true).assertTrue();
                } else {
                    console.info(TAG + "SUB_MULTIMEDIA_CAMERA_PICKER_RECORD_FRONT_VIDEO_0101 FAILED");
                    expect().assertFail();
                }
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_PICKER_RECORD_FRONT_VIDEO_0101 FAILED with deviceType: " + deviceInfo.deviceType + " don't supportted");
            }
            done();
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_PICKER_TAKE_BACK_PHOTO_0102
        * @tc.name      : Check camera picker take back photo
        * @tc.desc      : Check camera picker take back photo
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_CAMERA_PICKER_TAKE_BACK_PHOTO_0102', 2, async function (done) {
            console.info("--------------SUB_MULTIMEDIA_CAMERA_PICKER_TAKE_BACK_PHOTO_0102--------------");
            if (deviceInfo.deviceType == 'phone'){
                mPhotoProfile.cameraPosition = cameraObj.CameraPosition.CAMERA_POSITION_BACK;
                mCameraPicker = cameraObj.getCameraPicker(mContext);
                let ret = mCameraPicker.takePhoto(mContext, mPhotoProfile);
                if (ret = 0){
                    console.info(TAG + "SUB_MULTIMEDIA_CAMERA_PICKER_TAKE_BACK_PHOTO_0102 PASSED");
                    expect(true).assertTrue();
                } else {
                    console.info(TAG + "SUB_MULTIMEDIA_CAMERA_PICKER_TAKE_BACK_PHOTO_0102 FAILED");
                    expect().assertFail();
                }
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_PICKER_TAKE_BACK_PHOTO_0102 FAILED with deviceType: " + deviceInfo.deviceType + " don't supportted");
            }
            done();
        })

        /**
        * @tc.number    : SUB_MULTIMEDIA_CAMERA_PICKER_TAKE_BACK_VIDEO_0103
        * @tc.name      : Check camera picker take back video
        * @tc.desc      : Check camera picker take back video
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_CAMERA_PICKER_TAKE_BACK_VIDEO_0103', 2, async function (done) {
            console.info("--------------SUB_MULTIMEDIA_CAMERA_PICKER_TAKE_BACK_VIDEO_0103--------------");
            if (deviceInfo.deviceType == 'phone'){
                mVideoProfile.cameraPosition = cameraObj.CameraPosition.CAMERA_POSITION_BACK;
                mCameraPicker = cameraObj.getCameraPicker(mContext);
                let ret = mCameraPicker.recordVideo(mContext, mVideoProfile);
                if (ret = 0){
                    console.info(TAG + "SUB_MULTIMEDIA_CAMERA_PICKER_TAKE_BACK_VIDEO_0103 PASSED");
                    expect(true).assertTrue();
                } else {
                    console.info(TAG + "SUB_MULTIMEDIA_CAMERA_PICKER_TAKE_BACK_VIDEO_0103 FAILED");
                    expect().assertFail();
                }
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_PICKER_TAKE_BACK_VIDEO_0103 FAILED with deviceType: " + deviceInfo.deviceType + " don't supportted");
            }
            done();
        })
    })
}