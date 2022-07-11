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

#define VkglTestCase_001388_1 "KHR-GLES3.shaders.literal_pars"
#define VkglTestCase_001388_2 "ing.correct_int_literal_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001388, VkglTestCase_001388_1, VkglTestCase_001388_2);

#define VkglTestCase_001389_1 "KHR-GLES3.shaders.literal_parsi"
#define VkglTestCase_001389_2 "ng.correct_int_literal_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001389, VkglTestCase_001389_1, VkglTestCase_001389_2);

#define VkglTestCase_001390_1 "KHR-GLES3.shaders.literal_p"
#define VkglTestCase_001390_2 "arsing.int_overflow_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001390, VkglTestCase_001390_1, VkglTestCase_001390_2);

#define VkglTestCase_001391_1 "KHR-GLES3.shaders.literal_pa"
#define VkglTestCase_001391_2 "rsing.int_overflow_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001391, VkglTestCase_001391_1, VkglTestCase_001391_2);

#define VkglTestCase_001392_1 "KHR-GLES3.shaders.literal_p"
#define VkglTestCase_001392_2 "arsing.int_overflow_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001392, VkglTestCase_001392_1, VkglTestCase_001392_2);

#define VkglTestCase_001393_1 "KHR-GLES3.shaders.literal_pa"
#define VkglTestCase_001393_2 "rsing.int_overflow_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001393, VkglTestCase_001393_1, VkglTestCase_001393_2);

#define VkglTestCase_001394_1 "KHR-GLES3.shaders.lite"
#define VkglTestCase_001394_2 "ral_parsing.int_wrap_1"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001394, VkglTestCase_001394_1, VkglTestCase_001394_2);

#define VkglTestCase_001395_1 "KHR-GLES3.shaders.lite"
#define VkglTestCase_001395_2 "ral_parsing.int_wrap_2"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001395, VkglTestCase_001395_1, VkglTestCase_001395_2);
