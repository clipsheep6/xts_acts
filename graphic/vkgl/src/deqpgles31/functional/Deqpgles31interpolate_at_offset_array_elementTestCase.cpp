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
#include "../ActsDeqpgles310004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003270_1 "dEQP-GLES31.functional.shaders.multisample_interpolation"
#define VkglTestCase_003270_2 ".interpolate_at_offset.array_element.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003270, VkglTestCase_003270_1, VkglTestCase_003270_2);

#define VkglTestCase_003271_1 "dEQP-GLES31.functional.shaders.multisample_interpolation"
#define VkglTestCase_003271_2 ".interpolate_at_offset.array_element.singlesample_texture"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003271, VkglTestCase_003271_1, VkglTestCase_003271_2);

#define VkglTestCase_003272_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003272_2 "interpolate_at_offset.array_element.multisample_texture_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003272, VkglTestCase_003272_1, VkglTestCase_003272_2);

#define VkglTestCase_003273_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003273_2 "interpolate_at_offset.array_element.multisample_texture_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003273, VkglTestCase_003273_1, VkglTestCase_003273_2);

#define VkglTestCase_003274_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003274_2 "interpolate_at_offset.array_element.multisample_texture_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003274, VkglTestCase_003274_1, VkglTestCase_003274_2);

#define VkglTestCase_003275_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003275_2 "interpolate_at_offset.array_element.multisample_texture_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003275, VkglTestCase_003275_1, VkglTestCase_003275_2);

#define VkglTestCase_003276_1 "dEQP-GLES31.functional.shaders.multisample_interpolation."
#define VkglTestCase_003276_2 "interpolate_at_offset.array_element.multisample_texture_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003276, VkglTestCase_003276_1, VkglTestCase_003276_2);

#define VkglTestCase_003277_1 "dEQP-GLES31.functional.shaders.multisample_interpolati"
#define VkglTestCase_003277_2 "on.interpolate_at_offset.array_element.singlesample_rbo"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003277, VkglTestCase_003277_1, VkglTestCase_003277_2);

#define VkglTestCase_003278_1 "dEQP-GLES31.functional.shaders.multisample_interpolatio"
#define VkglTestCase_003278_2 "n.interpolate_at_offset.array_element.multisample_rbo_1"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003278, VkglTestCase_003278_1, VkglTestCase_003278_2);

#define VkglTestCase_003279_1 "dEQP-GLES31.functional.shaders.multisample_interpolatio"
#define VkglTestCase_003279_2 "n.interpolate_at_offset.array_element.multisample_rbo_2"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003279, VkglTestCase_003279_1, VkglTestCase_003279_2);

#define VkglTestCase_003280_1 "dEQP-GLES31.functional.shaders.multisample_interpolatio"
#define VkglTestCase_003280_2 "n.interpolate_at_offset.array_element.multisample_rbo_4"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003280, VkglTestCase_003280_1, VkglTestCase_003280_2);

#define VkglTestCase_003281_1 "dEQP-GLES31.functional.shaders.multisample_interpolatio"
#define VkglTestCase_003281_2 "n.interpolate_at_offset.array_element.multisample_rbo_8"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003281, VkglTestCase_003281_1, VkglTestCase_003281_2);

#define VkglTestCase_003282_1 "dEQP-GLES31.functional.shaders.multisample_interpolatio"
#define VkglTestCase_003282_2 "n.interpolate_at_offset.array_element.multisample_rbo_16"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003282, VkglTestCase_003282_1, VkglTestCase_003282_2);
