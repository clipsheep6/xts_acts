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
#include "../ActsDeqpgles30028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027668_1 "dEQP-GLES3.functional.fra"
#define VkglTestCase_027668_2 "gment_ops.depth.cmp_always"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027668, VkglTestCase_027668_1, VkglTestCase_027668_2);

#define VkglTestCase_027669_1 "dEQP-GLES3.functional.fra"
#define VkglTestCase_027669_2 "gment_ops.depth.cmp_never"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027669, VkglTestCase_027669_1, VkglTestCase_027669_2);

#define VkglTestCase_027670_1 "dEQP-GLES3.functional.fra"
#define VkglTestCase_027670_2 "gment_ops.depth.cmp_equal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027670, VkglTestCase_027670_1, VkglTestCase_027670_2);

#define VkglTestCase_027671_1 "dEQP-GLES3.functional.fragm"
#define VkglTestCase_027671_2 "ent_ops.depth.cmp_not_equal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027671, VkglTestCase_027671_1, VkglTestCase_027671_2);

#define VkglTestCase_027672_1 "dEQP-GLES3.functional.fragm"
#define VkglTestCase_027672_2 "ent_ops.depth.cmp_less_than"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027672, VkglTestCase_027672_1, VkglTestCase_027672_2);

#define VkglTestCase_027673_1 "dEQP-GLES3.functional.fragmen"
#define VkglTestCase_027673_2 "t_ops.depth.cmp_less_or_equal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027673, VkglTestCase_027673_1, VkglTestCase_027673_2);

#define VkglTestCase_027674_1 "dEQP-GLES3.functional.fragme"
#define VkglTestCase_027674_2 "nt_ops.depth.cmp_greater_than"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027674, VkglTestCase_027674_1, VkglTestCase_027674_2);

#define VkglTestCase_027675_1 "dEQP-GLES3.functional.fragment"
#define VkglTestCase_027675_2 "_ops.depth.cmp_greater_or_equal"
SHRINK_HWTEST_F(ActsDeqpgles30028TestSuite, TestCase_027675, VkglTestCase_027675_1, VkglTestCase_027675_2);
