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

// @ts-nocheck
import userFileManager from '@ohos.filemanagement.userFileManager'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'

import {
  sleep,
  ImageVideoKey,
  checkPresetsAssets,
  getFileAsset,
  assetFetchOneArgsWithFetchColumn
} from '../../../../../../common'

export default function fileAssetFileKeyTest (abilityContext) {
  describe('fileAssetFileKeyTest', function () {
    const userfilemgr = userFileManager.getUserFileMgr(abilityContext)
    beforeAll(async function () {
      console.info('beforeAll case')
      await checkPresetsAssets(userfilemgr, 'ActsUserFileMgrFileAssetJsTest')
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

    const getPhotoAssetsByKey = async function (done, testNum, fileKey) {
      try {
        const fetchOps = assetFetchOneArgsWithFetchColumn(testNum, ImageVideoKey.DISPLAY_NAME, '01.jpg')
        const asset = await getFileAsset(testNum, fetchOps)
        console.info(`${testNum} fileKey : ${fileKey}`)
        console.info(`${testNum} type : ${asset.get(fileKey)}`)
        const ops = assetFetchOneArgsWithFetchColumn(testNum, fileKey, asset.get(fileKey))
        userfilemgr.getPhotoAssets(ops, async (err, newAssetResult) => {
          if (err) {
            console.info(`${testNum}, err: ${err}`)
            expect(false).assertTrue()
            done()
            return
          }
          const fetchCount = newAssetResult.getCount()
          const currentAsset = await newAssetResult.getFirstObject()
          expect(currentAsset.get(fileKey)).assertEqual(asset.get(fileKey))
          expect(fetchCount > 0).assertTrue()
          done()
        })
      } catch (error) {
        console.info(`${testNum} error : ${error}`)
        expect(false).assertTrue()
        done()
      }
    }

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_02
     * @tc.name      : ImageVideoKey
     * @tc.desc      : ImageVideoKey.FILE_TYPE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_02', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_02'
      const fileKey = ImageVideoKey.FILE_TYPE
      await getPhotoAssetsByKey(done, testNum, fileKey)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_03
     * @tc.name      : ImageVideoKey
     * @tc.desc      : ImageVideoKey.DISPLAY_NAME
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_03', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_03'
      const fileKey = ImageVideoKey.DISPLAY_NAME
      await getPhotoAssetsByKey(done, testNum, fileKey)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_04
     * @tc.name      : ImageVideoKey
     * @tc.desc      : ImageVideoKey.DATE_ADDED
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_04', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_04'
      const fileKey = ImageVideoKey.DATE_ADDED
      await getPhotoAssetsByKey(done, testNum, fileKey)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_05
     * @tc.name      : ImageVideoKey
     * @tc.desc      : ImageVideoKey.DATE_MODIFIED
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_05', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_05'
      const fileKey = ImageVideoKey.DATE_MODIFIED
      await getPhotoAssetsByKey(done, testNum, fileKey)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_06
     * @tc.name      : ImageVideoKey
     * @tc.desc      : ImageVideoKey.TITLE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_06', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_06'
      const fileKey = ImageVideoKey.TITLE
      await getPhotoAssetsByKey(done, testNum, fileKey)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_07
     * @tc.name      : ImageVideoKey
     * @tc.desc      : ImageVideoKey.DURATION
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_07', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_07'
      const fileKey = ImageVideoKey.DURATION
      await getPhotoAssetsByKey(done, testNum, fileKey)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_08
     * @tc.name      : ImageVideoKey
     * @tc.desc      : ImageVideoKey.WIDTH
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_08', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_08'
      const fileKey = ImageVideoKey.WIDTH
      await getPhotoAssetsByKey(done, testNum, fileKey)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_09
     * @tc.name      : ImageVideoKey
     * @tc.desc      : ImageVideoKey.HEIGHT
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_09', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_09'
      const fileKey = ImageVideoKey.HEIGHT
      await getPhotoAssetsByKey(done, testNum, fileKey)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_010
     * @tc.name      : ImageVideoKey
     * @tc.desc      : ImageVideoKey.DATE_TAKEN
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_010', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_010'
      const fileKey = ImageVideoKey.DATE_TAKEN
      await getPhotoAssetsByKey(done, testNum, fileKey)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_011
     * @tc.name      : ImageVideoKey
     * @tc.desc      : ImageVideoKey.ORIENTATION
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_011', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_011'
      const fileKey = ImageVideoKey.ORIENTATION
      await getPhotoAssetsByKey(done, testNum, fileKey)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_012
     * @tc.name      : ImageVideoKey
     * @tc.desc      : ImageVideoKey.FAVORITE
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_012', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_012'
      const fileKey = ImageVideoKey.FAVORITE
      await getPhotoAssetsByKey(done, testNum, fileKey)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_013
     * @tc.name      : ImageVideoKey
     * @tc.desc      : ImageVideoKey.POSITION
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_013', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_013'
      const fileKey = ImageVideoKey.POSITION
      await getPhotoAssetsByKey(done, testNum, fileKey)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_014
     * @tc.name      : ImageVideoKey
     * @tc.desc      : ImageVideoKey.HIDDEN
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_014', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETSBYKEY_014'
      const fileKey = ImageVideoKey.HIDDEN
      await getPhotoAssetsByKey(done, testNum, fileKey)
    })
  })
}
