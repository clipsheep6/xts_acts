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
#include "../ActsDeqpgles310004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003151_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.int"
#define VkglTestCase_003151_2 "erpolate_at_sample.dynamic_sample_number.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003151, VkglTestCase_003151_1, VkglTestCase_003151_2);

#define VkglTestCase_003152_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.int"
#define VkglTestCase_003152_2 "erpolate_at_sample.dynamic_sample_number.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003152, VkglTestCase_003152_1, VkglTestCase_003152_2);

#define VkglTestCase_003153_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.inte"
#define VkglTestCase_003153_2 "rpolate_at_sample.dynamic_sample_number.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003153, VkglTestCase_003153_1, VkglTestCase_003153_2);

#define VkglTestCase_003154_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.inte"
#define VkglTestCase_003154_2 "rpolate_at_sample.dynamic_sample_number.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003154, VkglTestCase_003154_1, VkglTestCase_003154_2);

#define VkglTestCase_003155_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.inte"
#define VkglTestCase_003155_2 "rpolate_at_sample.dynamic_sample_number.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003155, VkglTestCase_003155_1, VkglTestCase_003155_2);

#define VkglTestCase_003156_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.inte"
#define VkglTestCase_003156_2 "rpolate_at_sample.dynamic_sample_number.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003156, VkglTestCase_003156_1, VkglTestCase_003156_2);

#define VkglTestCase_003157_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.inte"
#define VkglTestCase_003157_2 "rpolate_at_sample.dynamic_sample_number.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003157, VkglTestCase_003157_1, VkglTestCase_003157_2);

#define VkglTestCase_003158_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.i"
#define VkglTestCase_003158_2 "nterpolate_at_sample.dynamic_sample_number.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003158, VkglTestCase_003158_1, VkglTestCase_003158_2);

#define VkglTestCase_003159_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
#define VkglTestCase_003159_2 "terpolate_at_sample.dynamic_sample_number.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003159, VkglTestCase_003159_1, VkglTestCase_003159_2);

#define VkglTestCase_003160_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
#define VkglTestCase_003160_2 "terpolate_at_sample.dynamic_sample_number.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003160, VkglTestCase_003160_1, VkglTestCase_003160_2);

#define VkglTestCase_003161_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
#define VkglTestCase_003161_2 "terpolate_at_sample.dynamic_sample_number.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003161, VkglTestCase_003161_1, VkglTestCase_003161_2);

#define VkglTestCase_003162_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
#define VkglTestCase_003162_2 "terpolate_at_sample.dynamic_sample_number.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003162, VkglTestCase_003162_1, VkglTestCase_003162_2);

#define VkglTestCase_003163_1 "dEQP-GLES31.functional.shaders.multisample_interpolation.in"
#define VkglTestCase_003163_2 "terpolate_at_sample.dynamic_sample_number.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003163, VkglTestCase_003163_1, VkglTestCase_003163_2);
