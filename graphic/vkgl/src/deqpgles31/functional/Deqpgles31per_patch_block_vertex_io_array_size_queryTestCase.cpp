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

#define VkglTestCase_008273_1 "dEQP-GLES31.functional.tessellation.user_defined_io."
#define VkglTestCase_008273_2 "per_patch_block.vertex_io_array_size_query.triangles"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008273, VkglTestCase_008273_1, VkglTestCase_008273_2);

#define VkglTestCase_008274_1 "dEQP-GLES31.functional.tessellation.user_defined_i"
#define VkglTestCase_008274_2 "o.per_patch_block.vertex_io_array_size_query.quads"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008274, VkglTestCase_008274_1, VkglTestCase_008274_2);

#define VkglTestCase_008275_1 "dEQP-GLES31.functional.tessellation.user_defined_io"
#define VkglTestCase_008275_2 ".per_patch_block.vertex_io_array_size_query.isolines"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008275, VkglTestCase_008275_1, VkglTestCase_008275_2);
