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

#define VkglTestCase_002983_1 "dEQP-GLES31.functional.shaders.sample_variables"
#define VkglTestCase_002983_2 ".sample_mask_in.sample_mask.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002983, VkglTestCase_002983_1, VkglTestCase_002983_2);

#define VkglTestCase_002984_1 "dEQP-GLES31.functional.shaders.sample_variables"
#define VkglTestCase_002984_2 ".sample_mask_in.sample_mask.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002984, VkglTestCase_002984_1, VkglTestCase_002984_2);

#define VkglTestCase_002985_1 "dEQP-GLES31.functional.shaders.sample_variables."
#define VkglTestCase_002985_2 "sample_mask_in.sample_mask.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002985, VkglTestCase_002985_1, VkglTestCase_002985_2);

#define VkglTestCase_002986_1 "dEQP-GLES31.functional.shaders.sample_variables."
#define VkglTestCase_002986_2 "sample_mask_in.sample_mask.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002986, VkglTestCase_002986_1, VkglTestCase_002986_2);

#define VkglTestCase_002987_1 "dEQP-GLES31.functional.shaders.sample_variables."
#define VkglTestCase_002987_2 "sample_mask_in.sample_mask.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002987, VkglTestCase_002987_1, VkglTestCase_002987_2);

#define VkglTestCase_002988_1 "dEQP-GLES31.functional.shaders.sample_variables."
#define VkglTestCase_002988_2 "sample_mask_in.sample_mask.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002988, VkglTestCase_002988_1, VkglTestCase_002988_2);

#define VkglTestCase_002989_1 "dEQP-GLES31.functional.shaders.sample_variables."
#define VkglTestCase_002989_2 "sample_mask_in.sample_mask.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002989, VkglTestCase_002989_1, VkglTestCase_002989_2);

#define VkglTestCase_002990_1 "dEQP-GLES31.functional.shaders.sample_variabl"
#define VkglTestCase_002990_2 "es.sample_mask_in.sample_mask.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002990, VkglTestCase_002990_1, VkglTestCase_002990_2);

#define VkglTestCase_002991_1 "dEQP-GLES31.functional.shaders.sample_variable"
#define VkglTestCase_002991_2 "s.sample_mask_in.sample_mask.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002991, VkglTestCase_002991_1, VkglTestCase_002991_2);

#define VkglTestCase_002992_1 "dEQP-GLES31.functional.shaders.sample_variable"
#define VkglTestCase_002992_2 "s.sample_mask_in.sample_mask.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002992, VkglTestCase_002992_1, VkglTestCase_002992_2);

#define VkglTestCase_002993_1 "dEQP-GLES31.functional.shaders.sample_variable"
#define VkglTestCase_002993_2 "s.sample_mask_in.sample_mask.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002993, VkglTestCase_002993_1, VkglTestCase_002993_2);

#define VkglTestCase_002994_1 "dEQP-GLES31.functional.shaders.sample_variable"
#define VkglTestCase_002994_2 "s.sample_mask_in.sample_mask.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002994, VkglTestCase_002994_1, VkglTestCase_002994_2);

#define VkglTestCase_002995_1 "dEQP-GLES31.functional.shaders.sample_variable"
#define VkglTestCase_002995_2 "s.sample_mask_in.sample_mask.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002995, VkglTestCase_002995_1, VkglTestCase_002995_2);
