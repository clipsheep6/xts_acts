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

#define VkglTestCase_026276_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026276_2 "ication.basic_copyteximage2d.2d_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026276, VkglTestCase_026276_1, VkglTestCase_026276_2);

#define VkglTestCase_026277_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026277_2 "ation.basic_copyteximage2d.2d_luminance"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026277, VkglTestCase_026277_1, VkglTestCase_026277_2);

#define VkglTestCase_026278_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026278_2 "on.basic_copyteximage2d.2d_luminance_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026278, VkglTestCase_026278_1, VkglTestCase_026278_2);

#define VkglTestCase_026279_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026279_2 "fication.basic_copyteximage2d.2d_rgb"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026279, VkglTestCase_026279_1, VkglTestCase_026279_2);

#define VkglTestCase_026280_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026280_2 "ication.basic_copyteximage2d.2d_rgba"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026280, VkglTestCase_026280_1, VkglTestCase_026280_2);

#define VkglTestCase_026281_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026281_2 "cation.basic_copyteximage2d.cube_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026281, VkglTestCase_026281_1, VkglTestCase_026281_2);

#define VkglTestCase_026282_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026282_2 "tion.basic_copyteximage2d.cube_luminance"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026282, VkglTestCase_026282_1, VkglTestCase_026282_2);

#define VkglTestCase_026283_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_026283_2 "n.basic_copyteximage2d.cube_luminance_alpha"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026283, VkglTestCase_026283_1, VkglTestCase_026283_2);

#define VkglTestCase_026284_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026284_2 "ication.basic_copyteximage2d.cube_rgb"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026284, VkglTestCase_026284_1, VkglTestCase_026284_2);

#define VkglTestCase_026285_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026285_2 "cation.basic_copyteximage2d.cube_rgba"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026285, VkglTestCase_026285_1, VkglTestCase_026285_2);
