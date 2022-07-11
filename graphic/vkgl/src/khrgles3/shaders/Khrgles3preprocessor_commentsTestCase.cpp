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

#define VkglTestCase_000948_1 "KHR-GLES3.shaders.preprocessor.comm"
#define VkglTestCase_000948_2 "ents.multiline_comment_define_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000948, VkglTestCase_000948_1, VkglTestCase_000948_2);

#define VkglTestCase_000949_1 "KHR-GLES3.shaders.preprocessor.comme"
#define VkglTestCase_000949_2 "nts.multiline_comment_define_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000949, VkglTestCase_000949_1, VkglTestCase_000949_2);

#define VkglTestCase_000950_1 "KHR-GLES3.shaders.preprocessor"
#define VkglTestCase_000950_2 ".comments.nested_comment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000950, VkglTestCase_000950_1, VkglTestCase_000950_2);

#define VkglTestCase_000951_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_000951_2 "comments.nested_comment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000951, VkglTestCase_000951_1, VkglTestCase_000951_2);

#define VkglTestCase_000952_1 "KHR-GLES3.shaders.preprocessor."
#define VkglTestCase_000952_2 "comments.invalid_comment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000952, VkglTestCase_000952_1, VkglTestCase_000952_2);

#define VkglTestCase_000953_1 "KHR-GLES3.shaders.preprocessor.c"
#define VkglTestCase_000953_2 "omments.invalid_comment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000953, VkglTestCase_000953_1, VkglTestCase_000953_2);

#define VkglTestCase_000954_1 "KHR-GLES3.shaders.preprocessor.com"
#define VkglTestCase_000954_2 "ments.unterminated_comment_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000954, VkglTestCase_000954_1, VkglTestCase_000954_2);

#define VkglTestCase_000955_1 "KHR-GLES3.shaders.preprocessor.comm"
#define VkglTestCase_000955_2 "ents.unterminated_comment_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000955, VkglTestCase_000955_1, VkglTestCase_000955_2);

#define VkglTestCase_000956_1 "KHR-GLES3.shaders.preprocessor.com"
#define VkglTestCase_000956_2 "ments.unterminated_comment_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000956, VkglTestCase_000956_1, VkglTestCase_000956_2);

#define VkglTestCase_000957_1 "KHR-GLES3.shaders.preprocessor.comm"
#define VkglTestCase_000957_2 "ents.unterminated_comment_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000957, VkglTestCase_000957_1, VkglTestCase_000957_2);
