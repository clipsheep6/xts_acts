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
#include "../ActsDeqpgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000949_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000949_2 "ions.common.intbitstofloat.int_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000949, VkglTestCase_000949_1, VkglTestCase_000949_2);

#define VkglTestCase_000950_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000950_2 "ns.common.intbitstofloat.int_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000950, VkglTestCase_000950_1, VkglTestCase_000950_2);

#define VkglTestCase_000951_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000951_2 "ons.common.intbitstofloat.int_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000951, VkglTestCase_000951_1, VkglTestCase_000951_2);

#define VkglTestCase_000952_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_000952_2 "ions.common.intbitstofloat.int_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000952, VkglTestCase_000952_1, VkglTestCase_000952_2);

#define VkglTestCase_000953_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000953_2 "ons.common.intbitstofloat.ivec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000953, VkglTestCase_000953_1, VkglTestCase_000953_2);

#define VkglTestCase_000954_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000954_2 "s.common.intbitstofloat.ivec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000954, VkglTestCase_000954_1, VkglTestCase_000954_2);

#define VkglTestCase_000955_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000955_2 "ns.common.intbitstofloat.ivec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000955, VkglTestCase_000955_1, VkglTestCase_000955_2);

#define VkglTestCase_000956_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000956_2 "ons.common.intbitstofloat.ivec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000956, VkglTestCase_000956_1, VkglTestCase_000956_2);

#define VkglTestCase_000957_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000957_2 "ons.common.intbitstofloat.ivec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000957, VkglTestCase_000957_1, VkglTestCase_000957_2);

#define VkglTestCase_000958_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000958_2 "s.common.intbitstofloat.ivec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000958, VkglTestCase_000958_1, VkglTestCase_000958_2);

#define VkglTestCase_000959_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000959_2 "ns.common.intbitstofloat.ivec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000959, VkglTestCase_000959_1, VkglTestCase_000959_2);

#define VkglTestCase_000960_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000960_2 "ons.common.intbitstofloat.ivec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000960, VkglTestCase_000960_1, VkglTestCase_000960_2);
