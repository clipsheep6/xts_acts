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
#include "../ActsDeqpgles310019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018287_1 "dEQP-GLES31.functional.tessellation_geometry_intera"
#define VkglTestCase_018287_2 "ction.render.limits.output_required_max_tessellation"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018287, VkglTestCase_018287_1, VkglTestCase_018287_2);

#define VkglTestCase_018288_1 "dEQP-GLES31.functional.tessellation_geometry_interacti"
#define VkglTestCase_018288_2 "on.render.limits.output_implementation_max_tessellation"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018288, VkglTestCase_018288_1, VkglTestCase_018288_2);

#define VkglTestCase_018289_1 "dEQP-GLES31.functional.tessellation_geometry_inte"
#define VkglTestCase_018289_2 "raction.render.limits.output_required_max_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018289, VkglTestCase_018289_1, VkglTestCase_018289_2);

#define VkglTestCase_018290_1 "dEQP-GLES31.functional.tessellation_geometry_interac"
#define VkglTestCase_018290_2 "tion.render.limits.output_implementation_max_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018290, VkglTestCase_018290_1, VkglTestCase_018290_2);

#define VkglTestCase_018291_1 "dEQP-GLES31.functional.tessellation_geometry_intera"
#define VkglTestCase_018291_2 "ction.render.limits.output_required_max_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018291, VkglTestCase_018291_1, VkglTestCase_018291_2);

#define VkglTestCase_018292_1 "dEQP-GLES31.functional.tessellation_geometry_interacti"
#define VkglTestCase_018292_2 "on.render.limits.output_implementation_max_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018292, VkglTestCase_018292_1, VkglTestCase_018292_2);
