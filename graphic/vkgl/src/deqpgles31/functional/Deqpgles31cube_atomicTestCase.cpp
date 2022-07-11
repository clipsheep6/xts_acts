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

#define VkglTestCase_011412_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011412_2 "ore.cube.atomic.exchange_r32f_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011412, VkglTestCase_011412_1, VkglTestCase_011412_2);

#define VkglTestCase_011413_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011413_2 ".cube.atomic.exchange_r32f_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011413, VkglTestCase_011413_1, VkglTestCase_011413_2);

#define VkglTestCase_011414_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011414_2 "store.cube.atomic.add_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011414, VkglTestCase_011414_1, VkglTestCase_011414_2);

#define VkglTestCase_011415_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011415_2 "re.cube.atomic.add_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011415, VkglTestCase_011415_1, VkglTestCase_011415_2);

#define VkglTestCase_011416_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011416_2 "store.cube.atomic.min_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011416, VkglTestCase_011416_1, VkglTestCase_011416_2);

#define VkglTestCase_011417_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011417_2 "re.cube.atomic.min_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011417, VkglTestCase_011417_1, VkglTestCase_011417_2);

#define VkglTestCase_011418_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011418_2 "store.cube.atomic.max_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011418, VkglTestCase_011418_1, VkglTestCase_011418_2);

#define VkglTestCase_011419_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011419_2 "re.cube.atomic.max_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011419, VkglTestCase_011419_1, VkglTestCase_011419_2);

#define VkglTestCase_011420_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011420_2 "store.cube.atomic.and_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011420, VkglTestCase_011420_1, VkglTestCase_011420_2);

#define VkglTestCase_011421_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011421_2 "re.cube.atomic.and_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011421, VkglTestCase_011421_1, VkglTestCase_011421_2);

#define VkglTestCase_011422_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011422_2 "_store.cube.atomic.or_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011422, VkglTestCase_011422_1, VkglTestCase_011422_2);

#define VkglTestCase_011423_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011423_2 "ore.cube.atomic.or_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011423, VkglTestCase_011423_1, VkglTestCase_011423_2);

#define VkglTestCase_011424_1 "dEQP-GLES31.functional.image_load_"
#define VkglTestCase_011424_2 "store.cube.atomic.xor_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011424, VkglTestCase_011424_1, VkglTestCase_011424_2);

#define VkglTestCase_011425_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011425_2 "re.cube.atomic.xor_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011425, VkglTestCase_011425_1, VkglTestCase_011425_2);

#define VkglTestCase_011426_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011426_2 "ore.cube.atomic.exchange_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011426, VkglTestCase_011426_1, VkglTestCase_011426_2);

#define VkglTestCase_011427_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011427_2 ".cube.atomic.exchange_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011427, VkglTestCase_011427_1, VkglTestCase_011427_2);

#define VkglTestCase_011428_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011428_2 "re.cube.atomic.comp_swap_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011428, VkglTestCase_011428_1, VkglTestCase_011428_2);

#define VkglTestCase_011429_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011429_2 "_store.cube.atomic.add_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011429, VkglTestCase_011429_1, VkglTestCase_011429_2);

#define VkglTestCase_011430_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011430_2 "ore.cube.atomic.add_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011430, VkglTestCase_011430_1, VkglTestCase_011430_2);

#define VkglTestCase_011431_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011431_2 "_store.cube.atomic.min_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011431, VkglTestCase_011431_1, VkglTestCase_011431_2);

#define VkglTestCase_011432_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011432_2 "ore.cube.atomic.min_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011432, VkglTestCase_011432_1, VkglTestCase_011432_2);

#define VkglTestCase_011433_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011433_2 "_store.cube.atomic.max_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011433, VkglTestCase_011433_1, VkglTestCase_011433_2);

#define VkglTestCase_011434_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011434_2 "ore.cube.atomic.max_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011434, VkglTestCase_011434_1, VkglTestCase_011434_2);

#define VkglTestCase_011435_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011435_2 "_store.cube.atomic.and_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011435, VkglTestCase_011435_1, VkglTestCase_011435_2);

#define VkglTestCase_011436_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011436_2 "ore.cube.atomic.and_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011436, VkglTestCase_011436_1, VkglTestCase_011436_2);

#define VkglTestCase_011437_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011437_2 "_store.cube.atomic.or_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011437, VkglTestCase_011437_1, VkglTestCase_011437_2);

#define VkglTestCase_011438_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011438_2 "ore.cube.atomic.or_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011438, VkglTestCase_011438_1, VkglTestCase_011438_2);

#define VkglTestCase_011439_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011439_2 "_store.cube.atomic.xor_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011439, VkglTestCase_011439_1, VkglTestCase_011439_2);

#define VkglTestCase_011440_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011440_2 "ore.cube.atomic.xor_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011440, VkglTestCase_011440_1, VkglTestCase_011440_2);

#define VkglTestCase_011441_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011441_2 "ore.cube.atomic.exchange_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011441, VkglTestCase_011441_1, VkglTestCase_011441_2);

#define VkglTestCase_011442_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011442_2 ".cube.atomic.exchange_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011442, VkglTestCase_011442_1, VkglTestCase_011442_2);

#define VkglTestCase_011443_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011443_2 "ore.cube.atomic.comp_swap_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011443, VkglTestCase_011443_1, VkglTestCase_011443_2);
