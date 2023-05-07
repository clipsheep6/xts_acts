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
import image from '@ohos.multimedia.image'
import {
  sleep,
  ImageVideoKey,
  assetFetchOneArgs,
  checkPresetsAssets,
  checkAssetsCount
} from '../../../../../../common'

export default function fileAssetGetThumbnailPromiseTest (abilityContext) {
  describe('fileAssetGetThumbnailPromiseTest', function () {
    image.createPixelMap(new ArrayBuffer(4096), { size: { height: 1, width: 2 } }).then((pixelmap) => { })
    const userfilemgr = userFileManager.getUserFileMgr(abilityContext)
    beforeAll(async function () {
      console.info('beforeAll case')
      await checkPresetsAssets(userfilemgr, 'ActsUserFileMgrGetThumbnailTest')
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

    async function testGetThumbnail (done, testNum, fetchOps, size, isAudio) {
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
        fetchAssetResult.close()
        console.info(`${testNum}:displayName ${asset.displayName}`)
        let pixelmap
        if (size === 'default') {
          size = { width: 256, height: 256 }
          pixelmap = await asset.getThumbnail()
        } else {
          pixelmap = await asset.getThumbnail(size)
        }
        const info = await pixelmap.getImageInfo()
        console.info(`${testNum}:: width :${info.size.width} height :${info.size.height}`)
        expect(info.size.width).assertEqual(size.width)
        expect(info.size.height).assertEqual(size.height)
        done()
      } catch (error) {
        console.info(`${testNum}:: error :${error}`)
        expect(false).assertTrue()
        done()
      }
    }

    /**
     * @tc.number    : SUB_USERFILE_MGR_FILEASSET_GETTHUMBNAIL_PROMISE_01_001
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(image) by no arg
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_FILEASSET_GETTHUMBNAIL_PROMISE_01_001', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_FILEASSET_GETTHUMBNAIL_PROMISE_01_001'
      const dOp = assetFetchOneArgs(testNum, ImageVideoKey.DISPLAY_NAME, 'thumPromise01.jpg')
      const size = 'default'
      const isAudio = false
      await testGetThumbnail(done, testNum, dOp, size, isAudio)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_FILEASSET_GETTHUMBNAIL_PROMISE_01_002
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(image) by { width: 128, height: 128 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_USERFILE_MGR_FILEASSET_GETTHUMBNAIL_PROMISE_01_002', 3, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_FILEASSET_GETTHUMBNAIL_PROMISE_01_002'
      const dOp = assetFetchOneArgs(testNum, ImageVideoKey.DISPLAY_NAME, 'thumPromise02.jpg')
      const size = { width: 128, height: 128 }
      const isAudio = false
      await testGetThumbnail(done, testNum, dOp, size, isAudio)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_FILEASSET_GETTHUMBNAIL_PROMISE_03_001
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(video) by no arg
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_USERFILE_MGR_FILEASSET_GETTHUMBNAIL_PROMISE_03_001', 3, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_FILEASSET_GETTHUMBNAIL_PROMISE_03_001'
      const dOp = assetFetchOneArgs(testNum, ImageVideoKey.DISPLAY_NAME, 'thumPromise01.mp4')
      const size = 'default'
      const isAudio = false
      await testGetThumbnail(done, testNum, dOp, size, isAudio)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_FILEASSET_GETTHUMBNAIL_PROMISE_03_002
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(video) by { width: 128, height: 128 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_USERFILE_MGR_FILEASSET_GETTHUMBNAIL_PROMISE_03_002', 2, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_FILEASSET_GETTHUMBNAIL_PROMISE_03_002'
      const dOp = assetFetchOneArgs(testNum, ImageVideoKey.DISPLAY_NAME, 'thumPromise02.mp4')
      const size = { width: 128, height: 128 }
      const isAudio = false
      await testGetThumbnail(done, testNum, dOp, size, isAudio)
    })
  })
}
