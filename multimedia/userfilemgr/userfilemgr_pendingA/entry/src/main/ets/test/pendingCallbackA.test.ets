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
import image from '@ohos.multimedia.image';
import userFileManager from '@ohos.filemanagement.userFileManager';

import {
  sleep,
  getPermission,
  isNum,
  copyFile,
  displayNameFetchOps,
  assetByPathFetchOps,
  AUDIOKEY,
  IMAGEVIDEOKEY,
  getSecond,
  checkPresetsAssets,
} from '../../../../../../common.js';

export default function pendingCallbackA(abilityContext) {
  describe('pendingCallbackA', function () {
    const mgr = userFileManager.getUserFileMgr(abilityContext);
    beforeAll(async function () {
      console.info('beforeAll case');
      image.createPixelMap(new ArrayBuffer(4096), { size: { height: 1, width: 2 } }).then(() => {});
      await getPermission('ohos.acts.multimedia.userfilemgrA', abilityContext);
      await checkPresetsAssets(mgr, 'ActsUserFileMgrPendingAJsTest');
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

    async function isPendingTest(done, testNum, create, displayName) {
      try {
        let photoAsset = await mgr[create](displayName);
        expect(photoAsset.pendingTime).assertEqual(0);
        console.info(`${testNum} pendingTime:  ${photoAsset.pendingTime}`);
        photoAsset.isPending(async (err, state) => {
          if (err) {
            expect(false).assertTrue();
            done();
            return;
          }
          console.info(`${testNum} pending state:  ${state}`);
          expect(state).assertEqual(false);
          done();
        });
      } catch (error) {
        console.info(`${testNum} error : ${error}`);
        expect(false).assertTrue();
        done();
      }
    }

    async function setPendingTest(done, testNum, create, displayName, state) {
      try {
        let photoAsset = await mgr[create](displayName);
        expect(photoAsset.pendingTime).assertEqual(0);
        console.info(`${testNum} before pending true pendingTime:  ${photoAsset.pendingTime}`);
        let oldTime = getSecond();
        photoAsset.pending(state, async (err) => {
          if (err) {
            expect(false).assertTrue();
            done();
            return;
          }
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
        });
      } catch (error) {
        console.info(`${testNum} error : ${error}`);
        expect(false).assertTrue();
        done();
      }
    }

    async function isPendingOpenTest(done, testNum, create, getAssets, displayName, DISPLAY_NAME) {
      try {
        let photoAsset = await mgr[create](displayName);
        let assetOp = displayNameFetchOps(testNum, DISPLAY_NAME, displayName);
        await photoAsset.pending(true);
        let fetchResult = await mgr[getAssets](assetOp);
        photoAsset = await fetchResult.getFirstObject();
        await fetchResult.close();
        let fd = await photoAsset.open('rw');
        expect(isNum(fd)).assertTrue();
        await photoAsset.close(fd);
        done();
      } catch (error) {
        console.info(`${testNum} error : ${error}`);
        expect(false).assertTrue();
        done();
      }
    }

    async function isPendingGetThumbnailsTest(done, testNum, create, getAssets, displayName, path) {
      try {
        let photoAsset = await mgr[create](displayName);
        let newCreateFd = await photoAsset.open('rw');
        let localAssetOp = assetByPathFetchOps(testNum, path);
        let localFetchResult = await mgr[getAssets](localAssetOp);
        let localAsset = await localFetchResult.getFirstObject();
        let localFd = await localAsset.open('rw');
        await copyFile(localFd, newCreateFd);
        await photoAsset.close(newCreateFd);
        await localAsset.close(localFd);
        await photoAsset.pending(true);
        try {
          await photoAsset.getThumbnail();
          expect(false).assertTrue();
          done();
        } catch (error) {
          console.info(`${testNum} err : ${error}`);
          expect(true).assertTrue();
          done();
        }
      } catch (error) {
        console.info(`${testNum} error : ${error}`);
        expect(false).assertTrue();
        done();
      }
    }

    async function setPendingAbnormalTest(done, testNum, create, displayName, DISPLAY_NAME, val) {
      try {
        let photoAsset = await mgr[create](displayName);
        expect(photoAsset.pendingTime).assertEqual(0);
        console.info(`isPendingTest pendingTime:  ${photoAsset.pendingTime}`);
        try {
          photoAsset.pending(val, async (err) => {
            expect(false).assertTrue();
            done();
          });
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
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_ISPENDING_001_01
     * @tc.name 	 : ispending
     * @tc.desc 	 : image asset default ispending
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_ISPENDING_001_01', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_ISPENDING_001_01';
      let displayName = `ispendingF_A.jpg`;
      let create = 'createPhotoAsset';
      await isPendingTest(done, testNum, create, displayName);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_ISPENDING_001_02
     * @tc.name 	 : ispending
     * @tc.desc 	 : video asset default ispending
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_ISPENDING_001_02', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_ISPENDING_001_02';
      let displayName = `ispending${new Date().getTime()}.mp4`;
      let create = 'createPhotoAsset';
      await isPendingTest(done, testNum, create, displayName);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_ISPENDING_001_03
     * @tc.name 	 : ispending
     * @tc.desc 	 : audio asset default ispending
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_ISPENDING_001_03', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_ISPENDING_001_03';
      let displayName = `ispending${new Date().getTime()}.mp3`;
      let create = 'createPhotoAsset';
      await isPendingTest(done, testNum, create, displayName);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_002_01
     * @tc.name 	 : ispending
     * @tc.desc 	 : image setPending true
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_002_01', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_002_01';
      let displayName = `ispendingT_A.jpg`;
      let create = 'createPhotoAsset';
      let state = true;
      await setPendingTest(done, testNum, create, displayName, state);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_002_02
     * @tc.name 	 : ispending
     * @tc.desc 	 : video setPending true
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_002_02', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_002_02';
      let displayName = `setPendingT${new Date().getTime()}.mp4`;
      let create = 'createPhotoAsset';
      let state = true;
      await setPendingTest(done, testNum, create, displayName, state);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_002_03
     * @tc.name 	 : ispending
     * @tc.desc 	 : audio setPending true
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_002_03', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_002_03';
      let displayName = `setPendingT${new Date().getTime()}.mp3`;
      let create = 'createPhotoAsset';
      let state = true;
      await setPendingTest(done, testNum, create, displayName, state);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_003_01
     * @tc.name 	 : ispending
     * @tc.desc 	 : image setPending false
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_003_01', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_003_01';
      let displayName = `setPeningF${new Date().getTime()}.jpg`;
      let create = 'createPhotoAsset';
      let state = false;
      await setPendingTest(done, testNum, create, displayName, state);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_003_02
     * @tc.name 	 : ispending
     * @tc.desc 	 : mp4 setPending false
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_003_02', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_003_02';
      let displayName = `setPeningF${new Date().getTime()}.mp4`;
      let create = 'createPhotoAsset';
      let state = false;
      await setPendingTest(done, testNum, create, displayName, state);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_003_03
     * @tc.name 	 : ispending
     * @tc.desc 	 : mp3 setPending false
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_003_03', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_CALLBACK_003_03';
      let displayName = `setPeningF${new Date().getTime()}.mp3`;
      let create = 'createPhotoAsset';
      let state = false;
      await setPendingTest(done, testNum, create, displayName, state);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_004_01
     * @tc.name 	 : ispending
     * @tc.desc 	 : image setPending true can open
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_004_01', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_004_01';
      let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
      let DISPLAY_NAME = IMAGEVIDEOKEY.DISPLAY_NAME;
      let create = 'createPhotoAsset';
      let getAssets = 'getPhotoAssets';
      await isPendingOpenTest(done, testNum, create, getAssets, displayName, DISPLAY_NAME);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_004_02
     * @tc.name 	 : ispending
     * @tc.desc 	 : video setPending true can open
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_004_02', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_004_02';
      let displayName = `ispendingOpen${new Date().getTime()}.mp4`;
      let DISPLAY_NAME = IMAGEVIDEOKEY.DISPLAY_NAME;
      let create = 'createPhotoAsset';
      let getAssets = 'getPhotoAssets';
      await isPendingOpenTest(done, testNum, create, getAssets, displayName, DISPLAY_NAME);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_004_03
     * @tc.name 	 : ispending
     * @tc.desc 	 : audio setPending true can open
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_004_03', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_004_03';
      let displayName = `ispendingOpen${new Date().getTime()}.mp3`;
      let DISPLAY_NAME = AUDIOKEY.DISPLAY_NAME;
      let create = 'createPhotoAsset';
      let getAssets = 'getAudioAssets';
      await isPendingOpenTest(done, testNum, create, getAssets, displayName, DISPLAY_NAME);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_CALLBACK_005_01
     * @tc.name 	 : ispending
     * @tc.desc 	 : image setPending 1
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_CALLBACK_005_01', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_CALLBACK_005_01';
      let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
      let DISPLAY_NAME = IMAGEVIDEOKEY.DISPLAY_NAME;
      let create = 'createPhotoAsset';
      let val = 1;
      await setPendingAbnormalTest(done, testNum, create, displayName, DISPLAY_NAME, val);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_CALLBACK_005_02
     * @tc.name 	 : ispending
     * @tc.desc 	 : image setPending 'a'
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_CALLBACK_005_02', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_CALLBACK_005_02';
      let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
      let DISPLAY_NAME = IMAGEVIDEOKEY.DISPLAY_NAME;
      let create = 'createPhotoAsset';
      let val = 1;
      await setPendingAbnormalTest(done, testNum, create, displayName, DISPLAY_NAME, val);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_CALLBACK_005_03
     * @tc.name 	 : ispending
     * @tc.desc 	 : image setPending null
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_CALLBACK_005_03', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_CALLBACK_005_03';
      let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
      let DISPLAY_NAME = IMAGEVIDEOKEY.DISPLAY_NAME;
      let create = 'createPhotoAsset';
      let val = 1;
      await setPendingAbnormalTest(done, testNum, create, displayName, DISPLAY_NAME, val);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_CALLBACK_005_04
     * @tc.name 	 : ispending
     * @tc.desc 	 : image setPending undefined
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_CALLBACK_005_04', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_CALLBACK_005_04';
      let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
      let DISPLAY_NAME = IMAGEVIDEOKEY.DISPLAY_NAME;
      let create = 'createPhotoAsset';
      let val = 1;
      await setPendingAbnormalTest(done, testNum, create, displayName, DISPLAY_NAME, val);
    });
    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_CALLBACK_005_05
     * @tc.name 	 : ispending
     * @tc.desc 	 : image setPending {a:1}
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_CALLBACK_005_05', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_ABNORMAL_CALLBACK_005_05';
      let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
      let DISPLAY_NAME = IMAGEVIDEOKEY.DISPLAY_NAME;
      let create = 'createPhotoAsset';
      let val = 1;
      await setPendingAbnormalTest(done, testNum, create, displayName, DISPLAY_NAME, val);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_006_01
     * @tc.name 	 : ispending
     * @tc.desc 	 : getThumbnail after image setPending true
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_006_01', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_006_01';
      let displayName = `ispendingGetThumbnails${new Date().getTime()}.jpg`;
      let create = 'createPhotoAsset';
      let getAssets = 'getPhotoAssets';
      let path = 'Pictures/static/';
      await isPendingGetThumbnailsTest(done, testNum, create, getAssets, displayName, path);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_006_02
     * @tc.name 	 : ispending
     * @tc.desc 	 : getThumbnail after video setPending true
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_006_02', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_006_02';
      let displayName = `ispendingGetThumbnails${new Date().getTime()}.mp4`;
      let create = 'createPhotoAsset';
      let getAssets = 'getPhotoAssets';
      let path = 'Videos/static/';
      await isPendingGetThumbnailsTest(done, testNum, create, getAssets, displayName, path);
    });

    /**
     * @tc.number	 : SUB_MEDIA_USERFILEMGR_SETPENDING_006_03
     * @tc.name 	 : ispending
     * @tc.desc 	 : getThumbnail after audio setPending true
     * @tc.size 	 : MEDIUM
     * @tc.type 	 : Function
     * @tc.level	 : Level 2
     */
    it('SUB_MEDIA_USERFILEMGR_SETPENDING_006_03', 0, async function (done) {
      let testNum = 'SUB_MEDIA_USERFILEMGR_SETPENDING_006_03';
      let displayName = `ispendingGetThumbnails${new Date().getTime()}.mp3`;
      let create = 'createPhotoAsset';
      let getAssets = 'getAudioAssets';
      let path = 'Audios/static/';
      await isPendingGetThumbnailsTest(done, testNum, create, getAssets, displayName, path);
    });
  });
}
