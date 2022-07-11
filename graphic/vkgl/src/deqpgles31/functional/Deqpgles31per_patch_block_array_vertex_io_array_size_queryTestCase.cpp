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
#include "../ActsDeqpgles310009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008282_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per"
#define VkglTestCase_008282_2 "_patch_block_array.vertex_io_array_size_query.triangles"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008282, VkglTestCase_008282_1, VkglTestCase_008282_2);

#define VkglTestCase_008283_1 "dEQP-GLES31.functional.tessellation.user_defined_io.p"
#define VkglTestCase_008283_2 "er_patch_block_array.vertex_io_array_size_query.quads"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008283, VkglTestCase_008283_1, VkglTestCase_008283_2);

#define VkglTestCase_008284_1 "dEQP-GLES31.functional.tessellation.user_defined_io.pe"
#define VkglTestCase_008284_2 "r_patch_block_array.vertex_io_array_size_query.isolines"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008284, VkglTestCase_008284_1, VkglTestCase_008284_2);
