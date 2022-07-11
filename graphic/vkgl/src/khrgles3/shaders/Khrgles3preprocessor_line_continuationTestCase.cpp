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

#define VkglTestCase_000958_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_000958_2 "line_continuation.comment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000958, VkglTestCase_000958_1, VkglTestCase_000958_2);

#define VkglTestCase_000959_1 "KHR-GLES3.shaders.preprocessor.l"
#define VkglTestCase_000959_2 "ine_continuation.comment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000959, VkglTestCase_000959_1, VkglTestCase_000959_2);

#define VkglTestCase_000960_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_000960_2 "line_continuation.define_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000960, VkglTestCase_000960_1, VkglTestCase_000960_2);

#define VkglTestCase_000961_1 "KHR-GLES3.shaders.preprocessor.l"
#define VkglTestCase_000961_2 "ine_continuation.define_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000961, VkglTestCase_000961_1, VkglTestCase_000961_2);

#define VkglTestCase_000962_1 "KHR-GLES3.shaders.preprocessor.line_c"
#define VkglTestCase_000962_2 "ontinuation.preprocessing_token_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000962, VkglTestCase_000962_1, VkglTestCase_000962_2);

#define VkglTestCase_000963_1 "KHR-GLES3.shaders.preprocessor.line_co"
#define VkglTestCase_000963_2 "ntinuation.preprocessing_token_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000963, VkglTestCase_000963_1, VkglTestCase_000963_2);

#define VkglTestCase_000964_1 "KHR-GLES3.shaders.preprocessor"
#define VkglTestCase_000964_2 ".line_continuation.token_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000964, VkglTestCase_000964_1, VkglTestCase_000964_2);

#define VkglTestCase_000965_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_000965_2 "line_continuation.token_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000965, VkglTestCase_000965_1, VkglTestCase_000965_2);

#define VkglTestCase_000966_1 "KHR-GLES3.shaders.preprocessor.line"
#define VkglTestCase_000966_2 "_continuation.middle_of_line_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000966, VkglTestCase_000966_1, VkglTestCase_000966_2);

#define VkglTestCase_000967_1 "KHR-GLES3.shaders.preprocessor.line_"
#define VkglTestCase_000967_2 "continuation.middle_of_line_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000967, VkglTestCase_000967_1, VkglTestCase_000967_2);
