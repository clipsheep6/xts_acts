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

#define VkglTestCase_025374_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025374_2 "class_128_bits.rgba32ui_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025374, VkglTestCase_025374_1, VkglTestCase_025374_2);

#define VkglTestCase_025375_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025375_2 "class_128_bits.rgba32ui_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025375, VkglTestCase_025375_1, VkglTestCase_025375_2);

#define VkglTestCase_025376_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025376_2 "wclass_128_bits.rgba32ui_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025376, VkglTestCase_025376_1, VkglTestCase_025376_2);

#define VkglTestCase_025377_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025377_2 "ss_128_bits.rgba32ui_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025377, VkglTestCase_025377_1, VkglTestCase_025377_2);

#define VkglTestCase_025378_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025378_2 "class_128_bits.rgba32ui_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025378, VkglTestCase_025378_1, VkglTestCase_025378_2);

#define VkglTestCase_025379_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025379_2 "class_128_bits.rgba32ui_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025379, VkglTestCase_025379_1, VkglTestCase_025379_2);

#define VkglTestCase_025380_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025380_2 "wclass_128_bits.rgba32ui_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025380, VkglTestCase_025380_1, VkglTestCase_025380_2);

#define VkglTestCase_025381_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025381_2 "ss_128_bits.rgba32ui_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025381, VkglTestCase_025381_1, VkglTestCase_025381_2);

#define VkglTestCase_025382_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025382_2 "wclass_128_bits.rgba32ui_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025382, VkglTestCase_025382_1, VkglTestCase_025382_2);

#define VkglTestCase_025383_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025383_2 "wclass_128_bits.rgba32ui_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025383, VkglTestCase_025383_1, VkglTestCase_025383_2);

#define VkglTestCase_025384_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025384_2 "ewclass_128_bits.rgba32ui_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025384, VkglTestCase_025384_1, VkglTestCase_025384_2);

#define VkglTestCase_025385_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025385_2 "ass_128_bits.rgba32ui_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025385, VkglTestCase_025385_1, VkglTestCase_025385_2);

#define VkglTestCase_025386_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025386_2 "ss_128_bits.rgba32ui_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025386, VkglTestCase_025386_1, VkglTestCase_025386_2);

#define VkglTestCase_025387_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025387_2 "ss_128_bits.rgba32ui_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025387, VkglTestCase_025387_1, VkglTestCase_025387_2);

#define VkglTestCase_025388_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025388_2 "ass_128_bits.rgba32ui_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025388, VkglTestCase_025388_1, VkglTestCase_025388_2);

#define VkglTestCase_025389_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_025389_2 "128_bits.rgba32ui_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025389, VkglTestCase_025389_1, VkglTestCase_025389_2);

#define VkglTestCase_025390_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025390_2 "ass_128_bits.rgba32ui_rgba32f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025390, VkglTestCase_025390_1, VkglTestCase_025390_2);

#define VkglTestCase_025391_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025391_2 "ass_128_bits.rgba32ui_rgba32f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025391, VkglTestCase_025391_1, VkglTestCase_025391_2);

#define VkglTestCase_025392_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025392_2 "lass_128_bits.rgba32ui_rgba32f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025392, VkglTestCase_025392_1, VkglTestCase_025392_2);

#define VkglTestCase_025393_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_025393_2 "_128_bits.rgba32ui_rgba32f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025393, VkglTestCase_025393_1, VkglTestCase_025393_2);
