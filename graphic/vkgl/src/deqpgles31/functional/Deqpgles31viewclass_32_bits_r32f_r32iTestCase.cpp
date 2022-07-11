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
#include "../ActsDeqpgles310027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026500_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026500_2 "viewclass_32_bits.r32f_r32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026500, VkglTestCase_026500_1, VkglTestCase_026500_2);

#define VkglTestCase_026501_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026501_2 "viewclass_32_bits.r32f_r32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026501, VkglTestCase_026501_1, VkglTestCase_026501_2);

#define VkglTestCase_026502_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026502_2 ".viewclass_32_bits.r32f_r32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026502, VkglTestCase_026502_1, VkglTestCase_026502_2);

#define VkglTestCase_026503_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026503_2 "wclass_32_bits.r32f_r32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026503, VkglTestCase_026503_1, VkglTestCase_026503_2);

#define VkglTestCase_026504_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026504_2 "ewclass_32_bits.r32f_r32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026504, VkglTestCase_026504_1, VkglTestCase_026504_2);

#define VkglTestCase_026505_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026505_2 "viewclass_32_bits.r32f_r32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026505, VkglTestCase_026505_1, VkglTestCase_026505_2);

#define VkglTestCase_026506_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026506_2 "viewclass_32_bits.r32f_r32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026506, VkglTestCase_026506_1, VkglTestCase_026506_2);

#define VkglTestCase_026507_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026507_2 ".viewclass_32_bits.r32f_r32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026507, VkglTestCase_026507_1, VkglTestCase_026507_2);

#define VkglTestCase_026508_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026508_2 "wclass_32_bits.r32f_r32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026508, VkglTestCase_026508_1, VkglTestCase_026508_2);

#define VkglTestCase_026509_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026509_2 "ewclass_32_bits.r32f_r32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026509, VkglTestCase_026509_1, VkglTestCase_026509_2);

#define VkglTestCase_026510_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026510_2 ".viewclass_32_bits.r32f_r32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026510, VkglTestCase_026510_1, VkglTestCase_026510_2);

#define VkglTestCase_026511_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026511_2 ".viewclass_32_bits.r32f_r32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026511, VkglTestCase_026511_1, VkglTestCase_026511_2);

#define VkglTestCase_026512_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_026512_2 "d.viewclass_32_bits.r32f_r32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026512, VkglTestCase_026512_1, VkglTestCase_026512_2);

#define VkglTestCase_026513_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026513_2 "ewclass_32_bits.r32f_r32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026513, VkglTestCase_026513_1, VkglTestCase_026513_2);

#define VkglTestCase_026514_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026514_2 "iewclass_32_bits.r32f_r32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026514, VkglTestCase_026514_1, VkglTestCase_026514_2);

#define VkglTestCase_026515_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026515_2 "wclass_32_bits.r32f_r32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026515, VkglTestCase_026515_1, VkglTestCase_026515_2);

#define VkglTestCase_026516_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026516_2 "wclass_32_bits.r32f_r32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026516, VkglTestCase_026516_1, VkglTestCase_026516_2);

#define VkglTestCase_026517_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026517_2 "ewclass_32_bits.r32f_r32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026517, VkglTestCase_026517_1, VkglTestCase_026517_2);

#define VkglTestCase_026518_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026518_2 "ass_32_bits.r32f_r32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026518, VkglTestCase_026518_1, VkglTestCase_026518_2);

#define VkglTestCase_026519_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026519_2 "lass_32_bits.r32f_r32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026519, VkglTestCase_026519_1, VkglTestCase_026519_2);
