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

#define VkglTestCase_025830_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025830_2 "fication.teximage2d_align.2d_r8_4_8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025830, VkglTestCase_025830_1, VkglTestCase_025830_2);

#define VkglTestCase_025831_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025831_2 "fication.teximage2d_align.2d_r8_63_1"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025831, VkglTestCase_025831_1, VkglTestCase_025831_2);

#define VkglTestCase_025832_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025832_2 "fication.teximage2d_align.2d_r8_63_2"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025832, VkglTestCase_025832_1, VkglTestCase_025832_2);

#define VkglTestCase_025833_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025833_2 "fication.teximage2d_align.2d_r8_63_4"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025833, VkglTestCase_025833_1, VkglTestCase_025833_2);

#define VkglTestCase_025834_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025834_2 "fication.teximage2d_align.2d_r8_63_8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025834, VkglTestCase_025834_1, VkglTestCase_025834_2);

#define VkglTestCase_025835_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025835_2 "cation.teximage2d_align.2d_rgba4_51_1"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025835, VkglTestCase_025835_1, VkglTestCase_025835_2);

#define VkglTestCase_025836_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025836_2 "cation.teximage2d_align.2d_rgba4_51_2"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025836, VkglTestCase_025836_1, VkglTestCase_025836_2);

#define VkglTestCase_025837_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025837_2 "cation.teximage2d_align.2d_rgba4_51_4"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025837, VkglTestCase_025837_1, VkglTestCase_025837_2);

#define VkglTestCase_025838_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025838_2 "cation.teximage2d_align.2d_rgba4_51_8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025838, VkglTestCase_025838_1, VkglTestCase_025838_2);

#define VkglTestCase_025839_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025839_2 "ication.teximage2d_align.2d_rgb8_39_1"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025839, VkglTestCase_025839_1, VkglTestCase_025839_2);

#define VkglTestCase_025840_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025840_2 "ication.teximage2d_align.2d_rgb8_39_2"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025840, VkglTestCase_025840_1, VkglTestCase_025840_2);

#define VkglTestCase_025841_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025841_2 "ication.teximage2d_align.2d_rgb8_39_4"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025841, VkglTestCase_025841_1, VkglTestCase_025841_2);

#define VkglTestCase_025842_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025842_2 "ication.teximage2d_align.2d_rgb8_39_8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025842, VkglTestCase_025842_1, VkglTestCase_025842_2);

#define VkglTestCase_025843_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025843_2 "cation.teximage2d_align.2d_rgba8_47_1"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025843, VkglTestCase_025843_1, VkglTestCase_025843_2);

#define VkglTestCase_025844_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025844_2 "cation.teximage2d_align.2d_rgba8_47_2"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025844, VkglTestCase_025844_1, VkglTestCase_025844_2);

#define VkglTestCase_025845_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025845_2 "cation.teximage2d_align.2d_rgba8_47_4"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025845, VkglTestCase_025845_1, VkglTestCase_025845_2);

#define VkglTestCase_025846_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025846_2 "cation.teximage2d_align.2d_rgba8_47_8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025846, VkglTestCase_025846_1, VkglTestCase_025846_2);

#define VkglTestCase_025847_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025847_2 "ication.teximage2d_align.cube_r8_4_8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025847, VkglTestCase_025847_1, VkglTestCase_025847_2);

#define VkglTestCase_025848_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025848_2 "ication.teximage2d_align.cube_r8_63_1"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025848, VkglTestCase_025848_1, VkglTestCase_025848_2);

#define VkglTestCase_025849_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025849_2 "ication.teximage2d_align.cube_r8_63_2"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025849, VkglTestCase_025849_1, VkglTestCase_025849_2);

#define VkglTestCase_025850_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025850_2 "ication.teximage2d_align.cube_r8_63_4"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025850, VkglTestCase_025850_1, VkglTestCase_025850_2);

#define VkglTestCase_025851_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025851_2 "ication.teximage2d_align.cube_r8_63_8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025851, VkglTestCase_025851_1, VkglTestCase_025851_2);

#define VkglTestCase_025852_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_025852_2 "ation.teximage2d_align.cube_rgba4_51_1"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025852, VkglTestCase_025852_1, VkglTestCase_025852_2);

#define VkglTestCase_025853_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_025853_2 "ation.teximage2d_align.cube_rgba4_51_2"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025853, VkglTestCase_025853_1, VkglTestCase_025853_2);

#define VkglTestCase_025854_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_025854_2 "ation.teximage2d_align.cube_rgba4_51_4"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025854, VkglTestCase_025854_1, VkglTestCase_025854_2);

#define VkglTestCase_025855_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_025855_2 "ation.teximage2d_align.cube_rgba4_51_8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025855, VkglTestCase_025855_1, VkglTestCase_025855_2);

#define VkglTestCase_025856_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025856_2 "cation.teximage2d_align.cube_rgb8_39_1"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025856, VkglTestCase_025856_1, VkglTestCase_025856_2);

#define VkglTestCase_025857_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025857_2 "cation.teximage2d_align.cube_rgb8_39_2"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025857, VkglTestCase_025857_1, VkglTestCase_025857_2);

#define VkglTestCase_025858_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025858_2 "cation.teximage2d_align.cube_rgb8_39_4"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025858, VkglTestCase_025858_1, VkglTestCase_025858_2);

#define VkglTestCase_025859_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025859_2 "cation.teximage2d_align.cube_rgb8_39_8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025859, VkglTestCase_025859_1, VkglTestCase_025859_2);

#define VkglTestCase_025860_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_025860_2 "ation.teximage2d_align.cube_rgba8_47_1"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025860, VkglTestCase_025860_1, VkglTestCase_025860_2);

#define VkglTestCase_025861_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_025861_2 "ation.teximage2d_align.cube_rgba8_47_2"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025861, VkglTestCase_025861_1, VkglTestCase_025861_2);

#define VkglTestCase_025862_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_025862_2 "ation.teximage2d_align.cube_rgba8_47_4"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025862, VkglTestCase_025862_1, VkglTestCase_025862_2);

#define VkglTestCase_025863_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_025863_2 "ation.teximage2d_align.cube_rgba8_47_8"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025863, VkglTestCase_025863_1, VkglTestCase_025863_2);
