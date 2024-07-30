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
import { describe, it, expect, beforeAll } from '@ohos/hypium'
import dataSharePredicates from '@ohos.data.dataSharePredicates'
import { Component, Driver, ON } from '@ohos.UiTest';

import {
  sleep,
  getPermission,
  fetchOption,
  photoKeys,
  fetchAllOption,
  pushCreateAsset
} from '../../../../../../../common'

export default function showAssetsCreationDialogTest() {

  describe('showAssetsCreationDialogTest', () => {

    let driver: Driver | undefined = undefined;

    beforeAll(async () => {
      console.info('showAssetsCreationDialogTest beforeAll case');
      driver = Driver.create();
      await getPermission();
      await sleep()
    });

    const context = globalThis.abilityContext;
    let phAccessHelper = photoAccessHelper.getPhotoAccessHelper(context);

    const showImagesCreationDialog = async (done: Function, testNum: string, fileUriList: Array<string>,
      photoCreationConfigs: Array<photoAccessHelper.PhotoCreationConfig>) => {
      try {
        let desFileUris: Array<string> | undefined = undefined;
        phAccessHelper.showAssetsCreationDialog(fileUriList, photoCreationConfigs).then((data) => {
          console.log(`${testNum} :: showAssetsCreationDialog :: data length is ${data.length}`);
          desFileUris = data;
        });
        let button: Component = await driver.waitForComponent(ON.text('允许'),2000);
        if (button !== undefined) {
          await button.click();
        }
        await sleep(1000);
        console.log(`${testNum} :: showAssetsCreationDialog success, desFileUris is ${desFileUris[0]}`);
        const ops = fetchAllOption();
        let fetchResult: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset> = await phAccessHelper.getAssets(ops);
        let count_before = fetchResult.getCount();
        console.log(`${testNum} :: count before apply change is ${count_before} `);
        let predicates: dataSharePredicates.DataSharePredicates = new dataSharePredicates.DataSharePredicates();
        // 返回的 uri 是媒体库中资源的uri，而不是沙箱路径的uri
        predicates.in('uri', desFileUris);
        let fetchOptions: photoAccessHelper.FetchOptions = {
          fetchColumns: [],
          predicates: predicates
        };
        let fetchResult2: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset> = await phAccessHelper.getAssets(fetchOptions);
        let photoAssets: Array<photoAccessHelper.PhotoAsset> = await fetchResult2.getAllObjects();
        for (let i = 0; i < photoAssets.length; i++) {
          let changeRequest: photoAccessHelper.MediaAssetChangeRequest = new photoAccessHelper.MediaAssetChangeRequest(photoAssets[i]);
          console.log(`${testNum} :: create MediaAssetChangeRequest success, cycle is ${i + 1}`);
          changeRequest.addResource(photoAccessHelper.ResourceType.IMAGE_RESOURCE, fileUriList[i]);
          console.log(`${testNum} :: addResource success, cycle is ${i + 1}`);
          await phAccessHelper.applyChanges(changeRequest);
          console.log(`${testNum} ::applyChange success, cycle is ${i + 1}`);
        }
        let fetchResult3: photoAccessHelper.FetchResult<photoAccessHelper.PhotoAsset> = await phAccessHelper.getAssets(ops);
        let count_after = fetchResult3.getCount();
        console.log(`${testNum} :: count after apply change is ${count_after} `);
        expect(count_after).assertEqual(count_before + desFileUris.length);
        done();
      } catch (error) {
        console.error(`${testNum} :: showAssetsCreationDialogPromise error, err is ${error}`);
        expect(false).assertTrue();
        done();
      }
    }

    /**
     * @tc.number    : Sub_PhotoAccess_Helper_Show_Creations_Dialog_001
     * @tc.name      : show_asset_create_dialog_001
     * @tc.desc      : show dialog to add mediaLibrary resource
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it("show_asset_create_dialog_001", 0, (done: Function) => {
      const testNum = "show_asset_create_dialog_001";
      let fileUriList: Array<string> = [
        "file://ohos.acts.multimedia.photoaccess/data/storage/el2/base/haps/phone/photos/test_mov_1.jpg"
      ];
      let photoCreationConfigs: Array<photoAccessHelper.PhotoCreationConfig> = [
        {
          title: 'showAssetsCreationDialogTest',
          fileNameExtension: 'jpg',
          photoType: photoAccessHelper.PhotoType.IMAGE,
          subtype: photoAccessHelper.PhotoSubtype.DEFAULT,
        }
      ];
      showImagesCreationDialog(done, testNum, fileUriList, photoCreationConfigs);
    })

  })
}