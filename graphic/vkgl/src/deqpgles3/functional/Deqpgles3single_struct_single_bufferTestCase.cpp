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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035212_1 "dEQP-GLES3.functional.ubo.single_struct.s"
#define VkglTestCase_035212_2 "ingle_buffer.shared_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035212, VkglTestCase_035212_1, VkglTestCase_035212_2);

#define VkglTestCase_035213_1 "dEQP-GLES3.functional.ubo.single_struct.si"
#define VkglTestCase_035213_2 "ngle_buffer.shared_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035213, VkglTestCase_035213_1, VkglTestCase_035213_2);

#define VkglTestCase_035214_1 "dEQP-GLES3.functional.ubo.single_struct."
#define VkglTestCase_035214_2 "single_buffer.shared_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035214, VkglTestCase_035214_1, VkglTestCase_035214_2);

#define VkglTestCase_035215_1 "dEQP-GLES3.functional.ubo.single_struct.s"
#define VkglTestCase_035215_2 "ingle_buffer.packed_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035215, VkglTestCase_035215_1, VkglTestCase_035215_2);

#define VkglTestCase_035216_1 "dEQP-GLES3.functional.ubo.single_struct.si"
#define VkglTestCase_035216_2 "ngle_buffer.packed_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035216, VkglTestCase_035216_1, VkglTestCase_035216_2);

#define VkglTestCase_035217_1 "dEQP-GLES3.functional.ubo.single_struct.s"
#define VkglTestCase_035217_2 "ingle_buffer.std140_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035217, VkglTestCase_035217_1, VkglTestCase_035217_2);

#define VkglTestCase_035218_1 "dEQP-GLES3.functional.ubo.single_struct.si"
#define VkglTestCase_035218_2 "ngle_buffer.std140_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035218, VkglTestCase_035218_1, VkglTestCase_035218_2);

#define VkglTestCase_035219_1 "dEQP-GLES3.functional.ubo.single_struct."
#define VkglTestCase_035219_2 "single_buffer.std140_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035219, VkglTestCase_035219_1, VkglTestCase_035219_2);
