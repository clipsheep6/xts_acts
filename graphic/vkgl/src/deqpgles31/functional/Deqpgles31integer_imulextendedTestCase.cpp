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
#include "../ActsDeqpgles310002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001209_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001209_2 "tions.integer.imulextended.int_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001209, VkglTestCase_001209_1, VkglTestCase_001209_2);

#define VkglTestCase_001210_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001210_2 "ions.integer.imulextended.int_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001210, VkglTestCase_001210_1, VkglTestCase_001210_2);

#define VkglTestCase_001211_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001211_2 "ions.integer.imulextended.int_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001211, VkglTestCase_001211_1, VkglTestCase_001211_2);

#define VkglTestCase_001212_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001212_2 "ns.integer.imulextended.int_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001212, VkglTestCase_001212_1, VkglTestCase_001212_2);

#define VkglTestCase_001213_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001213_2 "ions.integer.imulextended.int_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001213, VkglTestCase_001213_1, VkglTestCase_001213_2);

#define VkglTestCase_001214_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001214_2 "tions.integer.imulextended.int_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001214, VkglTestCase_001214_1, VkglTestCase_001214_2);

#define VkglTestCase_001215_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001215_2 "ions.integer.imulextended.ivec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001215, VkglTestCase_001215_1, VkglTestCase_001215_2);

#define VkglTestCase_001216_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001216_2 "ons.integer.imulextended.ivec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001216, VkglTestCase_001216_1, VkglTestCase_001216_2);

#define VkglTestCase_001217_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001217_2 "ons.integer.imulextended.ivec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001217, VkglTestCase_001217_1, VkglTestCase_001217_2);

#define VkglTestCase_001218_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001218_2 "s.integer.imulextended.ivec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001218, VkglTestCase_001218_1, VkglTestCase_001218_2);

#define VkglTestCase_001219_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001219_2 "ons.integer.imulextended.ivec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001219, VkglTestCase_001219_1, VkglTestCase_001219_2);

#define VkglTestCase_001220_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001220_2 "ions.integer.imulextended.ivec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001220, VkglTestCase_001220_1, VkglTestCase_001220_2);

#define VkglTestCase_001221_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001221_2 "ions.integer.imulextended.ivec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001221, VkglTestCase_001221_1, VkglTestCase_001221_2);

#define VkglTestCase_001222_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001222_2 "ons.integer.imulextended.ivec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001222, VkglTestCase_001222_1, VkglTestCase_001222_2);

#define VkglTestCase_001223_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001223_2 "ons.integer.imulextended.ivec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001223, VkglTestCase_001223_1, VkglTestCase_001223_2);

#define VkglTestCase_001224_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001224_2 "s.integer.imulextended.ivec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001224, VkglTestCase_001224_1, VkglTestCase_001224_2);

#define VkglTestCase_001225_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001225_2 "ons.integer.imulextended.ivec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001225, VkglTestCase_001225_1, VkglTestCase_001225_2);

#define VkglTestCase_001226_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001226_2 "ions.integer.imulextended.ivec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001226, VkglTestCase_001226_1, VkglTestCase_001226_2);

#define VkglTestCase_001227_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001227_2 "ions.integer.imulextended.ivec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001227, VkglTestCase_001227_1, VkglTestCase_001227_2);

#define VkglTestCase_001228_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001228_2 "ons.integer.imulextended.ivec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001228, VkglTestCase_001228_1, VkglTestCase_001228_2);

#define VkglTestCase_001229_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001229_2 "ons.integer.imulextended.ivec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001229, VkglTestCase_001229_1, VkglTestCase_001229_2);

#define VkglTestCase_001230_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001230_2 "s.integer.imulextended.ivec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001230, VkglTestCase_001230_1, VkglTestCase_001230_2);

#define VkglTestCase_001231_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001231_2 "ons.integer.imulextended.ivec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001231, VkglTestCase_001231_1, VkglTestCase_001231_2);

#define VkglTestCase_001232_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001232_2 "ions.integer.imulextended.ivec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001232, VkglTestCase_001232_1, VkglTestCase_001232_2);
