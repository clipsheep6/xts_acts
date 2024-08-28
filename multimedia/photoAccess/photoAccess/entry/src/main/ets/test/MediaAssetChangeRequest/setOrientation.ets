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

import photoAccessHelper from '@ohos.file.photoAccessHelper'
import { describe, it, expect } from 'deccjsunit/index'
import dataSharePredicates from '@ohos.data.dataSharePredicates'

export default function setOrientationChangeRequestTest() {

  describe('setOrientationChangeRequestTest', function () {
    let context = globalThis.abilityContext;
    let helper = photoAccessHelper.getPhotoAccessHelper(context);
    let predicates: dataSharePredicates.DataSharePredicates = new dataSharePredicates.DataSharePredicates();
    let fetchOptions: photoAccessHelper.FetchOptions = {
      fetchColumns: [],
      predicates: predicates
    };

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_SET_ORIENTATION_CHANGE_REQUEST_0001
     * @tc.name      : set_orientation_change_request_001
     * @tc.desc      : change asset orientation
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('set_orientation_change_request_001', 0, async function (done) {
      let testNum = 'set_orientation_change_request_001';
      try {
        let photoFetchResult: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset> =
          await helper.getAssets(fetchOptions);
        let title: photoAccessHelper.PhotoKeys = photoAccessHelper.PhotoKeys.TITLE;
        if (title == "test_exif.png") {
          let photoAsset: photoAccessHelper.PhotoAsset = await photoFetchResult.getFirstObject();
          let assetChangeRequest: photoAccessHelper.MediaAssetChangeRequest =
            new photoAccessHelper.MediaAssetChangeRequest(photoAsset);
          let newOrientation = 90;
          assetChangeRequest.setOrientation(newOrientation);
          await helper.applyChanges(assetChangeRequest);
          helper.applyChanges(assetChangeRequest).then(() => {
            console.info(`${testNum} successed`);
          })
        }
        console.info(`${testNum} is not photo`);
        done();
      } catch (error) {
        console.error(`${testNum} failed with error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_SET_ORIENTATION_CHANGE_REQUEST_0002
     * @tc.name      : set_orientation_change_request_002
     * @tc.desc      : change asset orientation
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('set_orientation_change_request_002', 0, async function (done) {
      let testNum = 'set_orientation_change_request_002';
      try {
        let photoFetchResult: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset> =
          await helper.getAssets(fetchOptions);
        let photoAsset: photoAccessHelper.PhotoAsset = await photoFetchResult.getFirstObject();
        let assetChangeRequest: photoAccessHelper.MediaAssetChangeRequest =
          new photoAccessHelper.MediaAssetChangeRequest(photoAsset);
        let newOrientation = 45;
        assetChangeRequest.setOrientation(newOrientation);
        await helper.applyChanges(assetChangeRequest);
        helper.applyChanges(assetChangeRequest).then(() => {
          console.error(`${testNum} failed`);
          expect(false).assertTrue();
        })
        done();
      } catch (error) {
        console.info(`${testNum} successed with error: ${error}`);
        done();
      }
    })

  })
}