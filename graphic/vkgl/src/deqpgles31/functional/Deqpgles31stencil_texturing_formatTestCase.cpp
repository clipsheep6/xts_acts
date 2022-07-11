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
#include "../ActsDeqpgles310013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012264_1 "dEQP-GLES31.functional.stencil_tex"
#define VkglTestCase_012264_2 "turing.format.depth32f_stencil8_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012264, VkglTestCase_012264_1, VkglTestCase_012264_2);

#define VkglTestCase_012265_1 "dEQP-GLES31.functional.stencil_textur"
#define VkglTestCase_012265_2 "ing.format.depth32f_stencil8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012265, VkglTestCase_012265_1, VkglTestCase_012265_2);

#define VkglTestCase_012266_1 "dEQP-GLES31.functional.stencil_text"
#define VkglTestCase_012266_2 "uring.format.depth32f_stencil8_cube"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012266, VkglTestCase_012266_1, VkglTestCase_012266_2);

#define VkglTestCase_012267_1 "dEQP-GLES31.functional.stencil_te"
#define VkglTestCase_012267_2 "xturing.format.depth24_stencil8_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012267, VkglTestCase_012267_1, VkglTestCase_012267_2);

#define VkglTestCase_012268_1 "dEQP-GLES31.functional.stencil_textu"
#define VkglTestCase_012268_2 "ring.format.depth24_stencil8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012268, VkglTestCase_012268_1, VkglTestCase_012268_2);

#define VkglTestCase_012269_1 "dEQP-GLES31.functional.stencil_tex"
#define VkglTestCase_012269_2 "turing.format.depth24_stencil8_cube"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012269, VkglTestCase_012269_1, VkglTestCase_012269_2);

#define VkglTestCase_012270_1 "dEQP-GLES31.functional.stencil_t"
#define VkglTestCase_012270_2 "exturing.format.stencil_index8_2d"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012270, VkglTestCase_012270_1, VkglTestCase_012270_2);

#define VkglTestCase_012271_1 "dEQP-GLES31.functional.stencil_text"
#define VkglTestCase_012271_2 "uring.format.stencil_index8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012271, VkglTestCase_012271_1, VkglTestCase_012271_2);

#define VkglTestCase_012272_1 "dEQP-GLES31.functional.stencil_te"
#define VkglTestCase_012272_2 "xturing.format.stencil_index8_cube"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012272, VkglTestCase_012272_1, VkglTestCase_012272_2);
