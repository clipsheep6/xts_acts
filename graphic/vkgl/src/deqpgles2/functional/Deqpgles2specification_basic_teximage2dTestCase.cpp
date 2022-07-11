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

#define VkglTestCase_010679_1 "dEQP-GLES2.functional.texture.spe"
#define VkglTestCase_010679_2 "cification.basic_teximage2d.a8_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010679, VkglTestCase_010679_1, VkglTestCase_010679_2);

#define VkglTestCase_010680_1 "dEQP-GLES2.functional.texture.spec"
#define VkglTestCase_010680_2 "ification.basic_teximage2d.a8_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010680, VkglTestCase_010680_1, VkglTestCase_010680_2);

#define VkglTestCase_010681_1 "dEQP-GLES2.functional.texture.spe"
#define VkglTestCase_010681_2 "cification.basic_teximage2d.l8_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010681, VkglTestCase_010681_1, VkglTestCase_010681_2);

#define VkglTestCase_010682_1 "dEQP-GLES2.functional.texture.spec"
#define VkglTestCase_010682_2 "ification.basic_teximage2d.l8_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010682, VkglTestCase_010682_1, VkglTestCase_010682_2);

#define VkglTestCase_010683_1 "dEQP-GLES2.functional.texture.spec"
#define VkglTestCase_010683_2 "ification.basic_teximage2d.la88_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010683, VkglTestCase_010683_1, VkglTestCase_010683_2);

#define VkglTestCase_010684_1 "dEQP-GLES2.functional.texture.speci"
#define VkglTestCase_010684_2 "fication.basic_teximage2d.la88_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010684, VkglTestCase_010684_1, VkglTestCase_010684_2);

#define VkglTestCase_010685_1 "dEQP-GLES2.functional.texture.speci"
#define VkglTestCase_010685_2 "fication.basic_teximage2d.rgb565_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010685, VkglTestCase_010685_1, VkglTestCase_010685_2);

#define VkglTestCase_010686_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010686_2 "ication.basic_teximage2d.rgb565_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010686, VkglTestCase_010686_1, VkglTestCase_010686_2);

#define VkglTestCase_010687_1 "dEQP-GLES2.functional.texture.speci"
#define VkglTestCase_010687_2 "fication.basic_teximage2d.rgb888_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010687, VkglTestCase_010687_1, VkglTestCase_010687_2);

#define VkglTestCase_010688_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010688_2 "ication.basic_teximage2d.rgb888_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010688, VkglTestCase_010688_1, VkglTestCase_010688_2);

#define VkglTestCase_010689_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010689_2 "ication.basic_teximage2d.rgba4444_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010689, VkglTestCase_010689_1, VkglTestCase_010689_2);

#define VkglTestCase_010690_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010690_2 "cation.basic_teximage2d.rgba4444_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010690, VkglTestCase_010690_1, VkglTestCase_010690_2);

#define VkglTestCase_010691_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010691_2 "ication.basic_teximage2d.rgba5551_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010691, VkglTestCase_010691_1, VkglTestCase_010691_2);

#define VkglTestCase_010692_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010692_2 "cation.basic_teximage2d.rgba5551_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010692, VkglTestCase_010692_1, VkglTestCase_010692_2);

#define VkglTestCase_010693_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010693_2 "ication.basic_teximage2d.rgba8888_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010693, VkglTestCase_010693_1, VkglTestCase_010693_2);

#define VkglTestCase_010694_1 "dEQP-GLES2.functional.texture.specifi"
#define VkglTestCase_010694_2 "cation.basic_teximage2d.rgba8888_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010694, VkglTestCase_010694_1, VkglTestCase_010694_2);

#define VkglTestCase_010695_1 "dEQP-GLES2.functional.texture.speci"
#define VkglTestCase_010695_2 "fication.basic_teximage2d.rgba16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010695, VkglTestCase_010695_1, VkglTestCase_010695_2);

#define VkglTestCase_010696_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010696_2 "ication.basic_teximage2d.rgba16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010696, VkglTestCase_010696_1, VkglTestCase_010696_2);

#define VkglTestCase_010697_1 "dEQP-GLES2.functional.texture.speci"
#define VkglTestCase_010697_2 "fication.basic_teximage2d.rgb16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010697, VkglTestCase_010697_1, VkglTestCase_010697_2);

#define VkglTestCase_010698_1 "dEQP-GLES2.functional.texture.specif"
#define VkglTestCase_010698_2 "ication.basic_teximage2d.rgb16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010698, VkglTestCase_010698_1, VkglTestCase_010698_2);

#define VkglTestCase_010699_1 "dEQP-GLES2.functional.texture.spec"
#define VkglTestCase_010699_2 "ification.basic_teximage2d.la16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010699, VkglTestCase_010699_1, VkglTestCase_010699_2);

#define VkglTestCase_010700_1 "dEQP-GLES2.functional.texture.speci"
#define VkglTestCase_010700_2 "fication.basic_teximage2d.la16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010700, VkglTestCase_010700_1, VkglTestCase_010700_2);

#define VkglTestCase_010701_1 "dEQP-GLES2.functional.texture.spec"
#define VkglTestCase_010701_2 "ification.basic_teximage2d.l16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010701, VkglTestCase_010701_1, VkglTestCase_010701_2);

#define VkglTestCase_010702_1 "dEQP-GLES2.functional.texture.speci"
#define VkglTestCase_010702_2 "fication.basic_teximage2d.l16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010702, VkglTestCase_010702_1, VkglTestCase_010702_2);

#define VkglTestCase_010703_1 "dEQP-GLES2.functional.texture.spec"
#define VkglTestCase_010703_2 "ification.basic_teximage2d.a16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010703, VkglTestCase_010703_1, VkglTestCase_010703_2);

#define VkglTestCase_010704_1 "dEQP-GLES2.functional.texture.speci"
#define VkglTestCase_010704_2 "fication.basic_teximage2d.a16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010704, VkglTestCase_010704_1, VkglTestCase_010704_2);
