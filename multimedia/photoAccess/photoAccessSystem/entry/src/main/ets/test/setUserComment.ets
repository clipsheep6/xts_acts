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

    async function setUserCommentCallback (done, testNum, fetchOps) {
      try {
        const asset = await getFileAsset(testNum, fetchOps);
        const key = photoKeys.USER_COMMENT;
        const userComment: string = asset.get(key).toString();
        console.info(`${testNum} userComment: ${userComment}`)
        asset.setUserComment(testNum, async (err) => {
          try {
            if (err !== undefined) {
              console.info(`${testNum} err: ${err}`);
              expect(false).assertTrue();
            } else {
              const newAsset = await getFileAsset(testNum, fetchOps);
              const userComment: string = newAsset.get(key).toString();
              console.info(`${testNum} userComment: ${userComment}`)
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
        const asset = await getFileAsset(testNum, fetchOps);
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
  })
}
