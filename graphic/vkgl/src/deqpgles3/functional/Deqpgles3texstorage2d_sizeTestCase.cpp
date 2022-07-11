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

#define VkglTestCase_026816_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026816_2 "ation.texstorage2d.size.2d_1x1_1_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026816, VkglTestCase_026816_1, VkglTestCase_026816_2);

#define VkglTestCase_026817_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026817_2 "ation.texstorage2d.size.2d_2x2_2_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026817, VkglTestCase_026817_1, VkglTestCase_026817_2);

#define VkglTestCase_026818_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026818_2 "tion.texstorage2d.size.2d_64x32_7_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026818, VkglTestCase_026818_1, VkglTestCase_026818_2);

#define VkglTestCase_026819_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026819_2 "tion.texstorage2d.size.2d_32x64_4_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026819, VkglTestCase_026819_1, VkglTestCase_026819_2);

#define VkglTestCase_026820_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026820_2 "tion.texstorage2d.size.2d_57x63_1_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026820, VkglTestCase_026820_1, VkglTestCase_026820_2);

#define VkglTestCase_026821_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026821_2 "tion.texstorage2d.size.2d_57x63_2_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026821, VkglTestCase_026821_1, VkglTestCase_026821_2);

#define VkglTestCase_026822_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026822_2 "tion.texstorage2d.size.2d_57x63_6_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026822, VkglTestCase_026822_1, VkglTestCase_026822_2);

#define VkglTestCase_026823_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026823_2 "tion.texstorage2d.size.cube_1x1_1_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026823, VkglTestCase_026823_1, VkglTestCase_026823_2);

#define VkglTestCase_026824_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026824_2 "tion.texstorage2d.size.cube_2x2_2_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026824, VkglTestCase_026824_1, VkglTestCase_026824_2);

#define VkglTestCase_026825_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026825_2 "ion.texstorage2d.size.cube_57x57_1_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026825, VkglTestCase_026825_1, VkglTestCase_026825_2);

#define VkglTestCase_026826_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026826_2 "ion.texstorage2d.size.cube_57x57_2_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026826, VkglTestCase_026826_1, VkglTestCase_026826_2);

#define VkglTestCase_026827_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026827_2 "ion.texstorage2d.size.cube_57x57_6_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026827, VkglTestCase_026827_1, VkglTestCase_026827_2);

#define VkglTestCase_026828_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026828_2 "ion.texstorage2d.size.cube_64x64_4_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026828, VkglTestCase_026828_1, VkglTestCase_026828_2);

#define VkglTestCase_026829_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026829_2 "ion.texstorage2d.size.cube_64x64_7_levels"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026829, VkglTestCase_026829_1, VkglTestCase_026829_2);
