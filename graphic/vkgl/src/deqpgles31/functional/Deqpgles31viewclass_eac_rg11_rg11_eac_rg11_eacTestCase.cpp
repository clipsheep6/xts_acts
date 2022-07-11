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

#define VkglTestCase_033099_1 "dEQP-GLES31.functional.copy_image.compressed.viewcla"
#define VkglTestCase_033099_2 "ss_eac_rg11.rg11_eac_rg11_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033099, VkglTestCase_033099_1, VkglTestCase_033099_2);

#define VkglTestCase_033100_1 "dEQP-GLES31.functional.copy_image.compressed.viewcl"
#define VkglTestCase_033100_2 "ass_eac_rg11.rg11_eac_rg11_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033100, VkglTestCase_033100_1, VkglTestCase_033100_2);

#define VkglTestCase_033101_1 "dEQP-GLES31.functional.copy_image.compressed.viewcl"
#define VkglTestCase_033101_2 "ass_eac_rg11.rg11_eac_rg11_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033101, VkglTestCase_033101_1, VkglTestCase_033101_2);

#define VkglTestCase_033102_1 "dEQP-GLES31.functional.copy_image.compressed.viewc"
#define VkglTestCase_033102_2 "lass_eac_rg11.rg11_eac_rg11_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033102, VkglTestCase_033102_1, VkglTestCase_033102_2);
