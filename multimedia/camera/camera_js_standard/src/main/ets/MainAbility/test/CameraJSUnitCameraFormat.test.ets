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
import image from '@ohos.multimedia.image';
import fileio from '@ohos.fileio';
import abilityAccessCtrl from '@ohos.abilityAccessCtrl'
import bundle from '@ohos.bundle'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index';

const TAG = "CameraModuleTest: ";

// Define global variables

let cameraManager;
var surfaceId1;
let camerasArray;
let supportedCamerasArray;

export default function cameraJSUnitCameraFormat(surfaceId: any) {

  async function getImageReceiverSurfaceId() {
    console.log(TAG + 'Entering create Image receiver')
    var receiver = image.createImageReceiver(640, 480, 4, 8)
    console.log(TAG + 'before receiver check')
    if (receiver !== undefined) {
      console.log(TAG + 'Receiver is ok')
      surfaceId1 = await receiver.getReceivingSurfaceId()
      console.log(TAG + 'Received id: ' + JSON.stringify(surfaceId1))
    } else {
      console.log(TAG + 'Receiver is not ok')
    }
  }

  function sleep(ms) {
    console.info(TAG + "Entering sleep -> Promise constructor");
    return new Promise(resolve => setTimeout(resolve, ms));
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
    } else {
      console.info('[permission] case apply permission failed, createAtManager failed');
    }
  }

  function getSupportedCameras() {
    supportedCamerasArray = await cameraManager.getCameras();
    console.info(TAG + "get supported cameras: " + JSON.stringify(supportedCamerasArray));
    if (supportedCamerasArray != null && supportedCamerasArray.length > 0) {
      expect(true).assertTrue();
      console.info(TAG + "get supported cameras PASSED");
    } else {
      expect().assertFail();
      console.info(TAG + "get supported cameras FAILED");
    }
  }

  function isEmpty(data) {
    if (data == null || data == undefined) {
      return true;
    }
    return false;
  }

  describe('CameraJsUnitCameraFormat', function () {
    console.info(TAG + '----------CameraJsUnitCameraFormat--------------')

    beforeAll(async function () {
      await applyPermission();
      getSupportedCameras();
      console.info('beforeAll case');
    })

    beforeEach(function () {
      sleep(10000);
      console.info('beforeEach case');
    })

    afterEach(async function () {
      console.info('afterEach case');
    })

    afterAll(function () {
      console.info('afterAll case');
    })

    /**
      * @tc.number    : GET_CAMERA_MANAGER_TC_001
      * @tc.name      : Create camera manager instance async api
      * @tc.desc      : Create camera manager instance async api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('CF_GET_CAMERA_MANAGER_TC_001', 0, async function (done) {
      console.info("--------------GET_CAMERA_MANAGER_TC_001--------------");
      cameraObj.getCameraManager(null, async (err, data) => {
        if (!err) {
          console.info(TAG + "Entering GET_CAMERA_MANAGER_TC_001 success");
          if (data != null || data != undefined) {
            console.info(TAG + "Entering GET_CAMERA_MANAGER_TC_001 data is not null || undefined");
            cameraManager = data;
            expect(true).assertTrue();
            console.info(TAG + "Entering GET_CAMERA_MANAGER_TC_001 PASSED");
          }
        } else {
          expect().assertFail();
          console.info(TAG + "Entering GET_CAMERA_MANAGER_TC_001 FAILED: " + err.message);
        }
        console.info(TAG + "Entering GET_CAMERA_MANAGER_TC_001 ends here");
        await sleep(1000);
        done();
      })
      await sleep(1000);
      done();
    })

    /**
      * @tc.number    : GET_CAMERA_MANAGER_PROMISE_TC_002
      * @tc.name      : Create camera manager instance promise api
      * @tc.desc      : Create camera manager instance promise api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('CF_GET_CAMERA_MANAGER_PROMISE_TC_002', 0, async function (done) {
      console.info("--------------GET_CAMERA_MANAGER_PROMISE_TC_002--------------");
      var cameraManagerPromise = await cameraObj.getCameraManager(null);
      console.info(TAG + "Entering GET_CAMERA_MANAGER_PROMISE_TC_002 cameraManagerPromise: " + JSON.stringify(cameraManagerPromise));
      if (cameraManagerPromise != null && cameraManagerPromise != undefined) {
        expect(true).assertTrue();
        console.info(TAG + "Entering GET_CAMERA_MANAGER_PROMISE_TC_002 PASSED");
      } else {
        expect().assertFail();
        console.info(TAG + "Entering GET_CAMERA_MANAGER_PROMISE_TC_002 FAILED");
      }
      console.info(TAG + "Entering GET_CAMERA_MANAGER_PROMISE_TC_002 ends here");
      await sleep(1000);
      done();
    })

    /**
      * @tc.number    : GET_CAMERAS_TC_003
      * @tc.name      : Get camera from cameramanager to get array of camera async api
      * @tc.desc      : Get camera from cameramanager to get array of camera async api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('CF_GET_CAMERAS_TC_003', 0, async function (done) {
      console.info("--------------GET_CAMERAS_TC_003--------------");
      cameraManager.getCameras(async (err, data) => {
        if (!err) {
          console.info(TAG + "Entering GET_CAMERAS_TC_003 success");
          if (data != null || data != undefined) {
            console.info(TAG + "Entering GET_CAMERAS_TC_003 data is not null || undefined");
            camerasArray = data;
            if (camerasArray != null && camerasArray.length > 0) {
              for (var i = 0; i < camerasArray.length; i++) {
                // Get the variables from camera object
                var cameraId = camerasArray[i].cameraId;
                console.info(TAG + "Entering GET_CAMERAS_TC_003 camera" + i + "Id: " + cameraId);
                var cameraPosition = camerasArray[i].cameraPosition;
                console.info(TAG + "Entering GET_CAMERAS_TC_003 camera" + i + "Position: " + cameraPosition);
                var cameraType = camerasArray[i].cameraType;
                console.info(TAG + "Entering GET_CAMERAS_TC_003 camera" + i + "Type: " + cameraType);
                var connectionType = camerasArray[i].connectionType
                console.info(TAG + "Entering GET_CAMERAS_TC_003 connection" + i + "Type: " + connectionType);
              }
              expect(true).assertTrue();
              console.info(TAG + "Entering GET_CAMERAS_TC_003 PASSED");
            } else {
              expect().assertFail();
              console.info(TAG + "Entering GET_CAMERAS_TC_003 FAILED cameraArray is null || undefined");
            }
          }
        } else {
          expect().assertFail();
          console.info(TAG + "Entering GET_CAMERAS_TC_003 FAILED: " + err.message);
        }
        console.info(TAG + "Entering GET_CAMERAS_TC_003 ends here");
        await sleep(1000);
        done();
      })
      await sleep(1000);
      done();
    })

    /**
      * @tc.number    : GET_CAMERAS_PROMISE_TC_004
      * @tc.name      : Get camera from cameramanager to get array of camera promise api
      * @tc.desc      : Get camera from cameramanager to get array of camera promise api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('CF_GET_CAMERAS_PROMISE_TC_004', 0, async function (done) {
      console.info("--------------GET_CAMERAS_PROMISE_TC_004--------------");
      var camerasArrayPromise = await cameraManager.getCameras();
      console.info(TAG + "Entering GET_CAMERAS_PROMISE_TC_004: " + JSON.stringify(camerasArrayPromise));
      if (camerasArrayPromise != null && camerasArrayPromise.length > 0) {
        console.info(TAG + "Entering GET_CAMERAS_PROMISE_TC_004 success");
        for (var i = 0; i < camerasArrayPromise.length; i++) {
          // Get the variables from camera object
          var cameraId = camerasArrayPromise[i].cameraId;
          console.info(TAG + "Entering GET_CAMERAS_PROMISE_TC_004 camera" + i + "Id: " + cameraId);
          var cameraPosition = camerasArrayPromise[i].cameraPosition;
          console.info(TAG + "Entering GET_CAMERAS_PROMISE_TC_004 camera" + i + "Position: " + cameraPosition);
          var cameraType = camerasArrayPromise[i].cameraType;
          console.info(TAG + "Entering GET_CAMERAS_PROMISE_TC_004 camera" + i + "Type: " + cameraType);
          var connectionType = camerasArrayPromise[i].connectionType
          console.info(TAG + "Entering GET_CAMERAS_PROMISE_TC_004 connection" + i + "Type: " + connectionType);
        }
        expect(true).assertTrue();
        console.info(TAG + "Entering GET_CAMERAS_PROMISE_TC_004 PASSED");
      } else {
        expect().assertFail();
        console.info(TAG + "Entering GET_CAMERAS_PROMISE_TC_004 FAILED");
      }
      console.info(TAG + "Entering GET_CAMERAS_PROMISE_TC_004 ends here");
      await sleep(1000);
      done();
    })

    /*CAMERA-0 Scripts*/
    /**
      * @tc.number    : CREATE_CAMERA_INPUT_TC_005
      * @tc.name      : Create camerainput from camera-0 cameraId async api
      * @tc.desc      : Create camerainput from camera-0 cameraId async api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('CF_CREATE_CAMERA_INPUT_TC_005', 0, async function (done) {
      console.info("--------------CAMERA-0 STARTS HERE--------------");
      console.info("--------------CREATE_CAMERA_INPUT_TC_005--------------");
      for (var i = 0; i < supportedCamerasArray.length; i++) {
        cameraManager.createCameraInput(supportedCamerasArray[i].cameraId, async (err, data) => {
          if (!err) {
            expect(isEmpty(data)).assertFalse();
            console.info(TAG + "Entering CREATE_CAMERA_INPUT_TC_005 PASSED with CameraID :" + camerasArray[0].cameraId);
          } else {
            expect().assertFail();
            console.info(TAG + "Entering CREATE_CAMERA_INPUT_TC_005 FAILED: " + err.message);
          }
          console.info(TAG + "Entering CREATE_CAMERA_INPUT_TC_005 ends here");
          await sleep(100);
        })
      }
      await sleep(1000);
      done();
    })

    /**
      * @tc.number    : CREATE_CAMERA_INPUT_PROMISE_TC_006
      * @tc.name      : Create camerainput from camera-0 cameraId promise api
      * @tc.desc      : Create camerainput from camera-0 cameraId promise api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('CF_CREATE_CAMERA_INPUT_PROMISE_TC_006', 0, async function (done) {
      console.info("--------------CREATE_CAMERA_INPUT_PROMISE_TC_006--------------");
      for (var i = 0; i < supportedCamerasArray.length; i++) {
        let cameraInput = await cameraManager.createCameraInput(supportedCamerasArray[i].cameraId);
        expect(isEmpty(cameraInput)).assertFalse();
        await sleep(100);
      }
      console.info(TAG + "Entering CREATE_CAMERA_INPUT_PROMISE_TC_006 PASSED");
      await sleep(1000);
      done();
    })

    /**
      * @tc.number    : GET_CAMERA_ID_TC_007
      * @tc.name      : get camera if from camera-0 input async api
      * @tc.desc      : get camera if from camera-0 input async api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('CF_GET_CAMERA_ID_TC_007', 0, async function (done) {
      for (var i = 0; i < supportedCamerasArray.length; i++) {
        let cameraInput = await cameraManager.createCameraInput(supportedCamerasArray[i].cameraId);
        expect(isEmpty(cameraInput)).assertFalse();
        cameraInput.getCameraId(async (err, data) => {
          if (!err) {
            expect(isEmpty(data)).assertFalse();
            console.info(TAG + "Entering GET_CAMERA_ID_TC_007 PASSED with CameraID :" + data);
          } else {
            expect().assertFail();
            console.info(TAG + "Entering GET_CAMERA_ID_TC_007 FAILED: " + err.message);
          }
        })
        await sleep(100);
      }
      console.info(TAG + "Entering GET_CAMERA_ID_TC_007 ends here");
      await sleep(1000);
      done();
    })

    /**
      * @tc.number    : GET_CAMERA_ID_PROMISE_TC_008
      * @tc.name      : get camera if from camera-0 input promise api
      * @tc.desc      : get camera if from camera-0 input promise api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('CF_GET_CAMERA_ID_PROMISE_TC_008', 0, async function (done) {
      for (var i = 0; i < supportedCamerasArray.length; i++) {
        let cameraInput = await cameraManager.createCameraInput(supportedCamerasArray[i].cameraId);
        expect(isEmpty(cameraInput)).assertFalse();

        let cameraIdPromise = await cameraInputPromise.getCameraId();
        console.info(TAG + "Entering GET_CAMERA_ID_PROMISE_TC_008 cameraIdPromise: " + JSON.stringify(cameraIdPromise));
        expect(isEmpty(cameraIdPromise)).assertFalse();
        console.info(TAG + "Entering GET_CAMERA_ID_PROMISE_TC_008 PASSED" + cameraIdPromise);
        await sleep(100);
      }
      console.info(TAG + "Entering GET_CAMERA_ID_PROMISE_TC_008 ends here");
      await sleep(1000);
      done();
    })

    /*GET_SUPPORTED_PREVIEW_PHOTO_FORMATS_SIZE_TC*/
    /**
      * @tc.number    : GET_SUPPORTED_PREVIEW_FORMATS_TC_011
      * @tc.name      : Get supported preview formats from camera-0 camerainput async api
      * @tc.desc      : Get supported preview formats from camera-0 camerainput async api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('CF_GET_SUPPORTED_PREVIEW_FORMATS_TC_011', 0, async function (done) {
      console.info("--------------GET_SUPPORTED_PREVIEW_FORMATS_TC_011--------------");
      for (var i = 0; i < supportedCamerasArray.length; i++) {
        let cameraInput = await cameraManager.createCameraInput(supportedCamerasArray[i].cameraId);
        expect(isEmpty(cameraInput)).assertFalse();

        cameraInput.getSupportedPreviewFormats(async (err, data) => {
          if (!err) {
            console.info(TAG + "Entering GET_SUPPORTED_PREVIEW_FORMATS_TC_011 success");
            if (data != null && data.length > 0) {
              console.info(TAG + "Entering GET_SUPPORTED_PREVIEW_FORMATS_TC_011 data is not null || undefined");
              for (var i = 0; i < data.length; i++) {
                console.info(TAG + "Entering GET_SUPPORTED_PREVIEW_FORMATS_TC_011 cameraFormat: " + data[i]);
                expect(data[i]).assertEqual(1003);
                console.info(TAG + "Entering GET_SUPPORTED_PREVIEW_FORMATS_TC_011 PASSED");
              }
            }
          } else {
            console.info(TAG + "Entering GET_SUPPORTED_PREVIEW_FORMATS_TC_011 FAILED: " + err.message);
            expect().assertFail();
          }
        })
        await sleep(100);
      }
      await sleep(1000);
      done();
    })

    /**
      * @tc.number    : GET_SUPPORTED_PREVIEW_FORMATS_PROMISE_TC_012
      * @tc.name      : Get supported preview formats from camera-0 camerainput promise api
      * @tc.desc      : Get supported preview formats from camera-0 camerainput promise api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('CF_GET_SUPPORTED_PREVIEW_FORMATS_PROMISE_TC_012', 0, async function (done) {
      console.info("--------------GET_SUPPORTED_PREVIEW_FORMATS_PROMISE_TC_012--------------");
      for (var i = 0; i < supportedCamerasArray.length; i++) {
        let cameraInput = await cameraManager.createCameraInput(supportedCamerasArray[i].cameraId);
        expect(isEmpty(cameraInput)).assertFalse();

        let camFormatPromise = await cameraInput.getSupportedPreviewFormats();
        console.info("CameraModuleTest: Entering GET_SUPPORTED_PREVIEW_FORMATS_PROMISE_TC_012: " + JSON.stringify(camFormatPromise));
        if (camFormatPromise != null && camFormatPromise.length > 0) {
          console.info("CameraModuleTest: Entering GET_SUPPORTED_PREVIEW_FORMATS_PROMISE_TC_012 is not null || undefined");
          for (var i = 0; i < camFormatPromise.length; i++) {
            console.info(TAG + "Entering GET_SUPPORTED_PREVIEW_FORMATS_PROMISE_TC_012 camFormatPromise: " + camFormatPromise[i]);
            expect(camFormatPromise[i]).assertEqual(1003);
            console.info("CameraModuleTest: Entering GET_SUPPORTED_PREVIEW_FORMATS_PROMISE_TC_012 PASSED");
          }
        }
        await sleep(100);
      }
      console.info("CameraModuleTest: Entering GET_SUPPORTED_PREVIEW_FORMATS_PROMISE_TC_012 ends here");
      await sleep(1000);
      done();
    })

    /**
      * @tc.number    : GET_SUPPORTED_VIDEO_FORMATS_TC_013
      * @tc.name      : Get supported video formats from camera-0 camerainput async api
      * @tc.desc      : Get supported video formats from camera-0 camerainput async api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('CF_GET_SUPPORTED_VIDEO_FORMATS_TC_013', 0, async function (done) {
      console.info("--------------GET_SUPPORTED_VIDEO_FORMATS_TC_013--------------");
      for (var i = 0; i < supportedCamerasArray.length; i++) {
        let cameraInput = await cameraManager.createCameraInput(supportedCamerasArray[i].cameraId);
        expect(isEmpty(cameraInput)).assertFalse();
        cameraInput.getSupportedVideoFormats(async (err, data) => {
          if (!err) {
            console.info(TAG + "Entering GET_SUPPORTED_VIDEO_FORMATS_TC_013 success");
            if (data != null && data.length > 0) {
              console.info(TAG + "Entering GET_SUPPORTED_VIDEO_FORMATS_TC_013 data is not null || undefined");
              for (var i = 0; i < data.length; i++) {
                console.info(TAG + "Entering GET_SUPPORTED_VIDEO_FORMATS_TC_013 cameraFormat: " + data[i]);
                expect(data[i]).assertEqual(1003);
                console.info(TAG + "Entering GET_SUPPORTED_VIDEO_FORMATS_TC_013 PASSED");
              }
            }
          } else {
            console.info(TAG + "Entering GET_SUPPORTED_VIDEO_FORMATS_TC_013 FAILED: " + err.message);
            expect().assertFail();
          }
        })
        await sleep(100);
      }
      console.info(TAG + "Entering GET_SUPPORTED_VIDEO_FORMATS_TC_013 ends here");
      await sleep(1000);
      done();
    })

    /**
      * @tc.number    : GET_SUPPORTED_VIDEO_FORMATS_PROMISE_TC_014
      * @tc.name      : Get supported video formats from camera-0 camerainput promise api
      * @tc.desc      : Get supported video formats from camera-0 camerainput promise api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('CF_GET_SUPPORTED_VIDEO_FORMATS_PROMISE_TC_014', 0, async function (done) {
      console.info("--------------GET_SUPPORTED_VIDEO_FORMATS_PROMISE_TC_014--------------");
      for (var i = 0; i < supportedCamerasArray.length; i++) {
        let cameraInput = await cameraManager.createCameraInput(supportedCamerasArray[i].cameraId);
        expect(isEmpty(cameraInput)).assertFalse();

        var camFormatPromise = await cameraInput.getSupportedVideoFormats();
        console.info("CameraModuleTest: Entering GET_SUPPORTED_VIDEO_FORMATS_PROMISE_TC_014: " + JSON.stringify(camFormatPromise));
        if (camFormatPromise != null && camFormatPromise.length > 0) {
          console.info("CameraModuleTest: Entering GET_SUPPORTED_VIDEO_FORMATS_PROMISE_TC_014 is not null || undefined");
          for (var i = 0; i < camFormatPromise.length; i++) {
            console.info(TAG + "Entering GET_SUPPORTED_VIDEO_FORMATS_PROMISE_TC_014 camFormatPromise: " + camFormatPromise[i]);
            expect(camFormatPromise[i]).assertEqual(1003);
            console.info("CameraModuleTest: Entering GET_SUPPORTED_VIDEO_FORMATS_PROMISE_TC_014 PASSED");
          }
        }
        await sleep(100);
      }
      console.info("CameraModuleTest: Entering GET_SUPPORTED_VIDEO_FORMATS_PROMISE_TC_014 ends here");
      await sleep(1000);
      done();
    })

    /**
      * @tc.number    : GET_SUPPORTED_PHOTO_FORMATS_TC_017
      * @tc.name      : Get supported photo format from camera-0 camerainput async api
      * @tc.desc      : Get supported photo format from camera-0 camerainput async api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('CF_GET_SUPPORTED_PHOTO_FORMATS_TC_017', 0, async function (done) {
      console.info("--------------GET_SUPPORTED_PHOTO_FORMATS_TC_017--------------");
      for (var i = 0; i < supportedCamerasArray.length; i++) {
        let cameraInput = await cameraManager.createCameraInput(supportedCamerasArray[i].cameraId);
        expect(isEmpty(cameraInput)).assertFalse();

        cameraInput.getSupportedPhotoFormats(async (err, data) => {
          if (!err) {
            console.info(TAG + "Entering GET_SUPPORTED_PHOTO_FORMATS_TC_017 success");
            if (data != null || data != undefined) {
              console.info(TAG + "Entering GET_SUPPORTED_PHOTO_FORMATS_TC_017 data is not null || undefined");
              for (var i = 0; i < data.length; i++) {
                console.info(TAG + "Entering GET_SUPPORTED_PHOTO_FORMATS_TC_017 cameraFormat: " + data[i]);
                expect(data[i]).assertEqual(2000);
                console.info(TAG + "Entering GET_SUPPORTED_PHOTO_FORMATS_TC_017 PASSED");
              }
            }
          } else {
            console.info(TAG + "Entering GET_SUPPORTED_PHOTO_FORMATS_TC_017 FAILED: " + err.message);
            expect().assertFail();
          }
          await sleep(100);
        })
      }
      console.info(TAG + "Entering GET_SUPPORTED_PHOTO_FORMATS_TC_017 ends here");
      await sleep(1000);
      done();
    })

    /**
      * @tc.number    : GET_SUPPORTED_PHOTO_FORMATS_PROMISE_TC_018
      * @tc.name      : Get supported photo format from camera-0 camerainput promise api
      * @tc.desc      : Get supported photo format from camera-0 camerainput promise api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('CF_GET_SUPPORTED_PHOTO_FORMATS_PROMISE_TC_018', 0, async function (done) {
      console.info("--------------GET_SUPPORTED_PHOTO_FORMATS_PROMISE_TC_018--------------");
      for (var i = 0; i < supportedCamerasArray.length; i++) {
        let cameraInput = await cameraManager.createCameraInput(supportedCamerasArray[i].cameraId);
        expect(isEmpty(cameraInput)).assertFalse();

        let camFormatPromise = await cameraInput.getSupportedPhotoFormats();
        console.info(TAG + "Entering GET_SUPPORTED_PHOTO_FORMATS_PROMISE_TC_018: " + JSON.stringify(camFormatPromise));
        if (camFormatPromise != null && camFormatPromise.length > 0) {
          console.info(TAG + "Entering GET_SUPPORTED_PHOTO_FORMATS_PROMISE_TC_018 is not null || undefined");
          for (var i = 0; i < camFormatPromise.length; i++) {
            console.info(TAG + "Entering GET_SUPPORTED_PHOTO_FORMATS_PROMISE_TC_018 camFormatPromise: " + camFormatPromise[i]);
            expect(camFormatPromise[i]).assertEqual(2000);
            console.info(TAG + "Entering GET_SUPPORTED_PHOTO_FORMATS_PROMISE_TC_018 PASSED");
          }
        } else {
          console.info(TAG + "Entering GET_SUPPORTED_PHOTO_FORMATS_PROMISE_TC_018 FAILED");
          expect().assertFail();
        }
        await sleep(100);
      }
      console.info(TAG + "Entering GET_SUPPORTED_PHOTO_FORMATS_PROMISE_TC_018 ends here");
      await sleep(1000);
      done();
    })

    /*CREATE CAMERAINPUT WITH POSITION FRONT & TYPE UNSPECIFIED*/
    /**
      * @tc.number    : CREATE_CAMERA_INPUT_POS_FRONT_TYPE_UNSPECIFIED_TC_031
      * @tc.name      : Create camerainput from camera-0 cameraposition front & cameratype unspecified async api
      * @tc.desc      : Create camerainput from camera-0 cameraposition front & cameratype unspecified async api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('CF_CREATE_CAMERA_INPUT_POS_FRONT_TYPE_UNSPECIFIED_TC_031', 0, async function (done) {
      console.info("--------------CREATE_CAMERA_INPUT_POS_FRONT_TYPE_UNSPECIFIED_TC_031--------------");
      for (var i = 0; i < supportedCamerasArray.length; i++) {
        cameraManager.createCameraInput(supportedCamerasArray[i].cameraPosition, supportedCamerasArray[i].cameraType, async (err, data) => {
          if (!err) {
            console.info(TAG + "Entering CREATE_CAMERA_INPUT_POS_FRONT_TYPE_UNSPECIFIED_TC_031 success");
            expect(isEmpty(data)).assertFalse();
            console.info(TAG + "Entering CREATE_CAMERA_INPUT_POS_FRONT_TYPE_UNSPECIFIED_TC_031 PASSED");
          } else {
            console.info(TAG + "Entering CREATE_CAMERA_INPUT_POS_FRONT_TYPE_UNSPECIFIED_TC_031 FAILED: " + err.message);
            expect().assertFail();
          }
        })
        await sleep(100);
      }
      console.info(TAG + "Entering CREATE_CAMERA_INPUT_POS_FRONT_TYPE_UNSPECIFIED_TC_031 ends here");
      await sleep(1000);
      done();
    })

    /**
      * @tc.number    : CREATE_CAMERA_INPUT_POS_FRONT_TYPE_UNSPECIFIED_PROMISE_TC_032
      * @tc.name      : Create camerainput from camera-0 cameraposition front & cameratype unspecified promise api
      * @tc.desc      : Create camerainput from camera-0 cameraposition front & cameratype unspecified promise api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('CF_CREATE_CAMERA_INPUT_POS_FRONT_TYPE_UNSPECIFIED_PROMISE_TC_032', 0, async function (done) {
      console.info("--------------CREATE_CAMERA_INPUT_POS_FRONT_TYPE_UNSPECIFIED_PROMISE_TC_032--------------");
      for (var i = 0; i < supportedCamerasArray.length; i++) {
        cameraInputPos = await cameraManager.createCameraInput(supportedCamerasArray[i].cameraPosition, supportedCamerasArray[i].cameraType);
        console.info(TAG + "Entering CREATE_CAMERA_INPUT_POS_FRONT_TYPE_UNSPECIFIED_PROMISE_TC_032 cameraInputPos: " + JSON.stringify(cameraInputPos));
        expect(isEmpty(cameraInputPos)).assertFalse();
        console.info(TAG + "Entering CREATE_CAMERA_INPUT_POS_FRONT_TYPE_UNSPECIFIED_PROMISE_TC_032 PASSED");
        await sleep(100);
      }

      console.info(TAG + "Entering CREATE_CAMERA_INPUT_POS_FRONT_TYPE_UNSPECIFIED_PROMISE_TC_032 ends here");
      await sleep(1000);
      done();
    })

    /*GET_SUPPORTED_PREVIEW_PHOTO_FORMATS_SIZE_TC*/
    /**
      * @tc.number    : GET_SUPPORTED_PREVIEW_FORMATS_TC_033
      * @tc.name      : Get supported preview formats from camera-0 camerainput async api
      * @tc.desc      : Get supported preview formats from camera-0 camerainput async api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('CF_GET_SUPPORTED_PREVIEW_FORMATS_TC_033', 0, async function (done) {
      console.info("--------------GET_SUPPORTED_PREVIEW_FORMATS_TC_033--------------");
      for (var i = 0; i < supportedCamerasArray.length; i++) {
        let cameraInputPos = await cameraManager.createCameraInput(supportedCamerasArray[i].cameraPosition, supportedCamerasArray[i].cameraType);
        expect(isEmpty(cameraInput)).assertFalse();

        cameraInputPos.getSupportedPreviewFormats(async (err, data) => {
          if (!err) {
            console.info(TAG + "Entering GET_SUPPORTED_PREVIEW_FORMATS_TC_033 success");
            if (data != null || data.length > 0) {
              console.info(TAG + "Entering GET_SUPPORTED_PREVIEW_FORMATS_TC_033 data is not null || undefined");
              for (var i = 0; i < data.length; i++) {
                console.info(TAG + "Entering GET_SUPPORTED_PREVIEW_FORMATS_TC_033 cameraFormat: " + data[i]);
                expect(data[i]).assertEqual(1003);
                console.info(TAG + "Entering GET_SUPPORTED_PREVIEW_FORMATS_TC_033 PASSED");
              }
            }
          } else {
            console.info(TAG + "Entering GET_SUPPORTED_PREVIEW_FORMATS_TC_033 FAILED: " + err.message);
            expect().assertFail();
          }
          
        })
        await sleep(100);
      }
      console.info(TAG + "Entering GET_SUPPORTED_PREVIEW_FORMATS_TC_033 ends here");
      await sleep(1000);
      done();
    })

    /**
      * @tc.number    : GET_SUPPORTED_PREVIEW_FORMATS_PROMISE_TC_034
      * @tc.name      : Get supported preview formats from camera-0 camerainput promise api
      * @tc.desc      : Get supported preview formats from camera-0 camerainput promise api
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('CF_GET_SUPPORTED_PREVIEW_FORMATS_PROMISE_TC_034', 0, async function (done) {
      console.info("--------------GET_SUPPORTED_PREVIEW_FORMATS_PROMISE_TC_034--------------");
      for (var i = 0; i < supportedCamerasArray.length; i++) {
        let cameraInputPos = await cameraManager.createCameraInput(supportedCamerasArray[i].cameraPosition, supportedCamerasArray[i].cameraType);
        expect(isEmpty(cameraInput)).assertFalse();

        let camFormatPromisePos = await cameraInputPos.getSupportedPreviewFormats();
        console.info("CameraModuleTest: Entering GET_SUPPORTED_PREVIEW_FORMATS_PROMISE_TC_034: " + JSON.stringify(camFormatPromisePos));
        if (camFormatPromisePos != null && camFormatPromisePos.length > 0) {
          console.info("CameraModuleTest: Entering GET_SUPPORTED_PREVIEW_FORMATS_PROMISE_TC_034 is not null || undefined");
          for (var i = 0; i < camFormatPromisePos.length; i++) {
            console.info(TAG + "Entering GET_SUPPORTED_PREVIEW_FORMATS_PROMISE_TC_034 camFormatPromisePos: " + camFormatPromisePos[i]);
            expect(camFormatPromisePos[i]).assertEqual(1003);
            console.info("CameraModuleTest: Entering GET_SUPPORTED_PREVIEW_FORMATS_PROMISE_TC_034 PASSED");
          }
        }
        await sleep(100);
      }
      console.info("CameraModuleTest: Entering GET_SUPPORTED_PREVIEW_FORMATS_PROMISE_TC_034 ends here");
      await sleep(1000);
      done();
    })

    it('CF_FOCUSSTATECHANGE_CALLBACK_ON_CAMERAINPUT', 0, async function (done) {
      for (var i = 0; i < supportedCamerasArray.length; i++) {
        let cameraInput = await cameraManager.createCameraInput(supportedCamerasArray[i].cameraPosition, supportedCamerasArray[i].cameraType);
        expect(isEmpty(cameraInput)).assertFalse();

        console.info(TAG + "Entering FOCUSSTATECHANGE_CALLBACK_ON_CAMERAINPUT to operate");
        cameraInput.on("focusStateChange", async (err, data) => {
          if (!err) {
            console.info(TAG + "FocusState callback is success");
            expect(isEmpty(data)).assertFalse();
            console.info(TAG + "Current FocusState is: " + data);
          } else {
            expect().assertFail();
            console.info(TAG + "FOCUSSTATECHANGE_CALLBACK_ON_CAMERAINPUT FAILED: " + err.message);
          }
        })
        await sleep(100);
      }
      await sleep(1000);
      done();
    })


  })
}
