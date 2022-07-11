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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001048_1 "KHR-GLES3.shaders.preprocessor.co"
#define VkglTestCase_001048_2 "nditional_inclusion.basic_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001048, VkglTestCase_001048_1, VkglTestCase_001048_2);

#define VkglTestCase_001049_1 "KHR-GLES3.shaders.preprocessor.con"
#define VkglTestCase_001049_2 "ditional_inclusion.basic_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001049, VkglTestCase_001049_1, VkglTestCase_001049_2);

#define VkglTestCase_001050_1 "KHR-GLES3.shaders.preprocessor.co"
#define VkglTestCase_001050_2 "nditional_inclusion.basic_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001050, VkglTestCase_001050_1, VkglTestCase_001050_2);

#define VkglTestCase_001051_1 "KHR-GLES3.shaders.preprocessor.con"
#define VkglTestCase_001051_2 "ditional_inclusion.basic_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001051, VkglTestCase_001051_1, VkglTestCase_001051_2);

#define VkglTestCase_001052_1 "KHR-GLES3.shaders.preprocessor.co"
#define VkglTestCase_001052_2 "nditional_inclusion.basic_3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001052, VkglTestCase_001052_1, VkglTestCase_001052_2);

#define VkglTestCase_001053_1 "KHR-GLES3.shaders.preprocessor.con"
#define VkglTestCase_001053_2 "ditional_inclusion.basic_3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001053, VkglTestCase_001053_1, VkglTestCase_001053_2);

#define VkglTestCase_001054_1 "KHR-GLES3.shaders.preprocessor.co"
#define VkglTestCase_001054_2 "nditional_inclusion.basic_4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001054, VkglTestCase_001054_1, VkglTestCase_001054_2);

#define VkglTestCase_001055_1 "KHR-GLES3.shaders.preprocessor.con"
#define VkglTestCase_001055_2 "ditional_inclusion.basic_4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001055, VkglTestCase_001055_1, VkglTestCase_001055_2);

#define VkglTestCase_001056_1 "KHR-GLES3.shaders.preprocessor.co"
#define VkglTestCase_001056_2 "nditional_inclusion.basic_5_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001056, VkglTestCase_001056_1, VkglTestCase_001056_2);

#define VkglTestCase_001057_1 "KHR-GLES3.shaders.preprocessor.con"
#define VkglTestCase_001057_2 "ditional_inclusion.basic_5_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001057, VkglTestCase_001057_1, VkglTestCase_001057_2);

#define VkglTestCase_001058_1 "KHR-GLES3.shaders.preprocessor.cond"
#define VkglTestCase_001058_2 "itional_inclusion.expression_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001058, VkglTestCase_001058_1, VkglTestCase_001058_2);

#define VkglTestCase_001059_1 "KHR-GLES3.shaders.preprocessor.condi"
#define VkglTestCase_001059_2 "tional_inclusion.expression_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001059, VkglTestCase_001059_1, VkglTestCase_001059_2);
