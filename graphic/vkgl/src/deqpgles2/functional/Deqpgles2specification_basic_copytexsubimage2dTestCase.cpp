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

#define VkglTestCase_010861_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010861_2 "ation.basic_copytexsubimage2d.2d_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010861, VkglTestCase_010861_1, VkglTestCase_010861_2);

#define VkglTestCase_010862_1 "dEQP-GLES2.functional.texture.specificat"
#define VkglTestCase_010862_2 "ion.basic_copytexsubimage2d.2d_luminance"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010862, VkglTestCase_010862_1, VkglTestCase_010862_2);

#define VkglTestCase_010863_1 "dEQP-GLES2.functional.texture.specification"
#define VkglTestCase_010863_2 ".basic_copytexsubimage2d.2d_luminance_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010863, VkglTestCase_010863_1, VkglTestCase_010863_2);

#define VkglTestCase_010864_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010864_2 "cation.basic_copytexsubimage2d.2d_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010864, VkglTestCase_010864_1, VkglTestCase_010864_2);

#define VkglTestCase_010865_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010865_2 "cation.basic_copytexsubimage2d.2d_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010865, VkglTestCase_010865_1, VkglTestCase_010865_2);

#define VkglTestCase_010866_1 "dEQP-GLES2.functional.texture.specifica"
#define VkglTestCase_010866_2 "tion.basic_copytexsubimage2d.cube_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010866, VkglTestCase_010866_1, VkglTestCase_010866_2);

#define VkglTestCase_010867_1 "dEQP-GLES2.functional.texture.specificati"
#define VkglTestCase_010867_2 "on.basic_copytexsubimage2d.cube_luminance"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010867, VkglTestCase_010867_1, VkglTestCase_010867_2);

#define VkglTestCase_010868_1 "dEQP-GLES2.functional.texture.specification."
#define VkglTestCase_010868_2 "basic_copytexsubimage2d.cube_luminance_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010868, VkglTestCase_010868_1, VkglTestCase_010868_2);

#define VkglTestCase_010869_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010869_2 "ation.basic_copytexsubimage2d.cube_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010869, VkglTestCase_010869_1, VkglTestCase_010869_2);

#define VkglTestCase_010870_1 "dEQP-GLES2.functional.texture.specific"
#define VkglTestCase_010870_2 "ation.basic_copytexsubimage2d.cube_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010870, VkglTestCase_010870_1, VkglTestCase_010870_2);
