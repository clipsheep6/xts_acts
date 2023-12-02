/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

import { describe, expect, it } from '@ohos/hypium'
import memory from 'libmemoryndk.so'

export default function memoryTest() {
  describe('MemoryTest', () => {

    /**
     * @tc.number     : SUB_COMMONLIBRARY_MEMORY_UTILS_PURGEABLE_MEMORY_0100
     * @tc.name       : testPurgeAbleMemoryCreate001
     * @tc.desc       : OH_PurgeableMemory_Create Interface testing
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testPurgeAbleMemoryCreate001', 0, async (done: Function) => {
      let result = memory.createOne();
      console.info("stdlib.abs result = " + result);
      expect(result).assertEqual(1)
      done()
    });

    /**
     * @tc.number     : SUB_COMMONLIBRARY_MEMORY_UTILS_PURGEABLE_MEMORY_0200
     * @tc.name       : testPurgeAbleMemoryCreate002
     * @tc.desc       : OH_PurgeableMemory_Create Interface testing
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testPurgeAbleMemoryCreate002', 0, async (done: Function) => {
      let result = memory.createTwo();
      console.info("stdlib.abs result = " + result);
      expect(result).assertEqual(1)
      done()
    });

    /**
     * @tc.number     : SUB_COMMONLIBRARY_MEMORY_UTILS_PURGEABLE_MEMORY_0300
     * @tc.name       : testPurgeAbleMemoryDestroy001
     * @tc.desc       : OH_PurgeableMemory_Destroy Interface testing
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testPurgeAbleMemoryDestroy001', 0, async (done: Function) => {
      let result = memory.destroyOne();
      console.info("stdlib.abs result = " + result);
      expect(result).assertEqual(1)
      done()
    });

    /**
     * @tc.number     : SUB_COMMONLIBRARY_MEMORY_UTILS_PURGEABLE_MEMORY_0400
     * @tc.name       : testPurgeAbleMemoryDestroy002
     * @tc.desc       : OH_PurgeableMemory_Destroy Interface testing
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testPurgeAbleMemoryDestroy002', 0, async (done: Function) => {
      let result = memory.destroyTwo();
      console.info("stdlib.abs result = " + result);
      expect(result).assertEqual(1)
      done()
    });

    /**
     * @tc.number     : SUB_COMMONLIBRARY_MEMORY_UTILS_PURGEABLE_MEMORY_0500
     * @tc.name       : testPurgeAbleMemoryDestroy003
     * @tc.desc       : OH_PurgeableMemory_Destroy Interface testing
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testPurgeAbleMemoryDestroy003', 0, async (done: Function) => {
      let result = memory.destroyThree();
      console.info("stdlib.abs result = " + result);
      expect(result).assertEqual(0)
      done()
    });

    /**
     * @tc.number     : SUB_COMMONLIBRARY_MEMORY_UTILS_PURGEABLE_MEMORY_0600
     * @tc.name       : testPurgeAbleMemoryBeginRead001
     * @tc.desc       : OH_PurgeableMemory_BeginRead Interface testing
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testPurgeAbleMemoryBeginRead001', 0, async (done: Function) => {
      let result = memory.beginReadOne();
      console.info("stdlib.abs result = " + result);
      expect(result).assertEqual(1)
      done()
    });

    /**
     * @tc.number     : SUB_COMMONLIBRARY_MEMORY_UTILS_PURGEABLE_MEMORY_0700
     * @tc.name       : testPurgeAbleMemoryBeginRead002
     * @tc.desc       : OH_PurgeableMemory_BeginRead Interface testing
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testPurgeAbleMemoryBeginRead002', 0, async (done: Function) => {
      let result = memory.beginReadTwo();
      console.info("stdlib.abs result = " + result);
      expect(result).assertEqual(0)
      done()
    });

    /**
     * @tc.number     : SUB_COMMONLIBRARY_MEMORY_UTILS_PURGEABLE_MEMORY_0800
     * @tc.name       : testPurgeAbleMemoryEndRead001
     * @tc.desc       : OH_PurgeableMemory_EndRead Interface testing
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testPurgeAbleMemoryEndRead001', 0, async (done: Function) => {
      let result = memory.endRead();
      console.info("stdlib.abs result = " + result);
      expect(result).assertEqual(1)
      done()
    });

    /**
     * @tc.number     : SUB_COMMONLIBRARY_MEMORY_UTILS_PURGEABLE_MEMORY_0900
     * @tc.name       : testPurgeAbleMemoryBeginWrite001
     * @tc.desc       : OH_PurgeableMemory_BeginWrite Interface testing
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testPurgeAbleMemoryBeginWrite001', 0, async (done: Function) => {
      let result = memory.beginWriteOne();
      console.info("stdlib.abs result = " + result);
      expect(result).assertEqual(1)
      done()
    });

    /**
     * @tc.number     : SUB_COMMONLIBRARY_MEMORY_UTILS_PURGEABLE_MEMORY_1000
     * @tc.name       : testPurgeAbleMemoryBeginWrite002
     * @tc.desc       : OH_PurgeableMemory_BeginWrite Interface testing
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testPurgeAbleMemoryBeginWrite002', 0, async (done: Function) => {
      let result = memory.beginWriteTwo();
      console.info("stdlib.abs result = " + result);
      expect(result).assertEqual(0)
      done()
    });

    /**
     * @tc.number     : SUB_COMMONLIBRARY_MEMORY_UTILS_PURGEABLE_MEMORY_1100
     * @tc.name       : testPurgeAbleMemoryEndWrite001
     * @tc.desc       : OH_PurgeableMemory_EndWrite Interface testing
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testPurgeAbleMemoryEndWrite001', 0, async (done: Function) => {
      let result = memory.endWrite();
      console.info("stdlib.abs result = " + result);
      expect(result).assertEqual(1)
      done()
    });

    /**
     * @tc.number     : SUB_COMMONLIBRARY_MEMORY_UTILS_PURGEABLE_MEMORY_1200
     * @tc.name       : testPurgeAbleMemoryGetContent001
     * @tc.desc       : OH_PurgeableMemory_GetContent Interface testing
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testPurgeAbleMemoryGetContent001', 0, async (done: Function) => {
      let result = memory.getContentOne();
      console.info("stdlib.abs result = " + result);
      expect(result).assertEqual(1)
      done()
    });

    /**
     * @tc.number     : SUB_COMMONLIBRARY_MEMORY_UTILS_PURGEABLE_MEMORY_1300
     * @tc.name       : testPurgeAbleMemoryGetContent002
     * @tc.desc       : OH_PurgeableMemory_GetContent Interface testing
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testPurgeAbleMemoryGetContent002', 0, async (done: Function) => {
      let result = memory.getContentTwo();
      console.info("stdlib.abs result = " + result);
      expect(result).assertEqual(1)
      done()
    });

    /**
     * @tc.number     : SUB_COMMONLIBRARY_MEMORY_UTILS_PURGEABLE_MEMORY_1400
     * @tc.name       : testPurgeAbleMemoryContentSize001
     * @tc.desc       : OH_PurgeableMemory_ContentSize Interface testing
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testPurgeAbleMemoryContentSize001', 0, async (done: Function) => {
      let result = memory.contentSizeOne();
      console.info("stdlib.abs result = " + result);
      expect(result).assertEqual(1)
      done()
    });

    /**
     * @tc.number     : SUB_COMMONLIBRARY_MEMORY_UTILS_PURGEABLE_MEMORY_1500
     * @tc.name       : testPurgeAbleMemoryContentSize002
     * @tc.desc       : OH_PurgeableMemory_ContentSize Interface testing
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testPurgeAbleMemoryContentSize002', 0, async (done: Function) => {
      let result = memory.contentSizeTwo();
      console.info("stdlib.abs result = " + result);
      expect(result).assertEqual(0)
      done()
    });

    /**
     * @tc.number     : SUB_COMMONLIBRARY_MEMORY_UTILS_PURGEABLE_MEMORY_1600
     * @tc.name       : testPurgeAbleMemoryAppendModify001
     * @tc.desc       : OH_PurgeableMemory_AppendModify Interface testing
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testPurgeAbleMemoryAppendModify001', 0, async (done: Function) => {
      let result = memory.appendModifyOne();
      console.info("stdlib.abs result = " + result);
      expect(result).assertEqual(1)
      done()
    });

    /**
     * @tc.number     : SUB_COMMONLIBRARY_MEMORY_UTILS_PURGEABLE_MEMORY_1700
     * @tc.name       : testPurgeAbleMemoryAppendModify002
     * @tc.desc       : OH_PurgeableMemory_AppendModify Interface testing
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testPurgeAbleMemoryAppendModify002', 0, async (done: Function) => {
      let result = memory.appendModifyTwo();
      console.info("stdlib.abs result = " + result);
      expect(result).assertEqual(0)
      done()
    });
  })
}