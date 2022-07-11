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
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002040_1 "KHR-GLES31.core.shader_imag"
#define VkglTestCase_002040_2 "e_size.basic-nonMS-vs-float"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002040, VkglTestCase_002040_1, VkglTestCase_002040_2);

#define VkglTestCase_002041_1 "KHR-GLES31.core.shader_ima"
#define VkglTestCase_002041_2 "ge_size.basic-nonMS-vs-int"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002041, VkglTestCase_002041_1, VkglTestCase_002041_2);

#define VkglTestCase_002042_1 "KHR-GLES31.core.shader_ima"
#define VkglTestCase_002042_2 "ge_size.basic-nonMS-vs-uint"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002042, VkglTestCase_002042_1, VkglTestCase_002042_2);

#define VkglTestCase_002043_1 "KHR-GLES31.core.shader_imag"
#define VkglTestCase_002043_2 "e_size.basic-nonMS-fs-float"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002043, VkglTestCase_002043_1, VkglTestCase_002043_2);

#define VkglTestCase_002044_1 "KHR-GLES31.core.shader_ima"
#define VkglTestCase_002044_2 "ge_size.basic-nonMS-fs-int"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002044, VkglTestCase_002044_1, VkglTestCase_002044_2);

#define VkglTestCase_002045_1 "KHR-GLES31.core.shader_ima"
#define VkglTestCase_002045_2 "ge_size.basic-nonMS-fs-uint"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002045, VkglTestCase_002045_1, VkglTestCase_002045_2);

#define VkglTestCase_002046_1 "KHR-GLES31.core.shader_imag"
#define VkglTestCase_002046_2 "e_size.basic-nonMS-cs-float"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002046, VkglTestCase_002046_1, VkglTestCase_002046_2);

#define VkglTestCase_002047_1 "KHR-GLES31.core.shader_ima"
#define VkglTestCase_002047_2 "ge_size.basic-nonMS-cs-int"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002047, VkglTestCase_002047_1, VkglTestCase_002047_2);

#define VkglTestCase_002048_1 "KHR-GLES31.core.shader_ima"
#define VkglTestCase_002048_2 "ge_size.basic-nonMS-cs-uint"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002048, VkglTestCase_002048_1, VkglTestCase_002048_2);

#define VkglTestCase_002049_1 "KHR-GLES31.core.shader_image"
#define VkglTestCase_002049_2 "_size.advanced-nonMS-vs-float"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002049, VkglTestCase_002049_1, VkglTestCase_002049_2);

#define VkglTestCase_002050_1 "KHR-GLES31.core.shader_imag"
#define VkglTestCase_002050_2 "e_size.advanced-nonMS-vs-int"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002050, VkglTestCase_002050_1, VkglTestCase_002050_2);

#define VkglTestCase_002051_1 "KHR-GLES31.core.shader_image"
#define VkglTestCase_002051_2 "_size.advanced-nonMS-vs-uint"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002051, VkglTestCase_002051_1, VkglTestCase_002051_2);

#define VkglTestCase_002052_1 "KHR-GLES31.core.shader_image"
#define VkglTestCase_002052_2 "_size.advanced-nonMS-fs-float"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002052, VkglTestCase_002052_1, VkglTestCase_002052_2);

#define VkglTestCase_002053_1 "KHR-GLES31.core.shader_imag"
#define VkglTestCase_002053_2 "e_size.advanced-nonMS-fs-int"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002053, VkglTestCase_002053_1, VkglTestCase_002053_2);

#define VkglTestCase_002054_1 "KHR-GLES31.core.shader_image"
#define VkglTestCase_002054_2 "_size.advanced-nonMS-fs-uint"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002054, VkglTestCase_002054_1, VkglTestCase_002054_2);

#define VkglTestCase_002055_1 "KHR-GLES31.core.shader_image"
#define VkglTestCase_002055_2 "_size.advanced-nonMS-cs-float"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002055, VkglTestCase_002055_1, VkglTestCase_002055_2);

#define VkglTestCase_002056_1 "KHR-GLES31.core.shader_imag"
#define VkglTestCase_002056_2 "e_size.advanced-nonMS-cs-int"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002056, VkglTestCase_002056_1, VkglTestCase_002056_2);

#define VkglTestCase_002057_1 "KHR-GLES31.core.shader_image"
#define VkglTestCase_002057_2 "_size.advanced-nonMS-cs-uint"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002057, VkglTestCase_002057_1, VkglTestCase_002057_2);

#define VkglTestCase_002058_1 "KHR-GLES31.core.shader_imag"
#define VkglTestCase_002058_2 "e_size.negative-compileTime"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002058, VkglTestCase_002058_1, VkglTestCase_002058_2);
