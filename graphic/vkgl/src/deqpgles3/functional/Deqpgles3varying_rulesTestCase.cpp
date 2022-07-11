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
#include "../ActsDeqpgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001477_1 "dEQP-GLES3.functional.shaders.link"
#define VkglTestCase_001477_2 "age.varying.rules.fragment_declare"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001477, VkglTestCase_001477_1, VkglTestCase_001477_2);

#define VkglTestCase_001478_1 "dEQP-GLES3.functional.shaders.lin"
#define VkglTestCase_001478_2 "kage.varying.rules.vertex_declare"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001478, VkglTestCase_001478_1, VkglTestCase_001478_2);

#define VkglTestCase_001479_1 "dEQP-GLES3.functional.shaders.li"
#define VkglTestCase_001479_2 "nkage.varying.rules.both_declare"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001479, VkglTestCase_001479_1, VkglTestCase_001479_2);

#define VkglTestCase_001480_1 "dEQP-GLES3.functional.shaders.linkage.v"
#define VkglTestCase_001480_2 "arying.rules.vertex_declare_fragment_use"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001480, VkglTestCase_001480_1, VkglTestCase_001480_2);

#define VkglTestCase_001481_1 "dEQP-GLES3.functional.shaders.linkage.v"
#define VkglTestCase_001481_2 "arying.rules.vertex_use_fragment_declare"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001481, VkglTestCase_001481_1, VkglTestCase_001481_2);

#define VkglTestCase_001482_1 "dEQP-GLES3.functional.shaders.linkage.v"
#define VkglTestCase_001482_2 "arying.rules.vertex_use_declare_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001482, VkglTestCase_001482_1, VkglTestCase_001482_2);

#define VkglTestCase_001483_1 "dEQP-GLES3.functional.shaders.linkage"
#define VkglTestCase_001483_2 ".varying.rules.vertex_use_fragment_use"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001483, VkglTestCase_001483_1, VkglTestCase_001483_2);

#define VkglTestCase_001484_1 "dEQP-GLES3.functional.shaders.linkag"
#define VkglTestCase_001484_2 "e.varying.rules.differing_precision_1"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001484, VkglTestCase_001484_1, VkglTestCase_001484_2);

#define VkglTestCase_001485_1 "dEQP-GLES3.functional.shaders.linkag"
#define VkglTestCase_001485_2 "e.varying.rules.differing_precision_2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001485, VkglTestCase_001485_1, VkglTestCase_001485_2);

#define VkglTestCase_001486_1 "dEQP-GLES3.functional.shaders.linkag"
#define VkglTestCase_001486_2 "e.varying.rules.differing_precision_3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001486, VkglTestCase_001486_1, VkglTestCase_001486_2);

#define VkglTestCase_001487_1 "dEQP-GLES3.functional.shaders.lin"
#define VkglTestCase_001487_2 "kage.varying.rules.type_mismatch_1"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001487, VkglTestCase_001487_1, VkglTestCase_001487_2);

#define VkglTestCase_001488_1 "dEQP-GLES3.functional.shaders.lin"
#define VkglTestCase_001488_2 "kage.varying.rules.type_mismatch_2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001488, VkglTestCase_001488_1, VkglTestCase_001488_2);

#define VkglTestCase_001489_1 "dEQP-GLES3.functional.shaders.lin"
#define VkglTestCase_001489_2 "kage.varying.rules.type_mismatch_3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001489, VkglTestCase_001489_1, VkglTestCase_001489_2);

#define VkglTestCase_001490_1 "dEQP-GLES3.functional.shaders.linkage"
#define VkglTestCase_001490_2 ".varying.rules.struct_type_mismatch_1"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001490, VkglTestCase_001490_1, VkglTestCase_001490_2);

#define VkglTestCase_001491_1 "dEQP-GLES3.functional.shaders.linkage"
#define VkglTestCase_001491_2 ".varying.rules.struct_type_mismatch_2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001491, VkglTestCase_001491_1, VkglTestCase_001491_2);

#define VkglTestCase_001492_1 "dEQP-GLES3.functional.shaders.linkage"
#define VkglTestCase_001492_2 ".varying.rules.struct_type_mismatch_3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001492, VkglTestCase_001492_1, VkglTestCase_001492_2);

#define VkglTestCase_001493_1 "dEQP-GLES3.functional.shaders.linkage."
#define VkglTestCase_001493_2 "varying.rules.interpolation_mismatch_1"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001493, VkglTestCase_001493_1, VkglTestCase_001493_2);

#define VkglTestCase_001494_1 "dEQP-GLES3.functional.shaders.linkage."
#define VkglTestCase_001494_2 "varying.rules.differing_interpolation_2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001494, VkglTestCase_001494_1, VkglTestCase_001494_2);

#define VkglTestCase_001495_1 "dEQP-GLES3.functional.shaders.lin"
#define VkglTestCase_001495_2 "kage.varying.rules.illegal_usage_1"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001495, VkglTestCase_001495_1, VkglTestCase_001495_2);

#define VkglTestCase_001496_1 "dEQP-GLES3.functional.shaders.link"
#define VkglTestCase_001496_2 "age.varying.rules.invalid_type_int"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001496, VkglTestCase_001496_1, VkglTestCase_001496_2);

#define VkglTestCase_001497_1 "dEQP-GLES3.functional.shaders.link"
#define VkglTestCase_001497_2 "age.varying.rules.invalid_type_uint"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001497, VkglTestCase_001497_1, VkglTestCase_001497_2);

#define VkglTestCase_001498_1 "dEQP-GLES3.functional.shaders.link"
#define VkglTestCase_001498_2 "age.varying.rules.invalid_type_bool"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001498, VkglTestCase_001498_1, VkglTestCase_001498_2);

#define VkglTestCase_001499_1 "dEQP-GLES3.functional.shaders.linkage."
#define VkglTestCase_001499_2 "varying.rules.invalid_type_struct_array"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001499, VkglTestCase_001499_1, VkglTestCase_001499_2);

#define VkglTestCase_001500_1 "dEQP-GLES3.functional.shaders.linkage.v"
#define VkglTestCase_001500_2 "arying.rules.invalid_type_struct_struct"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001500, VkglTestCase_001500_1, VkglTestCase_001500_2);

#define VkglTestCase_001501_1 "dEQP-GLES3.functional.shaders.linkage."
#define VkglTestCase_001501_2 "varying.rules.invalid_type_array_struct"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001501, VkglTestCase_001501_1, VkglTestCase_001501_2);

#define VkglTestCase_001502_1 "dEQP-GLES3.functional.shaders.linkage."
#define VkglTestCase_001502_2 "varying.rules.invalid_type_array_array"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001502, VkglTestCase_001502_1, VkglTestCase_001502_2);
