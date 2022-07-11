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
#include "../ActsDeqpgles310032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031365_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031365_2 "iewclass_24_bits.rgb8i_srgb8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031365, VkglTestCase_031365_1, VkglTestCase_031365_2);

#define VkglTestCase_031366_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031366_2 "iewclass_24_bits.rgb8i_srgb8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031366, VkglTestCase_031366_1, VkglTestCase_031366_2);

#define VkglTestCase_031367_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031367_2 "viewclass_24_bits.rgb8i_srgb8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031367, VkglTestCase_031367_1, VkglTestCase_031367_2);

#define VkglTestCase_031368_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031368_2 "class_24_bits.rgb8i_srgb8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031368, VkglTestCase_031368_1, VkglTestCase_031368_2);

#define VkglTestCase_031369_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031369_2 "iewclass_24_bits.rgb8i_srgb8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031369, VkglTestCase_031369_1, VkglTestCase_031369_2);

#define VkglTestCase_031370_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031370_2 "iewclass_24_bits.rgb8i_srgb8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031370, VkglTestCase_031370_1, VkglTestCase_031370_2);

#define VkglTestCase_031371_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031371_2 "viewclass_24_bits.rgb8i_srgb8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031371, VkglTestCase_031371_1, VkglTestCase_031371_2);

#define VkglTestCase_031372_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031372_2 "class_24_bits.rgb8i_srgb8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031372, VkglTestCase_031372_1, VkglTestCase_031372_2);

#define VkglTestCase_031373_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031373_2 "viewclass_24_bits.rgb8i_srgb8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031373, VkglTestCase_031373_1, VkglTestCase_031373_2);

#define VkglTestCase_031374_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031374_2 "viewclass_24_bits.rgb8i_srgb8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031374, VkglTestCase_031374_1, VkglTestCase_031374_2);

#define VkglTestCase_031375_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031375_2 ".viewclass_24_bits.rgb8i_srgb8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031375, VkglTestCase_031375_1, VkglTestCase_031375_2);

#define VkglTestCase_031376_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031376_2 "wclass_24_bits.rgb8i_srgb8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031376, VkglTestCase_031376_1, VkglTestCase_031376_2);

#define VkglTestCase_031377_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031377_2 "class_24_bits.rgb8i_srgb8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031377, VkglTestCase_031377_1, VkglTestCase_031377_2);

#define VkglTestCase_031378_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031378_2 "class_24_bits.rgb8i_srgb8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031378, VkglTestCase_031378_1, VkglTestCase_031378_2);

#define VkglTestCase_031379_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031379_2 "wclass_24_bits.rgb8i_srgb8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031379, VkglTestCase_031379_1, VkglTestCase_031379_2);

#define VkglTestCase_031380_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031380_2 "ss_24_bits.rgb8i_srgb8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031380, VkglTestCase_031380_1, VkglTestCase_031380_2);
