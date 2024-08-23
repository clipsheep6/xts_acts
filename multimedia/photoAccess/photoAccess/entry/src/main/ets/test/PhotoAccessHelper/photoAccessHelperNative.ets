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

import { describe, it, expect, beforeAll} from '@ohos/hypium'
import photoAccessHelper from '@ohos.file.photoAccessHelper'
import mediaLibrary from "libphotoAccessHelperTest.so";
import {
  photoKeys,
  getPermission,
  photoFetchOption,
  getFileAsset,
  getAssetId,
  isNum,
  photoType,
} from '../../../../../../../common'

const TAG = "MEDIA_LIBRARY_LOGTAG_NATIVE";
const MEDIA_LIBRARY_OK = 0;
const MEDIA_LIBRARY_PARAMETER_ERROR = 401;

export default function PhotoAccessHelperNativeTest() {

  describe('PhotoAccessHelperNativeTest', () => {
    beforeAll(async function () {
      console.info('beforeAll case')
      await getPermission();
    })

        /**
     * @tc.number     : SUB_PHOTOACCESS_HELPER_MEDIA_ASSET_GET_URI_NATIVE_0000
     * @tc.name       : TestMediaAssetGetUri0000
     * @tc.desc       : image get photoKeys.URI
     * @tc.size       : MEDIUM
     * @tc.type       : Function
     * @tc.level      : Level 2
     */
    it('TestMediaAssetGetUri0000', 2, async function (done) {
      let testNum = 'TestMediaAssetGetUri0000';
      try {
        let ret = mediaLibrary.testMediaAssetGetUri(1);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number     : SUB_PHOTOACCESS_HELPER_MEDIA_ASSET_GET_URI_NATIVE_0001
     * @tc.name       : TestMediaAssetGetUri0001
     * @tc.desc       : image get photoKeys.URI
     * @tc.size       : MEDIUM
     * @tc.type       : Function
     * @tc.level      : Level 2
     */
    it('TestMediaAssetGetUri0001', 2, async function (done) {
      let testNum = 'TestMediaAssetGetUri0001';
      try {
        let ret = mediaLibrary.testMediaAssetGetUri(2);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_MEDIA_ASSET_GET_DISPLAY_NAME_NATIVE_0000
     * @tc.name      : TestMediaAssetGetDisplayName0000
     * @tc.desc      : image get photoKeys.DISPLAY_NAME
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestMediaAssetGetDisplayName0000', 2, async function (done) {
      let testNum = 'TestMediaAssetGetDisplayName0000';
      try {
        let ret = mediaLibrary.testMediaAssetGetDisplayName(1);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_MEDIA_ASSET_GET_DISPLAY_NAME_NATIVE_0001
     * @tc.name      : TestMediaAssetGetDisplayName0001
     * @tc.desc      : image get photoKeys.DISPLAY_NAME
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestMediaAssetGetDisplayName0001', 2, async function (done) {
      let testNum = 'TestMediaAssetGetDisplayName0001';
      try {
        let ret = mediaLibrary.testMediaAssetGetDisplayName(2);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_MEDIA_ASSET_GET_SIZE_NATIVE_0000
     * @tc.name      : TestMediaAssetGetSize0000
     * @tc.desc      : image get photoKeys.SIZE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestMediaAssetGetSize0000', 2, async function (done) {
      let testNum = 'TestMediaAssetGetSize0000';
      try {
        let ret = mediaLibrary.testMediaAssetGetSize(1);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_MEDIA_ASSET_GET_SIZE_NATIVE_0001
     * @tc.name      : TestMediaAssetGetSize0001
     * @tc.desc      : image get photoKeys.SIZE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestMediaAssetGetSize0001', 2, async function (done) {
      let testNum = 'TestMediaAssetGetSize0001';
      try {
        let ret = mediaLibrary.testMediaAssetGetSize(2);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_MEDIA_ASSET_GET_DATE_MODIFIED_MS_NATIVE_0000
     * @tc.name      : TestMediaAssetGetDateModifiedMs0000
     * @tc.desc      : image get photoKeys.DATE_MODIFIED_MS
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('TestMediaAssetGetDateModifiedMs0000', 2, async function (done) {
      let testNum = 'TestMediaAssetGetDateModifiedMs0000';
      try {
        let ret = mediaLibrary.testMediaAssetGetDateModifiedMs(1);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_MEDIA_ASSET_GET_DATE_MODIFIED_MS_NATIVE_0001
     * @tc.name      : TestMediaAssetGetDateModifiedMs0001
     * @tc.desc      : image get photoKeys.DATE_MODIFIED_MS
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('TestMediaAssetGetDateModifiedMs0001', 2, async function (done) {
      let testNum = 'TestMediaAssetGetDateModifiedMs0001';
      try {
        let ret = mediaLibrary.testMediaAssetGetDateModifiedMs(2);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_MEDIA_ASSET_GET_WIDTH_NATIVE_0000
     * @tc.name      : TestMediaAssetGetWidth0000
     * @tc.desc      : image get photoKeys.WIDTH
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestMediaAssetGetWidth0000', 2, async function (done) {
      let testNum = 'TestMediaAssetGetWidth0000';
      try {
        let ret = mediaLibrary.testMediaAssetGetWidth(1);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_MEDIA_ASSET_GET_WIDTH_NATIVE_0001
     * @tc.name      : TestMediaAssetGetWidth0001
     * @tc.desc      : image get photoKeys.WIDTH
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestMediaAssetGetWidth0001', 2, async function (done) {
      let testNum = 'TestMediaAssetGetWidth0001';
      try {
        let ret = mediaLibrary.testMediaAssetGetWidth(2);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_MEDIA_ASSET_GET_HEIGHT_NATIVE_0000
     * @tc.name      : TestMediaAssetGetHeight0000
     * @tc.desc      : image get photoKeys.HEIGHT
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestMediaAssetGetHeight0000', 2, async function (done) {
      let testNum = 'TestMediaAssetGetHeight0000';
      try {
        let ret = mediaLibrary.testMediaAssetGetHeight(1);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_MEDIA_ASSET_GET_HEIGHT_NATIVE_0001
     * @tc.name      : TestMediaAssetGetHeight0001
     * @tc.desc      : image get photoKeys.HEIGHT
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestMediaAssetGetHeight0001', 2, async function (done) {
      let testNum = 'TestMediaAssetGetHeight0001';
      try {
        let ret = mediaLibrary.testMediaAssetGetHeight(2);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_MEDIA_ASSET_GET_ORIENTATION_NATIVE_0000
     * @tc.name      : TestMediaAssetGetOrientation0000
     * @tc.desc      : image get photoKeys.ORIENTATION
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestMediaAssetGetOrientation0000', 2, async function (done) {
      let testNum = 'TestMediaAssetGetOrientation0000';
      try {
        let ret = mediaLibrary.testMediaAssetGetOrientation(1);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_MEDIA_ASSET_GET_ORIENTATION_NATIVE_0001
     * @tc.name      : TestMediaAssetGetOrientation0001
     * @tc.desc      : image get photoKeys.ORIENTATION
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestMediaAssetGetOrientation0001', 2, async function (done) {
      let testNum = 'TestMediaAssetGetOrientation0001';
      try {
        let ret = mediaLibrary.testMediaAssetGetOrientation(2);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_MEDIA_ASSET_RELEASE_NATIVE_0000
     * @tc.name      : TestMediaAssetRelease0000
     * @tc.desc      : release media asset object
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestMediaAssetRelease0000', 2, async function (done) {
      let testNum = 'TestMediaAssetRelease0000';
      try {
        let ret = mediaLibrary.testMediaAssetRelease(1);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_CHANGE_REQUEST_ADD_RESOURCE_WITH_BUFFER_NATIVE_0000
     * @tc.name      : TestChangeRequestAddResourceWithBuffer0000
     * @tc.desc      : add resource by ArrayBuffer
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestChangeRequestAddResourceWithBuffer0000', 2, async function (done) {
      let testNum = 'TestChangeRequestAddResourceWithBuffer0000';
      try {
        let ret = mediaLibrary.testChangeRequestAddResourceWithBuffer(1);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_CHANGE_REQUEST_ADD_RESOURCE_WITH_BUFFER_NATIVE_0001
     * @tc.name      : TestChangeRequestAddResourceWithBuffer0001
     * @tc.desc      : add resource by ArrayBuffer
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestChangeRequestAddResourceWithBuffer0001', 2, async function (done) {
      let testNum = 'TestChangeRequestAddResourceWithBuffer0001';
      try {
        let ret = mediaLibrary.testChangeRequestAddResourceWithBuffer(2);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_CHANGE_REQUEST_ADD_RESOURCE_WITH_BUFFER_NATIVE_0002
     * @tc.name      : TestChangeRequestAddResourceWithBuffer0002
     * @tc.desc      : add resource by ArrayBuffer
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestChangeRequestAddResourceWithBuffer0002', 2, async function (done) {
      let testNum = 'TestChangeRequestAddResourceWithBuffer0002';
      try {
        let ret = mediaLibrary.testChangeRequestAddResourceWithBuffer(3);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_CHANGE_REQUEST_ADD_RESOURCE_WITH_BUFFER_NATIVE_0003
     * @tc.name      : TestChangeRequestAddResourceWithBuffer0003
     * @tc.desc      : add resource by ArrayBuffer
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestChangeRequestAddResourceWithBuffer0003', 2, async function (done) {
      let testNum = 'TestChangeRequestAddResourceWithBuffer0003';
      try {
        let ret = mediaLibrary.testChangeRequestAddResourceWithBuffer(4);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_CHANGE_REQUEST_ADD_RESOURCE_WITH_BUFFER_NATIVE_0004
     * @tc.name      : TestChangeRequestAddResourceWithBuffer0004
     * @tc.desc      : add resource by ArrayBuffer
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestChangeRequestAddResourceWithBuffer0004', 2, async function (done) {
      let testNum = 'TestChangeRequestAddResourceWithBuffer0004';
      try {
        let ret = mediaLibrary.testChangeRequestAddResourceWithBuffer(6);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_CHANGE_REQUEST_ADD_RESOURCE_WITH_BUFFER_NATIVE_0005
     * @tc.name      : TestChangeRequestAddResourceWithBuffer0005
     * @tc.desc      : add resource by ArrayBuffer
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestChangeRequestAddResourceWithBuffer0005', 2, async function (done) {
      let testNum = 'TestChangeRequestAddResourceWithBuffer0005';
      try {
        let ret = mediaLibrary.testChangeRequestAddResourceWithBuffer(7);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_CHANGE_REQUEST_SAVE_CAMERA_PHOTO_NATIVE_0000
     * @tc.name      : TestChangeRequestSaveCameraPhoto0000
     * @tc.desc      : save camera photo
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestChangeRequestSaveCameraPhoto0000', 2, async function (done) {
      let testNum = 'TestChangeRequestSaveCameraPhoto0000';
      try {
        let ret = mediaLibrary.testChangeRequestSaveCameraPhoto(1);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_CHANGE_REQUEST_SAVE_CAMERA_PHOTO_NATIVE_0001
     * @tc.name      : TestChangeRequestSaveCameraPhoto0001
     * @tc.desc      : save camera photo
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestChangeRequestSaveCameraPhoto0001', 2, async function (done) {
      let testNum = 'TestChangeRequestSaveCameraPhoto0001';
      try {
        let ret = mediaLibrary.testChangeRequestSaveCameraPhoto(2);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_CHANGE_REQUEST_DISCARD_CAMERA_PHOTO_NATIVE_0000
     * @tc.name      : TestChangeRequestDiscardCameraPhoto0000
     * @tc.desc      : discard camera photo
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestChangeRequestDiscardCameraPhoto0000', 2, async function (done) {
      let testNum = 'TestChangeRequestDiscardCameraPhoto0000';
      try {
        let ret = mediaLibrary.testChangeRequestDiscardCameraPhoto(1);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_CHANGE_REQUEST_RELEASE_NATIVE_0000
     * @tc.name      : testChangeRequestRelease0000
     * @tc.desc      : release media asset change request object
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('testChangeRequestRelease0000', 2, async function (done) {
      let testNum = 'testChangeRequestRelease0000';
      try {
        let ret = mediaLibrary.testChangeRequestRelease(1);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_MANAGER_REQUEST_IMAGE_NATIVE_0000
     * @tc.name      : TestManagerRequestImage0000
     * @tc.desc      : request image resource
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestManagerRequestImage0000', 2, async function (done) {
      let testNum = 'TestManagerRequestImage0000';
      try {
        let ret = mediaLibrary.testManagerRequestImage(2);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_MANAGER_REQUEST_IMAGE_NATIVE_0001
     * @tc.name      : TestManagerRequestImage0001
     * @tc.desc      : request image resource
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestManagerRequestImage0001', 2, async function (done) {
      let testNum = 'TestManagerRequestImage0001';
      try {
        let ret = mediaLibrary.testManagerRequestImage(1);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_MANAGER_REQUEST_IMAGE_NATIVE_0002
     * @tc.name      : TestManagerRequestImage0002
     * @tc.desc      : request image resource
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestManagerRequestImage0002', 2, async function (done) {
      let testNum = 'TestManagerRequestImage0002';
      try {
        let ret = mediaLibrary.testManagerRequestImage(3);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_MANAGER_REQUEST_IMAGE_NATIVE_0003
     * @tc.name      : TestManagerRequestImage0003
     * @tc.desc      : request image resource
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestManagerRequestImage0003', 2, async function (done) {
      let testNum = 'TestManagerRequestImage0003';
      try {
        let ret = mediaLibrary.testManagerRequestImage(4);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_MANAGER_REQUEST_IMAGE_NATIVE_0004
     * @tc.name      : TestManagerRequestImage0004
     * @tc.desc      : request image resource
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestManagerRequestImage0004', 2, async function (done) {
      let testNum = 'TestManagerRequestImage0004';
      try {
        let ret = mediaLibrary.testManagerRequestImage(5);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_APPLY_CHANGES_NATIVE_0000
     * @tc.name      : TestMediaAccessHelperApplyChanges0000
     * @tc.desc      : apply changes
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('TestMediaAccessHelperApplyChanges0000', 2, async function (done) {
      let testNum = 'TestMediaAccessHelperApplyChanges0000';
      try {
        let ret = mediaLibrary.testMediaAccessHelperApplyChanges(1);
        console.log(`${testNum} ret: ${ret}`);
        expect(ret).assertEqual(MEDIA_LIBRARY_PARAMETER_ERROR);
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    })
  });
}
