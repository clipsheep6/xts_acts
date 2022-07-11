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
#include "../ActsDeqpgles310016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015331_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015331_2 "re.texture_2d.depth_stencil_mode_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015331, VkglTestCase_015331_1, VkglTestCase_015331_2);

#define VkglTestCase_015332_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015332_2 "ure.texture_2d.depth_stencil_mode_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015332, VkglTestCase_015332_1, VkglTestCase_015332_2);

#define VkglTestCase_015333_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015333_2 "re.texture_2d.depth_stencil_mode_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015333, VkglTestCase_015333_1, VkglTestCase_015333_2);

#define VkglTestCase_015334_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015334_2 "e.texture_2d.depth_stencil_mode_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015334, VkglTestCase_015334_1, VkglTestCase_015334_2);

#define VkglTestCase_015335_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015335_2 "re.texture_2d.texture_srgb_decode_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015335, VkglTestCase_015335_1, VkglTestCase_015335_2);

#define VkglTestCase_015336_1 "dEQP-GLES31.functional.state_query.text"
#define VkglTestCase_015336_2 "ure.texture_2d.texture_srgb_decode_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015336, VkglTestCase_015336_1, VkglTestCase_015336_2);

#define VkglTestCase_015337_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015337_2 "e.texture_2d.texture_srgb_decode_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015337, VkglTestCase_015337_1, VkglTestCase_015337_2);

#define VkglTestCase_015338_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015338_2 "e.texture_2d.texture_srgb_decode_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015338, VkglTestCase_015338_1, VkglTestCase_015338_2);

#define VkglTestCase_015339_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015339_2 "e.texture_2d.texture_border_color_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015339, VkglTestCase_015339_1, VkglTestCase_015339_2);

#define VkglTestCase_015340_1 "dEQP-GLES31.functional.state_query.textu"
#define VkglTestCase_015340_2 "re.texture_2d.texture_border_color_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015340, VkglTestCase_015340_1, VkglTestCase_015340_2);

#define VkglTestCase_015341_1 "dEQP-GLES31.functional.state_query.textur"
#define VkglTestCase_015341_2 "e.texture_2d.texture_border_color_pure_int"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015341, VkglTestCase_015341_1, VkglTestCase_015341_2);

#define VkglTestCase_015342_1 "dEQP-GLES31.functional.state_query.texture"
#define VkglTestCase_015342_2 ".texture_2d.texture_border_color_pure_uint"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015342, VkglTestCase_015342_1, VkglTestCase_015342_2);

#define VkglTestCase_015343_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015343_2 "ture_2d.texture_wrap_s_clamp_to_border_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015343, VkglTestCase_015343_1, VkglTestCase_015343_2);

#define VkglTestCase_015344_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015344_2 "xture_2d.texture_wrap_s_clamp_to_border_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015344, VkglTestCase_015344_1, VkglTestCase_015344_2);

#define VkglTestCase_015345_1 "dEQP-GLES31.functional.state_query.texture.tex"
#define VkglTestCase_015345_2 "ture_2d.texture_wrap_t_clamp_to_border_integer"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015345, VkglTestCase_015345_1, VkglTestCase_015345_2);

#define VkglTestCase_015346_1 "dEQP-GLES31.functional.state_query.texture.te"
#define VkglTestCase_015346_2 "xture_2d.texture_wrap_t_clamp_to_border_float"
SHRINK_HWTEST_F(ActsDeqpgles310016TestSuite, TestCase_015346, VkglTestCase_015346_1, VkglTestCase_015346_2);
