/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import hilog from '@ohos.hilog';
import testNapi from 'libentry.so'
// @ts-nocheck
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'

export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(function () {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
    })
    beforeEach(function () {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(function () {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(function () {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })
    /* *
    * @tc.number    : SUB_MULTIMEDIA_AVCODEC_C_API_001
    * @tc.name      : Test_VideoDecoder_SetDecryptionConfig
    * @tc.desc      : 码流解密配置
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
    */
    it('SUB_MULTIMEDIA_AVCODEC_C_API_001', 0, function (done) {
      let c = testNapi.Test_VideoDecoder_SetDecryptionConfig("ptr","ptr",false);
      expect(c).assertEqual(Drm_ErrorCode.DRM_ERR_OK);
      done();
    })
    /* *
    * @tc.number    : SUB_MULTIMEDIA_AVSOURCE_C_API_001
    * @tc.name      : Test_AVDemuxer_GetMediaKeySystemInfo
    * @tc.desc      : AVDemuxer参数获取
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level0
    */
    it('SUB_MULTIMEDIA_AVSOURCE_C_API_001', 0, function (done) {
      let c = testNapi.Test_AVDemuxer_GetMediaKeySystemInfo("ptr","ptr");
      expect(c).assertEqual(Drm_ErrorCode.DRM_ERR_OK);
      done();
    })
    /* *
  * @tc.number    : SUB_MULTIMEDIA_AVSOURCE_C_API_002
  * @tc.name      : Test_AVDemuxer_SetMediaKeySystemInfoCallback
  * @tc.desc      : AVDemuxer参数获取
  * @tc.size      : MediumTest
  * @tc.type      : Function test
  * @tc.level     : Level0
  */
    it('SUB_MULTIMEDIA_AVSOURCE_C_API_002', 0, function (done) {
      let c = testNapi.Test_AVDemuxer_SetMediaKeySystemInfoCallback("ptr","ptr");
      expect(c).assertEqual(Drm_ErrorCode.DRM_ERR_OK);
      done();
    })

  })
}