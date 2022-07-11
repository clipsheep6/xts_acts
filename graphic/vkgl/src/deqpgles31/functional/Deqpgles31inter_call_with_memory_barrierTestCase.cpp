/*
 * Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd.
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

#include <climits>
#include <gtest/gtest.h>
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016213_1 "dEQP-GLES31.functional.synchronization.inte"
#define VkglTestCase_016213_2 "r_call.with_memory_barrier.image_write_read"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016213, VkglTestCase_016213_1, VkglTestCase_016213_2);

#define VkglTestCase_016214_1 "dEQP-GLES31.functional.synchronization.inte"
#define VkglTestCase_016214_2 "r_call.with_memory_barrier.image_read_write"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016214, VkglTestCase_016214_1, VkglTestCase_016214_2);

#define VkglTestCase_016215_1 "dEQP-GLES31.functional.synchronization.int"
#define VkglTestCase_016215_2 "er_call.with_memory_barrier.image_overwrite"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016215, VkglTestCase_016215_1, VkglTestCase_016215_2);

#define VkglTestCase_016216_1 "dEQP-GLES31.functional.synchronization.inter_ca"
#define VkglTestCase_016216_2 "ll.with_memory_barrier.image_multiple_write_read"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016216, VkglTestCase_016216_1, VkglTestCase_016216_2);

#define VkglTestCase_016217_1 "dEQP-GLES31.functional.synchronization.inter_call.wit"
#define VkglTestCase_016217_2 "h_memory_barrier.image_multiple_interleaved_write_read"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016217, VkglTestCase_016217_1, VkglTestCase_016217_2);

#define VkglTestCase_016218_1 "dEQP-GLES31.functional.synchronization.inter_call.with_m"
#define VkglTestCase_016218_2 "emory_barrier.image_multiple_unrelated_write_read_ordered"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016218, VkglTestCase_016218_1, VkglTestCase_016218_2);

#define VkglTestCase_016219_1 "dEQP-GLES31.functional.synchronization.inter_call.with_mem"
#define VkglTestCase_016219_2 "ory_barrier.image_multiple_unrelated_write_read_non_ordered"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016219, VkglTestCase_016219_1, VkglTestCase_016219_2);

#define VkglTestCase_016220_1 "dEQP-GLES31.functional.synchronization.inter_c"
#define VkglTestCase_016220_2 "all.with_memory_barrier.image_atomic_write_read"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016220, VkglTestCase_016220_1, VkglTestCase_016220_2);

#define VkglTestCase_016221_1 "dEQP-GLES31.functional.synchronization.inter_c"
#define VkglTestCase_016221_2 "all.with_memory_barrier.image_atomic_read_write"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016221, VkglTestCase_016221_1, VkglTestCase_016221_2);

#define VkglTestCase_016222_1 "dEQP-GLES31.functional.synchronization.inter_c"
#define VkglTestCase_016222_2 "all.with_memory_barrier.image_atomic_overwrite"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016222, VkglTestCase_016222_1, VkglTestCase_016222_2);

#define VkglTestCase_016223_1 "dEQP-GLES31.functional.synchronization.inter_call.w"
#define VkglTestCase_016223_2 "ith_memory_barrier.image_atomic_multiple_write_read"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016223, VkglTestCase_016223_1, VkglTestCase_016223_2);

#define VkglTestCase_016224_1 "dEQP-GLES31.functional.synchronization.inter_call.with_me"
#define VkglTestCase_016224_2 "mory_barrier.image_atomic_multiple_interleaved_write_read"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016224, VkglTestCase_016224_1, VkglTestCase_016224_2);

#define VkglTestCase_016225_1 "dEQP-GLES31.functional.synchronization.inter_call.with_memor"
#define VkglTestCase_016225_2 "y_barrier.image_atomic_multiple_unrelated_write_read_ordered"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016225, VkglTestCase_016225_1, VkglTestCase_016225_2);

#define VkglTestCase_016226_1 "dEQP-GLES31.functional.synchronization.inter_call.with_memory_"
#define VkglTestCase_016226_2 "barrier.image_atomic_multiple_unrelated_write_read_non_ordered"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016226, VkglTestCase_016226_1, VkglTestCase_016226_2);

#define VkglTestCase_016227_1 "dEQP-GLES31.functional.synchronization.int"
#define VkglTestCase_016227_2 "er_call.with_memory_barrier.ssbo_write_read"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016227, VkglTestCase_016227_1, VkglTestCase_016227_2);

#define VkglTestCase_016228_1 "dEQP-GLES31.functional.synchronization.int"
#define VkglTestCase_016228_2 "er_call.with_memory_barrier.ssbo_read_write"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016228, VkglTestCase_016228_1, VkglTestCase_016228_2);

#define VkglTestCase_016229_1 "dEQP-GLES31.functional.synchronization.int"
#define VkglTestCase_016229_2 "er_call.with_memory_barrier.ssbo_overwrite"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016229, VkglTestCase_016229_1, VkglTestCase_016229_2);

#define VkglTestCase_016230_1 "dEQP-GLES31.functional.synchronization.inter_ca"
#define VkglTestCase_016230_2 "ll.with_memory_barrier.ssbo_multiple_write_read"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016230, VkglTestCase_016230_1, VkglTestCase_016230_2);

#define VkglTestCase_016231_1 "dEQP-GLES31.functional.synchronization.inter_call.wit"
#define VkglTestCase_016231_2 "h_memory_barrier.ssbo_multiple_interleaved_write_read"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016231, VkglTestCase_016231_1, VkglTestCase_016231_2);

#define VkglTestCase_016232_1 "dEQP-GLES31.functional.synchronization.inter_call.with_m"
#define VkglTestCase_016232_2 "emory_barrier.ssbo_multiple_unrelated_write_read_ordered"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016232, VkglTestCase_016232_1, VkglTestCase_016232_2);

#define VkglTestCase_016233_1 "dEQP-GLES31.functional.synchronization.inter_call.with_mem"
#define VkglTestCase_016233_2 "ory_barrier.ssbo_multiple_unrelated_write_read_non_ordered"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016233, VkglTestCase_016233_1, VkglTestCase_016233_2);

#define VkglTestCase_016234_1 "dEQP-GLES31.functional.synchronization.inter_c"
#define VkglTestCase_016234_2 "all.with_memory_barrier.ssbo_atomic_write_read"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016234, VkglTestCase_016234_1, VkglTestCase_016234_2);

#define VkglTestCase_016235_1 "dEQP-GLES31.functional.synchronization.inter_c"
#define VkglTestCase_016235_2 "all.with_memory_barrier.ssbo_atomic_read_write"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016235, VkglTestCase_016235_1, VkglTestCase_016235_2);

#define VkglTestCase_016236_1 "dEQP-GLES31.functional.synchronization.inter_"
#define VkglTestCase_016236_2 "call.with_memory_barrier.ssbo_atomic_overwrite"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016236, VkglTestCase_016236_1, VkglTestCase_016236_2);

#define VkglTestCase_016237_1 "dEQP-GLES31.functional.synchronization.inter_call."
#define VkglTestCase_016237_2 "with_memory_barrier.ssbo_atomic_multiple_write_read"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016237, VkglTestCase_016237_1, VkglTestCase_016237_2);

#define VkglTestCase_016238_1 "dEQP-GLES31.functional.synchronization.inter_call.with_m"
#define VkglTestCase_016238_2 "emory_barrier.ssbo_atomic_multiple_interleaved_write_read"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016238, VkglTestCase_016238_1, VkglTestCase_016238_2);

#define VkglTestCase_016239_1 "dEQP-GLES31.functional.synchronization.inter_call.with_memo"
#define VkglTestCase_016239_2 "ry_barrier.ssbo_atomic_multiple_unrelated_write_read_ordered"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016239, VkglTestCase_016239_1, VkglTestCase_016239_2);

#define VkglTestCase_016240_1 "dEQP-GLES31.functional.synchronization.inter_call.with_memory"
#define VkglTestCase_016240_2 "_barrier.ssbo_atomic_multiple_unrelated_write_read_non_ordered"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016240, VkglTestCase_016240_1, VkglTestCase_016240_2);
