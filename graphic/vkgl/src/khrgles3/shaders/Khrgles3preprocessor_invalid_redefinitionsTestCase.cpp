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

#define VkglTestCase_000944_1 "KHR-GLES3.shaders.preprocessor.invalid_r"
#define VkglTestCase_000944_2 "edefinitions.invalid_identifier_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000944, VkglTestCase_000944_1, VkglTestCase_000944_2);

#define VkglTestCase_000945_1 "KHR-GLES3.shaders.preprocessor.invalid_re"
#define VkglTestCase_000945_2 "definitions.invalid_identifier_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000945, VkglTestCase_000945_1, VkglTestCase_000945_2);

#define VkglTestCase_000946_1 "KHR-GLES3.shaders.preprocessor.invalid_r"
#define VkglTestCase_000946_2 "edefinitions.invalid_identifier_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000946, VkglTestCase_000946_1, VkglTestCase_000946_2);

#define VkglTestCase_000947_1 "KHR-GLES3.shaders.preprocessor.invalid_re"
#define VkglTestCase_000947_2 "definitions.invalid_identifier_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000947, VkglTestCase_000947_1, VkglTestCase_000947_2);
