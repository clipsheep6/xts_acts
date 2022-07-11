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

#define VkglTestCase_003125_1 "dEQP-GLES31.functional.shaders.multisample_int"
#define VkglTestCase_003125_2 "erpolation.sample_qualifier.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003125, VkglTestCase_003125_1, VkglTestCase_003125_2);

#define VkglTestCase_003126_1 "dEQP-GLES31.functional.shaders.multisample_inte"
#define VkglTestCase_003126_2 "rpolation.sample_qualifier.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003126, VkglTestCase_003126_1, VkglTestCase_003126_2);

#define VkglTestCase_003127_1 "dEQP-GLES31.functional.shaders.multisample_inte"
#define VkglTestCase_003127_2 "rpolation.sample_qualifier.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003127, VkglTestCase_003127_1, VkglTestCase_003127_2);

#define VkglTestCase_003128_1 "dEQP-GLES31.functional.shaders.multisample_inte"
#define VkglTestCase_003128_2 "rpolation.sample_qualifier.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003128, VkglTestCase_003128_1, VkglTestCase_003128_2);

#define VkglTestCase_003129_1 "dEQP-GLES31.functional.shaders.multisample_inte"
#define VkglTestCase_003129_2 "rpolation.sample_qualifier.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003129, VkglTestCase_003129_1, VkglTestCase_003129_2);

#define VkglTestCase_003130_1 "dEQP-GLES31.functional.shaders.multisample_inte"
#define VkglTestCase_003130_2 "rpolation.sample_qualifier.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003130, VkglTestCase_003130_1, VkglTestCase_003130_2);

#define VkglTestCase_003131_1 "dEQP-GLES31.functional.shaders.multisample_inter"
#define VkglTestCase_003131_2 "polation.sample_qualifier.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003131, VkglTestCase_003131_1, VkglTestCase_003131_2);

#define VkglTestCase_003132_1 "dEQP-GLES31.functional.shaders.multisample_in"
#define VkglTestCase_003132_2 "terpolation.sample_qualifier.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003132, VkglTestCase_003132_1, VkglTestCase_003132_2);

#define VkglTestCase_003133_1 "dEQP-GLES31.functional.shaders.multisample_in"
#define VkglTestCase_003133_2 "terpolation.sample_qualifier.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003133, VkglTestCase_003133_1, VkglTestCase_003133_2);

#define VkglTestCase_003134_1 "dEQP-GLES31.functional.shaders.multisample_in"
#define VkglTestCase_003134_2 "terpolation.sample_qualifier.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003134, VkglTestCase_003134_1, VkglTestCase_003134_2);

#define VkglTestCase_003135_1 "dEQP-GLES31.functional.shaders.multisample_in"
#define VkglTestCase_003135_2 "terpolation.sample_qualifier.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003135, VkglTestCase_003135_1, VkglTestCase_003135_2);

#define VkglTestCase_003136_1 "dEQP-GLES31.functional.shaders.multisample_in"
#define VkglTestCase_003136_2 "terpolation.sample_qualifier.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003136, VkglTestCase_003136_1, VkglTestCase_003136_2);

#define VkglTestCase_003137_1 "dEQP-GLES31.functional.shaders.multisample_int"
#define VkglTestCase_003137_2 "erpolation.sample_qualifier.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003137, VkglTestCase_003137_1, VkglTestCase_003137_2);
