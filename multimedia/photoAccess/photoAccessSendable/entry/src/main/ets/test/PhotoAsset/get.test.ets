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

import dataSharePredicates from '@ohos.data.dataSharePredicates';
import photoAccessHelper from '@ohos.file.photoAccessHelper';
import sendablePhotoAccessHelper from '@ohos.file.sendablePhotoAccessHelper'
import { describe, it, expect, beforeAll } from "@ohos/hypium";
import {
  photoKeys,
  photoFetchOption,
  getAssetId,
  isNum,
  pushCreateAsset,
  sleep,
  getPermission
} from '../../../../../../../common'

export default function getTest () {
  describe('getTest', function () {

    beforeAll(async () => {
      await getPermission();
      await sleep();
    })

    let sendablePhAccessHelper = sendablePhotoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);
    const fileNameList = ["getTest.jpg", "getTest.mp4"];

    beforeAll(async () => {
       console.info('beforeAll case');
       await getPermission();
       await sleep();
       await pushCreateAsset(fileNameList);
    });

    const getProvisionAsset = async (done: Function, testNum: string, displayName: string) => {
       try {
         const fetchOps = photoFetchOption(testNum, photoKeys.DISPLAY_NAME, displayName);
         let fetchResult: sendablePhotoAccessHelper.FetchResult<sendablePhotoAccessHelper.PhotoAsset> = await sendablePhAccessHelper.getAssets(fetchOps);
         let fetchCount = fetchResult.getCount();
         if (fetchCount <= 0) {
            console.error(`${testNum} :: checkProvisionAsset :: have no Asset displayName is ${displayName}!`);
            expect(false).assertTrue();
            done();
         }
         let photoAsset: sendablePhotoAccessHelper.PhotoAsset = await fetchResult.getFirstObject();
         return photoAsset;
       } catch (error) {
         console.error(`${testNum} :: checkProvisionAsset failed, err ==> ${error}!`);
         expect(false).assertTrue();
         done();
       }
    }

    const checkPhotoKeysDateTime = async (done: Function, testNum: string, expectDateMs: number, actualDateMs: number) => {
       try {
          console.log(`${testNum} :: expectDateMs is ${expectDateMs}, actualDateMs is ${actualDateMs}`);
          let lowRange = 0.998 * expectDateMs;
          let topRange = 1.002 * expectDateMs;
          if (lowRange <= actualDateMs <= topRange) {
            console.log(`${testNum} :: ${actualDateMs} is between ${lowRange} and ${topRange} .`);
            done();
          } else {
            console.log(`${testNum} :: ${actualDateMs} is not between ${lowRange} and ${topRange}, failed !`);
            expect(false).assertTrue();
            done();
          }
       } catch (error) {
           console.log(`${testNum} :: checkPhotoKeysDateTime error , err is ${error} !`);
           expect(false).assertTrue();
           done();
       }
    }

    async function checkPhotoKeysValue (done, testNum, fetchOps, key, value, asset) {
      try {
        console.info(`${testNum} key: ${key}, value: ${value}, asset.key: ${asset.get(key)}`);
        if (key === 'uri') {
          const id = getAssetId(asset.get(key));
          const expectUri = value + id;
          const uri = asset.get(key).toString();
          const isIncludes = uri.includes(expectUri);
          expect(isIncludes).assertTrue();
        } else if (key === 'date_added' || key === 'date_modified' || key === 'date_taken' || key === 'date_added_ms' || key === 'date_modified_ms') {
          expect(isNum(asset.get(key))).assertTrue();
        } else {
          expect(asset.get(key)).assertEqual(value);
        }
        done();
      } catch (error) {
        console.info(`${testNum} failed; error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    }



    //image
    /**
     * @tc.number    : SUB_PHOTO_ACCESS_HELPER_GET_0000
     * @tc.name      : get_image_uri_001
     * @tc.desc      : image get photoKeys.URI
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('get_image_uri_001', 2, async function (done) {
      const testNum = 'get_image_uri_001';
      const displayName = 'getTest.jpg';
      const fetchOps = photoFetchOption(testNum, photoKeys.DISPLAY_NAME, displayName);
      let photoAsset: sendablePhotoAccessHelper.PhotoAsset = await getProvisionAsset(done, testNum, displayName);
      const key = photoKeys.URI;
      const value = 'file://media/Photo/';
      await checkPhotoKeysValue(done, testNum, fetchOps, key, value, photoAsset);
    });

    /**
     * @tc.number    : SUB_PHOTO_ACCESS_HELPER_GET_5000
     * @tc.name      : get_video_uri_001
     * @tc.desc      : video get photoKeys.URI
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('get_video_uri_001', 2, async function (done) {
      const testNum = 'get_video_uri_001';
      const displayName = 'getTest.mp4';
      const fetchOps = photoFetchOption(testNum, photoKeys.DISPLAY_NAME, displayName);
      let photoAsset: sendablePhotoAccessHelper.PhotoAsset = await getProvisionAsset(done, testNum, displayName);
      const key = photoKeys.URI;
      const value = 'file://media/Photo/';
      await checkPhotoKeysValue(done, testNum, fetchOps, key, value, photoAsset);
    });


    /**
     * @tc.number    : SUB_PHOTO_ACCESS_HELPER_GET_6100
     * @tc.name      : get_image_title_001
     * @tc.desc      : image get photoKeys.TITLE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('get_image_title_001', 2, async function (done) {
      const testNum = 'get_image_title_001';
      const displayName = 'getTest.jpg';
      const fetchOps = photoFetchOption(testNum, photoKeys.DISPLAY_NAME, displayName);
      let photoAsset: sendablePhotoAccessHelper.PhotoAsset = await getProvisionAsset(done, testNum, displayName);
      const key = photoKeys.TITLE;
      const value = 'getTest';
      await checkPhotoKeysValue(done, testNum, fetchOps, key, value, photoAsset);
    });


    /**
     * @tc.number    : SUB_PHOTO_ACCESS_HELPER_GET_6200
     * @tc.name      : get_video_title_001
     * @tc.desc      : video get photoKeys.TITLE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('get_video_title_001', 2, async function (done) {
      const testNum = 'get_video_title_001';
      const displayName = 'getTest.mp4';
      const fetchOps = photoFetchOption(testNum, photoKeys.DISPLAY_NAME, displayName);
      let photoAsset: sendablePhotoAccessHelper.PhotoAsset = await getProvisionAsset(done, testNum, displayName);
      const key = photoKeys.TITLE;
      const value = 'getTest';
      await checkPhotoKeysValue(done, testNum, fetchOps, key, value, photoAsset);
    });

  })
}
