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

#define VkglTestCase_000424_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000424_2 "_operation.bitfieldInsert.uint_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000424, VkglTestCase_000424_1, VkglTestCase_000424_2);

#define VkglTestCase_000425_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000425_2 "_operation.bitfieldInsert.uint_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000425, VkglTestCase_000425_1, VkglTestCase_000425_2);

#define VkglTestCase_000426_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000426_2 "_operation.bitfieldInsert.uint_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000426, VkglTestCase_000426_1, VkglTestCase_000426_2);

#define VkglTestCase_000427_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000427_2 "_operation.bitfieldInsert.uint_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000427, VkglTestCase_000427_1, VkglTestCase_000427_2);

#define VkglTestCase_000428_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000428_2 "operation.bitfieldInsert.uvec2_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000428, VkglTestCase_000428_1, VkglTestCase_000428_2);

#define VkglTestCase_000429_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000429_2 "operation.bitfieldInsert.uvec2_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000429, VkglTestCase_000429_1, VkglTestCase_000429_2);

#define VkglTestCase_000430_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000430_2 "operation.bitfieldInsert.uvec2_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000430, VkglTestCase_000430_1, VkglTestCase_000430_2);

#define VkglTestCase_000431_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000431_2 "operation.bitfieldInsert.uvec2_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000431, VkglTestCase_000431_1, VkglTestCase_000431_2);

#define VkglTestCase_000432_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000432_2 "operation.bitfieldInsert.uvec3_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000432, VkglTestCase_000432_1, VkglTestCase_000432_2);

#define VkglTestCase_000433_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000433_2 "operation.bitfieldInsert.uvec3_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000433, VkglTestCase_000433_1, VkglTestCase_000433_2);

#define VkglTestCase_000434_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000434_2 "operation.bitfieldInsert.uvec3_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000434, VkglTestCase_000434_1, VkglTestCase_000434_2);

#define VkglTestCase_000435_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000435_2 "operation.bitfieldInsert.uvec3_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000435, VkglTestCase_000435_1, VkglTestCase_000435_2);

#define VkglTestCase_000436_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000436_2 "operation.bitfieldInsert.uvec4_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000436, VkglTestCase_000436_1, VkglTestCase_000436_2);

#define VkglTestCase_000437_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000437_2 "operation.bitfieldInsert.uvec4_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000437, VkglTestCase_000437_1, VkglTestCase_000437_2);

#define VkglTestCase_000438_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000438_2 "operation.bitfieldInsert.uvec4_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000438, VkglTestCase_000438_1, VkglTestCase_000438_2);

#define VkglTestCase_000439_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000439_2 "operation.bitfieldInsert.uvec4_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000439, VkglTestCase_000439_1, VkglTestCase_000439_2);

#define VkglTestCase_000440_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000440_2 "_operation.bitfieldInsert.int_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000440, VkglTestCase_000440_1, VkglTestCase_000440_2);

#define VkglTestCase_000441_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000441_2 "_operation.bitfieldInsert.int_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000441, VkglTestCase_000441_1, VkglTestCase_000441_2);

#define VkglTestCase_000442_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000442_2 "_operation.bitfieldInsert.int_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000442, VkglTestCase_000442_1, VkglTestCase_000442_2);

#define VkglTestCase_000443_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000443_2 "_operation.bitfieldInsert.int_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000443, VkglTestCase_000443_1, VkglTestCase_000443_2);

#define VkglTestCase_000444_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000444_2 "operation.bitfieldInsert.ivec2_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000444, VkglTestCase_000444_1, VkglTestCase_000444_2);

#define VkglTestCase_000445_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000445_2 "operation.bitfieldInsert.ivec2_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000445, VkglTestCase_000445_1, VkglTestCase_000445_2);

#define VkglTestCase_000446_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000446_2 "operation.bitfieldInsert.ivec2_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000446, VkglTestCase_000446_1, VkglTestCase_000446_2);

#define VkglTestCase_000447_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000447_2 "operation.bitfieldInsert.ivec2_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000447, VkglTestCase_000447_1, VkglTestCase_000447_2);

#define VkglTestCase_000448_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000448_2 "operation.bitfieldInsert.ivec3_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000448, VkglTestCase_000448_1, VkglTestCase_000448_2);

#define VkglTestCase_000449_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000449_2 "operation.bitfieldInsert.ivec3_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000449, VkglTestCase_000449_1, VkglTestCase_000449_2);

#define VkglTestCase_000450_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000450_2 "operation.bitfieldInsert.ivec3_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000450, VkglTestCase_000450_1, VkglTestCase_000450_2);

#define VkglTestCase_000451_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000451_2 "operation.bitfieldInsert.ivec3_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000451, VkglTestCase_000451_1, VkglTestCase_000451_2);

#define VkglTestCase_000452_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000452_2 "operation.bitfieldInsert.ivec4_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000452, VkglTestCase_000452_1, VkglTestCase_000452_2);

#define VkglTestCase_000453_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000453_2 "operation.bitfieldInsert.ivec4_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000453, VkglTestCase_000453_1, VkglTestCase_000453_2);

#define VkglTestCase_000454_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000454_2 "operation.bitfieldInsert.ivec4_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000454, VkglTestCase_000454_1, VkglTestCase_000454_2);

#define VkglTestCase_000455_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000455_2 "operation.bitfieldInsert.ivec4_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000455, VkglTestCase_000455_1, VkglTestCase_000455_2);
