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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';
import userFileManager from '@ohos.filemanagement.userFileManager';
import { sleep, getPermission, isNum, displayNameFetchOps, IMAGEVIDEOKEY } from '../../../../../../common.js';

export default function pendingCallbackC(abilityContext) {
  describe('pendingCallbackC', function () {
    const mgr = userFileManager.getUserFileMgr(abilityContext);
    beforeAll(async function () {
      console.info('beforeAll case');
      await getPermission('ohos.acts.multimedia.userfilemgrC', abilityContext);
    });
    beforeEach(function () {
      console.info('beforeEach case');
    });
    afterEach(async function () {
      console.info('afterEach case');
      await sleep();
    });
    afterAll(async function () {
      console.info('afterAll case');
    });

    async function isPendingOpenTest(done, testNum, displayNameT_B) {
      try {
        let assetOp = displayNameFetchOps(testNum, IMAGEVIDEOKEY.DISPLAY_NAME, displayNameT_B);
        let fetchResult = await mgr.getPhotoAssets(assetOp);
        let asset = await fetchResult.getFirstObject();
        expect(asset.pendingTime).assertEqual(0);
        let state = await asset.isPending();
        expect(state).assertEqual(false);
        let fd = await asset.open('rw');
        expect(isNum(fd)).assertTrue();
        await fetchResult.close();
        await asset.close(fd);
        done();
      } catch (error) {
        console.info(`${testNum} error : ${error}`);
        expect(false).assertTrue();
        done();
      }
    }

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_008_01
     * @tc.name 	 : trash
     * @tc.desc 	 : open hapB image asset ispending is true after uninstall hapB
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_008_01', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_008_01';
      let displayNameT_B = 'ispendingT_B.jpg';
      await isPendingOpenTest(done, testNum, displayNameT_B);
    });
  });
}
