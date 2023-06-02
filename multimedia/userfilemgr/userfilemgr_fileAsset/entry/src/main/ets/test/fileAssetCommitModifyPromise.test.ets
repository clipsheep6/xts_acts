/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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

import userFileManager from '@ohos.filemanagement.userFileManager'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'

import {
  sleep,
  IMAGE_TYPE,
  VIDEO_TYPE,
  ImageVideoKey,
  assetFetchOneArgs,
  checkPresetsAssets,
  checkAssetsCount
} from '../../../../../../common'

export default function fileAssetCommitModifyPromiseTest (abilityContext) {
  describe('fileAssetCommitModifyPromiseTest', function () {
    const userfilemgr = userFileManager.getUserFileMgr(abilityContext)
    beforeAll(async function () {
      console.info('beforeAll case')
      await checkPresetsAssets(userfilemgr, 'ActsUserFileMgrFileAsset')
    })
    beforeEach(function () {
      console.info('beforeEach case')
    })
    afterEach(async function () {
      console.info('afterEach case')
      await sleep(10)
    })
    afterAll(function () {
      console.info('afterAll case')
    })

    const checkCommitModify = async function (done, testNum, fetchOps, prop, val, isAudio) {
      try {
        let fetchAssetResult
        if (isAudio) {
          fetchAssetResult = await userfilemgr.getAudioAssets(fetchOps)
        } else {
          fetchAssetResult = await userfilemgr.getPhotoAssets(fetchOps)
        }
        const checkAssetCountPass = await checkAssetsCount(done, testNum, fetchAssetResult, 1)
        if (!checkAssetCountPass) return
        const asset = await fetchAssetResult.getFirstObject()
        const oldVal = asset.get(prop)
        asset.set(prop, val)
        await asset.commitModify()
        asset.set(prop, oldVal.toString())
        await asset.commitModify()
        fetchAssetResult.close()
        done()
      } catch (error) {
        console.info(`${testNum} error : ${error}`)
        expect(false).assertTrue()
        done()
      }
    }

    /**
     * @tc.number    : SUB_USERFILE_MGR_FILEASSET_COMMITMODIFY_PROMISE_01
     * @tc.name      : commitModify
     * @tc.desc      : image asset modify displayName
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_FILEASSET_COMMITMODIFY_PROMISE_01', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_FILEASSET_COMMITMODIFY_PROMISE_01'
      const fetchOps = assetFetchOneArgs(testNum, ImageVideoKey.DISPLAY_NAME, 'commitModifyPromise01.jpg')
      const prop = 'display_name'
      const val = IMAGE_TYPE.toString() + '.jpg'
      const isAudio = false
      await checkCommitModify(done, testNum, fetchOps, prop, val, isAudio)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_FILEASSET_COMMITMODIFY_PROMISE_03
     * @tc.name      : commitModify
     * @tc.desc      : video asset modify displayName
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_USERFILE_MGR_FILEASSET_COMMITMODIFY_PROMISE_03', 2, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_FILEASSET_COMMITMODIFY_PROMISE_03'
      const fetchOps = assetFetchOneArgs(testNum, ImageVideoKey.DISPLAY_NAME, 'commitModifyPromise01.mp4')
      const prop = 'display_name'
      const val = VIDEO_TYPE.toString() + '.mp4'
      const isAudio = false
      await checkCommitModify(done, testNum, fetchOps, prop, val, isAudio)
    })
  })
}
