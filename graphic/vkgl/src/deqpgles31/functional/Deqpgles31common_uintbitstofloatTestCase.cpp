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

#define VkglTestCase_000961_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000961_2 "ons.common.uintbitstofloat.uint_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000961, VkglTestCase_000961_1, VkglTestCase_000961_2);

#define VkglTestCase_000962_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_000962_2 "s.common.uintbitstofloat.uint_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000962, VkglTestCase_000962_1, VkglTestCase_000962_2);

#define VkglTestCase_000963_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000963_2 "ns.common.uintbitstofloat.uint_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000963, VkglTestCase_000963_1, VkglTestCase_000963_2);

#define VkglTestCase_000964_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000964_2 "ons.common.uintbitstofloat.uint_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000964, VkglTestCase_000964_1, VkglTestCase_000964_2);

#define VkglTestCase_000965_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000965_2 "ns.common.uintbitstofloat.uvec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000965, VkglTestCase_000965_1, VkglTestCase_000965_2);

#define VkglTestCase_000966_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_000966_2 ".common.uintbitstofloat.uvec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000966, VkglTestCase_000966_1, VkglTestCase_000966_2);

#define VkglTestCase_000967_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000967_2 "ns.common.uintbitstofloat.uvec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000967, VkglTestCase_000967_1, VkglTestCase_000967_2);

#define VkglTestCase_000968_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000968_2 "ons.common.uintbitstofloat.uvec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000968, VkglTestCase_000968_1, VkglTestCase_000968_2);

#define VkglTestCase_000969_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000969_2 "ns.common.uintbitstofloat.uvec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000969, VkglTestCase_000969_1, VkglTestCase_000969_2);

#define VkglTestCase_000970_1 "dEQP-GLES31.functional.shaders.builtin_functions"
#define VkglTestCase_000970_2 ".common.uintbitstofloat.uvec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000970, VkglTestCase_000970_1, VkglTestCase_000970_2);

#define VkglTestCase_000971_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_000971_2 "ns.common.uintbitstofloat.uvec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000971, VkglTestCase_000971_1, VkglTestCase_000971_2);

#define VkglTestCase_000972_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_000972_2 "ons.common.uintbitstofloat.uvec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000972, VkglTestCase_000972_1, VkglTestCase_000972_2);
