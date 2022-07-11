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

#define VkglTestCase_010851_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010851_2 "ication.basic_copyteximage2d.2d_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010851, VkglTestCase_010851_1, VkglTestCase_010851_2);

#define VkglTestCase_010852_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010852_2 "ation.basic_copyteximage2d.2d_luminance"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010852, VkglTestCase_010852_1, VkglTestCase_010852_2);

#define VkglTestCase_010853_1 "dEQP-GLES2.functional.texture.specificati"
#define VkglTestCase_010853_2 "on.basic_copyteximage2d.2d_luminance_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010853, VkglTestCase_010853_1, VkglTestCase_010853_2);

#define VkglTestCase_010854_1 "dEQP-GLES2.functional.texture.speci"
#define VkglTestCase_010854_2 "fication.basic_copyteximage2d.2d_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010854, VkglTestCase_010854_1, VkglTestCase_010854_2);

#define VkglTestCase_010855_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010855_2 "ication.basic_copyteximage2d.2d_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010855, VkglTestCase_010855_1, VkglTestCase_010855_2);

#define VkglTestCase_010856_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010856_2 "cation.basic_copyteximage2d.cube_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010856, VkglTestCase_010856_1, VkglTestCase_010856_2);

#define VkglTestCase_010857_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010857_2 "tion.basic_copyteximage2d.cube_luminance"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010857, VkglTestCase_010857_1, VkglTestCase_010857_2);

#define VkglTestCase_010858_1 "dEQP-GLES2.functional.texture.specificatio"
#define VkglTestCase_010858_2 "n.basic_copyteximage2d.cube_luminance_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010858, VkglTestCase_010858_1, VkglTestCase_010858_2);

#define VkglTestCase_010859_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010859_2 "ication.basic_copyteximage2d.cube_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010859, VkglTestCase_010859_1, VkglTestCase_010859_2);

#define VkglTestCase_010860_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010860_2 "cation.basic_copyteximage2d.cube_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010860, VkglTestCase_010860_1, VkglTestCase_010860_2);
