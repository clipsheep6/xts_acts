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
import sendablePhotoAccessHelper from '@ohos.file.sendablePhotoAccessHelper'
import { describe, it, expect, beforeAll } from "@ohos/hypium";
import { common } from '@kit.AbilityKit';
import {
  photoKeys,
  photoFetchOption,
  sleep,
  getPermission,
  getAssetId,
  isNum,
  createResource
} from '../../util/common'

export default function getTest () {
  describe('getTest', () => {

    let globalContext: common.UIAbilityContext = AppStorage.get('globalContext') as common.UIAbilityContext;
    let sendablePhAccessHelper: sendablePhotoAccessHelper.PhotoAccessHelper = sendablePhotoAccessHelper.getPhotoAccessHelper(globalContext);
    let fileNameList: Array<string> = ['getTest.jpg', 'getTest.mp4'];

    beforeAll(async () => {
      await getPermission();
      await sleep(10);
      await createResource(globalContext, fileNameList);
    });

    const getProvisionAsset = async (done: Function, testNum: string, displayName: string): Promise<sendablePhotoAccessHelper.PhotoAsset | undefined> => {
      let photoAsset: sendablePhotoAccessHelper.PhotoAsset | undefined = undefined;
      try {
        const fetchOps: photoAccessHelper.FetchOptions = photoFetchOption(testNum, photoKeys.DISPLAY_NAME, displayName);
        let fetchResult: sendablePhotoAccessHelper.FetchResult<sendablePhotoAccessHelper.PhotoAsset> = await sendablePhAccessHelper.getAssets(fetchOps);
        let fetchCount: number = fetchResult.getCount();
        if (fetchCount <= 0) {
          console.error(`${testNum} :: checkProvisionAsset :: have no Asset displayName is ${displayName}!`);
          expect(false).assertTrue();
          done();
        }
        photoAsset = await fetchResult.getFirstObject();
      } catch (error) {
        console.error(`${testNum} :: checkProvisionAsset failed, err ==> ${error}!`);
        expect(false).assertTrue();
        done();
      }
      return photoAsset;
    };

    let checkPhotoKeysValue = async (done: Function, testNum: string, key: string, value: photoAccessHelper.MemberType,
                                     asset: sendablePhotoAccessHelper.PhotoAsset | undefined) => {
      try {
        if (asset === undefined) {
          expect(false).assertTrue();
          done();
        }
        console.info(`${testNum} key: ${key}, value: ${value}, asset.key: ${asset?.get(key)}`);
        if (key === 'uri') {
          const id: string = getAssetId(asset?.get(key).toString());
          const expectUri: string = value + id;
          const uri: string | undefined = asset?.get(key).toString();
          const isIncludes: boolean | undefined = uri?.includes(expectUri);
          expect(isIncludes).assertTrue();
        }
        else if (key === 'date_added' || key === 'date_modified' || key === 'date_taken' || key === 'date_added_ms' || key === 'date_modified_ms') {
          expect(isNum(asset?.get(key))).assertTrue();
        }
        else {
          expect(asset?.get(key)).assertEqual(value);
        }
        done();
      } catch (error) {
        console.info(`${testNum} failed; error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    }

    /**
     * @tc.number    : Sub_Photo_Access_Sendable_Asset_Get_MemberType_001
     * @tc.name      : get_image_uri_001
     * @tc.desc      : image get photoKeys.URI
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('get_image_uri_001', 2, async (done: Function) => {
      const testNum = 'get_image_uri_001';
      const displayName = 'getTest.jpg';
      let photoAsset: sendablePhotoAccessHelper.PhotoAsset | undefined = await getProvisionAsset(done, testNum, displayName);
      const key: string = photoKeys.URI;
      const value = 'file://media/Photo/';
      await checkPhotoKeysValue(done, testNum, key, value, photoAsset);
    });

    /**
     * @tc.number    : Sub_Photo_Access_Sendable_Asset_Get_MemberType_002
     * @tc.name      : get_video_uri_001
     * @tc.desc      : video get photoKeys.URI
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('get_video_uri_001', 2, async (done: Function) => {
      const testNum = 'get_video_uri_001';
      const displayName = 'getTest.mp4';
      let photoAsset: sendablePhotoAccessHelper.PhotoAsset | undefined = await getProvisionAsset(done, testNum, displayName);
      const key: string = photoKeys.URI;
      const value = 'file://media/Photo/';
      await checkPhotoKeysValue(done, testNum, key, value, photoAsset);
    });

    /**
     * @tc.number    : Sub_Photo_Access_Sendable_Asset_Get_MemberType_003
     * @tc.name      : get_image_title_001
     * @tc.desc      : image get photoKeys.TITLE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('get_image_title_001', 2, async (done: Function) => {
      const testNum = 'get_image_title_001';
      const displayName = 'getTest.jpg';
      let photoAsset: sendablePhotoAccessHelper.PhotoAsset | undefined = await getProvisionAsset(done, testNum, displayName);
      const key: string = photoKeys.TITLE;
      const value = 'getTest';
      await checkPhotoKeysValue(done, testNum, key, value, photoAsset);
    });

    /**
     * @tc.number    : Sub_Photo_Access_Sendable_Asset_Get_MemberType_004
     * @tc.name      : get_video_title_001
     * @tc.desc      : video get photoKeys.TITLE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('get_video_title_001', 2, async (done: Function) => {
      const testNum = 'get_video_title_001';
      const displayName = 'getTest.mp4';
      let photoAsset: sendablePhotoAccessHelper.PhotoAsset | undefined = await getProvisionAsset(done, testNum, displayName);
      const key: string = photoKeys.TITLE;
      const value = 'getTest';
      await checkPhotoKeysValue(done, testNum, key, value, photoAsset);
    });
  })
}
