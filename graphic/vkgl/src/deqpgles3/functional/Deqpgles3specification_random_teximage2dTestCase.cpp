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
#include "../ActsDeqpgles30026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025810_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025810_2 "cification.random_teximage2d.2d_0"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025810, VkglTestCase_025810_1, VkglTestCase_025810_2);

#define VkglTestCase_025811_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025811_2 "cification.random_teximage2d.2d_1"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025811, VkglTestCase_025811_1, VkglTestCase_025811_2);

#define VkglTestCase_025812_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025812_2 "cification.random_teximage2d.2d_2"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025812, VkglTestCase_025812_1, VkglTestCase_025812_2);

#define VkglTestCase_025813_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025813_2 "cification.random_teximage2d.2d_3"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025813, VkglTestCase_025813_1, VkglTestCase_025813_2);

#define VkglTestCase_025814_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025814_2 "cification.random_teximage2d.2d_4"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025814, VkglTestCase_025814_1, VkglTestCase_025814_2);

#define VkglTestCase_025815_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025815_2 "cification.random_teximage2d.2d_5"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025815, VkglTestCase_025815_1, VkglTestCase_025815_2);

#define VkglTestCase_025816_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025816_2 "cification.random_teximage2d.2d_6"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025816, VkglTestCase_025816_1, VkglTestCase_025816_2);

#define VkglTestCase_025817_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025817_2 "cification.random_teximage2d.2d_7"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025817, VkglTestCase_025817_1, VkglTestCase_025817_2);

#define VkglTestCase_025818_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025818_2 "cification.random_teximage2d.2d_8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025818, VkglTestCase_025818_1, VkglTestCase_025818_2);

#define VkglTestCase_025819_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025819_2 "cification.random_teximage2d.2d_9"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025819, VkglTestCase_025819_1, VkglTestCase_025819_2);

#define VkglTestCase_025820_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025820_2 "ification.random_teximage2d.cube_0"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025820, VkglTestCase_025820_1, VkglTestCase_025820_2);

#define VkglTestCase_025821_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025821_2 "ification.random_teximage2d.cube_1"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025821, VkglTestCase_025821_1, VkglTestCase_025821_2);

#define VkglTestCase_025822_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025822_2 "ification.random_teximage2d.cube_2"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025822, VkglTestCase_025822_1, VkglTestCase_025822_2);

#define VkglTestCase_025823_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025823_2 "ification.random_teximage2d.cube_3"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025823, VkglTestCase_025823_1, VkglTestCase_025823_2);

#define VkglTestCase_025824_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025824_2 "ification.random_teximage2d.cube_4"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025824, VkglTestCase_025824_1, VkglTestCase_025824_2);

#define VkglTestCase_025825_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025825_2 "ification.random_teximage2d.cube_5"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025825, VkglTestCase_025825_1, VkglTestCase_025825_2);

#define VkglTestCase_025826_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025826_2 "ification.random_teximage2d.cube_6"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025826, VkglTestCase_025826_1, VkglTestCase_025826_2);

#define VkglTestCase_025827_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025827_2 "ification.random_teximage2d.cube_7"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025827, VkglTestCase_025827_1, VkglTestCase_025827_2);

#define VkglTestCase_025828_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025828_2 "ification.random_teximage2d.cube_8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025828, VkglTestCase_025828_1, VkglTestCase_025828_2);

#define VkglTestCase_025829_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025829_2 "ification.random_teximage2d.cube_9"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025829, VkglTestCase_025829_1, VkglTestCase_025829_2);
