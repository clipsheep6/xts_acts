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
#include "../ActsDeqpgles310008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007618_1 "dEQP-GLES31.functional.compute.sha"
#define VkglTestCase_007618_2 "red_var.work_group_size.float_1_1_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007618, VkglTestCase_007618_1, VkglTestCase_007618_2);

#define VkglTestCase_007619_1 "dEQP-GLES31.functional.compute.shar"
#define VkglTestCase_007619_2 "ed_var.work_group_size.float_64_1_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007619, VkglTestCase_007619_1, VkglTestCase_007619_2);

#define VkglTestCase_007620_1 "dEQP-GLES31.functional.compute.shar"
#define VkglTestCase_007620_2 "ed_var.work_group_size.float_1_64_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007620, VkglTestCase_007620_1, VkglTestCase_007620_2);

#define VkglTestCase_007621_1 "dEQP-GLES31.functional.compute.shar"
#define VkglTestCase_007621_2 "ed_var.work_group_size.float_1_1_64"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007621, VkglTestCase_007621_1, VkglTestCase_007621_2);

#define VkglTestCase_007622_1 "dEQP-GLES31.functional.compute.shar"
#define VkglTestCase_007622_2 "ed_var.work_group_size.float_128_1_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007622, VkglTestCase_007622_1, VkglTestCase_007622_2);

#define VkglTestCase_007623_1 "dEQP-GLES31.functional.compute.shar"
#define VkglTestCase_007623_2 "ed_var.work_group_size.float_1_128_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007623, VkglTestCase_007623_1, VkglTestCase_007623_2);

#define VkglTestCase_007624_1 "dEQP-GLES31.functional.compute.shar"
#define VkglTestCase_007624_2 "ed_var.work_group_size.float_13_2_4"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007624, VkglTestCase_007624_1, VkglTestCase_007624_2);

#define VkglTestCase_007625_1 "dEQP-GLES31.functional.compute.sha"
#define VkglTestCase_007625_2 "red_var.work_group_size.vec4_1_1_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007625, VkglTestCase_007625_1, VkglTestCase_007625_2);

#define VkglTestCase_007626_1 "dEQP-GLES31.functional.compute.sha"
#define VkglTestCase_007626_2 "red_var.work_group_size.vec4_64_1_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007626, VkglTestCase_007626_1, VkglTestCase_007626_2);

#define VkglTestCase_007627_1 "dEQP-GLES31.functional.compute.sha"
#define VkglTestCase_007627_2 "red_var.work_group_size.vec4_1_64_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007627, VkglTestCase_007627_1, VkglTestCase_007627_2);

#define VkglTestCase_007628_1 "dEQP-GLES31.functional.compute.sha"
#define VkglTestCase_007628_2 "red_var.work_group_size.vec4_1_1_64"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007628, VkglTestCase_007628_1, VkglTestCase_007628_2);

#define VkglTestCase_007629_1 "dEQP-GLES31.functional.compute.shar"
#define VkglTestCase_007629_2 "ed_var.work_group_size.vec4_128_1_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007629, VkglTestCase_007629_1, VkglTestCase_007629_2);

#define VkglTestCase_007630_1 "dEQP-GLES31.functional.compute.shar"
#define VkglTestCase_007630_2 "ed_var.work_group_size.vec4_1_128_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007630, VkglTestCase_007630_1, VkglTestCase_007630_2);

#define VkglTestCase_007631_1 "dEQP-GLES31.functional.compute.sha"
#define VkglTestCase_007631_2 "red_var.work_group_size.vec4_13_2_4"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007631, VkglTestCase_007631_1, VkglTestCase_007631_2);

#define VkglTestCase_007632_1 "dEQP-GLES31.functional.compute.sha"
#define VkglTestCase_007632_2 "red_var.work_group_size.mat4_1_1_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007632, VkglTestCase_007632_1, VkglTestCase_007632_2);

#define VkglTestCase_007633_1 "dEQP-GLES31.functional.compute.sha"
#define VkglTestCase_007633_2 "red_var.work_group_size.mat4_64_1_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007633, VkglTestCase_007633_1, VkglTestCase_007633_2);

#define VkglTestCase_007634_1 "dEQP-GLES31.functional.compute.sha"
#define VkglTestCase_007634_2 "red_var.work_group_size.mat4_1_64_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007634, VkglTestCase_007634_1, VkglTestCase_007634_2);

#define VkglTestCase_007635_1 "dEQP-GLES31.functional.compute.sha"
#define VkglTestCase_007635_2 "red_var.work_group_size.mat4_1_1_64"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007635, VkglTestCase_007635_1, VkglTestCase_007635_2);

#define VkglTestCase_007636_1 "dEQP-GLES31.functional.compute.shar"
#define VkglTestCase_007636_2 "ed_var.work_group_size.mat4_128_1_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007636, VkglTestCase_007636_1, VkglTestCase_007636_2);

#define VkglTestCase_007637_1 "dEQP-GLES31.functional.compute.shar"
#define VkglTestCase_007637_2 "ed_var.work_group_size.mat4_1_128_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007637, VkglTestCase_007637_1, VkglTestCase_007637_2);

#define VkglTestCase_007638_1 "dEQP-GLES31.functional.compute.sha"
#define VkglTestCase_007638_2 "red_var.work_group_size.mat4_13_2_4"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007638, VkglTestCase_007638_1, VkglTestCase_007638_2);
