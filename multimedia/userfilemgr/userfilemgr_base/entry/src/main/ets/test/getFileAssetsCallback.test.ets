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
  AUDIO_TYPE,
  AudioKey,
  ImageVideoKey,
  assetFetchOneArgs,
  checkPresetsAssets,
  checkAssetsCount,
  getPermission
} from '../../../../../../common'

export default function getFileAssetsCallbackTest (abilityContext) {
  describe('getFileAssetsCallbackTest', function () {
    const userfilemgr = userFileManager.getUserFileMgr(abilityContext)
    beforeAll(async function () {
      console.info('beforeAll case')
      await getPermission()
      await checkPresetsAssets(userfilemgr, 'ActsUserFileMgrBase')
    })
    beforeEach(function () {
      console.info('beforeEach case')
    })
    afterEach(async function () {
      console.info('afterEach case')
      await sleep(500)
    })
    afterAll(function () {
      console.info('afterAll case')
    })

    const props = {
      image: {
        displayName: 'deleteCallback01.jpg',
        fileType: IMAGE_TYPE.toString()
      },
      video: {
        displayName: 'deleteCallback01.mp4',
        fileType: VIDEO_TYPE.toString()
      }
    }

    async function getFirstObjectTest (done, testNum, fetchOp, isAudio) {
      try {
        let fetchAssetResult
        if (isAudio) {
          fetchAssetResult = await userfilemgr.getAudioAssets(fetchOp)
        } else {
          fetchAssetResult = await userfilemgr.getPhotoAssets(fetchOp)
        }
        const expectCount = 4
        const checkAssetCountPass = await checkAssetsCount(done, testNum, fetchAssetResult, expectCount)
        if (!checkAssetCountPass) return
        fetchAssetResult.getFirstObject(async (err, asset) => {
          if (err) {
            console.info(`${testNum} err : ${err}`)
            expect.assertFail()
            fetchAssetResult.close()
            done()
            return
          }
          expect(asset !== undefined).assertTrue()
          fetchAssetResult.close()
        })
        done()
      } catch (error) {
        console.info(`${testNum}:: error :${error}`)
        expect(false).assertTrue()
        done()
      }
    }

    async function getLastObjectTest (done, testNum, fetchOp, isAudio) {
      try {
        let fetchAssetResult
        if (isAudio) {
          fetchAssetResult = await userfilemgr.getAudioAssets(fetchOp)
        } else {
          fetchAssetResult = await userfilemgr.getPhotoAssets(fetchOp)
        }
        const expectCount = 4
        const checkAssetCountPass = await checkAssetsCount(done, testNum, fetchAssetResult, expectCount)
        if (!checkAssetCountPass) return
        fetchAssetResult.getLastObject(async (err, asset) => {
          if (err) {
            console.info(`${testNum} err : ${err}`)
            expect.assertFail()
            fetchAssetResult.close()
            done()
            return
          }
          expect(asset !== undefined).assertTrue()
          fetchAssetResult.close()
        })
        done()
      } catch (error) {
        console.info(`${testNum}:: error :${error}`)
        expect(false).assertTrue()
        done()
      }
    }

    async function getPositionObjectTest (done, testNum, fetchOp, pos, isAudio) {
      try {
        let fetchAssetResult
        if (isAudio) {
          fetchAssetResult = await userfilemgr.getAudioAssets(fetchOp)
        } else {
          fetchAssetResult = await userfilemgr.getPhotoAssets(fetchOp)
        }
        const expectCount = 4
        const checkAssetCountPass = await checkAssetsCount(done, testNum, fetchAssetResult, expectCount)
        if (!checkAssetCountPass) return
        fetchAssetResult.getPositionObject(pos, async (err, asset) => {
          if (err) {
            console.info(`${testNum} err : ${err}`)
            expect.assertFail()
            fetchAssetResult.close()
            done()
            return
          }
          expect(asset !== undefined).assertTrue()
          fetchAssetResult.close()
        })
        done()
      } catch (error) {
        console.info(`${testNum}:: error :${error}`)
        expect(false).assertTrue()
        done()
      }
    }

    async function isAfterLastTest (done, testNum, fetchOp, isAudio) {
      try {
        let fetchAssetResult
        if (isAudio) {
          fetchAssetResult = await userfilemgr.getAudioAssets(fetchOp)
        } else {
          fetchAssetResult = await userfilemgr.getPhotoAssets(fetchOp)
        }
        const expectCount = 4
        const checkAssetCountPass = await checkAssetsCount(done, testNum, fetchAssetResult, expectCount)
        if (!checkAssetCountPass) return
        let asset = await fetchAssetResult.getFirstObject()
        for (let i = 1; i < expectCount; i++) {
          asset = await fetchAssetResult.getNextObject()
          if (i === expectCount - 1) {
            const result = fetchAssetResult.isAfterLast()
            expect(result).assertTrue()
            fetchAssetResult.close()
            done()
          }
        }
        done()
      } catch (error) {
        console.info(`${testNum} error ${error}`)
        expect(false).assertTrue()
        done()
      }
    }

    async function checkFileAssetAttr (done, testNum, fetchOp, type, isAudio) {
      try {
        let fetchAssetResult
        if (isAudio) {
          fetchAssetResult = await userfilemgr.getAudioAssets(fetchOp)
        } else {
          fetchAssetResult = await userfilemgr.getPhotoAssets(fetchOp)
        }
        const expectCount = 4
        const checkAssetCountPass = await checkAssetsCount(done, testNum, fetchAssetResult, expectCount)
        if (!checkAssetCountPass) return
        fetchAssetResult.getFirstObject(async (err, asset) => {
          if (err) {
            console.info(`${testNum} err : ${err}`)
            expect.assertFail()
            fetchAssetResult.close()
            done()
            return
          }
          expect(asset.displayName).assertEqual(props[type].displayName)
          expect(asset.uri !== undefined).assertTrue()
          fetchAssetResult.close()
          done()
        })
      } catch (error) {
        console.info(`${testNum}:: error :${error}`)
        expect(false).assertTrue()
        done()
      }
    }

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_01_001
     * @tc.name      : getFirstObject
     * @tc.desc      : getFirstObject query image assets
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_01_001', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_01_001'
      const currentFetchOps = assetFetchOneArgs(testNum, 'media_type', IMAGE_TYPE)
      const isAudio = false
      await getFirstObjectTest(done, testNum, currentFetchOps, isAudio)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_01_003
     * @tc.name      : getFirstObject
     * @tc.desc      : getFirstObject query video assets
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_01_003', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_01_003'
      const currentFetchOps = assetFetchOneArgs(testNum, 'media_type', VIDEO_TYPE)
      const isAudio = false
      await getFirstObjectTest(done, testNum, currentFetchOps, isAudio)
    })

    // ------------------------------------------------------------------------------

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_02_001
     * @tc.name      : getLastObject
     * @tc.desc      : getLastObject query image assets
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_02_001', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_02_001'
      const currentFetchOps = assetFetchOneArgs(testNum, 'media_type', IMAGE_TYPE)
      const isAudio = false
      await getLastObjectTest(done, testNum, currentFetchOps, isAudio)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_02_003
     * @tc.name      : getLastObject
     * @tc.desc      : getLastObject query video assets
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_02_003', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_02_003'
      const currentFetchOps = assetFetchOneArgs(testNum, 'media_type', VIDEO_TYPE)
      const isAudio = false
      await getLastObjectTest(done, testNum, currentFetchOps, isAudio)
    })

    // ------------------------------------------------------------------------------

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_03_001
     * @tc.name      : getPositionObject
     * @tc.desc      : getPositionObject query image assets
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_03_001', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_03_001'
      const currentFetchOps = assetFetchOneArgs(testNum, 'media_type', IMAGE_TYPE)
      const pos = 0
      const isAudio = false
      await getPositionObjectTest(done, testNum, currentFetchOps, pos, isAudio)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_03_003
     * @tc.name      : getPositionObject
     * @tc.desc      : getPositionObject query video assets
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_03_003', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_03_003'
      const currentFetchOps = assetFetchOneArgs(testNum, 'media_type', VIDEO_TYPE)
      const pos = 0
      const isAudio = false
      await getPositionObjectTest(done, testNum, currentFetchOps, pos, isAudio)
    })

    // ------------------------------------------------------------------------------

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_04_001
     * @tc.name      : isAfterLast
     * @tc.desc      : isAfterLast query image assets
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_04_001', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_04_001'
      const currentFetchOps = assetFetchOneArgs(testNum, 'media_type', IMAGE_TYPE)
      const isAudio = false
      await isAfterLastTest(done, testNum, currentFetchOps, isAudio)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_04_003
     * @tc.name      : isAfterLast
     * @tc.desc      : isAfterLast query video assets
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_04_003', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_04_003'
      const currentFetchOps = assetFetchOneArgs(testNum, 'media_type', VIDEO_TYPE)
      const isAudio = false
      await isAfterLastTest(done, testNum, currentFetchOps, isAudio)
    })

    // ------------------------------------------------------------------------------

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_05_001
     * @tc.name      : getPhotoAssets
     * @tc.desc      : query image assets
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_05_001', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_05_001'
      const currentFetchOps = assetFetchOneArgs(testNum, 'media_type', IMAGE_TYPE)
      const type = 'image'
      const isAudio = false
      await checkFileAssetAttr(done, testNum, currentFetchOps, type, isAudio)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_05_003
     * @tc.name      : getPhotoAssets
     * @tc.desc      : query video assets
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_05_003', 0, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_GETPHOTOASSETS_CALLBACK_05_003'
      const currentFetchOps = assetFetchOneArgs(testNum, 'media_type', VIDEO_TYPE)
      const type = 'video'
      const isAudio = false
      await checkFileAssetAttr(done, testNum, currentFetchOps, type, isAudio)
    })
  })
}
