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

import photoAccessHelper from '@ohos.file.photoAccessHelper'
import sendablePhotoAccessHelper from '@ohos.file.sendablePhotoAccessHelper'
import { describe, it, expect } from '@ohos/hypium'
import {
  photoKeys,
  fetchOption,
} from '../../../../../../../common'

export default function getAssetsTest () {
  describe('getAssetsTest', () => {
    const helper = sendablePhotoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);

    const getAssetsPromiseTest = async (done: Function, testNum: string, fetchOps: photoAccessHelper.FetchOptions,
      expectCount: number) => {
      try {
        const fetchResult = await helper.getAssets(fetchOps);
        expect(fetchResult.getCount()).assertEqual(expectCount);
        fetchResult.close();
        done();
      } catch (error) {
        console.info(`${testNum} failed; error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    }

    const getAssetsAbnormalPromiseTest = async (done: Function, testNum: string,
      fetchOps: photoAccessHelper.FetchOptions | undefined) => {
      try {
        await helper.getAssets(fetchOps);
        expect(false).assertTrue();
        done();
      } catch (error) {
        console.info(`${testNum} failed; error: ${error}`);
        done();
      }
    }

    //image
    //promise
    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_GET_ASSETS_0000
     * @tc.name      : getAssets_promise_000
     * @tc.desc      : getAssets image
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('getAssets_promise_000', 0, async (done: Function) => {
      const testNum = 'getAssets_promise_000';
      const fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, '01.jpg');
      const expectCount = 1;
      await getAssetsPromiseTest(done, testNum, fetchOps, expectCount);
    });
    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_GET_ASSETS_0100
     * @tc.name      : getAssets_promise_001
     * @tc.desc      : getAssets image
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('getAssets_promise_001', 0, async (done: Function) => {
      const testNum = 'getAssets_promise_001';
      const fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, '666');
      const expectCount = 0;
      await getAssetsPromiseTest(done, testNum, fetchOps, expectCount);
    });
    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_GET_ASSETS_0300
     * @tc.name      : getAssets_promise_003
     * @tc.desc      : getAssets image
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('getAssets_promise_003', 2, async (done: Function) => {
      const testNum = 'getAssets_promise_003';
      await getAssetsAbnormalPromiseTest(done, testNum, undefined);
    });
    //video
    //promise
    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_GET_ASSETS_0400
     * @tc.name      : getAssets_promise_004
     * @tc.desc      : getAssets video
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('getAssets_promise_004', 0, async (done: Function) => {
      const testNum = 'getAssets_promise_004';
      const fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, '01.mp4');
      const expectCount = 1;
      await getAssetsPromiseTest(done, testNum, fetchOps, expectCount);
    });
  })
}
