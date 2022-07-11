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

#define VkglTestCase_039681_1 "dEQP-GLES3.functional.sampl"
#define VkglTestCase_039681_2 "ers.multi_tex_3d.diff_wrap_t"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039681, VkglTestCase_039681_1, VkglTestCase_039681_2);

#define VkglTestCase_039682_1 "dEQP-GLES3.functional.sampl"
#define VkglTestCase_039682_2 "ers.multi_tex_3d.diff_wrap_s"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039682, VkglTestCase_039682_1, VkglTestCase_039682_2);

#define VkglTestCase_039683_1 "dEQP-GLES3.functional.sampl"
#define VkglTestCase_039683_2 "ers.multi_tex_3d.diff_wrap_r"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039683, VkglTestCase_039683_1, VkglTestCase_039683_2);

#define VkglTestCase_039684_1 "dEQP-GLES3.functional.sampler"
#define VkglTestCase_039684_2 "s.multi_tex_3d.diff_min_filter"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039684, VkglTestCase_039684_1, VkglTestCase_039684_2);

#define VkglTestCase_039685_1 "dEQP-GLES3.functional.sampler"
#define VkglTestCase_039685_2 "s.multi_tex_3d.diff_mag_filter"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039685, VkglTestCase_039685_1, VkglTestCase_039685_2);

#define VkglTestCase_039686_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039686_2 "rs.multi_tex_3d.diff_max_lod"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039686, VkglTestCase_039686_1, VkglTestCase_039686_2);

#define VkglTestCase_039687_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039687_2 "rs.multi_tex_3d.diff_min_lod"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039687, VkglTestCase_039687_1, VkglTestCase_039687_2);
