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
#include "../ActsDeqpgles30027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026109_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026109_2 "ication.texsubimage2d_align.2d_r8_1_1"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026109, VkglTestCase_026109_1, VkglTestCase_026109_2);

#define VkglTestCase_026110_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026110_2 "ication.texsubimage2d_align.2d_r8_1_2"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026110, VkglTestCase_026110_1, VkglTestCase_026110_2);

#define VkglTestCase_026111_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026111_2 "ication.texsubimage2d_align.2d_r8_1_4"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026111, VkglTestCase_026111_1, VkglTestCase_026111_2);

#define VkglTestCase_026112_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026112_2 "ication.texsubimage2d_align.2d_r8_1_8"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026112, VkglTestCase_026112_1, VkglTestCase_026112_2);

#define VkglTestCase_026113_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026113_2 "cation.texsubimage2d_align.2d_r8_63_1"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026113, VkglTestCase_026113_1, VkglTestCase_026113_2);

#define VkglTestCase_026114_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026114_2 "cation.texsubimage2d_align.2d_r8_63_2"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026114, VkglTestCase_026114_1, VkglTestCase_026114_2);

#define VkglTestCase_026115_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026115_2 "cation.texsubimage2d_align.2d_r8_63_4"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026115, VkglTestCase_026115_1, VkglTestCase_026115_2);

#define VkglTestCase_026116_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026116_2 "cation.texsubimage2d_align.2d_r8_63_8"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026116, VkglTestCase_026116_1, VkglTestCase_026116_2);

#define VkglTestCase_026117_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026117_2 "ation.texsubimage2d_align.2d_rgba4_51_1"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026117, VkglTestCase_026117_1, VkglTestCase_026117_2);

#define VkglTestCase_026118_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026118_2 "ation.texsubimage2d_align.2d_rgba4_51_2"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026118, VkglTestCase_026118_1, VkglTestCase_026118_2);

#define VkglTestCase_026119_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026119_2 "ation.texsubimage2d_align.2d_rgba4_51_4"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026119, VkglTestCase_026119_1, VkglTestCase_026119_2);

#define VkglTestCase_026120_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026120_2 "ation.texsubimage2d_align.2d_rgba4_51_8"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026120, VkglTestCase_026120_1, VkglTestCase_026120_2);

#define VkglTestCase_026121_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026121_2 "ation.texsubimage2d_align.2d_rgb8_39_1"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026121, VkglTestCase_026121_1, VkglTestCase_026121_2);

#define VkglTestCase_026122_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026122_2 "ation.texsubimage2d_align.2d_rgb8_39_2"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026122, VkglTestCase_026122_1, VkglTestCase_026122_2);

#define VkglTestCase_026123_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026123_2 "ation.texsubimage2d_align.2d_rgb8_39_4"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026123, VkglTestCase_026123_1, VkglTestCase_026123_2);

#define VkglTestCase_026124_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026124_2 "ation.texsubimage2d_align.2d_rgb8_39_8"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026124, VkglTestCase_026124_1, VkglTestCase_026124_2);

#define VkglTestCase_026125_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026125_2 "ation.texsubimage2d_align.2d_rgba8_47_1"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026125, VkglTestCase_026125_1, VkglTestCase_026125_2);

#define VkglTestCase_026126_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026126_2 "ation.texsubimage2d_align.2d_rgba8_47_2"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026126, VkglTestCase_026126_1, VkglTestCase_026126_2);

#define VkglTestCase_026127_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026127_2 "ation.texsubimage2d_align.2d_rgba8_47_4"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026127, VkglTestCase_026127_1, VkglTestCase_026127_2);

#define VkglTestCase_026128_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026128_2 "ation.texsubimage2d_align.2d_rgba8_47_8"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026128, VkglTestCase_026128_1, VkglTestCase_026128_2);

#define VkglTestCase_026129_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026129_2 "cation.texsubimage2d_align.cube_r8_1_1"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026129, VkglTestCase_026129_1, VkglTestCase_026129_2);

#define VkglTestCase_026130_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026130_2 "cation.texsubimage2d_align.cube_r8_1_2"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026130, VkglTestCase_026130_1, VkglTestCase_026130_2);

#define VkglTestCase_026131_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026131_2 "cation.texsubimage2d_align.cube_r8_1_4"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026131, VkglTestCase_026131_1, VkglTestCase_026131_2);

#define VkglTestCase_026132_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026132_2 "cation.texsubimage2d_align.cube_r8_1_8"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026132, VkglTestCase_026132_1, VkglTestCase_026132_2);

#define VkglTestCase_026133_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026133_2 "ation.texsubimage2d_align.cube_r8_63_1"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026133, VkglTestCase_026133_1, VkglTestCase_026133_2);

#define VkglTestCase_026134_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026134_2 "ation.texsubimage2d_align.cube_r8_63_2"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026134, VkglTestCase_026134_1, VkglTestCase_026134_2);

#define VkglTestCase_026135_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026135_2 "ation.texsubimage2d_align.cube_r8_63_4"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026135, VkglTestCase_026135_1, VkglTestCase_026135_2);

#define VkglTestCase_026136_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026136_2 "ation.texsubimage2d_align.cube_r8_63_8"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026136, VkglTestCase_026136_1, VkglTestCase_026136_2);

#define VkglTestCase_026137_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026137_2 "tion.texsubimage2d_align.cube_rgba4_51_1"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026137, VkglTestCase_026137_1, VkglTestCase_026137_2);

#define VkglTestCase_026138_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026138_2 "tion.texsubimage2d_align.cube_rgba4_51_2"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026138, VkglTestCase_026138_1, VkglTestCase_026138_2);

#define VkglTestCase_026139_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026139_2 "tion.texsubimage2d_align.cube_rgba4_51_4"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026139, VkglTestCase_026139_1, VkglTestCase_026139_2);

#define VkglTestCase_026140_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026140_2 "tion.texsubimage2d_align.cube_rgba4_51_8"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026140, VkglTestCase_026140_1, VkglTestCase_026140_2);

#define VkglTestCase_026141_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026141_2 "tion.texsubimage2d_align.cube_rgb8_39_1"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026141, VkglTestCase_026141_1, VkglTestCase_026141_2);

#define VkglTestCase_026142_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026142_2 "tion.texsubimage2d_align.cube_rgb8_39_2"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026142, VkglTestCase_026142_1, VkglTestCase_026142_2);

#define VkglTestCase_026143_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026143_2 "tion.texsubimage2d_align.cube_rgb8_39_4"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026143, VkglTestCase_026143_1, VkglTestCase_026143_2);

#define VkglTestCase_026144_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026144_2 "tion.texsubimage2d_align.cube_rgb8_39_8"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026144, VkglTestCase_026144_1, VkglTestCase_026144_2);

#define VkglTestCase_026145_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026145_2 "tion.texsubimage2d_align.cube_rgba8_47_1"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026145, VkglTestCase_026145_1, VkglTestCase_026145_2);

#define VkglTestCase_026146_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026146_2 "tion.texsubimage2d_align.cube_rgba8_47_2"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026146, VkglTestCase_026146_1, VkglTestCase_026146_2);

#define VkglTestCase_026147_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026147_2 "tion.texsubimage2d_align.cube_rgba8_47_4"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026147, VkglTestCase_026147_1, VkglTestCase_026147_2);

#define VkglTestCase_026148_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026148_2 "tion.texsubimage2d_align.cube_rgba8_47_8"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026148, VkglTestCase_026148_1, VkglTestCase_026148_2);
