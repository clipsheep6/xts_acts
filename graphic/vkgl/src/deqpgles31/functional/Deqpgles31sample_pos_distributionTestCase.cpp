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

#define VkglTestCase_002970_1 "dEQP-GLES31.functional.shaders.sample_variabl"
#define VkglTestCase_002970_2 "es.sample_pos.distribution.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002970, VkglTestCase_002970_1, VkglTestCase_002970_2);

#define VkglTestCase_002971_1 "dEQP-GLES31.functional.shaders.sample_variable"
#define VkglTestCase_002971_2 "s.sample_pos.distribution.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002971, VkglTestCase_002971_1, VkglTestCase_002971_2);

#define VkglTestCase_002972_1 "dEQP-GLES31.functional.shaders.sample_variable"
#define VkglTestCase_002972_2 "s.sample_pos.distribution.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002972, VkglTestCase_002972_1, VkglTestCase_002972_2);

#define VkglTestCase_002973_1 "dEQP-GLES31.functional.shaders.sample_variable"
#define VkglTestCase_002973_2 "s.sample_pos.distribution.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002973, VkglTestCase_002973_1, VkglTestCase_002973_2);

#define VkglTestCase_002974_1 "dEQP-GLES31.functional.shaders.sample_variable"
#define VkglTestCase_002974_2 "s.sample_pos.distribution.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002974, VkglTestCase_002974_1, VkglTestCase_002974_2);

#define VkglTestCase_002975_1 "dEQP-GLES31.functional.shaders.sample_variable"
#define VkglTestCase_002975_2 "s.sample_pos.distribution.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002975, VkglTestCase_002975_1, VkglTestCase_002975_2);

#define VkglTestCase_002976_1 "dEQP-GLES31.functional.shaders.sample_variables"
#define VkglTestCase_002976_2 ".sample_pos.distribution.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002976, VkglTestCase_002976_1, VkglTestCase_002976_2);

#define VkglTestCase_002977_1 "dEQP-GLES31.functional.shaders.sample_variab"
#define VkglTestCase_002977_2 "les.sample_pos.distribution.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002977, VkglTestCase_002977_1, VkglTestCase_002977_2);

#define VkglTestCase_002978_1 "dEQP-GLES31.functional.shaders.sample_variab"
#define VkglTestCase_002978_2 "les.sample_pos.distribution.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002978, VkglTestCase_002978_1, VkglTestCase_002978_2);

#define VkglTestCase_002979_1 "dEQP-GLES31.functional.shaders.sample_variab"
#define VkglTestCase_002979_2 "les.sample_pos.distribution.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002979, VkglTestCase_002979_1, VkglTestCase_002979_2);

#define VkglTestCase_002980_1 "dEQP-GLES31.functional.shaders.sample_variab"
#define VkglTestCase_002980_2 "les.sample_pos.distribution.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002980, VkglTestCase_002980_1, VkglTestCase_002980_2);

#define VkglTestCase_002981_1 "dEQP-GLES31.functional.shaders.sample_variab"
#define VkglTestCase_002981_2 "les.sample_pos.distribution.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002981, VkglTestCase_002981_1, VkglTestCase_002981_2);

#define VkglTestCase_002982_1 "dEQP-GLES31.functional.shaders.sample_variabl"
#define VkglTestCase_002982_2 "es.sample_pos.distribution.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002982, VkglTestCase_002982_1, VkglTestCase_002982_2);
