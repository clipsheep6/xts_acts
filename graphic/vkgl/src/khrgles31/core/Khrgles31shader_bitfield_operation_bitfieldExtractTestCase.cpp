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

#define VkglTestCase_000392_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000392_2 "operation.bitfieldExtract.uint_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000392, VkglTestCase_000392_1, VkglTestCase_000392_2);

#define VkglTestCase_000393_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000393_2 "operation.bitfieldExtract.uint_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000393, VkglTestCase_000393_1, VkglTestCase_000393_2);

#define VkglTestCase_000394_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000394_2 "operation.bitfieldExtract.uint_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000394, VkglTestCase_000394_1, VkglTestCase_000394_2);

#define VkglTestCase_000395_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000395_2 "operation.bitfieldExtract.uint_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000395, VkglTestCase_000395_1, VkglTestCase_000395_2);

#define VkglTestCase_000396_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000396_2 "operation.bitfieldExtract.uvec2_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000396, VkglTestCase_000396_1, VkglTestCase_000396_2);

#define VkglTestCase_000397_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000397_2 "operation.bitfieldExtract.uvec2_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000397, VkglTestCase_000397_1, VkglTestCase_000397_2);

#define VkglTestCase_000398_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000398_2 "operation.bitfieldExtract.uvec2_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000398, VkglTestCase_000398_1, VkglTestCase_000398_2);

#define VkglTestCase_000399_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000399_2 "operation.bitfieldExtract.uvec2_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000399, VkglTestCase_000399_1, VkglTestCase_000399_2);

#define VkglTestCase_000400_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000400_2 "operation.bitfieldExtract.uvec3_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000400, VkglTestCase_000400_1, VkglTestCase_000400_2);

#define VkglTestCase_000401_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000401_2 "operation.bitfieldExtract.uvec3_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000401, VkglTestCase_000401_1, VkglTestCase_000401_2);

#define VkglTestCase_000402_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000402_2 "operation.bitfieldExtract.uvec3_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000402, VkglTestCase_000402_1, VkglTestCase_000402_2);

#define VkglTestCase_000403_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000403_2 "operation.bitfieldExtract.uvec3_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000403, VkglTestCase_000403_1, VkglTestCase_000403_2);

#define VkglTestCase_000404_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000404_2 "operation.bitfieldExtract.uvec4_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000404, VkglTestCase_000404_1, VkglTestCase_000404_2);

#define VkglTestCase_000405_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000405_2 "operation.bitfieldExtract.uvec4_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000405, VkglTestCase_000405_1, VkglTestCase_000405_2);

#define VkglTestCase_000406_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000406_2 "operation.bitfieldExtract.uvec4_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000406, VkglTestCase_000406_1, VkglTestCase_000406_2);

#define VkglTestCase_000407_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000407_2 "operation.bitfieldExtract.uvec4_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000407, VkglTestCase_000407_1, VkglTestCase_000407_2);

#define VkglTestCase_000408_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000408_2 "_operation.bitfieldExtract.int_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000408, VkglTestCase_000408_1, VkglTestCase_000408_2);

#define VkglTestCase_000409_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000409_2 "_operation.bitfieldExtract.int_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000409, VkglTestCase_000409_1, VkglTestCase_000409_2);

#define VkglTestCase_000410_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000410_2 "_operation.bitfieldExtract.int_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000410, VkglTestCase_000410_1, VkglTestCase_000410_2);

#define VkglTestCase_000411_1 "KHR-GLES31.core.shader_bitfield"
#define VkglTestCase_000411_2 "_operation.bitfieldExtract.int_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000411, VkglTestCase_000411_1, VkglTestCase_000411_2);

#define VkglTestCase_000412_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000412_2 "operation.bitfieldExtract.ivec2_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000412, VkglTestCase_000412_1, VkglTestCase_000412_2);

#define VkglTestCase_000413_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000413_2 "operation.bitfieldExtract.ivec2_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000413, VkglTestCase_000413_1, VkglTestCase_000413_2);

#define VkglTestCase_000414_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000414_2 "operation.bitfieldExtract.ivec2_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000414, VkglTestCase_000414_1, VkglTestCase_000414_2);

#define VkglTestCase_000415_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000415_2 "operation.bitfieldExtract.ivec2_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000415, VkglTestCase_000415_1, VkglTestCase_000415_2);

#define VkglTestCase_000416_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000416_2 "operation.bitfieldExtract.ivec3_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000416, VkglTestCase_000416_1, VkglTestCase_000416_2);

#define VkglTestCase_000417_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000417_2 "operation.bitfieldExtract.ivec3_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000417, VkglTestCase_000417_1, VkglTestCase_000417_2);

#define VkglTestCase_000418_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000418_2 "operation.bitfieldExtract.ivec3_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000418, VkglTestCase_000418_1, VkglTestCase_000418_2);

#define VkglTestCase_000419_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000419_2 "operation.bitfieldExtract.ivec3_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000419, VkglTestCase_000419_1, VkglTestCase_000419_2);

#define VkglTestCase_000420_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000420_2 "operation.bitfieldExtract.ivec4_0"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000420, VkglTestCase_000420_1, VkglTestCase_000420_2);

#define VkglTestCase_000421_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000421_2 "operation.bitfieldExtract.ivec4_1"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000421, VkglTestCase_000421_1, VkglTestCase_000421_2);

#define VkglTestCase_000422_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000422_2 "operation.bitfieldExtract.ivec4_2"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000422, VkglTestCase_000422_1, VkglTestCase_000422_2);

#define VkglTestCase_000423_1 "KHR-GLES31.core.shader_bitfield_"
#define VkglTestCase_000423_2 "operation.bitfieldExtract.ivec4_3"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000423, VkglTestCase_000423_1, VkglTestCase_000423_2);
