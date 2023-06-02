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
  AudioKey,
  ImageVideoKey,
  assetFetchOneArgs,
  checkPresetsAssets,
  checkAssetsCount
} from '../../../../../../common'

export default function onOffReleasePromiseTest (abilityContext) {
  describe('onOffReleasePromiseTest', function () {
    const userfilemgr = userFileManager.getUserFileMgr(abilityContext)
    beforeAll(async function () {
      console.info('beforeAll case')
      await checkPresetsAssets(userfilemgr, 'ActsUserFileMgrAlbumJsTest')
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

    const onTest = async (done, testNum, fetchOps, type, newName, isAudio) => {
      try {
        let count = 0
        userfilemgr.on(type, () => { count++ })
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
        const oldName = asset.displayName
        asset.displayName = newName
        await asset.commitModify()
        await sleep(1000)
        expect(count > 0).assertTrue()
        asset.displayName = oldName
        await asset.commitModify()
        await sleep(1000)
        done()
      } catch (error) {
        console.info(`${testNum}:: error :${error}`)
        expect(false).assertTrue()
        done()
      }
    }
    const offTest = async (done, testNum, fetchOps, type, newName, isAudio) => {
      try {
        let count = 0
        userfilemgr.on(type, () => {
          count++
        })
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
        const oldName = asset.displayName
        asset.displayName = newName
        userfilemgr.off(type)
        await asset.commitModify()
        await sleep(1000)
        expect(count).assertEqual(0)
        asset.displayName = oldName
        await asset.commitModify()
        await sleep(1000)
        done()
      } catch (error) {
        console.info(`${testNum}:: error :${error}`)
        expect(false).assertTrue()
        done()
      }
    }

    /**
     * @tc.number    : SUB_USERFILE_MGR_ON_PROMISE_01
     * @tc.name      : ON
     * @tc.desc      : ON image ASSET
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_ON_PROMISE_01', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_ON_PROMISE_01'
      const currentFetchOps = assetFetchOneArgs(testNum, ImageVideoKey.DISPLAY_NAME, 'onPromise01.jpg')
      const type = 'imageChange'
      const newName = 'imageChange.jpg'
      const isAudio = false
      await onTest(done, testNum, currentFetchOps, type, newName, isAudio)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_ON_PROMISE_03
     * @tc.name      : ON
     * @tc.desc      : ON video ASSET
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_ON_PROMISE_03', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_ON_PROMISE_03'
      const currentFetchOps = assetFetchOneArgs(testNum, ImageVideoKey.DISPLAY_NAME, 'onPromise01.mp4')
      const type = 'videoChange'
      const newName = 'videoChange.mp4'
      const isAudio = false
      await onTest(done, testNum, currentFetchOps, type, newName, isAudio)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_OFF_PROMISE_01
     * @tc.name      : off
     * @tc.desc      : off image ASSET
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_OFF_PROMISE_01', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_OFF_PROMISE_01'
      const currentFetchOps = assetFetchOneArgs(testNum, ImageVideoKey.DISPLAY_NAME, 'offPromise01.jpg')
      const type = 'imageChange'
      const newName = 'imageChange.jpg'
      const isAudio = false
      await offTest(done, testNum, currentFetchOps, type, newName, isAudio)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_OFF_PROMISE_03
     * @tc.name      : off
     * @tc.desc      : off video ASSET
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_OFF_PROMISE_03', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_OFF_PROMISE_03'
      const currentFetchOps = assetFetchOneArgs(testNum, ImageVideoKey.DISPLAY_NAME, 'offPromise01.mp4')
      const type = 'videoChange'
      const newName = 'videoChange.mp4'
      const isAudio = false
      await offTest(done, testNum, currentFetchOps, type, newName, isAudio)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_PROMISE_PROMISE_01
     * @tc.name      : release
     * @tc.desc      : Release MediaLibrary instance
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_PROMISE_PROMISE_01', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_PROMISE_PROMISE_01'
      try {
        await userfilemgr.release()
        expect(true).assertTrue()
        done()
      } catch (error) {
        console.info(`${testNum}:: error :${error}`)
        expect(false).assertTrue()
        done()
      }
    })
  })
}
