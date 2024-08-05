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
import { photoKeys, fetchOption } from '../../../../../../../common'

export default function setOrientationChangeRequestTest() {
  describe('setOrientationChangeRequestTest', function () {
    let context = globalThis.abilityContext;
    let helper = photoAccessHelper.getPhotoAccessHelper(context);

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
        let asset = await helper.createAsset(testNum + '.jpg');
        let fd = await asset.open('rw');
        await asset.close(fd);

        let assetChangeRequest = new photoAccessHelper.MediaAssetChangeRequest(asset);
        assetChangeRequest.setOrientation(0);
        await helper.applyChanges(assetChangeRequest);

        let fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, testNum + '.jpg');
        let fetchResult = await helper.getAssets(fetchOps);
        expect(fetchResult.getCount()).assertEqual(1);
        fetchResult.close();
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    })

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
        let asset = await helper.createAsset(testNum + '.jpg');
        let fd = await asset.open('rw');
        await asset.close(fd);

        let assetChangeRequest = new photoAccessHelper.MediaAssetChangeRequest(asset);
        assetChangeRequest.setOrientation(90);
        await helper.applyChanges(assetChangeRequest);

        let fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, testNum + '.jpg');
        let fetchResult = await helper.getAssets(fetchOps);
        expect(fetchResult.getCount()).assertEqual(1);
        fetchResult.close();
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_SET_ORIENTATION_CHANGE_REQUEST_0003
     * @tc.name      : set_orientation_change_request_003
     * @tc.desc      : change asset orientation
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('set_orientation_change_request_003', 0, async function (done) {
      let testNum = 'set_orientation_change_request_003';
      try {
        let asset = await helper.createAsset(testNum + '.jpg');
        let fd = await asset.open('rw');
        await asset.close(fd);

        let assetChangeRequest = new photoAccessHelper.MediaAssetChangeRequest(asset);
        assetChangeRequest.setOrientation(180);
        await helper.applyChanges(assetChangeRequest);

        let fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, testNum + '.jpg');
        let fetchResult = await helper.getAssets(fetchOps);
        expect(fetchResult.getCount()).assertEqual(1);
        fetchResult.close();
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_SET_ORIENTATION_CHANGE_REQUEST_0004
     * @tc.name      : set_orientation_change_request_004
     * @tc.desc      : change asset orientation
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('set_orientation_change_request_004', 0, async function (done) {
      let testNum = 'set_orientation_change_request_004';
      try {
        let asset = await helper.createAsset(testNum + '.jpg');
        let fd = await asset.open('rw');
        await asset.close(fd);

        let assetChangeRequest = new photoAccessHelper.MediaAssetChangeRequest(asset);
        assetChangeRequest.setOrientation(270);
        await helper.applyChanges(assetChangeRequest);

        let fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, testNum + '.jpg');
        let fetchResult = await helper.getAssets(fetchOps);
        expect(fetchResult.getCount()).assertEqual(1);
        fetchResult.close();
        done();
      } catch (error) {
        console.error(`${testNum} failed; error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    })

  })
}