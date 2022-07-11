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

#define VkglTestCase_033091_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass"
#define VkglTestCase_033091_2 "_eac_r11.signed_r11_eac_r11_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033091, VkglTestCase_033091_1, VkglTestCase_033091_2);

#define VkglTestCase_033092_1 "dEQP-GLES31.functional.copy_image.compressed.viewclas"
#define VkglTestCase_033092_2 "s_eac_r11.signed_r11_eac_r11_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033092, VkglTestCase_033092_1, VkglTestCase_033092_2);

#define VkglTestCase_033093_1 "dEQP-GLES31.functional.copy_image.compressed.viewclas"
#define VkglTestCase_033093_2 "s_eac_r11.signed_r11_eac_r11_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033093, VkglTestCase_033093_1, VkglTestCase_033093_2);

#define VkglTestCase_033094_1 "dEQP-GLES31.functional.copy_image.compressed.viewcla"
#define VkglTestCase_033094_2 "ss_eac_r11.signed_r11_eac_r11_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033094, VkglTestCase_033094_1, VkglTestCase_033094_2);
