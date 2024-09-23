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
import photoAccessHelper from '@ohos.file.photoAccessHelper'
import sendablePhotoAccessHelper from '@ohos.file.sendablePhotoAccessHelper'
import { describe, it, expect } from 'deccjsunit/index'
import {
  albumKeys,
  albumType,
  albumSubtype,
} from '../../../../../../../common'

export default function groupAlbumsTest () {
  describe('groupAlbumsTest', function () {
    const helper = photoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext)
    const helper1 = sendablePhotoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext)

    /**
      * @tc.number    : SUB_PHOTOACCESS_HELPER_GET_GROUP_ALBUMS_0100
      * @tc.name      : get_group_albums_001
      * @tc.desc      : get group albums 
      * @tc.size      : MEDIUM
      * @tc.type      : Function
      * @tc.level     : Level 0
    */
    it('get_group_albums_001', 0, async function (done) {
      const testNum = 'get_group_albums_001';
      try {
        const predicates = new dataSharePredicates.DataSharePredicates();
        const fetchOps : photoAccessHelper.FetchOptions = {
          fetchColumns: [],
          predicates: predicates
        };
        const fetchResult = await helper1.getAlbums(albumType.SMART, albumSubtype.GROUP_PHOTO, fetchOps);
        expect(fetchResult.getCount()).assertEqual(0);
        done();
      } catch (error) {
        console.info(`${testNum} failed, error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    });
  })
}
