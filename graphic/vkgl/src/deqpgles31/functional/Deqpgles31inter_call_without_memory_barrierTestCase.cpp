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

#define VkglTestCase_016241_1 "dEQP-GLES31.functional.synchronization.inter_call.without_"
#define VkglTestCase_016241_2 "memory_barrier.ssbo_atomic_dispatch_2_calls_1k_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016241, VkglTestCase_016241_1, VkglTestCase_016241_2);

#define VkglTestCase_016242_1 "dEQP-GLES31.functional.synchronization.inter_call.without_"
#define VkglTestCase_016242_2 "memory_barrier.ssbo_atomic_dispatch_5_calls_1k_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016242, VkglTestCase_016242_1, VkglTestCase_016242_2);

#define VkglTestCase_016243_1 "dEQP-GLES31.functional.synchronization.inter_call.without_m"
#define VkglTestCase_016243_2 "emory_barrier.ssbo_atomic_dispatch_100_calls_1k_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016243, VkglTestCase_016243_1, VkglTestCase_016243_2);

#define VkglTestCase_016244_1 "dEQP-GLES31.functional.synchronization.inter_call.without_"
#define VkglTestCase_016244_2 "memory_barrier.ssbo_atomic_dispatch_2_calls_4k_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016244, VkglTestCase_016244_1, VkglTestCase_016244_2);

#define VkglTestCase_016245_1 "dEQP-GLES31.functional.synchronization.inter_call.without_"
#define VkglTestCase_016245_2 "memory_barrier.ssbo_atomic_dispatch_5_calls_4k_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016245, VkglTestCase_016245_1, VkglTestCase_016245_2);

#define VkglTestCase_016246_1 "dEQP-GLES31.functional.synchronization.inter_call.without_m"
#define VkglTestCase_016246_2 "emory_barrier.ssbo_atomic_dispatch_100_calls_4k_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016246, VkglTestCase_016246_1, VkglTestCase_016246_2);

#define VkglTestCase_016247_1 "dEQP-GLES31.functional.synchronization.inter_call.without_"
#define VkglTestCase_016247_2 "memory_barrier.ssbo_atomic_dispatch_2_calls_32k_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016247, VkglTestCase_016247_1, VkglTestCase_016247_2);

#define VkglTestCase_016248_1 "dEQP-GLES31.functional.synchronization.inter_call.without_"
#define VkglTestCase_016248_2 "memory_barrier.ssbo_atomic_dispatch_5_calls_32k_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016248, VkglTestCase_016248_1, VkglTestCase_016248_2);

#define VkglTestCase_016249_1 "dEQP-GLES31.functional.synchronization.inter_call.without_m"
#define VkglTestCase_016249_2 "emory_barrier.ssbo_atomic_dispatch_100_calls_32k_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016249, VkglTestCase_016249_1, VkglTestCase_016249_2);

#define VkglTestCase_016250_1 "dEQP-GLES31.functional.synchronization.inter_call.without_m"
#define VkglTestCase_016250_2 "emory_barrier.image_atomic_dispatch_2_calls_8x8_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016250, VkglTestCase_016250_1, VkglTestCase_016250_2);

#define VkglTestCase_016251_1 "dEQP-GLES31.functional.synchronization.inter_call.without_m"
#define VkglTestCase_016251_2 "emory_barrier.image_atomic_dispatch_5_calls_8x8_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016251, VkglTestCase_016251_1, VkglTestCase_016251_2);

#define VkglTestCase_016252_1 "dEQP-GLES31.functional.synchronization.inter_call.without_me"
#define VkglTestCase_016252_2 "mory_barrier.image_atomic_dispatch_100_calls_8x8_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016252, VkglTestCase_016252_1, VkglTestCase_016252_2);

#define VkglTestCase_016253_1 "dEQP-GLES31.functional.synchronization.inter_call.without_me"
#define VkglTestCase_016253_2 "mory_barrier.image_atomic_dispatch_2_calls_32x32_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016253, VkglTestCase_016253_1, VkglTestCase_016253_2);

#define VkglTestCase_016254_1 "dEQP-GLES31.functional.synchronization.inter_call.without_me"
#define VkglTestCase_016254_2 "mory_barrier.image_atomic_dispatch_5_calls_32x32_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016254, VkglTestCase_016254_1, VkglTestCase_016254_2);

#define VkglTestCase_016255_1 "dEQP-GLES31.functional.synchronization.inter_call.without_mem"
#define VkglTestCase_016255_2 "ory_barrier.image_atomic_dispatch_100_calls_32x32_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016255, VkglTestCase_016255_1, VkglTestCase_016255_2);

#define VkglTestCase_016256_1 "dEQP-GLES31.functional.synchronization.inter_call.without_mem"
#define VkglTestCase_016256_2 "ory_barrier.image_atomic_dispatch_2_calls_128x128_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016256, VkglTestCase_016256_1, VkglTestCase_016256_2);

#define VkglTestCase_016257_1 "dEQP-GLES31.functional.synchronization.inter_call.without_mem"
#define VkglTestCase_016257_2 "ory_barrier.image_atomic_dispatch_5_calls_128x128_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016257, VkglTestCase_016257_1, VkglTestCase_016257_2);

#define VkglTestCase_016258_1 "dEQP-GLES31.functional.synchronization.inter_call.without_memo"
#define VkglTestCase_016258_2 "ry_barrier.image_atomic_dispatch_100_calls_128x128_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016258, VkglTestCase_016258_1, VkglTestCase_016258_2);

#define VkglTestCase_016259_1 "dEQP-GLES31.functional.synchronization.inter_call.without_m"
#define VkglTestCase_016259_2 "emory_barrier.atomic_counter_dispatch_2_calls_32_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016259, VkglTestCase_016259_1, VkglTestCase_016259_2);

#define VkglTestCase_016260_1 "dEQP-GLES31.functional.synchronization.inter_call.without_m"
#define VkglTestCase_016260_2 "emory_barrier.atomic_counter_dispatch_5_calls_32_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016260, VkglTestCase_016260_1, VkglTestCase_016260_2);

#define VkglTestCase_016261_1 "dEQP-GLES31.functional.synchronization.inter_call.without_me"
#define VkglTestCase_016261_2 "mory_barrier.atomic_counter_dispatch_100_calls_32_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016261, VkglTestCase_016261_1, VkglTestCase_016261_2);

#define VkglTestCase_016262_1 "dEQP-GLES31.functional.synchronization.inter_call.without_me"
#define VkglTestCase_016262_2 "mory_barrier.atomic_counter_dispatch_2_calls_128_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016262, VkglTestCase_016262_1, VkglTestCase_016262_2);

#define VkglTestCase_016263_1 "dEQP-GLES31.functional.synchronization.inter_call.without_me"
#define VkglTestCase_016263_2 "mory_barrier.atomic_counter_dispatch_5_calls_128_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016263, VkglTestCase_016263_1, VkglTestCase_016263_2);

#define VkglTestCase_016264_1 "dEQP-GLES31.functional.synchronization.inter_call.without_mem"
#define VkglTestCase_016264_2 "ory_barrier.atomic_counter_dispatch_100_calls_128_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016264, VkglTestCase_016264_1, VkglTestCase_016264_2);

#define VkglTestCase_016265_1 "dEQP-GLES31.functional.synchronization.inter_call.without_m"
#define VkglTestCase_016265_2 "emory_barrier.atomic_counter_dispatch_2_calls_1k_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016265, VkglTestCase_016265_1, VkglTestCase_016265_2);

#define VkglTestCase_016266_1 "dEQP-GLES31.functional.synchronization.inter_call.without_m"
#define VkglTestCase_016266_2 "emory_barrier.atomic_counter_dispatch_5_calls_1k_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016266, VkglTestCase_016266_1, VkglTestCase_016266_2);

#define VkglTestCase_016267_1 "dEQP-GLES31.functional.synchronization.inter_call.without_me"
#define VkglTestCase_016267_2 "mory_barrier.atomic_counter_dispatch_100_calls_1k_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016267, VkglTestCase_016267_1, VkglTestCase_016267_2);

#define VkglTestCase_016268_1 "dEQP-GLES31.functional.synchronization.inter_call.without_memory_"
#define VkglTestCase_016268_2 "barrier.ssbo_atomic_counter_mixed_dispatch_2_calls_32_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016268, VkglTestCase_016268_1, VkglTestCase_016268_2);

#define VkglTestCase_016269_1 "dEQP-GLES31.functional.synchronization.inter_call.without_memory_"
#define VkglTestCase_016269_2 "barrier.ssbo_atomic_counter_mixed_dispatch_5_calls_32_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016269, VkglTestCase_016269_1, VkglTestCase_016269_2);

#define VkglTestCase_016270_1 "dEQP-GLES31.functional.synchronization.inter_call.without_memory_b"
#define VkglTestCase_016270_2 "arrier.ssbo_atomic_counter_mixed_dispatch_100_calls_32_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016270, VkglTestCase_016270_1, VkglTestCase_016270_2);

#define VkglTestCase_016271_1 "dEQP-GLES31.functional.synchronization.inter_call.without_memory_"
#define VkglTestCase_016271_2 "barrier.ssbo_atomic_counter_mixed_dispatch_2_calls_128_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016271, VkglTestCase_016271_1, VkglTestCase_016271_2);

#define VkglTestCase_016272_1 "dEQP-GLES31.functional.synchronization.inter_call.without_memory_"
#define VkglTestCase_016272_2 "barrier.ssbo_atomic_counter_mixed_dispatch_5_calls_128_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016272, VkglTestCase_016272_1, VkglTestCase_016272_2);

#define VkglTestCase_016273_1 "dEQP-GLES31.functional.synchronization.inter_call.without_memory_b"
#define VkglTestCase_016273_2 "arrier.ssbo_atomic_counter_mixed_dispatch_100_calls_128_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016273, VkglTestCase_016273_1, VkglTestCase_016273_2);

#define VkglTestCase_016274_1 "dEQP-GLES31.functional.synchronization.inter_call.without_memory_"
#define VkglTestCase_016274_2 "barrier.ssbo_atomic_counter_mixed_dispatch_2_calls_1k_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016274, VkglTestCase_016274_1, VkglTestCase_016274_2);

#define VkglTestCase_016275_1 "dEQP-GLES31.functional.synchronization.inter_call.without_memory_"
#define VkglTestCase_016275_2 "barrier.ssbo_atomic_counter_mixed_dispatch_5_calls_1k_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016275, VkglTestCase_016275_1, VkglTestCase_016275_2);

#define VkglTestCase_016276_1 "dEQP-GLES31.functional.synchronization.inter_call.without_memory_b"
#define VkglTestCase_016276_2 "arrier.ssbo_atomic_counter_mixed_dispatch_100_calls_1k_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016276, VkglTestCase_016276_1, VkglTestCase_016276_2);
