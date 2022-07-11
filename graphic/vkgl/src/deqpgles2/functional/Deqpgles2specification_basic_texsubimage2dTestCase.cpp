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

#define VkglTestCase_010759_1 "dEQP-GLES2.functional.texture.spec"
#define VkglTestCase_010759_2 "ification.basic_texsubimage2d.a8_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010759, VkglTestCase_010759_1, VkglTestCase_010759_2);

#define VkglTestCase_010760_1 "dEQP-GLES2.functional.texture.speci"
#define VkglTestCase_010760_2 "fication.basic_texsubimage2d.a8_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010760, VkglTestCase_010760_1, VkglTestCase_010760_2);

#define VkglTestCase_010761_1 "dEQP-GLES2.functional.texture.spec"
#define VkglTestCase_010761_2 "ification.basic_texsubimage2d.l8_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010761, VkglTestCase_010761_1, VkglTestCase_010761_2);

#define VkglTestCase_010762_1 "dEQP-GLES2.functional.texture.speci"
#define VkglTestCase_010762_2 "fication.basic_texsubimage2d.l8_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010762, VkglTestCase_010762_1, VkglTestCase_010762_2);

#define VkglTestCase_010763_1 "dEQP-GLES2.functional.texture.speci"
#define VkglTestCase_010763_2 "fication.basic_texsubimage2d.la88_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010763, VkglTestCase_010763_1, VkglTestCase_010763_2);

#define VkglTestCase_010764_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010764_2 "ication.basic_texsubimage2d.la88_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010764, VkglTestCase_010764_1, VkglTestCase_010764_2);

#define VkglTestCase_010765_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010765_2 "ication.basic_texsubimage2d.rgb565_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010765, VkglTestCase_010765_1, VkglTestCase_010765_2);

#define VkglTestCase_010766_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010766_2 "cation.basic_texsubimage2d.rgb565_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010766, VkglTestCase_010766_1, VkglTestCase_010766_2);

#define VkglTestCase_010767_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010767_2 "ication.basic_texsubimage2d.rgb888_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010767, VkglTestCase_010767_1, VkglTestCase_010767_2);

#define VkglTestCase_010768_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010768_2 "cation.basic_texsubimage2d.rgb888_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010768, VkglTestCase_010768_1, VkglTestCase_010768_2);

#define VkglTestCase_010769_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010769_2 "cation.basic_texsubimage2d.rgba4444_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010769, VkglTestCase_010769_1, VkglTestCase_010769_2);

#define VkglTestCase_010770_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010770_2 "ation.basic_texsubimage2d.rgba4444_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010770, VkglTestCase_010770_1, VkglTestCase_010770_2);

#define VkglTestCase_010771_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010771_2 "cation.basic_texsubimage2d.rgba5551_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010771, VkglTestCase_010771_1, VkglTestCase_010771_2);

#define VkglTestCase_010772_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010772_2 "ation.basic_texsubimage2d.rgba5551_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010772, VkglTestCase_010772_1, VkglTestCase_010772_2);

#define VkglTestCase_010773_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010773_2 "cation.basic_texsubimage2d.rgba8888_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010773, VkglTestCase_010773_1, VkglTestCase_010773_2);

#define VkglTestCase_010774_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010774_2 "ation.basic_texsubimage2d.rgba8888_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010774, VkglTestCase_010774_1, VkglTestCase_010774_2);

#define VkglTestCase_010775_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010775_2 "cation.basic_texsubimage2d.rgba16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010775, VkglTestCase_010775_1, VkglTestCase_010775_2);

#define VkglTestCase_010776_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010776_2 "ation.basic_texsubimage2d.rgba16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010776, VkglTestCase_010776_1, VkglTestCase_010776_2);

#define VkglTestCase_010777_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010777_2 "ication.basic_texsubimage2d.rgb16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010777, VkglTestCase_010777_1, VkglTestCase_010777_2);

#define VkglTestCase_010778_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010778_2 "cation.basic_texsubimage2d.rgb16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010778, VkglTestCase_010778_1, VkglTestCase_010778_2);

#define VkglTestCase_010779_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010779_2 "ication.basic_texsubimage2d.la16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010779, VkglTestCase_010779_1, VkglTestCase_010779_2);

#define VkglTestCase_010780_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010780_2 "cation.basic_texsubimage2d.la16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010780, VkglTestCase_010780_1, VkglTestCase_010780_2);

#define VkglTestCase_010781_1 "dEQP-GLES2.functional.texture.speci"
#define VkglTestCase_010781_2 "fication.basic_texsubimage2d.l16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010781, VkglTestCase_010781_1, VkglTestCase_010781_2);

#define VkglTestCase_010782_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010782_2 "ication.basic_texsubimage2d.l16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010782, VkglTestCase_010782_1, VkglTestCase_010782_2);

#define VkglTestCase_010783_1 "dEQP-GLES2.functional.texture.speci"
#define VkglTestCase_010783_2 "fication.basic_texsubimage2d.a16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010783, VkglTestCase_010783_1, VkglTestCase_010783_2);

#define VkglTestCase_010784_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010784_2 "ication.basic_texsubimage2d.a16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010784, VkglTestCase_010784_1, VkglTestCase_010784_2);
