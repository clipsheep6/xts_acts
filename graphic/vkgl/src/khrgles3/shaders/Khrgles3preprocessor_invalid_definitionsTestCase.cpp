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
#include "../ActsKhrgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000908_1 "KHR-GLES3.shaders.preprocessor.invalid_"
#define VkglTestCase_000908_2 "definitions.define_non_identifier_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000908, VkglTestCase_000908_1, VkglTestCase_000908_2);

#define VkglTestCase_000909_1 "KHR-GLES3.shaders.preprocessor.invalid_d"
#define VkglTestCase_000909_2 "efinitions.define_non_identifier_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000909, VkglTestCase_000909_1, VkglTestCase_000909_2);

#define VkglTestCase_000910_1 "KHR-GLES3.shaders.preprocessor.invalid_d"
#define VkglTestCase_000910_2 "efinitions.undef_non_identifier_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000910, VkglTestCase_000910_1, VkglTestCase_000910_2);

#define VkglTestCase_000911_1 "KHR-GLES3.shaders.preprocessor.invalid_de"
#define VkglTestCase_000911_2 "finitions.undef_non_identifier_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000911, VkglTestCase_000911_1, VkglTestCase_000911_2);

#define VkglTestCase_000912_1 "KHR-GLES3.shaders.preprocessor.invalid_d"
#define VkglTestCase_000912_2 "efinitions.undef_non_identifier_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000912, VkglTestCase_000912_1, VkglTestCase_000912_2);

#define VkglTestCase_000913_1 "KHR-GLES3.shaders.preprocessor.invalid_de"
#define VkglTestCase_000913_2 "finitions.undef_non_identifier_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000913, VkglTestCase_000913_1, VkglTestCase_000913_2);
