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
#include "../ActsDeqpgles30044TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_043312_1 "dEQP-GLES3.functional.c"
#define VkglTestCase_043312_2 "lipping.line.line_z_clip"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043312, VkglTestCase_043312_1, VkglTestCase_043312_2);

#define VkglTestCase_043313_1 "dEQP-GLES3.functional.clipping."
#define VkglTestCase_043313_2 "line.line_z_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043313, VkglTestCase_043313_1, VkglTestCase_043313_2);

#define VkglTestCase_043314_1 "dEQP-GLES3.functional.clipping."
#define VkglTestCase_043314_2 "line.line_z_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043314, VkglTestCase_043314_1, VkglTestCase_043314_2);

#define VkglTestCase_043315_1 "dEQP-GLES3.functional.clipping"
#define VkglTestCase_043315_2 ".line.line_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043315, VkglTestCase_043315_1, VkglTestCase_043315_2);

#define VkglTestCase_043316_1 "dEQP-GLES3.functional.clipping"
#define VkglTestCase_043316_2 ".line.line_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043316, VkglTestCase_043316_1, VkglTestCase_043316_2);

#define VkglTestCase_043317_1 "dEQP-GLES3.functional.clip"
#define VkglTestCase_043317_2 "ping.line.wide_line_z_clip"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043317, VkglTestCase_043317_1, VkglTestCase_043317_2);

#define VkglTestCase_043318_1 "dEQP-GLES3.functional.clipping.lin"
#define VkglTestCase_043318_2 "e.wide_line_z_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043318, VkglTestCase_043318_1, VkglTestCase_043318_2);

#define VkglTestCase_043319_1 "dEQP-GLES3.functional.clipping.lin"
#define VkglTestCase_043319_2 "e.wide_line_z_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043319, VkglTestCase_043319_1, VkglTestCase_043319_2);

#define VkglTestCase_043320_1 "dEQP-GLES3.functional.cli"
#define VkglTestCase_043320_2 "pping.line.wide_line_clip"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043320, VkglTestCase_043320_1, VkglTestCase_043320_2);

#define VkglTestCase_043321_1 "dEQP-GLES3.functional.clipping.li"
#define VkglTestCase_043321_2 "ne.wide_line_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043321, VkglTestCase_043321_1, VkglTestCase_043321_2);

#define VkglTestCase_043322_1 "dEQP-GLES3.functional.clipping.li"
#define VkglTestCase_043322_2 "ne.wide_line_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043322, VkglTestCase_043322_1, VkglTestCase_043322_2);

#define VkglTestCase_043323_1 "dEQP-GLES3.functional.cli"
#define VkglTestCase_043323_2 "pping.line.long_line_clip"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043323, VkglTestCase_043323_1, VkglTestCase_043323_2);

#define VkglTestCase_043324_1 "dEQP-GLES3.functional.clipp"
#define VkglTestCase_043324_2 "ing.line.long_wide_line_clip"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043324, VkglTestCase_043324_1, VkglTestCase_043324_2);

#define VkglTestCase_043325_1 "dEQP-GLES3.functional.clip"
#define VkglTestCase_043325_2 "ping.line.line_attrib_clip"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043325, VkglTestCase_043325_1, VkglTestCase_043325_2);

#define VkglTestCase_043326_1 "dEQP-GLES3.functional.clippi"
#define VkglTestCase_043326_2 "ng.line.wide_line_attrib_clip"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043326, VkglTestCase_043326_1, VkglTestCase_043326_2);
