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

#define VkglTestCase_039688_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039688_2 "rs.single_cubemap.diff_wrap_t"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039688, VkglTestCase_039688_1, VkglTestCase_039688_2);

#define VkglTestCase_039689_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039689_2 "rs.single_cubemap.diff_wrap_s"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039689, VkglTestCase_039689_1, VkglTestCase_039689_2);

#define VkglTestCase_039690_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039690_2 "rs.single_cubemap.diff_wrap_r"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039690, VkglTestCase_039690_1, VkglTestCase_039690_2);

#define VkglTestCase_039691_1 "dEQP-GLES3.functional.samplers"
#define VkglTestCase_039691_2 ".single_cubemap.diff_min_filter"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039691, VkglTestCase_039691_1, VkglTestCase_039691_2);

#define VkglTestCase_039692_1 "dEQP-GLES3.functional.samplers"
#define VkglTestCase_039692_2 ".single_cubemap.diff_mag_filter"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039692, VkglTestCase_039692_1, VkglTestCase_039692_2);

#define VkglTestCase_039693_1 "dEQP-GLES3.functional.sampler"
#define VkglTestCase_039693_2 "s.single_cubemap.diff_max_lod"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039693, VkglTestCase_039693_1, VkglTestCase_039693_2);

#define VkglTestCase_039694_1 "dEQP-GLES3.functional.sampler"
#define VkglTestCase_039694_2 "s.single_cubemap.diff_min_lod"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039694, VkglTestCase_039694_1, VkglTestCase_039694_2);
