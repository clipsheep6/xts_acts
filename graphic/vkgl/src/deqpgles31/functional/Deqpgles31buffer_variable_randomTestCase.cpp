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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310025TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_024625_1 "dEQP-GLES31.functional.program_inte"
#define VkglTestCase_024625_2 "rface_query.buffer_variable.random.0"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024625, VkglTestCase_024625_1, VkglTestCase_024625_2);

#define VkglTestCase_024626_1 "dEQP-GLES31.functional.program_inte"
#define VkglTestCase_024626_2 "rface_query.buffer_variable.random.1"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024626, VkglTestCase_024626_1, VkglTestCase_024626_2);

#define VkglTestCase_024627_1 "dEQP-GLES31.functional.program_inte"
#define VkglTestCase_024627_2 "rface_query.buffer_variable.random.2"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024627, VkglTestCase_024627_1, VkglTestCase_024627_2);

#define VkglTestCase_024628_1 "dEQP-GLES31.functional.program_inte"
#define VkglTestCase_024628_2 "rface_query.buffer_variable.random.3"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024628, VkglTestCase_024628_1, VkglTestCase_024628_2);

#define VkglTestCase_024629_1 "dEQP-GLES31.functional.program_inte"
#define VkglTestCase_024629_2 "rface_query.buffer_variable.random.4"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024629, VkglTestCase_024629_1, VkglTestCase_024629_2);

#define VkglTestCase_024630_1 "dEQP-GLES31.functional.program_inte"
#define VkglTestCase_024630_2 "rface_query.buffer_variable.random.5"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024630, VkglTestCase_024630_1, VkglTestCase_024630_2);

#define VkglTestCase_024631_1 "dEQP-GLES31.functional.program_inte"
#define VkglTestCase_024631_2 "rface_query.buffer_variable.random.6"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024631, VkglTestCase_024631_1, VkglTestCase_024631_2);

#define VkglTestCase_024632_1 "dEQP-GLES31.functional.program_inte"
#define VkglTestCase_024632_2 "rface_query.buffer_variable.random.7"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024632, VkglTestCase_024632_1, VkglTestCase_024632_2);

#define VkglTestCase_024633_1 "dEQP-GLES31.functional.program_inte"
#define VkglTestCase_024633_2 "rface_query.buffer_variable.random.8"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024633, VkglTestCase_024633_1, VkglTestCase_024633_2);

#define VkglTestCase_024634_1 "dEQP-GLES31.functional.program_inte"
#define VkglTestCase_024634_2 "rface_query.buffer_variable.random.9"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024634, VkglTestCase_024634_1, VkglTestCase_024634_2);

#define VkglTestCase_024635_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024635_2 "face_query.buffer_variable.random.10"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024635, VkglTestCase_024635_1, VkglTestCase_024635_2);

#define VkglTestCase_024636_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024636_2 "face_query.buffer_variable.random.11"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024636, VkglTestCase_024636_1, VkglTestCase_024636_2);

#define VkglTestCase_024637_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024637_2 "face_query.buffer_variable.random.12"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024637, VkglTestCase_024637_1, VkglTestCase_024637_2);

#define VkglTestCase_024638_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024638_2 "face_query.buffer_variable.random.13"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024638, VkglTestCase_024638_1, VkglTestCase_024638_2);

#define VkglTestCase_024639_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024639_2 "face_query.buffer_variable.random.14"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024639, VkglTestCase_024639_1, VkglTestCase_024639_2);

#define VkglTestCase_024640_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024640_2 "face_query.buffer_variable.random.15"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024640, VkglTestCase_024640_1, VkglTestCase_024640_2);

#define VkglTestCase_024641_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024641_2 "face_query.buffer_variable.random.16"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024641, VkglTestCase_024641_1, VkglTestCase_024641_2);

#define VkglTestCase_024642_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024642_2 "face_query.buffer_variable.random.17"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024642, VkglTestCase_024642_1, VkglTestCase_024642_2);

#define VkglTestCase_024643_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024643_2 "face_query.buffer_variable.random.18"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024643, VkglTestCase_024643_1, VkglTestCase_024643_2);

#define VkglTestCase_024644_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024644_2 "face_query.buffer_variable.random.19"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024644, VkglTestCase_024644_1, VkglTestCase_024644_2);

#define VkglTestCase_024645_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024645_2 "face_query.buffer_variable.random.20"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024645, VkglTestCase_024645_1, VkglTestCase_024645_2);

#define VkglTestCase_024646_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024646_2 "face_query.buffer_variable.random.21"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024646, VkglTestCase_024646_1, VkglTestCase_024646_2);

#define VkglTestCase_024647_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024647_2 "face_query.buffer_variable.random.22"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024647, VkglTestCase_024647_1, VkglTestCase_024647_2);

#define VkglTestCase_024648_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024648_2 "face_query.buffer_variable.random.23"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024648, VkglTestCase_024648_1, VkglTestCase_024648_2);

#define VkglTestCase_024649_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024649_2 "face_query.buffer_variable.random.24"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024649, VkglTestCase_024649_1, VkglTestCase_024649_2);

#define VkglTestCase_024650_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024650_2 "face_query.buffer_variable.random.25"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024650, VkglTestCase_024650_1, VkglTestCase_024650_2);

#define VkglTestCase_024651_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024651_2 "face_query.buffer_variable.random.26"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024651, VkglTestCase_024651_1, VkglTestCase_024651_2);

#define VkglTestCase_024652_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024652_2 "face_query.buffer_variable.random.27"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024652, VkglTestCase_024652_1, VkglTestCase_024652_2);

#define VkglTestCase_024653_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024653_2 "face_query.buffer_variable.random.28"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024653, VkglTestCase_024653_1, VkglTestCase_024653_2);

#define VkglTestCase_024654_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024654_2 "face_query.buffer_variable.random.29"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024654, VkglTestCase_024654_1, VkglTestCase_024654_2);

#define VkglTestCase_024655_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024655_2 "face_query.buffer_variable.random.30"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024655, VkglTestCase_024655_1, VkglTestCase_024655_2);

#define VkglTestCase_024656_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024656_2 "face_query.buffer_variable.random.31"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024656, VkglTestCase_024656_1, VkglTestCase_024656_2);

#define VkglTestCase_024657_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024657_2 "face_query.buffer_variable.random.32"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024657, VkglTestCase_024657_1, VkglTestCase_024657_2);

#define VkglTestCase_024658_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024658_2 "face_query.buffer_variable.random.33"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024658, VkglTestCase_024658_1, VkglTestCase_024658_2);

#define VkglTestCase_024659_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024659_2 "face_query.buffer_variable.random.34"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024659, VkglTestCase_024659_1, VkglTestCase_024659_2);

#define VkglTestCase_024660_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024660_2 "face_query.buffer_variable.random.35"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024660, VkglTestCase_024660_1, VkglTestCase_024660_2);

#define VkglTestCase_024661_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024661_2 "face_query.buffer_variable.random.36"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024661, VkglTestCase_024661_1, VkglTestCase_024661_2);

#define VkglTestCase_024662_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024662_2 "face_query.buffer_variable.random.37"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024662, VkglTestCase_024662_1, VkglTestCase_024662_2);

#define VkglTestCase_024663_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024663_2 "face_query.buffer_variable.random.38"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024663, VkglTestCase_024663_1, VkglTestCase_024663_2);

#define VkglTestCase_024664_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024664_2 "face_query.buffer_variable.random.39"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024664, VkglTestCase_024664_1, VkglTestCase_024664_2);

#define VkglTestCase_024665_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024665_2 "face_query.buffer_variable.random.40"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024665, VkglTestCase_024665_1, VkglTestCase_024665_2);

#define VkglTestCase_024666_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024666_2 "face_query.buffer_variable.random.41"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024666, VkglTestCase_024666_1, VkglTestCase_024666_2);

#define VkglTestCase_024667_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024667_2 "face_query.buffer_variable.random.42"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024667, VkglTestCase_024667_1, VkglTestCase_024667_2);

#define VkglTestCase_024668_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024668_2 "face_query.buffer_variable.random.43"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024668, VkglTestCase_024668_1, VkglTestCase_024668_2);

#define VkglTestCase_024669_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024669_2 "face_query.buffer_variable.random.44"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024669, VkglTestCase_024669_1, VkglTestCase_024669_2);

#define VkglTestCase_024670_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024670_2 "face_query.buffer_variable.random.45"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024670, VkglTestCase_024670_1, VkglTestCase_024670_2);

#define VkglTestCase_024671_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024671_2 "face_query.buffer_variable.random.46"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024671, VkglTestCase_024671_1, VkglTestCase_024671_2);

#define VkglTestCase_024672_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024672_2 "face_query.buffer_variable.random.47"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024672, VkglTestCase_024672_1, VkglTestCase_024672_2);

#define VkglTestCase_024673_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024673_2 "face_query.buffer_variable.random.48"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024673, VkglTestCase_024673_1, VkglTestCase_024673_2);

#define VkglTestCase_024674_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024674_2 "face_query.buffer_variable.random.49"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024674, VkglTestCase_024674_1, VkglTestCase_024674_2);

#define VkglTestCase_024675_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024675_2 "face_query.buffer_variable.random.50"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024675, VkglTestCase_024675_1, VkglTestCase_024675_2);

#define VkglTestCase_024676_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024676_2 "face_query.buffer_variable.random.51"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024676, VkglTestCase_024676_1, VkglTestCase_024676_2);

#define VkglTestCase_024677_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024677_2 "face_query.buffer_variable.random.52"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024677, VkglTestCase_024677_1, VkglTestCase_024677_2);

#define VkglTestCase_024678_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024678_2 "face_query.buffer_variable.random.53"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024678, VkglTestCase_024678_1, VkglTestCase_024678_2);

#define VkglTestCase_024679_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024679_2 "face_query.buffer_variable.random.54"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024679, VkglTestCase_024679_1, VkglTestCase_024679_2);

#define VkglTestCase_024680_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024680_2 "face_query.buffer_variable.random.55"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024680, VkglTestCase_024680_1, VkglTestCase_024680_2);

#define VkglTestCase_024681_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024681_2 "face_query.buffer_variable.random.56"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024681, VkglTestCase_024681_1, VkglTestCase_024681_2);

#define VkglTestCase_024682_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024682_2 "face_query.buffer_variable.random.57"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024682, VkglTestCase_024682_1, VkglTestCase_024682_2);

#define VkglTestCase_024683_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024683_2 "face_query.buffer_variable.random.58"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024683, VkglTestCase_024683_1, VkglTestCase_024683_2);

#define VkglTestCase_024684_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024684_2 "face_query.buffer_variable.random.59"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024684, VkglTestCase_024684_1, VkglTestCase_024684_2);

#define VkglTestCase_024685_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024685_2 "face_query.buffer_variable.random.60"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024685, VkglTestCase_024685_1, VkglTestCase_024685_2);

#define VkglTestCase_024686_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024686_2 "face_query.buffer_variable.random.61"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024686, VkglTestCase_024686_1, VkglTestCase_024686_2);

#define VkglTestCase_024687_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024687_2 "face_query.buffer_variable.random.62"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024687, VkglTestCase_024687_1, VkglTestCase_024687_2);

#define VkglTestCase_024688_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024688_2 "face_query.buffer_variable.random.63"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024688, VkglTestCase_024688_1, VkglTestCase_024688_2);

#define VkglTestCase_024689_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024689_2 "face_query.buffer_variable.random.64"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024689, VkglTestCase_024689_1, VkglTestCase_024689_2);

#define VkglTestCase_024690_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024690_2 "face_query.buffer_variable.random.65"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024690, VkglTestCase_024690_1, VkglTestCase_024690_2);

#define VkglTestCase_024691_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024691_2 "face_query.buffer_variable.random.66"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024691, VkglTestCase_024691_1, VkglTestCase_024691_2);

#define VkglTestCase_024692_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024692_2 "face_query.buffer_variable.random.67"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024692, VkglTestCase_024692_1, VkglTestCase_024692_2);

#define VkglTestCase_024693_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024693_2 "face_query.buffer_variable.random.68"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024693, VkglTestCase_024693_1, VkglTestCase_024693_2);

#define VkglTestCase_024694_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024694_2 "face_query.buffer_variable.random.69"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024694, VkglTestCase_024694_1, VkglTestCase_024694_2);

#define VkglTestCase_024695_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024695_2 "face_query.buffer_variable.random.70"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024695, VkglTestCase_024695_1, VkglTestCase_024695_2);

#define VkglTestCase_024696_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024696_2 "face_query.buffer_variable.random.71"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024696, VkglTestCase_024696_1, VkglTestCase_024696_2);

#define VkglTestCase_024697_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024697_2 "face_query.buffer_variable.random.72"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024697, VkglTestCase_024697_1, VkglTestCase_024697_2);

#define VkglTestCase_024698_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024698_2 "face_query.buffer_variable.random.73"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024698, VkglTestCase_024698_1, VkglTestCase_024698_2);

#define VkglTestCase_024699_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024699_2 "face_query.buffer_variable.random.74"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024699, VkglTestCase_024699_1, VkglTestCase_024699_2);

#define VkglTestCase_024700_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024700_2 "face_query.buffer_variable.random.75"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024700, VkglTestCase_024700_1, VkglTestCase_024700_2);

#define VkglTestCase_024701_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024701_2 "face_query.buffer_variable.random.76"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024701, VkglTestCase_024701_1, VkglTestCase_024701_2);

#define VkglTestCase_024702_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024702_2 "face_query.buffer_variable.random.77"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024702, VkglTestCase_024702_1, VkglTestCase_024702_2);

#define VkglTestCase_024703_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024703_2 "face_query.buffer_variable.random.78"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024703, VkglTestCase_024703_1, VkglTestCase_024703_2);

#define VkglTestCase_024704_1 "dEQP-GLES31.functional.program_inter"
#define VkglTestCase_024704_2 "face_query.buffer_variable.random.79"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024704, VkglTestCase_024704_1, VkglTestCase_024704_2);
