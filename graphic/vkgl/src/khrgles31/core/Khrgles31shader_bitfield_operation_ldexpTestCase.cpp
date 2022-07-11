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

#define VkglTestCase_000356_1 "KHR-GLES31.core.shader_bitfie"
#define VkglTestCase_000356_2 "ld_operation.ldexp.float_zero"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000356, VkglTestCase_000356_1, VkglTestCase_000356_2);

#define VkglTestCase_000357_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000357_2 "ield_operation.ldexp.float_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000357, VkglTestCase_000357_1, VkglTestCase_000357_2);

#define VkglTestCase_000358_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000358_2 "ield_operation.ldexp.float_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000358, VkglTestCase_000358_1, VkglTestCase_000358_2);

#define VkglTestCase_000359_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000359_2 "ield_operation.ldexp.float_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000359, VkglTestCase_000359_1, VkglTestCase_000359_2);

#define VkglTestCase_000360_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000360_2 "ield_operation.ldexp.float_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000360, VkglTestCase_000360_1, VkglTestCase_000360_2);

#define VkglTestCase_000361_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000361_2 "eld_operation.ldexp.vec2_zero"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000361, VkglTestCase_000361_1, VkglTestCase_000361_2);

#define VkglTestCase_000362_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000362_2 "ield_operation.ldexp.vec2_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000362, VkglTestCase_000362_1, VkglTestCase_000362_2);

#define VkglTestCase_000363_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000363_2 "ield_operation.ldexp.vec2_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000363, VkglTestCase_000363_1, VkglTestCase_000363_2);

#define VkglTestCase_000364_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000364_2 "ield_operation.ldexp.vec2_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000364, VkglTestCase_000364_1, VkglTestCase_000364_2);

#define VkglTestCase_000365_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000365_2 "ield_operation.ldexp.vec2_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000365, VkglTestCase_000365_1, VkglTestCase_000365_2);

#define VkglTestCase_000366_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000366_2 "eld_operation.ldexp.vec3_zero"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000366, VkglTestCase_000366_1, VkglTestCase_000366_2);

#define VkglTestCase_000367_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000367_2 "ield_operation.ldexp.vec3_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000367, VkglTestCase_000367_1, VkglTestCase_000367_2);

#define VkglTestCase_000368_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000368_2 "ield_operation.ldexp.vec3_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000368, VkglTestCase_000368_1, VkglTestCase_000368_2);

#define VkglTestCase_000369_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000369_2 "ield_operation.ldexp.vec3_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000369, VkglTestCase_000369_1, VkglTestCase_000369_2);

#define VkglTestCase_000370_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000370_2 "ield_operation.ldexp.vec3_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000370, VkglTestCase_000370_1, VkglTestCase_000370_2);

#define VkglTestCase_000371_1 "KHR-GLES31.core.shader_bitfi"
#define VkglTestCase_000371_2 "eld_operation.ldexp.vec4_zero"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000371, VkglTestCase_000371_1, VkglTestCase_000371_2);

#define VkglTestCase_000372_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000372_2 "ield_operation.ldexp.vec4_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000372, VkglTestCase_000372_1, VkglTestCase_000372_2);

#define VkglTestCase_000373_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000373_2 "ield_operation.ldexp.vec4_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000373, VkglTestCase_000373_1, VkglTestCase_000373_2);

#define VkglTestCase_000374_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000374_2 "ield_operation.ldexp.vec4_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000374, VkglTestCase_000374_1, VkglTestCase_000374_2);

#define VkglTestCase_000375_1 "KHR-GLES31.core.shader_bitf"
#define VkglTestCase_000375_2 "ield_operation.ldexp.vec4_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000375, VkglTestCase_000375_1, VkglTestCase_000375_2);
