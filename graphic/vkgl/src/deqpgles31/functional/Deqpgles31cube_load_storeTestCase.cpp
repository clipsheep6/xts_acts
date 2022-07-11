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

#define VkglTestCase_011386_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011386_2 "ad_store.cube.load_store.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011386, VkglTestCase_011386_1, VkglTestCase_011386_2);

#define VkglTestCase_011387_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011387_2 "e.cube.load_store.rgba32f_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011387, VkglTestCase_011387_1, VkglTestCase_011387_2);

#define VkglTestCase_011388_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011388_2 "ad_store.cube.load_store.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011388, VkglTestCase_011388_1, VkglTestCase_011388_2);

#define VkglTestCase_011389_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011389_2 "e.cube.load_store.rgba16f_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011389, VkglTestCase_011389_1, VkglTestCase_011389_2);

#define VkglTestCase_011390_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011390_2 "oad_store.cube.load_store.r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011390, VkglTestCase_011390_1, VkglTestCase_011390_2);

#define VkglTestCase_011391_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011391_2 "ore.cube.load_store.r32f_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011391, VkglTestCase_011391_1, VkglTestCase_011391_2);

#define VkglTestCase_011392_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011392_2 "d_store.cube.load_store.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011392, VkglTestCase_011392_1, VkglTestCase_011392_2);

#define VkglTestCase_011393_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011393_2 "e.cube.load_store.rgba32ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011393, VkglTestCase_011393_1, VkglTestCase_011393_2);

#define VkglTestCase_011394_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011394_2 "d_store.cube.load_store.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011394, VkglTestCase_011394_1, VkglTestCase_011394_2);

#define VkglTestCase_011395_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011395_2 "e.cube.load_store.rgba16ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011395, VkglTestCase_011395_1, VkglTestCase_011395_2);

#define VkglTestCase_011396_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011396_2 "ad_store.cube.load_store.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011396, VkglTestCase_011396_1, VkglTestCase_011396_2);

#define VkglTestCase_011397_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011397_2 "e.cube.load_store.rgba8ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011397, VkglTestCase_011397_1, VkglTestCase_011397_2);

#define VkglTestCase_011398_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011398_2 "oad_store.cube.load_store.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011398, VkglTestCase_011398_1, VkglTestCase_011398_2);

#define VkglTestCase_011399_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011399_2 "re.cube.load_store.r32ui_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011399, VkglTestCase_011399_1, VkglTestCase_011399_2);

#define VkglTestCase_011400_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011400_2 "ad_store.cube.load_store.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011400, VkglTestCase_011400_1, VkglTestCase_011400_2);

#define VkglTestCase_011401_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011401_2 "e.cube.load_store.rgba32i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011401, VkglTestCase_011401_1, VkglTestCase_011401_2);

#define VkglTestCase_011402_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011402_2 "ad_store.cube.load_store.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011402, VkglTestCase_011402_1, VkglTestCase_011402_2);

#define VkglTestCase_011403_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011403_2 "e.cube.load_store.rgba16i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011403, VkglTestCase_011403_1, VkglTestCase_011403_2);

#define VkglTestCase_011404_1 "dEQP-GLES31.functional.image_lo"
#define VkglTestCase_011404_2 "ad_store.cube.load_store.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011404, VkglTestCase_011404_1, VkglTestCase_011404_2);

#define VkglTestCase_011405_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011405_2 "re.cube.load_store.rgba8i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011405, VkglTestCase_011405_1, VkglTestCase_011405_2);

#define VkglTestCase_011406_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011406_2 "oad_store.cube.load_store.r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011406, VkglTestCase_011406_1, VkglTestCase_011406_2);

#define VkglTestCase_011407_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011407_2 "ore.cube.load_store.r32i_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011407, VkglTestCase_011407_1, VkglTestCase_011407_2);

#define VkglTestCase_011408_1 "dEQP-GLES31.functional.image_l"
#define VkglTestCase_011408_2 "oad_store.cube.load_store.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011408, VkglTestCase_011408_1, VkglTestCase_011408_2);

#define VkglTestCase_011409_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011409_2 "re.cube.load_store.rgba8_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011409, VkglTestCase_011409_1, VkglTestCase_011409_2);

#define VkglTestCase_011410_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011410_2 "_store.cube.load_store.rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011410, VkglTestCase_011410_1, VkglTestCase_011410_2);

#define VkglTestCase_011411_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011411_2 "cube.load_store.rgba8_snorm_single_layer"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011411, VkglTestCase_011411_1, VkglTestCase_011411_2);
