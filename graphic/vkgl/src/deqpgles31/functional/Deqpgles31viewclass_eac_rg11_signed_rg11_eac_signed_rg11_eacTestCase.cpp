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

#define VkglTestCase_033111_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_eac_"
#define VkglTestCase_033111_2 "rg11.signed_rg11_eac_signed_rg11_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033111, VkglTestCase_033111_1, VkglTestCase_033111_2);

#define VkglTestCase_033112_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_eac"
#define VkglTestCase_033112_2 "_rg11.signed_rg11_eac_signed_rg11_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033112, VkglTestCase_033112_1, VkglTestCase_033112_2);

#define VkglTestCase_033113_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_eac"
#define VkglTestCase_033113_2 "_rg11.signed_rg11_eac_signed_rg11_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033113, VkglTestCase_033113_1, VkglTestCase_033113_2);

#define VkglTestCase_033114_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_ea"
#define VkglTestCase_033114_2 "c_rg11.signed_rg11_eac_signed_rg11_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033114, VkglTestCase_033114_1, VkglTestCase_033114_2);
