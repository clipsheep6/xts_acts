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
#include "../ActsDeqpgles30016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015708_1 "dEQP-GLES3.functional.shaders.matrix.mat"
#define VkglTestCase_015708_2 "rixcompmult.dynamic.lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015708, VkglTestCase_015708_1, VkglTestCase_015708_2);

#define VkglTestCase_015709_1 "dEQP-GLES3.functional.shaders.matrix.matr"
#define VkglTestCase_015709_2 "ixcompmult.dynamic.lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015709, VkglTestCase_015709_1, VkglTestCase_015709_2);

#define VkglTestCase_015710_1 "dEQP-GLES3.functional.shaders.matrix.matri"
#define VkglTestCase_015710_2 "xcompmult.dynamic.mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015710, VkglTestCase_015710_1, VkglTestCase_015710_2);

#define VkglTestCase_015711_1 "dEQP-GLES3.functional.shaders.matrix.matrix"
#define VkglTestCase_015711_2 "compmult.dynamic.mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015711, VkglTestCase_015711_1, VkglTestCase_015711_2);

#define VkglTestCase_015712_1 "dEQP-GLES3.functional.shaders.matrix.matr"
#define VkglTestCase_015712_2 "ixcompmult.dynamic.highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015712, VkglTestCase_015712_1, VkglTestCase_015712_2);

#define VkglTestCase_015713_1 "dEQP-GLES3.functional.shaders.matrix.matri"
#define VkglTestCase_015713_2 "xcompmult.dynamic.highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015713, VkglTestCase_015713_1, VkglTestCase_015713_2);

#define VkglTestCase_015714_1 "dEQP-GLES3.functional.shaders.matrix.matri"
#define VkglTestCase_015714_2 "xcompmult.dynamic.lowp_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015714, VkglTestCase_015714_1, VkglTestCase_015714_2);

#define VkglTestCase_015715_1 "dEQP-GLES3.functional.shaders.matrix.matrix"
#define VkglTestCase_015715_2 "compmult.dynamic.lowp_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015715, VkglTestCase_015715_1, VkglTestCase_015715_2);

#define VkglTestCase_015716_1 "dEQP-GLES3.functional.shaders.matrix.matrixc"
#define VkglTestCase_015716_2 "ompmult.dynamic.mediump_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015716, VkglTestCase_015716_1, VkglTestCase_015716_2);

#define VkglTestCase_015717_1 "dEQP-GLES3.functional.shaders.matrix.matrixco"
#define VkglTestCase_015717_2 "mpmult.dynamic.mediump_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015717, VkglTestCase_015717_1, VkglTestCase_015717_2);

#define VkglTestCase_015718_1 "dEQP-GLES3.functional.shaders.matrix.matrix"
#define VkglTestCase_015718_2 "compmult.dynamic.highp_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015718, VkglTestCase_015718_1, VkglTestCase_015718_2);

#define VkglTestCase_015719_1 "dEQP-GLES3.functional.shaders.matrix.matrixc"
#define VkglTestCase_015719_2 "ompmult.dynamic.highp_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015719, VkglTestCase_015719_1, VkglTestCase_015719_2);

#define VkglTestCase_015720_1 "dEQP-GLES3.functional.shaders.matrix.matri"
#define VkglTestCase_015720_2 "xcompmult.dynamic.lowp_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015720, VkglTestCase_015720_1, VkglTestCase_015720_2);

#define VkglTestCase_015721_1 "dEQP-GLES3.functional.shaders.matrix.matrix"
#define VkglTestCase_015721_2 "compmult.dynamic.lowp_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015721, VkglTestCase_015721_1, VkglTestCase_015721_2);

#define VkglTestCase_015722_1 "dEQP-GLES3.functional.shaders.matrix.matrixc"
#define VkglTestCase_015722_2 "ompmult.dynamic.mediump_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015722, VkglTestCase_015722_1, VkglTestCase_015722_2);

#define VkglTestCase_015723_1 "dEQP-GLES3.functional.shaders.matrix.matrixco"
#define VkglTestCase_015723_2 "mpmult.dynamic.mediump_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015723, VkglTestCase_015723_1, VkglTestCase_015723_2);

#define VkglTestCase_015724_1 "dEQP-GLES3.functional.shaders.matrix.matrix"
#define VkglTestCase_015724_2 "compmult.dynamic.highp_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015724, VkglTestCase_015724_1, VkglTestCase_015724_2);

#define VkglTestCase_015725_1 "dEQP-GLES3.functional.shaders.matrix.matrixc"
#define VkglTestCase_015725_2 "ompmult.dynamic.highp_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015725, VkglTestCase_015725_1, VkglTestCase_015725_2);

#define VkglTestCase_015726_1 "dEQP-GLES3.functional.shaders.matrix.matri"
#define VkglTestCase_015726_2 "xcompmult.dynamic.lowp_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015726, VkglTestCase_015726_1, VkglTestCase_015726_2);

#define VkglTestCase_015727_1 "dEQP-GLES3.functional.shaders.matrix.matrix"
#define VkglTestCase_015727_2 "compmult.dynamic.lowp_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015727, VkglTestCase_015727_1, VkglTestCase_015727_2);

#define VkglTestCase_015728_1 "dEQP-GLES3.functional.shaders.matrix.matrixc"
#define VkglTestCase_015728_2 "ompmult.dynamic.mediump_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015728, VkglTestCase_015728_1, VkglTestCase_015728_2);

#define VkglTestCase_015729_1 "dEQP-GLES3.functional.shaders.matrix.matrixco"
#define VkglTestCase_015729_2 "mpmult.dynamic.mediump_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015729, VkglTestCase_015729_1, VkglTestCase_015729_2);

#define VkglTestCase_015730_1 "dEQP-GLES3.functional.shaders.matrix.matrix"
#define VkglTestCase_015730_2 "compmult.dynamic.highp_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015730, VkglTestCase_015730_1, VkglTestCase_015730_2);

#define VkglTestCase_015731_1 "dEQP-GLES3.functional.shaders.matrix.matrixc"
#define VkglTestCase_015731_2 "ompmult.dynamic.highp_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015731, VkglTestCase_015731_1, VkglTestCase_015731_2);

#define VkglTestCase_015732_1 "dEQP-GLES3.functional.shaders.matrix.mat"
#define VkglTestCase_015732_2 "rixcompmult.dynamic.lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015732, VkglTestCase_015732_1, VkglTestCase_015732_2);

#define VkglTestCase_015733_1 "dEQP-GLES3.functional.shaders.matrix.matr"
#define VkglTestCase_015733_2 "ixcompmult.dynamic.lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015733, VkglTestCase_015733_1, VkglTestCase_015733_2);

#define VkglTestCase_015734_1 "dEQP-GLES3.functional.shaders.matrix.matri"
#define VkglTestCase_015734_2 "xcompmult.dynamic.mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015734, VkglTestCase_015734_1, VkglTestCase_015734_2);

#define VkglTestCase_015735_1 "dEQP-GLES3.functional.shaders.matrix.matrix"
#define VkglTestCase_015735_2 "compmult.dynamic.mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015735, VkglTestCase_015735_1, VkglTestCase_015735_2);

#define VkglTestCase_015736_1 "dEQP-GLES3.functional.shaders.matrix.matr"
#define VkglTestCase_015736_2 "ixcompmult.dynamic.highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015736, VkglTestCase_015736_1, VkglTestCase_015736_2);

#define VkglTestCase_015737_1 "dEQP-GLES3.functional.shaders.matrix.matri"
#define VkglTestCase_015737_2 "xcompmult.dynamic.highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015737, VkglTestCase_015737_1, VkglTestCase_015737_2);

#define VkglTestCase_015738_1 "dEQP-GLES3.functional.shaders.matrix.matri"
#define VkglTestCase_015738_2 "xcompmult.dynamic.lowp_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015738, VkglTestCase_015738_1, VkglTestCase_015738_2);

#define VkglTestCase_015739_1 "dEQP-GLES3.functional.shaders.matrix.matrix"
#define VkglTestCase_015739_2 "compmult.dynamic.lowp_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015739, VkglTestCase_015739_1, VkglTestCase_015739_2);

#define VkglTestCase_015740_1 "dEQP-GLES3.functional.shaders.matrix.matrixc"
#define VkglTestCase_015740_2 "ompmult.dynamic.mediump_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015740, VkglTestCase_015740_1, VkglTestCase_015740_2);

#define VkglTestCase_015741_1 "dEQP-GLES3.functional.shaders.matrix.matrixco"
#define VkglTestCase_015741_2 "mpmult.dynamic.mediump_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015741, VkglTestCase_015741_1, VkglTestCase_015741_2);

#define VkglTestCase_015742_1 "dEQP-GLES3.functional.shaders.matrix.matrix"
#define VkglTestCase_015742_2 "compmult.dynamic.highp_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015742, VkglTestCase_015742_1, VkglTestCase_015742_2);

#define VkglTestCase_015743_1 "dEQP-GLES3.functional.shaders.matrix.matrixc"
#define VkglTestCase_015743_2 "ompmult.dynamic.highp_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015743, VkglTestCase_015743_1, VkglTestCase_015743_2);

#define VkglTestCase_015744_1 "dEQP-GLES3.functional.shaders.matrix.matri"
#define VkglTestCase_015744_2 "xcompmult.dynamic.lowp_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015744, VkglTestCase_015744_1, VkglTestCase_015744_2);

#define VkglTestCase_015745_1 "dEQP-GLES3.functional.shaders.matrix.matrix"
#define VkglTestCase_015745_2 "compmult.dynamic.lowp_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015745, VkglTestCase_015745_1, VkglTestCase_015745_2);

#define VkglTestCase_015746_1 "dEQP-GLES3.functional.shaders.matrix.matrixc"
#define VkglTestCase_015746_2 "ompmult.dynamic.mediump_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015746, VkglTestCase_015746_1, VkglTestCase_015746_2);

#define VkglTestCase_015747_1 "dEQP-GLES3.functional.shaders.matrix.matrixco"
#define VkglTestCase_015747_2 "mpmult.dynamic.mediump_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015747, VkglTestCase_015747_1, VkglTestCase_015747_2);

#define VkglTestCase_015748_1 "dEQP-GLES3.functional.shaders.matrix.matrix"
#define VkglTestCase_015748_2 "compmult.dynamic.highp_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015748, VkglTestCase_015748_1, VkglTestCase_015748_2);

#define VkglTestCase_015749_1 "dEQP-GLES3.functional.shaders.matrix.matrixc"
#define VkglTestCase_015749_2 "ompmult.dynamic.highp_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015749, VkglTestCase_015749_1, VkglTestCase_015749_2);

#define VkglTestCase_015750_1 "dEQP-GLES3.functional.shaders.matrix.matri"
#define VkglTestCase_015750_2 "xcompmult.dynamic.lowp_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015750, VkglTestCase_015750_1, VkglTestCase_015750_2);

#define VkglTestCase_015751_1 "dEQP-GLES3.functional.shaders.matrix.matrix"
#define VkglTestCase_015751_2 "compmult.dynamic.lowp_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015751, VkglTestCase_015751_1, VkglTestCase_015751_2);

#define VkglTestCase_015752_1 "dEQP-GLES3.functional.shaders.matrix.matrixc"
#define VkglTestCase_015752_2 "ompmult.dynamic.mediump_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015752, VkglTestCase_015752_1, VkglTestCase_015752_2);

#define VkglTestCase_015753_1 "dEQP-GLES3.functional.shaders.matrix.matrixco"
#define VkglTestCase_015753_2 "mpmult.dynamic.mediump_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015753, VkglTestCase_015753_1, VkglTestCase_015753_2);

#define VkglTestCase_015754_1 "dEQP-GLES3.functional.shaders.matrix.matrix"
#define VkglTestCase_015754_2 "compmult.dynamic.highp_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015754, VkglTestCase_015754_1, VkglTestCase_015754_2);

#define VkglTestCase_015755_1 "dEQP-GLES3.functional.shaders.matrix.matrixc"
#define VkglTestCase_015755_2 "ompmult.dynamic.highp_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015755, VkglTestCase_015755_1, VkglTestCase_015755_2);

#define VkglTestCase_015756_1 "dEQP-GLES3.functional.shaders.matrix.mat"
#define VkglTestCase_015756_2 "rixcompmult.dynamic.lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015756, VkglTestCase_015756_1, VkglTestCase_015756_2);

#define VkglTestCase_015757_1 "dEQP-GLES3.functional.shaders.matrix.matr"
#define VkglTestCase_015757_2 "ixcompmult.dynamic.lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015757, VkglTestCase_015757_1, VkglTestCase_015757_2);

#define VkglTestCase_015758_1 "dEQP-GLES3.functional.shaders.matrix.matri"
#define VkglTestCase_015758_2 "xcompmult.dynamic.mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015758, VkglTestCase_015758_1, VkglTestCase_015758_2);

#define VkglTestCase_015759_1 "dEQP-GLES3.functional.shaders.matrix.matrix"
#define VkglTestCase_015759_2 "compmult.dynamic.mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015759, VkglTestCase_015759_1, VkglTestCase_015759_2);

#define VkglTestCase_015760_1 "dEQP-GLES3.functional.shaders.matrix.matr"
#define VkglTestCase_015760_2 "ixcompmult.dynamic.highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015760, VkglTestCase_015760_1, VkglTestCase_015760_2);

#define VkglTestCase_015761_1 "dEQP-GLES3.functional.shaders.matrix.matri"
#define VkglTestCase_015761_2 "xcompmult.dynamic.highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015761, VkglTestCase_015761_1, VkglTestCase_015761_2);
