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

#define VkglTestCase_010663_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010663_2 "mipmap.cube.generate.a8_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010663, VkglTestCase_010663_1, VkglTestCase_010663_2);

#define VkglTestCase_010664_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010664_2 "mipmap.cube.generate.a8_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010664, VkglTestCase_010664_1, VkglTestCase_010664_2);

#define VkglTestCase_010665_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010665_2 "mipmap.cube.generate.l8_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010665, VkglTestCase_010665_1, VkglTestCase_010665_2);

#define VkglTestCase_010666_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010666_2 "mipmap.cube.generate.l8_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010666, VkglTestCase_010666_1, VkglTestCase_010666_2);

#define VkglTestCase_010667_1 "dEQP-GLES2.functional.texture.m"
#define VkglTestCase_010667_2 "ipmap.cube.generate.la88_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010667, VkglTestCase_010667_1, VkglTestCase_010667_2);

#define VkglTestCase_010668_1 "dEQP-GLES2.functional.texture.m"
#define VkglTestCase_010668_2 "ipmap.cube.generate.la88_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010668, VkglTestCase_010668_1, VkglTestCase_010668_2);

#define VkglTestCase_010669_1 "dEQP-GLES2.functional.texture.mi"
#define VkglTestCase_010669_2 "pmap.cube.generate.rgb565_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010669, VkglTestCase_010669_1, VkglTestCase_010669_2);

#define VkglTestCase_010670_1 "dEQP-GLES2.functional.texture.mi"
#define VkglTestCase_010670_2 "pmap.cube.generate.rgb565_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010670, VkglTestCase_010670_1, VkglTestCase_010670_2);

#define VkglTestCase_010671_1 "dEQP-GLES2.functional.texture.mi"
#define VkglTestCase_010671_2 "pmap.cube.generate.rgb888_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010671, VkglTestCase_010671_1, VkglTestCase_010671_2);

#define VkglTestCase_010672_1 "dEQP-GLES2.functional.texture.mi"
#define VkglTestCase_010672_2 "pmap.cube.generate.rgb888_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010672, VkglTestCase_010672_1, VkglTestCase_010672_2);

#define VkglTestCase_010673_1 "dEQP-GLES2.functional.texture.mip"
#define VkglTestCase_010673_2 "map.cube.generate.rgba4444_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010673, VkglTestCase_010673_1, VkglTestCase_010673_2);

#define VkglTestCase_010674_1 "dEQP-GLES2.functional.texture.mip"
#define VkglTestCase_010674_2 "map.cube.generate.rgba4444_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010674, VkglTestCase_010674_1, VkglTestCase_010674_2);

#define VkglTestCase_010675_1 "dEQP-GLES2.functional.texture.mip"
#define VkglTestCase_010675_2 "map.cube.generate.rgba5551_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010675, VkglTestCase_010675_1, VkglTestCase_010675_2);

#define VkglTestCase_010676_1 "dEQP-GLES2.functional.texture.mip"
#define VkglTestCase_010676_2 "map.cube.generate.rgba5551_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010676, VkglTestCase_010676_1, VkglTestCase_010676_2);

#define VkglTestCase_010677_1 "dEQP-GLES2.functional.texture.mip"
#define VkglTestCase_010677_2 "map.cube.generate.rgba8888_fastest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010677, VkglTestCase_010677_1, VkglTestCase_010677_2);

#define VkglTestCase_010678_1 "dEQP-GLES2.functional.texture.mip"
#define VkglTestCase_010678_2 "map.cube.generate.rgba8888_nicest"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010678, VkglTestCase_010678_1, VkglTestCase_010678_2);
