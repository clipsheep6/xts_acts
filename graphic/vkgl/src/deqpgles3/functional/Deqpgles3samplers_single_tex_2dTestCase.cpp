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

#define VkglTestCase_039660_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039660_2 "rs.single_tex_2d.diff_wrap_t"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039660, VkglTestCase_039660_1, VkglTestCase_039660_2);

#define VkglTestCase_039661_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039661_2 "rs.single_tex_2d.diff_wrap_s"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039661, VkglTestCase_039661_1, VkglTestCase_039661_2);

#define VkglTestCase_039662_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039662_2 "rs.single_tex_2d.diff_wrap_r"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039662, VkglTestCase_039662_1, VkglTestCase_039662_2);

#define VkglTestCase_039663_1 "dEQP-GLES3.functional.samplers"
#define VkglTestCase_039663_2 ".single_tex_2d.diff_min_filter"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039663, VkglTestCase_039663_1, VkglTestCase_039663_2);

#define VkglTestCase_039664_1 "dEQP-GLES3.functional.samplers"
#define VkglTestCase_039664_2 ".single_tex_2d.diff_mag_filter"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039664, VkglTestCase_039664_1, VkglTestCase_039664_2);

#define VkglTestCase_039665_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039665_2 "rs.single_tex_2d.diff_max_lod"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039665, VkglTestCase_039665_1, VkglTestCase_039665_2);

#define VkglTestCase_039666_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039666_2 "rs.single_tex_2d.diff_min_lod"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039666, VkglTestCase_039666_1, VkglTestCase_039666_2);
