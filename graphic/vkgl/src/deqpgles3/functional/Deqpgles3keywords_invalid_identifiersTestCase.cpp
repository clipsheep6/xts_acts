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
#include "../ActsDeqpgles30005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004839_1 "dEQP-GLES3.functional.shaders.keyword"
#define VkglTestCase_004839_2 "s.invalid_identifiers.gl_begin_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004839, VkglTestCase_004839_1, VkglTestCase_004839_2);

#define VkglTestCase_004840_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004840_2 ".invalid_identifiers.gl_begin_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004840, VkglTestCase_004840_1, VkglTestCase_004840_2);

#define VkglTestCase_004841_1 "dEQP-GLES3.functional.shaders.keywo"
#define VkglTestCase_004841_2 "rds.invalid_identifiers.digit_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004841, VkglTestCase_004841_1, VkglTestCase_004841_2);

#define VkglTestCase_004842_1 "dEQP-GLES3.functional.shaders.keywor"
#define VkglTestCase_004842_2 "ds.invalid_identifiers.digit_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004842, VkglTestCase_004842_1, VkglTestCase_004842_2);

#define VkglTestCase_004843_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004843_2 ".invalid_identifiers.digit_begin_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004843, VkglTestCase_004843_1, VkglTestCase_004843_2);

#define VkglTestCase_004844_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004844_2 "invalid_identifiers.digit_begin_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004844, VkglTestCase_004844_1, VkglTestCase_004844_2);

#define VkglTestCase_004845_1 "dEQP-GLES3.functional.shaders.keywords"
#define VkglTestCase_004845_2 ".invalid_identifiers.max_length_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004845, VkglTestCase_004845_1, VkglTestCase_004845_2);

#define VkglTestCase_004846_1 "dEQP-GLES3.functional.shaders.keywords."
#define VkglTestCase_004846_2 "invalid_identifiers.max_length_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004846, VkglTestCase_004846_1, VkglTestCase_004846_2);
