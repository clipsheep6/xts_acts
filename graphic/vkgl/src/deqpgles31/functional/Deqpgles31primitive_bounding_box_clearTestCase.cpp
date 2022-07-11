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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025181_1 "dEQP-GLES31.functional.primitiv"
#define VkglTestCase_025181_2 "e_bounding_box.clear.full_clear"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025181, VkglTestCase_025181_1, VkglTestCase_025181_2);

#define VkglTestCase_025182_1 "dEQP-GLES31.functional.primitive_bound"
#define VkglTestCase_025182_2 "ing_box.clear.full_clear_with_triangles"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025182, VkglTestCase_025182_1, VkglTestCase_025182_2);

#define VkglTestCase_025183_1 "dEQP-GLES31.functional.primitive_bounding_box.cl"
#define VkglTestCase_025183_2 "ear.full_clear_with_triangles_per_primitive_bbox"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025183, VkglTestCase_025183_1, VkglTestCase_025183_2);

#define VkglTestCase_025184_1 "dEQP-GLES31.functional.primitive_"
#define VkglTestCase_025184_2 "bounding_box.clear.scissored_clear"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025184, VkglTestCase_025184_1, VkglTestCase_025184_2);

#define VkglTestCase_025185_1 "dEQP-GLES31.functional.primitive_bounding"
#define VkglTestCase_025185_2 "_box.clear.scissored_clear_with_triangles"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025185, VkglTestCase_025185_1, VkglTestCase_025185_2);

#define VkglTestCase_025186_1 "dEQP-GLES31.functional.primitive_bounding_box.clea"
#define VkglTestCase_025186_2 "r.scissored_clear_with_triangles_per_primitive_bbox"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025186, VkglTestCase_025186_1, VkglTestCase_025186_2);

#define VkglTestCase_025187_1 "dEQP-GLES31.functional.primitive_bou"
#define VkglTestCase_025187_2 "nding_box.clear.scissored_full_clear"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025187, VkglTestCase_025187_1, VkglTestCase_025187_2);

#define VkglTestCase_025188_1 "dEQP-GLES31.functional.primitive_bounding_b"
#define VkglTestCase_025188_2 "ox.clear.scissored_full_clear_with_triangles"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025188, VkglTestCase_025188_1, VkglTestCase_025188_2);

#define VkglTestCase_025189_1 "dEQP-GLES31.functional.primitive_bounding_box.clear.s"
#define VkglTestCase_025189_2 "cissored_full_clear_with_triangles_per_primitive_bbox"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025189, VkglTestCase_025189_1, VkglTestCase_025189_2);
