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

#define VkglTestCase_001164_1 "KHR-GLES3.shaders.preprocesso"
#define VkglTestCase_001164_2 "r.conditionals.ifdef_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001164, VkglTestCase_001164_1, VkglTestCase_001164_2);

#define VkglTestCase_001165_1 "KHR-GLES3.shaders.preprocessor"
#define VkglTestCase_001165_2 ".conditionals.ifdef_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001165, VkglTestCase_001165_1, VkglTestCase_001165_2);

#define VkglTestCase_001166_1 "KHR-GLES3.shaders.preprocesso"
#define VkglTestCase_001166_2 "r.conditionals.ifdef_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001166, VkglTestCase_001166_1, VkglTestCase_001166_2);

#define VkglTestCase_001167_1 "KHR-GLES3.shaders.preprocessor"
#define VkglTestCase_001167_2 ".conditionals.ifdef_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001167, VkglTestCase_001167_1, VkglTestCase_001167_2);

#define VkglTestCase_001168_1 "KHR-GLES3.shaders.preprocesso"
#define VkglTestCase_001168_2 "r.conditionals.ifdef_3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001168, VkglTestCase_001168_1, VkglTestCase_001168_2);

#define VkglTestCase_001169_1 "KHR-GLES3.shaders.preprocessor"
#define VkglTestCase_001169_2 ".conditionals.ifdef_3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001169, VkglTestCase_001169_1, VkglTestCase_001169_2);

#define VkglTestCase_001170_1 "KHR-GLES3.shaders.preprocesso"
#define VkglTestCase_001170_2 "r.conditionals.ifndef_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001170, VkglTestCase_001170_1, VkglTestCase_001170_2);

#define VkglTestCase_001171_1 "KHR-GLES3.shaders.preprocessor"
#define VkglTestCase_001171_2 ".conditionals.ifndef_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001171, VkglTestCase_001171_1, VkglTestCase_001171_2);

#define VkglTestCase_001172_1 "KHR-GLES3.shaders.preprocesso"
#define VkglTestCase_001172_2 "r.conditionals.ifndef_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001172, VkglTestCase_001172_1, VkglTestCase_001172_2);

#define VkglTestCase_001173_1 "KHR-GLES3.shaders.preprocessor"
#define VkglTestCase_001173_2 ".conditionals.ifndef_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001173, VkglTestCase_001173_1, VkglTestCase_001173_2);

#define VkglTestCase_001174_1 "KHR-GLES3.shaders.preprocessor.conditio"
#define VkglTestCase_001174_2 "nals.mixed_conditional_inclusion_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001174, VkglTestCase_001174_1, VkglTestCase_001174_2);

#define VkglTestCase_001175_1 "KHR-GLES3.shaders.preprocessor.condition"
#define VkglTestCase_001175_2 "als.mixed_conditional_inclusion_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001175, VkglTestCase_001175_1, VkglTestCase_001175_2);

#define VkglTestCase_001176_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001176_2 "conditionals.nested_if_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001176, VkglTestCase_001176_1, VkglTestCase_001176_2);

#define VkglTestCase_001177_1 "KHR-GLES3.shaders.preprocessor.c"
#define VkglTestCase_001177_2 "onditionals.nested_if_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001177, VkglTestCase_001177_1, VkglTestCase_001177_2);

#define VkglTestCase_001178_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001178_2 "conditionals.nested_if_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001178, VkglTestCase_001178_1, VkglTestCase_001178_2);

#define VkglTestCase_001179_1 "KHR-GLES3.shaders.preprocessor.c"
#define VkglTestCase_001179_2 "onditionals.nested_if_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001179, VkglTestCase_001179_1, VkglTestCase_001179_2);

#define VkglTestCase_001180_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_001180_2 "conditionals.nested_if_3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001180, VkglTestCase_001180_1, VkglTestCase_001180_2);

#define VkglTestCase_001181_1 "KHR-GLES3.shaders.preprocessor.c"
#define VkglTestCase_001181_2 "onditionals.nested_if_3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001181, VkglTestCase_001181_1, VkglTestCase_001181_2);
