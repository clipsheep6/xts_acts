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

import cameraObj from '@ohos.multimedia.camera';
import bundle from '@ohos.bundle'
import abilityAccessCtrl from '@ohos.abilityAccessCtrl'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';

const TAG = "CameraManagerSuteTest: ";

// Define global variables
let mCameraManager;
let count = 0;


export default function cameraManagerSuteTest(surfaceId: any) {


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

    async function getCameraManagerInstance() {
        console.info('Enter getCameraManagerInstance');
        mCameraManager = await cameraObj.getCameraManager(null);
        if (isEmpty(mCameraManager)) {
            console.info(TAG + "getCameraManager FAILED");
            return false;
        }
        await sleep(500);
        console.info('Exit getCameraManagerInstance');
        return true;
    }



    async function applyPermission() {
        let appInfo = await bundle.getApplicationInfo('com.open.harmony.multimedia.cameratest', 0, 100);
        let atManager = abilityAccessCtrl.createAtManager();
        if (atManager != null) {
            let tokenID = appInfo.accessTokenId;
            console.info('[permission] case accessTokenID is ' + tokenID);
            let permissionName1 = 'ohos.permission.CAMERA';
            let permissionName2 = 'ohos.permission.MICROPHONE';
            let permissionName3 = 'ohos.permission.MEDIA_LOCATION';
            let permissionName4 = 'ohos.permission.READ_MEDIA';
            let permissionName5 = 'ohos.permission.WRITE_MEDIA';
            let permissionName6 = 'ohos.permission.START_ABILITIES_FROM_BACKGROUND';
            let permissionName7 = 'ohos.permission.START_INVISIBLE_ABILITY';
            let permissionName8 = 'ohos.permission.ABILITY_BACKGROUND_COMMUNICATION';
            await atManager.grantUserGrantedPermission(tokenID, permissionName1, 1).then((result) => {
                console.info('[permission] case grantUserGrantedPermission success :' + result);
            }).catch((err) => {
                console.info('[permission] case grantUserGrantedPermission failed :' + err);
            });
            await atManager.grantUserGrantedPermission(tokenID, permissionName2, 1).then((result) => {
                console.info('[permission] case grantUserGrantedPermission success :' + result);
            }).catch((err) => {
                console.info('[permission] case grantUserGrantedPermission failed :' + err);
            });
            await atManager.grantUserGrantedPermission(tokenID, permissionName3, 1).then((result) => {
                console.info('[permission] case grantUserGrantedPermission success :' + result);
            }).catch((err) => {
                console.info('[permission] case grantUserGrantedPermission failed :' + err);
            });
            await atManager.grantUserGrantedPermission(tokenID, permissionName4, 1).then((result) => {
                console.info('[permission] case grantUserGrantedPermission success :' + result);
            }).catch((err) => {
                console.info('[permission] case grantUserGrantedPermission failed :' + err);
            });
            await atManager.grantUserGrantedPermission(tokenID, permissionName5, 1).then((result) => {
                console.info('[permission] case grantUserGrantedPermission success :' + result);
            }).catch((err) => {
                console.info('[permission] case grantUserGrantedPermission failed :' + err);
            });
            await atManager.grantUserGrantedPermission(tokenID, permissionName6, 1).then((result) => {
                console.info('[permission] case grantUserGrantedPermission success :' + result);
            }).catch((err) => {
                console.info('[permission] case grantUserGrantedPermission failed :' + err);
            });
            await atManager.grantUserGrantedPermission(tokenID, permissionName7, 1).then((result) => {
                console.info('[permission] case grantUserGrantedPermission success :' + result);
            }).catch((err) => {
                console.info('[permission] case grantUserGrantedPermission failed :' + err);
            });
            await atManager.grantUserGrantedPermission(tokenID, permissionName8, 1).then((result) => {
                console.info('[permission] case grantUserGrantedPermission success :' + result);
            }).catch((err) => {
                console.info('[permission] case grantUserGrantedPermission failed :' + err);
            });
        } else {
            console.info('[permission] case apply permission failed, createAtManager failed');
        }
    }

    describe('CameraManagerSuteTest', function () {
        console.info(TAG + '----------CameraManagerTest--------------')

        beforeAll(async function () {
            await applyPermission();
            await getCameraManagerInstance();
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
            sleep(1000);
            console.info('afterAll case');
        })


        /**
         * @tc.number    : SUB_MULTIMEDIA_CAMERA_CAMERA_MUTE_CALLBACK_0100
         * @tc.name      : camera mute callback on CameraManager async api
         * @tc.desc      : camera mute callback on CameraManager async api
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_CAMERA_CAMERA_MUTE_CALLBACK_0100', 2, async function (done) {
            if (isEmpty(mCameraManager)) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_CAMERA_MUTE_CALLBACK_0100 cameraManager == null || undefined")
                expect().assertFail();
            } else {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_CAMERA_MUTE_CALLBACK_0100 to operate")
                mCameraManager.on('cameraMute', async (data) => {
                    count++;
                    console.info("mute state: " + data);
                    await sleep(1000);
                    done();
                })
            }
            await sleep(1000);
            done();
        })


        /**
          * @tc.number    : SUB_MULTIMEDIA_CAMERA_IS_CAMERA_MUTED_0100
          * @tc.name      : Get camera mute 
          * @tc.desc      : Get camera mute
          * @tc.size      : MEDIUM
          * @tc.type      : Function
          * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_CAMERA_IS_CAMERA_MUTED_0100', 2, async function (done) {
            console.info("--------------SUB_MULTIMEDIA_CAMERA_IS_CAMERA_MUTED_0100--------------");
            if (isEmpty(mCameraManager)) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_IS_CAMERA_MUTED_0100 cameraManager == null || undefined")
                expect().assertFail();
            }
            let isCameraMuted = mCameraManager.isCameraMuted();
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_IS_CAMERA_MUTED_0100 isCameraMuted : " + isCameraMuted);
            await sleep(1000);
            done();
        })


        /**
          * @tc.number    : SUB_MULTIMEDIA_CAMERA_IS_CAMERA_MUTE_SUPPORTED_0100
          * @tc.name      : Get the support of camera mute 
          * @tc.desc      : Get the support of camera mute 
          * @tc.size      : MEDIUM
          * @tc.type      : Function
          * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_CAMERA_IS_CAMERA_MUTE_SUPPORTED_0100', 2, async function (done) {
            console.info("--------------SUB_MULTIMEDIA_CAMERA_IS_CAMERA_MUTE_SUPPORTED_0100--------------");
            if (isEmpty(mCameraManager)) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_IS_CAMERA_MUTE_SUPPORTED_0100 cameraManager == null || undefined")
                expect().assertFail();
            }
            let isCameraMuteSupported = mCameraManager.isCameraMuteSupported();
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_IS_CAMERA_MUTE_SUPPORTED_0100 isCameraMuteSupported : " + isCameraMuteSupported);
            await sleep(1000);
            done();
        })


        /**
          * @tc.number    : SUB_MULTIMEDIA_CAMERA_MUTE_CAMERA_0100
          * @tc.name      : mute camera
          * @tc.desc      : mute camera 
          * @tc.size      : MEDIUM
          * @tc.type      : Function
          * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_CAMERA_MUTE_CAMERA_0100', 2, async function (done) {
            console.info("--------------SUB_MULTIMEDIA_CAMERA_MUTE_CAMERA_0100--------------");
            if (isEmpty(mCameraManager)) {
                console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_MUTE_CAMERA_0100 cameraManager == null || undefined")
                expect().assertFail();
            }
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_MUTE_CAMERA_0100 muteCamera true");
            mCameraManager.muteCamera(true);
            console.log("count: " + count)
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_MUTE_CAMERA_0100 mute status: " + mCameraManager.isCameraMuted());
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_MUTE_CAMERA_0100 muteCamera false");
            mCameraManager.muteCamera(false);
            console.log("count: " + count)
            console.info(TAG + "Entering SUB_MULTIMEDIA_CAMERA_MUTE_CAMERA_0100 mute status: " + mCameraManager.isCameraMuted());
            await sleep(1000);
            done();
        })

    })
}