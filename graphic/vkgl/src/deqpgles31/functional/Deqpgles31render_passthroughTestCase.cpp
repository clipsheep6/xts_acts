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
#include "../ActsDeqpgles310019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018282_1 "dEQP-GLES31.functional.tessellation_geometry_interaction.rend"
#define VkglTestCase_018282_2 "er.passthrough.tessellate_tris_passthrough_geometry_no_change"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018282, VkglTestCase_018282_1, VkglTestCase_018282_2);

#define VkglTestCase_018283_1 "dEQP-GLES31.functional.tessellation_geometry_interaction.rend"
#define VkglTestCase_018283_2 "er.passthrough.tessellate_quads_passthrough_geometry_no_change"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018283, VkglTestCase_018283_1, VkglTestCase_018283_2);

#define VkglTestCase_018284_1 "dEQP-GLES31.functional.tessellation_geometry_interaction.render"
#define VkglTestCase_018284_2 ".passthrough.tessellate_isolines_passthrough_geometry_no_change"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018284, VkglTestCase_018284_1, VkglTestCase_018284_2);

#define VkglTestCase_018285_1 "dEQP-GLES31.functional.tessellation_geometry_interaction.render.pas"
#define VkglTestCase_018285_2 "sthrough.passthrough_tessellation_geometry_shade_triangles_no_change"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018285, VkglTestCase_018285_1, VkglTestCase_018285_2);

#define VkglTestCase_018286_1 "dEQP-GLES31.functional.tessellation_geometry_interaction.render.p"
#define VkglTestCase_018286_2 "assthrough.passthrough_tessellation_geometry_shade_lines_no_change"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018286, VkglTestCase_018286_1, VkglTestCase_018286_2);
