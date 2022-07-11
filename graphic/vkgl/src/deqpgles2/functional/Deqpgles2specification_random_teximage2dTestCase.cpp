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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010705_1 "dEQP-GLES2.functional.texture.spe"
#define VkglTestCase_010705_2 "cification.random_teximage2d.2d_0"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010705, VkglTestCase_010705_1, VkglTestCase_010705_2);

#define VkglTestCase_010706_1 "dEQP-GLES2.functional.texture.spe"
#define VkglTestCase_010706_2 "cification.random_teximage2d.2d_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010706, VkglTestCase_010706_1, VkglTestCase_010706_2);

#define VkglTestCase_010707_1 "dEQP-GLES2.functional.texture.spe"
#define VkglTestCase_010707_2 "cification.random_teximage2d.2d_2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010707, VkglTestCase_010707_1, VkglTestCase_010707_2);

#define VkglTestCase_010708_1 "dEQP-GLES2.functional.texture.spe"
#define VkglTestCase_010708_2 "cification.random_teximage2d.2d_3"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010708, VkglTestCase_010708_1, VkglTestCase_010708_2);

#define VkglTestCase_010709_1 "dEQP-GLES2.functional.texture.spe"
#define VkglTestCase_010709_2 "cification.random_teximage2d.2d_4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010709, VkglTestCase_010709_1, VkglTestCase_010709_2);

#define VkglTestCase_010710_1 "dEQP-GLES2.functional.texture.spe"
#define VkglTestCase_010710_2 "cification.random_teximage2d.2d_5"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010710, VkglTestCase_010710_1, VkglTestCase_010710_2);

#define VkglTestCase_010711_1 "dEQP-GLES2.functional.texture.spe"
#define VkglTestCase_010711_2 "cification.random_teximage2d.2d_6"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010711, VkglTestCase_010711_1, VkglTestCase_010711_2);

#define VkglTestCase_010712_1 "dEQP-GLES2.functional.texture.spe"
#define VkglTestCase_010712_2 "cification.random_teximage2d.2d_7"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010712, VkglTestCase_010712_1, VkglTestCase_010712_2);

#define VkglTestCase_010713_1 "dEQP-GLES2.functional.texture.spe"
#define VkglTestCase_010713_2 "cification.random_teximage2d.2d_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010713, VkglTestCase_010713_1, VkglTestCase_010713_2);

#define VkglTestCase_010714_1 "dEQP-GLES2.functional.texture.spe"
#define VkglTestCase_010714_2 "cification.random_teximage2d.2d_9"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010714, VkglTestCase_010714_1, VkglTestCase_010714_2);

#define VkglTestCase_010715_1 "dEQP-GLES2.functional.texture.spec"
#define VkglTestCase_010715_2 "ification.random_teximage2d.cube_0"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010715, VkglTestCase_010715_1, VkglTestCase_010715_2);

#define VkglTestCase_010716_1 "dEQP-GLES2.functional.texture.spec"
#define VkglTestCase_010716_2 "ification.random_teximage2d.cube_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010716, VkglTestCase_010716_1, VkglTestCase_010716_2);

#define VkglTestCase_010717_1 "dEQP-GLES2.functional.texture.spec"
#define VkglTestCase_010717_2 "ification.random_teximage2d.cube_2"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010717, VkglTestCase_010717_1, VkglTestCase_010717_2);

#define VkglTestCase_010718_1 "dEQP-GLES2.functional.texture.spec"
#define VkglTestCase_010718_2 "ification.random_teximage2d.cube_3"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010718, VkglTestCase_010718_1, VkglTestCase_010718_2);

#define VkglTestCase_010719_1 "dEQP-GLES2.functional.texture.spec"
#define VkglTestCase_010719_2 "ification.random_teximage2d.cube_4"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010719, VkglTestCase_010719_1, VkglTestCase_010719_2);

#define VkglTestCase_010720_1 "dEQP-GLES2.functional.texture.spec"
#define VkglTestCase_010720_2 "ification.random_teximage2d.cube_5"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010720, VkglTestCase_010720_1, VkglTestCase_010720_2);

#define VkglTestCase_010721_1 "dEQP-GLES2.functional.texture.spec"
#define VkglTestCase_010721_2 "ification.random_teximage2d.cube_6"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010721, VkglTestCase_010721_1, VkglTestCase_010721_2);

#define VkglTestCase_010722_1 "dEQP-GLES2.functional.texture.spec"
#define VkglTestCase_010722_2 "ification.random_teximage2d.cube_7"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010722, VkglTestCase_010722_1, VkglTestCase_010722_2);

#define VkglTestCase_010723_1 "dEQP-GLES2.functional.texture.spec"
#define VkglTestCase_010723_2 "ification.random_teximage2d.cube_8"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010723, VkglTestCase_010723_1, VkglTestCase_010723_2);

#define VkglTestCase_010724_1 "dEQP-GLES2.functional.texture.spec"
#define VkglTestCase_010724_2 "ification.random_teximage2d.cube_9"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010724, VkglTestCase_010724_1, VkglTestCase_010724_2);
