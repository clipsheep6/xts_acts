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

#define VkglTestCase_033103_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_"
#define VkglTestCase_033103_2 "eac_rg11.rg11_eac_signed_rg11_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033103, VkglTestCase_033103_1, VkglTestCase_033103_2);

#define VkglTestCase_033104_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass"
#define VkglTestCase_033104_2 "_eac_rg11.rg11_eac_signed_rg11_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033104, VkglTestCase_033104_1, VkglTestCase_033104_2);

#define VkglTestCase_033105_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass"
#define VkglTestCase_033105_2 "_eac_rg11.rg11_eac_signed_rg11_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033105, VkglTestCase_033105_1, VkglTestCase_033105_2);

#define VkglTestCase_033106_1 "dEQP-GLES31.functional.copy_image.compressed.viewclas"
#define VkglTestCase_033106_2 "s_eac_rg11.rg11_eac_signed_rg11_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033106, VkglTestCase_033106_1, VkglTestCase_033106_2);
