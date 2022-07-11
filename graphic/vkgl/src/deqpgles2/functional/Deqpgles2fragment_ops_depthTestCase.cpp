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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011001_1 "dEQP-GLES2.functional.fra"
#define VkglTestCase_011001_2 "gment_ops.depth.cmp_always"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011001, VkglTestCase_011001_1, VkglTestCase_011001_2);

#define VkglTestCase_011002_1 "dEQP-GLES2.functional.fra"
#define VkglTestCase_011002_2 "gment_ops.depth.cmp_never"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011002, VkglTestCase_011002_1, VkglTestCase_011002_2);

#define VkglTestCase_011003_1 "dEQP-GLES2.functional.fra"
#define VkglTestCase_011003_2 "gment_ops.depth.cmp_equal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011003, VkglTestCase_011003_1, VkglTestCase_011003_2);

#define VkglTestCase_011004_1 "dEQP-GLES2.functional.fragm"
#define VkglTestCase_011004_2 "ent_ops.depth.cmp_not_equal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011004, VkglTestCase_011004_1, VkglTestCase_011004_2);

#define VkglTestCase_011005_1 "dEQP-GLES2.functional.fragm"
#define VkglTestCase_011005_2 "ent_ops.depth.cmp_less_than"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011005, VkglTestCase_011005_1, VkglTestCase_011005_2);

#define VkglTestCase_011006_1 "dEQP-GLES2.functional.fragmen"
#define VkglTestCase_011006_2 "t_ops.depth.cmp_less_or_equal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011006, VkglTestCase_011006_1, VkglTestCase_011006_2);

#define VkglTestCase_011007_1 "dEQP-GLES2.functional.fragme"
#define VkglTestCase_011007_2 "nt_ops.depth.cmp_greater_than"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011007, VkglTestCase_011007_1, VkglTestCase_011007_2);

#define VkglTestCase_011008_1 "dEQP-GLES2.functional.fragment"
#define VkglTestCase_011008_2 "_ops.depth.cmp_greater_or_equal"
SHRINK_HWTEST_F(ActsDeqpgles20012TestSuite, TestCase_011008, VkglTestCase_011008_1, VkglTestCase_011008_2);
