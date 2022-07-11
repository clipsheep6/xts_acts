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

#define VkglTestCase_025964_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025964_2 "ewclass_64_bits.rgba16f_rg32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025964, VkglTestCase_025964_1, VkglTestCase_025964_2);

#define VkglTestCase_025965_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025965_2 "ewclass_64_bits.rgba16f_rg32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025965, VkglTestCase_025965_1, VkglTestCase_025965_2);

#define VkglTestCase_025966_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025966_2 "iewclass_64_bits.rgba16f_rg32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025966, VkglTestCase_025966_1, VkglTestCase_025966_2);

#define VkglTestCase_025967_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025967_2 "lass_64_bits.rgba16f_rg32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025967, VkglTestCase_025967_1, VkglTestCase_025967_2);

#define VkglTestCase_025968_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025968_2 "class_64_bits.rgba16f_rg32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025968, VkglTestCase_025968_1, VkglTestCase_025968_2);

#define VkglTestCase_025969_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025969_2 "ewclass_64_bits.rgba16f_rg32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025969, VkglTestCase_025969_1, VkglTestCase_025969_2);

#define VkglTestCase_025970_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025970_2 "ewclass_64_bits.rgba16f_rg32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025970, VkglTestCase_025970_1, VkglTestCase_025970_2);

#define VkglTestCase_025971_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025971_2 "iewclass_64_bits.rgba16f_rg32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025971, VkglTestCase_025971_1, VkglTestCase_025971_2);

#define VkglTestCase_025972_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025972_2 "lass_64_bits.rgba16f_rg32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025972, VkglTestCase_025972_1, VkglTestCase_025972_2);

#define VkglTestCase_025973_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025973_2 "class_64_bits.rgba16f_rg32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025973, VkglTestCase_025973_1, VkglTestCase_025973_2);

#define VkglTestCase_025974_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025974_2 "iewclass_64_bits.rgba16f_rg32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025974, VkglTestCase_025974_1, VkglTestCase_025974_2);

#define VkglTestCase_025975_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025975_2 "iewclass_64_bits.rgba16f_rg32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025975, VkglTestCase_025975_1, VkglTestCase_025975_2);

#define VkglTestCase_025976_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025976_2 "viewclass_64_bits.rgba16f_rg32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025976, VkglTestCase_025976_1, VkglTestCase_025976_2);

#define VkglTestCase_025977_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025977_2 "class_64_bits.rgba16f_rg32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025977, VkglTestCase_025977_1, VkglTestCase_025977_2);

#define VkglTestCase_025978_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025978_2 "wclass_64_bits.rgba16f_rg32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025978, VkglTestCase_025978_1, VkglTestCase_025978_2);

#define VkglTestCase_025979_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025979_2 "lass_64_bits.rgba16f_rg32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025979, VkglTestCase_025979_1, VkglTestCase_025979_2);

#define VkglTestCase_025980_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025980_2 "lass_64_bits.rgba16f_rg32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025980, VkglTestCase_025980_1, VkglTestCase_025980_2);

#define VkglTestCase_025981_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025981_2 "class_64_bits.rgba16f_rg32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025981, VkglTestCase_025981_1, VkglTestCase_025981_2);

#define VkglTestCase_025982_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025982_2 "s_64_bits.rgba16f_rg32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025982, VkglTestCase_025982_1, VkglTestCase_025982_2);

#define VkglTestCase_025983_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025983_2 "ss_64_bits.rgba16f_rg32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025983, VkglTestCase_025983_1, VkglTestCase_025983_2);
