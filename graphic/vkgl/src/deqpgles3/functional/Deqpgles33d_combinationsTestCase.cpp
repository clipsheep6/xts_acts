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
#include "../ActsDeqpgles30025TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_024639_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024639_2 "ombinations.nearest_nearest_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024639, VkglTestCase_024639_1, VkglTestCase_024639_2);

#define VkglTestCase_024640_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024640_2 "mbinations.nearest_nearest_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024640, VkglTestCase_024640_1, VkglTestCase_024640_2);

#define VkglTestCase_024641_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024641_2 "mbinations.nearest_nearest_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024641, VkglTestCase_024641_1, VkglTestCase_024641_2);

#define VkglTestCase_024642_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024642_2 "mbinations.nearest_nearest_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024642, VkglTestCase_024642_1, VkglTestCase_024642_2);

#define VkglTestCase_024643_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024643_2 "mbinations.nearest_nearest_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024643, VkglTestCase_024643_1, VkglTestCase_024643_2);

#define VkglTestCase_024644_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024644_2 "mbinations.nearest_nearest_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024644, VkglTestCase_024644_1, VkglTestCase_024644_2);

#define VkglTestCase_024645_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024645_2 "mbinations.nearest_nearest_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024645, VkglTestCase_024645_1, VkglTestCase_024645_2);

#define VkglTestCase_024646_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024646_2 "mbinations.nearest_nearest_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024646, VkglTestCase_024646_1, VkglTestCase_024646_2);

#define VkglTestCase_024647_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024647_2 "mbinations.nearest_nearest_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024647, VkglTestCase_024647_1, VkglTestCase_024647_2);

#define VkglTestCase_024648_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024648_2 "mbinations.nearest_nearest_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024648, VkglTestCase_024648_1, VkglTestCase_024648_2);

#define VkglTestCase_024649_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024649_2 "mbinations.nearest_nearest_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024649, VkglTestCase_024649_1, VkglTestCase_024649_2);

#define VkglTestCase_024650_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024650_2 "mbinations.nearest_nearest_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024650, VkglTestCase_024650_1, VkglTestCase_024650_2);

#define VkglTestCase_024651_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024651_2 "mbinations.nearest_nearest_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024651, VkglTestCase_024651_1, VkglTestCase_024651_2);

#define VkglTestCase_024652_1 "dEQP-GLES3.functional.texture.filtering.3d.com"
#define VkglTestCase_024652_2 "binations.nearest_nearest_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024652, VkglTestCase_024652_1, VkglTestCase_024652_2);

#define VkglTestCase_024653_1 "dEQP-GLES3.functional.texture.filtering.3d.com"
#define VkglTestCase_024653_2 "binations.nearest_nearest_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024653, VkglTestCase_024653_1, VkglTestCase_024653_2);

#define VkglTestCase_024654_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024654_2 "mbinations.nearest_nearest_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024654, VkglTestCase_024654_1, VkglTestCase_024654_2);

#define VkglTestCase_024655_1 "dEQP-GLES3.functional.texture.filtering.3d.com"
#define VkglTestCase_024655_2 "binations.nearest_nearest_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024655, VkglTestCase_024655_1, VkglTestCase_024655_2);

#define VkglTestCase_024656_1 "dEQP-GLES3.functional.texture.filtering.3d.com"
#define VkglTestCase_024656_2 "binations.nearest_nearest_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024656, VkglTestCase_024656_1, VkglTestCase_024656_2);

#define VkglTestCase_024657_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024657_2 "mbinations.nearest_nearest_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024657, VkglTestCase_024657_1, VkglTestCase_024657_2);

#define VkglTestCase_024658_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024658_2 "mbinations.nearest_nearest_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024658, VkglTestCase_024658_1, VkglTestCase_024658_2);

#define VkglTestCase_024659_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024659_2 "mbinations.nearest_nearest_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024659, VkglTestCase_024659_1, VkglTestCase_024659_2);

#define VkglTestCase_024660_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024660_2 "mbinations.nearest_nearest_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024660, VkglTestCase_024660_1, VkglTestCase_024660_2);

#define VkglTestCase_024661_1 "dEQP-GLES3.functional.texture.filtering.3d.com"
#define VkglTestCase_024661_2 "binations.nearest_nearest_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024661, VkglTestCase_024661_1, VkglTestCase_024661_2);

#define VkglTestCase_024662_1 "dEQP-GLES3.functional.texture.filtering.3d.com"
#define VkglTestCase_024662_2 "binations.nearest_nearest_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024662, VkglTestCase_024662_1, VkglTestCase_024662_2);

#define VkglTestCase_024663_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024663_2 "mbinations.nearest_nearest_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024663, VkglTestCase_024663_1, VkglTestCase_024663_2);

#define VkglTestCase_024664_1 "dEQP-GLES3.functional.texture.filtering.3d.com"
#define VkglTestCase_024664_2 "binations.nearest_nearest_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024664, VkglTestCase_024664_1, VkglTestCase_024664_2);

#define VkglTestCase_024665_1 "dEQP-GLES3.functional.texture.filtering.3d.com"
#define VkglTestCase_024665_2 "binations.nearest_nearest_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024665, VkglTestCase_024665_1, VkglTestCase_024665_2);

#define VkglTestCase_024666_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024666_2 "ombinations.nearest_linear_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024666, VkglTestCase_024666_1, VkglTestCase_024666_2);

#define VkglTestCase_024667_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024667_2 "ombinations.nearest_linear_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024667, VkglTestCase_024667_1, VkglTestCase_024667_2);

#define VkglTestCase_024668_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024668_2 "ombinations.nearest_linear_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024668, VkglTestCase_024668_1, VkglTestCase_024668_2);

#define VkglTestCase_024669_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024669_2 "ombinations.nearest_linear_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024669, VkglTestCase_024669_1, VkglTestCase_024669_2);

#define VkglTestCase_024670_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024670_2 "mbinations.nearest_linear_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024670, VkglTestCase_024670_1, VkglTestCase_024670_2);

#define VkglTestCase_024671_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024671_2 "mbinations.nearest_linear_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024671, VkglTestCase_024671_1, VkglTestCase_024671_2);

#define VkglTestCase_024672_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024672_2 "ombinations.nearest_linear_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024672, VkglTestCase_024672_1, VkglTestCase_024672_2);

#define VkglTestCase_024673_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024673_2 "mbinations.nearest_linear_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024673, VkglTestCase_024673_1, VkglTestCase_024673_2);

#define VkglTestCase_024674_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024674_2 "mbinations.nearest_linear_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024674, VkglTestCase_024674_1, VkglTestCase_024674_2);

#define VkglTestCase_024675_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024675_2 "ombinations.nearest_linear_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024675, VkglTestCase_024675_1, VkglTestCase_024675_2);

#define VkglTestCase_024676_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024676_2 "mbinations.nearest_linear_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024676, VkglTestCase_024676_1, VkglTestCase_024676_2);

#define VkglTestCase_024677_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024677_2 "mbinations.nearest_linear_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024677, VkglTestCase_024677_1, VkglTestCase_024677_2);

#define VkglTestCase_024678_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024678_2 "mbinations.nearest_linear_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024678, VkglTestCase_024678_1, VkglTestCase_024678_2);

#define VkglTestCase_024679_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024679_2 "mbinations.nearest_linear_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024679, VkglTestCase_024679_1, VkglTestCase_024679_2);

#define VkglTestCase_024680_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024680_2 "mbinations.nearest_linear_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024680, VkglTestCase_024680_1, VkglTestCase_024680_2);

#define VkglTestCase_024681_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024681_2 "mbinations.nearest_linear_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024681, VkglTestCase_024681_1, VkglTestCase_024681_2);

#define VkglTestCase_024682_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024682_2 "mbinations.nearest_linear_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024682, VkglTestCase_024682_1, VkglTestCase_024682_2);

#define VkglTestCase_024683_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024683_2 "mbinations.nearest_linear_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024683, VkglTestCase_024683_1, VkglTestCase_024683_2);

#define VkglTestCase_024684_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024684_2 "ombinations.nearest_linear_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024684, VkglTestCase_024684_1, VkglTestCase_024684_2);

#define VkglTestCase_024685_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024685_2 "mbinations.nearest_linear_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024685, VkglTestCase_024685_1, VkglTestCase_024685_2);

#define VkglTestCase_024686_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024686_2 "mbinations.nearest_linear_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024686, VkglTestCase_024686_1, VkglTestCase_024686_2);

#define VkglTestCase_024687_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024687_2 "mbinations.nearest_linear_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024687, VkglTestCase_024687_1, VkglTestCase_024687_2);

#define VkglTestCase_024688_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024688_2 "mbinations.nearest_linear_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024688, VkglTestCase_024688_1, VkglTestCase_024688_2);

#define VkglTestCase_024689_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024689_2 "mbinations.nearest_linear_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024689, VkglTestCase_024689_1, VkglTestCase_024689_2);

#define VkglTestCase_024690_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024690_2 "mbinations.nearest_linear_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024690, VkglTestCase_024690_1, VkglTestCase_024690_2);

#define VkglTestCase_024691_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024691_2 "mbinations.nearest_linear_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024691, VkglTestCase_024691_1, VkglTestCase_024691_2);

#define VkglTestCase_024692_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024692_2 "mbinations.nearest_linear_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024692, VkglTestCase_024692_1, VkglTestCase_024692_2);

#define VkglTestCase_024693_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024693_2 "ombinations.linear_nearest_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024693, VkglTestCase_024693_1, VkglTestCase_024693_2);

#define VkglTestCase_024694_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024694_2 "ombinations.linear_nearest_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024694, VkglTestCase_024694_1, VkglTestCase_024694_2);

#define VkglTestCase_024695_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024695_2 "ombinations.linear_nearest_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024695, VkglTestCase_024695_1, VkglTestCase_024695_2);

#define VkglTestCase_024696_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024696_2 "ombinations.linear_nearest_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024696, VkglTestCase_024696_1, VkglTestCase_024696_2);

#define VkglTestCase_024697_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024697_2 "mbinations.linear_nearest_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024697, VkglTestCase_024697_1, VkglTestCase_024697_2);

#define VkglTestCase_024698_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024698_2 "mbinations.linear_nearest_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024698, VkglTestCase_024698_1, VkglTestCase_024698_2);

#define VkglTestCase_024699_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024699_2 "ombinations.linear_nearest_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024699, VkglTestCase_024699_1, VkglTestCase_024699_2);

#define VkglTestCase_024700_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024700_2 "mbinations.linear_nearest_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024700, VkglTestCase_024700_1, VkglTestCase_024700_2);

#define VkglTestCase_024701_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024701_2 "mbinations.linear_nearest_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024701, VkglTestCase_024701_1, VkglTestCase_024701_2);

#define VkglTestCase_024702_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024702_2 "ombinations.linear_nearest_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024702, VkglTestCase_024702_1, VkglTestCase_024702_2);

#define VkglTestCase_024703_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024703_2 "mbinations.linear_nearest_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024703, VkglTestCase_024703_1, VkglTestCase_024703_2);

#define VkglTestCase_024704_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024704_2 "mbinations.linear_nearest_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024704, VkglTestCase_024704_1, VkglTestCase_024704_2);

#define VkglTestCase_024705_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024705_2 "mbinations.linear_nearest_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024705, VkglTestCase_024705_1, VkglTestCase_024705_2);

#define VkglTestCase_024706_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024706_2 "mbinations.linear_nearest_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024706, VkglTestCase_024706_1, VkglTestCase_024706_2);

#define VkglTestCase_024707_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024707_2 "mbinations.linear_nearest_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024707, VkglTestCase_024707_1, VkglTestCase_024707_2);

#define VkglTestCase_024708_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024708_2 "mbinations.linear_nearest_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024708, VkglTestCase_024708_1, VkglTestCase_024708_2);

#define VkglTestCase_024709_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024709_2 "mbinations.linear_nearest_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024709, VkglTestCase_024709_1, VkglTestCase_024709_2);

#define VkglTestCase_024710_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024710_2 "mbinations.linear_nearest_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024710, VkglTestCase_024710_1, VkglTestCase_024710_2);

#define VkglTestCase_024711_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024711_2 "ombinations.linear_nearest_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024711, VkglTestCase_024711_1, VkglTestCase_024711_2);

#define VkglTestCase_024712_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024712_2 "mbinations.linear_nearest_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024712, VkglTestCase_024712_1, VkglTestCase_024712_2);

#define VkglTestCase_024713_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024713_2 "mbinations.linear_nearest_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024713, VkglTestCase_024713_1, VkglTestCase_024713_2);

#define VkglTestCase_024714_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024714_2 "mbinations.linear_nearest_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024714, VkglTestCase_024714_1, VkglTestCase_024714_2);

#define VkglTestCase_024715_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024715_2 "mbinations.linear_nearest_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024715, VkglTestCase_024715_1, VkglTestCase_024715_2);

#define VkglTestCase_024716_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024716_2 "mbinations.linear_nearest_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024716, VkglTestCase_024716_1, VkglTestCase_024716_2);

#define VkglTestCase_024717_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024717_2 "mbinations.linear_nearest_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024717, VkglTestCase_024717_1, VkglTestCase_024717_2);

#define VkglTestCase_024718_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024718_2 "mbinations.linear_nearest_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024718, VkglTestCase_024718_1, VkglTestCase_024718_2);

#define VkglTestCase_024719_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024719_2 "mbinations.linear_nearest_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024719, VkglTestCase_024719_1, VkglTestCase_024719_2);

#define VkglTestCase_024720_1 "dEQP-GLES3.functional.texture.filtering.3d."
#define VkglTestCase_024720_2 "combinations.linear_linear_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024720, VkglTestCase_024720_1, VkglTestCase_024720_2);

#define VkglTestCase_024721_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024721_2 "ombinations.linear_linear_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024721, VkglTestCase_024721_1, VkglTestCase_024721_2);

#define VkglTestCase_024722_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024722_2 "ombinations.linear_linear_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024722, VkglTestCase_024722_1, VkglTestCase_024722_2);

#define VkglTestCase_024723_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024723_2 "ombinations.linear_linear_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024723, VkglTestCase_024723_1, VkglTestCase_024723_2);

#define VkglTestCase_024724_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024724_2 "ombinations.linear_linear_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024724, VkglTestCase_024724_1, VkglTestCase_024724_2);

#define VkglTestCase_024725_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024725_2 "ombinations.linear_linear_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024725, VkglTestCase_024725_1, VkglTestCase_024725_2);

#define VkglTestCase_024726_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024726_2 "ombinations.linear_linear_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024726, VkglTestCase_024726_1, VkglTestCase_024726_2);

#define VkglTestCase_024727_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024727_2 "ombinations.linear_linear_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024727, VkglTestCase_024727_1, VkglTestCase_024727_2);

#define VkglTestCase_024728_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024728_2 "ombinations.linear_linear_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024728, VkglTestCase_024728_1, VkglTestCase_024728_2);

#define VkglTestCase_024729_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024729_2 "ombinations.linear_linear_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024729, VkglTestCase_024729_1, VkglTestCase_024729_2);

#define VkglTestCase_024730_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024730_2 "ombinations.linear_linear_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024730, VkglTestCase_024730_1, VkglTestCase_024730_2);

#define VkglTestCase_024731_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024731_2 "ombinations.linear_linear_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024731, VkglTestCase_024731_1, VkglTestCase_024731_2);

#define VkglTestCase_024732_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024732_2 "ombinations.linear_linear_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024732, VkglTestCase_024732_1, VkglTestCase_024732_2);

#define VkglTestCase_024733_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024733_2 "mbinations.linear_linear_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024733, VkglTestCase_024733_1, VkglTestCase_024733_2);

#define VkglTestCase_024734_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024734_2 "mbinations.linear_linear_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024734, VkglTestCase_024734_1, VkglTestCase_024734_2);

#define VkglTestCase_024735_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024735_2 "ombinations.linear_linear_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024735, VkglTestCase_024735_1, VkglTestCase_024735_2);

#define VkglTestCase_024736_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024736_2 "mbinations.linear_linear_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024736, VkglTestCase_024736_1, VkglTestCase_024736_2);

#define VkglTestCase_024737_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024737_2 "mbinations.linear_linear_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024737, VkglTestCase_024737_1, VkglTestCase_024737_2);

#define VkglTestCase_024738_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024738_2 "ombinations.linear_linear_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024738, VkglTestCase_024738_1, VkglTestCase_024738_2);

#define VkglTestCase_024739_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024739_2 "ombinations.linear_linear_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024739, VkglTestCase_024739_1, VkglTestCase_024739_2);

#define VkglTestCase_024740_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024740_2 "ombinations.linear_linear_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024740, VkglTestCase_024740_1, VkglTestCase_024740_2);

#define VkglTestCase_024741_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024741_2 "ombinations.linear_linear_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024741, VkglTestCase_024741_1, VkglTestCase_024741_2);

#define VkglTestCase_024742_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024742_2 "mbinations.linear_linear_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024742, VkglTestCase_024742_1, VkglTestCase_024742_2);

#define VkglTestCase_024743_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024743_2 "mbinations.linear_linear_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024743, VkglTestCase_024743_1, VkglTestCase_024743_2);

#define VkglTestCase_024744_1 "dEQP-GLES3.functional.texture.filtering.3d.c"
#define VkglTestCase_024744_2 "ombinations.linear_linear_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024744, VkglTestCase_024744_1, VkglTestCase_024744_2);

#define VkglTestCase_024745_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024745_2 "mbinations.linear_linear_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024745, VkglTestCase_024745_1, VkglTestCase_024745_2);

#define VkglTestCase_024746_1 "dEQP-GLES3.functional.texture.filtering.3d.co"
#define VkglTestCase_024746_2 "mbinations.linear_linear_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024746, VkglTestCase_024746_1, VkglTestCase_024746_2);

#define VkglTestCase_024747_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024747_2 "ons.nearest_mipmap_nearest_nearest_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024747, VkglTestCase_024747_1, VkglTestCase_024747_2);

#define VkglTestCase_024748_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024748_2 "ons.nearest_mipmap_nearest_nearest_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024748, VkglTestCase_024748_1, VkglTestCase_024748_2);

#define VkglTestCase_024749_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024749_2 "ons.nearest_mipmap_nearest_nearest_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024749, VkglTestCase_024749_1, VkglTestCase_024749_2);

#define VkglTestCase_024750_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024750_2 "ons.nearest_mipmap_nearest_nearest_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024750, VkglTestCase_024750_1, VkglTestCase_024750_2);

#define VkglTestCase_024751_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024751_2 "ns.nearest_mipmap_nearest_nearest_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024751, VkglTestCase_024751_1, VkglTestCase_024751_2);

#define VkglTestCase_024752_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024752_2 "ns.nearest_mipmap_nearest_nearest_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024752, VkglTestCase_024752_1, VkglTestCase_024752_2);

#define VkglTestCase_024753_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024753_2 "ons.nearest_mipmap_nearest_nearest_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024753, VkglTestCase_024753_1, VkglTestCase_024753_2);

#define VkglTestCase_024754_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024754_2 "ns.nearest_mipmap_nearest_nearest_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024754, VkglTestCase_024754_1, VkglTestCase_024754_2);

#define VkglTestCase_024755_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024755_2 "ns.nearest_mipmap_nearest_nearest_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024755, VkglTestCase_024755_1, VkglTestCase_024755_2);

#define VkglTestCase_024756_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024756_2 "ons.nearest_mipmap_nearest_nearest_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024756, VkglTestCase_024756_1, VkglTestCase_024756_2);

#define VkglTestCase_024757_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024757_2 "ns.nearest_mipmap_nearest_nearest_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024757, VkglTestCase_024757_1, VkglTestCase_024757_2);

#define VkglTestCase_024758_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024758_2 "ns.nearest_mipmap_nearest_nearest_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024758, VkglTestCase_024758_1, VkglTestCase_024758_2);

#define VkglTestCase_024759_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024759_2 "ns.nearest_mipmap_nearest_nearest_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024759, VkglTestCase_024759_1, VkglTestCase_024759_2);

#define VkglTestCase_024760_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024760_2 "ns.nearest_mipmap_nearest_nearest_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024760, VkglTestCase_024760_1, VkglTestCase_024760_2);

#define VkglTestCase_024761_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024761_2 "ns.nearest_mipmap_nearest_nearest_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024761, VkglTestCase_024761_1, VkglTestCase_024761_2);

#define VkglTestCase_024762_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024762_2 "ns.nearest_mipmap_nearest_nearest_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024762, VkglTestCase_024762_1, VkglTestCase_024762_2);

#define VkglTestCase_024763_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024763_2 "ns.nearest_mipmap_nearest_nearest_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024763, VkglTestCase_024763_1, VkglTestCase_024763_2);

#define VkglTestCase_024764_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024764_2 "ns.nearest_mipmap_nearest_nearest_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024764, VkglTestCase_024764_1, VkglTestCase_024764_2);

#define VkglTestCase_024765_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024765_2 "ons.nearest_mipmap_nearest_nearest_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024765, VkglTestCase_024765_1, VkglTestCase_024765_2);

#define VkglTestCase_024766_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024766_2 "ns.nearest_mipmap_nearest_nearest_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024766, VkglTestCase_024766_1, VkglTestCase_024766_2);

#define VkglTestCase_024767_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024767_2 "ns.nearest_mipmap_nearest_nearest_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024767, VkglTestCase_024767_1, VkglTestCase_024767_2);

#define VkglTestCase_024768_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024768_2 "ns.nearest_mipmap_nearest_nearest_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024768, VkglTestCase_024768_1, VkglTestCase_024768_2);

#define VkglTestCase_024769_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024769_2 "ns.nearest_mipmap_nearest_nearest_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024769, VkglTestCase_024769_1, VkglTestCase_024769_2);

#define VkglTestCase_024770_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024770_2 "ns.nearest_mipmap_nearest_nearest_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024770, VkglTestCase_024770_1, VkglTestCase_024770_2);

#define VkglTestCase_024771_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024771_2 "ns.nearest_mipmap_nearest_nearest_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024771, VkglTestCase_024771_1, VkglTestCase_024771_2);

#define VkglTestCase_024772_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024772_2 "ns.nearest_mipmap_nearest_nearest_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024772, VkglTestCase_024772_1, VkglTestCase_024772_2);

#define VkglTestCase_024773_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024773_2 "ns.nearest_mipmap_nearest_nearest_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024773, VkglTestCase_024773_1, VkglTestCase_024773_2);

#define VkglTestCase_024774_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024774_2 "ions.nearest_mipmap_nearest_linear_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024774, VkglTestCase_024774_1, VkglTestCase_024774_2);

#define VkglTestCase_024775_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024775_2 "ons.nearest_mipmap_nearest_linear_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024775, VkglTestCase_024775_1, VkglTestCase_024775_2);

#define VkglTestCase_024776_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024776_2 "ons.nearest_mipmap_nearest_linear_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024776, VkglTestCase_024776_1, VkglTestCase_024776_2);

#define VkglTestCase_024777_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024777_2 "ons.nearest_mipmap_nearest_linear_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024777, VkglTestCase_024777_1, VkglTestCase_024777_2);

#define VkglTestCase_024778_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024778_2 "ons.nearest_mipmap_nearest_linear_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024778, VkglTestCase_024778_1, VkglTestCase_024778_2);

#define VkglTestCase_024779_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024779_2 "ons.nearest_mipmap_nearest_linear_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024779, VkglTestCase_024779_1, VkglTestCase_024779_2);

#define VkglTestCase_024780_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024780_2 "ons.nearest_mipmap_nearest_linear_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024780, VkglTestCase_024780_1, VkglTestCase_024780_2);

#define VkglTestCase_024781_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024781_2 "ons.nearest_mipmap_nearest_linear_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024781, VkglTestCase_024781_1, VkglTestCase_024781_2);

#define VkglTestCase_024782_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024782_2 "ons.nearest_mipmap_nearest_linear_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024782, VkglTestCase_024782_1, VkglTestCase_024782_2);

#define VkglTestCase_024783_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024783_2 "ons.nearest_mipmap_nearest_linear_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024783, VkglTestCase_024783_1, VkglTestCase_024783_2);

#define VkglTestCase_024784_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024784_2 "ons.nearest_mipmap_nearest_linear_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024784, VkglTestCase_024784_1, VkglTestCase_024784_2);

#define VkglTestCase_024785_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024785_2 "ons.nearest_mipmap_nearest_linear_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024785, VkglTestCase_024785_1, VkglTestCase_024785_2);

#define VkglTestCase_024786_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024786_2 "ons.nearest_mipmap_nearest_linear_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024786, VkglTestCase_024786_1, VkglTestCase_024786_2);

#define VkglTestCase_024787_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024787_2 "ns.nearest_mipmap_nearest_linear_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024787, VkglTestCase_024787_1, VkglTestCase_024787_2);

#define VkglTestCase_024788_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024788_2 "ns.nearest_mipmap_nearest_linear_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024788, VkglTestCase_024788_1, VkglTestCase_024788_2);

#define VkglTestCase_024789_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024789_2 "ons.nearest_mipmap_nearest_linear_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024789, VkglTestCase_024789_1, VkglTestCase_024789_2);

#define VkglTestCase_024790_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024790_2 "ns.nearest_mipmap_nearest_linear_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024790, VkglTestCase_024790_1, VkglTestCase_024790_2);

#define VkglTestCase_024791_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024791_2 "ns.nearest_mipmap_nearest_linear_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024791, VkglTestCase_024791_1, VkglTestCase_024791_2);

#define VkglTestCase_024792_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024792_2 "ons.nearest_mipmap_nearest_linear_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024792, VkglTestCase_024792_1, VkglTestCase_024792_2);

#define VkglTestCase_024793_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024793_2 "ons.nearest_mipmap_nearest_linear_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024793, VkglTestCase_024793_1, VkglTestCase_024793_2);

#define VkglTestCase_024794_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024794_2 "ons.nearest_mipmap_nearest_linear_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024794, VkglTestCase_024794_1, VkglTestCase_024794_2);

#define VkglTestCase_024795_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024795_2 "ons.nearest_mipmap_nearest_linear_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024795, VkglTestCase_024795_1, VkglTestCase_024795_2);

#define VkglTestCase_024796_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024796_2 "ns.nearest_mipmap_nearest_linear_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024796, VkglTestCase_024796_1, VkglTestCase_024796_2);

#define VkglTestCase_024797_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024797_2 "ns.nearest_mipmap_nearest_linear_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024797, VkglTestCase_024797_1, VkglTestCase_024797_2);

#define VkglTestCase_024798_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024798_2 "ons.nearest_mipmap_nearest_linear_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024798, VkglTestCase_024798_1, VkglTestCase_024798_2);

#define VkglTestCase_024799_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024799_2 "ns.nearest_mipmap_nearest_linear_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024799, VkglTestCase_024799_1, VkglTestCase_024799_2);

#define VkglTestCase_024800_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024800_2 "ns.nearest_mipmap_nearest_linear_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024800, VkglTestCase_024800_1, VkglTestCase_024800_2);

#define VkglTestCase_024801_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024801_2 "ions.linear_mipmap_nearest_nearest_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024801, VkglTestCase_024801_1, VkglTestCase_024801_2);

#define VkglTestCase_024802_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024802_2 "ons.linear_mipmap_nearest_nearest_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024802, VkglTestCase_024802_1, VkglTestCase_024802_2);

#define VkglTestCase_024803_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024803_2 "ons.linear_mipmap_nearest_nearest_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024803, VkglTestCase_024803_1, VkglTestCase_024803_2);

#define VkglTestCase_024804_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024804_2 "ons.linear_mipmap_nearest_nearest_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024804, VkglTestCase_024804_1, VkglTestCase_024804_2);

#define VkglTestCase_024805_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024805_2 "ons.linear_mipmap_nearest_nearest_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024805, VkglTestCase_024805_1, VkglTestCase_024805_2);

#define VkglTestCase_024806_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024806_2 "ons.linear_mipmap_nearest_nearest_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024806, VkglTestCase_024806_1, VkglTestCase_024806_2);

#define VkglTestCase_024807_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024807_2 "ons.linear_mipmap_nearest_nearest_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024807, VkglTestCase_024807_1, VkglTestCase_024807_2);

#define VkglTestCase_024808_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024808_2 "ons.linear_mipmap_nearest_nearest_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024808, VkglTestCase_024808_1, VkglTestCase_024808_2);

#define VkglTestCase_024809_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024809_2 "ons.linear_mipmap_nearest_nearest_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024809, VkglTestCase_024809_1, VkglTestCase_024809_2);

#define VkglTestCase_024810_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024810_2 "ons.linear_mipmap_nearest_nearest_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024810, VkglTestCase_024810_1, VkglTestCase_024810_2);

#define VkglTestCase_024811_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024811_2 "ons.linear_mipmap_nearest_nearest_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024811, VkglTestCase_024811_1, VkglTestCase_024811_2);

#define VkglTestCase_024812_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024812_2 "ons.linear_mipmap_nearest_nearest_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024812, VkglTestCase_024812_1, VkglTestCase_024812_2);

#define VkglTestCase_024813_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024813_2 "ons.linear_mipmap_nearest_nearest_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024813, VkglTestCase_024813_1, VkglTestCase_024813_2);

#define VkglTestCase_024814_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024814_2 "ns.linear_mipmap_nearest_nearest_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024814, VkglTestCase_024814_1, VkglTestCase_024814_2);

#define VkglTestCase_024815_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024815_2 "ns.linear_mipmap_nearest_nearest_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024815, VkglTestCase_024815_1, VkglTestCase_024815_2);

#define VkglTestCase_024816_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024816_2 "ons.linear_mipmap_nearest_nearest_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024816, VkglTestCase_024816_1, VkglTestCase_024816_2);

#define VkglTestCase_024817_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024817_2 "ns.linear_mipmap_nearest_nearest_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024817, VkglTestCase_024817_1, VkglTestCase_024817_2);

#define VkglTestCase_024818_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024818_2 "ns.linear_mipmap_nearest_nearest_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024818, VkglTestCase_024818_1, VkglTestCase_024818_2);

#define VkglTestCase_024819_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024819_2 "ons.linear_mipmap_nearest_nearest_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024819, VkglTestCase_024819_1, VkglTestCase_024819_2);

#define VkglTestCase_024820_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024820_2 "ons.linear_mipmap_nearest_nearest_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024820, VkglTestCase_024820_1, VkglTestCase_024820_2);

#define VkglTestCase_024821_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024821_2 "ons.linear_mipmap_nearest_nearest_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024821, VkglTestCase_024821_1, VkglTestCase_024821_2);

#define VkglTestCase_024822_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024822_2 "ons.linear_mipmap_nearest_nearest_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024822, VkglTestCase_024822_1, VkglTestCase_024822_2);

#define VkglTestCase_024823_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024823_2 "ns.linear_mipmap_nearest_nearest_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024823, VkglTestCase_024823_1, VkglTestCase_024823_2);

#define VkglTestCase_024824_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024824_2 "ns.linear_mipmap_nearest_nearest_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024824, VkglTestCase_024824_1, VkglTestCase_024824_2);

#define VkglTestCase_024825_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024825_2 "ons.linear_mipmap_nearest_nearest_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024825, VkglTestCase_024825_1, VkglTestCase_024825_2);

#define VkglTestCase_024826_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024826_2 "ns.linear_mipmap_nearest_nearest_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024826, VkglTestCase_024826_1, VkglTestCase_024826_2);

#define VkglTestCase_024827_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024827_2 "ns.linear_mipmap_nearest_nearest_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024827, VkglTestCase_024827_1, VkglTestCase_024827_2);

#define VkglTestCase_024828_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024828_2 "ions.linear_mipmap_nearest_linear_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024828, VkglTestCase_024828_1, VkglTestCase_024828_2);

#define VkglTestCase_024829_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024829_2 "ions.linear_mipmap_nearest_linear_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024829, VkglTestCase_024829_1, VkglTestCase_024829_2);

#define VkglTestCase_024830_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024830_2 "ions.linear_mipmap_nearest_linear_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024830, VkglTestCase_024830_1, VkglTestCase_024830_2);

#define VkglTestCase_024831_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024831_2 "ions.linear_mipmap_nearest_linear_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024831, VkglTestCase_024831_1, VkglTestCase_024831_2);

#define VkglTestCase_024832_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024832_2 "ons.linear_mipmap_nearest_linear_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024832, VkglTestCase_024832_1, VkglTestCase_024832_2);

#define VkglTestCase_024833_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024833_2 "ons.linear_mipmap_nearest_linear_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024833, VkglTestCase_024833_1, VkglTestCase_024833_2);

#define VkglTestCase_024834_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024834_2 "ions.linear_mipmap_nearest_linear_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024834, VkglTestCase_024834_1, VkglTestCase_024834_2);

#define VkglTestCase_024835_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024835_2 "ons.linear_mipmap_nearest_linear_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024835, VkglTestCase_024835_1, VkglTestCase_024835_2);

#define VkglTestCase_024836_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024836_2 "ons.linear_mipmap_nearest_linear_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024836, VkglTestCase_024836_1, VkglTestCase_024836_2);

#define VkglTestCase_024837_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024837_2 "ions.linear_mipmap_nearest_linear_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024837, VkglTestCase_024837_1, VkglTestCase_024837_2);

#define VkglTestCase_024838_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024838_2 "ons.linear_mipmap_nearest_linear_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024838, VkglTestCase_024838_1, VkglTestCase_024838_2);

#define VkglTestCase_024839_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024839_2 "ons.linear_mipmap_nearest_linear_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024839, VkglTestCase_024839_1, VkglTestCase_024839_2);

#define VkglTestCase_024840_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024840_2 "ons.linear_mipmap_nearest_linear_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024840, VkglTestCase_024840_1, VkglTestCase_024840_2);

#define VkglTestCase_024841_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024841_2 "ons.linear_mipmap_nearest_linear_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024841, VkglTestCase_024841_1, VkglTestCase_024841_2);

#define VkglTestCase_024842_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024842_2 "ons.linear_mipmap_nearest_linear_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024842, VkglTestCase_024842_1, VkglTestCase_024842_2);

#define VkglTestCase_024843_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024843_2 "ons.linear_mipmap_nearest_linear_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024843, VkglTestCase_024843_1, VkglTestCase_024843_2);

#define VkglTestCase_024844_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024844_2 "ons.linear_mipmap_nearest_linear_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024844, VkglTestCase_024844_1, VkglTestCase_024844_2);

#define VkglTestCase_024845_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024845_2 "ons.linear_mipmap_nearest_linear_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024845, VkglTestCase_024845_1, VkglTestCase_024845_2);

#define VkglTestCase_024846_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024846_2 "ions.linear_mipmap_nearest_linear_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024846, VkglTestCase_024846_1, VkglTestCase_024846_2);

#define VkglTestCase_024847_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024847_2 "ons.linear_mipmap_nearest_linear_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024847, VkglTestCase_024847_1, VkglTestCase_024847_2);

#define VkglTestCase_024848_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024848_2 "ons.linear_mipmap_nearest_linear_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024848, VkglTestCase_024848_1, VkglTestCase_024848_2);

#define VkglTestCase_024849_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024849_2 "ons.linear_mipmap_nearest_linear_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024849, VkglTestCase_024849_1, VkglTestCase_024849_2);

#define VkglTestCase_024850_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024850_2 "ons.linear_mipmap_nearest_linear_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024850, VkglTestCase_024850_1, VkglTestCase_024850_2);

#define VkglTestCase_024851_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024851_2 "ons.linear_mipmap_nearest_linear_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024851, VkglTestCase_024851_1, VkglTestCase_024851_2);

#define VkglTestCase_024852_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024852_2 "ons.linear_mipmap_nearest_linear_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024852, VkglTestCase_024852_1, VkglTestCase_024852_2);

#define VkglTestCase_024853_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024853_2 "ons.linear_mipmap_nearest_linear_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024853, VkglTestCase_024853_1, VkglTestCase_024853_2);

#define VkglTestCase_024854_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024854_2 "ons.linear_mipmap_nearest_linear_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024854, VkglTestCase_024854_1, VkglTestCase_024854_2);

#define VkglTestCase_024855_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024855_2 "ions.nearest_mipmap_linear_nearest_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024855, VkglTestCase_024855_1, VkglTestCase_024855_2);

#define VkglTestCase_024856_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024856_2 "ons.nearest_mipmap_linear_nearest_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024856, VkglTestCase_024856_1, VkglTestCase_024856_2);

#define VkglTestCase_024857_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024857_2 "ons.nearest_mipmap_linear_nearest_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024857, VkglTestCase_024857_1, VkglTestCase_024857_2);

#define VkglTestCase_024858_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024858_2 "ons.nearest_mipmap_linear_nearest_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024858, VkglTestCase_024858_1, VkglTestCase_024858_2);

#define VkglTestCase_024859_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024859_2 "ons.nearest_mipmap_linear_nearest_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024859, VkglTestCase_024859_1, VkglTestCase_024859_2);

#define VkglTestCase_024860_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024860_2 "ons.nearest_mipmap_linear_nearest_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024860, VkglTestCase_024860_1, VkglTestCase_024860_2);

#define VkglTestCase_024861_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024861_2 "ons.nearest_mipmap_linear_nearest_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024861, VkglTestCase_024861_1, VkglTestCase_024861_2);

#define VkglTestCase_024862_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024862_2 "ons.nearest_mipmap_linear_nearest_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024862, VkglTestCase_024862_1, VkglTestCase_024862_2);

#define VkglTestCase_024863_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024863_2 "ons.nearest_mipmap_linear_nearest_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024863, VkglTestCase_024863_1, VkglTestCase_024863_2);

#define VkglTestCase_024864_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024864_2 "ons.nearest_mipmap_linear_nearest_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024864, VkglTestCase_024864_1, VkglTestCase_024864_2);

#define VkglTestCase_024865_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024865_2 "ons.nearest_mipmap_linear_nearest_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024865, VkglTestCase_024865_1, VkglTestCase_024865_2);

#define VkglTestCase_024866_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024866_2 "ons.nearest_mipmap_linear_nearest_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024866, VkglTestCase_024866_1, VkglTestCase_024866_2);

#define VkglTestCase_024867_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024867_2 "ons.nearest_mipmap_linear_nearest_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024867, VkglTestCase_024867_1, VkglTestCase_024867_2);

#define VkglTestCase_024868_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024868_2 "ns.nearest_mipmap_linear_nearest_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024868, VkglTestCase_024868_1, VkglTestCase_024868_2);

#define VkglTestCase_024869_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024869_2 "ns.nearest_mipmap_linear_nearest_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024869, VkglTestCase_024869_1, VkglTestCase_024869_2);

#define VkglTestCase_024870_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024870_2 "ons.nearest_mipmap_linear_nearest_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024870, VkglTestCase_024870_1, VkglTestCase_024870_2);

#define VkglTestCase_024871_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024871_2 "ns.nearest_mipmap_linear_nearest_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024871, VkglTestCase_024871_1, VkglTestCase_024871_2);

#define VkglTestCase_024872_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024872_2 "ns.nearest_mipmap_linear_nearest_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024872, VkglTestCase_024872_1, VkglTestCase_024872_2);

#define VkglTestCase_024873_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024873_2 "ons.nearest_mipmap_linear_nearest_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024873, VkglTestCase_024873_1, VkglTestCase_024873_2);

#define VkglTestCase_024874_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024874_2 "ons.nearest_mipmap_linear_nearest_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024874, VkglTestCase_024874_1, VkglTestCase_024874_2);

#define VkglTestCase_024875_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024875_2 "ons.nearest_mipmap_linear_nearest_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024875, VkglTestCase_024875_1, VkglTestCase_024875_2);

#define VkglTestCase_024876_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024876_2 "ons.nearest_mipmap_linear_nearest_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024876, VkglTestCase_024876_1, VkglTestCase_024876_2);

#define VkglTestCase_024877_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024877_2 "ns.nearest_mipmap_linear_nearest_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024877, VkglTestCase_024877_1, VkglTestCase_024877_2);

#define VkglTestCase_024878_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024878_2 "ns.nearest_mipmap_linear_nearest_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024878, VkglTestCase_024878_1, VkglTestCase_024878_2);

#define VkglTestCase_024879_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024879_2 "ons.nearest_mipmap_linear_nearest_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024879, VkglTestCase_024879_1, VkglTestCase_024879_2);

#define VkglTestCase_024880_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024880_2 "ns.nearest_mipmap_linear_nearest_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024880, VkglTestCase_024880_1, VkglTestCase_024880_2);

#define VkglTestCase_024881_1 "dEQP-GLES3.functional.texture.filtering.3d.combinatio"
#define VkglTestCase_024881_2 "ns.nearest_mipmap_linear_nearest_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024881, VkglTestCase_024881_1, VkglTestCase_024881_2);

#define VkglTestCase_024882_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024882_2 "ions.nearest_mipmap_linear_linear_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024882, VkglTestCase_024882_1, VkglTestCase_024882_2);

#define VkglTestCase_024883_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024883_2 "ions.nearest_mipmap_linear_linear_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024883, VkglTestCase_024883_1, VkglTestCase_024883_2);

#define VkglTestCase_024884_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024884_2 "ions.nearest_mipmap_linear_linear_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024884, VkglTestCase_024884_1, VkglTestCase_024884_2);

#define VkglTestCase_024885_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024885_2 "ions.nearest_mipmap_linear_linear_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024885, VkglTestCase_024885_1, VkglTestCase_024885_2);

#define VkglTestCase_024886_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024886_2 "ons.nearest_mipmap_linear_linear_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024886, VkglTestCase_024886_1, VkglTestCase_024886_2);

#define VkglTestCase_024887_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024887_2 "ons.nearest_mipmap_linear_linear_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024887, VkglTestCase_024887_1, VkglTestCase_024887_2);

#define VkglTestCase_024888_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024888_2 "ions.nearest_mipmap_linear_linear_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024888, VkglTestCase_024888_1, VkglTestCase_024888_2);

#define VkglTestCase_024889_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024889_2 "ons.nearest_mipmap_linear_linear_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024889, VkglTestCase_024889_1, VkglTestCase_024889_2);

#define VkglTestCase_024890_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024890_2 "ons.nearest_mipmap_linear_linear_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024890, VkglTestCase_024890_1, VkglTestCase_024890_2);

#define VkglTestCase_024891_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024891_2 "ions.nearest_mipmap_linear_linear_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024891, VkglTestCase_024891_1, VkglTestCase_024891_2);

#define VkglTestCase_024892_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024892_2 "ons.nearest_mipmap_linear_linear_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024892, VkglTestCase_024892_1, VkglTestCase_024892_2);

#define VkglTestCase_024893_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024893_2 "ons.nearest_mipmap_linear_linear_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024893, VkglTestCase_024893_1, VkglTestCase_024893_2);

#define VkglTestCase_024894_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024894_2 "ons.nearest_mipmap_linear_linear_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024894, VkglTestCase_024894_1, VkglTestCase_024894_2);

#define VkglTestCase_024895_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024895_2 "ons.nearest_mipmap_linear_linear_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024895, VkglTestCase_024895_1, VkglTestCase_024895_2);

#define VkglTestCase_024896_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024896_2 "ons.nearest_mipmap_linear_linear_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024896, VkglTestCase_024896_1, VkglTestCase_024896_2);

#define VkglTestCase_024897_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024897_2 "ons.nearest_mipmap_linear_linear_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024897, VkglTestCase_024897_1, VkglTestCase_024897_2);

#define VkglTestCase_024898_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024898_2 "ons.nearest_mipmap_linear_linear_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024898, VkglTestCase_024898_1, VkglTestCase_024898_2);

#define VkglTestCase_024899_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024899_2 "ons.nearest_mipmap_linear_linear_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024899, VkglTestCase_024899_1, VkglTestCase_024899_2);

#define VkglTestCase_024900_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024900_2 "ions.nearest_mipmap_linear_linear_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024900, VkglTestCase_024900_1, VkglTestCase_024900_2);

#define VkglTestCase_024901_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024901_2 "ons.nearest_mipmap_linear_linear_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024901, VkglTestCase_024901_1, VkglTestCase_024901_2);

#define VkglTestCase_024902_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024902_2 "ons.nearest_mipmap_linear_linear_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024902, VkglTestCase_024902_1, VkglTestCase_024902_2);

#define VkglTestCase_024903_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024903_2 "ons.nearest_mipmap_linear_linear_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024903, VkglTestCase_024903_1, VkglTestCase_024903_2);

#define VkglTestCase_024904_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024904_2 "ons.nearest_mipmap_linear_linear_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024904, VkglTestCase_024904_1, VkglTestCase_024904_2);

#define VkglTestCase_024905_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024905_2 "ons.nearest_mipmap_linear_linear_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024905, VkglTestCase_024905_1, VkglTestCase_024905_2);

#define VkglTestCase_024906_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024906_2 "ons.nearest_mipmap_linear_linear_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024906, VkglTestCase_024906_1, VkglTestCase_024906_2);

#define VkglTestCase_024907_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024907_2 "ons.nearest_mipmap_linear_linear_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024907, VkglTestCase_024907_1, VkglTestCase_024907_2);

#define VkglTestCase_024908_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024908_2 "ons.nearest_mipmap_linear_linear_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024908, VkglTestCase_024908_1, VkglTestCase_024908_2);

#define VkglTestCase_024909_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024909_2 "ions.linear_mipmap_linear_nearest_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024909, VkglTestCase_024909_1, VkglTestCase_024909_2);

#define VkglTestCase_024910_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024910_2 "ions.linear_mipmap_linear_nearest_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024910, VkglTestCase_024910_1, VkglTestCase_024910_2);

#define VkglTestCase_024911_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024911_2 "ions.linear_mipmap_linear_nearest_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024911, VkglTestCase_024911_1, VkglTestCase_024911_2);

#define VkglTestCase_024912_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024912_2 "ions.linear_mipmap_linear_nearest_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024912, VkglTestCase_024912_1, VkglTestCase_024912_2);

#define VkglTestCase_024913_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024913_2 "ons.linear_mipmap_linear_nearest_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024913, VkglTestCase_024913_1, VkglTestCase_024913_2);

#define VkglTestCase_024914_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024914_2 "ons.linear_mipmap_linear_nearest_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024914, VkglTestCase_024914_1, VkglTestCase_024914_2);

#define VkglTestCase_024915_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024915_2 "ions.linear_mipmap_linear_nearest_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024915, VkglTestCase_024915_1, VkglTestCase_024915_2);

#define VkglTestCase_024916_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024916_2 "ons.linear_mipmap_linear_nearest_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024916, VkglTestCase_024916_1, VkglTestCase_024916_2);

#define VkglTestCase_024917_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024917_2 "ons.linear_mipmap_linear_nearest_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024917, VkglTestCase_024917_1, VkglTestCase_024917_2);

#define VkglTestCase_024918_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024918_2 "ions.linear_mipmap_linear_nearest_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024918, VkglTestCase_024918_1, VkglTestCase_024918_2);

#define VkglTestCase_024919_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024919_2 "ons.linear_mipmap_linear_nearest_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024919, VkglTestCase_024919_1, VkglTestCase_024919_2);

#define VkglTestCase_024920_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024920_2 "ons.linear_mipmap_linear_nearest_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024920, VkglTestCase_024920_1, VkglTestCase_024920_2);

#define VkglTestCase_024921_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024921_2 "ons.linear_mipmap_linear_nearest_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024921, VkglTestCase_024921_1, VkglTestCase_024921_2);

#define VkglTestCase_024922_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024922_2 "ons.linear_mipmap_linear_nearest_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024922, VkglTestCase_024922_1, VkglTestCase_024922_2);

#define VkglTestCase_024923_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024923_2 "ons.linear_mipmap_linear_nearest_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024923, VkglTestCase_024923_1, VkglTestCase_024923_2);

#define VkglTestCase_024924_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024924_2 "ons.linear_mipmap_linear_nearest_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024924, VkglTestCase_024924_1, VkglTestCase_024924_2);

#define VkglTestCase_024925_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024925_2 "ons.linear_mipmap_linear_nearest_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024925, VkglTestCase_024925_1, VkglTestCase_024925_2);

#define VkglTestCase_024926_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024926_2 "ons.linear_mipmap_linear_nearest_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024926, VkglTestCase_024926_1, VkglTestCase_024926_2);

#define VkglTestCase_024927_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024927_2 "ions.linear_mipmap_linear_nearest_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024927, VkglTestCase_024927_1, VkglTestCase_024927_2);

#define VkglTestCase_024928_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024928_2 "ons.linear_mipmap_linear_nearest_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024928, VkglTestCase_024928_1, VkglTestCase_024928_2);

#define VkglTestCase_024929_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024929_2 "ons.linear_mipmap_linear_nearest_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024929, VkglTestCase_024929_1, VkglTestCase_024929_2);

#define VkglTestCase_024930_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024930_2 "ons.linear_mipmap_linear_nearest_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024930, VkglTestCase_024930_1, VkglTestCase_024930_2);

#define VkglTestCase_024931_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024931_2 "ons.linear_mipmap_linear_nearest_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024931, VkglTestCase_024931_1, VkglTestCase_024931_2);

#define VkglTestCase_024932_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024932_2 "ons.linear_mipmap_linear_nearest_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024932, VkglTestCase_024932_1, VkglTestCase_024932_2);

#define VkglTestCase_024933_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024933_2 "ons.linear_mipmap_linear_nearest_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024933, VkglTestCase_024933_1, VkglTestCase_024933_2);

#define VkglTestCase_024934_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024934_2 "ons.linear_mipmap_linear_nearest_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024934, VkglTestCase_024934_1, VkglTestCase_024934_2);

#define VkglTestCase_024935_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024935_2 "ons.linear_mipmap_linear_nearest_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024935, VkglTestCase_024935_1, VkglTestCase_024935_2);

#define VkglTestCase_024936_1 "dEQP-GLES3.functional.texture.filtering.3d.combina"
#define VkglTestCase_024936_2 "tions.linear_mipmap_linear_linear_clamp_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024936, VkglTestCase_024936_1, VkglTestCase_024936_2);

#define VkglTestCase_024937_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024937_2 "ions.linear_mipmap_linear_linear_clamp_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024937, VkglTestCase_024937_1, VkglTestCase_024937_2);

#define VkglTestCase_024938_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024938_2 "ions.linear_mipmap_linear_linear_clamp_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024938, VkglTestCase_024938_1, VkglTestCase_024938_2);

#define VkglTestCase_024939_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024939_2 "ions.linear_mipmap_linear_linear_clamp_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024939, VkglTestCase_024939_1, VkglTestCase_024939_2);

#define VkglTestCase_024940_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024940_2 "ions.linear_mipmap_linear_linear_clamp_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024940, VkglTestCase_024940_1, VkglTestCase_024940_2);

#define VkglTestCase_024941_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024941_2 "ions.linear_mipmap_linear_linear_clamp_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024941, VkglTestCase_024941_1, VkglTestCase_024941_2);

#define VkglTestCase_024942_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024942_2 "ions.linear_mipmap_linear_linear_clamp_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024942, VkglTestCase_024942_1, VkglTestCase_024942_2);

#define VkglTestCase_024943_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024943_2 "ions.linear_mipmap_linear_linear_clamp_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024943, VkglTestCase_024943_1, VkglTestCase_024943_2);

#define VkglTestCase_024944_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024944_2 "ions.linear_mipmap_linear_linear_clamp_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024944, VkglTestCase_024944_1, VkglTestCase_024944_2);

#define VkglTestCase_024945_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024945_2 "ions.linear_mipmap_linear_linear_repeat_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024945, VkglTestCase_024945_1, VkglTestCase_024945_2);

#define VkglTestCase_024946_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024946_2 "ions.linear_mipmap_linear_linear_repeat_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024946, VkglTestCase_024946_1, VkglTestCase_024946_2);

#define VkglTestCase_024947_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024947_2 "ions.linear_mipmap_linear_linear_repeat_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024947, VkglTestCase_024947_1, VkglTestCase_024947_2);

#define VkglTestCase_024948_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024948_2 "ions.linear_mipmap_linear_linear_repeat_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024948, VkglTestCase_024948_1, VkglTestCase_024948_2);

#define VkglTestCase_024949_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024949_2 "ons.linear_mipmap_linear_linear_repeat_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024949, VkglTestCase_024949_1, VkglTestCase_024949_2);

#define VkglTestCase_024950_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024950_2 "ons.linear_mipmap_linear_linear_repeat_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024950, VkglTestCase_024950_1, VkglTestCase_024950_2);

#define VkglTestCase_024951_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024951_2 "ions.linear_mipmap_linear_linear_repeat_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024951, VkglTestCase_024951_1, VkglTestCase_024951_2);

#define VkglTestCase_024952_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024952_2 "ons.linear_mipmap_linear_linear_repeat_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024952, VkglTestCase_024952_1, VkglTestCase_024952_2);

#define VkglTestCase_024953_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024953_2 "ons.linear_mipmap_linear_linear_repeat_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024953, VkglTestCase_024953_1, VkglTestCase_024953_2);

#define VkglTestCase_024954_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024954_2 "ions.linear_mipmap_linear_linear_mirror_clamp_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024954, VkglTestCase_024954_1, VkglTestCase_024954_2);

#define VkglTestCase_024955_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024955_2 "ions.linear_mipmap_linear_linear_mirror_clamp_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024955, VkglTestCase_024955_1, VkglTestCase_024955_2);

#define VkglTestCase_024956_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024956_2 "ions.linear_mipmap_linear_linear_mirror_clamp_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024956, VkglTestCase_024956_1, VkglTestCase_024956_2);

#define VkglTestCase_024957_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024957_2 "ions.linear_mipmap_linear_linear_mirror_repeat_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024957, VkglTestCase_024957_1, VkglTestCase_024957_2);

#define VkglTestCase_024958_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024958_2 "ons.linear_mipmap_linear_linear_mirror_repeat_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024958, VkglTestCase_024958_1, VkglTestCase_024958_2);

#define VkglTestCase_024959_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024959_2 "ons.linear_mipmap_linear_linear_mirror_repeat_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024959, VkglTestCase_024959_1, VkglTestCase_024959_2);

#define VkglTestCase_024960_1 "dEQP-GLES3.functional.texture.filtering.3d.combinat"
#define VkglTestCase_024960_2 "ions.linear_mipmap_linear_linear_mirror_mirror_clamp"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024960, VkglTestCase_024960_1, VkglTestCase_024960_2);

#define VkglTestCase_024961_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024961_2 "ons.linear_mipmap_linear_linear_mirror_mirror_repeat"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024961, VkglTestCase_024961_1, VkglTestCase_024961_2);

#define VkglTestCase_024962_1 "dEQP-GLES3.functional.texture.filtering.3d.combinati"
#define VkglTestCase_024962_2 "ons.linear_mipmap_linear_linear_mirror_mirror_mirror"
SHRINK_HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024962, VkglTestCase_024962_1, VkglTestCase_024962_2);
