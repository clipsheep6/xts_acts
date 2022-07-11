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
#include "../ActsDeqpgles310028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027456_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027456_2 "iewclass_32_bits.rg16f_rg16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027456, VkglTestCase_027456_1, VkglTestCase_027456_2);

#define VkglTestCase_027457_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027457_2 "iewclass_32_bits.rg16f_rg16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027457, VkglTestCase_027457_1, VkglTestCase_027457_2);

#define VkglTestCase_027458_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027458_2 "viewclass_32_bits.rg16f_rg16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027458, VkglTestCase_027458_1, VkglTestCase_027458_2);

#define VkglTestCase_027459_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027459_2 "class_32_bits.rg16f_rg16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027459, VkglTestCase_027459_1, VkglTestCase_027459_2);

#define VkglTestCase_027460_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027460_2 "iewclass_32_bits.rg16f_rg16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027460, VkglTestCase_027460_1, VkglTestCase_027460_2);

#define VkglTestCase_027461_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027461_2 "iewclass_32_bits.rg16f_rg16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027461, VkglTestCase_027461_1, VkglTestCase_027461_2);

#define VkglTestCase_027462_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027462_2 "viewclass_32_bits.rg16f_rg16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027462, VkglTestCase_027462_1, VkglTestCase_027462_2);

#define VkglTestCase_027463_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027463_2 "class_32_bits.rg16f_rg16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027463, VkglTestCase_027463_1, VkglTestCase_027463_2);

#define VkglTestCase_027464_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027464_2 "viewclass_32_bits.rg16f_rg16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027464, VkglTestCase_027464_1, VkglTestCase_027464_2);

#define VkglTestCase_027465_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027465_2 "viewclass_32_bits.rg16f_rg16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027465, VkglTestCase_027465_1, VkglTestCase_027465_2);

#define VkglTestCase_027466_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_027466_2 ".viewclass_32_bits.rg16f_rg16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027466, VkglTestCase_027466_1, VkglTestCase_027466_2);

#define VkglTestCase_027467_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027467_2 "wclass_32_bits.rg16f_rg16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027467, VkglTestCase_027467_1, VkglTestCase_027467_2);

#define VkglTestCase_027468_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027468_2 "class_32_bits.rg16f_rg16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027468, VkglTestCase_027468_1, VkglTestCase_027468_2);

#define VkglTestCase_027469_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027469_2 "class_32_bits.rg16f_rg16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027469, VkglTestCase_027469_1, VkglTestCase_027469_2);

#define VkglTestCase_027470_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027470_2 "wclass_32_bits.rg16f_rg16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027470, VkglTestCase_027470_1, VkglTestCase_027470_2);

#define VkglTestCase_027471_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027471_2 "ss_32_bits.rg16f_rg16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027471, VkglTestCase_027471_1, VkglTestCase_027471_2);
