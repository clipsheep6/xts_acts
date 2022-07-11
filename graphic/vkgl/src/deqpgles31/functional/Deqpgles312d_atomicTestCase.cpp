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

#define VkglTestCase_011255_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011255_2 "tore.2d.atomic.exchange_r32f_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011255, VkglTestCase_011255_1, VkglTestCase_011255_2);

#define VkglTestCase_011256_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011256_2 "e.2d.atomic.exchange_r32f_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011256, VkglTestCase_011256_1, VkglTestCase_011256_2);

#define VkglTestCase_011257_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011257_2 "_store.2d.atomic.add_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011257, VkglTestCase_011257_1, VkglTestCase_011257_2);

#define VkglTestCase_011258_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011258_2 "ore.2d.atomic.add_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011258, VkglTestCase_011258_1, VkglTestCase_011258_2);

#define VkglTestCase_011259_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011259_2 "_store.2d.atomic.min_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011259, VkglTestCase_011259_1, VkglTestCase_011259_2);

#define VkglTestCase_011260_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011260_2 "ore.2d.atomic.min_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011260, VkglTestCase_011260_1, VkglTestCase_011260_2);

#define VkglTestCase_011261_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011261_2 "_store.2d.atomic.max_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011261, VkglTestCase_011261_1, VkglTestCase_011261_2);

#define VkglTestCase_011262_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011262_2 "ore.2d.atomic.max_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011262, VkglTestCase_011262_1, VkglTestCase_011262_2);

#define VkglTestCase_011263_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011263_2 "_store.2d.atomic.and_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011263, VkglTestCase_011263_1, VkglTestCase_011263_2);

#define VkglTestCase_011264_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011264_2 "ore.2d.atomic.and_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011264, VkglTestCase_011264_1, VkglTestCase_011264_2);

#define VkglTestCase_011265_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011265_2 "d_store.2d.atomic.or_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011265, VkglTestCase_011265_1, VkglTestCase_011265_2);

#define VkglTestCase_011266_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011266_2 "tore.2d.atomic.or_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011266, VkglTestCase_011266_1, VkglTestCase_011266_2);

#define VkglTestCase_011267_1 "dEQP-GLES31.functional.image_load"
#define VkglTestCase_011267_2 "_store.2d.atomic.xor_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011267, VkglTestCase_011267_1, VkglTestCase_011267_2);

#define VkglTestCase_011268_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011268_2 "ore.2d.atomic.xor_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011268, VkglTestCase_011268_1, VkglTestCase_011268_2);

#define VkglTestCase_011269_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011269_2 "tore.2d.atomic.exchange_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011269, VkglTestCase_011269_1, VkglTestCase_011269_2);

#define VkglTestCase_011270_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011270_2 "e.2d.atomic.exchange_r32ui_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011270, VkglTestCase_011270_1, VkglTestCase_011270_2);

#define VkglTestCase_011271_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011271_2 "ore.2d.atomic.comp_swap_r32ui_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011271, VkglTestCase_011271_1, VkglTestCase_011271_2);

#define VkglTestCase_011272_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011272_2 "d_store.2d.atomic.add_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011272, VkglTestCase_011272_1, VkglTestCase_011272_2);

#define VkglTestCase_011273_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011273_2 "tore.2d.atomic.add_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011273, VkglTestCase_011273_1, VkglTestCase_011273_2);

#define VkglTestCase_011274_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011274_2 "d_store.2d.atomic.min_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011274, VkglTestCase_011274_1, VkglTestCase_011274_2);

#define VkglTestCase_011275_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011275_2 "tore.2d.atomic.min_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011275, VkglTestCase_011275_1, VkglTestCase_011275_2);

#define VkglTestCase_011276_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011276_2 "d_store.2d.atomic.max_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011276, VkglTestCase_011276_1, VkglTestCase_011276_2);

#define VkglTestCase_011277_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011277_2 "tore.2d.atomic.max_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011277, VkglTestCase_011277_1, VkglTestCase_011277_2);

#define VkglTestCase_011278_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011278_2 "d_store.2d.atomic.and_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011278, VkglTestCase_011278_1, VkglTestCase_011278_2);

#define VkglTestCase_011279_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011279_2 "tore.2d.atomic.and_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011279, VkglTestCase_011279_1, VkglTestCase_011279_2);

#define VkglTestCase_011280_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011280_2 "d_store.2d.atomic.or_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011280, VkglTestCase_011280_1, VkglTestCase_011280_2);

#define VkglTestCase_011281_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011281_2 "tore.2d.atomic.or_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011281, VkglTestCase_011281_1, VkglTestCase_011281_2);

#define VkglTestCase_011282_1 "dEQP-GLES31.functional.image_loa"
#define VkglTestCase_011282_2 "d_store.2d.atomic.xor_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011282, VkglTestCase_011282_1, VkglTestCase_011282_2);

#define VkglTestCase_011283_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011283_2 "tore.2d.atomic.xor_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011283, VkglTestCase_011283_1, VkglTestCase_011283_2);

#define VkglTestCase_011284_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011284_2 "tore.2d.atomic.exchange_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011284, VkglTestCase_011284_1, VkglTestCase_011284_2);

#define VkglTestCase_011285_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011285_2 "e.2d.atomic.exchange_r32i_return_value"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011285, VkglTestCase_011285_1, VkglTestCase_011285_2);

#define VkglTestCase_011286_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011286_2 "tore.2d.atomic.comp_swap_r32i_result"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011286, VkglTestCase_011286_1, VkglTestCase_011286_2);
