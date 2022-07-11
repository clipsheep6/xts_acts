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
#include "../ActsDeqpgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002957_1 "dEQP-GLES31.functional.shaders.sample_variabl"
#define VkglTestCase_002957_2 "es.sample_pos.correctness.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002957, VkglTestCase_002957_1, VkglTestCase_002957_2);

#define VkglTestCase_002958_1 "dEQP-GLES31.functional.shaders.sample_variabl"
#define VkglTestCase_002958_2 "es.sample_pos.correctness.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002958, VkglTestCase_002958_1, VkglTestCase_002958_2);

#define VkglTestCase_002959_1 "dEQP-GLES31.functional.shaders.sample_variable"
#define VkglTestCase_002959_2 "s.sample_pos.correctness.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002959, VkglTestCase_002959_1, VkglTestCase_002959_2);

#define VkglTestCase_002960_1 "dEQP-GLES31.functional.shaders.sample_variable"
#define VkglTestCase_002960_2 "s.sample_pos.correctness.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002960, VkglTestCase_002960_1, VkglTestCase_002960_2);

#define VkglTestCase_002961_1 "dEQP-GLES31.functional.shaders.sample_variable"
#define VkglTestCase_002961_2 "s.sample_pos.correctness.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002961, VkglTestCase_002961_1, VkglTestCase_002961_2);

#define VkglTestCase_002962_1 "dEQP-GLES31.functional.shaders.sample_variable"
#define VkglTestCase_002962_2 "s.sample_pos.correctness.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002962, VkglTestCase_002962_1, VkglTestCase_002962_2);

#define VkglTestCase_002963_1 "dEQP-GLES31.functional.shaders.sample_variable"
#define VkglTestCase_002963_2 "s.sample_pos.correctness.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002963, VkglTestCase_002963_1, VkglTestCase_002963_2);

#define VkglTestCase_002964_1 "dEQP-GLES31.functional.shaders.sample_varia"
#define VkglTestCase_002964_2 "bles.sample_pos.correctness.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002964, VkglTestCase_002964_1, VkglTestCase_002964_2);

#define VkglTestCase_002965_1 "dEQP-GLES31.functional.shaders.sample_variab"
#define VkglTestCase_002965_2 "les.sample_pos.correctness.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002965, VkglTestCase_002965_1, VkglTestCase_002965_2);

#define VkglTestCase_002966_1 "dEQP-GLES31.functional.shaders.sample_variab"
#define VkglTestCase_002966_2 "les.sample_pos.correctness.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002966, VkglTestCase_002966_1, VkglTestCase_002966_2);

#define VkglTestCase_002967_1 "dEQP-GLES31.functional.shaders.sample_variab"
#define VkglTestCase_002967_2 "les.sample_pos.correctness.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002967, VkglTestCase_002967_1, VkglTestCase_002967_2);

#define VkglTestCase_002968_1 "dEQP-GLES31.functional.shaders.sample_variab"
#define VkglTestCase_002968_2 "les.sample_pos.correctness.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002968, VkglTestCase_002968_1, VkglTestCase_002968_2);

#define VkglTestCase_002969_1 "dEQP-GLES31.functional.shaders.sample_variab"
#define VkglTestCase_002969_2 "les.sample_pos.correctness.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002969, VkglTestCase_002969_1, VkglTestCase_002969_2);
