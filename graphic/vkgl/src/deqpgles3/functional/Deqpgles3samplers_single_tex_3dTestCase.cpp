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

#define VkglTestCase_039674_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039674_2 "rs.single_tex_3d.diff_wrap_t"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039674, VkglTestCase_039674_1, VkglTestCase_039674_2);

#define VkglTestCase_039675_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039675_2 "rs.single_tex_3d.diff_wrap_s"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039675, VkglTestCase_039675_1, VkglTestCase_039675_2);

#define VkglTestCase_039676_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039676_2 "rs.single_tex_3d.diff_wrap_r"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039676, VkglTestCase_039676_1, VkglTestCase_039676_2);

#define VkglTestCase_039677_1 "dEQP-GLES3.functional.samplers"
#define VkglTestCase_039677_2 ".single_tex_3d.diff_min_filter"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039677, VkglTestCase_039677_1, VkglTestCase_039677_2);

#define VkglTestCase_039678_1 "dEQP-GLES3.functional.samplers"
#define VkglTestCase_039678_2 ".single_tex_3d.diff_mag_filter"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039678, VkglTestCase_039678_1, VkglTestCase_039678_2);

#define VkglTestCase_039679_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039679_2 "rs.single_tex_3d.diff_max_lod"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039679, VkglTestCase_039679_1, VkglTestCase_039679_2);

#define VkglTestCase_039680_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039680_2 "rs.single_tex_3d.diff_min_lod"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039680, VkglTestCase_039680_1, VkglTestCase_039680_2);
