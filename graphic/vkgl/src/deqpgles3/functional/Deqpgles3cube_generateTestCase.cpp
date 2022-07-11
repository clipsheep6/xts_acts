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

#define VkglTestCase_025099_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025099_2 "mipmap.cube.generate.a8_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025099, VkglTestCase_025099_1, VkglTestCase_025099_2);

#define VkglTestCase_025100_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025100_2 "mipmap.cube.generate.a8_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025100, VkglTestCase_025100_1, VkglTestCase_025100_2);

#define VkglTestCase_025101_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025101_2 "mipmap.cube.generate.l8_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025101, VkglTestCase_025101_1, VkglTestCase_025101_2);

#define VkglTestCase_025102_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025102_2 "mipmap.cube.generate.l8_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025102, VkglTestCase_025102_1, VkglTestCase_025102_2);

#define VkglTestCase_025103_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025103_2 "ipmap.cube.generate.la88_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025103, VkglTestCase_025103_1, VkglTestCase_025103_2);

#define VkglTestCase_025104_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025104_2 "ipmap.cube.generate.la88_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025104, VkglTestCase_025104_1, VkglTestCase_025104_2);

#define VkglTestCase_025105_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025105_2 "pmap.cube.generate.rgb565_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025105, VkglTestCase_025105_1, VkglTestCase_025105_2);

#define VkglTestCase_025106_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025106_2 "pmap.cube.generate.rgb565_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025106, VkglTestCase_025106_1, VkglTestCase_025106_2);

#define VkglTestCase_025107_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025107_2 "pmap.cube.generate.rgb888_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025107, VkglTestCase_025107_1, VkglTestCase_025107_2);

#define VkglTestCase_025108_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025108_2 "pmap.cube.generate.rgb888_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025108, VkglTestCase_025108_1, VkglTestCase_025108_2);

#define VkglTestCase_025109_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025109_2 "map.cube.generate.rgba4444_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025109, VkglTestCase_025109_1, VkglTestCase_025109_2);

#define VkglTestCase_025110_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025110_2 "map.cube.generate.rgba4444_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025110, VkglTestCase_025110_1, VkglTestCase_025110_2);

#define VkglTestCase_025111_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025111_2 "map.cube.generate.rgba5551_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025111, VkglTestCase_025111_1, VkglTestCase_025111_2);

#define VkglTestCase_025112_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025112_2 "map.cube.generate.rgba5551_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025112, VkglTestCase_025112_1, VkglTestCase_025112_2);

#define VkglTestCase_025113_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025113_2 "map.cube.generate.rgba8888_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025113, VkglTestCase_025113_1, VkglTestCase_025113_2);

#define VkglTestCase_025114_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025114_2 "map.cube.generate.rgba8888_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025114, VkglTestCase_025114_1, VkglTestCase_025114_2);
