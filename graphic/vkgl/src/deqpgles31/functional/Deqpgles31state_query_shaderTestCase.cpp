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

#define VkglTestCase_015973_1 "dEQP-GLES31.functional.stat"
#define VkglTestCase_015973_2 "e_query.shader.sampler_type"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015973, VkglTestCase_015973_1, VkglTestCase_015973_2);

#define VkglTestCase_015974_1 "dEQP-GLES31.functional.state_query.s"
#define VkglTestCase_015974_2 "hader.sampler_type_multisample_array"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015974, VkglTestCase_015974_1, VkglTestCase_015974_2);

#define VkglTestCase_015975_1 "dEQP-GLES31.functional.state_query"
#define VkglTestCase_015975_2 ".shader.sampler_type_texture_buffer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015975, VkglTestCase_015975_1, VkglTestCase_015975_2);

#define VkglTestCase_015976_1 "dEQP-GLES31.functional.state_quer"
#define VkglTestCase_015976_2 "y.shader.image_type_texture_buffer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015976, VkglTestCase_015976_1, VkglTestCase_015976_2);

#define VkglTestCase_015977_1 "dEQP-GLES31.functional.state_que"
#define VkglTestCase_015977_2 "ry.shader.sampler_type_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015977, VkglTestCase_015977_1, VkglTestCase_015977_2);

#define VkglTestCase_015978_1 "dEQP-GLES31.functional.state_qu"
#define VkglTestCase_015978_2 "ery.shader.image_type_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015978, VkglTestCase_015978_1, VkglTestCase_015978_2);

#define VkglTestCase_015979_1 "dEQP-GLES31.functional.state"
#define VkglTestCase_015979_2 "_query.shader.info_log_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015979, VkglTestCase_015979_1, VkglTestCase_015979_2);

#define VkglTestCase_015980_1 "dEQP-GLES31.functional.state_"
#define VkglTestCase_015980_2 "query.shader.info_log_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015980, VkglTestCase_015980_1, VkglTestCase_015980_2);

#define VkglTestCase_015981_1 "dEQP-GLES31.functional.state_"
#define VkglTestCase_015981_2 "query.shader.info_log_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015981, VkglTestCase_015981_1, VkglTestCase_015981_2);

#define VkglTestCase_015982_1 "dEQP-GLES31.functional.state_q"
#define VkglTestCase_015982_2 "uery.shader.info_log_tess_ctrl"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015982, VkglTestCase_015982_1, VkglTestCase_015982_2);

#define VkglTestCase_015983_1 "dEQP-GLES31.functional.state_q"
#define VkglTestCase_015983_2 "uery.shader.info_log_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015983, VkglTestCase_015983_1, VkglTestCase_015983_2);

#define VkglTestCase_015984_1 "dEQP-GLES31.functional.state_"
#define VkglTestCase_015984_2 "query.shader.info_log_compute"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015984, VkglTestCase_015984_1, VkglTestCase_015984_2);
