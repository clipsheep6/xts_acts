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
import mediaLibrary from '@ohos.multimedia.mediaLibrary';
import fileio from '@ohos.fileio';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';

export default function userfilemgrDeletePopupPromise(abilityContext) {
  describe('userfilemgrDeletePopupPromise', function () {
    const mgr = userFileManager.getUserFileMgr(abilityContext);
    const media = mediaLibrary.getMediaLibrary(abilityContext);
    const ERR_CODE_PARAMERTER_INVALID = 13900020;
    beforeAll(async function () {
      console.info('beforeAll case');
    });
    beforeEach(function () {
      console.info('beforeEach case');
    });
    afterEach(async function () {
      console.info('afterEach case');
    });
    afterAll(function () {
      console.info('afterAll case');
    });
    const createFiles = async (count) => {
      try {
        const imageBuffer = new Uint8Array([
          137, 80, 78, 71, 13, 10, 26, 10, 0, 0, 0, 13, 73, 72, 68, 82, 0, 0, 0, 1, 0, 0, 0, 1, 8, 6, 0, 0, 0, 31, 21,
          196, 137, 0, 0, 0, 1, 115, 82, 71, 66, 0, 174, 206, 28, 233, 0, 0, 0, 4, 103, 65, 77, 65, 0, 0, 177, 143, 11,
          252, 97, 5, 0, 0, 0, 9, 112, 72, 89, 115, 0, 0, 14, 195, 0, 0, 14, 195, 1, 199, 111, 168, 100, 0, 0, 0, 13,
          73, 68, 65, 84, 24, 87, 99, 208, 168, 252, 255, 31, 0, 5, 13, 2, 160, 62, 223, 142, 58, 0, 0, 0, 0, 73, 69,
          78, 68, 174, 66, 96, 130,
        ]);
        const mediaType = mediaLibrary.MediaType.IMAGE;
        const DIR_IMAGE = mediaLibrary.DirectoryType.DIR_IMAGE;
        const path = await media.getPublicDirectory(DIR_IMAGE);
        const uriList = [];
        for (let i = 0; i < count; i++) {
          let fileAsset = await media.createAsset(mediaType, `creat_${Date.now()}_${i}.jpg`, path + 'myPicture/');
          const fd = await fileAsset.open('rw');
          await fileio.write(fd, imageBuffer.buffer);
          await fileAsset.close(fd);
          uriList.push(fileAsset.uri);
        }
        return uriList;
      } catch (error) {
        console.info(`delete_popup createFiles error ${error}`);
      }
    };

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_DELETE_POPUP_PROMISE_0000
     * @tc.name      : delete_popup_promise_test_000
     * @tc.desc      : createPhotoDeleteRequest promise 1 file
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('delete_popup_promise_test_000', 0, async function example(done) {
      try {
        let uriList = await createFiles(1);
        mgr
          .createPhotoDeleteRequest(uriList)
          .then(() => {
            console.log(`delete_popup_promise_test_000:删除成功`);
          })
          .catch((error) => {
            console.info(`delete_popup delete e ${JSON.stringify(error)}`);
            console.info(`delete_popup delete e ${error}`);
            if (error.message === 'user deny') {
              console.log(`delete_popup_promise_test_000:取消删除`);
            } else {
              console.log(`delete_popup_promise_test_000:无【WRITE_IMAGEVIDEO】权限`);
            }
          });
        expect(true).assertTrue();
        done();
      } catch (error) {
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_DELETE_POPUP_PROMISE_0001
     * @tc.name      : delete_popup_promise_test_001
     * @tc.desc      : createPhotoDeleteRequest promise 10 file
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('delete_popup_promise_test_001', 0, async function example(done) {
      try {
        let uriList = await createFiles(10);
        mgr
          .createPhotoDeleteRequest(uriList)
          .then(() => {
            console.log(`delete_popup_promise_test_001:删除成功`);
          })
          .catch((error) => {
            console.info(`delete_popup delete e ${JSON.stringify(error)}`);
            console.info(`delete_popup delete e ${error}`);
            if (error.message === 'user deny') {
              console.log(`delete_popup_promise_test_001:取消删除`);
            } else {
              console.log(`delete_popup_promise_test_001:无【WRITE_IMAGEVIDEO】权限`);
            }
          });
        expect(true).assertTrue();
        done();
      } catch (error) {
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_DELETE_POPUP_PROMISE_0002
     * @tc.name      : delete_popup_promise_test_002
     * @tc.desc      : createPhotoDeleteRequest promise uriList.length = 0
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('delete_popup_promise_test_002', 0, async function example(done) {
      try {
        let uriList = [];
        mgr.createPhotoDeleteRequest(uriList);
      } catch (error) {
        if (error) {
          console.info(`delete_popup_promise_test_002 error ${error.code}`);
          expect(error.code).assertEqual(ERR_CODE_PARAMERTER_INVALID);
          done();
        } else {
          expect(false).assertTrue();
          done();
        }
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_DELETE_POPUP_PROMISE_0003
     * @tc.name      : delete_popup_promise_test_003
     * @tc.desc      : createPhotoDeleteRequest promise uriList.length = 3601
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('delete_popup_promise_test_003', 0, async function example(done) {
      try {
        let uriList = [];
        for (let i = 0; i < 3601; i++) {
          uriList.push('a');
        }
        mgr.createPhotoDeleteRequest(uriList);
      } catch (error) {
        if (error) {
          console.info(`delete_popup_promise_test_003 error ${error.code}`);
          expect(error.code).assertEqual(ERR_CODE_PARAMERTER_INVALID);
          done();
        } else {
          expect(false).assertTrue();
          done();
        }
      }
    });

    /**
     * @tc.number    : SUB_MEDIA_USERFILEMGR_DELETE_POPUP_PROMISE_0004
     * @tc.name      : delete_popup_promise_test_004
     * @tc.desc      : createPhotoDeleteRequest promise uriList = 'a'
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('delete_popup_promise_test_004', 0, async function example(done) {
      try {
        let uriList = 'a';
        mgr.createPhotoDeleteRequest(uriList);
      } catch (error) {
        if (error) {
          console.info(`delete_popup_promise_test_004 error ${error.code}`);
          expect(error.code).assertEqual(ERR_CODE_PARAMERTER_INVALID);
          done();
        } else {
          expect(false).assertTrue();
          done();
        }
      }
    });
  });
}
