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
#include "../ActsDeqpgles310005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004708_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004708_2 ".es31.uniform.block.differing_precision"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004708, VkglTestCase_004708_1, VkglTestCase_004708_2);

#define VkglTestCase_004709_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004709_2 "age.es31.uniform.block.type_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004709, VkglTestCase_004709_1, VkglTestCase_004709_2);

#define VkglTestCase_004710_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004710_2 "e.es31.uniform.block.members_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004710, VkglTestCase_004710_1, VkglTestCase_004710_2);

#define VkglTestCase_004711_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004711_2 "1.uniform.block.layout_qualifier_mismatch_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004711, VkglTestCase_004711_1, VkglTestCase_004711_2);

#define VkglTestCase_004712_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004712_2 "1.uniform.block.layout_qualifier_mismatch_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004712, VkglTestCase_004712_1, VkglTestCase_004712_2);

#define VkglTestCase_004713_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004713_2 "1.uniform.block.layout_qualifier_mismatch_3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004713, VkglTestCase_004713_1, VkglTestCase_004713_2);

#define VkglTestCase_004714_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004714_2 "1.uniform.block.layout_qualifier_mismatch_4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004714, VkglTestCase_004714_1, VkglTestCase_004714_2);

#define VkglTestCase_004715_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004715_2 "1.uniform.block.layout_qualifier_mismatch_5"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004715, VkglTestCase_004715_1, VkglTestCase_004715_2);

#define VkglTestCase_004968_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004968_2 ".es32.uniform.block.differing_precision"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004968, VkglTestCase_004968_1, VkglTestCase_004968_2);

#define VkglTestCase_004969_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004969_2 "age.es32.uniform.block.type_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004969, VkglTestCase_004969_1, VkglTestCase_004969_2);

#define VkglTestCase_004970_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004970_2 "e.es32.uniform.block.members_mismatch"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004970, VkglTestCase_004970_1, VkglTestCase_004970_2);

#define VkglTestCase_004971_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004971_2 "2.uniform.block.layout_qualifier_mismatch_1"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004971, VkglTestCase_004971_1, VkglTestCase_004971_2);

#define VkglTestCase_004972_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004972_2 "2.uniform.block.layout_qualifier_mismatch_2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004972, VkglTestCase_004972_1, VkglTestCase_004972_2);

#define VkglTestCase_004973_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004973_2 "2.uniform.block.layout_qualifier_mismatch_3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004973, VkglTestCase_004973_1, VkglTestCase_004973_2);

#define VkglTestCase_004974_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004974_2 "2.uniform.block.layout_qualifier_mismatch_4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004974, VkglTestCase_004974_1, VkglTestCase_004974_2);

#define VkglTestCase_004975_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004975_2 "2.uniform.block.layout_qualifier_mismatch_5"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004975, VkglTestCase_004975_1, VkglTestCase_004975_2);
