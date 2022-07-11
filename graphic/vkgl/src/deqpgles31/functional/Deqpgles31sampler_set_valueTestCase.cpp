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

#define VkglTestCase_015939_1 "dEQP-GLES31.functional.state_query.sampl"
#define VkglTestCase_015939_2 "er.set_value.texture_srgb_decode_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015939, VkglTestCase_015939_1, VkglTestCase_015939_2);

#define VkglTestCase_015940_1 "dEQP-GLES31.functional.state_query.samp"
#define VkglTestCase_015940_2 "ler.set_value.texture_srgb_decode_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015940, VkglTestCase_015940_1, VkglTestCase_015940_2);

#define VkglTestCase_015941_1 "dEQP-GLES31.functional.state_query.sampl"
#define VkglTestCase_015941_2 "er.set_value.texture_srgb_decode_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015941, VkglTestCase_015941_1, VkglTestCase_015941_2);

#define VkglTestCase_015942_1 "dEQP-GLES31.functional.state_query.sample"
#define VkglTestCase_015942_2 "r.set_value.texture_srgb_decode_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015942, VkglTestCase_015942_1, VkglTestCase_015942_2);

#define VkglTestCase_015943_1 "dEQP-GLES31.functional.state_query.sampl"
#define VkglTestCase_015943_2 "er.set_value.texture_border_color_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015943, VkglTestCase_015943_1, VkglTestCase_015943_2);

#define VkglTestCase_015944_1 "dEQP-GLES31.functional.state_query.samp"
#define VkglTestCase_015944_2 "ler.set_value.texture_border_color_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015944, VkglTestCase_015944_1, VkglTestCase_015944_2);

#define VkglTestCase_015945_1 "dEQP-GLES31.functional.state_query.sample"
#define VkglTestCase_015945_2 "r.set_value.texture_border_color_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015945, VkglTestCase_015945_1, VkglTestCase_015945_2);

#define VkglTestCase_015946_1 "dEQP-GLES31.functional.state_query.sample"
#define VkglTestCase_015946_2 "r.set_value.texture_border_color_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015946, VkglTestCase_015946_1, VkglTestCase_015946_2);

#define VkglTestCase_015947_1 "dEQP-GLES31.functional.state_query.sampler.se"
#define VkglTestCase_015947_2 "t_value.texture_wrap_s_clamp_to_border_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015947, VkglTestCase_015947_1, VkglTestCase_015947_2);

#define VkglTestCase_015948_1 "dEQP-GLES31.functional.state_query.sampler.s"
#define VkglTestCase_015948_2 "et_value.texture_wrap_s_clamp_to_border_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015948, VkglTestCase_015948_1, VkglTestCase_015948_2);

#define VkglTestCase_015949_1 "dEQP-GLES31.functional.state_query.sampler.se"
#define VkglTestCase_015949_2 "t_value.texture_wrap_t_clamp_to_border_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015949, VkglTestCase_015949_1, VkglTestCase_015949_2);

#define VkglTestCase_015950_1 "dEQP-GLES31.functional.state_query.sampler.s"
#define VkglTestCase_015950_2 "et_value.texture_wrap_t_clamp_to_border_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015950, VkglTestCase_015950_1, VkglTestCase_015950_2);

#define VkglTestCase_015951_1 "dEQP-GLES31.functional.state_query.sampler.se"
#define VkglTestCase_015951_2 "t_value.texture_wrap_r_clamp_to_border_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015951, VkglTestCase_015951_1, VkglTestCase_015951_2);

#define VkglTestCase_015952_1 "dEQP-GLES31.functional.state_query.sampler.s"
#define VkglTestCase_015952_2 "et_value.texture_wrap_r_clamp_to_border_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015952, VkglTestCase_015952_1, VkglTestCase_015952_2);
