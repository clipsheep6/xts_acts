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
#include "../ActsDeqpgles310018TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_017629_1 "dEQP-GLES31.functional.blend_equ"
#define VkglTestCase_017629_2 "ation_advanced.coherent.multiply"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017629, VkglTestCase_017629_1, VkglTestCase_017629_2);

#define VkglTestCase_017630_1 "dEQP-GLES31.functional.blend_eq"
#define VkglTestCase_017630_2 "uation_advanced.coherent.screen"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017630, VkglTestCase_017630_1, VkglTestCase_017630_2);

#define VkglTestCase_017631_1 "dEQP-GLES31.functional.blend_eq"
#define VkglTestCase_017631_2 "uation_advanced.coherent.overlay"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017631, VkglTestCase_017631_1, VkglTestCase_017631_2);

#define VkglTestCase_017632_1 "dEQP-GLES31.functional.blend_eq"
#define VkglTestCase_017632_2 "uation_advanced.coherent.darken"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017632, VkglTestCase_017632_1, VkglTestCase_017632_2);

#define VkglTestCase_017633_1 "dEQP-GLES31.functional.blend_eq"
#define VkglTestCase_017633_2 "uation_advanced.coherent.lighten"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017633, VkglTestCase_017633_1, VkglTestCase_017633_2);

#define VkglTestCase_017634_1 "dEQP-GLES31.functional.blend_equa"
#define VkglTestCase_017634_2 "tion_advanced.coherent.colordodge"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017634, VkglTestCase_017634_1, VkglTestCase_017634_2);

#define VkglTestCase_017635_1 "dEQP-GLES31.functional.blend_equ"
#define VkglTestCase_017635_2 "ation_advanced.coherent.colorburn"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017635, VkglTestCase_017635_1, VkglTestCase_017635_2);

#define VkglTestCase_017636_1 "dEQP-GLES31.functional.blend_equ"
#define VkglTestCase_017636_2 "ation_advanced.coherent.hardlight"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017636, VkglTestCase_017636_1, VkglTestCase_017636_2);

#define VkglTestCase_017637_1 "dEQP-GLES31.functional.blend_equ"
#define VkglTestCase_017637_2 "ation_advanced.coherent.softlight"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017637, VkglTestCase_017637_1, VkglTestCase_017637_2);

#define VkglTestCase_017638_1 "dEQP-GLES31.functional.blend_equa"
#define VkglTestCase_017638_2 "tion_advanced.coherent.difference"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017638, VkglTestCase_017638_1, VkglTestCase_017638_2);

#define VkglTestCase_017639_1 "dEQP-GLES31.functional.blend_equ"
#define VkglTestCase_017639_2 "ation_advanced.coherent.exclusion"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017639, VkglTestCase_017639_1, VkglTestCase_017639_2);

#define VkglTestCase_017640_1 "dEQP-GLES31.functional.blend_eq"
#define VkglTestCase_017640_2 "uation_advanced.coherent.hsl_hue"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017640, VkglTestCase_017640_1, VkglTestCase_017640_2);

#define VkglTestCase_017641_1 "dEQP-GLES31.functional.blend_equati"
#define VkglTestCase_017641_2 "on_advanced.coherent.hsl_saturation"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017641, VkglTestCase_017641_1, VkglTestCase_017641_2);

#define VkglTestCase_017642_1 "dEQP-GLES31.functional.blend_equ"
#define VkglTestCase_017642_2 "ation_advanced.coherent.hsl_color"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017642, VkglTestCase_017642_1, VkglTestCase_017642_2);

#define VkglTestCase_017643_1 "dEQP-GLES31.functional.blend_equati"
#define VkglTestCase_017643_2 "on_advanced.coherent.hsl_luminosity"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017643, VkglTestCase_017643_1, VkglTestCase_017643_2);
