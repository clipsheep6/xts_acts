/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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

import * as mediaTestBase from '../../../../../../MediaTestBase';
import media from '@ohos.multimedia.media';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'


export default function AVPlayerAVMetadataJSTest() {
  describe('AVPlayerAVMetadataJSTest', function () {
    beforeAll(async function () {
      console.info('beforeAll case');
    })

    beforeEach(async function () {
      console.info('beforeEach case');
    })

    afterEach(async function () {
      console.info('afterEach case');
    })

    afterAll(async function () {
      console.info('afterAll case');
    })
    

    /* *
      * @tc.number    : SUB_MULTIMEDIA_PLAYER_AVMETADATA_HDRTYPE_PROMISE_FUNCTION_0100
      * @tc.name      : 001.testAVMeta hdrType
      * @tc.desc      : Local Video playback control test
      * @tc.size      : MediumTest
      * @tc.type      : Function Test
      * @tc.level     : Level0
    */
    it('SUB_MULTIMEDIA_PLAYER_AVMETADATA_HDRTYPE_PROMISE_FUNCTION_0100', 0, async function (done) {
      expect(media.HdrType.AV_HDR_TYPE_NONE).assertEqual(0);
      expect(media.HdrType.AV_HDR_TYPE_VIVID).assertEqual(1);
      done();
    })
  })
}
