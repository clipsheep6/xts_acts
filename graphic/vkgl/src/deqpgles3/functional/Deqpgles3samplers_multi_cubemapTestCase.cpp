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

#define VkglTestCase_039695_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039695_2 "rs.multi_cubemap.diff_wrap_t"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039695, VkglTestCase_039695_1, VkglTestCase_039695_2);

#define VkglTestCase_039696_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039696_2 "rs.multi_cubemap.diff_wrap_s"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039696, VkglTestCase_039696_1, VkglTestCase_039696_2);

#define VkglTestCase_039697_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039697_2 "rs.multi_cubemap.diff_wrap_r"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039697, VkglTestCase_039697_1, VkglTestCase_039697_2);

#define VkglTestCase_039698_1 "dEQP-GLES3.functional.samplers"
#define VkglTestCase_039698_2 ".multi_cubemap.diff_min_filter"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039698, VkglTestCase_039698_1, VkglTestCase_039698_2);

#define VkglTestCase_039699_1 "dEQP-GLES3.functional.samplers"
#define VkglTestCase_039699_2 ".multi_cubemap.diff_mag_filter"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039699, VkglTestCase_039699_1, VkglTestCase_039699_2);

#define VkglTestCase_039700_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039700_2 "rs.multi_cubemap.diff_max_lod"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039700, VkglTestCase_039700_1, VkglTestCase_039700_2);

#define VkglTestCase_039701_1 "dEQP-GLES3.functional.sample"
#define VkglTestCase_039701_2 "rs.multi_cubemap.diff_min_lod"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039701, VkglTestCase_039701_1, VkglTestCase_039701_2);
