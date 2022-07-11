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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30043TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_042120_1 "dEQP-GLES3.functional.neg"
#define VkglTestCase_042120_2 "ative_api.fragment.scissor"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042120, VkglTestCase_042120_1, VkglTestCase_042120_2);

#define VkglTestCase_042121_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042121_2 "ive_api.fragment.depth_func"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042121, VkglTestCase_042121_1, VkglTestCase_042121_2);

#define VkglTestCase_042122_1 "dEQP-GLES3.functional.nega"
#define VkglTestCase_042122_2 "tive_api.fragment.viewport"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042122, VkglTestCase_042122_1, VkglTestCase_042122_2);

#define VkglTestCase_042123_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_042123_2 "ve_api.fragment.stencil_func"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042123, VkglTestCase_042123_1, VkglTestCase_042123_2);

#define VkglTestCase_042124_1 "dEQP-GLES3.functional.negative_a"
#define VkglTestCase_042124_2 "pi.fragment.stencil_func_separate"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042124, VkglTestCase_042124_1, VkglTestCase_042124_2);

#define VkglTestCase_042125_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042125_2 "ive_api.fragment.stencil_op"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042125, VkglTestCase_042125_1, VkglTestCase_042125_2);

#define VkglTestCase_042126_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_042126_2 "api.fragment.stencil_op_separate"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042126, VkglTestCase_042126_1, VkglTestCase_042126_2);

#define VkglTestCase_042127_1 "dEQP-GLES3.functional.negative_a"
#define VkglTestCase_042127_2 "pi.fragment.stencil_mask_separate"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042127, VkglTestCase_042127_1, VkglTestCase_042127_2);

#define VkglTestCase_042128_1 "dEQP-GLES3.functional.negativ"
#define VkglTestCase_042128_2 "e_api.fragment.blend_equation"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042128, VkglTestCase_042128_1, VkglTestCase_042128_2);

#define VkglTestCase_042129_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_042129_2 "i.fragment.blend_equation_separate"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042129, VkglTestCase_042129_1, VkglTestCase_042129_2);

#define VkglTestCase_042130_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042130_2 "ive_api.fragment.blend_func"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042130, VkglTestCase_042130_1, VkglTestCase_042130_2);

#define VkglTestCase_042131_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_042131_2 "api.fragment.blend_func_separate"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042131, VkglTestCase_042131_1, VkglTestCase_042131_2);

#define VkglTestCase_042132_1 "dEQP-GLES3.functional.nega"
#define VkglTestCase_042132_2 "tive_api.fragment.cull_face"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042132, VkglTestCase_042132_1, VkglTestCase_042132_2);

#define VkglTestCase_042133_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042133_2 "ive_api.fragment.front_face"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042133, VkglTestCase_042133_1, VkglTestCase_042133_2);

#define VkglTestCase_042134_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042134_2 "ive_api.fragment.line_width"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042134, VkglTestCase_042134_1, VkglTestCase_042134_2);

#define VkglTestCase_042135_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042135_2 "ive_api.fragment.gen_queries"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042135, VkglTestCase_042135_1, VkglTestCase_042135_2);

#define VkglTestCase_042136_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042136_2 "ive_api.fragment.begin_query"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042136, VkglTestCase_042136_1, VkglTestCase_042136_2);

#define VkglTestCase_042137_1 "dEQP-GLES3.functional.nega"
#define VkglTestCase_042137_2 "tive_api.fragment.end_query"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042137, VkglTestCase_042137_1, VkglTestCase_042137_2);

#define VkglTestCase_042138_1 "dEQP-GLES3.functional.negativ"
#define VkglTestCase_042138_2 "e_api.fragment.delete_queries"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042138, VkglTestCase_042138_1, VkglTestCase_042138_2);

#define VkglTestCase_042139_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042139_2 "ive_api.fragment.fence_sync"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042139, VkglTestCase_042139_1, VkglTestCase_042139_2);

#define VkglTestCase_042140_1 "dEQP-GLES3.functional.nega"
#define VkglTestCase_042140_2 "tive_api.fragment.wait_sync"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042140, VkglTestCase_042140_1, VkglTestCase_042140_2);

#define VkglTestCase_042141_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042141_2 "_api.fragment.client_wait_sync"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042141, VkglTestCase_042141_1, VkglTestCase_042141_2);

#define VkglTestCase_042142_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042142_2 "ive_api.fragment.delete_sync"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042142, VkglTestCase_042142_1, VkglTestCase_042142_2);
