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

#define VkglTestCase_032842_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032842_2 ".viewclass_8_bits.r8i_r8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032842, VkglTestCase_032842_1, VkglTestCase_032842_2);

#define VkglTestCase_032843_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032843_2 ".viewclass_8_bits.r8i_r8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032843, VkglTestCase_032843_1, VkglTestCase_032843_2);

#define VkglTestCase_032844_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032844_2 "d.viewclass_8_bits.r8i_r8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032844, VkglTestCase_032844_1, VkglTestCase_032844_2);

#define VkglTestCase_032845_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032845_2 "ewclass_8_bits.r8i_r8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032845, VkglTestCase_032845_1, VkglTestCase_032845_2);

#define VkglTestCase_032846_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032846_2 "viewclass_8_bits.r8i_r8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032846, VkglTestCase_032846_1, VkglTestCase_032846_2);

#define VkglTestCase_032847_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032847_2 ".viewclass_8_bits.r8i_r8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032847, VkglTestCase_032847_1, VkglTestCase_032847_2);

#define VkglTestCase_032848_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032848_2 ".viewclass_8_bits.r8i_r8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032848, VkglTestCase_032848_1, VkglTestCase_032848_2);

#define VkglTestCase_032849_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032849_2 "d.viewclass_8_bits.r8i_r8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032849, VkglTestCase_032849_1, VkglTestCase_032849_2);

#define VkglTestCase_032850_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032850_2 "ewclass_8_bits.r8i_r8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032850, VkglTestCase_032850_1, VkglTestCase_032850_2);

#define VkglTestCase_032851_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032851_2 "viewclass_8_bits.r8i_r8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032851, VkglTestCase_032851_1, VkglTestCase_032851_2);

#define VkglTestCase_032852_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032852_2 "d.viewclass_8_bits.r8i_r8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032852, VkglTestCase_032852_1, VkglTestCase_032852_2);

#define VkglTestCase_032853_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032853_2 "d.viewclass_8_bits.r8i_r8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032853, VkglTestCase_032853_1, VkglTestCase_032853_2);

#define VkglTestCase_032854_1 "dEQP-GLES31.functional.copy_image.non_compress"
#define VkglTestCase_032854_2 "ed.viewclass_8_bits.r8i_r8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032854, VkglTestCase_032854_1, VkglTestCase_032854_2);

#define VkglTestCase_032855_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032855_2 "iewclass_8_bits.r8i_r8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032855, VkglTestCase_032855_1, VkglTestCase_032855_2);

#define VkglTestCase_032856_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032856_2 ".viewclass_8_bits.r8i_r8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032856, VkglTestCase_032856_1, VkglTestCase_032856_2);

#define VkglTestCase_032857_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032857_2 "ewclass_8_bits.r8i_r8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032857, VkglTestCase_032857_1, VkglTestCase_032857_2);

#define VkglTestCase_032858_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032858_2 "ewclass_8_bits.r8i_r8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032858, VkglTestCase_032858_1, VkglTestCase_032858_2);

#define VkglTestCase_032859_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032859_2 "iewclass_8_bits.r8i_r8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032859, VkglTestCase_032859_1, VkglTestCase_032859_2);

#define VkglTestCase_032860_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032860_2 "lass_8_bits.r8i_r8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032860, VkglTestCase_032860_1, VkglTestCase_032860_2);

#define VkglTestCase_032861_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032861_2 "wclass_8_bits.r8i_r8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032861, VkglTestCase_032861_1, VkglTestCase_032861_2);

#define VkglTestCase_032862_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032862_2 "viewclass_8_bits.r8i_r8i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032862, VkglTestCase_032862_1, VkglTestCase_032862_2);

#define VkglTestCase_032863_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032863_2 "viewclass_8_bits.r8i_r8i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032863, VkglTestCase_032863_1, VkglTestCase_032863_2);

#define VkglTestCase_032864_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032864_2 ".viewclass_8_bits.r8i_r8i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032864, VkglTestCase_032864_1, VkglTestCase_032864_2);

#define VkglTestCase_032865_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032865_2 "wclass_8_bits.r8i_r8i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032865, VkglTestCase_032865_1, VkglTestCase_032865_2);

#define VkglTestCase_032866_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032866_2 "ewclass_8_bits.r8i_r8i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032866, VkglTestCase_032866_1, VkglTestCase_032866_2);
