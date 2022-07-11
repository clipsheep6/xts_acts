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
#include "../ActsDeqpgles30040TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_039667_1 "dEQP-GLES3.functional.sampl"
#define VkglTestCase_039667_2 "ers.multi_tex_2d.diff_wrap_t"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039667, VkglTestCase_039667_1, VkglTestCase_039667_2);

#define VkglTestCase_039668_1 "dEQP-GLES3.functional.sampl"
#define VkglTestCase_039668_2 "ers.multi_tex_2d.diff_wrap_s"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039668, VkglTestCase_039668_1, VkglTestCase_039668_2);

#define VkglTestCase_039669_1 "dEQP-GLES3.functional.sampl"
#define VkglTestCase_039669_2 "ers.multi_tex_2d.diff_wrap_r"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039669, VkglTestCase_039669_1, VkglTestCase_039669_2);

#define VkglTestCase_039670_1 "dEQP-GLES3.functional.sampler"
#define VkglTestCase_039670_2 "s.multi_tex_2d.diff_min_filter"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039670, VkglTestCase_039670_1, VkglTestCase_039670_2);

#define VkglTestCase_039671_1 "dEQP-GLES3.functional.sampler"
#define VkglTestCase_039671_2 "s.multi_tex_2d.diff_mag_filter"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039671, VkglTestCase_039671_1, VkglTestCase_039671_2);

#define VkglTestCase_039672_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039672_2 "rs.multi_tex_2d.diff_max_lod"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039672, VkglTestCase_039672_1, VkglTestCase_039672_2);

#define VkglTestCase_039673_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039673_2 "rs.multi_tex_2d.diff_min_lod"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039673, VkglTestCase_039673_1, VkglTestCase_039673_2);
