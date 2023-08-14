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
  photoFetchOption,
  getFileAsset,
  getPermission
} from '../../../../../../common'

export default function setUserCommentTest () {
  describe('setUserCommentTest', function () {

    beforeAll(async function () {
      console.info('beforeAll case')
      await getPermission()
    })
    const helper = photoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext)

    async function setUserCommentCallback (done, testNum, fetchOps) {
      try {
        let fetchOp = {
            fetchColumns: ["all_exif", "user_comment"],
        };
        let fetchFileResult = await helper.getFileAssets(fetchOp);
        const asset = await fetchFileResult.getFirstObject();
        const userComment: string = "user_comment";
        asset.setUserComment(userComment, async (err) => {
          try {
            if (err !== undefined) {
              console.info(`${testNum} err: ${err}`);
              expect(false).assertTrue();
            } else {
              let exifMessage = asset.getExif();
              userComment = JSON.stringify(JSON.parse(exifMessage), ['UserComment']);
              console.info(`${testNum} user comment: ${userComment}`);
              expect(userComment.search("user_comment") != -1).assertTrue();
            }
          } catch (error) {
            console.info(`${testNum} error: ${error}`);
          }
          done();
        })
      } catch (error) {
        console.info(`${testNum} failed; error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    }
    
    async function setUserCommentAbnormalCallback (done, testNum, fetchOps, newUserComment) {
      try {
        let fetchOp = {
            fetchColumns: ["all_exif", "user_comment"],
        };
        let fetchFileResult = await helper.getFileAssets(fetchOp);
        const asset = await fetchFileResult.getFirstObject();
        asset.setUserComment(newUserComment, async (err) => {
          try {
            if (err !== undefined) {
              console.info(`${testNum} err: ${err}`);
            } else {
              expect(false).assertTrue();
            }
          } catch (error) {
            console.info(`${testNum} error: ${error}`);
          }
          done();
        })
      } catch (error) {
        console.info(`${testNum} failed; error: ${error}`);
        done();
      }
    }

    async function setUserCommentPromise (done, testNum, fetchOps) {
      try {
        let fetchOp = {
            fetchColumns: ["all_exif", "user_comment"],
        };
        let fetchFileResult = await helper.getFileAssets(fetchOp);
        const asset = await fetchFileResult.getFirstObject();
        const userComment: string = "user_comment";
        asset.setUserComment(userComment);
        let exifMessage = asset.getExif();
        userComment = JSON.stringify(JSON.parse(exifMessage), ['UserComment']);
        console.info(`${testNum} user comment: ${userComment}`);
        expect(userComment.search("user_comment") != -1).assertTrue();
        fetchFileResult.close();
        done();
      } catch (error) {
        console.info(`${testNum} failed; error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    }

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_SET_USER_COMMENT_0000
     * @tc.name      : setUserComment_callback_000
     * @tc.desc      : setUserComment
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('setUserComment_callback_000', 0, async function (done) {
      const testNum = 'setUserComment_callback_000';
      const fetchOps = photoFetchOption(testNum, photoKeys.DISPLAY_NAME, 'userCommentCb01.jpg');
      await setUserCommentCallback(done, testNum, fetchOps);
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_CALLBACK_SET_USER_COMMENT_0100
     * @tc.name      : setUserComment_callback_001
     * @tc.desc      : setUserComment
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('setUserComment_callback_001', 0, async function (done) {
      const testNum = 'setUserComment_callback_001';
      const fetchOps = photoFetchOption(testNum, photoKeys.DISPLAY_NAME, 'userCommentCb02.jpg');
      const newUserComment = 123;
      await setUserCommentAbnormalCallback(done, testNum, fetchOps, newUserComment);
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_SET_USER_COMMENT_0000
     * @tc.name      : setUserComment_promise_000
     * @tc.desc      : setUserComment
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('setUserComment_promise_000', 0, async function (done) {
      const testNum = 'setUserComment_promise_000';
      const fetchOps = photoFetchOption(testNum, photoKeys.DISPLAY_NAME, 'userCommentCb01.jpg');
      await setUserCommentPromise(done, testNum, fetchOps);
    });
  })
}