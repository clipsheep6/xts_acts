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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000336_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000336_2 "ld_operation.frexp.float_zero"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000336, VkglTestCase_000336_1, VkglTestCase_000336_2);

#define VkglTestCase_000337_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000337_2 "ield_operation.frexp.float_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000337, VkglTestCase_000337_1, VkglTestCase_000337_2);

#define VkglTestCase_000338_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000338_2 "ield_operation.frexp.float_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000338, VkglTestCase_000338_1, VkglTestCase_000338_2);

#define VkglTestCase_000339_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000339_2 "ield_operation.frexp.float_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000339, VkglTestCase_000339_1, VkglTestCase_000339_2);

#define VkglTestCase_000340_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000340_2 "ield_operation.frexp.float_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000340, VkglTestCase_000340_1, VkglTestCase_000340_2);

#define VkglTestCase_000341_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000341_2 "eld_operation.frexp.vec2_zero"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000341, VkglTestCase_000341_1, VkglTestCase_000341_2);

#define VkglTestCase_000342_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000342_2 "ield_operation.frexp.vec2_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000342, VkglTestCase_000342_1, VkglTestCase_000342_2);

#define VkglTestCase_000343_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000343_2 "ield_operation.frexp.vec2_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000343, VkglTestCase_000343_1, VkglTestCase_000343_2);

#define VkglTestCase_000344_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000344_2 "ield_operation.frexp.vec2_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000344, VkglTestCase_000344_1, VkglTestCase_000344_2);

#define VkglTestCase_000345_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000345_2 "ield_operation.frexp.vec2_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000345, VkglTestCase_000345_1, VkglTestCase_000345_2);

#define VkglTestCase_000346_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000346_2 "eld_operation.frexp.vec3_zero"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000346, VkglTestCase_000346_1, VkglTestCase_000346_2);

#define VkglTestCase_000347_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000347_2 "ield_operation.frexp.vec3_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000347, VkglTestCase_000347_1, VkglTestCase_000347_2);

#define VkglTestCase_000348_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000348_2 "ield_operation.frexp.vec3_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000348, VkglTestCase_000348_1, VkglTestCase_000348_2);

#define VkglTestCase_000349_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000349_2 "ield_operation.frexp.vec3_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000349, VkglTestCase_000349_1, VkglTestCase_000349_2);

#define VkglTestCase_000350_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000350_2 "ield_operation.frexp.vec3_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000350, VkglTestCase_000350_1, VkglTestCase_000350_2);

#define VkglTestCase_000351_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000351_2 "eld_operation.frexp.vec4_zero"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000351, VkglTestCase_000351_1, VkglTestCase_000351_2);

#define VkglTestCase_000352_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000352_2 "ield_operation.frexp.vec4_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000352, VkglTestCase_000352_1, VkglTestCase_000352_2);

#define VkglTestCase_000353_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000353_2 "ield_operation.frexp.vec4_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000353, VkglTestCase_000353_1, VkglTestCase_000353_2);

#define VkglTestCase_000354_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000354_2 "ield_operation.frexp.vec4_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000354, VkglTestCase_000354_1, VkglTestCase_000354_2);

#define VkglTestCase_000355_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000355_2 "ield_operation.frexp.vec4_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000355, VkglTestCase_000355_1, VkglTestCase_000355_2);
