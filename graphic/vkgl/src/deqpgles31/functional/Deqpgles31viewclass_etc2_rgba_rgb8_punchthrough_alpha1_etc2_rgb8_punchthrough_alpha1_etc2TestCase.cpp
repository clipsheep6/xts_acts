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
#include "../ActsDeqpgles310034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033131_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_etc2_rgba.rgb8_pun"
#define VkglTestCase_033131_2 "chthrough_alpha1_etc2_rgb8_punchthrough_alpha1_etc2.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033131, VkglTestCase_033131_1, VkglTestCase_033131_2);

#define VkglTestCase_033132_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_etc2_rgba.rgb8_pu"
#define VkglTestCase_033132_2 "nchthrough_alpha1_etc2_rgb8_punchthrough_alpha1_etc2.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033132, VkglTestCase_033132_1, VkglTestCase_033132_2);

#define VkglTestCase_033133_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_etc2_rgba.rgb8_pu"
#define VkglTestCase_033133_2 "nchthrough_alpha1_etc2_rgb8_punchthrough_alpha1_etc2.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033133, VkglTestCase_033133_1, VkglTestCase_033133_2);

#define VkglTestCase_033134_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_etc2_rgba.rgb8_p"
#define VkglTestCase_033134_2 "unchthrough_alpha1_etc2_rgb8_punchthrough_alpha1_etc2.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033134, VkglTestCase_033134_1, VkglTestCase_033134_2);
