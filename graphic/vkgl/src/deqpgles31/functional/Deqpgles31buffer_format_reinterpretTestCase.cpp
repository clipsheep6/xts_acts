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
#include "../ActsDeqpgles310012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011894_1 "dEQP-GLES31.functional.image_load_store.b"
#define VkglTestCase_011894_2 "uffer.format_reinterpret.rgba32f_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011894, VkglTestCase_011894_1, VkglTestCase_011894_2);

#define VkglTestCase_011895_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011895_2 "buffer.format_reinterpret.rgba32f_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011895, VkglTestCase_011895_1, VkglTestCase_011895_2);

#define VkglTestCase_011896_1 "dEQP-GLES31.functional.image_load_store.b"
#define VkglTestCase_011896_2 "uffer.format_reinterpret.rgba16f_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011896, VkglTestCase_011896_1, VkglTestCase_011896_2);

#define VkglTestCase_011897_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011897_2 "buffer.format_reinterpret.rgba16f_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011897, VkglTestCase_011897_1, VkglTestCase_011897_2);

#define VkglTestCase_011898_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011898_2 ".buffer.format_reinterpret.r32f_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011898, VkglTestCase_011898_1, VkglTestCase_011898_2);

#define VkglTestCase_011899_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011899_2 "e.buffer.format_reinterpret.r32f_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011899, VkglTestCase_011899_1, VkglTestCase_011899_2);

#define VkglTestCase_011900_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011900_2 "e.buffer.format_reinterpret.r32f_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011900, VkglTestCase_011900_1, VkglTestCase_011900_2);

#define VkglTestCase_011901_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011901_2 "re.buffer.format_reinterpret.r32f_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011901, VkglTestCase_011901_1, VkglTestCase_011901_2);

#define VkglTestCase_011902_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011902_2 "e.buffer.format_reinterpret.r32f_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011902, VkglTestCase_011902_1, VkglTestCase_011902_2);

#define VkglTestCase_011903_1 "dEQP-GLES31.functional.image_load_store.b"
#define VkglTestCase_011903_2 "uffer.format_reinterpret.r32f_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011903, VkglTestCase_011903_1, VkglTestCase_011903_2);

#define VkglTestCase_011904_1 "dEQP-GLES31.functional.image_load_store.b"
#define VkglTestCase_011904_2 "uffer.format_reinterpret.rgba32ui_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011904, VkglTestCase_011904_1, VkglTestCase_011904_2);

#define VkglTestCase_011905_1 "dEQP-GLES31.functional.image_load_store.b"
#define VkglTestCase_011905_2 "uffer.format_reinterpret.rgba32ui_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011905, VkglTestCase_011905_1, VkglTestCase_011905_2);

#define VkglTestCase_011906_1 "dEQP-GLES31.functional.image_load_store.b"
#define VkglTestCase_011906_2 "uffer.format_reinterpret.rgba16ui_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011906, VkglTestCase_011906_1, VkglTestCase_011906_2);

#define VkglTestCase_011907_1 "dEQP-GLES31.functional.image_load_store.b"
#define VkglTestCase_011907_2 "uffer.format_reinterpret.rgba16ui_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011907, VkglTestCase_011907_1, VkglTestCase_011907_2);

#define VkglTestCase_011908_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011908_2 ".buffer.format_reinterpret.rgba8ui_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011908, VkglTestCase_011908_1, VkglTestCase_011908_2);

#define VkglTestCase_011909_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011909_2 ".buffer.format_reinterpret.rgba8ui_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011909, VkglTestCase_011909_1, VkglTestCase_011909_2);

#define VkglTestCase_011910_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011910_2 "buffer.format_reinterpret.rgba8ui_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011910, VkglTestCase_011910_1, VkglTestCase_011910_2);

#define VkglTestCase_011911_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011911_2 ".buffer.format_reinterpret.rgba8ui_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011911, VkglTestCase_011911_1, VkglTestCase_011911_2);

#define VkglTestCase_011912_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011912_2 ".buffer.format_reinterpret.rgba8ui_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011912, VkglTestCase_011912_1, VkglTestCase_011912_2);

#define VkglTestCase_011913_1 "dEQP-GLES31.functional.image_load_store.bu"
#define VkglTestCase_011913_2 "ffer.format_reinterpret.rgba8ui_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011913, VkglTestCase_011913_1, VkglTestCase_011913_2);

#define VkglTestCase_011914_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011914_2 "e.buffer.format_reinterpret.r32ui_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011914, VkglTestCase_011914_1, VkglTestCase_011914_2);

#define VkglTestCase_011915_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011915_2 ".buffer.format_reinterpret.r32ui_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011915, VkglTestCase_011915_1, VkglTestCase_011915_2);

#define VkglTestCase_011916_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011916_2 ".buffer.format_reinterpret.r32ui_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011916, VkglTestCase_011916_1, VkglTestCase_011916_2);

#define VkglTestCase_011917_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011917_2 "e.buffer.format_reinterpret.r32ui_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011917, VkglTestCase_011917_1, VkglTestCase_011917_2);

#define VkglTestCase_011918_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011918_2 "e.buffer.format_reinterpret.r32ui_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011918, VkglTestCase_011918_1, VkglTestCase_011918_2);

#define VkglTestCase_011919_1 "dEQP-GLES31.functional.image_load_store.b"
#define VkglTestCase_011919_2 "uffer.format_reinterpret.r32ui_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011919, VkglTestCase_011919_1, VkglTestCase_011919_2);

#define VkglTestCase_011920_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011920_2 "buffer.format_reinterpret.rgba32i_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011920, VkglTestCase_011920_1, VkglTestCase_011920_2);

#define VkglTestCase_011921_1 "dEQP-GLES31.functional.image_load_store.b"
#define VkglTestCase_011921_2 "uffer.format_reinterpret.rgba32i_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011921, VkglTestCase_011921_1, VkglTestCase_011921_2);

#define VkglTestCase_011922_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011922_2 "buffer.format_reinterpret.rgba16i_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011922, VkglTestCase_011922_1, VkglTestCase_011922_2);

#define VkglTestCase_011923_1 "dEQP-GLES31.functional.image_load_store.b"
#define VkglTestCase_011923_2 "uffer.format_reinterpret.rgba16i_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011923, VkglTestCase_011923_1, VkglTestCase_011923_2);

#define VkglTestCase_011924_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011924_2 "e.buffer.format_reinterpret.rgba8i_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011924, VkglTestCase_011924_1, VkglTestCase_011924_2);

#define VkglTestCase_011925_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011925_2 "buffer.format_reinterpret.rgba8i_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011925, VkglTestCase_011925_1, VkglTestCase_011925_2);

#define VkglTestCase_011926_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011926_2 ".buffer.format_reinterpret.rgba8i_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011926, VkglTestCase_011926_1, VkglTestCase_011926_2);

#define VkglTestCase_011927_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011927_2 "e.buffer.format_reinterpret.rgba8i_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011927, VkglTestCase_011927_1, VkglTestCase_011927_2);

#define VkglTestCase_011928_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011928_2 ".buffer.format_reinterpret.rgba8i_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011928, VkglTestCase_011928_1, VkglTestCase_011928_2);

#define VkglTestCase_011929_1 "dEQP-GLES31.functional.image_load_store.bu"
#define VkglTestCase_011929_2 "ffer.format_reinterpret.rgba8i_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011929, VkglTestCase_011929_1, VkglTestCase_011929_2);

#define VkglTestCase_011930_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011930_2 "re.buffer.format_reinterpret.r32i_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011930, VkglTestCase_011930_1, VkglTestCase_011930_2);

#define VkglTestCase_011931_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011931_2 ".buffer.format_reinterpret.r32i_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011931, VkglTestCase_011931_1, VkglTestCase_011931_2);

#define VkglTestCase_011932_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011932_2 "e.buffer.format_reinterpret.r32i_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011932, VkglTestCase_011932_1, VkglTestCase_011932_2);

#define VkglTestCase_011933_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011933_2 "e.buffer.format_reinterpret.r32i_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011933, VkglTestCase_011933_1, VkglTestCase_011933_2);

#define VkglTestCase_011934_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011934_2 "e.buffer.format_reinterpret.r32i_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011934, VkglTestCase_011934_1, VkglTestCase_011934_2);

#define VkglTestCase_011935_1 "dEQP-GLES31.functional.image_load_store.b"
#define VkglTestCase_011935_2 "uffer.format_reinterpret.r32i_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011935, VkglTestCase_011935_1, VkglTestCase_011935_2);

#define VkglTestCase_011936_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011936_2 "e.buffer.format_reinterpret.rgba8_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011936, VkglTestCase_011936_1, VkglTestCase_011936_2);

#define VkglTestCase_011937_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011937_2 ".buffer.format_reinterpret.rgba8_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011937, VkglTestCase_011937_1, VkglTestCase_011937_2);

#define VkglTestCase_011938_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011938_2 "e.buffer.format_reinterpret.rgba8_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011938, VkglTestCase_011938_1, VkglTestCase_011938_2);

#define VkglTestCase_011939_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011939_2 ".buffer.format_reinterpret.rgba8_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011939, VkglTestCase_011939_1, VkglTestCase_011939_2);

#define VkglTestCase_011940_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011940_2 "e.buffer.format_reinterpret.rgba8_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011940, VkglTestCase_011940_1, VkglTestCase_011940_2);

#define VkglTestCase_011941_1 "dEQP-GLES31.functional.image_load_store.b"
#define VkglTestCase_011941_2 "uffer.format_reinterpret.rgba8_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011941, VkglTestCase_011941_1, VkglTestCase_011941_2);
