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

#define VkglTestCase_025248_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025248_2 "class_128_bits.rgba32f_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025248, VkglTestCase_025248_1, VkglTestCase_025248_2);

#define VkglTestCase_025249_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025249_2 "class_128_bits.rgba32f_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025249, VkglTestCase_025249_1, VkglTestCase_025249_2);

#define VkglTestCase_025250_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025250_2 "wclass_128_bits.rgba32f_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025250, VkglTestCase_025250_1, VkglTestCase_025250_2);

#define VkglTestCase_025251_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025251_2 "ss_128_bits.rgba32f_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025251, VkglTestCase_025251_1, VkglTestCase_025251_2);

#define VkglTestCase_025252_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025252_2 "class_128_bits.rgba32f_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025252, VkglTestCase_025252_1, VkglTestCase_025252_2);

#define VkglTestCase_025253_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025253_2 "class_128_bits.rgba32f_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025253, VkglTestCase_025253_1, VkglTestCase_025253_2);

#define VkglTestCase_025254_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025254_2 "wclass_128_bits.rgba32f_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025254, VkglTestCase_025254_1, VkglTestCase_025254_2);

#define VkglTestCase_025255_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025255_2 "ss_128_bits.rgba32f_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025255, VkglTestCase_025255_1, VkglTestCase_025255_2);

#define VkglTestCase_025256_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025256_2 "wclass_128_bits.rgba32f_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025256, VkglTestCase_025256_1, VkglTestCase_025256_2);

#define VkglTestCase_025257_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025257_2 "wclass_128_bits.rgba32f_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025257, VkglTestCase_025257_1, VkglTestCase_025257_2);

#define VkglTestCase_025258_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025258_2 "ewclass_128_bits.rgba32f_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025258, VkglTestCase_025258_1, VkglTestCase_025258_2);

#define VkglTestCase_025259_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025259_2 "ass_128_bits.rgba32f_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025259, VkglTestCase_025259_1, VkglTestCase_025259_2);

#define VkglTestCase_025260_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025260_2 "ss_128_bits.rgba32f_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025260, VkglTestCase_025260_1, VkglTestCase_025260_2);

#define VkglTestCase_025261_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025261_2 "ss_128_bits.rgba32f_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025261, VkglTestCase_025261_1, VkglTestCase_025261_2);

#define VkglTestCase_025262_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025262_2 "ass_128_bits.rgba32f_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025262, VkglTestCase_025262_1, VkglTestCase_025262_2);

#define VkglTestCase_025263_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_025263_2 "128_bits.rgba32f_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025263, VkglTestCase_025263_1, VkglTestCase_025263_2);
