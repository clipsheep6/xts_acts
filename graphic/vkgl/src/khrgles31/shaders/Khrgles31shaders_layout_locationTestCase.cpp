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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003469_1 "KHR-GLES31.shaders.lay"
#define VkglTestCase_003469_2 "out_location.sampler_2d"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003469, VkglTestCase_003469_1, VkglTestCase_003469_2);

#define VkglTestCase_003470_1 "KHR-GLES31.shaders.lay"
#define VkglTestCase_003470_2 "out_location.sampler_3d"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003470, VkglTestCase_003470_1, VkglTestCase_003470_2);

#define VkglTestCase_003471_1 "KHR-GLES31.shaders.layo"
#define VkglTestCase_003471_2 "ut_location.sampler_cube"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003471, VkglTestCase_003471_1, VkglTestCase_003471_2);

#define VkglTestCase_003472_1 "KHR-GLES31.shaders.layout_l"
#define VkglTestCase_003472_2 "ocation.sampler_cube_shadow"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003472, VkglTestCase_003472_1, VkglTestCase_003472_2);

#define VkglTestCase_003473_1 "KHR-GLES31.shaders.layout_"
#define VkglTestCase_003473_2 "location.sampler_2d_shadow"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003473, VkglTestCase_003473_1, VkglTestCase_003473_2);

#define VkglTestCase_003474_1 "KHR-GLES31.shaders.layout"
#define VkglTestCase_003474_2 "_location.sampler_2d_array"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003474, VkglTestCase_003474_1, VkglTestCase_003474_2);

#define VkglTestCase_003475_1 "KHR-GLES31.shaders.layout_loc"
#define VkglTestCase_003475_2 "ation.sampler_2d_array_shadow"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003475, VkglTestCase_003475_1, VkglTestCase_003475_2);

#define VkglTestCase_003476_1 "KHR-GLES31.shaders.layo"
#define VkglTestCase_003476_2 "ut_location.isampler_2d"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003476, VkglTestCase_003476_1, VkglTestCase_003476_2);

#define VkglTestCase_003477_1 "KHR-GLES31.shaders.layo"
#define VkglTestCase_003477_2 "ut_location.isampler_3d"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003477, VkglTestCase_003477_1, VkglTestCase_003477_2);

#define VkglTestCase_003478_1 "KHR-GLES31.shaders.layou"
#define VkglTestCase_003478_2 "t_location.isampler_cube"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003478, VkglTestCase_003478_1, VkglTestCase_003478_2);

#define VkglTestCase_003479_1 "KHR-GLES31.shaders.layout_"
#define VkglTestCase_003479_2 "location.isampler_2d_array"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003479, VkglTestCase_003479_1, VkglTestCase_003479_2);

#define VkglTestCase_003480_1 "KHR-GLES31.shaders.layo"
#define VkglTestCase_003480_2 "ut_location.usampler_2d"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003480, VkglTestCase_003480_1, VkglTestCase_003480_2);

#define VkglTestCase_003481_1 "KHR-GLES31.shaders.layo"
#define VkglTestCase_003481_2 "ut_location.usampler_3d"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003481, VkglTestCase_003481_1, VkglTestCase_003481_2);

#define VkglTestCase_003482_1 "KHR-GLES31.shaders.layou"
#define VkglTestCase_003482_2 "t_location.usampler_cube"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003482, VkglTestCase_003482_1, VkglTestCase_003482_2);

#define VkglTestCase_003483_1 "KHR-GLES31.shaders.layout_"
#define VkglTestCase_003483_2 "location.usampler_2d_array"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003483, VkglTestCase_003483_1, VkglTestCase_003483_2);

#define VkglTestCase_003484_1 "KHR-GLES31.shaders.la"
#define VkglTestCase_003484_2 "yout_location.image_2d"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003484, VkglTestCase_003484_1, VkglTestCase_003484_2);

#define VkglTestCase_003485_1 "KHR-GLES31.shaders.lay"
#define VkglTestCase_003485_2 "out_location.iimage_2d"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003485, VkglTestCase_003485_1, VkglTestCase_003485_2);

#define VkglTestCase_003486_1 "KHR-GLES31.shaders.lay"
#define VkglTestCase_003486_2 "out_location.uimage_2d"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003486, VkglTestCase_003486_1, VkglTestCase_003486_2);

#define VkglTestCase_003487_1 "KHR-GLES31.shaders.la"
#define VkglTestCase_003487_2 "yout_location.image_3d"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003487, VkglTestCase_003487_1, VkglTestCase_003487_2);

#define VkglTestCase_003488_1 "KHR-GLES31.shaders.lay"
#define VkglTestCase_003488_2 "out_location.iimage_3d"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003488, VkglTestCase_003488_1, VkglTestCase_003488_2);

#define VkglTestCase_003489_1 "KHR-GLES31.shaders.lay"
#define VkglTestCase_003489_2 "out_location.uimage_3d"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003489, VkglTestCase_003489_1, VkglTestCase_003489_2);

#define VkglTestCase_003490_1 "KHR-GLES31.shaders.lay"
#define VkglTestCase_003490_2 "out_location.image_cube"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003490, VkglTestCase_003490_1, VkglTestCase_003490_2);

#define VkglTestCase_003491_1 "KHR-GLES31.shaders.layo"
#define VkglTestCase_003491_2 "ut_location.iimage_cube"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003491, VkglTestCase_003491_1, VkglTestCase_003491_2);

#define VkglTestCase_003492_1 "KHR-GLES31.shaders.layo"
#define VkglTestCase_003492_2 "ut_location.uimage_cube"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003492, VkglTestCase_003492_1, VkglTestCase_003492_2);

#define VkglTestCase_003493_1 "KHR-GLES31.shaders.layou"
#define VkglTestCase_003493_2 "t_location.image_2d_array"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003493, VkglTestCase_003493_1, VkglTestCase_003493_2);

#define VkglTestCase_003494_1 "KHR-GLES31.shaders.layout"
#define VkglTestCase_003494_2 "_location.iimage_2d_array"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003494, VkglTestCase_003494_1, VkglTestCase_003494_2);

#define VkglTestCase_003495_1 "KHR-GLES31.shaders.layout"
#define VkglTestCase_003495_2 "_location.uimage_2d_array"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003495, VkglTestCase_003495_1, VkglTestCase_003495_2);

#define VkglTestCase_003496_1 "KHR-GLES31.shaders.layou"
#define VkglTestCase_003496_2 "t_location.invalid_cases"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003496, VkglTestCase_003496_1, VkglTestCase_003496_2);
