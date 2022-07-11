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
#include "../ActsDeqpgles310012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011360_1 "dEQP-GLES31.functional.image_"
#define VkglTestCase_011360_2 "load_store.cube.store.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011360, VkglTestCase_011360_1, VkglTestCase_011360_2);

#define VkglTestCase_011361_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011361_2 "tore.cube.store.rgba32f_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011361, VkglTestCase_011361_1, VkglTestCase_011361_2);

#define VkglTestCase_011362_1 "dEQP-GLES31.functional.image_"
#define VkglTestCase_011362_2 "load_store.cube.store.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011362, VkglTestCase_011362_1, VkglTestCase_011362_2);

#define VkglTestCase_011363_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011363_2 "tore.cube.store.rgba16f_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011363, VkglTestCase_011363_1, VkglTestCase_011363_2);

#define VkglTestCase_011364_1 "dEQP-GLES31.functional.imag"
#define VkglTestCase_011364_2 "e_load_store.cube.store.r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011364, VkglTestCase_011364_1, VkglTestCase_011364_2);

#define VkglTestCase_011365_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011365_2 "store.cube.store.r32f_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011365, VkglTestCase_011365_1, VkglTestCase_011365_2);

#define VkglTestCase_011366_1 "dEQP-GLES31.functional.image_"
#define VkglTestCase_011366_2 "load_store.cube.store.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011366, VkglTestCase_011366_1, VkglTestCase_011366_2);

#define VkglTestCase_011367_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011367_2 "ore.cube.store.rgba32ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011367, VkglTestCase_011367_1, VkglTestCase_011367_2);

#define VkglTestCase_011368_1 "dEQP-GLES31.functional.image_"
#define VkglTestCase_011368_2 "load_store.cube.store.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011368, VkglTestCase_011368_1, VkglTestCase_011368_2);

#define VkglTestCase_011369_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011369_2 "ore.cube.store.rgba16ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011369, VkglTestCase_011369_1, VkglTestCase_011369_2);

#define VkglTestCase_011370_1 "dEQP-GLES31.functional.image_"
#define VkglTestCase_011370_2 "load_store.cube.store.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011370, VkglTestCase_011370_1, VkglTestCase_011370_2);

#define VkglTestCase_011371_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011371_2 "tore.cube.store.rgba8ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011371, VkglTestCase_011371_1, VkglTestCase_011371_2);

#define VkglTestCase_011372_1 "dEQP-GLES31.functional.image"
#define VkglTestCase_011372_2 "_load_store.cube.store.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011372, VkglTestCase_011372_1, VkglTestCase_011372_2);

#define VkglTestCase_011373_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011373_2 "store.cube.store.r32ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011373, VkglTestCase_011373_1, VkglTestCase_011373_2);

#define VkglTestCase_011374_1 "dEQP-GLES31.functional.image_"
#define VkglTestCase_011374_2 "load_store.cube.store.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011374, VkglTestCase_011374_1, VkglTestCase_011374_2);

#define VkglTestCase_011375_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011375_2 "tore.cube.store.rgba32i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011375, VkglTestCase_011375_1, VkglTestCase_011375_2);

#define VkglTestCase_011376_1 "dEQP-GLES31.functional.image_"
#define VkglTestCase_011376_2 "load_store.cube.store.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011376, VkglTestCase_011376_1, VkglTestCase_011376_2);

#define VkglTestCase_011377_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011377_2 "tore.cube.store.rgba16i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011377, VkglTestCase_011377_1, VkglTestCase_011377_2);

#define VkglTestCase_011378_1 "dEQP-GLES31.functional.image"
#define VkglTestCase_011378_2 "_load_store.cube.store.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011378, VkglTestCase_011378_1, VkglTestCase_011378_2);

#define VkglTestCase_011379_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011379_2 "tore.cube.store.rgba8i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011379, VkglTestCase_011379_1, VkglTestCase_011379_2);

#define VkglTestCase_011380_1 "dEQP-GLES31.functional.imag"
#define VkglTestCase_011380_2 "e_load_store.cube.store.r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011380, VkglTestCase_011380_1, VkglTestCase_011380_2);

#define VkglTestCase_011381_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011381_2 "store.cube.store.r32i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011381, VkglTestCase_011381_1, VkglTestCase_011381_2);

#define VkglTestCase_011382_1 "dEQP-GLES31.functional.image"
#define VkglTestCase_011382_2 "_load_store.cube.store.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011382, VkglTestCase_011382_1, VkglTestCase_011382_2);

#define VkglTestCase_011383_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011383_2 "store.cube.store.rgba8_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011383, VkglTestCase_011383_1, VkglTestCase_011383_2);

#define VkglTestCase_011384_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011384_2 "ad_store.cube.store.rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011384, VkglTestCase_011384_1, VkglTestCase_011384_2);

#define VkglTestCase_011385_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011385_2 "re.cube.store.rgba8_snorm_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011385, VkglTestCase_011385_1, VkglTestCase_011385_2);
