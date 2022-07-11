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
#include "../ActsDeqpgles310033TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_032165_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032165_2 ".viewclass_16_bits.rg8_rg8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032165, VkglTestCase_032165_1, VkglTestCase_032165_2);

#define VkglTestCase_032166_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032166_2 ".viewclass_16_bits.rg8_rg8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032166, VkglTestCase_032166_1, VkglTestCase_032166_2);

#define VkglTestCase_032167_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032167_2 "d.viewclass_16_bits.rg8_rg8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032167, VkglTestCase_032167_1, VkglTestCase_032167_2);

#define VkglTestCase_032168_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032168_2 "ewclass_16_bits.rg8_rg8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032168, VkglTestCase_032168_1, VkglTestCase_032168_2);

#define VkglTestCase_032169_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032169_2 "iewclass_16_bits.rg8_rg8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032169, VkglTestCase_032169_1, VkglTestCase_032169_2);

#define VkglTestCase_032170_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032170_2 ".viewclass_16_bits.rg8_rg8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032170, VkglTestCase_032170_1, VkglTestCase_032170_2);

#define VkglTestCase_032171_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032171_2 ".viewclass_16_bits.rg8_rg8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032171, VkglTestCase_032171_1, VkglTestCase_032171_2);

#define VkglTestCase_032172_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032172_2 "d.viewclass_16_bits.rg8_rg8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032172, VkglTestCase_032172_1, VkglTestCase_032172_2);

#define VkglTestCase_032173_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032173_2 "ewclass_16_bits.rg8_rg8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032173, VkglTestCase_032173_1, VkglTestCase_032173_2);

#define VkglTestCase_032174_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032174_2 "iewclass_16_bits.rg8_rg8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032174, VkglTestCase_032174_1, VkglTestCase_032174_2);

#define VkglTestCase_032175_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032175_2 "d.viewclass_16_bits.rg8_rg8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032175, VkglTestCase_032175_1, VkglTestCase_032175_2);

#define VkglTestCase_032176_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032176_2 "d.viewclass_16_bits.rg8_rg8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032176, VkglTestCase_032176_1, VkglTestCase_032176_2);

#define VkglTestCase_032177_1 "dEQP-GLES31.functional.copy_image.non_compress"
#define VkglTestCase_032177_2 "ed.viewclass_16_bits.rg8_rg8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032177, VkglTestCase_032177_1, VkglTestCase_032177_2);

#define VkglTestCase_032178_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032178_2 "iewclass_16_bits.rg8_rg8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032178, VkglTestCase_032178_1, VkglTestCase_032178_2);

#define VkglTestCase_032179_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032179_2 "viewclass_16_bits.rg8_rg8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032179, VkglTestCase_032179_1, VkglTestCase_032179_2);

#define VkglTestCase_032180_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032180_2 "ewclass_16_bits.rg8_rg8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032180, VkglTestCase_032180_1, VkglTestCase_032180_2);

#define VkglTestCase_032181_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032181_2 "ewclass_16_bits.rg8_rg8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032181, VkglTestCase_032181_1, VkglTestCase_032181_2);

#define VkglTestCase_032182_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032182_2 "iewclass_16_bits.rg8_rg8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032182, VkglTestCase_032182_1, VkglTestCase_032182_2);

#define VkglTestCase_032183_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032183_2 "lass_16_bits.rg8_rg8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032183, VkglTestCase_032183_1, VkglTestCase_032183_2);

#define VkglTestCase_032184_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032184_2 "class_16_bits.rg8_rg8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032184, VkglTestCase_032184_1, VkglTestCase_032184_2);

#define VkglTestCase_032185_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032185_2 "iewclass_16_bits.rg8_rg8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032185, VkglTestCase_032185_1, VkglTestCase_032185_2);

#define VkglTestCase_032186_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032186_2 "iewclass_16_bits.rg8_rg8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032186, VkglTestCase_032186_1, VkglTestCase_032186_2);

#define VkglTestCase_032187_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032187_2 "viewclass_16_bits.rg8_rg8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032187, VkglTestCase_032187_1, VkglTestCase_032187_2);

#define VkglTestCase_032188_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032188_2 "class_16_bits.rg8_rg8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032188, VkglTestCase_032188_1, VkglTestCase_032188_2);

#define VkglTestCase_032189_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032189_2 "ewclass_16_bits.rg8_rg8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032189, VkglTestCase_032189_1, VkglTestCase_032189_2);
