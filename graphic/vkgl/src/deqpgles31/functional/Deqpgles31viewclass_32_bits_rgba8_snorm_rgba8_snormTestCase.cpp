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
#include "../ActsDeqpgles310031TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_030558_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030558_2 "ss_32_bits.rgba8_snorm_rgba8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030558, VkglTestCase_030558_1, VkglTestCase_030558_2);

#define VkglTestCase_030559_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030559_2 "ss_32_bits.rgba8_snorm_rgba8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030559, VkglTestCase_030559_1, VkglTestCase_030559_2);

#define VkglTestCase_030560_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030560_2 "ass_32_bits.rgba8_snorm_rgba8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030560, VkglTestCase_030560_1, VkglTestCase_030560_2);

#define VkglTestCase_030561_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030561_2 "32_bits.rgba8_snorm_rgba8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030561, VkglTestCase_030561_1, VkglTestCase_030561_2);

#define VkglTestCase_030562_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030562_2 "ss_32_bits.rgba8_snorm_rgba8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030562, VkglTestCase_030562_1, VkglTestCase_030562_2);

#define VkglTestCase_030563_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030563_2 "ss_32_bits.rgba8_snorm_rgba8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030563, VkglTestCase_030563_1, VkglTestCase_030563_2);

#define VkglTestCase_030564_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030564_2 "ass_32_bits.rgba8_snorm_rgba8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030564, VkglTestCase_030564_1, VkglTestCase_030564_2);

#define VkglTestCase_030565_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030565_2 "32_bits.rgba8_snorm_rgba8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030565, VkglTestCase_030565_1, VkglTestCase_030565_2);

#define VkglTestCase_030566_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030566_2 "ass_32_bits.rgba8_snorm_rgba8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030566, VkglTestCase_030566_1, VkglTestCase_030566_2);

#define VkglTestCase_030567_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030567_2 "ass_32_bits.rgba8_snorm_rgba8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030567, VkglTestCase_030567_1, VkglTestCase_030567_2);

#define VkglTestCase_030568_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030568_2 "lass_32_bits.rgba8_snorm_rgba8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030568, VkglTestCase_030568_1, VkglTestCase_030568_2);

#define VkglTestCase_030569_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030569_2 "_32_bits.rgba8_snorm_rgba8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030569, VkglTestCase_030569_1, VkglTestCase_030569_2);

#define VkglTestCase_030570_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030570_2 "32_bits.rgba8_snorm_rgba8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030570, VkglTestCase_030570_1, VkglTestCase_030570_2);

#define VkglTestCase_030571_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030571_2 "32_bits.rgba8_snorm_rgba8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030571, VkglTestCase_030571_1, VkglTestCase_030571_2);

#define VkglTestCase_030572_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030572_2 "_32_bits.rgba8_snorm_rgba8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030572, VkglTestCase_030572_1, VkglTestCase_030572_2);

#define VkglTestCase_030573_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_"
#define VkglTestCase_030573_2 "bits.rgba8_snorm_rgba8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030573, VkglTestCase_030573_1, VkglTestCase_030573_2);
