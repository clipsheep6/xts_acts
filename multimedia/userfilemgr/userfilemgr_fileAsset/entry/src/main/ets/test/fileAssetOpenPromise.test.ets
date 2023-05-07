/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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
import fileio from '@ohos.fileio'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import {
  sleep,
  isNum,
  IMAGE_TYPE,
  VIDEO_TYPE,
  assetFetchOneArgs,
  checkPresetsAssets,
  checkAssetsCount
} from '../../../../../../common'
export default function fileAssetOpenPromise (abilityContext) {
  describe('fileAssetOpenPromise', function () {
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

    const rOpenTest = async function (done, testNum, fetchOps, assetProps, expectCount, isAudio) {
      let asset
      let fd
      try {
        let fetchAssetResult
        if (isAudio) {
          fetchAssetResult = await userfilemgr.getAudioAssets(fetchOps)
        } else {
          fetchAssetResult = await userfilemgr.getPhotoAssets(fetchOps)
        }
        const checkAssetCountPass = await checkAssetsCount(done, testNum, fetchAssetResult, expectCount)
        if (!checkAssetCountPass) return
        asset = await fetchAssetResult.getFirstObject()
        fetchAssetResult.close()
        fd = await asset.open('r')
        expect(isNum(fd)).assertTrue()
        const buf = new ArrayBuffer(4096)
        const res = await fileio.read(fd, buf)
        console.log(' bytesRead: ' + res.bytesRead)
        expect(res.bytesRead).assertEqual(assetProps.bytesRead)
        try {
          await fileio.write(fd, buf)
          expect.assertFail()
        } catch (error) {
          expect(true).assertTrue()
          await asset.close(fd)
          done()
        }
      } catch (error) {
        console.info(`${testNum} :: error: ${error}`)
        expect.assertFail()
        await asset.close(fd)
        done()
      }
    }

    const wOpenTest = async function (done, testNum, fetchOps, assetProps, expectCount, isAudio) {
      let asset, asset1
      let fd, fd1
      try {
        let fetchAssetResult
        if (isAudio) {
          fetchAssetResult = await userfilemgr.getAudioAssets(fetchOps)
        } else {
          fetchAssetResult = await userfilemgr.getPhotoAssets(fetchOps)
        }
        const checkAssetCountPass = await checkAssetsCount(done, testNum, fetchAssetResult, expectCount)
        if (!checkAssetCountPass) return
        asset = await fetchAssetResult.getFirstObject()
        asset1 = await fetchAssetResult.getNextObject()
        fetchAssetResult.close()

        fd = await asset.open('w')
        expect(isNum(fd)).assertTrue()
        fd1 = await asset1.open('r')
        const buf = new ArrayBuffer(4096)
        await fileio.read(fd1, buf)
        const write = await fileio.write(fd, buf)
        console.info(`${testNum} :: write: ${write}`)
        expect(write).assertEqual(assetProps.write)
        const buf1 = new ArrayBuffer(4096)
        try {
          await fileio.read(fd, buf1)
          expect.assertFail()
        } catch (error) {
          expect(true).assertTrue()
        }
        done()
      } catch (error) {
        console.info(`${testNum} :: error: ${error}`)
        expect(false).assertTrue()
        await asset.close(fd)
        await asset1.close(fd1)
        done()
      }
    }

    const rwOpenTest = async function (done, testNum, fetchOps, assetProps, expectCount, isAudio) {
      let asset, asset1
      let fd, fd1
      try {
        let fetchAssetResult
        if (isAudio) {
          fetchAssetResult = await userfilemgr.getAudioAssets(fetchOps)
        } else {
          fetchAssetResult = await userfilemgr.getPhotoAssets(fetchOps)
        }
        const checkAssetCountPass = await checkAssetsCount(done, testNum, fetchAssetResult, expectCount)
        if (!checkAssetCountPass) return
        asset = await fetchAssetResult.getFirstObject()
        fd = await asset.open('rw')
        expect(isNum(fd)).assertTrue()
        const buf = new ArrayBuffer(4096)
        const res = await fileio.read(fd, buf)
        expect(res.bytesRead).assertEqual(assetProps.bytesRead)
        asset1 = await fetchAssetResult.getNextObject()
        fd1 = await asset1.open('r')
        expect(isNum(fd1)).assertTrue()
        const buf1 = new ArrayBuffer(4096)
        await fileio.read(fd1, buf1)
        const write = await fileio.write(fd, buf1)
        expect(write).assertEqual(assetProps.write)
        console.info(`res.bytesRead:${res.bytesRead},write:${write}`)
        console.info(`fd1:${fd1},fd:${fd}`)
        await asset.close(fd)
        await asset1.close(fd1)
        fetchAssetResult.close()
        done()
      } catch (error) {
        console.info(`${testNum} :: error: ${error}`)
        await asset.close(fd)
        await asset1.close(fd1)
        expect.assertFail()
        done()
      }
    }

    const closeTest = async function (done, testNum, fetchOps, isAudio) {
      let asset
      let fd
      try {
        let fetchAssetResult
        if (isAudio) {
          fetchAssetResult = await userfilemgr.getAudioAssets(fetchOps)
        } else {
          fetchAssetResult = await userfilemgr.getPhotoAssets(fetchOps)
        }
        const checkAssetCountPass = await checkAssetsCount(done, testNum, fetchAssetResult, 13)
        if (!checkAssetCountPass) return
        const asset = await fetchAssetResult.getFirstObject()
        fd = await asset.open('r')
        expect(isNum(fd)).assertTrue()
        await asset.close(fd)
        await fileio.close(fd)
        let count = 0
        const buf = new ArrayBuffer(4096)
        try {
          await fileio.read(fd, buf)
        } catch (error) {
          count++
        }
        try {
          await fileio.write(fd, buf)
        } catch (error) {
          count++
        }
        await sleep(1000)
        expect(count).assertEqual(2)
        done()
      } catch (error) {
        console.info(`${testNum} error:${error}`)
        await asset.close(fd)
        expect(false).assertTrue()
        done()
      }
    }

    /**
         * @tc.number    : SUB_USERFILE_MGR_FILEASSET_OPEN_PROMISE_01_001
         * @tc.name      : open('r')
         * @tc.desc      : open -r the type of image
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 2
         */
    it('SUB_USERFILE_MGR_FILEASSET_OPEN_PROMISE_01_001', 2, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_FILEASSET_OPEN_PROMISE_01_001'
      const fetchOps = assetFetchOneArgs(testNum, 'media_type', IMAGE_TYPE)
      const assetProps = {
        bytesRead: 4096
      }
      const expectCount = 13
      const isAudio = false
      await rOpenTest(done, testNum, fetchOps, assetProps, expectCount, isAudio)
    })

    /**
         * @tc.number    : SUB_USERFILE_MGR_FILEASSET_OPEN_PROMISE_01_002
         * @tc.name      : open('w')
         * @tc.desc      : open -w the type of image
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 2
         */
    it('SUB_USERFILE_MGR_FILEASSET_OPEN_PROMISE_01_002', 2, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_FILEASSET_OPEN_PROMISE_01_002'
      const fetchOps = assetFetchOneArgs(testNum, 'media_type', IMAGE_TYPE)
      const assetProps = {
        write: 4096
      }
      const expectCount = 13
      const isAudio = false
      await wOpenTest(done, testNum, fetchOps, assetProps, expectCount, isAudio)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_FILEASSET_OPEN_PROMISE_01_003
     * @tc.name      : open('rw')
     * @tc.desc      : open -rw the type of image
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_USERFILE_MGR_FILEASSET_OPEN_PROMISE_01_003', 2, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_FILEASSET_OPEN_PROMISE_01_003'
      const fetchOps = assetFetchOneArgs(testNum, 'media_type', IMAGE_TYPE)
      const assetProps = {
        bytesRead: 4096,
        write: 4096
      }
      const expectCount = 13
      const isAudio = false
      await rwOpenTest(done, testNum, fetchOps, assetProps, expectCount, isAudio)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_FILEASSET_OPEN_PROMISE_03_001
     * @tc.name      : open('r')
     * @tc.desc      : open -r the type of video
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_USERFILE_MGR_FILEASSET_OPEN_PROMISE_03_001', 2, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_FILEASSET_OPEN_PROMISE_03_001'
      const fetchOps = assetFetchOneArgs(testNum, 'media_type', VIDEO_TYPE)
      const assetProps = {
        bytesRead: 4096
      }
      const expectCount = 13
      const isAudio = false
      await rOpenTest(done, testNum, fetchOps, assetProps, expectCount, isAudio)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_FILEASSET_OPEN_PROMISE_03_002
     * @tc.name      : open('w')
     * @tc.desc      : open -w the type of video
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_USERFILE_MGR_FILEASSET_OPEN_PROMISE_03_002', 2, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_FILEASSET_OPEN_PROMISE_03_002'
      const fetchOps = assetFetchOneArgs(testNum, 'media_type', VIDEO_TYPE)
      const assetProps = {
        write: 4096
      }
      const expectCount = 13
      const isAudio = false
      await wOpenTest(done, testNum, fetchOps, assetProps, expectCount, isAudio)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_FILEASSET_OPEN_PROMISE_03_003
     * @tc.name      : open('rw')
     * @tc.desc      : open -rw the type of video
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_USERFILE_MGR_FILEASSET_OPEN_PROMISE_03_003', 2, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_FILEASSET_OPEN_PROMISE_03_003'
      const fetchOps = assetFetchOneArgs(testNum, 'media_type', VIDEO_TYPE)
      const assetProps = {
        bytesRead: 4096,
        write: 4096
      }
      const expectCount = 13
      const isAudio = false
      await rwOpenTest(done, testNum, fetchOps, assetProps, expectCount, isAudio)
    })

    // --------------------------------------------------------------------------------

    /**
     * @tc.number    : SUB_USERFILE_MGR_FILEASSET_CLOSE_PROMISE_01
     * @tc.name      : close
     * @tc.desc      : asset close the type of image
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_USERFILE_MGR_FILEASSET_CLOSE_PROMISE_01', 3, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_FILEASSET_CLOSE_PROMISE_01'
      const fetchOps = assetFetchOneArgs(testNum, 'media_type', IMAGE_TYPE)
      const isAudio = false
      await closeTest(done, testNum, fetchOps, isAudio)
    })

    /**
     * @tc.number    : SUB_USERFILE_MGR_FILEASSET_CLOSE_PROMISE_03
     * @tc.name      : close
     * @tc.desc      : asset close the type of video
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_USERFILE_MGR_FILEASSET_CLOSE_PROMISE_03', 3, async function (done) {
      const testNum = 'SUB_USERFILE_MGR_FILEASSET_CLOSE_PROMISE_03'
      const fetchOps = assetFetchOneArgs(testNum, 'media_type', VIDEO_TYPE)
      const isAudio = false
      await closeTest(done, testNum, fetchOps, isAudio)
    })
  })
}
