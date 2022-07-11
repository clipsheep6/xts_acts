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
#include "../ActsDeqpgles310029TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_028838_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028838_2 "ewclass_32_bits.rgba8i_rgba8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028838, VkglTestCase_028838_1, VkglTestCase_028838_2);

#define VkglTestCase_028839_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028839_2 "ewclass_32_bits.rgba8i_rgba8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028839, VkglTestCase_028839_1, VkglTestCase_028839_2);

#define VkglTestCase_028840_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028840_2 "iewclass_32_bits.rgba8i_rgba8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028840, VkglTestCase_028840_1, VkglTestCase_028840_2);

#define VkglTestCase_028841_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028841_2 "lass_32_bits.rgba8i_rgba8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028841, VkglTestCase_028841_1, VkglTestCase_028841_2);

#define VkglTestCase_028842_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028842_2 "wclass_32_bits.rgba8i_rgba8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028842, VkglTestCase_028842_1, VkglTestCase_028842_2);

#define VkglTestCase_028843_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028843_2 "ewclass_32_bits.rgba8i_rgba8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028843, VkglTestCase_028843_1, VkglTestCase_028843_2);

#define VkglTestCase_028844_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028844_2 "ewclass_32_bits.rgba8i_rgba8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028844, VkglTestCase_028844_1, VkglTestCase_028844_2);

#define VkglTestCase_028845_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028845_2 "iewclass_32_bits.rgba8i_rgba8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028845, VkglTestCase_028845_1, VkglTestCase_028845_2);

#define VkglTestCase_028846_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028846_2 "lass_32_bits.rgba8i_rgba8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028846, VkglTestCase_028846_1, VkglTestCase_028846_2);

#define VkglTestCase_028847_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028847_2 "wclass_32_bits.rgba8i_rgba8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028847, VkglTestCase_028847_1, VkglTestCase_028847_2);

#define VkglTestCase_028848_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028848_2 "iewclass_32_bits.rgba8i_rgba8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028848, VkglTestCase_028848_1, VkglTestCase_028848_2);

#define VkglTestCase_028849_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028849_2 "iewclass_32_bits.rgba8i_rgba8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028849, VkglTestCase_028849_1, VkglTestCase_028849_2);

#define VkglTestCase_028850_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028850_2 "viewclass_32_bits.rgba8i_rgba8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028850, VkglTestCase_028850_1, VkglTestCase_028850_2);

#define VkglTestCase_028851_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028851_2 "class_32_bits.rgba8i_rgba8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028851, VkglTestCase_028851_1, VkglTestCase_028851_2);

#define VkglTestCase_028852_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028852_2 "ewclass_32_bits.rgba8i_rgba8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028852, VkglTestCase_028852_1, VkglTestCase_028852_2);

#define VkglTestCase_028853_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028853_2 "lass_32_bits.rgba8i_rgba8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028853, VkglTestCase_028853_1, VkglTestCase_028853_2);

#define VkglTestCase_028854_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028854_2 "lass_32_bits.rgba8i_rgba8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028854, VkglTestCase_028854_1, VkglTestCase_028854_2);

#define VkglTestCase_028855_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028855_2 "class_32_bits.rgba8i_rgba8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028855, VkglTestCase_028855_1, VkglTestCase_028855_2);

#define VkglTestCase_028856_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028856_2 "s_32_bits.rgba8i_rgba8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028856, VkglTestCase_028856_1, VkglTestCase_028856_2);

#define VkglTestCase_028857_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028857_2 "ass_32_bits.rgba8i_rgba8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028857, VkglTestCase_028857_1, VkglTestCase_028857_2);

#define VkglTestCase_028858_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028858_2 "wclass_32_bits.rgba8i_rgba8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028858, VkglTestCase_028858_1, VkglTestCase_028858_2);

#define VkglTestCase_028859_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028859_2 "wclass_32_bits.rgba8i_rgba8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028859, VkglTestCase_028859_1, VkglTestCase_028859_2);

#define VkglTestCase_028860_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028860_2 "ewclass_32_bits.rgba8i_rgba8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028860, VkglTestCase_028860_1, VkglTestCase_028860_2);

#define VkglTestCase_028861_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028861_2 "ass_32_bits.rgba8i_rgba8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028861, VkglTestCase_028861_1, VkglTestCase_028861_2);

#define VkglTestCase_028862_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028862_2 "lass_32_bits.rgba8i_rgba8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028862, VkglTestCase_028862_1, VkglTestCase_028862_2);
