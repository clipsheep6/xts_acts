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

import photoAccessHelper from '@ohos.file.photoAccessHelper';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import { BusinessError } from '@ohos.base';
import dataSharePredicates from '@ohos.data.dataSharePredicates';
import { sleep, getPermission, fetchOption, photoKeys, pushCreateAsset } from '../../../../../../../common';
import router from '@ohos.router';
import { Component, Driver, ON } from '@ohos.UiTest';

export default function saveCameraPhotoTest() {

  describe('saveCameraPhotoTest', () => {

    let driver: Driver | undefined = undefined;

    beforeAll(async () => {
      console.info('beforeAll case');
      driver = Driver.create();
      console.log(`driver ====> ${driver}`);
      await getPermission();
      await sleep();
    });

    const context = globalThis.abilityContext;
    let helper = photoAccessHelper.getPhotoAccessHelper(context);

    const saveCameraPhotoByExistPhotoAsset = async (done: Function, testNum: string) => {
      let predicates: dataSharePredicates.DataSharePredicates = new dataSharePredicates.DataSharePredicates();
      let fetchOptions: photoAccessHelper.FetchOptions = {
        fetchColumns: ['date_added', 'date_modified'],
        predicates: predicates
      };
      try {
        let flag: number = 2;
        let photoAsset: photoAccessHelper.PhotoAsset | undefined = undefined;
        let fetchResult: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset> | undefined = undefined;
        let date_added_before: number = 0;
        let date_modified_before: number = 0;
        let assetCount = 0;
        while(flag > 0) {
          fetchResult = await helper.getAssets(fetchOptions);
          if (fetchResult !== undefined && fetchResult.getCount() > 0) {
            console.log(`${testNum} :: assetCount == ${fetchResult.getCount()}`);
            photoAsset = await fetchResult.getFirstObject();
            console.log(`${testNum} :: assetCount == ${fetchResult.getCount()}`);
            break;
          } else {
            const fileNameList = ["testSaveCameraPhoto.jpg"];
            await pushCreateAsset(fileNameList);
            continue;
          }
        }
        // before
        date_added_before = photoAsset.get(photoKeys.DATE_ADDED);
        date_modified_before = photoAsset.get(photoKeys.DATE_MODIFIED);
        assetCount = fetchResult.getCount();
        console.log(`${testNum} :: Before applyChanges saveCameraPhoto :: date_added is ${date_added_before}, date_modified is ${date_modified_before}, assetCount is ${assetCount}`);
        // saveCameraPhoto applyChanges, then query
        let assetChangeRequest: photoAccessHelper.MediaAssetChangeRequest = new photoAccessHelper.MediaAssetChangeRequest(photoAsset);
        assetChangeRequest.saveCameraPhoto();
        await helper.applyChanges(assetChangeRequest);
        console.info(`${testNum} :: apply saveCameraPhoto successfully`);
        let fetchResult2: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset> = await helper.getAssets(fetchOptions);
        let asset = await fetchResult2.getFirstObject();
        // after
        let date_added_after = asset.get(photoKeys.DATE_ADDED);
        let date_modified_after = asset.get(photoKeys.DATE_MODIFIED);
        let count = fetchResult2.getCount();
        console.log(`${testNum} :: After applyChanges saveCameraPhoto :: date_added is ${date_added_after}, date_modified is ${date_modified_after}, assetCount is ${count}`);
        expect(count).assertEqual(assetCount);
        expect(date_added_after).assertEqual(date_added_before);
        expect(date_modified_after).assertEqual(date_modified_before);
        done();
      } catch(error: BusinessError) {
        console.error(`${testNum} :: saveCameraPhotoByExistPhotoAsset failed with error: ${error.code}, ${error.message}`);
        expect(false).assertTrue();
        done();
      }

    }

    const getAssetsCount = async (testNum: string): number => {
      let count: number = -1;
      try {
        let predicates: dataSharePredicates.DataSharePredicates = new dataSharePredicates.DataSharePredicates();
        let fetchOptions: photoAccessHelper.FetchOptions = {
          fetchColumns: [],
          predicates: predicates
        };
        let fetchResult: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset> = await helper.getAssets(fetchOptions);
        count = fetchResult.getCount();
        return count;
      } catch(error: BusinessError) {
        console.error(`${testNum} :: getAssetsCount failed !`);
        return count;
      }
    }



    /**
     * @tc.number    : Sub_PhotoAccess_Helper_Save_Camera_Photo_001
     * @tc.name      : save_camera_photo_by_exist_photo_asset_001
     * @tc.desc      : add existing photoAsset as param to saveCameraPhoto interface
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('save_camera_photo_by_exist_photo_asset_001', 0, async (done: Function) => {
      let testNum = 'save_camera_photo_by_exist_photo_asset_001';
      await saveCameraPhotoByExistPhotoAsset(done, testNum);
    })

    /**
     * @tc.number    : Sub_PhotoAccess_Helper_Save_Camera_Photo_002
     * @tc.name      : save_camera_photo_001
     * @tc.desc      : save camera photo by photoAsset
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('save_camera_photo_001', 0, async (done: Function) => {
      let testNum = 'save_camera_photo_001';
      let assetCount = await getAssetsCount(testNum);
      if (assetCount == -1) {
        console.error(`${testNum} :: failed to get photoAssets count !`);
        expect(false).assertTrue();
        done();
      }
      console.log(`${testNum} :: before saveCameraPhoto assets count = ${assetCount}`);
      await sleep(200);
      router.pushUrl({
        url: 'MainAbility/pages/CameraIndex'
      })
      let flag = 5;
      while(flag > 0) {
        await sleep(60000);
        let btn = await driver.findComponent(ON.text('拍照'));
        if (btn != undefined) {
          await sleep(5000);
          btn.click();
          await sleep(500);
          break;
        }
        flag = flag - 1;
      }
      router.back();
      await sleep(200);
      let assetCount2 = await getAssetsCount(testNum);
      console.log(`${testNum} :: after saveCameraPhoto assets count = ${assetCount2}`);
      expect(assetCount2).assertEqual(assetCount + 1);
      done();
    })

  })
}