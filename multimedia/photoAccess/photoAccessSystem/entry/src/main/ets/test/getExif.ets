/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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

// @ts-nocheck
import { describe, beforeAll, it, expect } from 'deccjsunit/index'
import {
  photoKeys,
  fetchOption,
  getFileAsset,
  getPermission
} from '../../../../../../common'

export default function getExifTest () {
  describe('getExifTest', function () {
    beforeAll(async function () {
      console.info('beforeAll case')
      await getPermission()
    })
    const helper = photoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext)

    async function getExifCallback (done, testNum, fetchOps) {
      try {
        let fetchOp = {
            fetchColumns: ["all_exif", "user_comment"],
        };
        let fetchFileResult = await helper.getFileAssets(fetchOp);
        const asset = await fetchFileResult.getFirstObject();
        let exifMessage = asset.getExif();
        let imageWidth = JSON.stringify(JSON.parse(exifMessage), ['ImageWidth']);
        console.info(`${testNum} image width: ${imageWidth}`);
        expect(imageWidth.search("3456") != -1).assertTrue();
        let userComment = JSON.stringify(JSON.parse(exifMessage), ['UserComment']);
        console.info(`${testNum} user comment: ${userComment}`);
        expect(userComment.search("gray") != -1).assertTrue();

        fetchFileResult.close();
        done();
      } catch (error) {
        console.info(`${testNum} setFavorite failed; error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    }
    
    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_GET_EXIF_0000
     * @tc.name      : getExif_callback_0000
     * @tc.desc      : getExif
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('getExif_callback_0000', 0, async function (done) {
      const testNum = 'getExif_callback_0000';
      const fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, 'getExif.jpg');
      await getExifCallback(done, testNum, fetchOps);
    });
  })
}