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
#include "../ActsDeqpgles310024TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_023235_1 "dEQP-GLES31.functional.program_interface_query.transform_fee"
#define VkglTestCase_023235_2 "dback_varying.type.vertex_tess_geo_fragment.whole_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023235, VkglTestCase_023235_1, VkglTestCase_023235_2);

#define VkglTestCase_023236_1 "dEQP-GLES31.functional.program_interface_query.transform_fe"
#define VkglTestCase_023236_2 "edback_varying.type.vertex_tess_geo_fragment.whole_array.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023236, VkglTestCase_023236_1, VkglTestCase_023236_2);

#define VkglTestCase_023237_1 "dEQP-GLES31.functional.program_interface_query.transform_fee"
#define VkglTestCase_023237_2 "dback_varying.type.vertex_tess_geo_fragment.whole_array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023237, VkglTestCase_023237_1, VkglTestCase_023237_2);

#define VkglTestCase_023238_1 "dEQP-GLES31.functional.program_interface_query.transform_fee"
#define VkglTestCase_023238_2 "dback_varying.type.vertex_tess_geo_fragment.whole_array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023238, VkglTestCase_023238_1, VkglTestCase_023238_2);

#define VkglTestCase_023239_1 "dEQP-GLES31.functional.program_interface_query.transform_fee"
#define VkglTestCase_023239_2 "dback_varying.type.vertex_tess_geo_fragment.whole_array.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023239, VkglTestCase_023239_1, VkglTestCase_023239_2);

#define VkglTestCase_023240_1 "dEQP-GLES31.functional.program_interface_query.transform_fee"
#define VkglTestCase_023240_2 "dback_varying.type.vertex_tess_geo_fragment.whole_array.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023240, VkglTestCase_023240_1, VkglTestCase_023240_2);

#define VkglTestCase_023241_1 "dEQP-GLES31.functional.program_interface_query.transform_feed"
#define VkglTestCase_023241_2 "back_varying.type.vertex_tess_geo_fragment.whole_array.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023241, VkglTestCase_023241_1, VkglTestCase_023241_2);
