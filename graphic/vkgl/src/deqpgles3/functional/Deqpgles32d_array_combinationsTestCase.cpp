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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30025TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_024429_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024429_2 "rray.combinations.nearest_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024429, VkglTestCase_024429_1, VkglTestCase_024429_2);

#define VkglTestCase_024430_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024430_2 "ray.combinations.nearest_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024430, VkglTestCase_024430_1, VkglTestCase_024430_2);

#define VkglTestCase_024431_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024431_2 "ray.combinations.nearest_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024431, VkglTestCase_024431_1, VkglTestCase_024431_2);

#define VkglTestCase_024432_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024432_2 "ray.combinations.nearest_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024432, VkglTestCase_024432_1, VkglTestCase_024432_2);

#define VkglTestCase_024433_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024433_2 "ray.combinations.nearest_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024433, VkglTestCase_024433_1, VkglTestCase_024433_2);

#define VkglTestCase_024434_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024434_2 "ray.combinations.nearest_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024434, VkglTestCase_024434_1, VkglTestCase_024434_2);

#define VkglTestCase_024435_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024435_2 "ray.combinations.nearest_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024435, VkglTestCase_024435_1, VkglTestCase_024435_2);

#define VkglTestCase_024436_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024436_2 "ray.combinations.nearest_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024436, VkglTestCase_024436_1, VkglTestCase_024436_2);

#define VkglTestCase_024437_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024437_2 "ray.combinations.nearest_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024437, VkglTestCase_024437_1, VkglTestCase_024437_2);

#define VkglTestCase_024438_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024438_2 "rray.combinations.nearest_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024438, VkglTestCase_024438_1, VkglTestCase_024438_2);

#define VkglTestCase_024439_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024439_2 "rray.combinations.nearest_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024439, VkglTestCase_024439_1, VkglTestCase_024439_2);

#define VkglTestCase_024440_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024440_2 "rray.combinations.nearest_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024440, VkglTestCase_024440_1, VkglTestCase_024440_2);

#define VkglTestCase_024441_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024441_2 "rray.combinations.nearest_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024441, VkglTestCase_024441_1, VkglTestCase_024441_2);

#define VkglTestCase_024442_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024442_2 "ray.combinations.nearest_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024442, VkglTestCase_024442_1, VkglTestCase_024442_2);

#define VkglTestCase_024443_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024443_2 "ray.combinations.nearest_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024443, VkglTestCase_024443_1, VkglTestCase_024443_2);

#define VkglTestCase_024444_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024444_2 "rray.combinations.nearest_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024444, VkglTestCase_024444_1, VkglTestCase_024444_2);

#define VkglTestCase_024445_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024445_2 "ray.combinations.nearest_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024445, VkglTestCase_024445_1, VkglTestCase_024445_2);

#define VkglTestCase_024446_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024446_2 "ray.combinations.nearest_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024446, VkglTestCase_024446_1, VkglTestCase_024446_2);

#define VkglTestCase_024447_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024447_2 "rray.combinations.linear_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024447, VkglTestCase_024447_1, VkglTestCase_024447_2);

#define VkglTestCase_024448_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024448_2 "rray.combinations.linear_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024448, VkglTestCase_024448_1, VkglTestCase_024448_2);

#define VkglTestCase_024449_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024449_2 "rray.combinations.linear_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024449, VkglTestCase_024449_1, VkglTestCase_024449_2);

#define VkglTestCase_024450_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024450_2 "rray.combinations.linear_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024450, VkglTestCase_024450_1, VkglTestCase_024450_2);

#define VkglTestCase_024451_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024451_2 "ray.combinations.linear_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024451, VkglTestCase_024451_1, VkglTestCase_024451_2);

#define VkglTestCase_024452_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024452_2 "ray.combinations.linear_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024452, VkglTestCase_024452_1, VkglTestCase_024452_2);

#define VkglTestCase_024453_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024453_2 "rray.combinations.linear_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024453, VkglTestCase_024453_1, VkglTestCase_024453_2);

#define VkglTestCase_024454_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024454_2 "ray.combinations.linear_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024454, VkglTestCase_024454_1, VkglTestCase_024454_2);

#define VkglTestCase_024455_1 "dEQP-GLES3.functional.texture.filtering.2d_ar"
#define VkglTestCase_024455_2 "ray.combinations.linear_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024455, VkglTestCase_024455_1, VkglTestCase_024455_2);

#define VkglTestCase_024456_1 "dEQP-GLES3.functional.texture.filtering.2d_"
#define VkglTestCase_024456_2 "array.combinations.linear_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024456, VkglTestCase_024456_1, VkglTestCase_024456_2);

#define VkglTestCase_024457_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024457_2 "rray.combinations.linear_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024457, VkglTestCase_024457_1, VkglTestCase_024457_2);

#define VkglTestCase_024458_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024458_2 "rray.combinations.linear_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024458, VkglTestCase_024458_1, VkglTestCase_024458_2);

#define VkglTestCase_024459_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024459_2 "rray.combinations.linear_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024459, VkglTestCase_024459_1, VkglTestCase_024459_2);

#define VkglTestCase_024460_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024460_2 "rray.combinations.linear_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024460, VkglTestCase_024460_1, VkglTestCase_024460_2);

#define VkglTestCase_024461_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024461_2 "rray.combinations.linear_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024461, VkglTestCase_024461_1, VkglTestCase_024461_2);

#define VkglTestCase_024462_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024462_2 "rray.combinations.linear_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024462, VkglTestCase_024462_1, VkglTestCase_024462_2);

#define VkglTestCase_024463_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024463_2 "rray.combinations.linear_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024463, VkglTestCase_024463_1, VkglTestCase_024463_2);

#define VkglTestCase_024464_1 "dEQP-GLES3.functional.texture.filtering.2d_a"
#define VkglTestCase_024464_2 "rray.combinations.linear_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024464, VkglTestCase_024464_1, VkglTestCase_024464_2);

#define VkglTestCase_024465_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024465_2 "binations.nearest_mipmap_nearest_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024465, VkglTestCase_024465_1, VkglTestCase_024465_2);

#define VkglTestCase_024466_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024466_2 "binations.nearest_mipmap_nearest_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024466, VkglTestCase_024466_1, VkglTestCase_024466_2);

#define VkglTestCase_024467_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024467_2 "binations.nearest_mipmap_nearest_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024467, VkglTestCase_024467_1, VkglTestCase_024467_2);

#define VkglTestCase_024468_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024468_2 "binations.nearest_mipmap_nearest_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024468, VkglTestCase_024468_1, VkglTestCase_024468_2);

#define VkglTestCase_024469_1 "dEQP-GLES3.functional.texture.filtering.2d_array.comb"
#define VkglTestCase_024469_2 "inations.nearest_mipmap_nearest_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024469, VkglTestCase_024469_1, VkglTestCase_024469_2);

#define VkglTestCase_024470_1 "dEQP-GLES3.functional.texture.filtering.2d_array.comb"
#define VkglTestCase_024470_2 "inations.nearest_mipmap_nearest_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024470, VkglTestCase_024470_1, VkglTestCase_024470_2);

#define VkglTestCase_024471_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024471_2 "binations.nearest_mipmap_nearest_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024471, VkglTestCase_024471_1, VkglTestCase_024471_2);

#define VkglTestCase_024472_1 "dEQP-GLES3.functional.texture.filtering.2d_array.comb"
#define VkglTestCase_024472_2 "inations.nearest_mipmap_nearest_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024472, VkglTestCase_024472_1, VkglTestCase_024472_2);

#define VkglTestCase_024473_1 "dEQP-GLES3.functional.texture.filtering.2d_array.comb"
#define VkglTestCase_024473_2 "inations.nearest_mipmap_nearest_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024473, VkglTestCase_024473_1, VkglTestCase_024473_2);

#define VkglTestCase_024474_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024474_2 "mbinations.nearest_mipmap_nearest_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024474, VkglTestCase_024474_1, VkglTestCase_024474_2);

#define VkglTestCase_024475_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024475_2 "binations.nearest_mipmap_nearest_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024475, VkglTestCase_024475_1, VkglTestCase_024475_2);

#define VkglTestCase_024476_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024476_2 "binations.nearest_mipmap_nearest_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024476, VkglTestCase_024476_1, VkglTestCase_024476_2);

#define VkglTestCase_024477_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024477_2 "binations.nearest_mipmap_nearest_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024477, VkglTestCase_024477_1, VkglTestCase_024477_2);

#define VkglTestCase_024478_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024478_2 "binations.nearest_mipmap_nearest_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024478, VkglTestCase_024478_1, VkglTestCase_024478_2);

#define VkglTestCase_024479_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024479_2 "binations.nearest_mipmap_nearest_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024479, VkglTestCase_024479_1, VkglTestCase_024479_2);

#define VkglTestCase_024480_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024480_2 "binations.nearest_mipmap_nearest_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024480, VkglTestCase_024480_1, VkglTestCase_024480_2);

#define VkglTestCase_024481_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024481_2 "binations.nearest_mipmap_nearest_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024481, VkglTestCase_024481_1, VkglTestCase_024481_2);

#define VkglTestCase_024482_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024482_2 "binations.nearest_mipmap_nearest_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024482, VkglTestCase_024482_1, VkglTestCase_024482_2);

#define VkglTestCase_024483_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024483_2 "mbinations.linear_mipmap_nearest_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024483, VkglTestCase_024483_1, VkglTestCase_024483_2);

#define VkglTestCase_024484_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024484_2 "binations.linear_mipmap_nearest_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024484, VkglTestCase_024484_1, VkglTestCase_024484_2);

#define VkglTestCase_024485_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024485_2 "binations.linear_mipmap_nearest_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024485, VkglTestCase_024485_1, VkglTestCase_024485_2);

#define VkglTestCase_024486_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024486_2 "binations.linear_mipmap_nearest_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024486, VkglTestCase_024486_1, VkglTestCase_024486_2);

#define VkglTestCase_024487_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024487_2 "binations.linear_mipmap_nearest_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024487, VkglTestCase_024487_1, VkglTestCase_024487_2);

#define VkglTestCase_024488_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024488_2 "binations.linear_mipmap_nearest_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024488, VkglTestCase_024488_1, VkglTestCase_024488_2);

#define VkglTestCase_024489_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024489_2 "binations.linear_mipmap_nearest_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024489, VkglTestCase_024489_1, VkglTestCase_024489_2);

#define VkglTestCase_024490_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024490_2 "binations.linear_mipmap_nearest_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024490, VkglTestCase_024490_1, VkglTestCase_024490_2);

#define VkglTestCase_024491_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024491_2 "binations.linear_mipmap_nearest_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024491, VkglTestCase_024491_1, VkglTestCase_024491_2);

#define VkglTestCase_024492_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024492_2 "mbinations.linear_mipmap_nearest_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024492, VkglTestCase_024492_1, VkglTestCase_024492_2);

#define VkglTestCase_024493_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024493_2 "mbinations.linear_mipmap_nearest_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024493, VkglTestCase_024493_1, VkglTestCase_024493_2);

#define VkglTestCase_024494_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024494_2 "mbinations.linear_mipmap_nearest_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024494, VkglTestCase_024494_1, VkglTestCase_024494_2);

#define VkglTestCase_024495_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024495_2 "mbinations.linear_mipmap_nearest_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024495, VkglTestCase_024495_1, VkglTestCase_024495_2);

#define VkglTestCase_024496_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024496_2 "binations.linear_mipmap_nearest_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024496, VkglTestCase_024496_1, VkglTestCase_024496_2);

#define VkglTestCase_024497_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024497_2 "binations.linear_mipmap_nearest_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024497, VkglTestCase_024497_1, VkglTestCase_024497_2);

#define VkglTestCase_024498_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024498_2 "mbinations.linear_mipmap_nearest_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024498, VkglTestCase_024498_1, VkglTestCase_024498_2);

#define VkglTestCase_024499_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024499_2 "binations.linear_mipmap_nearest_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024499, VkglTestCase_024499_1, VkglTestCase_024499_2);

#define VkglTestCase_024500_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024500_2 "binations.linear_mipmap_nearest_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024500, VkglTestCase_024500_1, VkglTestCase_024500_2);

#define VkglTestCase_024501_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024501_2 "mbinations.nearest_mipmap_linear_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024501, VkglTestCase_024501_1, VkglTestCase_024501_2);

#define VkglTestCase_024502_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024502_2 "binations.nearest_mipmap_linear_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024502, VkglTestCase_024502_1, VkglTestCase_024502_2);

#define VkglTestCase_024503_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024503_2 "binations.nearest_mipmap_linear_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024503, VkglTestCase_024503_1, VkglTestCase_024503_2);

#define VkglTestCase_024504_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024504_2 "binations.nearest_mipmap_linear_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024504, VkglTestCase_024504_1, VkglTestCase_024504_2);

#define VkglTestCase_024505_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024505_2 "binations.nearest_mipmap_linear_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024505, VkglTestCase_024505_1, VkglTestCase_024505_2);

#define VkglTestCase_024506_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024506_2 "binations.nearest_mipmap_linear_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024506, VkglTestCase_024506_1, VkglTestCase_024506_2);

#define VkglTestCase_024507_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024507_2 "binations.nearest_mipmap_linear_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024507, VkglTestCase_024507_1, VkglTestCase_024507_2);

#define VkglTestCase_024508_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024508_2 "binations.nearest_mipmap_linear_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024508, VkglTestCase_024508_1, VkglTestCase_024508_2);

#define VkglTestCase_024509_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024509_2 "binations.nearest_mipmap_linear_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024509, VkglTestCase_024509_1, VkglTestCase_024509_2);

#define VkglTestCase_024510_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024510_2 "mbinations.nearest_mipmap_linear_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024510, VkglTestCase_024510_1, VkglTestCase_024510_2);

#define VkglTestCase_024511_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024511_2 "mbinations.nearest_mipmap_linear_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024511, VkglTestCase_024511_1, VkglTestCase_024511_2);

#define VkglTestCase_024512_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024512_2 "mbinations.nearest_mipmap_linear_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024512, VkglTestCase_024512_1, VkglTestCase_024512_2);

#define VkglTestCase_024513_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024513_2 "mbinations.nearest_mipmap_linear_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024513, VkglTestCase_024513_1, VkglTestCase_024513_2);

#define VkglTestCase_024514_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024514_2 "binations.nearest_mipmap_linear_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024514, VkglTestCase_024514_1, VkglTestCase_024514_2);

#define VkglTestCase_024515_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024515_2 "binations.nearest_mipmap_linear_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024515, VkglTestCase_024515_1, VkglTestCase_024515_2);

#define VkglTestCase_024516_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024516_2 "mbinations.nearest_mipmap_linear_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024516, VkglTestCase_024516_1, VkglTestCase_024516_2);

#define VkglTestCase_024517_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024517_2 "binations.nearest_mipmap_linear_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024517, VkglTestCase_024517_1, VkglTestCase_024517_2);

#define VkglTestCase_024518_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024518_2 "binations.nearest_mipmap_linear_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024518, VkglTestCase_024518_1, VkglTestCase_024518_2);

#define VkglTestCase_024519_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024519_2 "mbinations.linear_mipmap_linear_nearest_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024519, VkglTestCase_024519_1, VkglTestCase_024519_2);

#define VkglTestCase_024520_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024520_2 "mbinations.linear_mipmap_linear_nearest_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024520, VkglTestCase_024520_1, VkglTestCase_024520_2);

#define VkglTestCase_024521_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024521_2 "mbinations.linear_mipmap_linear_nearest_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024521, VkglTestCase_024521_1, VkglTestCase_024521_2);

#define VkglTestCase_024522_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024522_2 "mbinations.linear_mipmap_linear_nearest_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024522, VkglTestCase_024522_1, VkglTestCase_024522_2);

#define VkglTestCase_024523_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024523_2 "binations.linear_mipmap_linear_nearest_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024523, VkglTestCase_024523_1, VkglTestCase_024523_2);

#define VkglTestCase_024524_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024524_2 "binations.linear_mipmap_linear_nearest_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024524, VkglTestCase_024524_1, VkglTestCase_024524_2);

#define VkglTestCase_024525_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024525_2 "mbinations.linear_mipmap_linear_nearest_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024525, VkglTestCase_024525_1, VkglTestCase_024525_2);

#define VkglTestCase_024526_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024526_2 "binations.linear_mipmap_linear_nearest_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024526, VkglTestCase_024526_1, VkglTestCase_024526_2);

#define VkglTestCase_024527_1 "dEQP-GLES3.functional.texture.filtering.2d_array.com"
#define VkglTestCase_024527_2 "binations.linear_mipmap_linear_nearest_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024527, VkglTestCase_024527_1, VkglTestCase_024527_2);

#define VkglTestCase_024528_1 "dEQP-GLES3.functional.texture.filtering.2d_array.c"
#define VkglTestCase_024528_2 "ombinations.linear_mipmap_linear_linear_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024528, VkglTestCase_024528_1, VkglTestCase_024528_2);

#define VkglTestCase_024529_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024529_2 "mbinations.linear_mipmap_linear_linear_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024529, VkglTestCase_024529_1, VkglTestCase_024529_2);

#define VkglTestCase_024530_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024530_2 "mbinations.linear_mipmap_linear_linear_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024530, VkglTestCase_024530_1, VkglTestCase_024530_2);

#define VkglTestCase_024531_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024531_2 "mbinations.linear_mipmap_linear_linear_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024531, VkglTestCase_024531_1, VkglTestCase_024531_2);

#define VkglTestCase_024532_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024532_2 "mbinations.linear_mipmap_linear_linear_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024532, VkglTestCase_024532_1, VkglTestCase_024532_2);

#define VkglTestCase_024533_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024533_2 "mbinations.linear_mipmap_linear_linear_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024533, VkglTestCase_024533_1, VkglTestCase_024533_2);

#define VkglTestCase_024534_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024534_2 "mbinations.linear_mipmap_linear_linear_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024534, VkglTestCase_024534_1, VkglTestCase_024534_2);

#define VkglTestCase_024535_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024535_2 "mbinations.linear_mipmap_linear_linear_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024535, VkglTestCase_024535_1, VkglTestCase_024535_2);

#define VkglTestCase_024536_1 "dEQP-GLES3.functional.texture.filtering.2d_array.co"
#define VkglTestCase_024536_2 "mbinations.linear_mipmap_linear_linear_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024536, VkglTestCase_024536_1, VkglTestCase_024536_2);
