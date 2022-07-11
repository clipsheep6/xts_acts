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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025939_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025939_2 "wclass_64_bits.rg32ui_rgba16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025939, VkglTestCase_025939_1, VkglTestCase_025939_2);

#define VkglTestCase_025940_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025940_2 "wclass_64_bits.rg32ui_rgba16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025940, VkglTestCase_025940_1, VkglTestCase_025940_2);

#define VkglTestCase_025941_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025941_2 "ewclass_64_bits.rg32ui_rgba16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025941, VkglTestCase_025941_1, VkglTestCase_025941_2);

#define VkglTestCase_025942_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025942_2 "ass_64_bits.rg32ui_rgba16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025942, VkglTestCase_025942_1, VkglTestCase_025942_2);

#define VkglTestCase_025943_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025943_2 "lass_64_bits.rg32ui_rgba16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025943, VkglTestCase_025943_1, VkglTestCase_025943_2);

#define VkglTestCase_025944_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025944_2 "wclass_64_bits.rg32ui_rgba16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025944, VkglTestCase_025944_1, VkglTestCase_025944_2);

#define VkglTestCase_025945_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025945_2 "wclass_64_bits.rg32ui_rgba16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025945, VkglTestCase_025945_1, VkglTestCase_025945_2);

#define VkglTestCase_025946_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025946_2 "ewclass_64_bits.rg32ui_rgba16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025946, VkglTestCase_025946_1, VkglTestCase_025946_2);

#define VkglTestCase_025947_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025947_2 "ass_64_bits.rg32ui_rgba16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025947, VkglTestCase_025947_1, VkglTestCase_025947_2);

#define VkglTestCase_025948_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025948_2 "lass_64_bits.rg32ui_rgba16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025948, VkglTestCase_025948_1, VkglTestCase_025948_2);

#define VkglTestCase_025949_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025949_2 "ewclass_64_bits.rg32ui_rgba16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025949, VkglTestCase_025949_1, VkglTestCase_025949_2);

#define VkglTestCase_025950_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025950_2 "ewclass_64_bits.rg32ui_rgba16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025950, VkglTestCase_025950_1, VkglTestCase_025950_2);

#define VkglTestCase_025951_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025951_2 "iewclass_64_bits.rg32ui_rgba16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025951, VkglTestCase_025951_1, VkglTestCase_025951_2);

#define VkglTestCase_025952_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025952_2 "lass_64_bits.rg32ui_rgba16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025952, VkglTestCase_025952_1, VkglTestCase_025952_2);

#define VkglTestCase_025953_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025953_2 "class_64_bits.rg32ui_rgba16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025953, VkglTestCase_025953_1, VkglTestCase_025953_2);

#define VkglTestCase_025954_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025954_2 "ass_64_bits.rg32ui_rgba16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025954, VkglTestCase_025954_1, VkglTestCase_025954_2);

#define VkglTestCase_025955_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025955_2 "ass_64_bits.rg32ui_rgba16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025955, VkglTestCase_025955_1, VkglTestCase_025955_2);

#define VkglTestCase_025956_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025956_2 "lass_64_bits.rg32ui_rgba16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025956, VkglTestCase_025956_1, VkglTestCase_025956_2);

#define VkglTestCase_025957_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_025957_2 "_64_bits.rg32ui_rgba16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025957, VkglTestCase_025957_1, VkglTestCase_025957_2);

#define VkglTestCase_025958_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025958_2 "s_64_bits.rg32ui_rgba16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025958, VkglTestCase_025958_1, VkglTestCase_025958_2);

#define VkglTestCase_025959_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025959_2 "lass_64_bits.rg32ui_rgba16ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025959, VkglTestCase_025959_1, VkglTestCase_025959_2);

#define VkglTestCase_025960_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025960_2 "lass_64_bits.rg32ui_rgba16ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025960, VkglTestCase_025960_1, VkglTestCase_025960_2);

#define VkglTestCase_025961_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025961_2 "class_64_bits.rg32ui_rgba16ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025961, VkglTestCase_025961_1, VkglTestCase_025961_2);

#define VkglTestCase_025962_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025962_2 "s_64_bits.rg32ui_rgba16ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025962, VkglTestCase_025962_1, VkglTestCase_025962_2);

#define VkglTestCase_025963_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025963_2 "ass_64_bits.rg32ui_rgba16ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025963, VkglTestCase_025963_1, VkglTestCase_025963_2);
