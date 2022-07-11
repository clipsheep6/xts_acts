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
#include "../ActsDeqpgles310021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020529_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020529_2 "m.location.default_block.array.opaque_type.sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020529, VkglTestCase_020529_1, VkglTestCase_020529_2);

#define VkglTestCase_020530_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020530_2 ".location.default_block.array.opaque_type.sampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020530, VkglTestCase_020530_1, VkglTestCase_020530_2);

#define VkglTestCase_020531_1 "dEQP-GLES31.functional.program_interface_query.uniform.l"
#define VkglTestCase_020531_2 "ocation.default_block.array.opaque_type.sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020531, VkglTestCase_020531_1, VkglTestCase_020531_2);

#define VkglTestCase_020532_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020532_2 "m.location.default_block.array.opaque_type.sampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020532, VkglTestCase_020532_1, VkglTestCase_020532_2);

#define VkglTestCase_020533_1 "dEQP-GLES31.functional.program_interface_query.uniform.l"
#define VkglTestCase_020533_2 "ocation.default_block.array.opaque_type.sampler_2d_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020533, VkglTestCase_020533_1, VkglTestCase_020533_2);

#define VkglTestCase_020534_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020534_2 "m.location.default_block.array.opaque_type.isampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020534, VkglTestCase_020534_1, VkglTestCase_020534_2);

#define VkglTestCase_020535_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020535_2 "m.location.default_block.array.opaque_type.usampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020535, VkglTestCase_020535_1, VkglTestCase_020535_2);

#define VkglTestCase_020536_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020536_2 ".location.default_block.array.opaque_type.sampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020536, VkglTestCase_020536_1, VkglTestCase_020536_2);

#define VkglTestCase_020537_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020537_2 "location.default_block.array.opaque_type.isampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020537, VkglTestCase_020537_1, VkglTestCase_020537_2);

#define VkglTestCase_020538_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020538_2 "rm.location.default_block.array.opaque_type.image_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020538, VkglTestCase_020538_1, VkglTestCase_020538_2);

#define VkglTestCase_020539_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020539_2 "location.default_block.array.opaque_type.iimage_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020539, VkglTestCase_020539_1, VkglTestCase_020539_2);

#define VkglTestCase_020540_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020540_2 "rm.location.default_block.array.opaque_type.uimage_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020540, VkglTestCase_020540_1, VkglTestCase_020540_2);

#define VkglTestCase_020541_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020541_2 "m.location.default_block.array.opaque_type.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020541, VkglTestCase_020541_1, VkglTestCase_020541_2);
