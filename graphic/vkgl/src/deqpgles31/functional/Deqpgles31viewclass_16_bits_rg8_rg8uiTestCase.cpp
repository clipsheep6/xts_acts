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

#define VkglTestCase_032215_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032215_2 "viewclass_16_bits.rg8_rg8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032215, VkglTestCase_032215_1, VkglTestCase_032215_2);

#define VkglTestCase_032216_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032216_2 "viewclass_16_bits.rg8_rg8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032216, VkglTestCase_032216_1, VkglTestCase_032216_2);

#define VkglTestCase_032217_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032217_2 ".viewclass_16_bits.rg8_rg8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032217, VkglTestCase_032217_1, VkglTestCase_032217_2);

#define VkglTestCase_032218_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032218_2 "wclass_16_bits.rg8_rg8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032218, VkglTestCase_032218_1, VkglTestCase_032218_2);

#define VkglTestCase_032219_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032219_2 "ewclass_16_bits.rg8_rg8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032219, VkglTestCase_032219_1, VkglTestCase_032219_2);

#define VkglTestCase_032220_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032220_2 "viewclass_16_bits.rg8_rg8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032220, VkglTestCase_032220_1, VkglTestCase_032220_2);

#define VkglTestCase_032221_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032221_2 "viewclass_16_bits.rg8_rg8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032221, VkglTestCase_032221_1, VkglTestCase_032221_2);

#define VkglTestCase_032222_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032222_2 ".viewclass_16_bits.rg8_rg8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032222, VkglTestCase_032222_1, VkglTestCase_032222_2);

#define VkglTestCase_032223_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032223_2 "wclass_16_bits.rg8_rg8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032223, VkglTestCase_032223_1, VkglTestCase_032223_2);

#define VkglTestCase_032224_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032224_2 "ewclass_16_bits.rg8_rg8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032224, VkglTestCase_032224_1, VkglTestCase_032224_2);

#define VkglTestCase_032225_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032225_2 ".viewclass_16_bits.rg8_rg8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032225, VkglTestCase_032225_1, VkglTestCase_032225_2);

#define VkglTestCase_032226_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032226_2 ".viewclass_16_bits.rg8_rg8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032226, VkglTestCase_032226_1, VkglTestCase_032226_2);

#define VkglTestCase_032227_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032227_2 "d.viewclass_16_bits.rg8_rg8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032227, VkglTestCase_032227_1, VkglTestCase_032227_2);

#define VkglTestCase_032228_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032228_2 "ewclass_16_bits.rg8_rg8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032228, VkglTestCase_032228_1, VkglTestCase_032228_2);

#define VkglTestCase_032229_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032229_2 "iewclass_16_bits.rg8_rg8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032229, VkglTestCase_032229_1, VkglTestCase_032229_2);

#define VkglTestCase_032230_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032230_2 "wclass_16_bits.rg8_rg8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032230, VkglTestCase_032230_1, VkglTestCase_032230_2);

#define VkglTestCase_032231_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032231_2 "wclass_16_bits.rg8_rg8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032231, VkglTestCase_032231_1, VkglTestCase_032231_2);

#define VkglTestCase_032232_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032232_2 "ewclass_16_bits.rg8_rg8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032232, VkglTestCase_032232_1, VkglTestCase_032232_2);

#define VkglTestCase_032233_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032233_2 "ass_16_bits.rg8_rg8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032233, VkglTestCase_032233_1, VkglTestCase_032233_2);

#define VkglTestCase_032234_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032234_2 "lass_16_bits.rg8_rg8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032234, VkglTestCase_032234_1, VkglTestCase_032234_2);

#define VkglTestCase_032235_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032235_2 "ewclass_16_bits.rg8_rg8ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032235, VkglTestCase_032235_1, VkglTestCase_032235_2);

#define VkglTestCase_032236_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032236_2 "ewclass_16_bits.rg8_rg8ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032236, VkglTestCase_032236_1, VkglTestCase_032236_2);

#define VkglTestCase_032237_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032237_2 "iewclass_16_bits.rg8_rg8ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032237, VkglTestCase_032237_1, VkglTestCase_032237_2);

#define VkglTestCase_032238_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032238_2 "lass_16_bits.rg8_rg8ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032238, VkglTestCase_032238_1, VkglTestCase_032238_2);

#define VkglTestCase_032239_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032239_2 "wclass_16_bits.rg8_rg8ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032239, VkglTestCase_032239_1, VkglTestCase_032239_2);
