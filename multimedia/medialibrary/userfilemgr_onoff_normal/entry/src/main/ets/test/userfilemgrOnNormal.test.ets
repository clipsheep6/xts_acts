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
import userFileManager from '@ohos.filemanagement.userFileManager';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';

import { sleep, getPermissionMgr } from '../../../../../../common';
export default function userfilemgrOnSystem(abilityContext) {
  describe('userfilemgrOnSystem', function () {
    const mgr = userFileManager.getUserFileMgr(abilityContext);
    beforeAll(async function () {
      await getPermissionMgr('ohos.acts.multimedia.userfilemgr', abilityContext);
      console.info('beforeAll case');
    });
    beforeEach(function () {
      console.info('beforeEach case');
    });
    afterEach(async function () {
      console.info('afterEach case');
      await sleep(500);
    });
    afterAll(function () {
      console.info('afterAll case');
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_ON_NORMAL_CALLBACK_0000
     * @tc.name      : on_normal_callback_000
     * @tc.desc      : listening delete file, type NOTIFY_REMOVE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('on_normal_callback_000', 0, async function (done) {
      let enterOn = false;
      try {
        mgr.on('file://media/PhotoAlbum', true, async (changeData) => {
          enterOn = true;
          console.info(`on_normal_callback_000 changeData: ${JSON.stringify(changeData)}`);
          expect(false).assertTrue();
          done();
        });
        let albumName = 'testAlbum' + Date.now();
        await mgr.createAlbum(albumName);
        expect(false).assertTrue();
        done();
      } catch (error) {
        await sleep(500);
        expect(!enterOn).assertTrue();
        done();
      }
    });
  });
}
