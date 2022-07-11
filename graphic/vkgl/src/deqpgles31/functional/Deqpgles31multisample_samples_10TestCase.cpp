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
#include "../ActsDeqpgles310013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012979_1 "dEQP-GLES31.functional.texture.mul"
#define VkglTestCase_012979_2 "tisample.samples_10.sample_position"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012979, VkglTestCase_012979_1, VkglTestCase_012979_2);

#define VkglTestCase_012980_1 "dEQP-GLES31.functional.texture.mult"
#define VkglTestCase_012980_2 "isample.samples_10.sample_mask_only"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012980, VkglTestCase_012980_1, VkglTestCase_012980_2);

#define VkglTestCase_012981_1 "dEQP-GLES31.functional.texture.multisample."
#define VkglTestCase_012981_2 "samples_10.sample_mask_and_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012981, VkglTestCase_012981_1, VkglTestCase_012981_2);

#define VkglTestCase_012982_1 "dEQP-GLES31.functional.texture.multisample"
#define VkglTestCase_012982_2 ".samples_10.sample_mask_and_sample_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012982, VkglTestCase_012982_1, VkglTestCase_012982_2);

#define VkglTestCase_012983_1 "dEQP-GLES31.functional.texture.multisample.samples_10"
#define VkglTestCase_012983_2 ".sample_mask_and_sample_coverage_and_alpha_to_coverage"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012983, VkglTestCase_012983_1, VkglTestCase_012983_2);

#define VkglTestCase_012984_1 "dEQP-GLES31.functional.texture.multisample"
#define VkglTestCase_012984_2 ".samples_10.sample_mask_non_effective_bits"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012984, VkglTestCase_012984_1, VkglTestCase_012984_2);

#define VkglTestCase_012985_1 "dEQP-GLES31.functional.texture.multis"
#define VkglTestCase_012985_2 "ample.samples_10.use_texture_color_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012985, VkglTestCase_012985_1, VkglTestCase_012985_2);

#define VkglTestCase_012986_1 "dEQP-GLES31.functional.texture.multisamp"
#define VkglTestCase_012986_2 "le.samples_10.use_texture_color_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012986, VkglTestCase_012986_1, VkglTestCase_012986_2);

#define VkglTestCase_012987_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_012987_2 "sample.samples_10.use_texture_int_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012987, VkglTestCase_012987_1, VkglTestCase_012987_2);

#define VkglTestCase_012988_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_012988_2 "ple.samples_10.use_texture_int_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012988, VkglTestCase_012988_1, VkglTestCase_012988_2);

#define VkglTestCase_012989_1 "dEQP-GLES31.functional.texture.multi"
#define VkglTestCase_012989_2 "sample.samples_10.use_texture_uint_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012989, VkglTestCase_012989_1, VkglTestCase_012989_2);

#define VkglTestCase_012990_1 "dEQP-GLES31.functional.texture.multisam"
#define VkglTestCase_012990_2 "ple.samples_10.use_texture_uint_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012990, VkglTestCase_012990_1, VkglTestCase_012990_2);

#define VkglTestCase_012991_1 "dEQP-GLES31.functional.texture.multis"
#define VkglTestCase_012991_2 "ample.samples_10.use_texture_depth_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012991, VkglTestCase_012991_1, VkglTestCase_012991_2);

#define VkglTestCase_012992_1 "dEQP-GLES31.functional.texture.multisamp"
#define VkglTestCase_012992_2 "le.samples_10.use_texture_depth_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012992, VkglTestCase_012992_1, VkglTestCase_012992_2);
