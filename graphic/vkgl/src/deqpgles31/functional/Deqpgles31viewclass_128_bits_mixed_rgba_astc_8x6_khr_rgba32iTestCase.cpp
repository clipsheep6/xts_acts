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
#include "../ActsDeqpgles310037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036559_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036559_2 "ts_mixed.rgba_astc_8x6_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036559, VkglTestCase_036559_1, VkglTestCase_036559_2);

#define VkglTestCase_036560_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036560_2 "ts_mixed.rgba_astc_8x6_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036560, VkglTestCase_036560_1, VkglTestCase_036560_2);

#define VkglTestCase_036561_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036561_2 "its_mixed.rgba_astc_8x6_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036561, VkglTestCase_036561_1, VkglTestCase_036561_2);

#define VkglTestCase_036562_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036562_2 "mixed.rgba_astc_8x6_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036562, VkglTestCase_036562_1, VkglTestCase_036562_2);

#define VkglTestCase_036563_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036563_2 "_mixed.rgba_astc_8x6_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036563, VkglTestCase_036563_1, VkglTestCase_036563_2);

#define VkglTestCase_036564_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036564_2 "ts_mixed.rgba_astc_8x6_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036564, VkglTestCase_036564_1, VkglTestCase_036564_2);

#define VkglTestCase_036565_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036565_2 "ts_mixed.rgba_astc_8x6_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036565, VkglTestCase_036565_1, VkglTestCase_036565_2);

#define VkglTestCase_036566_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036566_2 "its_mixed.rgba_astc_8x6_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036566, VkglTestCase_036566_1, VkglTestCase_036566_2);

#define VkglTestCase_036567_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036567_2 "mixed.rgba_astc_8x6_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036567, VkglTestCase_036567_1, VkglTestCase_036567_2);

#define VkglTestCase_036568_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036568_2 "_mixed.rgba_astc_8x6_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036568, VkglTestCase_036568_1, VkglTestCase_036568_2);

#define VkglTestCase_036569_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036569_2 "its_mixed.rgba_astc_8x6_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036569, VkglTestCase_036569_1, VkglTestCase_036569_2);

#define VkglTestCase_036570_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036570_2 "its_mixed.rgba_astc_8x6_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036570, VkglTestCase_036570_1, VkglTestCase_036570_2);

#define VkglTestCase_036571_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036571_2 "bits_mixed.rgba_astc_8x6_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036571, VkglTestCase_036571_1, VkglTestCase_036571_2);

#define VkglTestCase_036572_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036572_2 "_mixed.rgba_astc_8x6_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036572, VkglTestCase_036572_1, VkglTestCase_036572_2);

#define VkglTestCase_036573_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036573_2 "s_mixed.rgba_astc_8x6_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036573, VkglTestCase_036573_1, VkglTestCase_036573_2);

#define VkglTestCase_036574_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036574_2 "mixed.rgba_astc_8x6_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036574, VkglTestCase_036574_1, VkglTestCase_036574_2);

#define VkglTestCase_036575_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036575_2 "mixed.rgba_astc_8x6_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036575, VkglTestCase_036575_1, VkglTestCase_036575_2);

#define VkglTestCase_036576_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036576_2 "_mixed.rgba_astc_8x6_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036576, VkglTestCase_036576_1, VkglTestCase_036576_2);

#define VkglTestCase_036577_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036577_2 "ed.rgba_astc_8x6_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036577, VkglTestCase_036577_1, VkglTestCase_036577_2);

#define VkglTestCase_036578_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036578_2 "xed.rgba_astc_8x6_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036578, VkglTestCase_036578_1, VkglTestCase_036578_2);
