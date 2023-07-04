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

import { sleep, AUDIOKEY, IMAGEVIDEOKEY, getSecond } from '../../../../../../common.js';

export default function pendingCallbackA(abilityContext) {
  describe('pendingCallbackA', function () {
    const mgr = userFileManager.getUserFileMgr(abilityContext);

    beforeAll(async function () {
      console.info('beforeAll case');
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

    async function setPendingTest(done, testNum, create, displayName, state) {
      try {
        let photoAsset = await mgr[create](displayName);
        expect(photoAsset.pendingTime).assertEqual(0);
        console.info(`${testNum} before pending true pendingTime:  ${photoAsset.pendingTime}`);
        let oldTime = getSecond();
        await photoAsset.pending(state);
        let currentTime = getSecond();
        console.info(`${testNum} after pending true pendingTime:  ${photoAsset.pendingTime}`);
        if (state) {
          expect(photoAsset.pendingTime <= currentTime && photoAsset.pendingTime >= oldTime).assertTrue();
        } else {
          expect(photoAsset.pendingTime).assertEqual(0);
        }
        expect(await photoAsset.isPending()).assertEqual(state);
        console.info(`${testNum} isPending:  ${await photoAsset.isPending()}`);
        done();
      } catch (error) {
        console.info(`${testNum} error : ${error}`);
        expect(false).assertTrue();
        done();
      }
    }

    async function setPendingAbnormalTest(done, testNum, create, displayName, val) {
      try {
        let photoAsset = await mgr[create](displayName);
        expect(photoAsset.pendingTime).assertEqual(0);
        console.info(`isPendingTest pendingTime:  ${photoAsset.pendingTime}`);
        try {
          await photoAsset.pending(val);
          expect(false).assertTrue();
          done();
        } catch (error) {
          expect(true).assertTrue();
          done();
        }
      } catch (error) {
        console.info(`${testNum} error : ${error}`);
        expect(false).assertTrue();
        done();
      }
    }

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_PROMISE_002_01
     * @tc.name 	 : ispending
     * @tc.desc 	 : image setPending true
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_PROMISE_002_01', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_PROMISE_002_01';
      let displayName = `ispendingT${new Date().getTime()}.jpg`;
      let create = 'createPhotoAsset';
      let state = true;
      await setPendingTest(done, testNum, create, displayName, state);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_PROMISE_002_02
     * @tc.name 	 : ispending
     * @tc.desc 	 : video setPending true
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_PROMISE_002_02', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_PROMISE_002_02';
      let displayName = `setPendingT${new Date().getTime()}.mp4`;
      let create = 'createPhotoAsset';
      let state = true;
      await setPendingTest(done, testNum, create, displayName, state);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_PROMISE_002_03
     * @tc.name 	 : ispending
     * @tc.desc 	 : audio setPending true
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_PROMISE_002_03', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_PROMISE_002_03';
      let displayName = `setPendingT${new Date().getTime()}.mp3`;
      let create = 'createPhotoAsset';
      let state = true;
      await setPendingTest(done, testNum, create, displayName, state);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_PROMISE_003_01
     * @tc.name 	 : ispending
     * @tc.desc 	 : image setPending false
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_PROMISE_003_01', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_PROMISE_003_01';
      let displayName = `setPeningF${new Date().getTime()}.jpg`;
      let create = 'createPhotoAsset';
      let state = false;
      await setPendingTest(done, testNum, create, displayName, state);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_PROMISE_003_02
     * @tc.name 	 : ispending
     * @tc.desc 	 : mp4 setPending false
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_PROMISE_003_02', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_PROMISE_003_02';
      let displayName = `setPeningF${new Date().getTime()}.mp4`;
      let create = 'createPhotoAsset';
      let state = false;
      await setPendingTest(done, testNum, create, displayName, state);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_PROMISE_003_03
     * @tc.name 	 : ispending
     * @tc.desc 	 : mp3 setPending false
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_PROMISE_003_03', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_PROMISE_003_03';
      let displayName = `setPeningF${new Date().getTime()}.mp3`;
      let create = 'createPhotoAsset';
      let state = false;
      await setPendingTest(done, testNum, create, displayName, state);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_PROMISE_005_01
     * @tc.name 	 : ispending
     * @tc.desc 	 : image setPending 1
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_PROMISE_005_01', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_PROMISE_005_01';
      let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
      let create = 'createPhotoAsset';
      let val = 1;
      await setPendingAbnormalTest(done, testNum, create, displayName, val);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_PROMISE_005_02
     * @tc.name 	 : ispending
     * @tc.desc 	 : image setPending 'a'
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_PROMISE_005_02', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_PROMISE_005_02';
      let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
      let create = 'createPhotoAsset';
      let val = 1;
      await setPendingAbnormalTest(done, testNum, create, displayName, val);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_PROMISE_005_03
     * @tc.name 	 : ispending
     * @tc.desc 	 : image setPending null
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_PROMISE_005_03', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_PROMISE_005_03';
      let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
      let create = 'createPhotoAsset';
      let val = 1;
      await setPendingAbnormalTest(done, testNum, create, displayName, val);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_PROMISE_005_04
     * @tc.name 	 : ispending
     * @tc.desc 	 : image setPending undefined
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_PROMISE_005_04', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_PROMISE_005_04';
      let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
      let create = 'createPhotoAsset';
      let val = 1;
      await setPendingAbnormalTest(done, testNum, create, displayName, val);
    });
    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_PROMISE_005_05
     * @tc.name 	 : ispending
     * @tc.desc 	 : image setPending {a:1}
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_PROMISE_005_05', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_PROMISE_005_05';
      let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
      let create = 'createPhotoAsset';
      let val = 1;
      await setPendingAbnormalTest(done, testNum, create, displayName, val);
    });
  });
}
