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

#define VkglTestCase_015963_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015963_2 "sampler.set_pure_uint.texture_wrap_s"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015963, VkglTestCase_015963_1, VkglTestCase_015963_2);

#define VkglTestCase_015964_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015964_2 "sampler.set_pure_uint.texture_wrap_t"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015964, VkglTestCase_015964_1, VkglTestCase_015964_2);

#define VkglTestCase_015965_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_015965_2 "sampler.set_pure_uint.texture_wrap_r"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015965, VkglTestCase_015965_1, VkglTestCase_015965_2);

#define VkglTestCase_015966_1 "dEQP-GLES31.functional.state_query.sa"
#define VkglTestCase_015966_2 "mpler.set_pure_uint.texture_mag_filter"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015966, VkglTestCase_015966_1, VkglTestCase_015966_2);

#define VkglTestCase_015967_1 "dEQP-GLES31.functional.state_query.sa"
#define VkglTestCase_015967_2 "mpler.set_pure_uint.texture_min_filter"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015967, VkglTestCase_015967_1, VkglTestCase_015967_2);

#define VkglTestCase_015968_1 "dEQP-GLES31.functional.state_query.s"
#define VkglTestCase_015968_2 "ampler.set_pure_uint.texture_min_lod"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015968, VkglTestCase_015968_1, VkglTestCase_015968_2);

#define VkglTestCase_015969_1 "dEQP-GLES31.functional.state_query.s"
#define VkglTestCase_015969_2 "ampler.set_pure_uint.texture_max_lod"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015969, VkglTestCase_015969_1, VkglTestCase_015969_2);

#define VkglTestCase_015970_1 "dEQP-GLES31.functional.state_query.sam"
#define VkglTestCase_015970_2 "pler.set_pure_uint.texture_compare_mode"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015970, VkglTestCase_015970_1, VkglTestCase_015970_2);

#define VkglTestCase_015971_1 "dEQP-GLES31.functional.state_query.sam"
#define VkglTestCase_015971_2 "pler.set_pure_uint.texture_compare_func"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015971, VkglTestCase_015971_1, VkglTestCase_015971_2);

#define VkglTestCase_015972_1 "dEQP-GLES31.functional.state_query.sam"
#define VkglTestCase_015972_2 "pler.set_pure_uint.texture_srgb_decode"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015972, VkglTestCase_015972_1, VkglTestCase_015972_2);
