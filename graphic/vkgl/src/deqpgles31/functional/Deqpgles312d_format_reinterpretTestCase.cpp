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

#define VkglTestCase_011294_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011294_2 ".2d.format_reinterpret.rgba32f_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011294, VkglTestCase_011294_1, VkglTestCase_011294_2);

#define VkglTestCase_011295_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011295_2 "e.2d.format_reinterpret.rgba32f_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011295, VkglTestCase_011295_1, VkglTestCase_011295_2);

#define VkglTestCase_011296_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011296_2 ".2d.format_reinterpret.rgba16f_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011296, VkglTestCase_011296_1, VkglTestCase_011296_2);

#define VkglTestCase_011297_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011297_2 "e.2d.format_reinterpret.rgba16f_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011297, VkglTestCase_011297_1, VkglTestCase_011297_2);

#define VkglTestCase_011298_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011298_2 "re.2d.format_reinterpret.r32f_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011298, VkglTestCase_011298_1, VkglTestCase_011298_2);

#define VkglTestCase_011299_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011299_2 "ore.2d.format_reinterpret.r32f_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011299, VkglTestCase_011299_1, VkglTestCase_011299_2);

#define VkglTestCase_011300_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011300_2 "ore.2d.format_reinterpret.r32f_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011300, VkglTestCase_011300_1, VkglTestCase_011300_2);

#define VkglTestCase_011301_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011301_2 "tore.2d.format_reinterpret.r32f_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011301, VkglTestCase_011301_1, VkglTestCase_011301_2);

#define VkglTestCase_011302_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011302_2 "ore.2d.format_reinterpret.r32f_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011302, VkglTestCase_011302_1, VkglTestCase_011302_2);

#define VkglTestCase_011303_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011303_2 ".2d.format_reinterpret.r32f_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011303, VkglTestCase_011303_1, VkglTestCase_011303_2);

#define VkglTestCase_011304_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011304_2 ".2d.format_reinterpret.rgba32ui_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011304, VkglTestCase_011304_1, VkglTestCase_011304_2);

#define VkglTestCase_011305_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011305_2 ".2d.format_reinterpret.rgba32ui_rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011305, VkglTestCase_011305_1, VkglTestCase_011305_2);

#define VkglTestCase_011306_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011306_2 ".2d.format_reinterpret.rgba16ui_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011306, VkglTestCase_011306_1, VkglTestCase_011306_2);

#define VkglTestCase_011307_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011307_2 ".2d.format_reinterpret.rgba16ui_rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011307, VkglTestCase_011307_1, VkglTestCase_011307_2);

#define VkglTestCase_011308_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011308_2 "re.2d.format_reinterpret.rgba8ui_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011308, VkglTestCase_011308_1, VkglTestCase_011308_2);

#define VkglTestCase_011309_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011309_2 "re.2d.format_reinterpret.rgba8ui_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011309, VkglTestCase_011309_1, VkglTestCase_011309_2);

#define VkglTestCase_011310_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011310_2 "e.2d.format_reinterpret.rgba8ui_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011310, VkglTestCase_011310_1, VkglTestCase_011310_2);

#define VkglTestCase_011311_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011311_2 "re.2d.format_reinterpret.rgba8ui_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011311, VkglTestCase_011311_1, VkglTestCase_011311_2);

#define VkglTestCase_011312_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011312_2 "re.2d.format_reinterpret.rgba8ui_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011312, VkglTestCase_011312_1, VkglTestCase_011312_2);

#define VkglTestCase_011313_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011313_2 "2d.format_reinterpret.rgba8ui_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011313, VkglTestCase_011313_1, VkglTestCase_011313_2);

#define VkglTestCase_011314_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011314_2 "ore.2d.format_reinterpret.r32ui_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011314, VkglTestCase_011314_1, VkglTestCase_011314_2);

#define VkglTestCase_011315_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011315_2 "re.2d.format_reinterpret.r32ui_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011315, VkglTestCase_011315_1, VkglTestCase_011315_2);

#define VkglTestCase_011316_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011316_2 "re.2d.format_reinterpret.r32ui_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011316, VkglTestCase_011316_1, VkglTestCase_011316_2);

#define VkglTestCase_011317_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011317_2 "ore.2d.format_reinterpret.r32ui_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011317, VkglTestCase_011317_1, VkglTestCase_011317_2);

#define VkglTestCase_011318_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011318_2 "ore.2d.format_reinterpret.r32ui_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011318, VkglTestCase_011318_1, VkglTestCase_011318_2);

#define VkglTestCase_011319_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011319_2 ".2d.format_reinterpret.r32ui_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011319, VkglTestCase_011319_1, VkglTestCase_011319_2);

#define VkglTestCase_011320_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011320_2 "e.2d.format_reinterpret.rgba32i_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011320, VkglTestCase_011320_1, VkglTestCase_011320_2);

#define VkglTestCase_011321_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011321_2 ".2d.format_reinterpret.rgba32i_rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011321, VkglTestCase_011321_1, VkglTestCase_011321_2);

#define VkglTestCase_011322_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011322_2 "e.2d.format_reinterpret.rgba16i_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011322, VkglTestCase_011322_1, VkglTestCase_011322_2);

#define VkglTestCase_011323_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011323_2 ".2d.format_reinterpret.rgba16i_rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011323, VkglTestCase_011323_1, VkglTestCase_011323_2);

#define VkglTestCase_011324_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011324_2 "ore.2d.format_reinterpret.rgba8i_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011324, VkglTestCase_011324_1, VkglTestCase_011324_2);

#define VkglTestCase_011325_1 "dEQP-GLES31.functional.image_load_stor"
#define VkglTestCase_011325_2 "e.2d.format_reinterpret.rgba8i_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011325, VkglTestCase_011325_1, VkglTestCase_011325_2);

#define VkglTestCase_011326_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011326_2 "re.2d.format_reinterpret.rgba8i_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011326, VkglTestCase_011326_1, VkglTestCase_011326_2);

#define VkglTestCase_011327_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011327_2 "ore.2d.format_reinterpret.rgba8i_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011327, VkglTestCase_011327_1, VkglTestCase_011327_2);

#define VkglTestCase_011328_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011328_2 "re.2d.format_reinterpret.rgba8i_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011328, VkglTestCase_011328_1, VkglTestCase_011328_2);

#define VkglTestCase_011329_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011329_2 "2d.format_reinterpret.rgba8i_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011329, VkglTestCase_011329_1, VkglTestCase_011329_2);

#define VkglTestCase_011330_1 "dEQP-GLES31.functional.image_load_s"
#define VkglTestCase_011330_2 "tore.2d.format_reinterpret.r32i_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011330, VkglTestCase_011330_1, VkglTestCase_011330_2);

#define VkglTestCase_011331_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011331_2 "re.2d.format_reinterpret.r32i_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011331, VkglTestCase_011331_1, VkglTestCase_011331_2);

#define VkglTestCase_011332_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011332_2 "ore.2d.format_reinterpret.r32i_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011332, VkglTestCase_011332_1, VkglTestCase_011332_2);

#define VkglTestCase_011333_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011333_2 "ore.2d.format_reinterpret.r32i_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011333, VkglTestCase_011333_1, VkglTestCase_011333_2);

#define VkglTestCase_011334_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011334_2 "ore.2d.format_reinterpret.r32i_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011334, VkglTestCase_011334_1, VkglTestCase_011334_2);

#define VkglTestCase_011335_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011335_2 ".2d.format_reinterpret.r32i_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011335, VkglTestCase_011335_1, VkglTestCase_011335_2);

#define VkglTestCase_011336_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011336_2 "ore.2d.format_reinterpret.rgba8_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011336, VkglTestCase_011336_1, VkglTestCase_011336_2);

#define VkglTestCase_011337_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011337_2 "re.2d.format_reinterpret.rgba8_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011337, VkglTestCase_011337_1, VkglTestCase_011337_2);

#define VkglTestCase_011338_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011338_2 "ore.2d.format_reinterpret.rgba8_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011338, VkglTestCase_011338_1, VkglTestCase_011338_2);

#define VkglTestCase_011339_1 "dEQP-GLES31.functional.image_load_sto"
#define VkglTestCase_011339_2 "re.2d.format_reinterpret.rgba8_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011339, VkglTestCase_011339_1, VkglTestCase_011339_2);

#define VkglTestCase_011340_1 "dEQP-GLES31.functional.image_load_st"
#define VkglTestCase_011340_2 "ore.2d.format_reinterpret.rgba8_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011340, VkglTestCase_011340_1, VkglTestCase_011340_2);

#define VkglTestCase_011341_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011341_2 ".2d.format_reinterpret.rgba8_rgba8_snorm"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011341, VkglTestCase_011341_1, VkglTestCase_011341_2);

#define VkglTestCase_011342_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011342_2 ".2d.format_reinterpret.rgba8_snorm_r32f"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011342, VkglTestCase_011342_1, VkglTestCase_011342_2);

#define VkglTestCase_011343_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011343_2 "2d.format_reinterpret.rgba8_snorm_rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011343, VkglTestCase_011343_1, VkglTestCase_011343_2);

#define VkglTestCase_011344_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011344_2 ".2d.format_reinterpret.rgba8_snorm_r32ui"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011344, VkglTestCase_011344_1, VkglTestCase_011344_2);

#define VkglTestCase_011345_1 "dEQP-GLES31.functional.image_load_store."
#define VkglTestCase_011345_2 "2d.format_reinterpret.rgba8_snorm_rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011345, VkglTestCase_011345_1, VkglTestCase_011345_2);

#define VkglTestCase_011346_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011346_2 ".2d.format_reinterpret.rgba8_snorm_r32i"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011346, VkglTestCase_011346_1, VkglTestCase_011346_2);

#define VkglTestCase_011347_1 "dEQP-GLES31.functional.image_load_store"
#define VkglTestCase_011347_2 ".2d.format_reinterpret.rgba8_snorm_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011347, VkglTestCase_011347_1, VkglTestCase_011347_2);
