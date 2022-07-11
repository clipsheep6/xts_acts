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
#include "../ActsDeqpgles310032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031000_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031000_2 "ewclass_32_bits.rgb9_e5_rg16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031000, VkglTestCase_031000_1, VkglTestCase_031000_2);

#define VkglTestCase_031001_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031001_2 "ewclass_32_bits.rgb9_e5_rg16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031001, VkglTestCase_031001_1, VkglTestCase_031001_2);

#define VkglTestCase_031002_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031002_2 "iewclass_32_bits.rgb9_e5_rg16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031002, VkglTestCase_031002_1, VkglTestCase_031002_2);

#define VkglTestCase_031003_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031003_2 "lass_32_bits.rgb9_e5_rg16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031003, VkglTestCase_031003_1, VkglTestCase_031003_2);

#define VkglTestCase_031004_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031004_2 "class_32_bits.rgb9_e5_rg16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031004, VkglTestCase_031004_1, VkglTestCase_031004_2);

#define VkglTestCase_031005_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031005_2 "ewclass_32_bits.rgb9_e5_rg16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031005, VkglTestCase_031005_1, VkglTestCase_031005_2);

#define VkglTestCase_031006_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031006_2 "ewclass_32_bits.rgb9_e5_rg16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031006, VkglTestCase_031006_1, VkglTestCase_031006_2);

#define VkglTestCase_031007_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031007_2 "iewclass_32_bits.rgb9_e5_rg16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031007, VkglTestCase_031007_1, VkglTestCase_031007_2);

#define VkglTestCase_031008_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031008_2 "lass_32_bits.rgb9_e5_rg16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031008, VkglTestCase_031008_1, VkglTestCase_031008_2);

#define VkglTestCase_031009_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031009_2 "class_32_bits.rgb9_e5_rg16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031009, VkglTestCase_031009_1, VkglTestCase_031009_2);

#define VkglTestCase_031010_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031010_2 "iewclass_32_bits.rgb9_e5_rg16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031010, VkglTestCase_031010_1, VkglTestCase_031010_2);

#define VkglTestCase_031011_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031011_2 "iewclass_32_bits.rgb9_e5_rg16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031011, VkglTestCase_031011_1, VkglTestCase_031011_2);

#define VkglTestCase_031012_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031012_2 "viewclass_32_bits.rgb9_e5_rg16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031012, VkglTestCase_031012_1, VkglTestCase_031012_2);

#define VkglTestCase_031013_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031013_2 "class_32_bits.rgb9_e5_rg16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031013, VkglTestCase_031013_1, VkglTestCase_031013_2);

#define VkglTestCase_031014_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031014_2 "wclass_32_bits.rgb9_e5_rg16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031014, VkglTestCase_031014_1, VkglTestCase_031014_2);

#define VkglTestCase_031015_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031015_2 "lass_32_bits.rgb9_e5_rg16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031015, VkglTestCase_031015_1, VkglTestCase_031015_2);

#define VkglTestCase_031016_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031016_2 "lass_32_bits.rgb9_e5_rg16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031016, VkglTestCase_031016_1, VkglTestCase_031016_2);

#define VkglTestCase_031017_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031017_2 "class_32_bits.rgb9_e5_rg16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031017, VkglTestCase_031017_1, VkglTestCase_031017_2);

#define VkglTestCase_031018_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031018_2 "s_32_bits.rgb9_e5_rg16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031018, VkglTestCase_031018_1, VkglTestCase_031018_2);

#define VkglTestCase_031019_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031019_2 "ss_32_bits.rgb9_e5_rg16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031019, VkglTestCase_031019_1, VkglTestCase_031019_2);
