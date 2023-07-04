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

export default function pendingCallbackB(abilityContext) {
  describe('pendingCallbackB', function () {
    const mgr = userFileManager.getUserFileMgr(abilityContext);
    beforeAll(async function () {
      console.info('beforeAll case');
      await getPermission('ohos.acts.multimedia.userfilemgrB', abilityContext);
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

    async function isPendingTest(done, testNum, displayNameT_A, displayNameF_A) {
      try {
        let assetOp_T = displayNameFetchOps(testNum, IMAGEVIDEOKEY.DISPLAY_NAME, displayNameT_A);
        let fetchResult_T = await mgr.getPhotoAssets(assetOp_T);
        let assetOp_F = displayNameFetchOps(testNum, IMAGEVIDEOKEY.DISPLAY_NAME, displayNameF_A);
        let fetchResult_F = await mgr.getPhotoAssets(assetOp_F);
        console.info(`${testNum} fetchResult_T : ${fetchResult_T.getCount()}`);
        console.info(`${testNum} fetchResult_F : ${fetchResult_F.getCount()}`);
        expect(fetchResult_T.getCount()).assertEqual(0);
        expect(fetchResult_F.getCount()).assertEqual(1);
        await fetchResult_T.close();
        await fetchResult_F.close();
        done();
      } catch (error) {
        console.info(`${testNum} error : ${error}`);
        expect(false).assertTrue();
        done();
      }
    }

    async function isPendingOpenTest(done, testNum, displayNameF_A) {
      try {
        let assetOp = displayNameFetchOps(testNum, IMAGEVIDEOKEY.DISPLAY_NAME, displayNameF_A);
        let fetchResult = await mgr.getPhotoAssets(assetOp);
        let asset = await fetchResult.getFirstObject();
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

    async function setPendingBTest(done, testNum, displayNameT_B) {
      try {
        let photoAsset = await mgr.createPhotoAsset(displayNameT_B);
        await photoAsset.pending(true);
        done();
      } catch (error) {
        console.info(`${testNum} error : ${error}`);
        expect(false).assertTrue();
        done();
      }
    }

    async function setPendingATest(done, testNum, displayNameF_A) {
      try {
        let assetOp = displayNameFetchOps(testNum, IMAGEVIDEOKEY.DISPLAY_NAME, displayNameF_A);
        let fetchResult = await mgr.getPhotoAssets(assetOp);
        let photoAsset = await fetchResult.getFirstObject();
        let state = await photoAsset.isPending();
        expect(state).assertEqual(false);
        await fetchResult.close();
        try {
          await photoAsset.pending(true);
          expect(false).assertTrue();
          done();
        } catch (error) {
          console.info(`${testNum} error : ${error}`);
          fetchResult = await mgr.getPhotoAssets(assetOp);
          photoAsset = await fetchResult.getFirstObject();
          expect(await photoAsset.isPending()).assertEqual(false);
          await fetchResult.close();
          done();
        }
      } catch (error) {
        console.info(`${testNum} error : ${error}`);
        expect(false).assertTrue();
        done();
      }
    }

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_007_01
     * @tc.name 	 : setPending
     * @tc.desc 	 : find image asset ispending is true & false from hapA
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_007_01', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_007_01';
      let displayNameT_A = 'ispendingT_A.jpg';
      let displayNameF_A = 'ispendingF_A.jpg';
      await isPendingTest(done, testNum, displayNameT_A, displayNameF_A);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_007_02
     * @tc.name 	 : setPending
     * @tc.desc 	 : open hapA image asset ispending is false
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_007_02', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_007_02';
      let displayNameF_A = 'ispendingF_A.jpg';
      await isPendingOpenTest(done, testNum, displayNameF_A);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_007_03
     * @tc.name 	 : setPending
     * @tc.desc 	 : image asset setPending by true
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_007_03', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_007_03';
      let displayNameT_B = 'ispendingT_B.jpg';
      await setPendingBTest(done, testNum, displayNameT_B);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_007_04
     * @tc.name 	 : setPending
     * @tc.desc 	 : hapA image asset setPending by true
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_007_04', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_007_04';
      let displayNameF_A = 'ispendingF_A.jpg';

      await setPendingATest(done, testNum, displayNameF_A);
    });
  });
}
