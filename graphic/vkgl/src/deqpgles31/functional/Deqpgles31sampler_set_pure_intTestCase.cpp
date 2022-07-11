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
#include "../ActsDeqpgles310016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015953_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015953_2 "sampler.set_pure_int.texture_wrap_s"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015953, VkglTestCase_015953_1, VkglTestCase_015953_2);

#define VkglTestCase_015954_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015954_2 "sampler.set_pure_int.texture_wrap_t"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015954, VkglTestCase_015954_1, VkglTestCase_015954_2);

#define VkglTestCase_015955_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015955_2 "sampler.set_pure_int.texture_wrap_r"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015955, VkglTestCase_015955_1, VkglTestCase_015955_2);

#define VkglTestCase_015956_1 "dEQP-GLES31.functional.state_query.sa"
#define VkglTestCase_015956_2 "mpler.set_pure_int.texture_mag_filter"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015956, VkglTestCase_015956_1, VkglTestCase_015956_2);

#define VkglTestCase_015957_1 "dEQP-GLES31.functional.state_query.sa"
#define VkglTestCase_015957_2 "mpler.set_pure_int.texture_min_filter"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015957, VkglTestCase_015957_1, VkglTestCase_015957_2);

#define VkglTestCase_015958_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015958_2 "sampler.set_pure_int.texture_min_lod"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015958, VkglTestCase_015958_1, VkglTestCase_015958_2);

#define VkglTestCase_015959_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015959_2 "sampler.set_pure_int.texture_max_lod"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015959, VkglTestCase_015959_1, VkglTestCase_015959_2);

#define VkglTestCase_015960_1 "dEQP-GLES31.functional.state_query.sam"
#define VkglTestCase_015960_2 "pler.set_pure_int.texture_compare_mode"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015960, VkglTestCase_015960_1, VkglTestCase_015960_2);

#define VkglTestCase_015961_1 "dEQP-GLES31.functional.state_query.sam"
#define VkglTestCase_015961_2 "pler.set_pure_int.texture_compare_func"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015961, VkglTestCase_015961_1, VkglTestCase_015961_2);

#define VkglTestCase_015962_1 "dEQP-GLES31.functional.state_query.sa"
#define VkglTestCase_015962_2 "mpler.set_pure_int.texture_srgb_decode"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015962, VkglTestCase_015962_1, VkglTestCase_015962_2);
